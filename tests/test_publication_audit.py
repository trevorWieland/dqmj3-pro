import base64
import importlib.util
import json
import subprocess
import tempfile
import unittest
from pathlib import Path
from unittest import mock

ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location("publication_audit_test_module", ROOT / "toolscripts/publication_audit.py")
AUDIT = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(AUDIT)
SCRATCH = ROOT / "work/publication-audit/tests"

class PublicationAuditTests(unittest.TestCase):
    def repo(self):
        SCRATCH.mkdir(parents=True, exist_ok=True)
        temporary = tempfile.TemporaryDirectory(dir=SCRATCH)
        root = Path(temporary.name).resolve()
        self.assertTrue(root.is_relative_to(SCRATCH.resolve()))
        self.addCleanup(temporary.cleanup)
        self.command(root, "init", "-b", "main", "--quiet")
        self.write(root, "README.md", b"Authored source repository.\n")
        self.commit(root)
        return root

    def command(self, root, *args):
        result = subprocess.run(["git", "-c", "core.hooksPath=" + str(root / ".git/disabled-hooks"),
                                 "-c", "commit.gpgSign=false", "-c", "user.name=Audit Test",
                                 "-c", "user.email=audit@example.invalid", "-C", str(root), *args],
                                capture_output=True)
        self.assertEqual(result.returncode, 0, result.stderr.decode("utf-8", "replace"))
        return result.stdout

    def write(self, root, name, data):
        path = root / name
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_bytes(data)

    def commit(self, root, message="Synthetic audit fixture"):
        self.command(root, "add", "--all")
        self.command(root, "commit", "--quiet", "-m", message)

    def scan(self, root, **kwargs):
        return AUDIT.audit(root, allow={}, deny=set(), **kwargs)

    def rules(self, findings):
        return {item[0] for item in findings}

    def token(self):
        return b"ghp_" + (b"A9b8C7d6E5f4G3h2I1j0K9l8M7n6O5p4Q3r2")

    def private_pem(self):
        der = bytes.fromhex("302e020100300506032b657004220420") + bytes(range(32))
        return b"-----BEGIN " + b"PRIVATE KEY-----\n" + base64.b64encode(der) + b"\n-----END " + b"PRIVATE KEY-----\n"

    def test_private_paths_and_asset_suffixes(self):
        for name in ("INPUTS/misnamed.md", "build/result.c", "work/log.txt", "generated/output.json",
                     ".git/config", "docs/.env", "source/original.nut", "docs/asset.BCH"):
            self.assertTrue(AUDIT.inspect(name, b"plain text", {}, set()), name)

    def test_documentation_example_path_is_not_an_input(self):
        self.assertEqual(AUDIT.inspect("docs/.env.example", b"API_KEY=YOUR_API_KEY_HERE\n", {}, set()), [])

    def test_disguised_native_archive_and_shader_formats(self):
        images = [b"\x7fELF" + bytes(1100), b"PK\x03\x04" + bytes(1100), b"DVLB" + bytes(1100),
                  bytes(256) + b"NCCH" + bytes(1100), bytes(128) + b"CRO0" + bytes(1100)]
        for image in images:
            self.assertTrue(any(x[0].startswith("restricted-format-") for x in AUDIT.inspect("docs/readme.md", image, {}, set())))

    def test_original_plaintext_hash_is_blocked_after_rename(self):
        payload = b"local original_payload = 17;\n"
        self.assertIn("known-private-game-payload", self.rules(AUDIT.inspect("src/pretend.c", payload, {}, {AUDIT.sha(payload)})))

    def test_encoded_private_payloads_are_blocked(self):
        image = b"\x7fELF" + bytes(2048)
        for encoded in (image.hex().encode(), base64.b64encode(image)):
            self.assertIn("encoded-restricted-payload", self.rules(AUDIT.content_rules(b'{"data":"' + encoded + b'"}', set())))

    def test_main_public_allowlist_includes_the_verified_fixture(self):
        allowed = AUDIT.public_allowlist(ROOT)
        path = "evidence/lanes/native-archive032/xbb/synthetic-fixtures.json"
        self.assertEqual(allowed[path]["origin"], "independently-regenerated-authored-synthetic-xbb")
        self.assertEqual(AUDIT.inspect(path, (ROOT / path).read_bytes(), allowed, set()), [])

    def test_exact_authored_xbb_fixtures_are_independently_regenerated(self):
        allowed = AUDIT.authored_xbb_fixture(ROOT)
        path = "evidence/lanes/native-archive032/xbb/synthetic-fixtures.json"
        data = (ROOT / path).read_bytes()
        self.assertEqual(AUDIT.inspect(path, data, allowed, set()), [])
        self.assertIn("encoded-restricted-payload", self.rules(AUDIT.inspect("docs/other.json", data, allowed, set())))

    def test_known_private_hash_still_blocks_an_allowed_synthetic_payload(self):
        allowed = AUDIT.authored_xbb_fixture(ROOT)
        path = next(iter(allowed))
        hashes = allowed[path]["encodedSyntheticPayloadSha256"]
        data = (ROOT / path).read_bytes()
        denied = next(value for value in hashes if len(json.loads(data)["images"][value]["hex"]) >= 2048)
        self.assertIn("encoded-restricted-payload", self.rules(AUDIT.inspect(path, data, allowed, {denied})))

    def test_authored_fixture_and_generator_changes_fail_identity_check(self):
        root = self.repo()
        paths = ["toolscripts/native_archive032_fixtures.py", "evidence/lanes/native-archive032/xbb/synthetic-fixtures.json"]
        for changed in paths:
            for path in paths:
                self.write(root, path, (ROOT / path).read_bytes() + (b" " if path == changed else b""))
            with self.assertRaises(ValueError):
                AUDIT.authored_xbb_fixture(root)

    def test_long_encoded_original_text_hash_is_blocked(self):
        payload = (b"original game text\n" * 120)
        encoded = base64.b64encode(payload)
        self.assertIn("encoded-restricted-payload", self.rules(AUDIT.content_rules(encoded, {AUDIT.sha(payload)})))

    def test_token_findings_never_echo_the_value(self):
        token = self.token()
        findings = AUDIT.secrets(token)
        self.assertIn("github-token", self.rules(findings))
        self.assertNotIn(token.decode(), json.dumps(findings))

    def test_credential_in_filename_is_blocked_and_redacted(self):
        name = "docs/" + self.token().decode() + ".md"
        self.assertIn("github-token", self.rules(AUDIT.inspect(name, b"safe", {}, set())))
        self.assertEqual(AUDIT.safe_path(name)["path"], "<redacted-sensitive-path>")
        self.assertNotIn(self.token().decode(), json.dumps(AUDIT.safe_path(name)))

    def test_pkcs8_private_key_and_json_escaped_key_are_detected(self):
        pem = self.private_pem()
        for data in (pem, json.dumps({"private_key": pem.decode()}).encode()):
            self.assertIn("private-key-block", self.rules(AUDIT.secrets(data)))

    def test_public_sigstore_style_certificate_is_not_a_private_key(self):
        cert = b"-----BEGIN CERTIFICATE-----\n" + base64.b64encode(bytes(range(128))) + b"\n-----END CERTIFICATE-----\n"
        bundle = json.dumps({"verificationMaterial": {"certificate": {"rawBytes": base64.b64encode(cert).decode()}},
                             "pem": cert.decode(), "signature": base64.b64encode(bytes(range(64))).decode()}).encode()
        self.assertEqual(AUDIT.content_rules(bundle, set()), [])
        self.assertIn("github-token", self.rules(AUDIT.secrets(bundle + self.token())))

    def test_documented_headers_and_placeholders_are_not_credentials(self):
        prose = b"Use a PRIVATE KEY header with a value read from the environment.\napi_key = 'YOUR_API_KEY_HERE'\n"
        self.assertEqual(AUDIT.secrets(prose), [])

    def test_scanner_source_patterns_are_not_private_material(self):
        self.assertEqual(AUDIT.secrets((ROOT / "toolscripts/publication_audit.py").read_bytes()), [])

    def test_armored_pgp_and_putty_require_private_material(self):
        payload = base64.b64encode(bytes(range(64)))
        pgp = b"-----BEGIN " + b"PGP PRIVATE KEY BLOCK-----\n\n" + payload + b"\n-----END " + b"PGP PRIVATE KEY BLOCK-----\n"
        putty = b"PuTTY-User-Key-File-" + b"3: ssh-ed25519\nPublic-Lines: 1\n" + payload + b"\nPrivate-Lines: 1\n" + payload
        self.assertIn("private-key-block", self.rules(AUDIT.secrets(pgp)))
        self.assertIn("private-key-container", self.rules(AUDIT.secrets(putty)))

    def test_public_resource_links_are_rejected_before_read(self):
        with mock.patch.object(Path, "is_symlink", return_value=True), mock.patch.object(Path, "read_bytes") as reader:
            with self.assertRaisesRegex(ValueError, "resource link"):
                AUDIT.public_allowlist(ROOT)
            reader.assert_not_called()

    def test_hex_credential_literal_is_not_mistaken_for_a_digest(self):
        value = ("0123456789abcdef" * 4).encode()
        self.assertIn("credential-literal", self.rules(AUDIT.secrets(b'api_key = "' + value + b'"')))

    def test_public_allowance_binds_both_path_and_content(self):
        data = b"print(1);\n"
        path = "public/example.nut"
        allowed = {path: {"sha256": AUDIT.sha(data), "size": len(data)}}
        self.assertEqual(AUDIT.inspect(path, data, allowed, set()), [])
        self.assertTrue(AUDIT.inspect(path, data + b"1", allowed, set()))
        self.assertTrue(AUDIT.inspect("public/other.nut", data, allowed, set()))

    def test_actual_public_resources_have_exact_manifest_identities(self):
        allowed = AUDIT.public_allowlist(ROOT)
        self.assertEqual(len(allowed), 82)
        for path in ("source/squirrel-wave001/upstream/doc/squirrel2.pdf",
                     "source/squirrel-wave001/upstream/etc/test.nut", AUDIT.HEADER_PATH):
            self.assertEqual(AUDIT.inspect(path, (ROOT / path).read_bytes(), allowed, set()), [])
        self.assertTrue(AUDIT.inspect(AUDIT.HEADER_PATH, (ROOT / AUDIT.HEADER_PATH).read_bytes() + b"x", allowed, set()))

    def test_manifest_replacement_cannot_expand_the_public_allowance(self):
        root = self.repo()
        self.write(root, AUDIT.MANIFEST, b'{"files":[]}\n')
        with self.assertRaisesRegex(ValueError, "manifest identity"):
            AUDIT.public_allowlist(root)

    def test_report_provenance_hash_is_not_an_original_payload(self):
        root = self.repo()
        source = b'{"metadata":true}\n'
        self.write(root, "evidence/inventory/base.json", source)
        original = b"private original game text"
        metadata = {"inventoryInput": {"path": "evidence/inventory/base.json", "bytes": len(source), "sha256": AUDIT.sha(source)},
                    "occurrences": [{"path": "/data/original.nut", "size": len(original), "sha256": AUDIT.sha(original)}]}
        self.write(root, "evidence/lanes/container-inventory-wave003/base.json", json.dumps(metadata).encode())
        hashes, _ = AUDIT.private_hashes(root)
        self.assertIn(AUDIT.sha(original), hashes)
        self.assertNotIn(AUDIT.sha(source), hashes)

    def test_deleted_private_file_remains_a_history_finding(self):
        root = self.repo()
        self.write(root, "inputs/hidden.cia", b"synthetic private fixture")
        self.commit(root)
        self.command(root, "rm", "inputs/hidden.cia")
        self.commit(root)
        report = self.scan(root, require_clean=True)
        self.assertFalse(report["passed"])
        self.assertTrue(any(x.get("path") == "inputs/hidden.cia" and x["scope"] == "history" for x in report["findings"]))

    def test_staged_payload_overwritten_in_worktree_is_still_inspected(self):
        root = self.repo()
        self.write(root, "docs/note.md", b"\x7fELF" + bytes(100))
        self.command(root, "add", "docs/note.md")
        self.write(root, "docs/note.md", b"safe current text\n")
        report = self.scan(root)
        self.assertTrue(any(x["scope"] == "history" and x["rule"] == "restricted-format-elf" for x in report["findings"]))

    def test_all_ref_histories_and_commit_messages_are_scanned(self):
        root = self.repo()
        self.command(root, "checkout", "--quiet", "-b", "side")
        self.write(root, "src/helper.c", b"int helper(void) { return 0; }\n")
        self.commit(root, self.token().decode())
        self.command(root, "tag", "retained-side")
        self.command(root, "checkout", "--quiet", "main")
        self.command(root, "branch", "-D", "side")
        report = self.scan(root, require_clean=True)
        self.assertTrue(any(x["scope"] == "history-metadata" and x["rule"] == "github-token" for x in report["findings"]))
        self.assertNotIn(self.token().decode(), json.dumps(report))

    def test_ignored_private_files_are_not_read_but_untracked_files_are(self):
        root = self.repo()
        self.write(root, ".gitignore", b"/inputs/\n/work/\n")
        self.commit(root)
        self.write(root, "inputs/private.cia", bytes(100))
        self.assertTrue(self.scan(root)["passed"])
        self.write(root, "leak.txt", b"\x7fELF" + bytes(100))
        self.assertFalse(self.scan(root)["passed"])

    def test_sensitive_ref_name_is_detected_without_echoing_it(self):
        root = self.repo()
        self.command(root, "branch", self.token().decode())
        report = self.scan(root)
        self.assertTrue(any(x["scope"] == "git-ref-metadata" for x in report["findings"]))
        self.assertNotIn(self.token().decode(), json.dumps(report))

    def test_clean_revision_gate_preserves_authored_source(self):
        root = self.repo()
        self.write(root, "src/helper.c", b"int helper(void) { return 17; }\n")
        preflight = self.scan(root)
        self.assertTrue(preflight["passed"])
        self.assertFalse(preflight["publicationReady"])
        self.assertFalse(self.scan(root, require_clean=True)["passed"])
        self.commit(root)
        final = self.scan(root, require_clean=True)
        self.assertTrue(final["publicationReady"])
        self.assertTrue(any(x["path"] == "src/helper.c" for x in final["workingFiles"]))

    def test_lfs_pointer_and_unknown_binary_fail_closed(self):
        for data in (b"version https://git-lfs.github.com/spec/v1\noid sha256:" + b"0" * 64 + b"\nsize 10\n", b"\x00payload"):
            self.assertTrue(AUDIT.inspect("docs/object.txt", data, {}, set()))

    def test_submodule_content_is_not_silently_skipped(self):
        root = self.repo()
        commit = self.command(root, "rev-parse", "HEAD").decode().strip()
        self.command(root, "update-index", "--add", "--cacheinfo", "160000," + commit + ",external")
        self.command(root, "commit", "--quiet", "-m", "Synthetic uninspected gitlink")
        report = self.scan(root)
        self.assertTrue(any(x["rule"] == "uninspected-link-or-submodule" for x in report["findings"]))

if __name__ == "__main__":
    unittest.main()

