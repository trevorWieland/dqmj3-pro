from squirrel_wave006_programs import instruction as op


def generator_cases():
    return [{'mode': 0, 'generatorFunction': True, **fields} for fields in ({}, {'defaults': 2, 'parameters': 3},
            {'arguments': 3, 'parameters': 1, 'variableParameters': True}, {'debug': True}, {'growStack': True}, {'oldReference': True})]

def resumed_generator_cases():
    cases = []
    for mode in (0, 2):
        for debug in (False, True):
            for twice in (False, True):
                rows = [op('LOAD', 1, 0), op('CALL', 2, 1, 3, 1), op('RESUME', 4, 2), op('NEWARRAY', 5, 3),
                        op('APPENDARRAY', 5, 2), op('APPENDARRAY', 5, 4)]
                if twice: rows += [op('RESUME', 4, 2), op('APPENDARRAY', 5, 4)]
                child = [op('LOADINT', 1, 42), op('YIELD', 1, 1), op('LOADINT', 1, 43), op('YIELD', 1, 1), op('RETURN', 255)]
                cases.append({'mode': mode, 'debug': debug, 'childGenerator': True, 'childProgram': child,
                              'program': rows + [op('RETURN', 1, 5)]})
        for kind in ('varargs', 'defaults', 'reference', 'null', 'allocator'):
            rows, fields, arguments = [op('LOAD', 1, 0)], {}, 1
            if kind == 'varargs':
                fields = {'childVariableParameters': True}
                arguments = 3
                rows += [op('LOADINT', 3, 7), op('LOADINT', 4, 8), op('LOADINT', 5, 9)]
                child = [op('VARGC', 1), op('YIELD', 1, 1), op('LOADINT', 1, 0), op('GETVARGV', 1, 1), op('YIELD', 1, 1)]
            elif kind == 'defaults':
                fields = {'childParameters': 3, 'childDefaults': 2}
                child = [op('YIELD', 1, 1), op('YIELD', 1, 2)]
            elif kind == 'reference': child = [op('LOAD', 1, 1), op('YIELD', 1, 1), op('YIELD', 1, 1)]
            elif kind == 'null': child = [op('YIELD', 255, 255), op('YIELD', 255, 255)]
            else:
                fields, arguments = {'childParameters': 2}, 2
                rows += [op('LOADINT', 3, 7), op('LOAD', 4, 1)]
                child = [op('NEWARRAY', 5, 1), op('YIELD', 1, 5), op('YIELD', 255, 255)]
            rows += [op('CALL', 2, 1, 3, arguments), op('RESUME', 4, 2), op('NEWARRAY', 5, 3), op('APPENDARRAY', 5, 2),
                     op('APPENDARRAY', 5, 4), op('RESUME', 4, 2), op('APPENDARRAY', 5, 4), op('RETURN', 1, 5)]
            cases.append({'mode': mode, 'childGenerator': True, 'childProgram': child + [op('RETURN', 255)],
                          'program': rows, **fields})
    return cases

def generator_release_cases():
    cases = []
    for mode in (0, 2):
        for resumed in (False, True):
            for varargs in (False, True):
                rows = [op('LOAD', 1, 0)]
                if varargs: rows += [op('LOADINT', 3, 7), op('LOAD', 4, 1), op('LOADINT', 5, 9)]
                rows += [op('CALL', 2, 1, 3, 3 if varargs else 1)]
                if resumed: rows += [op('RESUME', 4, 2)]
                cases.append({'mode': mode, 'childGenerator': True, 'childVariableParameters': varargs,
                    'childProgram': [op('LOAD', 1, 1), op('YIELD', 1, 1), op('RETURN', 255)],
                    'program': rows + [op('LOADINT', 3, 33), op('RETURN', 1, 3)]})
    return cases

def generator_completion_cases():
    cases = []
    for mode in (0, 2):
        for debug in (False, True):
            for kind in ('null', 'int', 'ref'):
                rows = [op('LOAD', 1, 0), op('CALL', 2, 1, 3, 1), op('RESUME', 4, 2), op('RESUME', 4, 2),
                        op('NEWARRAY', 5, 2), op('APPENDARRAY', 5, 2), op('APPENDARRAY', 5, 4), op('RETURN', 1, 5)]
                child = [op('LOAD', 1, 1), op('YIELD', 1, 1)]
                child += [op('RETURN', 255)] if kind == 'null' else [op('LOADINT', 1, 17), op('RETURN', 1, 1)] if kind == 'int' else [op('LOAD', 1, 1), op('RETURN', 1, 1)]
                cases.append({'mode': mode, 'debug': debug, 'childGenerator': True, 'childProgram': child, 'program': rows})
        for caught in (False, True):
            rows = [op('LOAD', 1, 0), op('CALL', 2, 1, 3, 1), op('RESUME', 4, 2), op('RESUME', 4, 2)]
            if caught: rows += [op('PUSHTRAP', 6, 2)]
            rows += [op('RESUME', 4, 2)]
            if caught: rows += [op('POPTRAP', 1)]
            cases.append({'mode': mode, 'childGenerator': True, 'childProgram': [op('YIELD', 255, 255), op('RETURN', 255)],
                          'program': rows + [op('RETURN', 1, 6)]})
    return cases

def generator_trap_cases():
    cases = []
    for mode in (0, 2):
        for traps in (1, 2, 5):
            for repeats in (1, 2):
                child = [op('PUSHTRAP', 4, 0) for unused in range(traps)] + [op('LOADINT', 1, 17)] + [op('YIELD', 1, 1) for unused in range(repeats)] + [op('POPTRAP', traps), op('RETURN', 1, 1)]
                for index in range(traps): child[index] = op('PUSHTRAP', 4, len(child) - index - 2)
                rows = [op('LOAD', 1, 0), op('CALL', 2, 1, 3, 1)] + [op('RESUME', 4, 2) for unused in range(repeats + 1)]
                cases.append({'mode': mode, 'childGenerator': True, 'childProgram': child, 'program': rows + [op('NEWARRAY', 5, 2), op('APPENDARRAY', 5, 2), op('APPENDARRAY', 5, 4), op('RETURN', 1, 5)]})
        for trapped in (1, 2):
            child = [op('PUSHTRAP', 4, 0) for unused in range(trapped)] + [op('LOADINT', 1, 17), op('YIELD', 1, 1), op('THROW', 1), op('POPTRAP', trapped - 1), op('RETURN', 1, 4)]
            for index in range(trapped): child[index] = op('PUSHTRAP', 4, len(child) - index - 3)
            cases.append({'mode': mode, 'childGenerator': True, 'childProgram': child, 'program': [op('LOAD', 1, 0), op('CALL', 2, 1, 3, 1), op('RESUME', 4, 2), op('RESUME', 4, 2), op('RETURN', 1, 4)]})
    return cases


def generator_foreach_cases():
    cases = []
    for mode in (0, 2):
        for debug in (False, True):
            for yields in (0, 1, 2):
                child = []
                for index in range(yields): child += [op('LOADINT', 1, 17 + index * 25), op('YIELD', 1, 1)]
                child += [op('RETURN', 255)]
                rows = [op('LOAD', 1, 0), op('CALL', 2, 1, 3, 1), op('NEWARRAY', 3, 8), op('LOADNULLS', 7, 1),
                        op('FOREACH', 2, 4, 5), op('POSTFOREACH', 2, 4), op('APPENDARRAY', 3, 5), op('APPENDARRAY', 3, 6),
                        op('JUMP', 0, -5), op('RETURN', 1, 3)]
                cases.append({'mode': mode, 'debug': debug, 'childGenerator': True, 'childProgram': child, 'program': rows})
    return cases
