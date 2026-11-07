from bootstrap_public_compiler import contained


def directories(root, unit, allowed):
    values = unit.get('includeDirectories', [])
    if not isinstance(values, list) or any(not isinstance(value, str) for value in values):
        raise RuntimeError('Include directories must be an explicit list')
    if len(values) != len(set(values)):
        raise RuntimeError('Duplicate include directory')
    result = []
    for value in values:
        path = contained(root, value)
        original = root / value
        chain = [original, *original.parents]
        if (not path.is_dir() or not any(path.is_relative_to(folder) for folder in allowed)
                or any((item.is_symlink() or item.is_junction()) for item in chain if item != root and item.is_relative_to(root))):
            raise RuntimeError('Include directory escapes reviewed source trees or is missing/linked')
        result.append(path)
    return result


def resolve(item, name, search, allowed):
    candidates = [item.parent / name, *(directory / name for directory in search)]
    for candidate in candidates:
        path = candidate.resolve()
        if not any(path.is_relative_to(folder) for folder in allowed):
            raise RuntimeError('Source dependency escapes reviewed source trees')
        if path.is_file():
            return path
    raise RuntimeError('Missing literal source header: ' + name)
