import hashlib
import importlib.util
import unittest
from pathlib import Path

import unicorn


ROOT = Path(__file__).resolve().parents[3]
SPEC = importlib.util.spec_from_file_location('wave005_oracle_test', Path(__file__).with_name('oracle.py'))
ORACLE = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(ORACLE)


class VmOracleControls(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.original = (ROOT / 'generated/update-content0/code.bin').read_bytes()
        if hashlib.sha256(cls.original).hexdigest() != 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126':
            raise ValueError('Canonical fixture identity differs')

    def test_original_count_return_crosses_code_page(self):
        address = 0x157ff4
        case = ORACLE.make_case(address, (32, 7), 1)
        image = self.original[address - 0x100000:address - 0x100000 + 16]
        result = ORACLE.execute({address: image}, b'', case)
        self.assertTrue(result['returnedToSentinel'])
        self.assertTrue(result['semanticModelAgreed'])
        self.assertEqual(result['returnValue'], 25)
        self.assertIn(0x158000, result['visited'])

    def test_self_assignment_does_not_prematurely_release(self):
        case = ORACLE.make_case(0x19e864, (True, True, 1, 5, True, True), 2)
        self.assertEqual(ORACLE.read(case['expectedMemory'], ORACLE.NODES[0] + 4), 1)
        self.assertEqual(ORACLE.read(case['expectedMemory'], ORACLE.NODES[0] + 20), 0)
        self.assertEqual(case['callbacks'], [])

    def test_release_observes_published_value_and_increased_new_reference(self):
        case = ORACLE.make_case(0x19e864, (True, True, 1, 5, False, False), 3)
        self.assertEqual(case['callbacks'], [{'node': ORACLE.NODES[0], 'destinationType': ORACLE.REF,
                         'destinationValue': ORACLE.NODES[1], 'references': [0, 6, 3]}])
        self.assertEqual(ORACLE.read(case['expectedMemory'], ORACLE.NODES[0] + 20), 1)

    def test_nonempty_chain_insertion_repairs_both_links(self):
        case = ORACLE.make_case(0x19e8c4, 2, 4)
        memory = case['expectedMemory']
        self.assertEqual(ORACLE.read(memory, ORACLE.HEAD), ORACLE.NODES[2])
        self.assertEqual(ORACLE.read(memory, ORACLE.NODES[2] + 16), 0)
        self.assertEqual(ORACLE.read(memory, ORACLE.NODES[2] + 12), ORACLE.NODES[0])
        self.assertEqual(ORACLE.read(memory, ORACLE.NODES[0] + 16), ORACLE.NODES[2])
        self.assertEqual(ORACLE.read(memory, ORACLE.NODES[0] + 12), ORACLE.NODES[1])

    def test_void_contract_does_not_invent_r0_result(self):
        push = ORACLE.make_case(0x173d1c, (False, False, 3, 5, False, False), 5)
        chain = ORACLE.make_case(0x19e8c4, 1, 6)
        self.assertIsNone(push['expectedReturn'])
        self.assertIsNone(chain['expectedReturn'])

    def test_unmapped_vm_fixture_is_not_counted_as_return(self):
        address = 0x157ff4
        case = ORACLE.make_case(address, (32, 7), 7)
        case['arguments'][0] = 0
        image = self.original[address - 0x100000:address - 0x100000 + 16]
        with self.assertRaises(unicorn.UcError) as result:
            ORACLE.execute({address: image}, b'', case)
        self.assertEqual(result.exception.errno, unicorn.UC_ERR_READ_UNMAPPED)


if __name__ == '__main__':
    unittest.main()
