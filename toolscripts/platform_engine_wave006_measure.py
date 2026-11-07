import ctypes
import hashlib
import json
import shutil
import struct

import platform_engine_wave006 as build
from platform_engine_wave006_data import owner, dependencies, decoded_textures
from platform_engine_wave006_original import construct
from platform_engine_wave006_reference import render, layout
from native_material_wave011_helpers_native import Material, normalize
from platform_engine_wave003_measure import png, rgba


ROOT, WORK, OUT = build.ROOT, build.WORK, build.EVIDENCE


def sha(data):
    return hashlib.sha256(data).hexdigest()


def digest(value):
    def encode(item):
        if isinstance(item, bytes):
            return item.hex()
        raise TypeError(type(item).__name__)
    return sha(json.dumps(value, sort_keys=True, default=encode).encode())


def library(path):
    core = ctypes.CDLL(str(path))
    core.component_allocator.argtypes = [ctypes.c_void_p, ctypes.c_int]
    core.component_request.argtypes = [ctypes.c_char_p]
    core.component_complete.argtypes = [ctypes.c_int, ctypes.c_void_p, ctypes.c_int]
    core.component_pixels.restype = ctypes.POINTER(ctypes.c_uint)
    core.component_material.restype = ctypes.c_uint
    core.component_projection.restype = ctypes.c_uint
    return core


def initialize(core):
    memory = ctypes.create_string_buffer(65536)
    core.component_reset()
    if core.component_allocator(memory, 65536) != 1:
        raise ValueError('Native source material arena setup failed')
    core.component_resume(1)
    core.component_surface(0, 1, 1)
    return memory


def load(core, data):
    handle = core.component_request(b'assets/scene.arc')
    if handle <= 0 or core.component_claim() != handle:
        raise ValueError('Source resource request/claim differs')
    return core.component_complete(handle, data, len(data))


def snapshot(core):
    result = []
    for view in [0, 1]:
        statistics = [core.component_scene_stat(view, index) for index in range(15)]
        geometry = [core.component_geometry(view, index, field) for index in range(statistics[4]) for field in range(10)]
        material_count = core.component_material_count(view)
        materials = [core.component_material(view, index, field) for index in range(material_count) for field in range(80)]
        projections = [core.component_projection(view, picture, reference, field) for picture in range(statistics[5]) for reference in range(2) for field in range(8)]
        result.append({'statistics': statistics, 'materialCount': material_count,
            'geometrySha256': sha(struct.pack('<' + 'i' * len(geometry), *geometry)),
            'materialAuditSha256': sha(struct.pack('<' + 'I' * len(materials), *materials)),
            'projectionAuditSha256': sha(struct.pack('<' + 'I' * len(projections), *projections)),
            'frameRgbaSha256': sha(rgba(core.component_pixels(view)[:76800]))})
    return result


def material_states(core, data, originals):
    core.stage_sdk_material.argtypes = [ctypes.c_int]
    core.stage_sdk_material.restype = ctypes.POINTER(Material)
    receipts = []
    for index, original in enumerate(originals):
        material = core.stage_sdk_material(index).contents
        amount = core.component_material(0, index, 6)
        native_storage = ctypes.string_at(material.storage, amount) if amount else b''
        capacity, used = struct.unpack_from('<HH', original['object'], 116)
        expected = {'reserved': original['object'][4:108], 'colors': original['object'][108:116],
            'capacity': capacity, 'used': used, 'flags': original['object'][124], 'reserved7d': original['object'][125:128],
            'storage': normalize(original['storage'], capacity, 4, 0x12004000) if original['storage'] else None,
            'wire': data['wires'][index]}
        actual = {'reserved': bytes(material.reserved), 'colors': bytes(material.colors), 'capacity': material.capacity,
            'used': material.used, 'flags': material.flags, 'reserved7d': bytes(material.reserved7d),
            'storage': normalize(native_storage, material.capacity, 8, material.storage) if native_storage else None,
            'wire': ctypes.string_at(material.wire, len(data['wires'][index]))}
        differences = [name for name in expected if expected[name] != actual[name]]
        if differences:
            raise ValueError('Actual constructed material state differs from original execution: ' + str(index) + ':' + repr(differences))
        receipts.append({'index': index, 'normalizedStateSha256': digest(expected), 'originalReturnedNormally': original['returnedNormally'],
            'nativeReturningStateEqual': True, 'resolvedResourceCount': len(original['lookups'])})
    return receipts


def wrong_constructor(data, expected_frame):
    path = WORK / 'negative/wrong-constructor/material.c'
    path.parent.mkdir(parents=True, exist_ok=True)
    source = (ROOT / 'src/native/wave011-material/material.c').read_text()
    old = 'material->colors[0] = color_wire->colors[0];'
    if source.count(old) != 1:
        raise ValueError('Compiled wrong-constructor anchor changed')
    path.write_text(source.replace(old, 'material->colors[0] = color_wire->colors[1];'))
    binary, unused = build.core(path.parent / 'native', constructor_source=path)
    core = library(binary)
    memory = initialize(core)
    if load(core, data['archive']) != 1:
        raise ValueError('Wrong constructor failed to return through normal scene publication')
    actual = sha(rgba(core.component_pixels(0)[:76800]))
    if actual == expected_frame:
        raise ValueError('Renderer did not consume the reconstructed constructor color result')
    return {'source': build.tools.pin(path), 'object': build.tools.pin(path.parent / 'native/reconstructed-material.obj'),
        'sceneImportReturnedNormally': True, 'picturesRendered': core.component_scene_stat(0, 7),
        'wrongFramebufferSha256': actual, 'independentReferenceRejected': True}


def wrong_math(data, expected_frame):
    results = []
    variants = [('projection-scale', 'projection.c', '(inverse_span_x * 2.0f) * normalized_scale_x',
        '(inverse_span_x * 1.0f) * normalized_scale_x'),
        ('world-multiply-translation', 'matrix.c', 'left->m[row][3] + left->m[row][0] * right->m[0][3]',
        'left->m[row][3] - left->m[row][0] * right->m[0][3]')]
    for name, filename, before, after in variants:
        path = WORK / 'negative' / name / filename
        path.parent.mkdir(parents=True, exist_ok=True)
        text = (ROOT / 'src/native/wave014' / filename).read_text()
        if text.count(before) != 1:
            raise ValueError('Compiled math control anchor is ambiguous')
        path.write_text(text.replace(before, after))
        binary, objects = build.core(path.parent / 'native', math_sources={filename: path})
        core = library(binary)
        arena = initialize(core)
        if load(core, data['archive']) != 1 or core.component_scene_stat(0, 7) != 17:
            raise ValueError('Compiled math control did not return through all 17 picture cases')
        actual = sha(rgba(core.component_pixels(0)[:76800]))
        if actual == expected_frame:
            raise ValueError('Wrong math source escaped independent renderer reference')
        results.append({'control': name, 'modifiedSource': build.tools.pin(path), 'compiledCore': build.tools.pin(binary),
            'sceneImportReturnedNormally': True, 'picturesRendered': 17, 'wrongFrameSha256': actual,
            'independentReferenceRejected': True, 'objectOrInstructionPatching': False})
    return results


def main():
    build.inputs()
    data = owner()
    np, decoder, oracle_metadata = dependencies()
    decoded = decoded_textures(data, np, decoder)
    originals = [construct(wire, data['nameTable'], data['resources'], 89 + index) for index, wire in enumerate(data['wires'])]
    path, unused = build.core(WORK / 'review/native', ('stage_sdk_material', 'staging_layout_world'))
    core = library(path)
    memory = initialize(core)
    if load(core, data['archive']) != 1:
        raise ValueError('Actual owner archive failed source-constructor scene import')
    before = snapshot(core)
    if before[0] != before[1] or before[0]['statistics'] != [320, 240, 10, 12, 35, 17, 17, 17, 2, 128, 0, 1, 18, 277465, 1] or before[0]['materialCount'] != 19:
        raise ValueError('Actual source-constructor scene scope differs')
    states = material_states(core, data, originals)
    reference, panes, pictures = render(data, originals, decoded, np, original_math=True)
    binary32, _, _ = render(data, originals, decoded, np, binary32=True, original_math=True)
    reference_sha = sha(reference.tobytes())
    core.staging_layout_world.argtypes = [ctypes.c_int, ctypes.c_void_p]
    contexts = []
    for index, pane in enumerate(panes):
        raw = ctypes.create_string_buffer(120)
        if core.staging_layout_world(index, raw) != 1 or raw.raw[72:120] != struct.pack('<12f', *pane['originalWorld']):
            raise ValueError('Authored geometry source context differs from independent original math leaves')
        if raw.raw[60:68] != struct.pack('<2f', pane['width'], pane['height']):
            raise ValueError('Projection pane dimension ABI differs')
        contexts.append({'pane': index, 'worldSha256': sha(raw.raw[72:120]), 'sourceAndOriginalMathEqual': True})
    matrices = []
    coordinate_inputs = []
    for index, picture in enumerate(pictures):
        coordinate_inputs.append(panes[picture['pane']]['originalWorld'])
        for reference_index, matrix in enumerate(picture['coordinateMatrices']):
            expected = struct.pack('<8f', *matrix.reshape(-1))
            actual_matrix = struct.pack('<8I', *[core.component_projection(0, index, reference_index, field) for field in range(8)])
            if actual_matrix != expected:
                raise ValueError('Published UV matrix differs from full original projection/SRT execution')
            matrices.append({'picture': index, 'reference': reference_index, 'matrixSha256': sha(expected), 'originalReturnedNormally': True,
                'sourceMatrixBytewiseEqual': True})
    analytic, _, _ = render(data, originals, decoded, np, coordinate_inputs)
    actual = np.frombuffer(rgba(core.component_pixels(0)[:76800]), dtype=np.uint8).reshape(240, 320, 4)
    difference = np.abs(actual.astype(np.int64) - reference.astype(np.int64))
    if np.any(difference):
        raise ValueError('Independent framebuffer differs; maximum channel error=' + str(int(difference.max())))
    if not np.array_equal(actual, binary32):
        raise ValueError('Independent binary32 software reference differs')
    analytic_delta = actual.astype(np.int64) - analytic.astype(np.int64)
    analytic_locations = [{'x': int(x), 'y': int(y), 'channel': 'RGBA'[int(channel)], 'sourceMinusAnalytic': int(analytic_delta[y, x, channel])}
        for y, x, channel in np.argwhere(analytic_delta != 0)]
    geometry_error = 0.0
    for index, pane in enumerate(panes):
        native = np.array([core.component_geometry(0, index, field) / 1000 for field in range(8)]).reshape(4, 2)
        geometry_error = max(geometry_error, float(np.abs(native - np.trunc(pane['corners'] * 1000) / 1000).max()))
    if geometry_error > 0.0011:
        raise ValueError('Independent geometric reference exceeds a thousandth-pixel quantization step')
    png(WORK / 'private/constructed-material-scene.png', 320, 240, actual.tobytes())
    png(WORK / 'private/independent-material-reference.png', 320, 240, reference.tobytes())
    production = library(WORK / 'windows/dqm_atomic_views.dll')
    try:
        getattr(production, 'stage_sdk_material')
    except AttributeError:
        pass
    else:
        raise ValueError('Private staged SDK pointers are exposed by production library')
    private = WORK / 'private/windows'
    (private / 'assets').mkdir(parents=True, exist_ok=True)
    executable = private / 'dqm_projected_material_views.exe'
    shutil.copyfile(WORK / 'windows/dqm_projected_material_views.exe', executable)
    (private / 'assets/scene.arc').write_bytes(data['archive'])
    positive = json.loads(build.tools.run([executable, '--headless'], private / 'native-positive.json'))
    negative = json.loads(build.tools.run([executable, '--headless', '--negative-import'], private / 'native-negative.json'))
    if positive.get('constructedMaterials') != 19 or positive.get('pictures') != 17 or positive.get('verifiedGdiPixels') != 192000 or not positive.get('gdiPixelsEqual'):
        raise ValueError('Actual native Windows source-material GDI path differs')
    if not negative.get('constructedMaterialsPreserved') or not negative.get('geometryAndPixelsPreserved'):
        raise ValueError('Native Windows source-material transaction failed')
    control = wrong_constructor(data, reference_sha)
    math_controls = wrong_math(data, reference_sha)
    OUT.mkdir(parents=True, exist_ok=True)
    report = {'schemaVersion': 1, 'status': 'measured-reconstructed-material-renderer', 'archiveSha256': sha(data['archive']),
        'logicalDecodedTexturePixels': sum(image.shape[0] * image.shape[1] for image in decoded),
        'constructedMaterials': states, 'viewSnapshots': before, 'pictureCasesHandled': 17, 'skippedPictureCases': 0,
        'independentReference': {'method': 'Independent FLYT hierarchy reader, original indexed trig/multiply/SRT/projection execution, float64 vector rasterizer and independent BFLIM decode',
            'frameRgbaSha256': reference_sha, 'comparedPixels': 76800, 'differentChannels': 0,
            'maximumGeometryQuantizationDifference': geometry_error, 'panesParsed': len(panes), 'picturesParsed': len(pictures),
            'tools': oracle_metadata}, 'nativeWindows': positive, 'lateMaterialFailure': negative,
        'independentBinary32Reference': {'frameRgbaSha256': sha(binary32.tobytes()), 'differentChannels': 0,
            'method': 'Vectorized binary32 arrays with explicit nonfused rounding and original math leaves; no production rasterizer calls'},
        'retainedAnalyticGeometryReference': {'frameRgbaSha256': sha(analytic.tobytes()), 'differentChannels': len(analytic_locations),
            'maximumChannelDifference': int(np.abs(analytic_delta).max()), 'locations': analytic_locations,
            'cause': 'Analytic libm pane-angle geometry differs from the original indexed-interpolation geometry now used by the component. Holding the actual original UV matrices fixed and replacing only the geometry math leaves removes every residual.',
            'originalGpuPixelClaim': False},
        'originalMathWorldContexts': contexts, 'originalProjectionAndSrtMatrices': matrices,
        'compiledWrongConstructor': control,
        'compiledWrongMath': math_controls,
        'resourceContract': 'Actual BFLIM format and logical decoded dimensions; owned software texture handles; canonical decoded orientation0 and no alternate mip image. Original GPU uploader/texture-loader equivalence is not claimed.',
        'heapContract': 'Foreign untyped or established-compatible writable memory aligned4; no input or published-scene alias; exclusive construction epoch',
        'transientFieldContract': 'Source heap/resource services never inspect incomplete material storage; renderer conversion occurs only after constructor return',
        'privateSdkPointersExportedByProduction': False, 'originalGpuHardwarePixelComparison': False,
        'animationMembersApplied': 0, 'fontAndPartsRenderingImplemented': False,
        'sourceOnlyNativeGameBuild': False, 'androidDeviceExecuted': False, 'aynThorExecuted': False,
        'additionalRecoveredSourceCreditBytes': 0, 'originalPayloadsPublished': False}
    (OUT / 'measured-renderer.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'originalMaterialComparisons': len(states),
        'independentReferenceDifferentChannels': 0, 'nativeGdiPixels': 192000, 'gameBuild': False}))


if __name__ == '__main__':
    main()
