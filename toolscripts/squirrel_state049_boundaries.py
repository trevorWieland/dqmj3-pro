import json
from pathlib import Path

from native_wave013_common import ROOT, record, save, MODULE_SHA


REQUIRED = [
    ('required_lookup_raise_format049', 0x19813c, 'formatted-error-construction',
        'void(void *, const char *, ...)', 'source/squirrel-wave020/lookup_error.c'),
    ('required_lookup_stringify049', 0x197fe0, 'object-stringification',
        'SqString015 *(void *, const SqPrefixObject012 *)', 'source/squirrel-wave020/lookup_error.c'),
    ('required_lookup_object_type_name049', 0x191f20, 'object-type-name',
        'const char *(const SqPrefixObject012 *)', 'source/squirrel-wave020/type_names.c'),
    ('required_lookup_meta_call049', 0x18d4fc, 'metamethod-call',
        '_Bool(void *, void *, SqPrototypeU32, SqPrototypeI32, SqPrefixObject012 *)',
        'source/squirrel-wave020/metamethod_call.c'),
    ('required_class_new_slot049', 0x1804b4, 'class-member-definition',
        '_Bool(SqClass030 *, SqPrefixState012 *, const SqPrefixObject012 *, const SqPrefixObject012 *, SqPrototypeU32)',
        'source/squirrel-wave034/member_definition.c')]


def run():
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    by = {row['address']: row for row in json.loads(census_path.read_text())['functions']}
    rows = []
    for name, address, role, signature, source in REQUIRED:
        file = ROOT / source
        owner = by[address]
        rows.append({'sourceBinding': name, 'canonicalAddress': address, 'mode': owner['mode'],
            'instructionBytes': owner['textBodyBytes'], 'role': role, 'typedFixtureSignature': signature,
            'existingSourceReference': record(file) if file.exists() else None,
            'existingSourceSelectedUnderThisName': False, 'invokedInQualifiedDomain': False,
            'failsClosedOnExecution': True, 'platformServiceClaimed': False,
            'sourceOrSdkCreditGranted': 0})
    path = ROOT / 'evidence/lanes/squirrel-state049/dependency-boundaries.json'
    save(path, {'schemaVersion': 1, 'status': 'explicit-selected-source-and-uninvoked-dependencies-not-admission',
        'producer': record(Path(__file__)), 'moduleSha256': MODULE_SHA, 'census': record(census_path),
        'actualNewSlotBody': {'canonicalAddress': 0x173d60, 'mode': 'ARM',
            'source': record(ROOT / 'source/squirrel-wave034/new_slot.c'),
            'selectedBy': record(ROOT / 'source/squirrel-wave049/new_slot_binding.c'),
            'scopedBindings': record(ROOT / 'source/squirrel-wave049/fixture_bindings.h'),
            'qualifiedPath': 'Nondelegating root table insertion; actual authored body executes once in the selected graph.',
            'newCreditGranted': 0},
        'uninvokedEngineDependencies': rows,
        'assertionAndClassFailureSentinels': {'sourceBindings': ['sq_startup_assert049', 'required_class_failure049'],
            'canonicalPrefixEntry': 0x146590, 'fullOriginalAssertionAbiQualified': False,
            'typedSentinelSignature': '_Noreturn void(void)', 'invokedInQualifiedDomain': False,
            'sourceOrSdkCreditGranted': 0},
        'uninvokedFormattedUnderflowBoundary': {'sourceBinding': 'sq_startup_formatted_error049',
            'canonicalAddress': 0x19813c, 'signature': 'void(SqVm040 *, const char *)',
            'actualCallerPassesAdditionalVarargs': False, 'invokedInQualifiedDomain': False,
            'sourceOrSdkCreditGranted': 0},
        'registrationBindings': record(ROOT / 'evidence/lanes/squirrel-state040/initialization045-table-bindings.json'),
        'registrationHandlersInvoked': False, 'unresolvedRegistrationHandlerIdentities': 56,
        'existingArrayHandlerHasActualSourceBinding': True,
        'originalHelpersOrImagesMappedInSourceExecution': False,
        'existingNativeCreationSource': record(ROOT / 'source/squirrel-wave016/native_create.c'),
        'existingCallFrameResizeSource': record(ROOT / 'source/squirrel-wave022/call_frames.c'),
        'sourceCreditGranted': 0})
    print(json.dumps(record(path)))


if __name__ == '__main__':
    run()
