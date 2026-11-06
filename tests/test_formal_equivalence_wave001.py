import copy
import importlib.util
import json
import random
import sys
import unittest
from pathlib import Path

import z3


ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location('formal_equivalence_wave001', ROOT / 'toolscripts/formal_equivalence_wave001.py')
FORMAL = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(FORMAL)
ARM, CMODEL = FORMAL.arm, FORMAL.cmodel


class FormalEquivalenceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        FORMAL.main()
        cls.packet = json.loads((FORMAL.EVIDENCE / 'packet.json').read_text())
        cls.original = (ROOT / 'generated/update-content0/code.bin').read_bytes()[FORMAL.ADDRESS - 0x100000:FORMAL.ADDRESS - 0x100000 + 20]
        cls.compiled = FORMAL.symbol(FORMAL.WORK / 'normal.elf')[0]
        cls.ast = json.loads((FORMAL.WORK / 'normal.ast.json').read_text())

    def test_whole_contract_unsat_with_no_source_credit(self):
        self.assertEqual(len(self.packet['proofs']), 5)
        self.assertTrue(all(proof['status'] == 'unsat' for proof in self.packet['proofs']))
        self.assertFalse(self.packet['byteIdentical'])
        self.assertNotEqual(self.original, self.compiled)
        self.assertEqual(self.packet['acceptedRecoveredSourceFunctions'], 0)
        self.assertEqual(self.packet['acceptedRecoveredSourceBytes'], 0)
        self.assertTrue(all(row['status'] == 'sat' for row in self.packet['domainWitnesses']))

    def test_compiled_wrong_source_counterexample_returns_and_disagrees(self):
        negative = self.packet['wrongSourceNegative']
        self.assertEqual(negative['status'], 'sat')
        self.assertEqual(negative['counterexample']['x'], 11)
        rows = json.loads((FORMAL.WORK / 'actual-execution.json').read_text())['negativeCounterexampleRuns']
        self.assertEqual(len(rows), 32)
        for row in rows:
            self.assertTrue(row['original']['actualReturnReached'])
            self.assertTrue(row['wrongCompiledC']['actualReturnReached'])
            self.assertEqual(row['original']['r0'], 0)
            self.assertEqual(row['wrongCompiledC']['r0'], 1)

    def test_exported_queries_replay_without_model_translation(self):
        queries = self.packet['proofs'] + self.packet['domainWitnesses']
        queries += [self.packet['wrongSourceNegative'], self.packet['overstrictFlagsDiagnostic']]
        for row in queries:
            solver = z3.Solver()
            solver.set(timeout=10000)
            solver.from_file(str(ROOT / row['query']['path']))
            self.assertEqual(str(solver.check()), row['status'])

    def test_final_flags_are_not_a_portable_return_value(self):
        diagnostic = self.packet['overstrictFlagsDiagnostic']
        self.assertEqual(diagnostic['status'], 'sat')
        x = diagnostic['counterexample']['x']
        for thumb in (False, True):
            original = FORMAL.concrete(self.original, x, 15, thumb)
            rebuilt = FORMAL.concrete(self.compiled, x, 15, thumb)
            self.assertEqual(original['r0'], rebuilt['r0'])
            self.assertNotEqual(original['finalNzcv'], rebuilt['finalNzcv'])

    def test_symbolic_subtract_flags_match_actual_cpu(self):
        initial = ARM.initial_state(FORMAL.ADDRESS)
        rng = random.Random(0xf001)
        inputs = [0, 1, 9, 10, 11, 0x80000009, 0x8000000a, 0x8000000b, 0xffffffff]
        inputs.extend(rng.getrandbits(32) for _ in range(64))
        for code in (self.original, self.compiled):
            state = ARM.execute(ARM.decode(code, FORMAL.ADDRESS), initial)
            for x in inputs:
                symbolic = [z3.is_true(z3.simplify(z3.substitute(flag, (initial.registers[0], ARM.bv(x))))) for flag in state.flags]
                packed = sum(int(flag) << (3 - i) for i, flag in enumerate(symbolic))
                self.assertEqual(packed, FORMAL.concrete(code, x, x & 15, bool(x & 1))['finalNzcv'])

    def test_complete_return_is_required(self):
        for code in (b'', self.original[:-4], self.original[:-1], self.original + self.original):
            with self.assertRaises(ARM.UnsupportedArm):
                ARM.decode(code, FORMAL.ADDRESS)

    def test_real_compiled_memory_and_loop_are_rejected(self):
        cases = {'load': 'typedef unsigned int u32; u32 fn_0069180c(u32 x) { return *(volatile u32 *)x; }',
                 'loop': 'typedef unsigned int u32; u32 fn_0069180c(u32 x) { while (1) {} }'}
        for label, source in cases.items():
            path = FORMAL.WORK / ('unsupported-' + label + '.c')
            path.write_text(source + '\n')
            code, _, _ = FORMAL.compile_source(path, 'unsupported-' + label, [])
            with self.assertRaises(ARM.UnsupportedArm):
                ARM.decode(code, FORMAL.ADDRESS)

    def test_source_ub_domains_are_not_silently_proved(self):
        cases = {'signed-overflow': 'typedef signed int s32; s32 fn_0069180c(s32 x) { return x + 1; }',
                 'shift-count': 'typedef unsigned int u32; u32 fn_0069180c(u32 x) { return 1u << x; }'}
        for label, source in cases.items():
            path = FORMAL.WORK / ('unsupported-' + label + '.c')
            path.write_text(source + '\n')
            _, ast, _ = FORMAL.compile_source(path, 'unsupported-' + label, [])
            with self.assertRaises(CMODEL.UnsupportedC):
                CMODEL.translate(ast, FORMAL.SYMBOL, z3.BitVec('x', 32))

    def test_observable_checker_detects_return_frame_and_memory_failures(self):
        initial = ARM.initial_state(FORMAL.ADDRESS)
        value, _ = CMODEL.translate(self.ast, FORMAL.SYMBOL, initial.registers[0])
        pristine = ARM.execute(ARM.decode(self.original, FORMAL.ADDRESS), initial)
        for effect in ('not-returned', 'callee-saved', 'memory-write'):
            state = copy.copy(pristine)
            state.registers = list(pristine.registers)
            if effect == 'not-returned':
                state.returned = z3.BoolVal(False)
            elif effect == 'callee-saved':
                state.registers[4] = ARM.bv(0)
            else:
                state.memory = z3.Store(initial.memory, ARM.bv(0), z3.BitVecVal(1, 8))
            solver = z3.Solver()
            solver.add(ARM.domain(initial), ARM.violations(state, initial, value))
            self.assertEqual(solver.check(), z3.sat)


if __name__ == '__main__':
    unittest.main()
