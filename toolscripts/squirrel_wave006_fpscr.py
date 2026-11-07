import capstone

from squirrel_wave004_model import sha


CONTROL_FIELDS = {'exceptionControls': 0x00009f00, 'roundingMode': 0x00c00000,
                  'flushToZero': 0x01000000, 'vectorLength': 0x00070000,
                  'vectorStride': 0x00300000, 'defaultNaNAndAlternativeHalfContext': 0x06000000}


def scan(image, ranges, mode='ARM'):
    decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM if mode == 'ARM' else capstone.CS_MODE_THUMB)
    observations = []
    for start, end in ranges:
        for instruction in decoder.disasm(image[start - 0x100000:end - 0x100000], start):
            if instruction.mnemonic not in ('vmrs', 'vmsr', 'fmrx', 'fmxr') or 'fpscr' not in instruction.op_str:
                continue
            access = 'condition-codes-only' if 'apsr_nzcv' in instruction.op_str else 'full-status-read' if instruction.mnemonic in ('vmrs', 'fmrx') else 'status-write'
            observations.append({'address': instruction.address, 'access': access})
    return observations


def audit(image, census, component, dependencies, root_ranges):
    callers = []
    for row in census['functions']:
        if 0x18d65c not in row.get('calledFunctionAddresses', []): continue
        ranges = [(span['start'], span['endExclusive']) for span in row['ranges']]
        callers.append({'address': row['address'], 'mode': row['mode'], 'ranges': row['ranges'],
                        'instructionBytesSha256': sha(b''.join(image[start - 0x100000:end - 0x100000] for start, end in ranges)),
                        'fpscrAccesses': scan(image, ranges, row['mode'])})
    native = [{'start': start, 'endExclusive': end, 'instructionBytesSha256': sha(image[start - 0x100000:end - 0x100000]),
               'fpscrAccesses': scan(image, [(start, end)])} for start, end in dependencies]
    compiled = []
    for name in ('sq_wave004_native', 'sq_wave004_release', 'sq_wave006_release', 'sq_execute_debug', 'sq_execute_error_handler'):
        row = component['functions'][name]
        decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
        accesses = [instruction.address for instruction in decoder.disasm(row['data'], row['address'])
                    if instruction.mnemonic in ('vmrs', 'vmsr', 'fmrx', 'fmxr') and 'fpscr' in instruction.op_str]
        if accesses: raise ValueError('Declared observational native service reads FPSCR')
        compiled.append({'symbol': name, 'sourceSectionSha256': row['sectionSha256'], 'fpscrAccesses': []})
    observations = [entry for row in callers + native for entry in row['fpscrAccesses']]
    roots = scan(image, [(row['start'], row['endExclusive']) for row in root_ranges])
    if any(row['access'] != 'condition-codes-only' for row in observations + roots):
        raise ValueError('Original FPSCR consumer needs explicit status-use qualification')
    return {'schemaVersion': 1, 'moduleSha256': sha(image), 'knownDirectCallers': callers,
            'admittedOriginalDependencyRanges': native, 'executeRootAccesses': roots,
            'compiledObservationalServices': compiled, 'fullExceptionStatusReadsDetectedInScope': 0,
            'modeledAllocatorAndErrorServicesReadExceptionStatus': False,
            'mandatoryControlMasks': CONTROL_FIELDS, 'controlInitialValue': 0,
            'scope': 'canonical known direct caller bodies and admitted dependency ranges only',
            'indirectOrTransitiveCallerCompletenessClaimed': False, 'universalMachineStateEqualityClaimed': False,
            'reference': {'title': 'AAPCS32 2026Q3 section 6.1.2.1',
                'url': 'https://github.com/ARM-software/abi-aa/blob/main/aapcs32/aapcs32.rst#6121vfp-register-usage-conventions'}}
