import sys
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "toolscripts"))
from md5_stream029_build import build
from md5_stream029_oracle import Arm, Android, Windows, checked
from unicorn import UC_PROT_WRITE


class Md5StreamingBoundsTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        folder = ROOT / "work/md5-stream029/native-regression"
        products = {target: build(folder / target, target)[0] for target in ["arm", "windows", "android"]}
        cls.original = Arm()
        cls.arm = Arm(products["arm"])
        cls.android = Android(products["android"])
        cls.windows = Windows(products["windows"])
        cls.engines = [cls.original, cls.arm, cls.windows, cls.android]
        cls.memory = bytes((index * 17) & 255 for index in range(4096))

    def invalid(self, **arguments):
        values = {"operation": "update", "context": 128, "input_offset": 512, "count": 1, "output": 3072}
        values.update(arguments)
        for engine in self.engines:
            with self.subTest(engine=type(engine).__name__, arguments=arguments), self.assertRaises(ValueError):
                engine.execute(memory=self.memory, **values)

    def test_wrong_arena_length_rejected_before_execution(self):
        for engine in self.engines:
            with self.assertRaises(ValueError):
                engine.execute("init", self.memory[:-1])

    def test_context_alignment_and_extent_rejected(self):
        for context in [-4, 1, 4012, True]:
            self.invalid(context=context)

    def test_count_width_and_backing_rejected(self):
        for count in [-1, 4097, 0x100000000, True]:
            self.invalid(count=count)

    def test_input_extent_even_when_zero_length(self):
        for offset, count in [(-1, 0), (4097, 0), (4096, 1), (4095, 2), (True, 0), (None, 1)]:
            self.invalid(input_offset=offset, count=count)

    def test_streaming_input_context_overlap_excluded(self):
        for offset, count in [(128, 1), (127, 2), (215, 1), (120, 16)]:
            self.invalid(input_offset=offset, count=count)

    def test_output_extent_and_type_rejected(self):
        for output in [-1, 4081, True]:
            self.invalid(operation="final", output=output)

    def test_zero_length_null_input_preserves_every_byte(self):
        states = [engine.execute("init", self.memory) for engine in self.engines]
        for engine, memory in zip(self.engines, states):
            self.assertEqual(engine.execute("update", memory, input_offset=None, count=0), memory)

    def test_valid_upper_context_and_output_edges_execute(self):
        states = [engine.execute("init", self.memory, context=4008) for engine in self.engines]
        results = [engine.execute("final", memory, context=4008, output=4080) for engine, memory in zip(self.engines, states)]
        self.assertTrue(all(value == results[0] for value in results))

    def test_arm_source_cannot_execute_literal_or_unaligned_address(self):
        address = next(low for low, high in self.arm.readonly if low not in self.arm.instructions)
        with self.assertRaises(ValueError):
            self.arm.code(self.arm.cpu, address, 4, None)
        with self.assertRaises(ValueError):
            self.arm.code(self.arm.cpu, self.arm.entries["init"] + 2, 4, None)

    def test_a64_source_cannot_execute_data_or_short_instruction(self):
        address = next(low for low, high in self.android.readonly if not any(start <= low < end for start, end in self.android.executable))
        with self.assertRaises(ValueError):
            self.android.code(self.android.cpu, address, 4, None)
        with self.assertRaises(ValueError):
            self.android.code(self.android.cpu, self.android.entries["init"], 2, None)

    def test_stack_read_requires_a_preceding_write(self):
        for engine in [self.arm, self.android]:
            engine.defined.clear()
            with self.assertRaises(ValueError):
                engine.read(engine.cpu, None, engine.sp - 4, 4, None, None)

    def test_write_cannot_escape_initialized_context_extent(self):
        for engine in [self.arm, self.android]:
            engine.execute("init", self.memory)
            with self.assertRaises(ValueError):
                engine.write(engine.cpu, None, engine.ram + 128 + 24, 1, 0, None)

    def test_original_image_is_readonly_and_absent_from_source_cpus(self):
        regions = list(self.original.cpu.mem_regions())
        self.assertTrue(all(not flags & UC_PROT_WRITE for low, high, flags in regions if low <= 0x100000 <= high))
        for engine in [self.arm, self.android]:
            self.assertTrue(all(not low <= 0x100000 <= high for low, high, flags in engine.cpu.mem_regions()))


if __name__ == "__main__":
    unittest.main()
