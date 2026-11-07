import copy
import hashlib
import importlib.util
import io
import json
import struct
import tempfile
import unittest
import zipfile
from pathlib import Path
from unittest.mock import patch


ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location("compile_sources", ROOT / "toolscripts/compile_sources.py")
BUILD = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(BUILD)
TOOLS = BUILD.public_compiler
SCRATCH = ROOT / "work/source-compile-ci/tests"
SCRATCH.mkdir(parents=True, exist_ok=True)


class CompileSourcesTests(unittest.TestCase):
    def temporary(self):
        directory = tempfile.TemporaryDirectory(dir=SCRATCH)
        self.addCleanup(directory.cleanup)
        root = Path(directory.name).resolve()
        self.assertTrue(root.is_relative_to(SCRATCH.resolve()))
        return root

    def minimal(self, root):
        source = root / "src/native/wave001/unit.c"
        source.parent.mkdir(parents=True)
        source.write_text("unsigned int unit(unsigned int value) { return value + 1u; }\n")
        config = {"schemaVersion": 1, "scope": {"root": "src/native", "waves": ["wave001"]},
                  "units": [{"source": "src/native/wave001/unit.c", "headers": [], "role": "candidate-native"}], "excludedSources": []}
        (root / "config").mkdir()
        (root / BUILD.CONFIG).write_text(json.dumps(config))
        return config

    def save(self, root, config):
        (root / BUILD.CONFIG).write_text(json.dumps(config))

    def archive_fixture(self, root):
        payload = b"public compiler fixture"
        name = "archive/bin/clang.exe"
        archive = root / "compiler.zip"
        with zipfile.ZipFile(archive, "w") as target:
            target.writestr(name, payload)
        package = {"url": "https://dl.google.com/android/repository/compiler.zip", "bytes": archive.stat().st_size,
                   "archiveSha1": TOOLS.digest(archive, "sha1"), "archivePrefix": "archive/bin/"}
        files = [{"path": "tools/clang-21/clang.exe", "bytes": len(payload), "sha256": hashlib.sha256(payload).hexdigest()}]
        return archive, package, files

    def test_actual_source_census_and_historical_abi_exclusion(self):
        config = BUILD.read_config(ROOT)
        self.assertEqual(len(config["units"]), 54)
        excluded = config["excludedSources"]
        self.assertEqual([item["source"] for item in excluded], ["src/native/wave003/setters.c"])
        self.assertIs(excluded[0]["activeLinking"], False)
        self.assertEqual(excluded[0]["replacement"], "src/native/wave003/abi-qualified/setters.c")
        self.assertEqual(sum(unit["role"] == "fixture-support" for unit in config["units"]), 1)

    def test_new_source_cannot_be_silently_skipped(self):
        root = self.temporary()
        self.minimal(root)
        (root / "src/native/wave001/new.c").write_text("unsigned int new_unit(void) { return 2; }\n")
        with self.assertRaisesRegex(RuntimeError, "Source census differs"):
            BUILD.read_config(root)

    def test_component_sources_require_complete_census_and_explicit_dependencies(self):
        root = self.temporary()
        config = self.minimal(root)
        folder = root / "source/squirrel-wave002"
        folder.mkdir(parents=True)
        (folder / "unit.c").write_text('#include "types.h"\nint component(void) { return 1; }\n')
        (folder / "types.h").write_text("typedef unsigned int Word;\n")
        config["componentRoots"] = ["source/squirrel-wave002"]
        self.save(root, config)
        with self.assertRaisesRegex(RuntimeError, "Source census differs"):
            BUILD.read_config(root)
        config["units"].append({"source": "source/squirrel-wave002/unit.c", "headers": [],
                                "role": "bounded-component"})
        self.save(root, config)
        with self.assertRaisesRegex(RuntimeError, "Explicit header dependency"):
            BUILD.read_config(root)
        config["units"][-1]["headers"] = ["source/squirrel-wave002/types.h"]
        self.save(root, config)
        self.assertEqual(len(BUILD.read_config(root)["units"]), 2)

    def test_component_scope_rejects_private_duplicate_and_missing_roots(self):
        for scopes in [["work/private"], ["source/squirrel-wave002"] * 2,
                       ["source/squirrel-wave999"]]:
            with self.subTest(scopes=scopes):
                root = self.temporary()
                config = self.minimal(root)
                config["componentRoots"] = scopes
                self.save(root, config)
                with self.assertRaisesRegex(RuntimeError, "component scope"):
                    BUILD.read_config(root)

    def test_platform_target_lists_cannot_be_empty_unknown_or_duplicated(self):
        for targets in [[], ["unknown"], ["windows-x64"] * 2, "windows-x64"]:
            with self.subTest(targets=targets):
                root = self.temporary()
                config = self.minimal(root)
                config["units"][0]["targets"] = targets
                self.save(root, config)
                with self.assertRaisesRegex(RuntimeError, "unit targets"):
                    BUILD.read_config(root)

    def test_unknown_layout_profile_fails_before_compilation(self):
        root = self.temporary()
        config = self.minimal(root)
        config["units"][0]["layoutProfile"] = "guess"
        self.save(root, config)
        with self.assertRaisesRegex(RuntimeError, "layout profile"):
            BUILD.read_config(root)

    def test_reviewed_packing_is_applied_to_actual_compiler(self):
        root = self.temporary()
        fixture = ROOT / "work/source-compile-ci/tests" / (root.name + "-packed.c")
        self.addCleanup(fixture.unlink, missing_ok=True)
        fixture.write_text('typedef struct { void *pointer; } Record;\n'
                           '_Static_assert(_Alignof(Record) == 4, "packing");\n')
        unit = {"source": fixture.relative_to(ROOT).as_posix(), "headers": [], "role": "layout-fixture"}
        self.assertEqual(BUILD.run_unit(ROOT, unit, "windows-x64", root)["status"], "failed")
        unit["layoutProfile"] = "packed-4"
        self.assertEqual(BUILD.run_unit(ROOT, unit, "windows-x64", root)["status"], "compiled")

    def test_component_census_and_platform_restrictions_are_explicit(self):
        config = BUILD.read_config(ROOT)
        expected = {f"source/squirrel-wave{wave:03d}" for wave in range(2, 6)}
        self.assertEqual(set(config["componentRoots"]), expected)
        restricted = [unit for unit in config["units"] if "targets" in unit]
        self.assertEqual({unit["source"] for unit in restricted},
                         {folder + "/host_runner.c" for folder in expected} | {"src/native/wave014/platform_marker.c"})
        self.assertTrue(all(unit["targets"] == ["windows-x64"] for unit in restricted))

    def test_duplicate_or_historical_active_conflicts_fail(self):
        root = self.temporary()
        config = self.minimal(root)
        config["units"].append(copy.deepcopy(config["units"][0]))
        self.save(root, config)
        with self.assertRaisesRegex(RuntimeError, "Duplicated or conflicting"):
            BUILD.read_config(root)

    def test_new_header_requires_explicit_dependency(self):
        root = self.temporary()
        self.minimal(root)
        (root / "src/native/wave001/unit.c").write_text('#include "types.h"\nunsigned int unit(void) { return 1u; }\n')
        (root / "src/native/wave001/types.h").write_text("typedef unsigned int Value;\n")
        with self.assertRaisesRegex(RuntimeError, "Explicit header dependency"):
            BUILD.read_config(root)

    def test_system_and_external_headers_are_not_implicit_inputs(self):
        root = self.temporary()
        self.minimal(root)
        source = root / "src/native/wave001/unit.c"
        source.write_text("#include <stdint.h>\n")
        with self.assertRaisesRegex(RuntimeError, "System headers"):
            BUILD.read_config(root)
        source.write_text('#include "../../../../escape.h"\n')
        with self.assertRaisesRegex(RuntimeError, "dependency escapes"):
            BUILD.read_config(root)
        source.write_text('#define INPUT "types.h"\n#include INPUT\n')
        with self.assertRaisesRegex(RuntimeError, "Only explicit literal"):
            BUILD.read_config(root)
        with self.assertRaisesRegex(RuntimeError, "Path escapes"):
            TOOLS.contained(root, "../outside")

    def test_archive_and_member_hashes_checked_before_install(self):
        root = self.temporary()
        archive, package, files = self.archive_fixture(root)
        TOOLS.verify_archive(archive, package)
        bad = copy.deepcopy(files)
        bad[0]["sha256"] = "0" * 64
        with self.assertRaisesRegex(RuntimeError, "member SHA256 mismatch"):
            TOOLS.extract(root, archive, package, bad)
        self.assertFalse((root / files[0]["path"]).exists())
        TOOLS.extract(root, archive, package, files)
        self.assertEqual(TOOLS.verify(root, files), files)
        (root / files[0]["path"]).write_bytes(b"changed")
        with self.assertRaisesRegex(RuntimeError, "preserved unchanged"):
            TOOLS.extract(root, archive, package, files)
        self.assertEqual((root / files[0]["path"]).read_bytes(), b"changed")

    def test_official_archive_checksum_failure_preserves_file(self):
        root = self.temporary()
        archive, package, files = self.archive_fixture(root)
        package["archiveSha1"] = "0" * 40
        with self.assertRaisesRegex(RuntimeError, "archive checksum mismatch"):
            TOOLS.verify_archive(archive, package)
        self.assertTrue(archive.exists())
        self.assertFalse((root / files[0]["path"]).exists())

    def test_cold_download_checks_official_archive_and_extracts_only_needed_member(self):
        root = self.temporary()
        archive, package, files = self.archive_fixture(root)
        with patch.object(TOOLS.urllib.request, "urlopen", return_value=io.BytesIO(archive.read_bytes())) as network:
            downloaded = TOOLS.download(root / "cache", package)
        self.assertEqual(network.call_count, 1)
        TOOLS.extract(root, downloaded, package, files)
        with patch.object(TOOLS.urllib.request, "urlopen", side_effect=AssertionError("Unexpected network")):
            self.assertEqual(TOOLS.download(root / "cache", package), downloaded)
        self.assertEqual({p.name for p in (root / "tools/clang-21").iterdir()}, {"clang.exe"})

    def test_duplicate_zip_member_is_rejected(self):
        root = self.temporary()
        archive, package, files = self.archive_fixture(root)
        with zipfile.ZipFile(archive, "a") as target:
            with self.assertWarns(UserWarning):
                target.writestr("archive/bin/clang.exe", b"public compiler fixture")
        with self.assertRaisesRegex(RuntimeError, "missing or duplicated"):
            TOOLS.extract(root, archive, package, files)

    def test_object_architecture_is_checked(self):
        for target, bits, machine in [("arm32-mpcore", 1, 40), ("android-arm64-api29", 2, 183)]:
            content = bytearray(64)
            content[:6] = b"\x7fELF" + bytes([bits, 1])
            struct.pack_into("<HH", content, 16, 1, machine)
            self.assertEqual(BUILD.object_identity(content, target)["machine"], machine)
            struct.pack_into("<H", content, 18, 62)
            with self.assertRaisesRegex(RuntimeError, "Wrong ELF object"):
                BUILD.object_identity(content, target)
        content = struct.pack("<HH", 0x8664, 1) + bytes(16)
        self.assertEqual(BUILD.object_identity(content, "windows-x64")["format"], "COFF")
        with self.assertRaisesRegex(RuntimeError, "Expected a Windows"):
            BUILD.object_identity(b"", "windows-x64")

    def test_verify_does_not_download_or_require_other_app_shell_tools(self):
        package, files = TOOLS.inputs(ROOT)
        self.assertEqual({Path(item["path"]).name for item in files}, TOOLS.MEMBERS)
        self.assertEqual(package["bytes"], 727980788)
        with patch.object(TOOLS.urllib.request, "urlopen", side_effect=AssertionError("Unexpected network")):
            self.assertEqual(len(TOOLS.bootstrap(ROOT, verify_only=True)["files"]), 4)
            root = self.temporary()
            manifest = root / TOOLS.MANIFEST
            manifest.parent.mkdir(parents=True)
            manifest.write_bytes((ROOT / TOOLS.MANIFEST).read_bytes())
            with self.assertRaisesRegex(RuntimeError, "Missing public compiler member"):
                TOOLS.bootstrap(root, verify_only=True)

    def test_warning_allowance_is_bound_to_exact_abi_declarations(self):
        unit = BUILD.read_config(ROOT)["units"][0]
        source = (ROOT / unit["source"]).read_text()
        lines = source.splitlines()
        diagnostics = []
        for item in unit["allowedUnusedParameters"]:
            number = next(index + 1 for index, line in enumerate(lines) if item["function"] in line)
            diagnostics.append(f"{unit['source']}:{number}:21: warning: unused parameter 'x' [-Wunused-parameter]")
        text = "\n".join(diagnostics) + "\n4 warnings generated.\n"
        self.assertEqual(len(BUILD.warning_check(ROOT, unit, "", text)), 4)
        with self.assertRaisesRegex(RuntimeError, "Unapproved compiler diagnostic"):
            BUILD.warning_check(ROOT, unit, "", text + "warning: unrelated warning\n")
        with self.assertRaisesRegex(RuntimeError, "outside the reviewed"):
            BUILD.warning_check(ROOT, unit, "", text + diagnostics[0] + "\n")
        with self.assertRaisesRegex(RuntimeError, "exception list is stale"):
            BUILD.warning_check(ROOT, unit, "", "")

    def test_actual_compiler_rejects_wrong_source_and_unreviewed_warning(self):
        root = self.temporary()
        _, files = TOOLS.inputs(ROOT)
        TOOLS.verify(ROOT, files)
        fixture = ROOT / "work/source-compile-ci/tests" / (root.name + "-bad.c")
        self.addCleanup(fixture.unlink, missing_ok=True)
        unit = {"source": fixture.relative_to(ROOT).as_posix(), "headers": [], "role": "negative-fixture"}
        fixture.write_text("unsigned int bad(void) { return missing_value; }\n")
        rows = [BUILD.run_unit(ROOT, unit, target, root) for target in BUILD.TARGETS]
        self.assertTrue(all(row["status"] == "failed" and row["exitCode"] != 0 for row in rows))
        self.assertTrue(all("undeclared identifier" in (ROOT / row["diagnostics"]).read_text() for row in rows))
        fixture.write_text("unsigned int bad(unsigned int unused) { return 1u; }\n")
        row = BUILD.run_unit(ROOT, unit, "arm32-mpcore", root)
        self.assertEqual(row["status"], "failed")
        self.assertIn("unused parameter", (ROOT / row["diagnostics"]).read_text())

    def test_workflow_is_fork_safe_and_artifacts_are_diagnostics_only(self):
        workflow = (ROOT / ".github/workflows/compile.yml").read_text()
        self.assertIn("  pull_request:", workflow)
        self.assertNotIn("pull_request_target", workflow)
        self.assertNotIn("secrets.", workflow)
        self.assertIn("  contents: read", workflow)
        self.assertIn("persist-credentials: false", workflow)
        self.assertIn("work/source-compile-ci/diagnostics/*.txt", workflow)
        self.assertIn("work/source-compile-ci/manifests/*.json", workflow)
        self.assertEqual(len(__import__("re").findall(r"uses: actions/[a-z-]+@[0-9a-f]{40}\b", workflow)), 3)
        for prohibited in ["inputs/", "generated/", "objects/", "downloads/", "pull-requests: write", "id-token: write"]:
            self.assertNotIn(prohibited, workflow)

    def test_compiler_executable_is_absolute_before_child_cwd_is_applied(self):
        root = self.temporary()
        fixture = ROOT / "work/source-compile-ci/tests" / (root.name + "-path.c")
        self.addCleanup(fixture.unlink, missing_ok=True)
        fixture.write_text("unsigned int path_unit(void) { return 1u; }\n")
        unit = {"source": fixture.relative_to(ROOT).as_posix(), "headers": [], "role": "path-fixture"}
        real_run = BUILD.subprocess.run
        observed = []
        def launch(argv, **kwargs):
            observed.append(argv[0])
            self.assertTrue(Path(argv[0]).is_absolute())
            return real_run(argv, **kwargs)
        with patch.object(BUILD.subprocess, "run", side_effect=launch):
            row = BUILD.run_unit(ROOT, unit, "windows-x64", root)
        self.assertEqual(row["status"], "compiled")
        self.assertEqual(observed, [str(ROOT / "tools/clang-21/clang.exe")])


if __name__ == "__main__":
    unittest.main()
