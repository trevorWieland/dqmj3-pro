import gzip
import io
import struct
import unittest
from unittest.mock import patch

import containers
import programs
import audit


def detached():
    raw = bytearray(80)
    raw[:4] = b'XBB\x01'
    struct.pack_into('<II', raw, 4, 2, 1)
    struct.pack_into('<4I', raw, 32, 0, 1000, 0, 20)
    struct.pack_into('<4I', raw, 48, 1000, 2000, 0, 10)
    struct.pack_into('<4I', raw, 64, 10, 1, 20, 0)
    return raw


class ContainerControls(unittest.TestCase):
    def test_detached_virtual_extents_are_metadata_not_invalid_payloads(self):
        row = containers.xbb(io.BytesIO(detached()), 80)
        self.assertTrue(row['detachedIndex'])
        self.assertEqual(row['virtualReferencedBytes'], 3000)
        self.assertEqual(row['rows'][1]['offset'], 1000)

    def test_detached_lookup_and_virtual_contiguity_must_match(self):
        for offset, value in ((68, 0), (48, 999), (56, 64)):
            raw = detached()
            struct.pack_into('<I', raw, offset, value)
            with self.assertRaises(ValueError):
                containers.xbb(io.BytesIO(raw), len(raw))

    def test_internal_mode_cannot_hide_external_ranges(self):
        raw = detached()
        struct.pack_into('<I', raw, 8, 0)
        with self.assertRaises(ValueError):
            containers.xbb(io.BytesIO(raw), len(raw))

    def test_mode_one_can_be_internal_when_payload_extents_follow_metadata(self):
        raw = bytearray(60)
        raw[:4] = b'XBB\x01'
        struct.pack_into('<II', raw, 4, 1, 1)
        struct.pack_into('<4I', raw, 32, 56, 4, 0, 123)
        struct.pack_into('<II', raw, 48, 123, 0)
        row = containers.xbb(io.BytesIO(raw), len(raw))
        self.assertFalse(row['detachedIndex'])
        self.assertEqual(row['rows'][0]['offset'], 56)

    def test_unknown_mode_and_truncation_fail_closed(self):
        raw = detached()
        struct.pack_into('<I', raw, 8, 2)
        with self.assertRaises(ValueError):
            containers.xbb(io.BytesIO(raw), len(raw))
        with self.assertRaises(ValueError):
            containers.xbb(io.BytesIO(detached()[:-1]), 79)

    def test_gzip_bounds_truncation_and_trailing_members(self):
        raw = gzip.compress(b'x' * 2048)
        self.assertEqual(containers.inflate(raw, 2048), b'x' * 2048)
        for value, bound in ((raw, 2047), (raw[:-1], 2048), (raw + raw, 4096)):
            with self.assertRaises(ValueError):
                containers.inflate(value, bound)

    def test_overlapping_extent_union_is_not_double_counted(self):
        self.assertEqual(containers.union_bytes([(10, 10), (15, 20), (0, 5)]), 30)

    def test_squirrel_225_actual_serialization_prefix_is_not_bare_fafa(self):
        prefix = b'\xfa\xfa' + struct.pack('<III', 0x53514952, 1, 0x50415254)
        found = programs.markers(prefix)
        self.assertEqual(found[0]['marker'], 'Squirrel2.2.5-closure-prefix')
        self.assertEqual(found[0]['integerBytes'], 4)
        self.assertFalse(programs.markers(b'\xfa\xfa' + b'x' * 20))
        wide = b'\xfa\xfa' + struct.pack('<III', 0x53514952, 4, 0x50415254)
        self.assertEqual(programs.markers(wide)[0]['charBytes'], 4)

    def test_streamed_long_serialization_prefix_crossing_chunk_boundary(self):
        raw = bytearray(2 * 1048576)
        prefix = b'\xfa\xfa' + struct.pack('<III', 0x53514952, 1, 0x50415254)
        start = 1048576 - 8
        raw[start:start + len(prefix)] = prefix
        state = audit.Audit('synthetic')
        with patch.object(containers, 'MAX_MEMBER', 1024):
            state.walk(io.BytesIO(raw), len(raw), 'synthetic-stream')
        hits = state.payloads[0]['streamedHeaderMarkerHits']
        self.assertEqual(hits[0]['offset'], start)
        self.assertEqual(hits[0]['marker'], 'Squirrel2.2.5-closure-prefix')

    def test_pica_shader_transfer_and_malformed_extra_params(self):
        raw = struct.pack('<II', 123, 0x000f02cc)
        row = programs.pica(raw)
        self.assertEqual(row['shaderTransferPayloads'][0]['bytes'], 4)
        self.assertEqual(row['shaderTransferPayloads'][0]['kind'], 'vertex')
        with self.assertRaises(ValueError):
            programs.pica(struct.pack('<II', 123, 0x001f02cc))

    def test_dsp_segment_digest_required(self):
        raw = bytearray(0x304)
        raw[0x100:0x104] = b'DSP1'
        struct.pack_into('<I', raw, 0x104, len(raw))
        raw[0x10e] = 1
        struct.pack_into('<III', raw, 0x120, 0x300, 0, 4)
        raw[0x130:0x150] = bytes.fromhex(programs.sha(bytes(raw[0x300:])))
        self.assertTrue(programs.dsp(bytes(raw), 0x100)['segmentHashesVerified'])
        raw[-1] = 1
        with self.assertRaises(ValueError):
            programs.dsp(bytes(raw), 0x100)


if __name__ == '__main__':
    unittest.main()
