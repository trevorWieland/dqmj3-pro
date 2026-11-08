import argparse
import hashlib
import json
from pathlib import Path

import capstone
from capstone import arm
import effect_queue067_cohort as cohort
from native_effect065_resource_conditions import serializable


BINDINGS = [
    (0x10c550, 'effect_queue_manager_construct067', 'queue_manager.c'),
    (0x1529b0, 'effect_queue_request_async067', 'queue_manager.c'),
    (0x162ad0, 'effect_queue_push067', 'queue_store.c'),
    (0x117274, 'effect_queue_worker_run067', 'queue_worker.c'),
    (0x1173f8, 'effect_queue_worker_finalize067', 'queue_worker.c'),
    (0x147090, 'effect_queue_store_clear067', 'queue_store.c'),
    (0x5e0a38, 'effect_queue_manager_destroy067', 'queue_manager.c'),
    (0x15e304, 'join_if_needed067', 'queue_worker.c'),
]


def run(build, expected, output):
    if output.exists():
        raise ValueError('Preserve full original predicate/extent coverage')
    output.mkdir(parents=True)
    counters, references, bodies, calls, pool_spans = {}, None, {}, {}, {}
    rows = []
    for path in sorted(expected.glob('*-original.json')):
        case = json.loads(path.read_text())['case']
        machine = cohort.Original(build / 'arm/effect_resource.elf')
        actual = cohort.run_case(machine, case)
        if actual != json.loads(path.read_text()):
            raise ValueError('Fresh original coverage session changed prior typed graph observations')
        if references is None:
            references = machine.reference.pins
            decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
            decoder.detail = True
            for entry, name, filename in BINDINGS:
                bodies[entry] = machine.reference.dependency(entry)
                calls[entry], pool_spans[entry] = [], []
                for part in bodies[entry]['instructionRanges']:
                    raw = machine.reference.image[part['start'] - 0x100000:part['endExclusive'] - 0x100000]
                    for instruction in decoder.disasm(raw, part['start']):
                        if instruction.mnemonic in ['bl', 'blx', 'b'] and instruction.operands and instruction.operands[0].type == arm.ARM_OP_IMM:
                            destination = instruction.operands[0].imm
                            if not any(span['start'] <= destination < span['endExclusive'] for span in bodies[entry]['instructionRanges']):
                                calls[entry].append({'callsite': instruction.address, 'operation': instruction.mnemonic, 'target': destination})
                        for operand in instruction.operands:
                            if operand.type != arm.ARM_OP_MEM or operand.mem.base != arm.ARM_REG_PC:
                                continue
                            address = instruction.address + 8 + operand.mem.disp
                            width = 8 if instruction.mnemonic.startswith('vldr') and instruction.reg_name(instruction.operands[0].reg).startswith('d') else 4
                            pools = pool_spans[entry]
                            if any(span['start'] == address for span in pools):
                                continue
                            segment = next((segment for segment in machine.reference.layout['segments']
                                if segment['address'] <= address < address + width <= segment['address'] + segment['initializedBytes']), None)
                            if segment is None:
                                raise ValueError('PC-relative read escaped actual initialized module bytes')
                            offset = segment['codeBinOffset'] + address - segment['address']
                            pools.append({'start': address, 'endExclusive': address + width, 'bytes': width,
                                'sha256': hashlib.sha256(machine.reference.image[offset:offset + width]).hexdigest(),
                                'loadWitness': instruction.address, 'credit': 'readonly-data-not-instruction'})
        for row in serializable(machine.condition_outcomes):
            at = row['address']
            total = counters.setdefault(at, {**row, 'hookEncounters': 0, 'conditionSatisfied': 0, 'conditionFailed': 0, 'conditions': []})
            for key in ['hookEncounters', 'conditionSatisfied', 'conditionFailed']:
                total[key] += row[key]
            total['conditions'] = sorted(set(total['conditions']) | set(row['conditions']))
        rows.append({'case': case, 'actualGraphMatchesEarlierReceipt': True, 'lifecycle': machine.lifecycle,
            'workerPauses': machine.worker_pauses, 'originalInstructionWitnesses': list(machine.witnesses.values())})
        (output / (case + '.json')).write_text(json.dumps(rows[-1], indent=2) + '\n')
        print(json.dumps({'case': case, 'qualified': True}), flush=True)
    functions = []
    for entry, name, filename in BINDINGS:
        body = bodies[entry]
        pcs = [pc for span in body['instructionRanges'] for pc in range(span['start'], span['endExclusive'], 4)]
        callers = sorted(row['address'] for row in machine.reference.functions.values() if entry in row.get('calledFunctionAddresses', []))
        functions.append({**body, 'sourcePath': 'src/native/wave067-queue/' + filename, 'sourceSymbol': name,
            'canonicalInstructionPCCount': len(pcs), 'visitedPCs': [pc for pc in pcs if pc in counters],
            'conditionSatisfiedPCs': [pc for pc in pcs if counters.get(pc, {}).get('conditionSatisfied', 0)],
            'unvisitedPCs': [pc for pc in pcs if pc not in counters],
            'noConditionSatisfiedWitnessPCs': [pc for pc in pcs if not counters.get(pc, {}).get('conditionSatisfied', 0)],
            'predicateCounters': [counters[pc] for pc in pcs if pc in counters], 'readonlyLiteralSpans': pool_spans[entry],
            'measuredDirectControlTransfers': calls[entry], 'candidateCallersFromFrozenCensus': callers,
            'wholeUniversalFunctionQualified': False, 'sourceCreditGranted': 0})
    packet = {'status': 'fresh-original-composed-nine-case-predicate-and-boundary-review', 'functions': functions,
        'referenceInputs': references, 'moduleSha256': hashlib.sha256(machine.reference.image).hexdigest(),
        'caseSets': len(rows), 'sourceCreditGranted': 0,
        'limits': ['Hook visitation and condition-satisfied instruction observations are distinct.',
            'Fatal allocation/thread/join failures and opaque deferred-task ownership remain outside this bounded corpus.',
            'Original SDK/kernel instructions execute only on the reference side and receive zero source credit.']}
    (output / 'report.json').write_text(json.dumps(packet, indent=2) + '\n')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('expected', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.expected.resolve(), args.output.resolve())
