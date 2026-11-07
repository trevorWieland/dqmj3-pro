import ctypes
import io
import json
import struct

from elftools.elf.elffile import ELFFile

from native_material_wave011_build import ROOT, WORK, ENTRY, pin, save, sha
from native_material_wave011_helpers_build import SOURCES, FOLDER, arm, windows, android, frozen_constructor
from native_material_wave011_helpers_native import execute as native
from native_material_wave011_helpers_observer import observe, header_range, function_ranges
from native_material_wave011_helpers_arm64 import link as arm64_link, execute as arm64_execute
from native_material_wave011_fixtures import cases
from native_material_wave011_oracle import image, closure, execute


OUT = ROOT / 'evidence/lanes/wave011-material/helpers'
DIFFERENCE_KEYS = ['object', 'storage', 'allocations', 'lookups']


def state_differences(original, candidate):
    return [key for key in DIFFERENCE_KEYS if original[key] != candidate[key]]


def mutation(folder, old, new, filename='texture.c'):
    text = (FOLDER / filename).read_text()
    if text.count(old) != 1:
        raise ValueError('Helper control anchor changed')
    folder.mkdir(parents=True, exist_ok=True)
    path = folder / filename
    path.write_text(text.replace(old, new), encoding='utf-8')
    return [path if source.name == filename else source for source in SOURCES]


def controls(raw, closed, fixtures):
    rows = []
    entries = [
        ('wrong-wrap-table', '{0, 2, 3}', '{0, 3, 2}', 'boundary-3-override-0'),
        ('wrong-texture-handle', 'texture->words[0] = resource->image;', 'texture->words[0] = resource->image ^ 1u;', 'boundary-1-override-0')]
    for name, old, new, trigger in entries:
        folder = WORK / 'helpers/negative' / name
        sources = mutation(folder, old, new)
        blocks, receipt = arm(folder / 'arm', sources)
        case = next(row for row in fixtures if row['name'] == trigger)
        original = execute(raw, closed, case, 93)
        wrong = execute(b'\0' * 4096, {}, case, 93, blocks, ENTRY)
        differences = state_differences(original, wrong)
        if not differences or not wrong['returned']:
            raise ValueError('Returning helper control was not rejected')
        library = ctypes.CDLL(str(windows(folder / 'windows', sources)))
        try:
            native(library, case, original, 93)
        except ValueError as error:
            native_failure = str(error)
            if not native_failure.startswith('Native returning semantic mismatch:'):
                raise
        else:
            raise ValueError('Native helper control was not rejected')
        rows.append({'name': name, 'case': trigger, 'source': pin(folder / 'texture.c'),
            'object': receipt['objects'][2], 'armReturnedNormally': True, 'stateDifferences': differences,
            'windowsReturnedNormallyWithMismatch': True, 'windowsMismatch': native_failure})
    case = next(row for row in fixtures if row['name'] == 'boundary-5-override-0')
    first_image = 0x40000000 + sum(b'texture-0') % 16 * 256
    old = '    if (!resource)\n        return;'
    new = ('    if (resource && resource->image == ' + str(first_image) + 'u)\n' +
        '        (void)*(volatile MaterialWord *)((MaterialByte *)texture + 152);\n' + old)
    folder = WORK / 'helpers/negative/escaped-transient-read'
    sources = mutation(folder, old, new)
    blocks, receipt = arm(folder / 'arm', sources)
    original = execute(raw, closed, case, 94)
    wrong, observed = observe(b'\0' * 4096, {}, case, 94, blocks, function_ranges(receipt))
    if state_differences(original, wrong) or not observed['readPolicyViolations']:
        raise ValueError('Transient observer control failed to distinguish escaped intermediate read')
    rows.append({'name': 'escaped-transient-read', 'source': pin(folder / 'texture.c'),
        'object': receipt['objects'][2], 'armReturnedNormally': True, 'finalStateStillMatches': True,
        'observerRejectedIntermediateRead': True, 'violations': observed['readPolicyViolations']})
    return rows


def run():
    frozen_constructor()
    OUT.mkdir(parents=True, exist_ok=True)
    blocks, receipt = arm(WORK / 'helpers/arm')
    library_path = windows(WORK / 'helpers/windows')
    library = ctypes.CDLL(str(library_path))
    android_receipt = android(WORK / 'helpers/android')
    arm64_blocks, arm64_executable, arm64_entry, arm64_receipt = arm64_link(android_receipt, WORK / 'helpers/arm64-model')
    raw, closed, fixtures = image(), closure(), cases()
    ranges = function_ranges(receipt)
    observed_rows, transient_differences, source_addresses = [], 0, set()
    for index, case in enumerate(fixtures):
        seed = index + 811
        if header_range(case):
            original, original_observer = observe(raw, closed, case, seed)
            source, source_observer = observe(b'\0' * 4096, {}, case, seed, blocks, ranges)
            if original_observer['readPolicyViolations'] or source_observer['readPolicyViolations']:
                raise ValueError('A transient allocator field escaped before constructor overwrite')
            original_boundary = original_observer['boundariesBeforeOverwrite']
            source_boundary = source_observer['boundariesBeforeOverwrite']
            different = bool(original_boundary and source_boundary and
                original_boundary[0]['transientHeaderSha256'] != source_boundary[0]['transientHeaderSha256'])
            transient_differences += int(different)
            observed_rows.append({'case': case['name'], 'transientValuesDifferBeforeResourceLookup': different,
                'original': original_observer, 'source': source_observer})
        else:
            original = execute(raw, closed, case, seed)
            source = execute(b'\0' * 4096, {}, case, seed, blocks, ENTRY)
        if state_differences(original, source) or source['moduleReads']:
            raise ValueError('Complete source-only ARM constructor state or image independence differs: ' + case['name'])
        source_addresses |= source['executed']
        native_result = native(library, case, original, seed)
        for skew in [0, 4]:
            arm64_result = arm64_execute(arm64_blocks, arm64_executable, arm64_entry, case, original, seed, skew)
    negative = controls(raw, closed, fixtures)
    replay_blocks, replay = arm(WORK / 'helpers/replay')
    if blocks != replay_blocks or [row['sha256'] for row in receipt['objects']] != [row['sha256'] for row in replay['objects']]:
        raise ValueError('Source-only helper graph independent output replay differs')
    for case in [fixtures[1], fixtures[22], fixtures[-1]]:
        original = execute(raw, closed, case, 637)
        source = execute(b'\0' * 4096, {}, case, 637, replay_blocks, ENTRY)
        if state_differences(original, source):
            raise ValueError('Replayed source-only helper graph state differs')
    pe = library_path.read_bytes()
    nt = struct.unpack_from('<I', pe, 0x3c)[0]
    if pe[nt:nt + 4] != b'PE\0\0' or struct.unpack_from('<H', pe, nt + 4)[0] != 0x8664:
        raise ValueError('Native Windows component machine differs')
    if struct.unpack_from('<II', pe, nt + 24 + 120) != (0, 0):
        raise ValueError('Freestanding native Windows component has an import dependency')
    if not transient_differences:
        raise ValueError('Observer never exercised an actual differing transient initialization')
    save(OUT / 'component.json', {'schemaVersion': 1, 'status': 'source-only-constructor-component-validated',
        'scope': 'Typed material construction and GPU descriptor preparation with explicit platform services',
        'frozenConstructor': pin(ROOT / 'evidence/lanes/wave011-material/ready.json'),
        'armBuild': receipt, 'replay': replay, 'returningArmComparisons': len(fixtures),
        'returningNativeWindowsComparisons': len(fixtures), 'nativeWindows': pin(library_path),
        'windowsImportDirectoryEmpty': True, 'nativeAbi': native_result,
        'android': android_receipt, 'sourceInstructionAddressesExecuted': len(source_addresses),
        'arm64CpuModel': {'build': arm64_receipt, 'returningComparisons': len(fixtures) * 2,
            'representativeAddressSkews': [0, 4], 'lastResult': arm64_result,
            'cpu': 'Cortex-A72', 'androidDeviceExecution': False, 'originalImageMapped': False},
        'originalExecutableImageMappedInSourceRuns': False, 'originalExecutableImageReadInSourceRuns': False,
        'originalInstructionDependencies': [], 'sourceOnlyConstructorComponent': True,
        'observerCases': len(observed_rows), 'casesWithDifferentUnobservedTransientValues': transient_differences,
        'observerPolicy': 'Allocated construction storage is exclusive to the constructor until return; texture lookup may read only its immutable name/resource service data',
        'readOrder': {'all28DefaultBytesInitialized': True, 'all28BytesOverwrittenBeforePublication': True,
            'helperReadsBeforeOverwrite': 0, 'resourceServiceReadsBeforeOverwrite': 0,
            'serviceApiMemoryReadsInstrumented': True, 'cases': observed_rows},
        'controls': negative, 'requestedAdditionalOriginalSourceBytes': 0,
        'allocatorStandaloneEquivalence': False,
        'allocatorDefaults': 'Defined component defaults differ transiently from unspecified original values; constructor-context non-observation is measured. Arbitrary callbacks inspecting construction storage are unsupported.',
        'materialVtable': 'Owned opaque component identity; original virtual dispatch methods are not implemented',
        'nativeStructProfile': {'maxFieldAlignment': 4, 'reason': 'Runtime storage is allocated at 4-byte alignment; consistent packed profile permits wider native pointers without undefined misaligned struct access'},
        'alignmentAndAliasingAudit': {'minimumObjectWireResourceAndStorageAlignment': 4, 'minimumStackAlignmentArm64': 16,
            'packedWideMemberAddressesEscaping': [], 'doubleTypedFields': [],
            'escapingMemberPointerTypes': ['MaterialColor* alignment4', 'MaterialWord* alignment4'],
            'widePackedFields': 'Pointer values are loaded/stored through declared packed struct fields; their addresses are not passed to naturally aligned pointer-to-pointer interfaces',
            'recordRegions': 'Disjoint Texture, Transform, Generator, Word, Stage, Projection and DetailedHeader records within exclusively allocated runtime storage',
            'byteAliasing': 'Only permitted byte initialization of shadow data; subsequent Word accesses use aligned typed storage',
            'wireStoragePrerequisite': 'Initialized untyped allocation or correctly established wire object types; externally declared incompatible effective types and overlapping mutable aliases are unsupported',
            'unsupported': ['Alignment below4', 'Inconsistent compiler packing across the ABI', 'Callbacks casting packed object/member addresses to incompatible naturally aligned types',
                'Device memory or alignment-fault-enabled memory contexts', 'Android MMU/MTE/device behavior is not established by the flat CPU model'],
            'sources': [{'title': 'Android NDK ABIs', 'url': 'https://developer.android.com/ndk/guides/abis',
                'fact': 'Android arm64-v8a reserves x18; the CPU model explicitly verifies its preservation'},
                {'title': 'Armv8-A memory model', 'url': 'https://developer.arm.com/-/media/Arm%20Developer%20Community/PDF/Learn%20the%20Architecture/Armv8-A%20memory%20model%20guide.pdf?revision=58b1dd0a-3800-4218-b21a-f95a0332034c',
                'fact': 'Normal-memory unaligned accesses and alignment-fault controls are separate from C object-alignment contracts'}]},
        'gameBuild': False, 'androidDeviceExecuted': False, 'aynThorExecuted': False,
        'originalPayloadsPublished': False})
    print(json.dumps({'status': 'source-only-constructor-component-validated', 'armComparisons': len(fixtures),
        'nativeWindowsComparisons': len(fixtures), 'observerCases': len(observed_rows),
        'transientDifferenceCases': transient_differences, 'controls': len(negative)}))


if __name__ == '__main__':
    run()
