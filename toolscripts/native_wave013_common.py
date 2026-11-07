import hashlib
import json
import subprocess
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / 'work/wave013-native'
OUT = ROOT / 'evidence/lanes/wave013-native'
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
FLAGS = ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-O2', '-std=c11', '-ffreestanding',
         '-fno-builtin', '-ffunction-sections', '-fno-unwind-tables', '-fno-asynchronous-unwind-tables',
         '-Wall', '-Wextra', '-Werror']


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def record(path):
    return {'path': path.resolve().relative_to(ROOT).as_posix(), 'sha256': sha(path.read_bytes()), 'bytes': path.stat().st_size}


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n')


def command(arguments, log, receipts):
    result = subprocess.run([str(value) for value in arguments], capture_output=True, timeout=120)
    log.write_bytes(result.stdout + result.stderr)
    receipts.append({'argv': [str(value) for value in arguments], 'exitCode': result.returncode, 'privateLog': record(log)})
    if result.returncode or result.stderr:
        raise RuntimeError('Compiler/linker failed or emitted a diagnostic; private log retained')
