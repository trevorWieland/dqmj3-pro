import hashlib
import json
from pathlib import Path

import functional_report
from native_material_wave011_build import pin, save


ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'evidence/lanes/squirrel-generator-release008-functional'


def main():
    ready = ROOT / 'evidence/lanes/squirrel-generator-release008/ready.json'
    if hashlib.sha256(ready.read_bytes()).hexdigest() != 'b01a7f74775289ff41f27c3a273111a1fb34d7ac162992b3f75cffa07801d6ce':
        raise ValueError('Frozen generator008 receipt changed')
    for row in json.loads(ready.read_text())['files']:
        if hashlib.sha256((ROOT / row['path']).read_bytes()).hexdigest() != row['sha256']:
            raise ValueError('Frozen generator008 input changed')
    execution_path = ready.with_name('execution.json')
    execution = json.loads(execution_path.read_text())
    if execution['cases'] != 48 or not execution['all76OriginalInstructionsVisited']:
        raise ValueError('Generator qualification is incomplete')
    inventory = json.loads((ROOT / 'evidence/inventory/update-content0.json').read_text())
    functions = []
    for row in execution['completeBodies']:
        functions.append({'symbol': 'fn_' + format(row['entry'], '08x'),
            'canonicalIdentity': {'programId': inventory['programId'], 'moduleSha256': execution['moduleSha256'],
                'address': row['entry'], 'mode': 'ARM'},
            'source': pin(ROOT / 'source/squirrel-wave008/generator_release.c'),
            'functionalConfidence': 'medium', 'exactObjectSpan': False, 'exactLinkedSpan': False,
            'originalInstructionBytes': row['instructionBytes'], 'originalPoolBytes': row['poolBytes'],
            'behavior': {'allPassed': True, 'directCases': 24, 'familyCases': 48,
                'execution': pin(execution_path), 'actualWindowsExecuted': True,
                'actualAndroidObjectsCpuModelExecuted': True, 'deviceExecuted': False,
                'wholeArmHeapAndOrderedObserversCompared': True,
                'sixCompiledNormallyReturningControlsRejected': True,
                'sameFinalStateWeakReadOrderNegativeRejected': True,
                'qualifiedDomain': 'valid aligned bounded generator ownership and returning callbacks; explicit C deallocation service',
                'excludedDomains': ['allocator recovery', 'garbage collection', 'malformed or racing objects',
                    'other unrecovered class finalizers', 'whole VM', 'device or game execution']}})
    packet = {'schemaVersion': 1, 'moduleSha256': execution['moduleSha256'], 'acceptedSourceCreditGranted': 0,
        'status': 'proposal-for-coordinator-review-only', 'functions': functions,
        'headers': [pin(ROOT / path) for path in ['source/squirrel-wave008/generator_release.h',
            'source/squirrel-wave007/array_release.h', 'source/squirrel-wave004/call_views.h',
            'source/squirrel-wave002/array_views.h', 'src/native/wave005/vm_views.h']],
        'frozenReady': pin(ready), 'newRegistryAdmissionGranted': False, 'exactMatchingClaim': False,
        'borrowedHelperAndArrayInstructionCredit': 0}
    save(OUT / 'proof.json', packet)
    registry = {'schemaVersion': 1, 'version': 'update-content0', 'programId': inventory['programId'],
        'moduleSha256': execution['moduleSha256'], 'census': pin(ROOT / functional_report.CENSUS),
        'scope': 'Proposed bounded working nonmatching C; two medium confidence functions; zero matching-source admission',
        'functions': [{'name': row['symbol'], 'confidence': 'medium', 'packet': pin(OUT / 'proof.json'),
            'sourceLookup': 'repository-function-index'} for row in functions]}
    save(OUT / 'registry-proposal.json', registry)
    report_path = ROOT / 'build/update-content0/report.json'
    result = functional_report.generate(ROOT, json.loads(report_path.read_text()), registry)
    if result != {'functions': [{'name': 'fn_00202dcc', 'confidence': 'medium'},
            {'name': 'fn_00202e68', 'confidence': 'medium'}]}:
        raise ValueError('Proposed functional companion differs')
    save(OUT / 'validation.json', {'schemaVersion': 1, 'proposalOnly': True,
        'functionalReportGeneratePassedAgainstActualLocalReport': True, 'report': pin(report_path),
        'generatedCompanion': result, 'productionRegistryEdited': False, 'sourceCreditGranted': 0,
        'reproduction': ['tools/python/Scripts/python.exe', 'toolscripts/squirrel_lifetime_functional_proposal.py']})
    save(OUT / 'ready.json', {'schemaVersion': 1, 'status': 'proposed-functional-packet-ready-for-review',
        'files': [pin(OUT / name) for name in ['proof.json', 'registry-proposal.json', 'validation.json']] + [pin(Path(__file__))],
        'sourceCreditGranted': 0, 'productionRegistryEdited': False})
    print(json.dumps({'proposalFunctions': 2, 'confidence': 'medium', 'functionalSchemaAndActualReportPassed': True,
        'ready': pin(OUT / 'ready.json')}))


if __name__ == '__main__':
    main()
