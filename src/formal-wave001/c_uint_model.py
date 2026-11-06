import z3


class UnsupportedC(ValueError):
    pass


def translate(ast, name, input_value):
    aliases = {node['name']: node['type']['qualType'] for node in ast['inner'] if node.get('kind') == 'TypedefDecl'}
    functions = [node for node in ast['inner'] if node.get('kind') == 'FunctionDecl' and node.get('name') == name]
    if len(functions) != 1:
        raise UnsupportedC('Exactly one function definition required')
    function = functions[0]
    if function.get('variadic') or function.get('storageClass') or any(node['kind'].endswith('Attr') for node in function.get('inner', [])):
        raise UnsupportedC('Variadic, storage or special ABI attributes unsupported')
    return_type = function['type']['qualType'].split(' (')[0]
    if aliases.get(return_type, return_type) != 'unsigned int':
        raise UnsupportedC('Return must be unsigned int32 under measured target data model')
    parameters = [node for node in function['inner'] if node['kind'] == 'ParmVarDecl']
    bodies = [node for node in function['inner'] if node['kind'] == 'CompoundStmt']
    if len(parameters) != 1 or len(bodies) != 1 or len(function['inner']) != 2:
        raise UnsupportedC('One parameter and one body required')
    parameter = parameters[0]
    if parameter['type'].get('desugaredQualType', parameter['type']['qualType']) != 'unsigned int':
        raise UnsupportedC('Only total unsigned int32 input domain is supported')
    statements = bodies[0].get('inner', [])
    if len(statements) != 1 or statements[0]['kind'] != 'ReturnStmt' or len(statements[0]['inner']) != 1:
        raise UnsupportedC('Only a single pure return expression is supported')
    kinds = []

    def expression(node):
        kind = node['kind']
        kinds.append(kind)
        children = node.get('inner', [])
        type_name = node.get('type', {}).get('desugaredQualType', node.get('type', {}).get('qualType'))
        if kind == 'DeclRefExpr' and node['referencedDecl']['id'] == parameter['id'] and type_name == 'unsigned int':
            return 'u32', input_value
        if kind == 'IntegerLiteral' and type_name == 'unsigned int' and 0 <= int(node['value']) <= 0xffffffff:
            return 'u32', z3.BitVecVal(int(node['value']), 32)
        if kind == 'ImplicitCastExpr' and len(children) == 1:
            child_type, value = expression(children[0])
            if node['castKind'] == 'LValueToRValue' and child_type == 'u32' and type_name == 'unsigned int':
                return child_type, value
            if node['castKind'] == 'IntegralCast' and child_type == 'c-int-boolean' and type_name == 'unsigned int':
                return 'u32', z3.If(value, z3.BitVecVal(1, 32), z3.BitVecVal(0, 32))
        if kind == 'BinaryOperator' and len(children) == 2 and type_name == 'int':
            left_type, left = expression(children[0])
            right_type, right = expression(children[1])
            if node['opcode'] == '&&' and left_type == right_type == 'c-int-boolean':
                return 'c-int-boolean', z3.And(left, right)
            if left_type == right_type == 'u32' and node['opcode'] in ('>=', '<='):
                return 'c-int-boolean', (z3.UGE if node['opcode'] == '>=' else z3.ULE)(left, right)
        raise UnsupportedC('Unsupported expression, conversion, side effect or possible undefined-behavior domain: ' + kind)

    result_type, result = expression(statements[0]['inner'][0])
    if result_type != 'u32':
        raise UnsupportedC('Unsigned int32 return conversion missing')
    description = {'input': 'all 2^32 unsigned int32 values', 'expressionKinds': sorted(set(kinds)),
                   'onlyComparisonsAndPureLogicalAnd': True, 'arithmeticShiftDivisionPointerOperations': [],
                   'signedOverflowPossible': False, 'uninitializedReadPossible': False,
                   'shortCircuitOperandsPureAndIndividuallyTotal': True,
                   'returnConversion': 'C int 0/1 to unsigned int32; exact and defined'}
    return result, description
