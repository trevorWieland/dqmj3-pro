import copy
import importlib.util
import json
import unittest
from pathlib import Path

import z3


ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location('formal_audit_wave002', ROOT / 'toolscripts/formal_audit_wave002.py')
AUDIT = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(AUDIT)
PCODE = AUDIT.pcode


class FormalAuditTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        AUDIT.main()
        cls.packet = json.loads((AUDIT.EVIDENCE / 'packet.json').read_text())
        cls.exports = {name: json.loads((ROOT / item['path']).read_text()) for name, item in cls.packet['pcodeExports'].items()}

    def test_both_solvers_prove_all_declared_checks(self):
        self.assertEqual(len(self.packet['proofs']), 8)
        self.assertTrue(all(row['z3Status'] == row['cvc5']['status'] == 'unsat' for row in self.packet['proofs']))
        self.assertTrue(all(row['z3Status'] == row['cvc5']['status'] == 'sat' for row in self.packet['nonvacuousDomainWitnesses']))
        self.assertEqual(len(self.packet['priorPilotIndependentSolverReplay']), 5)
        self.assertTrue(all(row['status'] == 'unsat' for row in self.packet['priorPilotIndependentSolverReplay']))
        self.assertEqual(self.packet['sourceCredit'], 0)
        self.assertFalse(self.packet['admissionPolicyChanged'])
        self.assertFalse(self.packet['oldArmInstructionTranslatorImportedOrCalled'])

    def test_actual_returns_reproduce_both_solver_counterexamples(self):
        row = self.packet['compiledWrongSourceNegative']
        self.assertEqual(row['z3CounterexampleX'], 11)
        self.assertEqual(row['cvc5CounterexampleX'], 11)
        qualification = json.loads((ROOT / self.packet['concreteQualification']['artifact']['path']).read_text())
        self.assertEqual(len(qualification['counterexamples']), 32)
        for case in qualification['counterexamples']:
            self.assertTrue(case['original']['returned'])
            self.assertTrue(case['wrong']['returned'])
            self.assertEqual(case['original']['output']['r0'], 0)
            self.assertEqual(case['wrong']['output']['r0'], 1)

    def test_context_and_raw_pcode_are_complete(self):
        for export in self.exports.values():
            self.assertEqual(export['bodyBytes'], 20)
            self.assertEqual(len(export['instructions']), 5)
            for row in export['instructions']:
                self.assertTrue(all(row['context'][name] == '0' for name in export['explicitZeroContextFields']))
            operations = [op for row in export['instructions'] for op in row['operations']]
            self.assertEqual(sum(op['mnemonic'] == 'RETURN' for op in operations), 1)
            self.assertEqual([op['useropName'] for op in operations if op['mnemonic'] == 'CALLOTHER'], ['setISAMode'])

    def test_unknown_userop_or_wrong_signature_is_rejected(self):
        for variant in ('name', 'id', 'arity'):
            export = copy.deepcopy(self.exports['original'])
            op = next(op for row in export['instructions'] for op in row['operations'] if op['mnemonic'] == 'CALLOTHER')
            if variant == 'name':
                op['useropName'] = 'unmodeled_side_effect'
            elif variant == 'id':
                op['inputs'][0]['offset'] = '61'
            else:
                op['inputs'].pop()
            with self.assertRaises(PCODE.UnsupportedPcode):
                PCODE.execute(export, PCODE.initial_state())

    def test_noncanonical_mode_byte_is_rejected(self):
        export = copy.deepcopy(self.exports['original'])
        op = next(op for row in export['instructions'] for op in row['operations'] if op.get('output', {}).get('registerName') == 'TB')
        op['mnemonic'] = 'COPY'
        op['inputs'] = [{'space': 'const', 'offset': '2', 'size': 1}]
        with self.assertRaises(PCODE.UnsupportedPcode):
            PCODE.execute(export, PCODE.initial_state())

    def test_memory_ops_and_direct_ram_varnodes_are_rejected(self):
        for variant in ('LOAD', 'STORE', 'ram-output'):
            export = copy.deepcopy(self.exports['original'])
            op = export['instructions'][0]['operations'][0]
            if variant == 'ram-output':
                op['mnemonic'] = 'COPY'
                op['inputs'] = [op['inputs'][0]]
                op['output'] = {'space': 'ram', 'offset': '0', 'size': 4}
            else:
                op['mnemonic'] = variant
            with self.assertRaises(PCODE.UnsupportedPcode):
                PCODE.execute(export, PCODE.initial_state())

    def test_backward_or_unowned_control_flow_is_rejected(self):
        for address in (self.exports['original']['bodyAddress'], 0x12345678):
            export = copy.deepcopy(self.exports['original'])
            op = next(op for row in export['instructions'] for op in row['operations'] if op['mnemonic'] == 'CBRANCH')
            op['inputs'][0]['offset'] = str(address)
            with self.assertRaises(PCODE.UnsupportedPcode):
                PCODE.execute(export, PCODE.initial_state())

    def test_missing_return_and_uninitialized_unique_are_rejected(self):
        export = copy.deepcopy(self.exports['original'])
        export['instructions'][-1]['operations'].pop()
        with self.assertRaises(PCODE.UnsupportedPcode):
            PCODE.execute(export, PCODE.initial_state())
        export = copy.deepcopy(self.exports['original'])
        export['instructions'][0]['operations'][0]['inputs'][0] = {'space': 'unique', 'offset': '999', 'size': 4}
        with self.assertRaises(PCODE.UnsupportedPcode):
            PCODE.execute(export, PCODE.initial_state())

    def test_unknown_or_thumb_decoder_context_is_rejected(self):
        for name in ('TMode', 'LRset', 'REToverride', 'CALLoverride', 'TEEMode', 'itmode'):
            export = copy.deepcopy(self.exports['original'])
            export['effectiveEntryContext'][name] = 'unknown'
            with self.assertRaises(PCODE.UnsupportedPcode):
                PCODE.execute(export, PCODE.initial_state())

    def test_return_mode_bridge_and_memory_are_observable(self):
        initial = PCODE.initial_state()
        paths = PCODE.execute(self.exports['original'], initial)
        value = z3.If(z3.And(z3.UGE(initial.registers['r0'], PCODE.bv(1)), z3.ULE(initial.registers['r0'], PCODE.bv(10))), PCODE.bv(1), PCODE.bv(0))
        domain = PCODE.domain(initial, self.exports['original']['bodyAddress'], 20)
        for effect in ('dropped-mode', 'frame-clobber', 'memory-write', 'not-returned'):
            mutated = [PCODE.clone(state) for state in paths]
            for state in mutated:
                if effect == 'dropped-mode':
                    state.thumb = z3.BoolVal(False)
                elif effect == 'frame-clobber':
                    state.registers['r4'] = PCODE.bv(0)
                elif effect == 'memory-write':
                    state.memory = z3.Store(initial.memory, PCODE.bv(0), PCODE.bv(1, 8))
                else:
                    state.returned = False
            solver = z3.Solver()
            solver.add(domain, PCODE.violations(mutated, initial, value))
            self.assertEqual(solver.check(), z3.sat)


if __name__ == '__main__':
    unittest.main()
