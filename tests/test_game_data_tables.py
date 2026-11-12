import json
import sys
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from gamedata import crossref, records, references, tables, workspace   # noqa: E402
from gamedata.fields import Field                               # noqa: E402
from gamedata.schema import TableSchema, at_least_rows, index_at_zero  # noqa: E402


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
            if schema.certain and schema.layout == 'flat':
                self.assertTrue(schema.witnesses, schema.name)

    def test_non_flat_layouts_declare_their_own_container(self):
        for schema in tables.TABLES:
            if schema.layout != 'flat':
                self.assertIn(schema.layout, ('indexed', 'named'), schema.name)
                self.assertTrue(schema.certain, schema.name)

    def test_every_uncharacterised_family_states_a_measurement(self):
        for name, reason in tables.UNCHARACTERISED.items():
            self.assertGreater(len(reason), 40, name)
            self.assertNotIn(name, {schema.name for schema in tables.TABLES})

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

    def test_divisor_mode_refuses_a_stride_two_witnesses_accept(self):
        body = (0).to_bytes(2, 'little') + b'\0\0' + (1).to_bytes(2, 'little') + b'\0\0'
        ambiguous = TableSchema('Ambiguous', b'AMBI', (4,), candidates='divisors',
                                fields=(Field('index', 0, 'u16'),),
                                witnesses=(index_at_zero(),),
                                basis='synthetic ambiguity')
        with self.assertRaises(Exception) as caught:
            ambiguous.resolve(body)
        self.assertIn('candidate strides', str(caught.exception))

    def test_divisor_mode_accepts_the_one_witnessed_stride(self):
        body = (0).to_bytes(2, 'little') + b'\0\0' + (1).to_bytes(2, 'little') + b'\0\0'
        resolved = TableSchema('Resolved', b'RESO', (4,), candidates='divisors',
                               fields=(Field('index', 0, 'u16'),),
                               witnesses=(index_at_zero(), at_least_rows(2)),
                               basis='synthetic resolution')
        self.assertEqual(resolved.resolve(body)[0], 4)


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

    def test_count_peers_report_equal_row_counts_without_claiming_an_edge(self):
        answer = references.query(self.loaded, self.schemas, 'Owner', 0)
        self.assertEqual(answer['countPeers'], [])
        self.assertIn({'space': 'thing', 'owner': 'Owner'}, answer['identifierSpaces'])

    def test_indexed_documents_are_rows_for_the_reference_query(self):
        document = {'entries': [{'offset': 0, 'length': 2},
                                {'offset': 2, 'length': 2}]}
        self.assertEqual(references.rows_of(document), document['entries'])
        self.assertEqual(references.rows_of({'records': [1, 2]}), [1, 2])

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
        self.assertGreaterEqual(report['tablesIdentical'], 75)
        self.assertGreaterEqual(report['families'], 50)
        self.assertEqual(report['messagesIdentical'], len(report['messages']))

    def test_stride_is_corroborated_for_most_files(self):
        report = workspace.verify(SAMPLE_ROOT, tables.TABLES)
        certain = [item for item in report['tables'] if item['certain']]
        self.assertGreater(len(certain), len(report['tables']) // 2)

    def test_the_update_feat_table_resolves_to_seventy_two_bytes(self):
        path = SAMPLE_ROOT / 'update/0/data/Parameter/FeatParam.tp'
        schema = records.load_schema(tables.TABLES, 'FeatParam')
        document = records.decode(path.read_bytes(), schema)
        self.assertEqual((document['stride'], document['count']), (72, 532))

    def test_the_ai_action_container_round_trips_and_exposes_its_entries(self):
        path = SAMPLE_ROOT / 'base/0/data/Parameter/AIAction.tp'
        original = path.read_bytes()
        schema = records.load_schema(tables.TABLES, 'AIAction')
        document = records.decode(original, schema)
        self.assertEqual(document['count'], 636)
        self.assertEqual(document['entries'][1], {'offset': 0, 'length': 18})
        self.assertEqual(len(document['pools']), 2)
        self.assertEqual(len(document['pools'][0]), len(document['pools'][1]))
        self.assertEqual(records.encode(document, schema), original)

    def test_the_battle_script_container_names_and_records_round_trip(self):
        path = SAMPLE_ROOT / 'base/0/data/Parameter/BattleScriptActionParam.tp'
        original = path.read_bytes()
        schema = records.load_schema(tables.TABLES, 'BattleScriptActionParam')
        document = records.decode(original, schema)
        self.assertEqual((document['nameCount'], document['stride'], document['count']),
                         (360, 64, 1024))
        self.assertEqual(document['names'][0], '')
        self.assertEqual(document['names'][1], 'EF030_10_TENSION01')
        self.assertEqual(records.encode(document, schema), original)

    def test_kind_names_are_corroborated_by_message_payloads(self):
        runs = crossref.message_runs(SAMPLE_ROOT)
        schema = records.load_schema(tables.TABLES, 'KindParam')
        source = SAMPLE_ROOT / 'base/0/data/Parameter/Break/KindParam.tp'
        document = records.decode(source.read_bytes(), schema)
        names = [row['name'] for row in document['records'] if row['name']]
        found = sum(1 for name in names if name in runs)
        self.assertGreater(found / len(names), 0.8)

    def test_battle_script_names_occur_in_battle_scripts(self):
        schema = records.load_schema(tables.TABLES, 'BattleScriptActionParam')
        source = SAMPLE_ROOT / 'base/0/data/Parameter/BattleScriptActionParam.tp'
        document = records.decode(source.read_bytes(), schema)
        scripts = crossref.script_text(SAMPLE_ROOT)
        found = sum(1 for name in set(document['names']) if name and name in scripts)
        self.assertGreater(found, 10)

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
