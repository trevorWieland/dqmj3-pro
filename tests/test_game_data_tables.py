import json
import sys
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from gamedata import records, references, tables, workspace   # noqa: E402
from gamedata.fields import Field                               # noqa: E402
from gamedata.schema import TableSchema                         # noqa: E402


SAMPLE_ROOT = ROOT / 'generated/asset-samples'
HAVE_SAMPLES = (SAMPLE_ROOT / 'base/0/data/Parameter').is_dir()
NO_SAMPLES = 'no extracted game data under generated/asset-samples'


class RegistryTests(unittest.TestCase):
    def test_names_and_magics_are_unique(self):
        names = [schema.name for schema in tables.TABLES]
        magics = [schema.magic for schema in tables.TABLES]
        self.assertEqual(len(set(names)), len(names))
        self.assertEqual(len(set(magics)), len(magics))

    def test_every_magic_is_four_bytes(self):
        for schema in tables.TABLES:
            self.assertEqual(len(schema.magic), records.MAGIC_SIZE, schema.name)

    def test_fields_fit_inside_every_accepted_stride(self):
        for schema in tables.TABLES:
            smallest = min(schema.strides)
            for field in schema.fields:
                self.assertLessEqual(field.end, smallest, (schema.name, field.name))

    def test_a_certain_table_states_a_witness_and_a_basis(self):
        for schema in tables.TABLES:
            self.assertTrue(schema.basis, schema.name)
            if schema.certain:
                self.assertTrue(schema.witnesses, schema.name)

    def test_container_families_match_the_declared_set(self):
        for schema in tables.TABLES:
            expected = 'tb' if schema.name in tables.TB_CONTAINER else 'tp'
            self.assertEqual(schema.container, expected, schema.name)

    def test_reference_spaces_are_declared_somewhere(self):
        owners = {schema.identifier for schema in tables.TABLES if schema.identifier}
        for schema in tables.TABLES:
            for field in schema.fields:
                if field.refers_to:
                    self.assertIn(field.refers_to, owners, (schema.name, field.name))

    def test_characterised_families_are_not_also_listed_as_uncharacterised(self):
        for schema in tables.TABLES:
            self.assertNotIn(schema.name, tables.UNCHARACTERISED)


class ReferenceQueryTests(unittest.TestCase):
    def setUp(self):
        owner = TableSchema('Owner', b'OWNE', (4,),
                            fields=(Field('key', 0, 'u16', refers_to='thing'),),
                            identifier='thing', basis='synthetic owner')
        pointer = TableSchema('Pointer', b'POIN', (4,),
                              fields=(Field('ref', 0, 'u16', refers_to='thing'),
                                      Field('index', 2, 'u16')),
                              identifier='pointer', basis='synthetic pointer')
        self.schemas = (owner, pointer)
        self.loaded = {'Owner': {'records': [{'key': 5}, {'key': 6}]},
                       'Pointer': {'records': [{'ref': 5, 'index': 0},
                                               {'ref': 6, 'index': 1},
                                               {'ref': 5, 'index': 2}]}}

    def test_inbound_references_are_reported_by_row(self):
        answer = references.query(self.loaded, self.schemas, 'Owner', 0)
        self.assertEqual(answer['identifiers'], [('thing', 5, 'key')])
        self.assertEqual(len(answer['references']), 1)
        edge = answer['references'][0]
        self.assertEqual((edge['table'], edge['field'], edge['rows']),
                         ('Pointer', 'ref', [0, 2]))

    def test_a_row_without_references_says_so(self):
        answer = references.query(self.loaded, self.schemas, 'Pointer', 1)
        self.assertEqual(answer['references'], [])
        self.assertTrue(any('no declared reference' in note for note in answer['notes']))

    def test_rows_outside_the_table_are_rejected(self):
        with self.assertRaises(references.ReferenceError):
            references.query(self.loaded, self.schemas, 'Owner', 9)

    def test_unknown_tables_are_rejected_with_the_known_names(self):
        with self.assertRaises(references.ReferenceError) as caught:
            references.query(self.loaded, self.schemas, 'Missing', 0)
        self.assertIn('Owner', str(caught.exception))


@unittest.skipUnless(HAVE_SAMPLES, NO_SAMPLES)
class ExtractedContentTests(unittest.TestCase):
    """These run against the owner's own extraction and are skipped without it."""

    def test_every_characterised_table_round_trips_byte_identically(self):
        report = workspace.verify(SAMPLE_ROOT, tables.TABLES)
        self.assertEqual(report['failures'], [])
        self.assertGreaterEqual(report['tablesIdentical'], 40)
        self.assertEqual(report['messagesIdentical'], len(report['messages']))

    def test_stride_is_corroborated_for_most_files(self):
        report = workspace.verify(SAMPLE_ROOT, tables.TABLES)
        certain = [item for item in report['tables'] if item['certain']]
        self.assertGreater(len(certain), len(report['tables']) // 2)

    def test_the_worked_example_changes_exactly_two_bytes(self):
        source = SAMPLE_ROOT / 'base/0/data/Parameter/Break/KindParam.tp'
        original = source.read_bytes()
        schema = records.load_schema(tables.TABLES, 'KindParam')
        document = records.decode(original, schema)
        self.assertEqual(document['stride'], 120)
        before = document['records'][1]['base_stat_0']
        document['records'][1]['base_stat_0'] = before + 100
        rebuilt = records.encode(document, schema)
        changes = workspace.differences(original, rebuilt)
        self.assertEqual(len(original), len(rebuilt))
        self.assertEqual(len(changes), 2)
        self.assertEqual([item[0] for item in changes], [160, 161])
        self.assertEqual(rebuilt[160:162], (before + 100).to_bytes(2, 'little'))

    def test_a_monster_row_is_referenced_by_party_rows(self):
        loaded, _skipped = workspace.load_tables(SAMPLE_ROOT, tables.TABLES)
        answer = references.query(loaded, tables.TABLES, 'MonsterParam', 0)
        self.assertTrue(answer['references'])
        parties = [edge for edge in answer['references'] if edge['table'] == 'MonsterPartyTable']
        self.assertTrue(parties and parties[0]['rowCount'] > 0)

    def test_decoded_documents_survive_a_json_round_trip(self):
        source = SAMPLE_ROOT / 'base/0/data/Parameter/MonsterGrowthTable.tp'
        original = source.read_bytes()
        schema = records.load_schema(tables.TABLES, 'MonsterGrowthTable')
        text = records.dump_json(records.decode(original, schema))
        self.assertEqual(records.encode(json.loads(text), schema), original)


if __name__ == '__main__':
    unittest.main()
