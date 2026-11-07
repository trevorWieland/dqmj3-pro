from native_wave012_graph_memory import CAPACITY


def erase(memory, ring, point):
    p = memory.p
    for node in memory.links(ring):
        first = memory.uint(node + 2 * p, 2)
        last = memory.uint(node + 2 * p + 2, 2)
        if first == point:
            if last == point:
                memory.remove(node)
                memory.free(node, 1)
            else:
                memory.setu(node + 2 * p, first + 1, 2)
            return 1
        if last == point:
            memory.setu(node + 2 * p + 2, last - 1, 2)
            return 1
        if first <= point <= last:
            memory.setu(node + 2 * p + 2, point - 1, 2)
            following = memory.ptr(node + p)
            right = memory.allocate(1)
            if not right:
                return 0
            memory.append(following, right)
            memory.setu(right + 2 * p, point + 1, 2)
            memory.setu(right + 2 * p + 2, last, 2)
            return 1
    return 1


def copy_label(memory, destination, source, target, arena):
    p = memory.p
    kind = memory.uint(source + p, 1)
    if kind not in [1, 2, 3, 4]:
        return 1
    memory.setu(destination + p, kind, 1)
    memory.setp(destination, target)
    if kind in [2, 4]:
        size = 2 if kind == 2 else 1
        memory.put(destination + p + 2, memory.get(source + p + 2, size))
    elif kind == 3:
        memory.setp(destination + 4 * p, arena)
        memory.destroy(destination)
        memory.setp(destination + 4 * p, memory.ptr(source + 4 * p))
        for old in memory.links(source + 2 * p):
            new = memory.allocate(1)
            if not new:
                return 0
            memory.append(destination + 2 * p, new)
            memory.put(new + 2 * p, memory.get(old + 2 * p, 4))
    return 1


def closure(memory, members):
    p = memory.p
    changed = True
    while changed:
        changed = False
        for index, source in enumerate(memory.sources):
            if not memory.uint(members + index, 1):
                continue
            for edge in memory.links(source + 2 * p):
                label = edge + 2 * p
                if memory.uint(label + p, 1) != 1:
                    continue
                target = memory.ptr(label)
                identifier = memory.uint(target + 5 * p)
                if not memory.uint(members + identifier, 1):
                    memory.setu(members + identifier, 1, 1)
                    changed = True
                    break
            if changed:
                break


def populate(memory, state):
    p = memory.p
    members = memory.ptr(state + 9 * p)
    for index, source in enumerate(memory.sources):
        if not memory.uint(members + index, 1):
            continue
        for old in memory.links(source + 2 * p):
            if memory.uint(old + 3 * p, 1) == 1:
                continue
            edge = memory.allocate(2)
            if not edge:
                return 0
            memory.label_default(edge + 2 * p)
            memory.append(state + 5 * p, edge)
            if not copy_label(memory, edge + 2 * p, old + 2 * p, memory.ptr(old + 2 * p), memory.arena):
                return 0
    return 1


def intern(memory, members):
    p = memory.p
    count = memory.source_count
    for state in memory.links(memory.context + p):
        old = memory.ptr(state + 9 * p)
        if memory.get(old, count) == memory.get(members, count):
            return state
    state = memory.allocate(3)
    if not state:
        return 0
    data = state + 2 * p
    memory.head(data)
    memory.head(data + 3 * p)
    for offset in [2 * p, 5 * p, 6 * p, 7 * p]:
        memory.setp(data + offset, 0)
    memory.setu(data + 8 * p, 0)
    memory.setu(data + 8 * p + 4, 0, 1)
    memory.append(memory.context + p, state)
    memory.setp(data + 6 * p, memory.arena)
    memory.setu(data + 8 * p, count)
    buffer = memory.allocate((count + 15) >> 4)
    memory.setp(data + 7 * p, buffer)
    if not buffer:
        return 0
    for offset in [2 * p, 5 * p]:
        memory.setp(data + offset, memory.arena)
    memory.put(buffer, memory.get(members, count))
    return state if populate(memory, state) else 0


def membership(memory, label, point):
    p = memory.p
    return any(memory.uint(node + 2 * p, 2) <= point <= memory.uint(node + 2 * p + 2, 2)
               for node in memory.links(label + 2 * p))


def transform(memory):
    p, state = memory.p, memory.current
    head = state + 5 * p
    link = memory.ptr(head + p)
    while link != head:
        selected = link
        label = selected + 2 * p
        if memory.uint(label + p, 1) != 2:
            link = memory.ptr(link + p)
            continue
        count = memory.source_count
        character = memory.uint(label + p + 2, 2)
        members = memory.allocate((count + 15) >> 4)
        if not members:
            return 0
        memory.put(members, bytes(count))
        target = memory.ptr(label)
        memory.setu(members + memory.uint(target + 5 * p), 1, 1)
        other = memory.ptr(head + p)
        while other != head:
            following = memory.ptr(other + p)
            other_label = other + 2 * p
            kind = memory.uint(other_label + p, 1)
            remove = False
            if other != selected:
                if kind == 2 and memory.uint(other_label + p + 2, 2) == character:
                    remove = True
                elif kind == 3 and membership(memory, other_label, character):
                    if not erase(memory, other_label + 2 * p, character):
                        return 0
                    remove = not memory.links(other_label + 2 * p)
                else:
                    other = following
                    continue
                target = memory.ptr(other_label)
                memory.setu(members + memory.uint(target + 5 * p), 1, 1)
                if remove:
                    memory.remove(other)
                    memory.destroy(other_label)
                    memory.free(other, 2)
            other = following
        closure(memory, members)
        target = intern(memory, members)
        if not target:
            return 0
        memory.free(members, (count + 15) >> 4)
        edge = memory.allocate(2)
        if not edge:
            return 0
        memory.label_default(edge + 2 * p)
        memory.append(state + 2 * p, edge)
        memory.setp(edge + 2 * p, target)
        memory.setu(edge + 3 * p, 2, 1)
        memory.setu(edge + 3 * p + 2, character, 2)
        link = memory.ptr(selected + p)
        memory.remove(selected)
        memory.destroy(label)
        memory.free(selected, 2)
    return 1
