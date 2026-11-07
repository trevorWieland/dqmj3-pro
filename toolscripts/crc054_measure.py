import hashlib
import json
import struct
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC, ARM_INS_BL, ARM_INS_BLX, ARM_INS_B


ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / 'work/crc054'
EVIDENCE = ROOT / 'evidence/lanes/crc054'
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
CENSUS_SHA = '338f478921eef3955e17f7e6b438a65f58ec9aa183b0012a9ab7dd872878dc55'
FUNCTIONS = {
    0x7305b8: [(0x72ae0c, 0x72b3c0), (0x7305b8, 0x730a8c)],
    0x736734: [(0x72b3c4, 0x72b978), (0x736734, 0x736c08)],
}


def sha(data):
    return hashlib.sha256(data).hexdigest()


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def polynomial_tables():
    tables = [[0] * 256 for _ in range(8)]
    for value in range(256):
        checksum = value
        for bit in range(8):
            checksum = (checksum >> 1) ^ (0xedb88320 if checksum & 1 else 0)
        tables[0][value] = checksum
    for value in range(256):
        checksum = tables[0][value]
        for row in range(1, 4):
            checksum = (checksum >> 8) ^ tables[0][checksum & 255]
            tables[row][value] = checksum
    for row in range(4):
        for value in range(256):
            tables[row + 4][value] = int.from_bytes(tables[row][value].to_bytes(4, 'little'), 'big')
    return b''.join(struct.pack('<256I', *row) for row in tables)


def measure():
    image_path = ROOT / 'generated/update-content0/code.bin'
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    image, census_bytes = image_path.read_bytes(), census_path.read_bytes()
    if sha(image) != MODULE_SHA or sha(census_bytes) != CENSUS_SHA:
        raise ValueError('CRC054 canonical input identity changed')
    census = json.loads(census_bytes)
    by_address = {row['address']: row for row in census['functions']}
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    rows, dependencies = [], {}
    expected_table = polynomial_tables()
    for entry, ranges in FUNCTIONS.items():
        original = by_address[entry]
        actual = [(row['start'], row['endExclusive']) for row in original['ranges']]
        if original['mode'] != 'ARM' or actual != ranges:
            raise ValueError('CRC054 complete census extent changed')
        instructions, pools, calls = [], [], []
        for start, end in ranges:
            raw = image[start - 0x100000:end - 0x100000]
            decoded = list(decoder.disasm(raw, start))
            if len(decoded) * 4 != len(raw) or any(row.size != 4 for row in decoded):
                raise ValueError('CRC054 instruction extent does not decode completely')
            for instruction in decoded:
                if instruction.id in (ARM_INS_BL, ARM_INS_BLX):
                    calls.append(instruction.address)
                if instruction.mnemonic.startswith('ldr'):
                    for operand in instruction.operands:
                        if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                            address = instruction.address + 8 + operand.mem.disp
                            value = struct.unpack_from('<I', image, address - 0x100000)[0]
                            pools.append(dict(instruction=instruction.address, address=address,
                                              size=4, sha256=sha(image[address-0x100000:address-0x100000+4]),
                                              resolvedPointer=value))
                instructions.append(instruction)
        if calls or original['calledFunctionAddresses']:
            raise ValueError('CRC054 leaf unexpectedly has a callee')
        prefix = list(decoder.disasm(image[entry-0x100000:entry-0x100000+48], entry))
        expected_prefix = [('cmp','r1, #0'), ('moveq','r0, #0'), ('bxeq','lr'),
                           ('push',None), ('mov','r3, #1'), ('str','r3, [sp]'),
                           ('ldrb','r3, [sp]'), ('cmp','r3, #0')]
        if any(ins.mnemonic != mnemonic or operands is not None and ins.op_str != operands
               for ins, (mnemonic, operands) in zip(prefix, expected_prefix)):
            raise ValueError('CRC054 local endian invariant changed')
        if prefix[8].mnemonic != 'ldrne' or prefix[9].mnemonic != 'mvnne' or any(
                ins.update_flags for ins in prefix[8:10]):
            raise ValueError('CRC054 intervening instructions alter endian condition flags')
        if prefix[10].mnemonic != 'beq' or prefix[10].operands[0].imm != ranges[1][1]-8:
            raise ValueError('CRC054 endian alternate gate changed')
        external_entry_edges = [ins.address for ins in instructions
                                if entry <= ins.address < ranges[1][1] and ins.id == ARM_INS_B
                                and ins.operands[0].type == ARM_OP_IMM
                                and not entry <= ins.operands[0].imm < ranges[1][1]]
        if external_entry_edges != [ranges[1][1]-4]:
            raise ValueError('CRC054 entry has another edge to the endian alternate')
        by_pc = {ins.address: ins for ins in instructions}
        critical = {
            0x58: ('cmp','r2, #0x20'), 0x5c: ('blo',None), 0x64: ('sub','r2, r2, #0x20'),
            0x70: ('cmp','r2, #0x20'), 0x298: ('bhs',None),
            0x29c: ('cmn','r2, #0x80000001'), 0x2a0: ('bls',None),
            0x40c: ('asr','lr, r2, #0x1f'), 0x410: ('add','ip, r2, lr, lsr #30'),
            0x414: ('bic','lr, ip, #3'), 0x418: ('asr','ip, ip, #2'),
            0x41c: ('rsb','ip, ip, #0'), 0x424: ('add','r2, r2, ip, lsl #2'),
            0x430: ('cmn','r2, #0x80000001'), 0x434: ('bls',None),
        }
        for offset, (mnemonic, operands) in critical.items():
            instruction = by_pc[entry+offset]
            if instruction.mnemonic != mnemonic or operands is not None and instruction.op_str != operands:
                raise ValueError('CRC054 residual-length invariant changed at ' + hex(entry+offset)
                                 + ': ' + instruction.mnemonic + ' ' + instruction.op_str)
        if any(by_pc[pc].update_flags for pc in range(entry+0x74, entry+0x298, 4)):
            raise ValueError('CRC054 bulk loop no longer preserves its length comparison')
        if by_pc[entry+0x298].operands[0].imm != entry+0x60:
            raise ValueError('CRC054 bulk loop target changed')
        if by_pc[entry+0x5c].operands[0].imm != entry+0x29c:
            raise ValueError('CRC054 bulk loop skip guard changed')
        if by_pc[entry+0x2a0].operands[0].imm != entry+0x2fc or by_pc[entry+0x434].operands[0].imm != entry+0x458:
            raise ValueError('CRC054 guarded scalar fallback target changed')
        unreachable = [dict(start=ranges[0][0], endExclusive=ranges[0][1], reason='little-endian gate'),
                       dict(start=ranges[1][1]-8, endExclusive=ranges[1][1], reason='little-endian gate'),
                       dict(start=entry+0x2a4, endExclusive=entry+0x2fc,
                            reason='unsigned residual after32-byte loop is0..31; CMN cannot carry or produce zero'),
                       dict(start=entry+0x438, endExclusive=entry+0x458,
                            reason='residual after4-byte loop is0..3; CMN cannot carry or produce zero')]
        pointers = {row['resolvedPointer'] for row in pools}
        if len(pointers) != 1:
            raise ValueError('CRC054 table pointer dependencies are not a single base')
        table = next(iter(pointers))
        raw_table = image[table-0x100000:table-0x100000+8192]
        dependencies[table] = dict(address=table, size=8192, sha256=sha(raw_table),
                                   tables=8, entriesPerTable=256, entryBytes=4,
                                   mathematicalPolynomial=0xedb88320,
                                   allEntriesMatchGeneratedTables=raw_table == expected_table)
        callers = []
        for caller in census['functions']:
            if entry not in caller['calledFunctionAddresses']:
                continue
            sites = []
            for region in caller['ranges']:
                start, end = region['start'], region['endExclusive']
                for instruction in decoder.disasm(image[start-0x100000:end-0x100000], start):
                    if instruction.mnemonic.startswith(('bl', 'blx', 'b')) and instruction.operands:
                        target = instruction.operands[0]
                        if target.type == ARM_OP_IMM and target.imm == entry:
                            sites.append(dict(instruction=instruction.address,
                                              mnemonic=instruction.mnemonic, target=entry,
                                              sha256=sha(instruction.bytes)))
            callers.append(dict(censusEntry=caller['address'], measuredDirectEdges=sites))
        rows.append(dict(address=entry, symbol='fn_' + format(entry, '08x'), mode='ARM',
                         instructionBytes=sum(end-start for start, end in ranges),
                         instructionRanges=[dict(start=start, endExclusive=end, bytes=end-start,
                                                 sha256=sha(image[start-0x100000:end-0x100000]))
                                            for start, end in ranges],
                         literalDependencies=pools, tableAddress=table, directCallees=[], callers=callers,
                         arguments=['uint32 seed:r0', 'const unsigned char* buffer:r1', 'uint32 length:r2'],
                         nullBufferReturnsZero=True,
                         endianDomain='Canonical ARM little-endian data; local store1/read-byte selects entry path.',
                         endianGateProof=dict(localWord=1, firstByteUnderCanonicalLittleEndian=1,
                                              condition='CMP byte,0; intervening conditional LDR/MVN preserve flags',
                                              equalBranchInstruction=entry+40,
                                              unreachableEntryTail=[ranges[1][1]-8,ranges[1][1]],
                                              unreachableLowerRange=list(ranges[0]),
                                              totalUnreachablePcs=(ranges[0][1]-ranges[0][0])//4+2,
                                              notClaimedForBigEndianExecution=True),
                         residualLengthProof=dict(afterBulk32=[0,31], afterWords4=[0,3],
                                                  cmnConstant=0x80000001, carry=False, zero=False,
                                                  residualScalarFallbackPcs=30),
                         unreachableRanges=unreachable,
                         expectedReachableInstructionPcs=277,
                         lowerAddressAlternate='Complete measured owned fragment; statically unreachable from the declared little-endian entry.'))
    gzip = []
    for callsite in (0x5f5f34, 0x5f5f40, 0x732360):
        ins = next(decoder.disasm(image[callsite-0x100000:callsite-0x100000+4], callsite))
        expected = 0x7305b8 if callsite == 0x732360 else 0x7321e0
        if ins.id != ARM_INS_BL or ins.operands[0].imm != expected:
            raise ValueError('CRC054 measured gzip dependency edge changed')
        gzip.append(dict(instruction=callsite, target=expected, sha256=sha(ins.bytes)))
    nop = image[0x7321e0-0x100000:0x7321e4-0x100000]
    if nop != bytes.fromhex('0000a0e1'):
        raise ValueError('CRC054 SDK leading no-op/fallthrough changed')
    return dict(schemaVersion=1, status='measured-complete-crc-pair-before-source',
                moduleSha256=MODULE_SHA, censusSha256=CENSUS_SHA,
                functions=rows, tableDependencies=list(dependencies.values()),
                totalInstructionBytes=sum(row['instructionBytes'] for row in rows),
                measuredGzipPath=dict(edges=gzip, sdkNoOpAddress=0x7321e0,
                                      sdkCensusOwner=0x7321e4, sdkNoOpSha256=sha(nop),
                                      establishesFirstCrcCopyOnly=True, additionalSdkCredit=0),
                sourceCreditGranted=0, exactCreditGranted=0, coordinatorReviewRequired=True)


if __name__ == '__main__':
    result = measure()
    save(EVIDENCE / 'claim.json', result)
    print(json.dumps(dict(functions=len(result['functions']),
                          instructionBytes=result['totalInstructionBytes'],
                          tables=result['tableDependencies']), indent=2))
