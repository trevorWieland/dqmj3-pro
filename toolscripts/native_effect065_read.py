import argparse
import hashlib
import json
import os
import subprocess
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / 'work/native-effect065'


def pin(path):
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': path.stat().st_size,
            'sha256': hashlib.sha256(path.read_bytes()).hexdigest()}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('prefix')
    parser.add_argument('addresses', nargs='+')
    args = parser.parse_args()
    if args.prefix != Path(args.prefix).name:
        raise ValueError('Private output must remain in owned effect lane')
    output = WORK / (args.prefix + '.private-c.txt')
    if output.exists():
        raise ValueError('Preserve original reference measurement')
    for name in ['settings', 'cache', 'home']:
        (WORK / 'ghidra-runtime' / name).mkdir(parents=True, exist_ok=True)
    environment = dict(os.environ)
    jdk = ROOT / 'tools/app-shell-jdk25'
    environment.update(JAVA_HOME=str(jdk), JAVA_HOME_OVERRIDE=str(jdk),
        JAVA_TOOL_OPTIONS=' '.join('-D' + key + '=' + str(WORK / 'ghidra-runtime' / name)
            for key, name in [('application.settingsdir', 'settings'), ('application.cachedir', 'cache'),
                              ('user.home', 'home')]) + ' -XX:ActiveProcessorCount=2')
    script = ROOT / 'toolscripts/native_effect065_read.java'
    argv = [ROOT / 'tools/formal-audit-wave002/ghidra_12.2_PUBLIC/support/analyzeHeadless.bat',
        ROOT / 'work/native-inventory-seeded/update-20261106-170108/project', 'J3SeededUpdate',
        '-process', 'code.bin', '-readOnly', '-noanalysis', '-scriptPath', script.parent,
        '-postScript', script.name, output, *args.addresses]
    log = WORK / (args.prefix + '.private-log.txt')
    with log.open('wb') as stream:
        run = subprocess.run(list(map(str, argv)), cwd=ROOT, env=environment, stdout=stream,
            stderr=subprocess.STDOUT, timeout=240, creationflags=subprocess.CREATE_NO_WINDOW)
    receipt = {'exitCode': run.returncode, 'argv': list(map(str, argv)),
        'producer': pin(Path(__file__)), 'script': pin(script), 'log': pin(log),
        'output': pin(output) if output.exists() else None,
        'archiveProjectImageOrToolCopied': False, 'sourceCreditGranted': 0,
        'privateOriginalDecompilationNotAuthoredSource': True}
    (WORK / (args.prefix + '-run.json')).write_text(json.dumps(receipt, indent=2) + '\n')
    print(json.dumps({'exitCode': run.returncode, 'outputPresent': output.exists()}))


if __name__ == '__main__':
    main()
