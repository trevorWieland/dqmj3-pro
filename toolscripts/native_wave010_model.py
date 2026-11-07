SPACE = {9, 10, 11, 12, 13, 32, 0x85, 0x2028, 0x2029, 0x3000}
BREAK = {10, 13, 0x85, 0x2028, 0x2029}


def validate(case):
    states = case['states']
    if not 1 <= len(states) <= 16 or not 0 <= case['initial'] < len(states):
        raise ValueError('Invalid matcher state domain')
    if len(case['text']) > 64 or any(not 1 <= value <= 65535 for value in case['text']):
        raise ValueError('Input must be at most 64 nonzero UTF-16 code units')
    for index, state in enumerate(states):
        if not -128 <= state['result'] <= 127 or len(state['edges']) > 16:
            raise ValueError('Invalid state result or edge count')
        for edge in state['edges']:
            if not 0 <= edge['destination'] < len(states) or not 0 <= edge['kind'] <= 255:
                raise ValueError('Invalid transition identity')
            if not 0 <= edge.get('value', 0) <= 65535:
                raise ValueError('Invalid singleton/transition value')
            if len(edge.get('ranges', [])) > 16 or any(not 0 <= low <= 65535 or not 0 <= high <= 65535
                                                      for low, high in edge.get('ranges', [])):
                raise ValueError('Invalid interval list')
            if edge['kind'] == 4 and edge['destination'] <= index:
                raise ValueError('Fixture control transitions must be acyclic')
    return case


def control(states, current, flags):
    trace = []
    for _ in range(len(states) + 1):
        selected = next((edge for edge in states[current]['edges']
                         if edge['kind'] == 4 and (edge['value'] & 255) < 32 and flags & (1 << (edge['value'] & 255))), None)
        if selected is None:
            return current, trace
        current = selected['destination']
        trace.append(current)
    raise ValueError('Control transition cycle outside fixture domain')


def contains(edge, value):
    if edge['kind'] == 2:
        return edge['value'] == value
    if edge['kind'] == 3:
        return any(low <= value <= high for low, high in edge.get('ranges', []))
    return False


def match(case):
    validate(case)
    states, text = case['states'], case['text']
    current, _ = control(states, case['initial'], 0x11)
    previous_space = True
    position = 0
    if not text:
        current, _ = control(states, current, 0x6a)
        return {'result': states[current]['result'], 'state': current}
    while position < len(text):
        character = text[position]
        remaining = -1
        if character in BREAK:
            remaining = 2 if character == 13 and position + 1 < len(text) and text[position + 1] == 10 else 1
            current, _ = control(states, current, 2)
        while True:
            character = text[position]
            space = character in SPACE
            current, _ = control(states, current, 8 if space == previous_space else 4)
            edge = next((item for item in states[current]['edges'] if contains(item, character)), None)
            if edge is None:
                return {'result': 0, 'state': current}
            current = edge['destination']
            if remaining != -1:
                remaining -= 1
                if remaining == 0:
                    current, _ = control(states, current, 1)
            position += 1
            previous_space = space
            if position == len(text):
                current, _ = control(states, current, 0x62 | (8 if space else 4))
                return {'result': states[current]['result'], 'state': current}
            if remaining <= 0:
                break
    raise ValueError('Unreachable input termination state')
