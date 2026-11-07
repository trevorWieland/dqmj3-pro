import argparse
import json
import shutil
import subprocess
import sys
from pathlib import Path
from squirrel_type_error025 import ROOT,record
from squirrel_source_wave002 import sha


def replay(report_path,copy_root):
    report_path=report_path.resolve();copy_root=copy_root.resolve()
    if not report_path.is_relative_to(ROOT/'work/squirrel-type-error025')or not copy_root.is_relative_to(ROOT/'work/squirrel-type-error025'):raise ValueError('025 replay stays private')
    if copy_root.exists():raise ValueError('025 saved replay root must be new')
    report=json.loads(report_path.read_text(encoding='utf-8'))
    if report['status']!='bounded-actual-native-type-error025-qualified'or len(report['negativeControls'])!=13:raise ValueError('025 replay requires complete primary qualification')
    for item in report['inputs']:
        if record(ROOT/item['path'])!=item:raise ValueError('025 primary source changed before copy')
    paths={item['path']for item in report['inputs']}
    paths|={path.relative_to(ROOT).as_posix()for path in(ROOT/'toolscripts').glob('*.py')}
    paths|={'generated/update-content0/code.bin','evidence/lanes/native-inventory-completion/seeded/update-census.json',
      'evidence/lanes/squirrel-type-error025/claim.json','tools/clang-21/libwinpthread-1.dll','tools/clang-21/libxml2.dll'}
    copy_root.mkdir(parents=True)
    for name in sorted(paths):
        source=ROOT/name;target=copy_root/name
        if not target.resolve().is_relative_to(copy_root):raise ValueError('025 replay copy path escaped')
        target.parent.mkdir(parents=True,exist_ok=True);shutil.copy2(source,target)
    checkpoint={'schemaVersion':1,'status':'immutable025-qualified-source-copy','primaryReportSha256':sha(report_path.read_bytes()),
      'copiedRoot':str(copy_root),'primaryRuntimeInputs':report['inputs'],
      'replayProducerSha256':sha(Path(__file__).read_bytes()),'copiedProducerSha256':sha((copy_root/'toolscripts/squirrel_type_error025.py').read_bytes())}
    (copy_root/'checkpoint.json').write_text(json.dumps(checkpoint,indent=2)+'\n',encoding='utf-8')
    shutil.copy2(report_path,copy_root/'primary-report.private.json')
    output=copy_root/'work/squirrel-type-error025/replay'
    command=[sys.executable,str(copy_root/'toolscripts/squirrel_type_error025.py'),'--output',str(output)]
    result=subprocess.run(command,cwd=copy_root,capture_output=True,timeout=2400)
    (copy_root/'replay.log').write_bytes(result.stdout+result.stderr)
    if result.returncode:raise ValueError('025 copied producer failed: '+str(copy_root/'replay.log'))
    replay_path=output/'report.json';other=json.loads(replay_path.read_text(encoding='utf-8'))
    artifacts=('armElfSha256','windowsExeSha256','a64ElfSha256')
    if any(report[key]!=other[key]for key in artifacts):raise ValueError('025 copied compiled artifacts differ')
    if report['boundaries']!=other['boundaries']:raise ValueError('025 copied coverage/floating observations differ')
    if [row['case']for row in report['cases']]!=[row['case']for row in other['cases']]:raise ValueError('025 copied corpus differs')
    for first,second in zip(report['cases'],other['cases']):
        if any(first[target]!=second[target]for target in('original','source','android')):raise ValueError('025 copied ARM/A64 semantics differ')
    tests=subprocess.run([sys.executable,'-m','unittest','discover','-s','tests','-p','test_squirrel_type_error025.py','-v'],cwd=copy_root,capture_output=True,timeout=1200)
    (copy_root/'tests.log').write_bytes(tests.stdout+tests.stderr)
    if tests.returncode:raise ValueError('025 copied tests failed')
    verification={'schemaVersion':1,'status':'fresh-copied-source025-replay-verified','primaryReportSha256':sha(report_path.read_bytes()),
      'copiedReportSha256':sha(replay_path.read_bytes()),'checkpointSha256':sha((copy_root/'checkpoint.json').read_bytes()),
      'replayProducerSha256':sha(Path(__file__).read_bytes()),'copiedProducerSha256':checkpoint['copiedProducerSha256'],
      'compiledArtifactsIdentical':{key:other[key]for key in artifacts},'originalReturns':other['originalReturns'],'sourceReturns':other['sourceReturns'],
      'windowsReturns':other['windowsReturns'],'a64ModelReturns':other['a64ModelReturns'],'returningControls':len(other['negativeControls']),
      'originalSourceAndA64ObservationsIdentical':True,'windowsIndependentlyModeledWithGenuineNativePointers':True,
      'testsPassed':True,'testsLogSha256':sha(tests.stdout+tests.stderr),'rawOriginalPayloadPublished':False,'acceptedSourceCreditGranted':0}
    (copy_root/'verification.json').write_text(json.dumps(verification,indent=2)+'\n',encoding='utf-8');return verification


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--report',type=Path,required=True);parser.add_argument('--copy-root',type=Path,required=True)
    arguments=parser.parse_args();print(json.dumps(replay(arguments.report,arguments.copy_root)))
