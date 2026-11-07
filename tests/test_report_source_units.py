import copy
import hashlib
import json
from pathlib import Path
import sys
import tempfile
import unittest

ROOT=Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT/"toolscripts"))
import report_source_units as routing
from objdiff_objects import complement

class SourceDirectedUnitsTests(unittest.TestCase):
    def setUp(self):
        scratch=ROOT/"work/source-directed-unit-tests";scratch.mkdir(parents=True,exist_ok=True)
        folder=tempfile.TemporaryDirectory(dir=scratch);self.addCleanup(folder.cleanup);self.root=Path(folder.name).resolve()
        self.source=self.root/"source/squirrel-wave041/controller.c";self.source.parent.mkdir(parents=True)
        self.source.write_text("int actual_controller(void) { return 1; }\n",encoding="utf-8")
        self.proof=self.root/"evidence/verification/controller.json";self.proof.parent.mkdir(parents=True)
        self.proof.write_text(json.dumps({"completeUnmodifiedBatchReplayPassed":True}),encoding="utf-8")
        self.config={"schemaVersion":1,"version":"update-content0","units":[{"symbol":"fn_00100008",
            "sourcePath":self.source.relative_to(self.root).as_posix(),"sourceName":"actual_controller",
            "sourceSha256":hashlib.sha256(self.source.read_bytes()).hexdigest(),
            "independentReplay":{"path":self.proof.relative_to(self.root).as_posix(),
                "sha256":hashlib.sha256(self.proof.read_bytes()).hexdigest()}}]}
        self.census={"functions":[{"address":0x100008,"mode":"ARM","textBodyBytes":8,
            "ranges":[{"start":0x100008,"endExclusive":0x100010,"bytes":8}]}]}
        self.save()

    def save(self):
        path=self.root/routing.CONFIG;path.parent.mkdir(parents=True,exist_ok=True)
        path.write_text(json.dumps(self.config),encoding="utf-8")

    def test_unit_alias_direction_supports_the_quick_source_file_index(self):
        self.assertEqual(routing.unit_names(self.config), "#define actual_controller fn_00100008\n")

    def test_unit_aliases_reject_conflicting_source_names(self):
        self.config['units'].append({**self.config['units'][0], 'symbol': 'fn_00100010'})
        with self.assertRaisesRegex(ValueError, 'unique valid C names'):
            routing.unit_names(self.config)

    def test_partition_preserves_every_byte_and_adds_no_exact_source(self):
        accepted=[{"address":0x100000,"instructionBytes":4}]
        units,pin=routing.load(self.root,self.census,accepted)
        gaps=complement([*accepted,*units],0x100000,32)
        self.assertEqual(gaps,[(0x100004,0x100008),(0x100010,0x100020)])
        self.assertEqual(sum(high-low for low,high in gaps)+4+units[0]["instructionBytes"],32)
        self.assertEqual(units[0]["name"],"source/squirrel-wave041/controller")
        self.assertEqual(pin["path"],routing.CONFIG)

    def test_changed_source_or_replay_fails_closed(self):
        self.source.write_text("int actual_controller(void) { return 2; }\n",encoding="utf-8")
        with self.assertRaisesRegex(ValueError,"identity differs"):routing.load(self.root,self.census,[])
        self.config["units"][0]["sourceSha256"]=hashlib.sha256(self.source.read_bytes()).hexdigest();self.save()
        self.proof.write_text("{}",encoding="utf-8")
        with self.assertRaisesRegex(ValueError,"independent replay"):routing.load(self.root,self.census,[])

    def test_exact_overlap_and_nested_canonical_entries_rejected(self):
        with self.assertRaisesRegex(ValueError,"overlaps exact source"):
            routing.load(self.root,self.census,[{"address":0x100004,"instructionBytes":8}])
        self.census["functions"].append({"address":0x10000c})
        with self.assertRaisesRegex(ValueError,"another canonical entry"):routing.load(self.root,self.census,[])

    def test_fragmented_or_duplicate_requests_rejected(self):
        other=copy.deepcopy(self.census);other["functions"][0]["ranges"].append({"start":0x100020,"endExclusive":0x100024})
        with self.assertRaisesRegex(ValueError,"complete unmatched"):routing.load(self.root,other,[])
        self.config["units"]*=2;self.save()
        with self.assertRaisesRegex(ValueError,"Duplicated"):routing.load(self.root,self.census,[])

    def test_private_source_path_rejected(self):
        self.config["units"][0]["sourcePath"]="work/controller.c";self.save()
        with self.assertRaisesRegex(ValueError,"reviewed source roots"):routing.load(self.root,self.census,[])

    def test_absent_config_preserves_previous_reporting_contract(self):
        (self.root/routing.CONFIG).unlink()
        self.assertEqual(routing.load(self.root,self.census,[]),([],None))

    def test_refinement_keeps_every_original_classification_boundary(self):
        routing.verify_refinement([(0,4),(4,12)],[(0,4),(4,3),(7,5),(12,4)])
        for actual in [[(0,16)],[(0,4),(4,11)],[(0,4),(4,13)],[(0,4),(5,11)]]:
            with self.subTest(actual=actual),self.assertRaises(ValueError):
                routing.verify_refinement([(0,4),(4,12)],actual)

if __name__=="__main__":unittest.main()
