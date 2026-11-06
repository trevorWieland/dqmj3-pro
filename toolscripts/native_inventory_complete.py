import argparse
import collections
import hashlib
import importlib.util
import json
import os
import shutil
import subprocess
import time
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
EVIDENCE = ROOT / 'evidence/lanes/native-inventory-completion'
WORK = ROOT / 'work/native-inventory-completion'


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


def digest(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def pin(path):
    return {'path': path.relative_to(ROOT).as_posix(), 'sha256': digest(path), 'bytes': path.stat().st_size}


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def merge(intervals):
    result = []
    for start, end in sorted(intervals):
        if not isinstance(start, int) or not isinstance(end, int) or start >= end:
            raise ValueError('Invalid half-open interval')
        if result and start <= result[-1][1]:
            result[-1][1] = max(result[-1][1], end)
        else:
            result.append([start, end])
    return result


def complement(intervals, start, end):
    result, cursor = [], start
    for low, high in merge(intervals):
        if low < start or high > end:
            raise ValueError('Body extends beyond initialized text')
        if low > cursor:
            result.append([cursor, low])
        cursor = high
    if cursor < end:
        result.append([cursor, end])
    return result


def unpack_ranges(rows, start, end):
    intervals = []
    for row in rows:
        low, high = row['start'], row['endExclusive']
        if not isinstance(low, int) or not isinstance(high, int) or high <= low:
            raise ValueError('Empty or reversed body range')
        if low < start or high > end or row['bytes'] != high - low:
            raise ValueError('Range extent/count mismatch')
        intervals.append([low, high])
    return intervals


def summarize_census(census, code, layout):
    text = next(row for row in layout['segments'] if row['name'] == 'text')
    start, size = text['address'], text['initializedBytes']
    end = start + size
    if hashlib.sha256(code).hexdigest() != census['codeSha256'] or census['codeSha256'] != layout['codeSha256']:
        raise ValueError('Census/code/loader identity mismatch')
    if (census['initializedTextStart'], census['initializedTextGrossBytes']) != (start, size):
        raise ValueError('Census and loader text extent disagree')
    functions = census['functions']
    if len(functions) != census['functionCount']:
        raise ValueError('Function count mismatch')
    addresses, intervals, noncontiguous = set(), [], []
    total, contiguous = 0, 0
    for function in functions:
        address, mode = function['address'], function['mode']
        if address in addresses or mode not in ('ARM', 'Thumb') or address % (4 if mode == 'ARM' else 2):
            raise ValueError('Duplicate entry or unsupported mode/alignment')
        addresses.add(address)
        rows = unpack_ranges(function['ranges'], start, end)
        if not rows or not any(low <= address < high for low, high in rows):
            raise ValueError('Function body does not own its entry')
        if sum(high - low for low, high in rows) != sum(high - low for low, high in merge(rows)):
            raise ValueError('Function body ranges overlap internally')
        count = sum(high - low for low, high in rows)
        if function['textBodyBytes'] != count or function.get('bodyBytesOutsideInitializedText', 0):
            raise ValueError('Function byte accounting mismatch')
        total += count
        intervals.extend(rows)
        if len(rows) == 1:
            contiguous += count
        else:
            noncontiguous.append({'address': address, 'mode': mode, 'ranges': function['ranges'], 'bodyBytes': count})
    union = merge(intervals)
    union_bytes = sum(high - low for low, high in union)
    gaps = complement(union, start, end)
    if union_bytes != census['functionBodyUnionBytes'] or size - union_bytes != census['uncoveredBytes']:
        raise ValueError('Stored census union/gap totals disagree with independently recomputed intervals')
    if gaps != unpack_ranges(census['uncoveredRanges'], start, end):
        raise ValueError('Stored census gap ranges disagree with recomputed complement')
    unclassified = unpack_ranges(census['unclassifiedTextRanges'], start, end)
    if unclassified != merge(unclassified) or sum(high - low for low, high in unclassified) != census['unclassifiedTextBytes']:
        raise ValueError('Unclassified range accounting mismatch')
    classified_counts = [census[key] for key in ['instructionUnionBytes', 'definedDataUnionBytes', 'unclassifiedTextBytes']]
    if any(not isinstance(value, int) or value < 0 for value in classified_counts) or sum(classified_counts) != size:
        raise ValueError('Instruction/data/unclassified partition does not conserve initialized text')
    details = []
    for low, high in gaps:
        offset = text['codeBinOffset'] + low - start
        raw = code[offset:offset + high - low]
        if len(raw) != high - low:
            raise ValueError('Gap read outside verified code image')
        details.append({'start': low, 'endExclusive': high, 'bytes': high - low,
                        'sha256': hashlib.sha256(raw).hexdigest(), 'allZero': not any(raw),
                        'classification': 'unreviewed; may contain instructions, literal pools, tables or padding'})
    return {'moduleSha256': census['codeSha256'], 'initializedTextStart': start, 'initializedTextGrossBytes': size,
            'candidateFunctionCount': len(functions), 'functionModeCounts': dict(collections.Counter(row['mode'] for row in functions)),
            'candidateBodySumBytes': total, 'candidateBodyUnionBytes': union_bytes, 'sharedBodyBytes': total - union_bytes,
            'singleRangeCandidateFunctions': len(functions) - len(noncontiguous), 'singleRangeCandidateBytes': contiguous,
            'discontiguousCandidateFunctions': len(noncontiguous), 'discontiguousCandidateBytes': total - contiguous,
            'discontiguousBodies': noncontiguous, 'functionUncoveredBytes': size - union_bytes,
            'functionUncoveredRanges': details, 'allZeroUncoveredBytes': sum(row['bytes'] for row in details if row['allZero']),
            'functionUncoveredRangeCount': len(details), 'unclassifiedRangeCount': len(unclassified),
            'largestUncoveredRanges': sorted(details, key=lambda row: (-row['bytes'], row['start']))[:20],
            'definedInstructionCount': census['instructionCount'], 'definedInstructionBytes': census['instructionUnionBytes'],
            'instructionBytesOutsideFunctionBodiesLowerBound': max(0, census['instructionUnionBytes'] - union_bytes),
            'definedDataBytes': census['definedDataUnionBytes'], 'unclassifiedTextBytes': census['unclassifiedTextBytes'],
            'unclassifiedTextRanges': census['unclassifiedTextRanges'], 'partitionAccountingComplete': True,
            'semanticClassificationComplete': False, 'functionBoundariesManuallyClosed': False,
            'nativeDenominatorComplete': False, 'acceptedSourceCredit': 0}


def launch_base(analysis_budget=480, process_budget=660):
    import ghidra_inventory_wave002 as qualified
    if analysis_budget < 60 or process_budget < analysis_budget + 120:
        raise ValueError('Process budget must exceed the analysis budget by at least 120 seconds')
    WORK.mkdir(parents=True, exist_ok=True)
    folder = WORK / ('base-' + time.strftime('%Y%m%d-%H%M%S'))
    folder.mkdir()
    for name in ['project', 'home', 'settings', 'cache', 'scripts', 'export', 'inputs']:
        (folder / name).mkdir()
    metadata = read(ROOT / 'evidence/inventory/base-content0.json')
    inputs = {}
    for name, key in [('code.bin', 'codeSha256'), ('exheader.bin', 'exheaderSha256')]:
        source = ROOT / 'generated/base-content0' / name
        if digest(source) != metadata[key]:
            raise ValueError('Base Ghidra input differs from frozen loader inventory')
        target = folder / 'inputs' / name
        shutil.copyfile(source, target)
        inputs[name] = target
    native_path = ROOT / 'evidence/lanes/inventory-wave001/base-native.json'
    native = read(native_path)
    if native['codeSha256'] != metadata['codeSha256']:
        raise ValueError('Base seed program identity differs')
    manifest_path = folder / 'inputs/seeds.json'
    save(manifest_path, {'functionSeeds': native['functionSeeds'], 'input': pin(native_path),
                         'code': pin(inputs['code.bin']), 'exheader': pin(inputs['exheader.bin']),
                         'scope': 'Base-only legacy structural seeds; no update addresses transplanted'})
    tool_pins, launcher = qualified.tool_pins()
    java = ROOT / 'toolscripts/ghidra/InventoryWave002.java'
    shutil.copyfile(java, folder / 'scripts/InventoryWave002.java')
    env = os.environ.copy()
    env['JAVA_HOME'] = str(ROOT / 'tools/app-shell-jdk25')
    env['JAVA_TOOL_OPTIONS'] = ' '.join(['-Dapplication.settingsdir=' + (folder / 'settings').as_posix(),
                                      '-Dapplication.cachedir=' + (folder / 'cache').as_posix(),
                                      '-Duser.home=' + (folder / 'home').as_posix(), '-XX:ActiveProcessorCount=2'])
    arguments = [str(folder / 'export'), str(inputs['exheader.bin']), str(inputs['code.bin']), str(manifest_path)]
    argv = [str(launcher), str(folder / 'project'), 'J3BaseInventory', '-import', str(inputs['code.bin']),
            '-loader', 'BinaryLoader', '-loader-baseAddr', '0x100000', '-processor', 'ARM:LE:32:v6', '-cspec', 'default',
            '-scriptPath', str(folder / 'scripts'), '-preScript', 'InventoryWave002.java', 'prepare', *arguments,
            '-postScript', 'InventoryWave002.java', 'export', *arguments, '-analysisTimeoutPerFile', str(analysis_budget), '-max-cpu', '2',
            '-log', str(folder / 'analysis.log'), '-scriptlog', str(folder / 'script.log')]
    receipt = {'status': 'running', 'argv': argv, 'toolPins': tool_pins, 'javaSource': pin(java),
               'seedManifest': pin(manifest_path), 'analysisBudgetSeconds': analysis_budget,
               'processBudgetSeconds': process_budget, 'sourceCredit': 0, 'nativeDenominatorComplete': False}
    save(folder / 'run.json', receipt)
    print(json.dumps({'baseAnalysis': 'started', 'run': folder.relative_to(ROOT).as_posix()}), flush=True)
    started = time.monotonic()
    with (folder / 'stdout.log').open('wb') as output:
        process = subprocess.Popen(['cmd.exe', '/d', '/c', *argv], cwd=ROOT, env=env, stdout=output,
                                   stderr=subprocess.STDOUT, creationflags=subprocess.CREATE_NO_WINDOW)
        try:
            exit_code = process.wait(timeout=process_budget)
            timed_out = False
        except subprocess.TimeoutExpired:
            subprocess.run(['taskkill', '/PID', str(process.pid), '/T', '/F'], capture_output=True)
            process.wait(timeout=30)
            exit_code, timed_out = process.returncode, True
    lines = (folder / 'stdout.log').read_text(encoding='utf-8', errors='replace').splitlines()
    preparation_path = folder / 'export/preparation.json'
    preparation = read(preparation_path) if preparation_path.exists() else {}
    census_path = folder / 'export/ghidra-functions.json'
    timeout_lines = [line for line in lines if 'timed out' in line.lower() or 'analysis timeout' in line.lower()]
    success = (exit_code == 0 and not timed_out and not timeout_lines and census_path.exists()
               and preparation.get('preparationSucceeded') is True
               and preparation.get('allContextsInstalledBeforeAnyDisassembly') is True
               and preparation.get('instructionCountWhenAllContextsVerified') == 0
               and preparation.get('contextsInstalled') == len(native['functionSeeds'])
               and not preparation.get('conflicts')
               and any('INVENTORY_WAVE002_PREPARATION_SUCCESS' in line for line in lines)
               and any('INVENTORY_WAVE002_EXPORT_SUCCESS' in line for line in lines)
               and any('REPORT: Analysis succeeded for file:' in line for line in lines))
    receipt.update({'status': 'qualified-analysis-for-review' if success else 'failed-analysis-preserved',
                    'elapsedSeconds': round(time.monotonic() - started, 3), 'processExitCode': exit_code,
                    'processTimedOut': timed_out, 'analysisTimeoutObserved': bool(timeout_lines),
                    'warningLineCount': sum('warn' in line.lower() for line in lines),
                    'errorLineCount': sum('error' in line.lower() for line in lines),
                    'privateStdout': pin(folder / 'stdout.log'), 'preparationSucceeded': preparation.get('preparationSucceeded')})
    save(folder / 'run.json', receipt)
    save(EVIDENCE / 'base-analysis-run.json', receipt)
    if census_path.exists():
        census = read(census_path)
        if (census['codeSha256'], census['exheaderSha256'], census['seedManifestSha256']) != (
                metadata['codeSha256'], metadata['exheaderSha256'], digest(manifest_path)):
            raise ValueError('Base export identity changed')
        census_name = 'base-ghidra-functions.json' if success else 'base-incomplete-census.json'
        for path, name in [(census_path, census_name), (preparation_path, 'base-preparation.json'),
                           (manifest_path, 'base-seeds.json')]:
            shutil.copyfile(path, EVIDENCE / name)
    if not success:
        raise RuntimeError('Base analysis qualification failed; owned run and incomplete export preserved')


def accepted_spans(census):
    recovery = read(ROOT / 'recovery.json')
    code = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    functions = {row['address']: row for row in census['functions']}
    addresses, total, pins = set(), 0, []
    for cohort in recovery['acceptedCohorts']:
        path = ROOT / cohort['path']
        if digest(path) != cohort['sha256']:
            raise ValueError('Historical acceptance cohort hash changed')
        acceptance = read(path)
        pins.append(pin(path))
        if acceptance['moduleSha256'] != census['codeSha256']:
            raise ValueError('Acceptance and census module identities differ')
        for row in acceptance['functions']:
            address, size = row['address'], row['instructionBytes'] + row.get('poolBytes', 0)
            if address in addresses or row['mode'] != 'ARM':
                raise ValueError('Duplicate or unsupported accepted source span')
            addresses.add(address)
            actual = functions.get(address)
            if not actual or actual['mode'] != row['mode'] or actual['ranges'] != [
                    {'start': address, 'bytes': size, 'endExclusive': address + size}]:
                raise ValueError('Historical accepted body differs from census')
            if digest(ROOT / row['sourcePath']) != row['sourceSha256']:
                raise ValueError('Historical accepted C source changed')
            raw = code[address - census['initializedTextStart']:address - census['initializedTextStart'] + size]
            if len(raw) != size or hashlib.sha256(raw).hexdigest() != row['originalSpanSha256']:
                raise ValueError('Historical accepted original span changed')
            total += size
    if (len(addresses), total) != (recovery['acceptedRecoveredFunctions'], recovery['acceptedRecoveredBytes']):
        raise ValueError('Historical accepted cohort totals differ from recovery ledger')
    return {'cohorts': pins, 'functions': len(addresses), 'bytes': total, 'allSourceAndOriginalHashesAgree': True,
            'allEntriesModesAndCompleteRangesAgree': True, 'newSourceCredit': 0}


def recheck_embedded_programs(category, code):
    path = ROOT / 'src/inventory-wave003/programs.py'
    spec = importlib.util.spec_from_file_location('native_inventory_program_formats', path)
    programs = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(programs)
    shaders = []
    for row in category['mainModuleProgramLocations']:
        if row['format'] == 'DVLB':
            actual = programs.dvlb(code, row['fileOffset'])
            if actual['codeSha256'] != row['codeSha256']:
                raise ValueError('Fresh embedded shader hash differs from container audit')
            shaders.append(actual)
    for row in category['dspFirmware']:
        actual = programs.dsp(code, row['markerOffset'])
        if actual['sha256'] != row['sha256'] or actual['segments'] != row['segments']:
            raise ValueError('Fresh DSP firmware/segment checks differ from container audit')
    return {'formatReader': pin(path), 'embeddedGpuImagesFreshlyRechecked': len(shaders),
            'embeddedGpuCodeBytesFreshlyRechecked': sum(row['codeBytes'] for row in shaders),
            'dspImagesFreshlyRechecked': len(category['dspFirmware']),
            'scope': 'Fresh validated main-image reads; external shader payloads retain pinned earlier container-audit evidence'}


def relative_seeds(raw, table_start, text_start, text_end):
    if len(raw) % 4:
        raise ValueError('Relative dispatch table is not a whole number of 32-bit entries')
    result = []
    for offset in range(0, len(raw), 4):
        slot = table_start + offset
        pointer = (slot + int.from_bytes(raw[offset:offset + 4], 'little', signed=True)) & 0xffffffff
        address, mode = pointer & ~1, 'Thumb' if pointer & 1 else 'ARM'
        if not text_start <= address < text_end or address % (4 if mode == 'ARM' else 2):
            raise ValueError('Constructor target outside initialized text or incorrectly aligned')
        result.append({'tableSlot': slot, 'address': address, 'mode': mode})
    return result


def constructor_dispatch(census):
    path = EVIDENCE / 'constructor-dispatch-findings.json'
    finding = read(path)
    code = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if finding['moduleSha256'] != census['codeSha256'] or hashlib.sha256(code).hexdigest() != census['codeSha256']:
        raise ValueError('Constructor dispatch belongs to another executable')
    table, reader = finding['table'], finding['reader']
    start = census['initializedTextStart']
    raw = code[table['address'] - start:table['endExclusive'] - start]
    body = code[reader['address'] - start:reader['endExclusive'] - start]
    if hashlib.sha256(raw).hexdigest() != table['sha256'] or len(raw) != table['bytes']:
        raise ValueError('Constructor table identity/extent mismatch')
    if hashlib.sha256(body).hexdigest() != reader['sha256']:
        raise ValueError('Constructor dispatch reader identity mismatch')
    expected = relative_seeds(raw, table['address'], start, start + census['initializedTextGrossBytes'])
    observed = [{key: row[key] for key in ['tableSlot', 'address', 'mode']} for row in finding['functionSeeds']]
    if expected != observed or len(expected) != table['entries']:
        raise ValueError('Constructor seeds disagree with signed-relative slot decoding')
    functions = {row['address']: row for row in census['functions']}
    caller = functions.get(finding['startupCaller']['address'])
    if not caller or reader['address'] not in caller['calledFunctionAddresses']:
        raise ValueError('Constructor reader has no recorded startup caller')
    return {'evidence': pin(path), 'readerAddress': reader['address'], 'readerMode': reader['mode'],
            'tableAddress': table['address'], 'tableEndExclusive': table['endExclusive'], 'seedCount': len(expected),
            'seedsAbsentFromCurrentFunctionEntries': sum(row['address'] not in functions for row in expected),
            'instructionAndLiteralPoolExtentsClosed': False, 'censusRerunFromTheseSeeds': False, 'acceptedSourceCredit': 0}


def build_report():
    EVIDENCE.mkdir(parents=True, exist_ok=True)
    inputs, native = [], []
    for label, relative in [('base', 'evidence/lanes/native-inventory-completion/base-ghidra-functions.json'),
                            ('update', 'evidence/lanes/inventory-wave002/ghidra-functions.json')]:
        census_path = ROOT / relative
        incomplete = label == 'base' and not census_path.exists()
        if incomplete:
            census_path = EVIDENCE / 'base-incomplete-census.json'
        layout_path = ROOT / f'evidence/lanes/inventory-wave001/{label}-native.json'
        layout = read(layout_path)
        code_path = ROOT / f'generated/{label}-content0/code.bin'
        if census_path.exists():
            summary = summarize_census(read(census_path), code_path.read_bytes(), layout)
            summary['analysisStatus'] = 'timed-out-incomplete-census' if incomplete else 'qualified-analysis-candidates'
            if label == 'update':
                summary['historicalAcceptedSpanReconciliation'] = accepted_spans(read(census_path))
            save(EVIDENCE / (label + '-range-coverage.json'), summary)
            native.append({'label': label, 'census': pin(census_path),
                           **{key: value for key, value in summary.items() if key not in (
                               'discontiguousBodies', 'functionUncoveredRanges', 'unclassifiedTextRanges')}})
            inputs.extend([pin(census_path), pin(layout_path)])
        else:
            native.append({'label': label, 'status': 'missing-native-census', 'nativeDenominatorComplete': False})
    findings_path = ROOT / 'evidence/lanes/container-inventory-wave003/findings.json'
    findings = read(findings_path)
    inputs.append(pin(findings_path))
    loader_path = EVIDENCE / 'loader-capability-findings.json'
    loader = read(loader_path)
    for label, identity in loader['inputs'].items():
        metadata = read(ROOT / f'evidence/inventory/{label}-content0.json')
        if any(identity[key] != metadata[key] for key in ['codeSha256', 'exheaderSha256']):
            raise ValueError('Loader capability findings belong to another measured executable')
    inputs.append(pin(loader_path))
    dispatch = constructor_dispatch(read(ROOT / 'evidence/lanes/inventory-wave002/ghidra-functions.json'))
    warnings_path = ROOT / 'evidence/lanes/inventory-wave002/warnings.json'
    warnings = read(warnings_path)
    inputs.append(pin(warnings_path))
    diagnostics = {'update': {'evidence': pin(warnings_path), 'overlapRepairErrors': len(warnings['overlapRepairErrors']),
                              'uninitializedReadWarnings': len(warnings['uninitializedReadWarnings']),
                              'disposition': 'Unresolved analyzer limitations; no completeness inference'}}
    base_run_path = EVIDENCE / 'base-analysis-run.json'
    if base_run_path.exists():
        base_run = read(base_run_path)
        diagnostics['base'] = {'evidence': pin(base_run_path), 'status': base_run['status'],
                               'warningLineCount': base_run['warningLineCount'], 'errorLineCount': base_run['errorLineCount'],
                               'disposition': 'Raw analysis diagnostics remain private; hypotheses require review'}
    programs, contents = [], []
    for label in ['base', 'update']:
        category = findings['categories'][label]
        embedded = recheck_embedded_programs(category, (ROOT / f'generated/{label}-content0/code.bin').read_bytes())
        category_path = ROOT / f'evidence/lanes/container-inventory-wave003/{label}.json'
        container = read(category_path)
        inputs.append(pin(category_path))
        for content in container['contents']:
            contents.append({'label': label, **content,
                             'classification': 'main ARM image in ExeFS' if content.get('mainExecutableFreshlyExpandedFromVerifiedExeFS')
                             else 'no ExeFS entries in measured content; nested/raw payload caveats remain'})
        firmware = category['dspFirmware']
        programs.append({'label': label, 'mainArmImages': 1, 'dspFirmwareImages': len(firmware),
                         'dspProgramBytes': sum(segment['bytes'] for row in firmware for segment in row['segments'] if segment['memoryType'] == 0),
                         'gpuShaderCodeImages': category['uniqueShaderCodeImages'], 'gpuShaderCodeBytes': category['uniqueShaderCodeBytes'],
                         'gpuExecutableEntries': category['shaderExecutableEntries'],
                         'additionalQualifiedArmModules': category['qualifiedAdditionalArmModuleCandidates'],
                         'markerOnlyCandidates': category['unqualifiedMarkerOnlyHits'],
                         'opaquePayloads': category['opaqueLeafPayloads'], 'opaquePayloadBytes': category['opaqueLeafUniquePayloadBytes'],
                         'priorArchiveLayoutsStillUnclassified': len(container['previousUnresolvedStillUnclassified']),
                         'decoderResiduals': len(container['decoderResiduals'])})
        programs[-1]['embeddedProgramRecheck'] = embedded
    blockers = [
        {'id': 'unclassified-native-text', 'requiredEvidence': 'Review every uncovered/unclassified interval as instructions, literal pools, tables or padding; heuristic decoding is insufficient'},
        {'id': 'candidate-boundaries-and-modes', 'requiredEvidence': 'Close indirect targets, shared tails and discontiguous bodies against loader/caller evidence; resolve analyzer overlap errors'},
        {'id': 'raw-or-custom-executables', 'requiredEvidence': 'Both ExHeaders permit ldr:ro; resolve service-mediated/custom loading, opaque payloads and custom compression; marker absence cannot exclude unmarked code'},
        {'id': 'gpu-dsp-scope', 'requiredEvidence': 'Keep ARM, DSP and PICA shaders separate; verify runtime loading and full GPU object graphs before any whole-game denominator'},
        {'id': 'base-update-runtime-precedence', 'requiredEvidence': 'Verify executable and asset precedence rather than assuming update-first path semantics'}]
    report = {'schemaVersion': 1, 'status': 'reconciled-measured-inventory-with-explicit-open-blockers',
              'producer': pin(Path(__file__)), 'inputs': inputs, 'contents': contents, 'nativeModules': native,
              'otherExecutableCategories': programs, 'analyzerDiagnostics': diagnostics,
              'loaderCapabilityFindings': pin(loader_path), 'startupDispatchReconciliation': dispatch, 'remainingBlockers': blockers,
              'nativeDenominatorComplete': False, 'wholeExecutableInventoryComplete': False, 'acceptedSourceCredit': 0,
              'scope': 'Address-range accounting and program-category reconciliation; no recovered-source admission or completeness proof'}
    save(EVIDENCE / 'report.json', report)
    print(json.dumps({'status': report['status'], 'nativeModules': [{key: row.get(key) for key in (
        'label', 'candidateFunctionCount', 'candidateBodyUnionBytes', 'functionUncoveredBytes', 'unclassifiedTextBytes')} for row in native],
        'remainingBlockers': len(blockers), 'nativeDenominatorComplete': False}), flush=True)
    return report


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--analyze-base', action='store_true')
    parser.add_argument('--analysis-budget-seconds', type=int, default=480)
    parser.add_argument('--process-budget-seconds', type=int, default=660)
    args = parser.parse_args()
    if args.analyze_base:
        launch_base(args.analysis_budget_seconds, args.process_budget_seconds)
    build_report()


if __name__ == '__main__':
    main()
