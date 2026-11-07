import json
import os
import struct
import subprocess
import sys
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / 'work/platform-engine-wave004'


def main():
    image = ROOT / 'work/native-ci-local-validation/private/generated/update-content0/code.bin'
    data = image.read_bytes()
    callers = []
    for offset in range(0, 7051280 - 4, 4):
        word = struct.unpack_from('<I', data, offset)[0]
        if word & 0x0f000000 != 0x0b000000:
            continue
        displacement = (word & 0xffffff) * 4
        if displacement & 0x2000000:
            displacement -= 0x4000000
        if 0x100000 + offset + 8 + displacement == 0x55492c:
            start = offset
            while start > max(0, offset - 2048):
                candidate = struct.unpack_from('<I', data, start)[0]
                if candidate & 0xffff4000 == 0xe92d4000:
                    break
                start -= 4
            callers.append({'call': hex(0x100000 + offset), 'candidateEntry': hex(0x100000 + start)})
    private = WORK / 'private'
    private.mkdir(parents=True, exist_ok=True)
    (private / 'texture-transform-callers.json').write_text(json.dumps(callers, indent=2) + '\n')
    entries = sorted({0x554a30, 0x55492c} | {int(row['candidateEntry'], 16) for row in callers} | {int(value, 0) for value in sys.argv[1:]})
    folder = WORK / 'ghidra-material-probe'
    for name in ('project', 'home', 'settings', 'cache'):
        (folder / name).mkdir(parents=True, exist_ok=True)
    environment = os.environ.copy()
    environment['JAVA_HOME'] = str(ROOT / 'tools/app-shell-jdk25')
    environment['JAVA_TOOL_OPTIONS'] = ' '.join(['-Dapplication.settingsdir=' + (folder / 'settings').as_posix(),
        '-Dapplication.cachedir=' + (folder / 'cache').as_posix(), '-Duser.home=' + (folder / 'home').as_posix(), '-XX:ActiveProcessorCount=2'])
    launcher = ROOT / 'tools/formal-audit-wave002/ghidra_12.2_PUBLIC/support/analyzeHeadless.bat'
    argv = [str(launcher), str(folder / 'project'), 'MaterialResearch', '-import', str(image), '-overwrite', '-noanalysis',
            '-loader', 'BinaryLoader', '-loader-baseAddr', '0x100000', '-processor', 'ARM:LE:32:v6', '-cspec', 'default',
            '-scriptPath', str(ROOT / 'platform/engine-wave004'), '-postScript', 'MaterialProbe.java', str(private / 'decompiled'),
            *[hex(address) for address in entries], '-max-cpu', '2', '-log', str(folder / 'analysis.log'), '-scriptlog', str(folder / 'script.log')]
    (folder / 'run.json').write_text(json.dumps({'argv': argv, 'environment': {key: environment[key] for key in ('JAVA_HOME', 'JAVA_TOOL_OPTIONS')},
        'scope': 'Private research only; no recovered-source credit; no shared project opened'}, indent=2) + '\n')
    old = folder / 'stdout.log'
    if old.exists():
        index = 1
        while (folder / ('stdout-prior-' + str(index) + '.log')).exists():
            index += 1
        old.rename(folder / ('stdout-prior-' + str(index) + '.log'))
    with old.open('wb') as output:
        result = subprocess.run(['cmd.exe', '/d', '/c', *argv], cwd=ROOT, env=environment, stdout=output, stderr=subprocess.STDOUT,
                                timeout=180, creationflags=subprocess.CREATE_NO_WINDOW)
    print(json.dumps({'exitCode': result.returncode, 'entries': entries, 'calls': callers}))
    if result.returncode:
        raise SystemExit(result.returncode)


if __name__ == '__main__':
    main()
