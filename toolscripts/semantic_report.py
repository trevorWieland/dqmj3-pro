import argparse
import hashlib
import json
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def checked(record):
    path = (ROOT / record['path']).resolve(strict=True)
    if not path.is_relative_to(ROOT) or digest(path) != record['sha256']:
        raise ValueError('Semantic evidence missing, changed or outside the project')
    return path


def accepted_functions():
    recovery = json.loads((ROOT / 'recovery.json').read_text())
    entries = {}
    for record in recovery['acceptedCohorts']:
        receipt = json.loads(checked(record).read_text())
        if receipt['status'] != 'accepted':
            raise ValueError('Semantic record refers to unaccepted source')
        for row in receipt['functions']:
            key = (row['programId'], row['moduleSha256'], row['address'], row['mode'])
            if key in entries:
                raise ValueError('Accepted source has duplicate canonical identities')
            source = (ROOT / row['sourcePath']).resolve(strict=True)
            if not source.is_relative_to(ROOT) or digest(source) != row['sourceSha256']:
                raise ValueError('Accepted source changed before semantic review')
            entries[key] = row
    if len(entries) != recovery['acceptedRecoveredFunctions']:
        raise ValueError('Semantic inventory and accepted ledger disagree')
    return entries


def validate(registry):
    accepted = accepted_functions()
    for evidence in registry['evidence']:
        checked(evidence)
    identities, names = set(), set()
    for row in registry['records']:
        identity = row['canonicalIdentity']
        key = tuple(identity[field] for field in ('programId', 'moduleSha256', 'address', 'mode'))
        if key not in accepted or key in identities:
            raise ValueError('Semantic identity absent, ambiguous or from another build')
        identities.add(key)
        if row['canonicalSymbol'] != accepted[key]['symbol']:
            raise ValueError('Semantic alias lost the original address anchor')
        if row['sourceSha256'] != accepted[key]['sourceSha256']:
            raise ValueError('Semantic record uses stale accepted source')
        alias = row['proposedName']
        scoped_name = key[:2] + (alias,)
        if not alias.isidentifier() or scoped_name in names:
            raise ValueError('Semantic alias invalid or collides in the build')
        names.add(scoped_name)
        if row['status'] != 'supported-proposal' or row['originalHistoricalNameKnown']:
            raise ValueError('This registry admits evidence-backed proposals, not unproved historical names')
        if row['sourceRenameApplied'] or not row['evidenceReasons'] or not row['remainingQuestions']:
            raise ValueError('Proposal must retain source identity, evidence and explicit unknowns')
    return {'schemaVersion': 1, 'status': 'semantic-proposals-validated',
            'acceptedSourceFunctions': len(accepted), 'documentedFunctionProposals': len(identities),
            'acceptedFunctionsWithoutSemanticRecords': len(accepted) - len(identities),
            'sourceNamesChanged': False, 'sourceCreditChanged': False, 'understandingPercent': None,
            'records': registry['records'],
            'limits': ['Evidence hashes establish provenance, not semantic truth',
                       'Descriptive operation names do not establish original names or gameplay meaning',
                       'Naming counts are investigation leads, not completeness or understanding scores']}


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--registry', type=Path, default=ROOT / 'config/semantic-names.json')
    parser.add_argument('--output', type=Path, default=ROOT / 'evidence/semantics/report.json')
    args = parser.parse_args()
    report = validate(json.loads(args.registry.read_text()))
    output = args.output.resolve()
    if not output.is_relative_to(ROOT):
        raise ValueError('Semantic report output must remain in the project')
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({key: value for key, value in report.items() if key not in ('records', 'limits')}))
