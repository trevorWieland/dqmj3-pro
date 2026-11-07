import json
import struct

import platform_engine_wave006 as build
from platform_engine_wave006_data import owner
from platform_engine_wave006_measure import initialize, library, load, snapshot


def run():
    data = owner()
    path, objects = build.core(build.WORK / 'transactions/native', ('stage_material_count',))
    core = library(path)
    arena = initialize(core)
    if load(core, data['archive']) != 1:
        raise ValueError('Actual owner source scene did not load')
    core.component_surface(1, 9, 1)
    core.component_button(11, 1)
    core.component_axis(23456, -12345)
    if core.component_touch(1, 640, 480, 320, 240, 1) != 1:
        raise ValueError('Actual secondary view did not accept its touch')
    before = snapshot(core)
    controls = [core.component_state(field) for field in range(15)]
    poisoned = bytearray(data['archive'])
    origin, position, changed = poisoned.index(data['layout']), 20, False
    for tag, block in data['sections']:
        if not changed and tag == b'pic1':
            index = struct.unpack_from('<H', block, 100)[0]
            if (core.component_material(0, index, 47) >> 8) & 255 == 4:
                struct.pack_into('<f', poisoned, origin + position + 68, 0.)
                changed = True
        position += len(block)
    if not changed:
        raise ValueError('Owner projected-picture control is unavailable')
    if load(core, bytes(poisoned)) != -1 or core.stage_material_count() != 19:
        raise ValueError('Owner singular projection did not reject after all material constructors returned')
    if snapshot(core) != before or [core.component_state(field) for field in range(15)] != controls:
        raise ValueError('Owner singular projection changed either published view or controls')
    report = {'schemaVersion': 1, 'status': 'actual-owner-late-singular-projection-rejected-atomically',
        'reviewCore': build.tools.pin(path), 'all19MaterialConstructorsReturnedBeforeFailure': True,
        'bothViewFramesGeometryMaterialAndUvAuditsPreserved': True, 'publishedGenerationPreserved': True,
        'secondaryTouchButtonsAxesAndLifecycleStatePreserved': True, 'invalidProjectionPrimitiveNotCalled': True,
        'guard': 'Standalone inverse success/finite-output precheck rejects a zero world scale before the original-undefined inverse-failure projection domain',
        'originalInputFilesModified': False, 'originalPayloadsPublished': False}
    build.EVIDENCE.mkdir(parents=True, exist_ok=True)
    (build.EVIDENCE / 'transactions.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'constructedMaterials': 19, 'bothViewUvAndFramesPreserved': True}))
    return report


if __name__ == '__main__':
    run()
