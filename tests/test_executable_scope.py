import hashlib
import json
import struct
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import executable_scope as scope


def sha(data):
    return hashlib.sha256(data).hexdigest()


class ExecutableScopeTests(unittest.TestCase):
    def setUp(self):
        base = ROOT / 'work/executable-scope/tests'
        base.mkdir(parents=True, exist_ok=True)
        self.temporary = tempfile.TemporaryDirectory(dir=base)
        self.addCleanup(self.temporary.cleanup)
        self.root = Path(self.temporary.name)

    def mapping(self):
        code = bytes(0x3000)
        header = bytearray(2048)
        segments = []
        for index, (name, position, size) in enumerate([('text', 0x10, 256), ('rodata', 0x20, 128), ('data', 0x30, 64)]):
            struct.pack_into('<III', header, position, 0x100000 + index * 0x1000, 1, size)
            segments.append({'name': name, 'address': 0x100000 + index * 0x1000, 'pages': 1,
                             'initializedBytes': size, 'codeBinOffset': index * 0x1000})
        metadata = {'programId': 'synthetic', 'codeSha256': sha(code), 'exheaderSha256': sha(header),
                    'layout': {'segments': segments}}
        return metadata, code, header

    def audit(self):
        source = self.root / 'source.json'
        source.write_text('{}')
        payload = {'identity': 'content0/resource', 'bytes': 12, 'sha256': '1' * 64,
                   'signatureScanBytes': 12, 'magic4': '4353544d'}
        return {'label': 'test', 'decoderResiduals': [], 'previousUnresolvedStillUnclassified': [],
                'allTopLevelRomfsBytesSignatureCoveredDirectlyOrByVerifiedAlias': True,
                'inventoryInput': scope.pin(self.root, source), 'payloadOccurrences': [payload],
                'counts': {'streamVerifiedPayloadOccurrences': 1}, 'uniquePayloads': 1,
                'topLevelRomfsStreamVerifiedBytes': 12, 'signatureAndProgramCandidates': []}

    def test_initialized_text_excludes_page_padding_rodata_and_data(self):
        metadata, code, header = self.mapping()
        result = scope.main_mapping(metadata, code, header)
        self.assertEqual(result['nativeTextGrossBytes'], 256)
        self.assertEqual(result['excludedTextPagePaddingBytes'], 3840)
        self.assertEqual(result['excludedInitializedRodataBytes'], 128)
        self.assertEqual(result['excludedInitializedDataBytes'], 64)
        self.assertFalse(result['instructionOnlyMeasure'])

    def test_changed_image_identity_is_rejected(self):
        metadata, code, header = self.mapping()
        with self.assertRaisesRegex(ValueError, 'identity mismatch'):
            scope.main_mapping(metadata, code[:-1] + b'\x01', header)

    def test_exheader_extent_cannot_exceed_mapped_pages(self):
        metadata, code, header = self.mapping()
        struct.pack_into('<I', header, 0x18, 4097)
        metadata['exheaderSha256'] = sha(header)
        with self.assertRaisesRegex(ValueError, 'Invalid initialized'):
            scope.main_mapping(metadata, code, header)

    def test_metadata_cannot_substitute_another_segment_extent(self):
        metadata, code, header = self.mapping()
        metadata['layout']['segments'][0]['initializedBytes'] += 1
        with self.assertRaisesRegex(ValueError, 'layout'):
            scope.main_mapping(metadata, code, header)

    def test_arm_direct_branch_sign_extension_and_link(self):
        code = struct.pack('<III', 0xeb000001, 0xeafffffd, 0xfa000000)
        result = scope.arm_branches(code, len(code), 0x1000)
        self.assertEqual([(row['site'], row['target'], row['link']) for row in result],
                         [(0x1000, 0x100c, True), (0x1004, 0x1000, False)])

    def test_opaque_data_is_kept_in_resource_scope_without_universal_claim(self):
        result = scope.audit_container_metadata(self.root, 'test', self.audit())
        self.assertEqual(result['opaqueOrPartialLeafPayloads'], 1)
        self.assertFalse(result['universalPayloadSemanticClassificationClaimed'])
        self.assertEqual(result['additionalRecognizedArmModules'], [])

    def test_unresolved_known_archive_decoder_blocks_scope(self):
        audit = self.audit()
        audit['decoderResiduals'] = [{'reason': 'truncated archive'}]
        with self.assertRaisesRegex(ValueError, 'unresolved structural'):
            scope.audit_container_metadata(self.root, 'test', audit)

    def test_new_structurally_qualified_executable_requires_explicit_mapping(self):
        audit = self.audit()
        audit['signatureAndProgramCandidates'] = [{'format': 'CRO-layout'}]
        with self.assertRaisesRegex(ValueError, 'explicit module mapping'):
            scope.audit_container_metadata(self.root, 'test', audit)

    def test_recognized_marker_without_disposition_is_rejected(self):
        audit = self.audit()
        audit['signatureAndProgramCandidates'] = [{'identity': 'content0/resource', 'marker': '43524f30',
            'markerOffset': 10, 'qualification': 'marker-only-not-executable-proof'}]
        with self.assertRaisesRegex(ValueError, 'Unresolved recognized'):
            scope.audit_container_metadata(self.root, 'test', audit)

    def test_alias_coverage_requires_the_same_size_and_hash(self):
        audit = self.audit()
        alias = dict(audit['payloadOccurrences'][0], identity='alias', samePayloadAs='content0/resource', sha256='2' * 64)
        audit['payloadOccurrences'].append(alias)
        audit['counts']['streamVerifiedPayloadOccurrences'] = 2
        with self.assertRaisesRegex(ValueError, 'alias'):
            scope.audit_container_metadata(self.root, 'test', audit)

    def test_changed_audit_metadata_is_rejected(self):
        audit = self.audit()
        (self.root / 'source.json').write_text('{"changed":true}')
        with self.assertRaisesRegex(ValueError, 'identity changed'):
            scope.audit_container_metadata(self.root, 'test', audit)

    @unittest.skipUnless((ROOT / 'generated/update-content0/code.bin').exists(), 'Private native fixture unavailable')
    def test_real_service_structure_rejects_another_ipc_request(self):
        import capstone
        metadata = scope.read(ROOT / 'evidence/inventory/update-content0.json')
        code = (ROOT / 'generated/update-content0/code.bin').read_bytes()
        header = (ROOT / 'generated/update-content0/exheader.bin').read_bytes()
        mapping = scope.main_mapping(metadata, code, header)
        report = scope.service_trace(code, mapping)
        client = report['serviceHandleClients'][0]
        engine = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
        engine.detail = True
        address = client['requestHeaderLoadSite']
        position = address - mapping['nativeTextStart']
        instruction = next(engine.disasm(code[position:position + 4], address))
        literal = address + 8 + instruction.operands[1].mem.disp - mapping['nativeTextStart']
        mutated = bytearray(code)
        struct.pack_into('<I', mutated, literal, 0x60100)
        with self.assertRaisesRegex(ValueError, 'Expected one'):
            scope.service_trace(mutated, mapping)


if __name__ == '__main__':
    unittest.main()
