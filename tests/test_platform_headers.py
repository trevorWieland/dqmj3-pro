"""The platform headers are freestanding and cost nothing when unused.

These tests compile the header tree the same way the source build does, once
per measured target, and inspect the object the original-image alias mode
produces. They are deliberately narrow: the behavioural contract is documented
in the headers, and the reconstruction build proves the byte-identity claim.
"""

import importlib.util
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CLANG = ROOT / 'tools/clang-21/clang.exe'
SCRATCH = ROOT / 'work/platform-header-tests'
SCRATCH.mkdir(parents=True, exist_ok=True)

SPEC = importlib.util.spec_from_file_location('platform_header_elf', ROOT / 'toolscripts/elf_objects.py')
ELF = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(ELF)

HEADERS = ['platform.h', 'memory.h', 'file.h', 'thread.h', 'time.h', 'system.h',
           'graphics.h', 'audio.h', 'input.h', 'network.h']
TARGETS = {
    'arm': ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm'],
    'windows': ['--target=x86_64-pc-windows-msvc'],
    'android': ['--target=aarch64-linux-android29'],
}
FLAGS = ['-std=c11', '-O2', '-ffreestanding', '-Wall', '-Wextra', '-Werror',
         '-fno-color-diagnostics', '-fno-caret-diagnostics']


class PlatformHeaderTests(unittest.TestCase):
    def setUp(self):
        directory = tempfile.TemporaryDirectory(dir=SCRATCH)
        self.addCleanup(directory.cleanup)
        self.work = Path(directory.name)

    def source(self, body):
        path = self.work / 'unit.c'
        path.write_text(body, encoding='utf-8')
        return path

    def compile(self, body, target='arm', extra=()):
        source = self.source(body)
        output = self.work / ('unit-' + target + '.o')
        command = [str(CLANG), *TARGETS[target], *FLAGS, '-I', str(ROOT), *extra,
                   '-c', str(source), '-o', str(output)]
        done = subprocess.run(command, capture_output=True, text=True, timeout=120)
        self.assertEqual(done.returncode, 0, done.stderr)
        self.assertEqual(done.stdout, '')
        return output

    def include_block(self):
        return ''.join('#include "platform/port/%s"\n' % header for header in HEADERS)

    def test_every_header_compiles_for_every_measured_target(self):
        for target in TARGETS:
            with self.subTest(target=target):
                output = self.compile(self.include_block() + 'int marker;\n', target)
                self.assertTrue(output.is_file())

    def test_includes_alone_emit_no_function(self):
        output = self.compile(self.include_block() + 'int marker;\n')
        read = ELF.read(str(output))
        self.assertEqual(read['functions'], {})
        self.assertFalse([name for name in read['defined'] if name.startswith('dqm3_')])

    def test_original_aliases_compile_to_the_split_symbols(self):
        body = self.include_block() + (
            'void use(void *mutex)\n'
            '{\n'
            '    dqm3_thread_mutex_lock(mutex);\n'
            '    dqm3_thread_mutex_unlock(mutex);\n'
            '    dqm3_system_break(1);\n'
            '}\n')
        output = self.compile(body, 'arm', ('-DDQMJ3_PLATFORM_BACKEND_ORIGINAL',))
        read = ELF.read(str(output))
        references = read['functions']['use']['references']
        self.assertEqual(references, {'fn_00170704', 'fn_001707b4', 'fn_00146594'})

    def test_headers_use_no_system_header(self):
        for header in HEADERS:
            text = (ROOT / 'platform/port' / header).read_text(encoding='utf-8')
            self.assertNotIn('#include <', text, header)
            self.assertLessEqual(len(text.splitlines()), 500, header)

    def test_only_the_interface_files_are_in_the_port_directory(self):
        files = {path.name for path in (ROOT / 'platform/port').iterdir() if path.is_file()}
        self.assertEqual(files, set(HEADERS) | {'README.md'})


if __name__ == '__main__':
    unittest.main()
