import hashlib
import json

from native_wave014_oracle import original_image
from squirrel_lookup023_build import ROOT, WORK, arm, pin, save
from squirrel_lookup023_float import game_bits, number, HostReference
from squirrel_lookup023_oracle import Arm
from squirrel_lookup023_locale import receipt
import squirrel_lookup023_oracle as oracle


def discover():
    sections, symbols, functions, build = arm(WORK / 'sdk-discovery/arm')
    original = Arm(sections, symbols, functions, True, True)
    source = Arm(sections, symbols, functions)
    reference, cases, differences = HostReference(), [], []
    try:
        for index in range(96):
            expected, heap = original.execute(64 + index)
            actual, authored_heap = source.execute(64 + index)
            length = expected[16]
            message = bytes(expected[17:17 + length]).decode('ascii')
            text = reference.text(game_bits(index))
            independent = "the index '" + text + "' does not exist"
            row = {'index': index, 'bits': game_bits(index), 'original': message,
                'independentHost': independent, 'source': bytes(actual[17:17 + actual[16]]).decode('ascii'),
                'wholeArmArenaEqual': heap == authored_heap, 'observationsEqual': actual == expected}
            cases.append(row)
            save(WORK / 'sdk-discovery/private-cases.json', cases)
            if message != independent or actual != expected or heap != authored_heap:
                differences.append(row)
            print(json.dumps({'floatSdkCase': index, 'equal': not differences}), flush=True)
    finally:
        reference.close()
    image = original_image()
    code = [{'address': address, 'mode': mode, 'bytes': size,
        'sha256': hashlib.sha256(data).hexdigest()}
        for (address, mode, size), data in sorted(original.discovered_instructions.items())]
    data = [{'address': address, 'bytes': size,
        'sha256': hashlib.sha256(image[address - 0x100000:address - 0x100000 + size]).hexdigest()}
        for address, size in sorted(original.discovered_data)]
    record = {'schemaVersion': 1, 'status': 'reference-only-actually-observed-sdk-fragments',
        'moduleSha256': hashlib.sha256(image).hexdigest(), 'cases': cases,
        'exactTextOrMemoryDifferences': differences,
        'instructionWitnesses': code, 'dataReadWitnesses': data,
        'dataHashesFromImmutableVerifiedImageAtObservedReadAddresses': True,
        'modeAndInstructionBytesCapturedAtActualExecution': True,
        'localePrecondition': pin(ROOT / 'evidence/lanes/squirrel-lookup023/reference-locale-precondition.json')
            if (ROOT / 'evidence/lanes/squirrel-lookup023/reference-locale-precondition.json').exists() else None,
        'functionBoundariesInferred': False, 'inventoryOrSourceAdmissionGranted': 0,
        'sourceOriginalImageMapped': False, 'textNormalized': False, 'cachedOriginalAnswersFedToSource': False,
        'producer': pin(ROOT / 'toolscripts/squirrel_lookup023_sdk.py'), 'originalPayloadsPublished': False,
        'armBuild': build}
    receipt(oracle.last_locale_observation)
    record['localePrecondition'] = pin(ROOT / 'evidence/lanes/squirrel-lookup023/reference-locale-precondition.json')
    save(ROOT / 'evidence/lanes/squirrel-lookup023/reference-sdk-exchange.json', record)
    if differences: raise ValueError('023 actual float formatter differs; raw residuals preserved')
    return record


if __name__ == '__main__':
    report = discover()
    print(json.dumps({'pcs': len(report['instructionWitnesses']), 'dataReads': len(report['dataReadWitnesses'])}))
