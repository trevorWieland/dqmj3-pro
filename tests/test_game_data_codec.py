import struct
import sys
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from gamedata import messages, records          # noqa: E402
from gamedata.fields import Field                # noqa: E402
from gamedata.schema import (LayoutError, TableSchema, at_least_rows,  # noqa: E402
                             index_at_zero, keys_contiguous)


def sample_schema():
    """A small table with an index column, a name column and unknown tail bytes."""
    return TableSchema('Sample', b'SAMP', (12,),
                       fields=(Field('index', 0, 'u16'),
                               Field('label', 2, 'ascii', width=6)),
                       witnesses=(index_at_zero(),), identifier='sample', certain=True,
                       basis='synthetic fixture')


def sample_file(count=4):
    """Build a table file that the sample schema must describe exactly."""
    body = bytearray()
    for row in range(count):
        record = bytearray(12)
        struct.pack_into('<H', record, 0, row)
        record[2:8] = ('r%05d' % row).encode('ascii')
        record[8:12] = bytes((row, row + 1, row + 2, 0xFE))
        body += record
    return b'SAMP' + bytes(body)


class RecordCodecTests(unittest.TestCase):
    def test_decode_lists_named_fields_and_unknown_ranges(self):
        document = records.decode(sample_file(), sample_schema())
        self.assertEqual(document['stride'], 12)
        self.assertEqual(document['count'], 4)
        self.assertEqual(document['records'][2]['index'], 2)
        self.assertEqual(document['records'][2]['label'], 'r00002')
        self.assertEqual(document['records'][2]['unknown'], [[8, '020304fe']])

    def test_encode_reproduces_the_original_bytes(self):
        schema = sample_schema()
        original = sample_file()
        rebuilt = records.encode(records.decode(original, schema), schema)
        self.assertEqual(rebuilt, original)

    def test_edited_field_changes_only_that_field(self):
        schema = sample_schema()
        original = sample_file()
        document = records.decode(original, schema)
        document['records'][1]['index'] = 9
        rebuilt = records.encode(document, schema)
        self.assertEqual(rebuilt[:12 + 4], original[:12 + 4])
        self.assertEqual(rebuilt[12 + 4 + 2:], original[12 + 4 + 2:])
        self.assertEqual(rebuilt[16:18], b'\x09\x00')

    def test_encode_refuses_a_document_that_drops_a_field(self):
        schema = sample_schema()
        document = records.decode(sample_file(), schema)
        del document['records'][0]['label']
        with self.assertRaises(records.CodecError):
            records.encode(document, schema)

    def test_encode_refuses_an_unknown_range_of_the_wrong_length(self):
        schema = sample_schema()
        document = records.decode(sample_file(), schema)
        document['records'][0]['unknown'] = [[8, '0102']]
        with self.assertRaises(records.CodecError):
            records.encode(document, schema)

    def test_encode_refuses_bytes_the_schema_does_not_cover(self):
        schema = TableSchema('Gap', b'GAPP', (8,),
                             fields=(Field('index', 0, 'u16'), Field('tail', 6, 'u16')),
                             basis='synthetic gap fixture')
        body = bytearray()
        for row in range(3):
            record = bytearray(8)
            struct.pack_into('<H', record, 0, row)
            body += record
        document = records.decode(b'GAPP' + bytes(body), schema)
        self.assertEqual(document['records'][0]['unknown'], [[2, '00000000']])
        document['records'][0]['unknown'] = []
        with self.assertRaises(records.CodecError):
            records.encode(document, schema)

    def test_ambiguous_stride_fails_closed(self):
        schema = TableSchema('Ambiguous', b'AMBI', (4, 8),
                             fields=(Field('index', 0, 'u16'),),
                             witnesses=(at_least_rows(2),), basis='synthetic ambiguity')
        body = b''.join(struct.pack('<H', row) + b'\x00\x00' for row in range(4))
        with self.assertRaises(LayoutError) as caught:
            records.decode(b'AMBI' + body, schema)
        self.assertIn('candidate strides', str(caught.exception))

    def test_witness_rejects_a_stride_that_does_not_divide(self):
        schema = TableSchema('Odd', b'ODDD', (5,),
                             fields=(Field('index', 0, 'u16'),), basis='synthetic')
        with self.assertRaises(LayoutError):
            records.decode(b'ODDD' + b'\x00' * 8, schema)

    def test_contiguous_key_witness_accepts_a_run(self):
        schema = TableSchema('Run', b'RUNN', (4,),
                             fields=(Field('key', 0, 'u16'),),
                             witnesses=(keys_contiguous(),), basis='synthetic run')
        body = b''.join(struct.pack('<HH', 200 + row, 0) for row in range(5))
        document = records.decode(b'RUNN' + body, schema)
        self.assertEqual([row['key'] for row in document['records']], [200, 201, 202, 203, 204])

    def test_text_field_refuses_a_value_that_does_not_fit(self):
        schema = sample_schema()
        document = records.decode(sample_file(), schema)
        document['records'][0]['label'] = 'far-too-long'
        with self.assertRaises(records.CodecError):
            records.encode(document, schema)


def message_file(texts, opaque=b''):
    """Build a message archive with one entry per text plus a trailing opaque payload."""
    count = len(texts)
    array_end = 4 + count * 8
    blob = bytearray()
    offsets = []
    for text in texts:
        offsets.append(array_end + len(blob) if text is not None else 0)
        if text is not None:
            blob += text.encode('utf-16-le') + b'\x00\x00'
    table = b''.join(struct.pack('<II', 1, offset) for offset in offsets)
    return struct.pack('<I', count) + table + bytes(blob) + opaque


class MessageCodecTests(unittest.TestCase):
    def test_decode_and_reencode_is_identical(self):
        original = message_file(['hello', '', 'world'])
        rebuilt = messages.encode(messages.decode(original, 'test.mes'))
        self.assertEqual(rebuilt, original)

    def test_text_is_readable(self):
        document = messages.decode(message_file(['こんにちは', 'second']), 'test.mes')
        self.assertEqual(document['entries'][0]['text'], 'こんにちは')
        self.assertEqual(document['entries'][1]['text'], 'second')

    def test_editing_one_string_keeps_the_rest_in_order(self):
        document = messages.decode(message_file(['alpha', 'beta', 'gamma']), 'test.mes')
        document['entries'][1]['text'] = 'BETA!'
        rebuilt = messages.decode(messages.encode(document), 'test.mes')
        self.assertEqual([entry['text'] for entry in rebuilt['entries']],
                         ['alpha', 'BETA!', 'gamma'])

    def test_opaque_payload_is_preserved_and_relocated(self):
        opaque = b'IH0418\x00\x00\x48\xd8\x00\x00'
        original = message_file(['alpha', 'beta'], opaque)
        document = messages.decode(original, 'test.mes')
        document['entries'][0]['text'] = 'alpha but longer'
        rebuilt = messages.encode(document)
        self.assertTrue(rebuilt.endswith(opaque))
        self.assertEqual(messages.decode(rebuilt, 'test.mes')['entries'][0]['text'],
                         'alpha but longer')

    def test_entry_table_larger_than_the_file_is_rejected(self):
        with self.assertRaises(messages.MessageError):
            messages.decode(struct.pack('<I', 5000) + b'\x00' * 8, 'test.mes')


if __name__ == '__main__':
    unittest.main()
