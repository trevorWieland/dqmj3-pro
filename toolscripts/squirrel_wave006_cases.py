from squirrel_wave006_programs import instruction as op


def corpus():
    cases = []
    for mode in (0, 2):
        for value in (0, -7, 42, -2147483648):
            cases.append({'mode': mode, 'value': value, 'oldReference': True, 'debug': value == 42})
        for bits in (0, 0x80000000, 0x3fc00000, 0x7fc12345):
            cases.append({'mode': mode, 'oldReference': True,
                          'program': [op('LOADFLOAT', 1, bits), op('MOVE', 2, 1), op('RETURN', 1, 2)]})
        cases += [{'mode': mode, 'program': [op('DLOAD', 1, 2, 2, 1), op('DMOVE', 3, 1, 4, 2), op('RETURN', 1, 4)]},
                  {'mode': mode, 'referenceRoot': True, 'program': [op('LOADROOT', 1), op('RETURN', 1, 1)]},
                  {'mode': mode, 'program': [op('LOADFREE', 1, 2), op('RETURN', 1, 1)]},
                  {'mode': mode, 'program': [op('LOADBOOL', 1, -7), op('NOT', 2, 1), op('RETURN', 1, 2)]},
                  {'mode': mode, 'program': [op('LINE', 0, 123), op('LOADINT', 1, 7), op('RETURN', 1, 1)], 'debug': True},
                  {'mode': mode, 'program': [op(255, 255, 0), op('RETURN', 255)]},
                  {'mode': mode, 'program': [op('LOADINT', 2, 77), op('LOADNULLS', 1, 1), op('RETURN', 1, 2)]},
                  {'mode': mode, 'program': [op('LOADINT', 1, 7), op('LOADNULLS', 1, 0), op('LOADNULLS', 1, -1), op('RETURN', 1, 1)]}]
        for name in ('JZ', 'JNZ'):
            for bits in (0, 0x80000000, 0x3f800000, 0x7fc12345):
                cases.append({'mode': mode, 'program': [op('LOADFLOAT', 1, bits), op(name, 1, 1), op('LOADINT', 2, 9), op('RETURN', 1, 2)]})
        for name in ('AND', 'OR'):
            for boolean in (0, 1):
                cases.append({'mode': mode, 'program': [op('LOADBOOL', 2, boolean), op('LOADINT', 1, 9),
                             op(name, 1, 1, 2), op('LOADINT', 1, 7), op('RETURN', 1, 1)]})
        cases.append({'mode': mode, 'program': [op('LOADINT', 1, 1), op('JUMP', 0, 1), op('LOADINT', 1, 2),
                                                op('LOADINT', 1, 3), op('RETURN', 1, 1)]})
        for count in (0, 1, 2):
            cases.append({'mode': mode, 'varargs': count, 'program': [op('VARGC', 3), op('RETURN', 1, 3)]})
        for length in (0, 1, 5, 16):
            cases.append({'mode': mode, 'nativeArray': True, 'length': length, 'growStack': length == 16})
    cases += [{'mode': 0, 'arguments': 1, 'parameters': 3, 'defaults': 2, 'oldReference': True,
               'program': [op('RETURN', 1, 2)]},
              {'mode': 0, 'arguments': 3, 'parameters': 1, 'variableParameters': True, 'oldReference': True,
               'program': [op('VARGC', 3), op('RETURN', 1, 3)]},
              {'mode': 0, 'arguments': 1, 'parameters': 2},
              {'mode': 2, 'nativeDepth': 100}]
    for mode in (0, 2):
        for returned in (0, 1, -1, -666):
            cases.append({'mode': mode, 'nativeReturn': returned,
                          'program': [op('LOAD', 1, 0), op('LOADINT', 3, 7), op('CALL', 4, 1, 2, 2), op('RETURN', 1, 4)]})
        for flags, notify in ((0, False), (1, False), (0, True), (0xffffffff, True)):
            cases.append({'mode': mode, 'nativeReturn': -1, 'raiseError': flags, 'notifyAll': notify,
                          'program': [op('LOAD', 1, 0), op('LOADINT', 3, 7), op('CALL', 4, 1, 2, 2), op('RETURN', 1, 4)]})
        for tag in ('LOADINT', 'LOAD'):
            for notify in (False, True):
                cases.append({'mode': mode, 'notifyAll': notify, 'oldReference': True, 'probeRegister': 4,
                              'program': [op('PUSHTRAP', 4, 2), op(tag, 1, 1), op('THROW', 1), op('RETURN', 1, 4)]})
        cases += [{'mode': mode, 'program': [op('PUSHTRAP', 4, 3), op('POPTRAP', 1), op('LOADINT', 1, 7), op('RETURN', 1, 1), op('RETURN', 255)]},
                  {'mode': mode, 'trapCapacity': 0, 'program': [op('PUSHTRAP', 4, 2), op('LOAD', 1, 1), op('THROW', 1), op('RETURN', 1, 4)]},
                  {'mode': mode, 'nativeReturn': -1, 'program': [op('PUSHTRAP', 4, 3), op('LOAD', 1, 0), op('LOADINT', 3, 7), op('CALL', 4, 1, 2, 2), op('RETURN', 1, 4)]},
                  {'mode': mode, 'program': [op('LOAD', 1, 1), op('THROW', 1)]},
                  {'mode': mode, 'program': [*[op('PUSHTRAP', 4, 6 - index) for index in range(5)],
                                            op('POPTRAP', 5), op('RETURN', 255), op('RETURN', 255)]}]
    cases += numerical_cases() + arithmetic_cases() + script_cases() + comparison_cases() + array_cases() + closure_cases() + indexed_cases() + table_cases() + local_cases() + setter_cases() + table_release_cases() + delegate_cases() + iteration_cases()
    return [{'seed': 0x666200 + index, **case} for index, case in enumerate(cases)]


def numerical_cases():
    cases = []
    for mode in (0, 2):
        for operation in (0, 1, 2, 3, 4, 5, 6, 7, 255):
            for amount in (0, 1, 31, 32, 33, 255, 256, -1):
                cases.append({'mode': mode, 'program': [op('LOADINT', 1, -2147483647), op('LOADINT', 2, amount),
                              op('BITW', 3, 2, 1, operation), op('RETURN', 1, 3)]})
        for name in ('NEG', 'BWNOT'):
            for value in (0, 1, -1, -2147483648, 2147483647):
                cases.append({'mode': mode, 'oldReference': True, 'probeRegister': 3,
                              'program': [op('LOADINT', 1, value), op(name, 3, 1), op('RETURN', 1, 3)]})
            for loading, value in [('LOADFLOAT', 0), ('LOADFLOAT', 0x80000000), ('LOADFLOAT', 0x3fc00000),
                                   ('LOADFLOAT', 0x7fc12345), ('LOADFLOAT', 0x7f812345), ('LOADBOOL', 1), ('LOAD', 0), ('LOAD', 3)]:
                cases.append({'mode': mode, 'program': [op(loading, 1, value), op(name, 3, 1), op('RETURN', 1, 3)]})
        cases += [{'mode': mode, 'program': [op('LOADFLOAT', 1, 0x3fc00000), op('LOADINT', 2, 7), op('BITW', 3, 2, 1, 0), op('RETURN', 1, 3)]},
                  {'mode': mode, 'program': [op('PUSHTRAP', 4, 3), op('LOADBOOL', 1, 1), op('NEG', 3, 1), op('POPTRAP', 1), op('RETURN', 1, 4)]}]
    return cases


def arithmetic_cases():
    cases = []
    for mode in (0, 2):
        for operation in '+-*/%?':
            for a, b in [(7, 3), (-7, 3), (7, -3), (-7, -3), (-2147483648, -1), (2147483647, 2), (-2147483648, 2147483647), (7, 0)]:
                cases.append({'mode': mode, 'oldReference': True, 'probeRegister': 3,
                              'program': [op('LOADINT', 1, a), op('LOADINT', 2, b), op('ARITH', 3, 2, 1, ord(operation)), op('RETURN', 1, 3)]})
        for operation in '+-*/?':
            for left, a, right, b in [('LOADFLOAT', 0x3fc00000, 'LOADFLOAT', 0x40200000), ('LOADFLOAT', 0xbfc00000, 'LOADINT', 3),
                                      ('LOADINT', -2147483648, 'LOADFLOAT', 0x3fc00000), ('LOADFLOAT', 0x3f800000, 'LOADFLOAT', 0), ('LOADFLOAT', 0, 'LOADFLOAT', 0)]:
                cases.append({'mode': mode, 'program': [op(left, 1, a), op(right, 2, b), op('ARITH', 3, 2, 1, ord(operation)), op('RETURN', 1, 3)]})
    return cases


def script_cases():
    cases = []
    for mode in (0, 2):
        for name in ('CALL', 'TAILCALL'):
            for child, extra in [([op('LOADINT', 1, 33), op('RETURN', 1, 1)], {'debug': True}),
                                  ([op('LOAD', 1, 1), op('RETURN', 1, 1)], {}),
                                  ([op('RETURN', 255)], {'childParameters': 2}),
                                  ([op('LOAD', 1, 0), op('LOADINT', 3, 5), op('CALL', 4, 1, 2, 2), op('RETURN', 1, 4)], {'nativeArray': True})]:
                cases.append({'mode': mode, 'childProgram': child, **extra,
                              'program': [op('LOAD', 1, 0), op(name, 4, 1, 2, 1), op('RETURN', 1, 4)]})
        cases.append({'mode': mode, 'childProgram': [op('LOAD', 1, 1), op('THROW', 1)],
                      'program': [op('PUSHTRAP', 4, 3), op('LOAD', 1, 0), op('CALL', 4, 1, 2, 1), op('POPTRAP', 1), op('RETURN', 1, 4)]})
    return cases


def comparison_cases():
    cases = []
    for mode in (0, 2):
        for name in ('EQ', 'NE', 'CMP'):
            for a, b in [(0, 0), (7, 3), (-7, 3), (-2147483648, 2147483647), (16777217, 16777216)]:
                for comparison in ((0, 2, 3, 4) if name == 'CMP' else (0,)):
                    cases.append({'mode': mode, 'program': [op('LOADINT', 1, a), op('LOADINT', 2, b), op(name, 3, 2, 1, comparison), op('RETURN', 1, 3)]})
            for a, b in [(0, 0x80000000), (0x7fc12345, 0x7fc12345), (0x7fc12345, 0x3f800000), (0x3f800000, 0x7fc12345), (0x3f800000, 0x40000000)]:
                cases.append({'mode': mode, 'program': [op('LOADFLOAT', 1, a), op('LOADFLOAT', 2, b), op(name, 3, 2, 1, 0), op('RETURN', 1, 3)]})
            for a, b in [(0, 0x80000000), (16777217, 0x4b800000), (1, 0x7fc12345)]:
                cases.append({'mode': mode, 'program': [op('LOADINT', 1, a), op('LOADFLOAT', 2, b), op(name, 3, 2, 1, 0), op('RETURN', 1, 3)]})
        for name in ('EQ', 'NE'):
            cases.append({'mode': mode, 'oldReference': True, 'probeRegister': 3,
                          'program': [op('LOADINT', 1, 0x1122), op(name, 3, 2, 1, 1), op('RETURN', 1, 3)]})
        cases.append({'mode': mode, 'nativeArray': True,
                      'program': [op('LOAD', 1, 0), op('LOADINT', 3, 0), op('LOADINT', 4, 1), op('LOADINT', 5, 5),
                                  op('ARITH', 3, 4, 3, ord('+')), op('CMP', 6, 5, 3, 3), op('JNZ', 6, -3),
                                  op('CALL', 7, 1, 2, 2), op('RETURN', 1, 7)]})
    return cases


def array_cases():
    cases = []
    for mode in (0, 2):
        for capacity in (0, 1, 4, 5):
            cases.append({'mode': mode, 'oldReference': True,
                          'program': [op('NEWARRAY', 1, capacity), op('APPENDARRAY', 1, 1, 0, 1), op('LOADINT', 2, 7),
                                      op('APPENDARRAY', 1, 2), op('APPENDARRAY', 1, 1), op('RETURN', 1, 1)]})
        for count in (0, 1, 2):
            for loading, value in [('LOADINT', 0), ('LOADINT', 1), ('LOADINT', -1), ('LOADFLOAT', 0x3fc00000),
                                   ('LOADFLOAT', 0x7fc12345), ('LOADFLOAT', 0x7f800000), ('LOADBOOL', 1)]:
                cases.append({'mode': mode, 'varargs': count,
                              'program': [op(loading, 1, value), op('GETVARGV', 3, 1), op('RETURN', 1, 3)]})
        cases += [{'mode': mode, 'program': [op('NEWARRAY', 1, 0), op('RETURN', 1, 1)]},
                  {'mode': mode, 'program': [op('NEWARRAY', 1, 1), op('NEWARRAY', 2, 1), op('APPENDARRAY', 1, 2), op('RETURN', 1, 1)]}]
    cases.append({'mode': 0, 'arguments': 3, 'parameters': 1, 'variableParameters': True, 'oldReference': True,
                  'program': [op('LOADINT', 1, 0), op('GETVARGV', 3, 1), op('RETURN', 1, 3)]})
    return cases


def closure_cases():
    cases = []
    for mode in (0, 2):
        for descriptors in ([], [(0, 1)], [(2, 2)], [(0, 1), (2, 2)], [(0x1000000, 1)]):
            cases.append({'mode': mode, 'createClosure': True, 'outerDescriptors': descriptors, 'childProgram': [op('RETURN', 255)],
                          'program': [op('LOAD', 1, 1), op('CLOSURE', 2, 0), op('RETURN', 1, 2)]})
        cases.append({'mode': mode, 'createClosure': True, 'outerDescriptors': [(0, 1)], 'defaultIndices': [3, 4],
                      'childProgram': [op('LOADFREE', 1, 0), op('RETURN', 1, 1)],
                      'program': [op('LOAD', 1, 1), op('LOADINT', 3, 17), op('LOADINT', 4, 19), op('CLOSURE', 2, 0), op('RETURN', 1, 2)]})
        cases.append({'mode': mode, 'createClosure': True, 'outerDescriptors': [(0, 1)],
                      'childProgram': [op('LOADFREE', 1, 0), op('RETURN', 1, 1)],
                      'program': [op('LOAD', 1, 1), op('CLOSURE', 2, 0), op('NEWARRAY', 5, 2), op('APPENDARRAY', 5, 2),
                                  op('CALL', 4, 2, 2, 1), op('APPENDARRAY', 5, 4), op('RETURN', 1, 5)]})
        cases.append({'mode': mode, 'createClosure': True, 'defaultIndices': [3, 4], 'childParameters': 3,
                      'childProgram': [op('RETURN', 1, 2)],
                      'program': [op('LOADINT', 3, 17), op('LOADINT', 4, 19), op('CLOSURE', 2, 0), op('NEWARRAY', 5, 2),
                                  op('APPENDARRAY', 5, 2), op('CALL', 4, 2, 2, 1), op('APPENDARRAY', 5, 4), op('RETURN', 1, 5)]})
        for descriptors, defaults in (([], []), ([(0, 1)], []), ([(0, 1), (2, 2)], [3, 4])):
            cases.append({'mode': mode, 'createClosure': True, 'outerDescriptors': descriptors, 'defaultIndices': defaults,
                          'childProgram': [op('LOADINT', 1, 33), op('RETURN', 1, 1)],
                          'program': [op('LOAD', 1, 1), op('LOADINT', 3, 17), op('LOADINT', 4, 19), op('CLOSURE', 2, 0),
                                      op('CALL', 4, 2, 2, 1), op('RETURN', 1, 4)]})
    return cases


def indexed_cases():
    cases = []
    for mode in (0, 2):
        for name in ('GET', 'GETK'):
            for loading, bits in [('LOADINT', 0), ('LOADFLOAT', 0x3fc00000), ('LOADFLOAT', 0x7fc12345)]:
                cases.append({'mode': mode, 'literalIntegers': {2: 0},
                    'program': [op('NEWARRAY', 5, 3), op('LOADINT', 1, 7), op('APPENDARRAY', 5, 1),
                                op('LOADINT', 1, 9), op('APPENDARRAY', 5, 1), op(loading, 4, bits),
                                op(name, 3, 5 if name == 'GET' else 2, 4 if name == 'GET' else 5),
                                op('APPENDARRAY', 5, 3), op('RETURN', 1, 5)]})
        for name in ('PREPCALL', 'PREPCALLK'):
            cases.append({'mode': mode, 'nativeArray': True, 'literalIntegers': {2: 0},
                'program': [op('NEWARRAY', 5, 2), op('APPENDARRAY', 5, 0, 0, 1), op('LOADINT', 4, 0),
                            op(name, 1, 4 if name == 'PREPCALL' else 2, 5, 2), op('LOADINT', 3, 5),
                            op('CALL', 7, 1, 2, 2), op('APPENDARRAY', 5, 7), op('RETURN', 1, 5)]})
        cases.append({'mode': mode, 'weakLiteral': True,
                      'program': [op('NEWARRAY', 5, 2), op('APPENDARRAY', 5, 3, 0, 1), op('LOADINT', 4, 0),
                                  op('GET', 3, 5, 4), op('APPENDARRAY', 5, 3), op('RETURN', 1, 5)]})
    return cases


def table_cases():
    cases = []
    for mode in (0, 2):
        for keys in ([0], [0, 4], [3, 0, 4, 8], [0, 4, 8, 12, 16, 20], [1, 2, 3, 4, 5, 6, 7, 8], [0, 4, 3, 8]):
            rows = [op('NEWTABLE', 5, 0)]
            for index, key in enumerate(keys): rows += [op('LOADINT', 1, key), op('LOADINT', 2, index + 7), op('NEWSLOT', 2, 5, 1, 2)]
            rows += [op('LOADINT', 4, keys[0]), op('GET', 3, 5, 4), op('LOADINT', 4, 99), op('NEWSLOT', 3, 5, 4, 3), op('RETURN', 1, 5)]
            cases.append({'mode': mode, 'program': rows})
        cases.append({'mode': mode, 'createClosure': True, 'outerDescriptors': [(1, 7)],
            'childProgram': [op('LOADFREE', 1, 0), op('RETURN', 1, 1)],
            'program': [op('NEWTABLE', 0, 0), op('LOADINT', 1, 7), op('LOADINT', 2, 33), op('NEWSLOT', 2, 0, 1, 2),
                        op('CLOSURE', 3, 0), op('NEWARRAY', 5, 3), op('APPENDARRAY', 5, 0), op('APPENDARRAY', 5, 3),
                        op('CALL', 4, 3, 2, 1), op('APPENDARRAY', 5, 4), op('RETURN', 1, 5)]})
        for loading, value in [('LOADFLOAT', 0x3fc00000), ('LOADBOOL', 1), ('LOAD', 1)]:
            cases.append({'mode': mode, 'program': [op('NEWTABLE', 5, 0), op(loading, 1, value), op('LOAD', 2, 1),
                op('NEWSLOT', 2, 5, 1, 2), op('GET', 3, 5, 1), op('NEWSLOT', 3, 5, 1, 3), op('RETURN', 1, 5)]})
    return cases


def local_cases():
    cases = []
    for mode in (0, 2):
        for code in ('COMPARITHL', 'INCL', 'PINCL'):
            for value in (0, 0x7fffffff, 0x80000000, 0xffffffff):
                for amount in (1, 0, 128, 255):
                    cases.append({'mode': mode, 'program': [op('LOADINT', 1, value), op('LOADINT', 2, 3),
                        op(code, 3, 1, 2, {1: ord('+'), 0: ord('-'), 128: ord('*'), 255: ord('/')}[amount] if code == 'COMPARITHL' else amount), op('NEWARRAY', 5, 2),
                        op('APPENDARRAY', 5, 3), op('APPENDARRAY', 5, 1), op('RETURN', 1, 5)]})
        for code in ('INCL', 'PINCL'):
            for value in (0x3fc00000, 0x80000000, 0x4b800001, 0x7f800000):
                cases.append({'mode': mode, 'program': [op('LOADFLOAT', 1, value), op(code, 3, 1, 0, 255),
                    op('NEWARRAY', 5, 2), op('APPENDARRAY', 5, 3), op('APPENDARRAY', 5, 1), op('RETURN', 1, 5)]})
        for kind in ('NEWTABLE', 'NEWARRAY'):
            for key in (0, 1, -1):
                rows = [op(kind, 5, 1), op('LOADINT', 1, key), op('EXISTS', 3, 5, 1)]
                if kind == 'NEWARRAY': rows += [op('APPENDARRAY', 5, 3), op('LOADINT', 1, 0), op('EXISTS', 3, 5, 1), op('APPENDARRAY', 5, 3)]
                else: rows += [op('NEWSLOT', 3, 5, 1, 3), op('EXISTS', 3, 5, 1), op('NEWSLOT', 3, 5, 1, 3)]
                cases.append({'mode': mode, 'program': rows + [op('RETURN', 1, 5)]})
        for operation in ('/', '%'):
            cases.append({'mode': mode, 'program': [op('LOADINT', 1, 7), op('LOADINT', 2, 0),
                op('COMPARITHL', 3, 1, 2, ord(operation)), op('RETURN', 1, 3)]})
    return cases


def setter_cases():
    cases = []
    for mode in (0, 2):
        for kind in ('NEWTABLE', 'NEWARRAY'):
            for keyop, key in (('LOADINT', 0), ('LOADFLOAT', 0x3fc00000), ('LOADFLOAT', 0x7fc12345)):
                for reference in (False, True):
                    rows = [op(kind, 5, 4), op('LOAD', 1, 1), op('LOADINT', 4, 0)]
                    if kind == 'NEWARRAY': rows += [op('APPENDARRAY', 5, 1), op('APPENDARRAY', 5, 1)]
                    else: rows += [op(keyop, 4, key), op('NEWSLOT', 1, 5, 4, 1)]
                    rows += [op(keyop, 4, key), op('LOAD' if reference else 'LOADINT', 3, 1 if reference else 17),
                             op('SET', 2, 5, 4, 3), op('GET', 1, 5, 4)]
                    if kind == 'NEWARRAY': rows += [op('APPENDARRAY', 5, 1), op('APPENDARRAY', 5, 2)]
                    cases.append({'mode': mode, 'program': rows + [op('RETURN', 1, 5)]})
    return cases


def table_release_cases():
    cases = []
    for mode in (0, 2):
        for count in (0, 1, 5):
            rows = [op('NEWTABLE', 5, 0)]
            for index in range(count): rows += [op('LOADINT', 1, index * 4), op('LOAD', 2, 1), op('NEWSLOT', 2, 5, 1, 2)]
            cases.append({'mode': mode, 'program': rows + [op('RETURN', 255)]})
        cases.append({'mode': mode, 'createClosure': True, 'childProgram': [op('RETURN', 255)],
            'program': [op('NEWTABLE', 5, 0), op('CLOSURE', 1, 0), op('CLOSURE', 2, 0),
                        op('NEWSLOT', 2, 5, 1, 2), op('LOADNULLS', 1, 2), op('RETURN', 255)]})
    return cases


def delegate_cases():
    cases = []
    for mode in (0, 2):
        for operation in ('GET', 'SET', 'EXISTS', 'clear', 'missing'):
            rows = [op('NEWTABLE', 5, 0), op('NEWTABLE', 4, 0), op('LOADINT', 1, 7), op('LOADINT', 2, 33),
                    op('NEWSLOT', 2, 4, 1, 2), op('DELEGATE', 3, 5, 4)]
            if operation == 'GET': rows += [op('GET', 2, 5, 1), op('RETURN', 1, 2)]
            elif operation == 'SET': rows += [op('LOADINT', 2, 17), op('SET', 2, 5, 1, 2), op('GET', 2, 4, 1), op('RETURN', 1, 2)]
            elif operation == 'EXISTS': rows += [op('EXISTS', 2, 5, 1), op('RETURN', 1, 2)]
            elif operation == 'missing': rows += [op('LOADINT', 1, 999), op('EXISTS', 2, 5, 1), op('RETURN', 1, 2)]
            else: rows += [op('LOADNULLS', 2, 1), op('DELEGATE', 3, 5, 2), op('RETURN', 255)]
            cases.append({'mode': mode, 'program': rows})
        for failure in ('self', 'cycle', 'wrong-delegate', 'wrong-self'):
            rows = [op('NEWTABLE', 5, 0), op('NEWTABLE', 4, 0)]
            if failure == 'self': rows += [op('DELEGATE', 3, 5, 5)]
            elif failure == 'cycle': rows += [op('DELEGATE', 3, 5, 4), op('DELEGATE', 3, 4, 5)]
            elif failure == 'wrong-delegate': rows += [op('LOADINT', 2, 1), op('DELEGATE', 3, 5, 2)]
            else: rows += [op('LOADINT', 2, 1), op('DELEGATE', 3, 2, 5)]
            cases.append({'mode': mode, 'program': rows + [op('RETURN', 255)]})
    return cases


def iteration_cases():
    cases = []
    for mode in (0, 2):
        for kind in ('NEWTABLE', 'NEWARRAY'):
            for count in (0, 1, 3, 6):
                rows = [op(kind, 5, 8)]
                for index in range(count):
                    rows += [op('LOADINT', 1, index * 4), op('LOADINT', 2, index + 7)]
                    rows += [op('NEWSLOT', 2, 5, 1, 2)] if kind == 'NEWTABLE' else [op('APPENDARRAY', 5, 2)]
                rows += [op('LOADNULLS', 0, 3), op('LOADINT', 3, 0), op('FOREACH', 5, 3, 0),
                         op('LOADINT', 3, 0x1234), op('ARITH', 3, 1, 3, ord('+')), op('JUMP', 0, -4)]
                rows += [op('APPENDARRAY', 5, 3), op('RETURN', 1, 5)] if kind == 'NEWARRAY' else [op('RETURN', 1, 3)]
                cases.append({'mode': mode, 'program': rows})
        cases.append({'mode': mode, 'weakLiteral': True, 'program': [op('NEWARRAY', 5, 2), op('APPENDARRAY', 5, 3, 0, 1),
            op('LOADNULLS', 0, 3), op('FOREACH', 5, 2, 0), op('LOADINT', 3, 123), op('APPENDARRAY', 5, 1), op('RETURN', 1, 5)]})
        cases.append({'mode': mode, 'createClosure': True, 'childProgram': [op('RETURN', 255)],
            'program': [op('NEWTABLE', 5, 0), op('CLOSURE', 1, 0), op('LOADINT', 2, 33), op('NEWSLOT', 2, 5, 1, 2),
                        op('LOADNULLS', 1, 2), op('LOADINT', 3, 0), op('FOREACH', 5, 3, 0), op('LOADINT', 3, 123),
                        op('ARITH', 3, 1, 3, ord('+')), op('JUMP', 0, -4), op('RETURN', 1, 3)]})
    return cases


def negative_inputs():
    return {'wrong-integer-tag': {'value': 42},
            'wrong-jump': {'program': [op('LOADINT', 1, 1), op('JUMP', 0, 1), op('LOADINT', 1, 2), op('LOADINT', 1, 3), op('RETURN', 1, 1)]},
            'wrong-null-count': {'program': [op('LOADINT', 2, 77), op('LOADNULLS', 1, 1), op('RETURN', 1, 2)]},
            'wrong-move': {'program': [op('LOADINT', 1, 42), op('LOADINT', 2, 7), op('MOVE', 3, 1), op('RETURN', 1, 3)]},
            'wrong-scalar-publication': {'oldReference': True},
            'wrong-clear-boundary': {'program': [op('LOAD', 1, 1), op('LOADINT', 3, 7), op('RETURN', 1, 3)]},
            'late-vararg-publication': {'varargs': 2, 'program': [op('VARGC', 3), op('RETURN', 1, 3)]},
            'wrong-trap-target': {'program': [op('PUSHTRAP', 4, 2), op('LOADINT', 1, 7), op('THROW', 1), op('RETURN', 1, 4)]},
            'wrong-trap-handler': {'program': [op('PUSHTRAP', 4, 2), op('LOADINT', 1, 7), op('THROW', 1), op('LOADINT', 5, 9), op('RETURN', 1, 5)]},
            'wrong-shift-width': {'program': [op('LOADINT', 1, 1), op('LOADINT', 2, 32), op('BITW', 3, 2, 1, 4), op('RETURN', 1, 3)]},
            'wrong-integer-quotient': {'program': [op('LOADINT', 1, -7), op('LOADINT', 2, 3), op('ARITH', 3, 2, 1, ord('/')), op('RETURN', 1, 3)]},
            'lost-tail-call': {'debug': True, 'childProgram': [op('LOADINT', 1, 33), op('RETURN', 1, 1)],
                               'program': [op('LOAD', 1, 0), op('TAILCALL', 4, 1, 2, 1), op('RETURN', 1, 4)]},
            'wrong-float-identity': {'program': [op('LOADFLOAT', 1, 0), op('LOADFLOAT', 2, 0x80000000), op('EQ', 3, 2, 1), op('RETURN', 1, 3)]},
            'late-append-retain': {'program': [op('NEWARRAY', 1, 1), op('APPENDARRAY', 1, 1, 0, 1),
                                             op('APPENDARRAY', 1, 1, 0, 1), op('RETURN', 1, 1)]},
            'wrong-closure-capture': {'createClosure': True, 'outerDescriptors': [(0, 1)], 'childProgram': [op('RETURN', 255)],
                                      'program': [op('LOAD', 1, 1), op('LOADINT', 2, 17), op('CLOSURE', 3, 0), op('RETURN', 1, 3)]},
            'wrong-closure-destruction-order': {'createClosure': True, 'outerDescriptors': [(0, 1)], 'defaultIndices': [3, 4],
                'childProgram': [op('LOADINT', 1, 33), op('RETURN', 1, 1)],
                'program': [op('LOAD', 1, 1), op('LOADINT', 3, 17), op('LOADINT', 4, 19), op('CLOSURE', 2, 0),
                            op('CALL', 4, 2, 2, 1), op('RETURN', 1, 4)]},
            'wrong-array-index': {'program': [op('NEWARRAY', 5, 3), op('LOADINT', 1, 7), op('APPENDARRAY', 5, 1),
                op('LOADINT', 1, 9), op('APPENDARRAY', 5, 1), op('LOADINT', 4, 0), op('GET', 3, 5, 4),
                op('APPENDARRAY', 5, 3), op('RETURN', 1, 5)]},
            'skip-foreach-element': {'program': [op('NEWARRAY', 5, 4), op('LOADINT', 1, 7), op('APPENDARRAY', 5, 1),
                op('LOADINT', 1, 8), op('APPENDARRAY', 5, 1), op('LOADINT', 1, 9), op('APPENDARRAY', 5, 1),
                op('LOADNULLS', 0, 3), op('LOADINT', 3, 0), op('FOREACH', 5, 3, 0), op('LOADINT', 3, 123),
                op('ARITH', 3, 1, 3, ord('+')), op('JUMP', 0, -4), op('APPENDARRAY', 5, 3), op('RETURN', 1, 5)]},
            'accepted-delegate-cycle': {'program': [op('NEWTABLE', 5, 0), op('DELEGATE', 3, 5, 5), op('RETURN', 255)]},
            'wrong-table-destruction-order': {'createClosure': True, 'childProgram': [op('RETURN', 255)],
                'program': [op('NEWTABLE', 5, 0), op('CLOSURE', 1, 0), op('CLOSURE', 2, 0),
                            op('NEWSLOT', 2, 5, 1, 2), op('LOADNULLS', 1, 2), op('RETURN', 255)]},
            'wrong-set-value': {'program': [op('NEWARRAY', 5, 2), op('LOADINT', 1, 7), op('APPENDARRAY', 5, 1),
                op('LOADINT', 4, 0), op('LOADINT', 3, 17), op('SET', 2, 5, 4, 3), op('RETURN', 1, 5)]},
            'unsigned-local-increment': {'program': [op('LOADINT', 1, 7), op('INCL', 3, 1, 0, 255), op('RETURN', 1, 3)]},
            'lost-table-collision-link': {'program': [op('NEWTABLE', 5, 0), op('LOADINT', 1, 0), op('LOADINT', 2, 7),
                op('NEWSLOT', 2, 5, 1, 2), op('LOADINT', 1, 4), op('LOADINT', 2, 9), op('NEWSLOT', 2, 5, 1, 2), op('RETURN', 1, 5)]}}
