import sys
import unittest
from pathlib import Path

import unicorn
from unicorn import arm_const as ar

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
from effect_resource065_conditions import condition_for_instruction


class ActualArmPredicateTests(unittest.TestCase):
    def test_all_arm_predicates_against_actual_conditional_move_effects(self):
        cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
        cpu.ctl_set_cpu_model(ar.UC_CPU_ARM_11MPCORE)
        cpu.mem_map(0x10000, 4096)
        for condition in range(15):
            opcode = (condition << 28) | 0x03a00001
            cpu.mem_write(0x10000, opcode.to_bytes(4, 'little'))
            for nzcv in range(16):
                cpu.reg_write(ar.UC_ARM_REG_CPSR, (nzcv << 28) | 0x1f)
                cpu.reg_write(ar.UC_ARM_REG_R0, 0)
                actual_condition, before, predicted = condition_for_instruction(cpu, 0x10000, 4, 'ARM')
                cpu.emu_start(0x10000, 0x10004, count=1)
                observed = cpu.reg_read(ar.UC_ARM_REG_R0) == 1
                self.assertEqual(predicted, observed, (condition, nzcv))
                self.assertEqual(actual_condition, condition)


if __name__ == '__main__':
    unittest.main()
