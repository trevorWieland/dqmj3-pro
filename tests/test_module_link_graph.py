import copy
import hashlib
import io
import json
import shutil
import subprocess
import sys
import unittest
import uuid
from pathlib import Path

from elftools.elf.elffile import ELFFile


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import module_link_graph as graph


class GraphLinkTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.root = ROOT / 'work/module-link-graph-tests' / uuid.uuid4().hex
        cls.work = cls.root / 'work'
        cls.work.mkdir(parents=True)
        lock = json.loads((ROOT / 'tools.lock.json').read_text())
        (cls.root / 'tools.lock.json').write_text(json.dumps(lock))
        for item in lock['files']:
            if item['path'].startswith('tools/clang-21/'):
                source, target = ROOT / item['path'], cls.root / item['path']
                if not source.is_file():
                    raise unittest.SkipTest('Pinned native Clang/LLD unavailable; genuine graph links not exercised')
                target.parent.mkdir(parents=True, exist_ok=True)
                shutil.copyfile(source, target)
        cls.clang, cls.linker = [cls.root / ('tools/clang-21/' + name) for name in ('clang.exe', 'ld.lld.exe')]
        cls.callee = cls.compile('callee', 'unsigned int fn_00100100(unsigned int x) { return x + 5u; }')
        cls.caller = cls.compile('caller', 'extern unsigned int fn_00100100(unsigned int);\n'
                                 'unsigned int fn_00100000(unsigned int x) { return fn_00100100(x) + 3u; }')
        cls.image = cls.reference('update-content0', [cls.caller, cls.callee],
                                  '.text.fn_00100000 0x100000 : { *(.text.fn_00100000) }\n'
                                  '.text.fn_00100100 0x100100 : { *(.text.fn_00100100) }')
        cls.rows = [cls.entry(cls.caller, 'fn_00100000', 0x100000),
                    cls.entry(cls.callee, 'fn_00100100', 0x100100)]
        cls.rows[0]['dependencies'] = [cls.dependency('source')]

    @classmethod
    def command(cls, args):
        done = subprocess.run([str(arg) for arg in args], capture_output=True, timeout=120)
        if done.returncode:
            raise RuntimeError(done.stderr.decode(errors='replace'))

    @classmethod
    def compile(cls, name, source, mode='ARM'):
        path = cls.work / (name + '.c')
        obj = path.with_suffix('.o')
        path.write_text(source)
        cls.command([cls.clang, '--target=arm-none-eabi', '-mcpu=mpcore', '-marm' if mode == 'ARM' else '-mthumb',
                     '-O2', '-ffreestanding', '-ffunction-sections', '-fdata-sections',
                     '-fno-unwind-tables', '-fno-asynchronous-unwind-tables',
                     '-fomit-frame-pointer', '-c', path, '-o', obj])
        return obj

    @classmethod
    def reference(cls, label, objects, layout):
        script, linked = cls.work / (label + '.ld'), cls.work / (label + '.elf')
        script.write_text('SECTIONS {\n' + layout + '\n/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) '
                          '*(.comment) *(.note*) *(.llvm_addrsig) *(.ARM.attributes) }\n}\n')
        cls.command([cls.linker, '-m', 'armelf', '--build-id=none', '-T', script, *objects, '-o', linked])
        elf = ELFFile(io.BytesIO(linked.read_bytes()))
        sections = [section for section in elf.iter_sections() if section['sh_flags'] & 2 and section['sh_size']]
        image = bytearray(max(section['sh_addr'] + section['sh_size'] for section in sections) - 0x100000)
        for section in sections:
            offset = section['sh_addr'] - 0x100000
            image[offset:offset + section['sh_size']] = section.data()
        inventory = cls.root / 'evidence/inventory' / (label + '.json')
        inventory.parent.mkdir(parents=True, exist_ok=True)
        inventory.write_text(json.dumps({'programId': 'synthetic-link-test',
                                         'codeSha256': hashlib.sha256(image).hexdigest(),
                                         'layout': {'segments': [{'name': 'text', 'address': 0x100000,
                                                                  'codeBinOffset': 0, 'initializedBytes': len(image)}]}}))
        code = cls.root / 'generated' / label / 'code.bin'
        code.parent.mkdir(parents=True, exist_ok=True)
        code.write_bytes(image)
        return bytes(image)

    @classmethod
    def entry(cls, obj, name, address):
        record = graph.describe_object(obj, name)
        return {**record, 'symbol': name, 'address': address, 'objectPath': str(obj),
                'objectSha256': graph.digest(obj), 'instructionBytes': record['size'],
                'poolBytes': 0, 'paddingBytes': 0, 'dependencies': []}

    @classmethod
    def dependency(cls, role):
        size = graph.describe_object(cls.callee, 'fn_00100100')['size']
        return {'symbol': 'fn_00100100', 'address': 0x100100, 'size': size, 'mode': 'ARM',
                'kind': 'function', 'role': role, 'sha256': hashlib.sha256(cls.image[256:256 + size]).hexdigest(),
                'abi': 'AAPCS32 unsigned int callee(unsigned int); no memory or nonvolatile-register effects'}

    def link(self, rows, label='update-content0'):
        return graph.integrate(rows, self.work / self._testMethodName, label=label, root=self.root)

    def test_source_call_graph_uses_real_linker_relocations(self):
        result = self.link(self.rows)
        self.assertEqual(result['sourceLinkedFunctionCount'], 2)
        self.assertEqual(result['linkedImageSha256'], hashlib.sha256(self.image).hexdigest())
        self.assertTrue(self.rows[0]['relocations'])
        first = self.rows[0]
        self.assertNotEqual(first['sectionSha256'], hashlib.sha256(self.image[:first['size']]).hexdigest())
        self.assertFalse(result['acceptanceGrantedByThisTool'])
        self.assertFalse(result['sourceOnlyModule'])

    def test_retained_callee_earns_no_source_credit(self):
        row = copy.deepcopy(self.rows[0])
        row['dependencies'] = [self.dependency('retained-original')]
        result = self.link([row])
        self.assertEqual(result['sourceLinkedFunctionCount'], 1)
        self.assertEqual(result['sourceLinkedBytes'], row['size'])
        self.assertEqual(result['retainedOriginalBytes'], len(self.image) - row['size'])

    def test_missing_dependency_is_rejected(self):
        rows = copy.deepcopy(self.rows)
        rows[0]['dependencies'] = []
        with self.assertRaisesRegex(ValueError, 'explicit dependency'):
            self.link(rows)

    def test_source_dependency_requires_actual_owned_source(self):
        with self.assertRaisesRegex(ValueError, 'absent from the actual source-owned graph'):
            self.link([self.rows[0]])

    def test_changed_relocation_manifest_is_rejected(self):
        rows = copy.deepcopy(self.rows)
        rows[0]['relocations'] = []
        with self.assertRaisesRegex(ValueError, 'Actual compiler'):
            self.link(rows)

    def test_wrong_compiled_logic_fails_whole_module_identity(self):
        wrong = self.compile('wrong-caller', 'extern unsigned int fn_00100100(unsigned int);\n'
                             'unsigned int fn_00100000(unsigned int x) { return fn_00100100(x) + 4u; }')
        row = self.entry(wrong, 'fn_00100000', 0x100000)
        row['dependencies'] = [self.dependency('source')]
        with self.assertRaisesRegex(ValueError, 'entire original image'):
            self.link([row, self.rows[1]])

    def test_redirected_retained_call_fails_actual_linked_bytes(self):
        row = copy.deepcopy(self.rows[0])
        dependency = self.dependency('retained-original')
        dependency.update({'address': 0x100080,
                           'sha256': hashlib.sha256(self.image[128:128 + dependency['size']]).hexdigest()})
        row['dependencies'] = [dependency]
        with self.assertRaisesRegex(ValueError, 'entire original image'):
            self.link([row])

    def test_owned_section_extent_cannot_hide_pool_or_padding(self):
        rows = copy.deepcopy(self.rows)
        rows[0]['instructionBytes'] -= 4
        with self.assertRaisesRegex(ValueError, 'not fully accounted'):
            self.link(rows)

    def test_branch_cannot_be_declared_as_data(self):
        rows = copy.deepcopy(self.rows)
        rows[0]['dependencies'][0]['kind'] = 'data'
        with self.assertRaisesRegex(ValueError, 'function ABI'):
            self.link(rows)

    def thumb_fixture(self):
        thumb = self.compile('thumb-callee', 'unsigned int fn_00100100(unsigned int x) { return x + 5u; }', 'Thumb')
        image = self.reference('base-content0', [self.caller, thumb],
                               '.text.fn_00100000 0x100000 : { *(.text.fn_00100000) }\n'
                               '.text.fn_00100100 0x100100 : { *(.text.fn_00100100) }')
        row = self.entry(thumb, 'fn_00100100', 0x100100)
        dependency = self.dependency('source')
        dependency.update({'mode': 'Thumb', 'size': row['size'],
                           'sha256': hashlib.sha256(image[256:256 + row['size']]).hexdigest()})
        caller = copy.deepcopy(self.rows[0])
        caller['dependencies'] = [dependency]
        return caller, row

    def test_real_arm_to_thumb_source_interworking(self):
        caller, callee = self.thumb_fixture()
        result = self.link([caller, callee], 'base-content0')
        self.assertEqual(result['sourceLinkedFunctionCount'], 2)
        self.assertEqual(result['dependencies'][0]['mode'], 'Thumb')

    def test_real_arm_to_retained_thumb_interworking(self):
        caller, callee = self.thumb_fixture()
        caller['dependencies'][0]['role'] = 'retained-original'
        result = self.link([caller], 'base-content0')
        self.assertEqual(result['sourceLinkedFunctionCount'], 1)
        self.assertEqual(result['sourceLinkedBytes'], caller['size'])

    def test_real_data_relocation_and_owned_literal_pool(self):
        caller = self.compile('data-caller', 'extern unsigned int calibration;\n'
                              'unsigned int fn_00100000(unsigned int x) { return x + calibration; }')
        data = self.compile('calibration', 'unsigned int calibration = 17u;')
        image = self.reference('base-content0', [caller, data],
                               '.text.fn_00100000 0x100000 : { *(.text.fn_00100000) }\n'
                               '.data 0x100100 : { *(.data*) }')
        row = self.entry(caller, 'fn_00100000', 0x100000)
        elf = ELFFile(io.BytesIO(caller.read_bytes()))
        mappings = [symbol['st_value'] for symbol in elf.get_section_by_name('.symtab').iter_symbols()
                    if symbol.name.startswith('$d')]
        self.assertEqual(len(mappings), 1)
        row.update({'instructionBytes': mappings[0], 'poolBytes': row['size'] - mappings[0],
                    'dependencies': [{'symbol': 'calibration', 'address': 0x100100, 'size': 4,
                                      'kind': 'data', 'role': 'retained-original',
                                      'sha256': hashlib.sha256(image[256:260]).hexdigest(),
                                      'abi': 'Aligned 32-bit scalar; original data remains private and uncredited'}]})
        result = self.link([row], 'base-content0')
        self.assertEqual(result['sourceLinkedPoolBytes'], 4)
        self.assertEqual(result['sourceLinkedInstructionBytes'] + result['sourceLinkedPoolBytes'], row['size'])
        self.assertEqual(result['dependencies'][0]['kind'], 'data')


if __name__ == '__main__':
    unittest.main()
