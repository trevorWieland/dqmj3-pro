import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from native_sampled_key053_measure import pin
import functional_report


packet_path = ROOT / 'evidence/lanes/native-sampled-key053/stage-v1/packet.json'
packet = json.loads(packet_path.read_text())
census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
census = json.loads(census_path.read_text())
by_address = {row['address']: row for row in census['functions']}
inventory = json.loads((ROOT / 'evidence/inventory/update-content0.json').read_text())
output = ROOT / 'evidence/lanes/native-sampled-key053/review'
output.mkdir(parents=True, exist_ok=True)
rows = []
for row in packet['functions']:
    address = row['entry']
    original = by_address[address]
    entry_range = next(span for span in original['ranges']
                       if span['start'] <= address < span['endExclusive'])
    filename = 'floor.c' if address == 0x6FA358 else 'entries.c'
    rows.append({
        'symbol': f'fn_{address:08x}',
        'canonicalIdentity': {'version': 'update-content0', 'programId': inventory['programId'],
                              'module': 'main', 'moduleSha256': packet['moduleSha256'],
                              'address': address, 'mode': 'ARM'},
        'source': pin(ROOT / 'src/native/wave053' / filename),
        'sourceName': f'fn_{address:08x}',
        'originalInstructionBytes': original['textBodyBytes'],
        'originalInstructionRanges': original['ranges'],
        'reportEntryBytes': entry_range['endExclusive'] - address,
        'exactObjectSpan': False, 'exactLinkedSpan': False,
        'functionalConfidence': 'medium',
        'behavior': {
            'allPassed': True,
            'domain': 'Exact frozen053 finite fixtures and explicit caller/FPU/unsafe-input exclusions; no universal or caller-reachability claim.',
            'segmentCasesPerMethod': 0 if address == 0x6FA358 else 576,
            'floorBitPatterns': 3072 if address == 0x6FA358 else 0,
            'allCanonicalInstructionPcsObserved': True},
        'entrySourceArmFunction': row['sourceArmFunction'],
        'sourceDependencyClosure': 'Shared ordinary C key decoder, search, boundary handling and coefficient construction; entry wrappers genuinely link the complete source graph.'})
proposal = {
    'schemaVersion': 1,
    'status': 'proposed-bounded-functional-cohort-awaiting-independent-coordinator-review',
    'moduleSha256': packet['moduleSha256'], 'version': 'update-content0',
    'programId': inventory['programId'], 'acceptedSourceCreditGranted': 0,
    'matchingSourceCreditGranted': 0, 'functions': rows,
    'headers': [pin(ROOT / 'src/native/wave053/sampled_key.h')],
    'sourceDependencies': [pin(path) for path in sorted((ROOT / 'src/native/wave053').glob('*.c'))],
    'behaviorPacket': pin(packet_path),
    'verification': pin(packet_path.parent / 'verification.json'),
    'frozenCandidateManifest': pin(packet_path.parent / 'frozen-manifest.json'),
    'reviewScope': 'No selector/game reachability, animation identity, arbitrary unsafe inputs, FPU exception-state, AndroidOS/device or whole-game credit.'}
proposal_path = output / 'functional-proposal.json'
proposal_path.write_text(json.dumps(proposal, indent=2) + '\n')
registry = {
    'schemaVersion': 1, 'version': 'update-content0', 'moduleSha256': packet['moduleSha256'],
    'programId': inventory['programId'], 'census': pin(census_path),
    'functions': [{'name': row['symbol'], 'confidence': 'medium',
                   'packet': pin(proposal_path), 'sourceLookup': 'repository-function-index'}
                  for row in rows]}
report_path = ROOT / 'build/update-content0/report.json'
result = functional_report.generate(ROOT, json.loads(report_path.read_text()), registry)
verification = {
    'status': 'proposed-functional-schema-validated-against-existing-local-report-not-admission',
    'proposal': pin(proposal_path), 'reportObservedAtValidation': {
        'generatedPath': report_path.relative_to(ROOT).as_posix(),
        'sha256': pin(report_path)['sha256'], 'bytes': report_path.stat().st_size,
        'historicalReceiptOnlyNotRetainedArtifact': True},
    'functions': len(result['functions']),
    'instructionBytes': sum(row['originalInstructionBytes'] for row in rows), 'workerCreditGranted': 0}
(output / 'proposal-verification.json').write_text(json.dumps(verification, indent=2) + '\n')
print(json.dumps(verification))
