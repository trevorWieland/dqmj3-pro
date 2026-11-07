import struct


OPCODES = {'LINE': 0, 'LOAD': 1, 'LOADINT': 2, 'LOADFLOAT': 3, 'DLOAD': 4, 'CALL': 6, 'MOVE': 10,
           'RETURN': 19, 'LOADNULLS': 20, 'LOADROOT': 21, 'LOADBOOL': 22, 'DMOVE': 23,
           'JUMP': 24, 'JNZ': 25, 'JZ': 26, 'LOADFREE': 27, 'VARGC': 28, 'AND': 43, 'OR': 44, 'NOT': 46,
           'PUSHTRAP': 56, 'POPTRAP': 57, 'THROW': 58, 'BITW': 18, 'NEG': 45, 'BWNOT': 47, 'TAILCALL': 5, 'ARITH': 17,
           'EQ': 15, 'NE': 16, 'CMP': 40, 'GETVARGV': 29, 'NEWARRAY': 31, 'APPENDARRAY': 32, 'CLOSURE': 48,
           'GET': 14, 'GETK': 9, 'PREPCALL': 7, 'PREPCALLK': 8, 'NEWTABLE': 30, 'NEWSLOT': 11,
           'COMPARITHL': 35, 'INCL': 37, 'PINCL': 39, 'EXISTS': 41, 'SET': 13, 'DELEGATE': 53, 'FOREACH': 51, 'DELETE': 12,
           'YIELD': 49, 'RESUME': 50, 'POSTFOREACH': 52}


def instruction(name, argument0=0, argument1=0, argument2=0, argument3=0):
    return {'opcode': OPCODES.get(name, name), 'argument0': argument0, 'argument1': argument1,
            'argument2': argument2, 'argument3': argument3}


def program(case):
    if 'program' in case:
        return case['program']
    if case.get('nativeArray'):
        return [instruction('LOAD', 1, 0), instruction('LOADINT', 3, case.get('length', 5)),
                instruction('CALL', 4, 1, 2, 2), instruction('RETURN', 1, 4)]
    return [instruction('LOADINT', 1, case.get('value', 42)), instruction('MOVE', 2, 1), instruction('RETURN', 1, 2)]


def encode(rows, window=8):
    if not 1 <= len(rows) <= 64:
        raise ValueError('Outside bounded synthetic instruction program')
    result = bytearray()
    for index, row in enumerate(rows):
        opcode, a0, a1, a2, a3 = [row[key] for key in ('opcode', 'argument0', 'argument1', 'argument2', 'argument3')]
        registers = []
        if opcode in (1, 2, 3, 4, 10, 15, 16, 17, 18, 20, 21, 22, 23, 25, 26, 27, 28, 29, 31, 32, 40, 43, 44, 45, 46, 47, 56, 58): registers.append(a0)
        if opcode in (10, 17, 18, 23, 45, 46, 47): registers.append(a1)
        if opcode in (4, 23, 43, 44): registers.append(a2)
        if opcode == 23: registers.append(a3)
        if opcode in (15, 16, 17, 18, 40): registers.append(a2)
        if opcode in (15, 16, 40):
            if opcode != 40 and a3:
                if not 0 <= a1 < 4: raise ValueError('Comparison literal escaped fixture')
            else: registers.append(a1)
        if opcode == 29: registers.append(a1)
        if opcode in (11, 13): registers.extend((a0, a1, a2, a3))
        if opcode in (12, 35, 37, 39, 41, 53):
            registers.extend((a0, a1))
            if opcode in (12, 35, 41, 53): registers.append(a2)
        if opcode == 50: registers.extend((a0, a1))
        if opcode == 49 and a1 != 255: registers.append(a1)
        if opcode == 51: registers.extend((a0, a2, a2 + 1, a2 + 2))
        if opcode == 52:
            registers.append(a0)
            if not 0 <= index + a1 < len(rows): raise ValueError('PostForeach branch escaped owned program')
        if opcode == 30:
            registers.append(a0)
            if not -1 <= a1 <= 64: raise ValueError('Table size escaped fixture')
        if opcode in (7, 8, 9, 14):
            registers.extend((a0, a2))
            if opcode in (7, 14): registers.append(a1)
            elif not 0 <= a1 < 4: raise ValueError('Indexed literal escaped fixture')
            if opcode in (7, 8): registers.append(a3)
        if opcode == 48:
            registers.append(a0)
            if a1 != 0: raise ValueError('Closure prototype index escaped fixture')
        if opcode == 31 and not 0 <= a1 <= 64: raise ValueError('Array reserve escaped successful allocator fixture')
        if opcode == 32:
            if a3:
                if not 0 <= a1 < 4: raise ValueError('Append literal escaped fixture')
            else: registers.append(a1)
        if opcode == 19 and a0 != 255: registers.append(a1)
        if opcode in (5, 6):
            registers.extend((a1, a0))
            if not 0 <= a2 <= a2 + a3 <= window: raise ValueError('Native argument window escaped frame')
        if any(not 0 <= register < window for register in registers):
            raise ValueError('Instruction register escaped owned frame')
        if opcode in (1, 4, 27) and not 0 <= a1 < 4: raise ValueError('Literal/capture index escaped bounded fixtures')
        if opcode == 4 and not 0 <= a3 < 4: raise ValueError('Second literal index escaped bounded fixtures')
        if opcode in (24, 25, 26, 43, 44, 51, 56) and not 0 <= index + 1 + a1 < len(rows):
            raise ValueError('Instruction branch escaped owned program')
        if opcode == 20 and a1 > 0 and a0 + a1 > window: raise ValueError('Null initialization escaped frame')
        signed = struct.unpack('<i', struct.pack('<I', a1 & 0xffffffff))[0]
        result += struct.pack('<iBBBB', signed, opcode, a0, a2, a3)
    return bytes(result)
