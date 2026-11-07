import hashlib
import json
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]


def digest(raw):
    return hashlib.sha256(raw).hexdigest()


def main():
    checkpoint = json.loads((ROOT / 'evidence/lanes/squirrel-source-wave006/checkpoint-901.json').read_text())
    source = ROOT / checkpoint['savedPrimaryPacket'] / 'report.json'
    raw = source.read_bytes()
    if digest(raw) != checkpoint['primaryReportSha256']:
        raise ValueError('Preserved private checkpoint report differs')
    report = json.loads(raw)
    scalars = {key: value for key, value in report.items() if not isinstance(value, (dict, list))}
    summary = {'schemaVersion': 1, 'kind': 'public-summary-of-private-provisional-report',
        'producerSha256': digest(Path(__file__).read_bytes()),
        'privateReportSha256': digest(raw), 'privateReportBytes': len(raw),
        'privateSourcePath': source.relative_to(ROOT).as_posix(),
        'measurements': scalars, 'sources': report['sources'],
        'compiler': report['compiler'], 'linker': report['linker'],
        'scopeDocument': report['scopeDocument'],
        'normalCases': len(report['normalCases']),
        'normalCaseRecordsSha256': digest(json.dumps(report['normalCases'], sort_keys=True).encode()),
        'negativeControls': len(report['negativeControls']),
        'negativeControlRecordsSha256': digest(json.dumps(report['negativeControls'], sort_keys=True).encode()),
        'pendingOpcodeEntries': report['pendingOpcodeEntries'],
        'additionalPendingSubpaths': report['additionalPendingSubpaths'],
        'platform': report['platform'], 'wholeRootComplete': False,
        'wholeRootSourceCreditGranted': 0, 'wholeGameBuild': False,
        'limits': checkpoint['limitations'],
        'rawPerCaseStateAndExecutionCapturesPublished': False}
    target = ROOT / 'evidence/lanes/squirrel-source-wave006/checkpoints/901/report.json'
    target.write_text(json.dumps(summary, indent=2) + '\n')
    print(json.dumps({'sourceBytes': len(raw), 'summaryBytes': target.stat().st_size,
                      'wholeRootSourceCredit': 0}))


if __name__ == '__main__':
    main()
