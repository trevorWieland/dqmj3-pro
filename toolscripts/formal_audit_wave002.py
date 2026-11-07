import collections
import importlib.metadata
import importlib.util
import json
import os
import random
import re
import shutil
import subprocess
import sys
import zipfile
from pathlib import Path

import cvc5
import unicorn
import z3
from z3.z3util import get_vars


ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / 'work/formal-audit-wave002'
EVIDENCE = ROOT / 'evidence/lanes/formal-audit-wave002'
sys.path.insert(0, str(ROOT / 'src/formal-audit-wave002'))
import build_and_execute as build
import pcode_model as pcode


MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
SOURCE_SHA = 'da2ca7a59e59d2126dfe9a3992453ccd112c335ccca2a4a0f7283d2d4e1e0efb'
PILOT_SHA = 'c5d94ef13bdcdc36fe5f6f608e3ef416e02bb0040021a45c28b357b513b73a06'
CONTRACT_SHA = '89d9e4a2991fb436a6b6f0392589ed4985fbe9cc11739e373a711b4012b36ff1'
CVC5_WHEEL_SHA = '0ee0a51862d9e8ae8a38572909641a88cdf8d5e1640dee481b24289b6811b9da'


def record(path):
    return build.record(ROOT, path)


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def cvc5_replay(path):
    solver = cvc5.Solver()
    if '(set-logic ' not in path.read_text():
        solver.setLogic('QF_AUFBV')
    solver.setOption('produce-models', 'true')
    solver.setOption('tlimit-per', '10000')
    parser = cvc5.InputParser(solver)
    parser.setFileInput(cvc5.InputLanguage.SMT_LIB_2_6, str(path))
    outputs = []
    while not parser.done():
        command = parser.nextCommand()
        if command.isNull():
            break
        output = command.invoke(solver, parser.getSymbolManager()).strip()
        if output:
            outputs.append(output)
    statuses = [line for line in outputs if line in ('sat', 'unsat', 'unknown')]
    if len(statuses) != 1 or any('error' in line.lower() for line in outputs):
        raise RuntimeError('Independent solver did not return one supported result')
    return {'status': statuses[0], 'outputs': outputs, 'query': record(path), 'solverVersion': solver.getVersion().decode()}


def query(folder, name, domain, bad, expected, x, get_value=False):
    solver = z3.Solver()
    solver.set(timeout=10000, random_seed=0)
    solver.add(domain, bad)
    text = '(set-logic QF_AUFBV)\n' + solver.to_smt2()
    if get_value:
        text += '(get-value (input_r0))\n'
    path = folder / (name + '.smt2')
    path.write_text(text, encoding='utf-8')
    status = str(solver.check())
    if status != expected:
        raise RuntimeError('Unexpected Z3 audit result ' + name + ': ' + status)
    independent = cvc5_replay(path)
    if independent['status'] != expected:
        raise RuntimeError('Independent solver disagrees for ' + name)
    result = {'name': name, 'z3Status': status, 'cvc5': independent, 'query': record(path)}
    if status == 'sat':
        result['z3CounterexampleX'] = solver.model().eval(x, model_completion=True).as_long()
    if get_value:
        output = '\n'.join(independent['outputs'])
        match = re.search(r'input_r0\s+#b([01]+)', output)
        if match:
            result['cvc5CounterexampleX'] = int(match.group(1), 2)
        else:
            match = re.search(r'input_r0\s+#x([0-9a-fA-F]+)', output)
            if not match:
                raise RuntimeError('Unexpected independent counterexample encoding')
            result['cvc5CounterexampleX'] = int(match.group(1), 16)
    save(folder / (name + '.result.json'), result)
    return result


def export_pcode(folder, bodies):
    prior = json.loads((ROOT / 'evidence/lanes/inventory-wave001/ghidra-run.json').read_text())
    lock = json.loads((ROOT / 'tools.lock.json').read_text())
    ghidra = ROOT / lock['formalAuditRuntime']['ghidraRoot']
    prior_ghidra = Path(prior['reproductionArgv'][0]).parents[1]
    pins = []
    for item in prior['toolFiles']:
        path = Path(item['path'])
        if '\\jdk\\' in str(path):
            path = ROOT / 'tools/app-shell-jdk25' / str(path).split('jdk-25.0.5+8\\', 1)[1]
        elif path.is_relative_to(prior_ghidra):
            path = ghidra / path.relative_to(prior_ghidra)
        else:
            raise RuntimeError('Qualified Ghidra dependency is outside the declared distribution')
        pin = record(path)
        if pin['sha256'] != item['sha256']:
            raise RuntimeError('Qualified Ghidra/JDK component changed')
        pins.append(pin)
    for name in ['ARM.sinc', 'ARMinstructions.sinc']:
        pins.append(record(ghidra / 'Ghidra/Processors/ARM/data/languages' / name))
    for name in ['project', 'home', 'settings', 'cache', 'scripts', 'export', 'inputs']:
        (folder / name).mkdir()
    java = ROOT / 'toolscripts/ghidra/FormalAuditWave002.java'
    staged_java = folder / 'scripts/FormalAuditWave002.java'
    shutil.copyfile(java, staged_java)
    paths = []
    for label, data in bodies.items():
        path = folder / 'inputs' / (label + '.bin')
        path.write_bytes(data)
        paths.append(path)
    env = os.environ.copy()
    env['JAVA_HOME'] = str(ROOT / 'tools/app-shell-jdk25')
    env['JAVA_TOOL_OPTIONS'] = ' '.join(['-Dapplication.settingsdir=' + (folder / 'settings').as_posix(),
        '-Dapplication.cachedir=' + (folder / 'cache').as_posix(), '-Duser.home=' + (folder / 'home').as_posix(), '-XX:ActiveProcessorCount=2'])
    argv = [str(ghidra / 'support/analyzeHeadless.bat'), str(folder / 'project'), 'RangePcodeAudit', '-import', *map(str, paths),
        '-loader', 'BinaryLoader', '-loader-baseAddr', hex(build.ADDRESS), '-processor', 'ARM:LE:32:v6', '-cspec', 'default',
        '-noanalysis', '-scriptPath', str(folder / 'scripts'), '-postScript', 'FormalAuditWave002.java',
        str(folder / 'export'), hex(build.ADDRESS), '20', '-max-cpu', '2', '-log', str(folder / 'analysis.log'), '-scriptlog', str(folder / 'script.log')]
    stdout = folder / 'stdout.log'
    with stdout.open('wb') as output:
        process = subprocess.Popen(['cmd.exe', '/d', '/c', *argv], cwd=ROOT, env=env,
                                   stdout=output, stderr=subprocess.STDOUT, creationflags=subprocess.CREATE_NO_WINDOW)
        try:
            exit_code = process.wait(timeout=180)
        except subprocess.TimeoutExpired:
            subprocess.run(['taskkill', '/PID', str(process.pid), '/T', '/F'], capture_output=True)
            raise
    receipt = {'argv': argv, 'processExitCode': exit_code, 'java': record(java), 'stagedJava': record(staged_java),
        'tools': pins, 'inputs': [record(path) for path in paths],
        'environment': {key: env[key] for key in ['JAVA_HOME', 'JAVA_TOOL_OPTIONS']},
        'logs': [record(folder / name) for name in ['stdout.log', 'analysis.log', 'script.log']]}
    save(folder / 'ghidra-run.json', receipt)
    exports = {}
    text = stdout.read_text(errors='replace')
    if exit_code or 'ERROR' in text or 'Exception' in text:
        raise RuntimeError('Raw P-code export process reported an error')
    for label, data in bodies.items():
        path = folder / 'export' / (label + '.bin.pcode.json')
        export = json.loads(path.read_text())
        if export['bodySha256'] != build.digest(data) or export['bodyBytes'] != 20 or export['bodyAddress'] != build.ADDRESS:
            raise RuntimeError('Actual P-code body identity/extent mismatch')
        if 'FORMAL_AUDIT_WAVE002_EXPORT_SUCCESS ' + label + '.bin 5' not in text:
            raise RuntimeError('Explicit complete P-code export marker missing')
        exports[label] = export
    return exports, receipt


def qualify_concrete(paths, initial, observation):
    substitutions = [(initial.registers[name], pcode.bv(value)) for name, value in observation['input'].items()]
    for index, name in enumerate(pcode.FLAGS):
        substitutions.append((z3.BitVec('input_' + name, 1), pcode.bv((observation['initialNzcv'] >> (3 - index)) & 1, 1)))
    def evaluated(expression):
        return z3.simplify(z3.substitute(expression, *substitutions))
    actual_paths = [state for state in paths if z3.is_true(evaluated(state.guard))]
    if len(actual_paths) != 1:
        raise RuntimeError('P-code path partition disagrees with concrete input')
    state = actual_paths[0]
    if evaluated(state.registers['r0']).as_long() != observation['output']['r0']:
        raise RuntimeError('P-code result disagrees with actual execution')
    if evaluated(state.target).as_long() != observation['returnTarget'] or z3.is_true(evaluated(state.thumb)) != observation['returnThumb']:
        raise RuntimeError('P-code return/userop bridge disagrees with actual execution')
    nzcv = sum(evaluated(state.registers[name]).as_long() << (3 - index) for index, name in enumerate(pcode.FLAGS))
    if nzcv != observation['finalNzcv']:
        raise RuntimeError('SLEIGH generic flags disagree with actual execution')
    for name in pcode.CORE:
        if evaluated(state.registers[name]).as_long() != observation['output'][name]:
            raise RuntimeError('P-code core-register effect disagrees with actual execution')
    return True


def solver_runtime():
    wheel = ROOT / 'tools/formal-audit-wave002/cvc5-1.4.2-cp313-cp313-win_amd64.whl'
    if build.digest(wheel.read_bytes()) != CVC5_WHEEL_SHA:
        raise RuntimeError('Pinned independent solver wheel mismatch')
    installed, site = [], Path(cvc5.__file__).parents[1]
    with zipfile.ZipFile(wheel) as archive:
        for name in archive.namelist():
            if name.endswith('/') or not name.startswith(('cvc5/', 'cvc5.libs/')):
                continue
            path = site / name
            if path.read_bytes() != archive.read(name):
                raise RuntimeError('Effective independent solver file differs from pinned wheel')
            installed.append(record(path))
    return {'cvc5DistributionVersion': importlib.metadata.version('cvc5'), 'cvc5CoreVersion': cvc5.Solver().getVersion().decode(),
        'cvc5Wheel': record(wheel), 'cvc5EffectiveFiles': installed, 'effectiveFilesMatchWheel': True,
        'cvc5PublicRelease': 'https://pypi.org/project/cvc5/1.4.2/', 'pypiMetadata': record(ROOT / 'tools/formal-audit-wave002/pypi-cvc5.json'),
        'z3DistributionVersion': importlib.metadata.version('z3-solver'), 'z3CoreVersion': z3.get_full_version(),
        'z3PythonFiles': [record(path) for path in sorted(Path(z3.__file__).parent.glob('*.py'))],
        'z3Dll': record(Path(z3.z3core._z3_lib_resource_path) / 'libz3.dll'),
        'unicornDistributionVersion': importlib.metadata.version('unicorn'), 'unicornCoreVersion': unicorn.uc_version(),
        'unicornDll': record(Path(unicorn.unicorn_py3.unicorn.uclib._name)), 'pythonExecutable': record(Path(sys.executable))}


def main():
    WORK.mkdir(parents=True, exist_ok=True)
    EVIDENCE.mkdir(parents=True, exist_ok=True)
    number = 1
    while (WORK / ('run-' + str(number).zfill(3))).exists():
        number += 1
    folder = WORK / ('run-' + str(number).zfill(3))
    folder.mkdir()
    for name in ('packet.json', 'runtime.json'):
        prior_output = EVIDENCE / name
        if prior_output.exists():
            prior_output.replace(folder / ('previous-' + name))
    frozen = json.loads((EVIDENCE / 'frozen-prior/manifest.json').read_text())
    pilot_path = ROOT / frozen['pilot']['path']
    if build.digest(pilot_path.read_bytes()) != PILOT_SHA:
        raise RuntimeError('Frozen prior pilot changed')
    pilot = json.loads(pilot_path.read_text())
    shutil.copyfile(pilot_path, folder / 'frozen-prior-pilot.json')
    source, original_path = ROOT / 'src/native/wave001/leaves.c', ROOT / 'generated/update-content0/code.bin'
    if build.digest(source.read_bytes()) != SOURCE_SHA or build.digest(original_path.read_bytes()) != MODULE_SHA:
        raise RuntimeError('Frozen normal source or canonical original changed')
    contract_path = ROOT / 'src/formal-wave001/c_uint_model.py'
    if build.digest(contract_path.read_bytes()) != CONTRACT_SHA:
        raise RuntimeError('Shared typed C contract changed')
    specification = importlib.util.spec_from_file_location('audit_shared_c_contract', contract_path)
    contract = importlib.util.module_from_spec(specification)
    specification.loader.exec_module(contract)
    flags, receipts = pilot['configuration'], []
    bodies = {'original': original_path.read_bytes()[build.ADDRESS - 0x100000:build.ADDRESS - 0x100000 + 20]}
    bodies['normal'], normal_ast, normal_build = build.build(ROOT, folder, source, 'normal', flags, receipts)
    bodies['wrong'], wrong_ast, wrong_build = build.build(ROOT, folder, ROOT / 'src/formal-audit-wave002/wrong_range.c', 'wrong', flags, receipts)
    if any(len(data) != 20 for data in bodies.values()) or bodies['normal'] == bodies['original']:
        raise RuntimeError('Pilot requires the measured complete nonmatching bodies')
    compiler = ROOT / 'tools/clang-21/clang.exe'
    macros = build.command(ROOT, folder, [compiler, *flags, '-dM', '-E', '-x', 'c', '-'], 'data-model', receipts, b'').decode().splitlines()
    if '#define __SIZEOF_INT__ 4' not in macros or '#define __CHAR_BIT__ 8' not in macros:
        raise RuntimeError('Unsigned int32 source premise failed')
    build.command(ROOT, folder, [compiler, *flags, '-fsyntax-only', ROOT / 'src/formal-wave001/data_model.c'], 'value-bits', receipts)
    print(json.dumps({'phase': 'fresh-builds-closed', 'run': str(folder)}), flush=True)
    exports, ghidra_run = export_pcode(folder, bodies)
    initial = pcode.initial_state()
    paths = {label: pcode.execute(export, initial) for label, export in exports.items()}
    x = initial.registers['r0']
    normal_value, c_domain = contract.translate(normal_ast, build.SYMBOL, x)
    wrong_value, _ = contract.translate(wrong_ast, build.SYMBOL, x)
    domain = pcode.domain(initial, build.ADDRESS, 20)
    if {str(value) for value in get_vars(domain)} != {'input_sp', 'input_lr', 'input_other_cpsr'}:
        raise RuntimeError('Vacuous or restricted argument/flag domain')
    proofs = []
    for label in bodies:
        expected = wrong_value if label == 'wrong' else normal_value
        proofs.append(query(folder, label + '-pcode-vs-typed-c-contract', domain, pcode.violations(paths[label], initial, expected), 'unsat', x))
        proofs.append(query(folder, label + '-all-input-path-coverage', domain, z3.Not(z3.Or(*[state.guard for state in paths[label]])), 'unsat', x))
    manual = z3.If(z3.And(z3.UGE(x, pcode.bv(1)), z3.ULE(x, pcode.bv(10))), pcode.bv(1), pcode.bv(0))
    proofs.append(query(folder, 'typed-c-vs-manual-contract', domain, normal_value != manual, 'unsat', x))
    mismatches = [z3.And(a.guard, b.guard, z3.Or(a.registers['r0'] != b.registers['r0'], a.target != b.target, a.thumb != b.thumb)) for a in paths['original'] for b in paths['normal']]
    proofs.append(query(folder, 'original-vs-source-linked-pcode', domain, z3.Or(*mismatches), 'unsat', x))
    witnesses = [query(folder, 'domain-' + ('thumb' if thumb else 'arm'), domain,
        z3.And(initial.registers['lr'] == pcode.bv(0x1000000 | int(thumb)), initial.registers['sp'] == pcode.bv(0x2001000)), 'sat', x) for thumb in (False, True)]
    wrong_mismatches = [z3.And(a.guard, b.guard, a.registers['r0'] != b.registers['r0']) for a in paths['original'] for b in paths['wrong']]
    negative = query(folder, 'compiled-wrong-source-counterexample', domain, z3.Or(*wrong_mismatches), 'sat', x, True)
    if negative['z3CounterexampleX'] != 11 or negative['cvc5CounterexampleX'] != 11:
        raise RuntimeError('Unexpected wrong-source counterexample')
    edges = [0, 1, 2, 9, 10, 11, 0x7fffffff, 0x80000000, 0x80000009, 0x8000000a, 0x8000000b, 0xfffffffe, 0xffffffff]
    contexts = {(value, flags, thumb, 0) for value in edges for flags in range(16) for thumb in (False, True)}
    rng = random.Random(0xa002)
    contexts.update((rng.getrandbits(32), rng.randrange(16), thumb, 2 if thumb else 4) for _ in range(32) for thumb in (False, True))
    observations, counterexamples = [], []
    for value, flags, thumb, delta in sorted(contexts):
        case = {}
        for label, code in bodies.items():
            observed = build.execute(code, value, flags, thumb, delta)
            qualify_concrete(paths[label], initial, observed)
            case[label] = observed
        if case['original']['output']['r0'] != case['normal']['output']['r0']:
            raise RuntimeError('Actual original/normal disagreement')
        if value == 11:
            if case['original']['output']['r0'] == case['wrong']['output']['r0']:
                raise RuntimeError('Actual returning wrong-source counterexample did not reproduce')
            counterexamples.append(case)
        observations.append(case)
    save(folder / 'concrete-qualification.json', {'cases': observations, 'counterexamples': counterexamples})
    prior_replay = []
    for row in pilot['proofs']:
        selected = [item for item in frozen['queries'] if item['originalPath'] == row['query']['path']]
        if len(selected) != 1 or selected[0]['sha256'] != row['query']['sha256']:
            raise RuntimeError('Frozen prior query is absent from the public replay capsule')
        path = ROOT / selected[0]['path']
        if build.digest(path.read_bytes()) != row['query']['sha256']:
            raise RuntimeError('Frozen prior exported query changed')
        retained = folder / ('frozen-prior-' + path.name)
        shutil.copyfile(path, retained)
        result = cvc5_replay(retained)
        result['frozenInput'] = record(path)
        result['frozenExpectedSha256'] = row['query']['sha256']
        if result['status'] != 'unsat':
            raise RuntimeError('Independent solver disagrees with frozen prior query')
        prior_replay.append(result)
    runtime_path = EVIDENCE / 'runtime.json'
    save(runtime_path, solver_runtime())
    packet = {'schemaVersion': 1, 'lane': 'formal-audit-wave002', 'status': 'research-only independent SLEIGH/P-code semantics path',
        'sourceCredit': 0, 'admissionPolicyChanged': False, 'script': record(Path(__file__)),
        'sources': [record(ROOT / 'src/formal-audit-wave002' / name) for name in ['pcode_model.py', 'build_and_execute.py', 'wrong_range.c']],
        'sharedTypedCContract': record(contract_path), 'sourceValueWidthAssertions': record(ROOT / 'src/formal-wave001/data_model.c'),
        'priorFrozenPilot': record(pilot_path), 'priorPilotSnapshot': record(folder / 'frozen-prior-pilot.json'),
        'canonicalOriginal': record(original_path), 'originalAddress': build.ADDRESS, 'originalBodyBytes': 20,
        'originalSpanSha256': build.digest(bodies['original']), 'normalBuild': normal_build, 'wrongBuild': wrong_build,
        'normalSourceUnchanged': True, 'configuration': flags, 'compiler': record(compiler), 'linker': record(ROOT / 'tools/clang-21/ld.lld.exe'),
        'buildReceipts': receipts, 'ghidraRun': ghidra_run,
        'pcodeExports': {label: record(folder / 'export' / (label + '.bin.pcode.json')) for label in bodies},
        'pcodeOperatorCounts': {label: dict(collections.Counter(op['mnemonic'] for row in export['instructions'] for op in row['operations'])) for label, export in exports.items()},
        'symbolicPaths': {label: len(value) for label, value in paths.items()}, 'sourceDefinedness': c_domain,
        'domain': 'All unsigned int32 arguments and canonical arbitrary NZCV; user-mode ARM entry, aligned SP, valid ARM/Thumb caller LR outside owned body',
        'preserved': ['r4-r11 including r9', 'SP', 'LR', 'data memory', 'CPSR bits other than NZCV/T'],
        'excludedCallerClobbers': ['r1-r3', 'r12', 'NZCV'], 'dataReads': [], 'dataWrites': [],
        'assumedUserops': [{'name': 'setISAMode', 'id': 62, 'argument': 'canonical byte TB', 'effect': 'copy TB to decoder/runtime Thumb mode only; no register or data-memory effects',
            'source': 'pinned ARM.sinc SetThumbMode/BXWritePC', 'qualification': 'actual ARM/Thumb returns and target alignment variants; still an explicitly trusted bridge'}],
        'explicitDecoderContext': {'TMode': 0, 'LRset': 0, 'REToverride': 0, 'CALLoverride': 0, 'TEEMode': 0, 'itmode': 0},
        'contextScope': 'ARM entry, no LR-setting prefix, no analysis call/return overrides, no ThumbEE/IT block; other effective context values exported without claiming arbitrary override configurations',
        'proofs': proofs, 'nonvacuousDomainWitnesses': witnesses, 'compiledWrongSourceNegative': negative,
        'concreteQualification': {'artifact': record(folder / 'concrete-qualification.json'), 'contexts': len(observations),
            'originalSourceWrongExecutions': len(observations) * 3, 'actualReturningCounterexamples': len(counterexamples),
            'coreFlagsReturnModeAndFrameAgreeWithPcode': True},
        'priorPilotIndependentSolverReplay': prior_replay, 'runtime': record(runtime_path),
        'oldArmInstructionTranslatorImportedOrCalled': False,
        'trustedBase': ['Ghidra/SLEIGH architecture semantics and raw export', 'new generic P-code-to-SMT interpreter',
            'explicit setISAMode bridge and context assumptions', 'shared Clang typed C frontend/contract whitelist',
            'Z3 AST/SMT-LIB serialization and both solvers', 'Python/runtime/files/host', 'Unicorn concrete corroboration'],
        'limitations': ['Solver agreement checks the same formula, not independent correctness of either shared translator/frontend',
            'SLEIGH and the generic P-code translator are not verified complete ARM semantics', 'No independently checked proof certificates',
            'Memory operations, unsupported userops, relative/backward/escaping branches, loops and uninitialized temps fail closed',
            'Exceptions, interrupts, timing/cache/MMU and whole-system behavior remain outside the model',
            'Decompiler no-op setISAMode fixup is not used; raw instruction P-code retains the operation'],
        'reproductionArgv': [str(ROOT / 'tools/python/Scripts/python.exe'), str(Path(__file__).resolve())]}
    save(EVIDENCE / 'packet.json', packet)
    print(json.dumps({'universalUnsatChecks': len(proofs), 'independentSolver': 'cvc5 1.4.2', 'wrongSourceInput': 11,
        'concreteContexts': len(observations), 'actualReturningNegatives': len(counterexamples), 'sourceCredit': 0}), flush=True)


if __name__ == '__main__':
    main()
