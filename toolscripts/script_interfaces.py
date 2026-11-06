import collections
import hashlib
import json
import re
import struct
import sys
from pathlib import Path, PurePosixPath

from pyctr.fileio import SubsectionIO
from pyctr.type.romfs import RomFSReader


ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'evidence/lanes/inventory-wave001'
TOKEN = re.compile(r'[A-Za-z_]\w*(?:(?:\.|::)[A-Za-z_]\w*)*')
KEYWORDS = {'if', 'for', 'foreach', 'while', 'switch', 'catch', 'function', 'return',
            'typeof', 'clone', 'delete', 'resume', 'yield', 'base', 'class', 'constructor'}


def sha(data):
    return hashlib.sha256(data).hexdigest()


def dump(name, data):
    OUT.mkdir(parents=True, exist_ok=True)
    (OUT / name).write_text(json.dumps(data, indent=2) + '\n', encoding='utf-8')


def digest_stream(stream):
    digest = hashlib.sha256()
    while block := stream.read(1024 * 1024):
        digest.update(block)
    return digest.hexdigest()


def scrub(source):
    result = list(source)
    strings = []
    index = 0
    while index < len(source):
        start = index
        if source.startswith('//', index):
            end = source.find('\n', index)
            index = len(source) if end < 0 else end
        elif source.startswith('/*', index):
            end = source.find('*/', index + 2)
            if end < 0:
                raise ValueError('Unterminated block comment')
            index = end + 2
        elif source[index] in ('"', "'"):
            quote = source[index]
            verbatim = index > 0 and source[index - 1] == '@'
            index += 1
            pieces = []
            closed = False
            while index < len(source):
                char = source[index]
                if char == quote:
                    if verbatim and index + 1 < len(source) and source[index + 1] == quote:
                        pieces.append(quote)
                        index += 2
                        continue
                    index += 1
                    closed = True
                    break
                if not verbatim and char == '\\':
                    if index + 1 >= len(source):
                        raise ValueError('Unterminated string escape')
                    pieces.extend(source[index:index + 2])
                    index += 2
                else:
                    pieces.append(char)
                    index += 1
            if not closed:
                raise ValueError('Unterminated string literal')
            strings.append({'start': start, 'end': index, 'literal': ''.join(pieces)})
        else:
            index += 1
            continue
        for at in range(start, index):
            if result[at] not in '\r\n':
                result[at] = ' '
    return ''.join(result), strings


def token_hash(token):
    return sha(token.encode('utf-8'))


def analyze_script(raw):
    try:
        source = raw.decode('utf-8-sig')
        encoding = 'utf-8-sig'
    except UnicodeDecodeError:
        source = raw.decode('cp932')
        encoding = 'cp932'
    code, literals = scrub(source)
    definitions = collections.Counter()
    definition_calls = set()
    for match in re.finditer(r'\bfunction\s+([A-Za-z_]\w*(?:(?:\.|::)[A-Za-z_]\w*)*)\s*\(', code):
        definitions[token_hash(match.group(1).split('::')[-1].split('.')[-1])] += 1
        definition_calls.add(match.start(1))
    for match in re.finditer(r'\b([A-Za-z_]\w*)\s*(?:<-|=)\s*function\s*\(', code):
        definitions[token_hash(match.group(1))] += 1
    calls = collections.Counter()
    qualified = collections.Counter()
    for match in re.finditer(r'\b([A-Za-z_]\w*(?:(?:\.|::)[A-Za-z_]\w*)*)\s*\(', code):
        full = match.group(1)
        name = full.split('::')[-1].split('.')[-1]
        if name in KEYWORDS or match.start(1) in definition_calls:
            continue
        calls[token_hash(name)] += 1
        if '.' in full or '::' in full:
            qualified[token_hash(name)] += 1
    dependencies = []
    for literal in literals:
        value = literal['literal'].replace('\\\\', '/').replace('\\', '/')
        if re.fullmatch(r'[A-Za-z0-9_./-]{1,255}', value):
            dependencies.append({'literalSha256': token_hash(value), 'candidate': value})
    return {'encoding': encoding, 'definitions': dict(sorted(definitions.items())),
            'calls': dict(sorted(calls.items())), 'qualifiedCalls': dict(sorted(qualified.items())),
            'literalDependencies': dependencies, 'stringLiteralCount': len(literals)}


def read_scripts(label):
    path = ROOT / f'evidence/inventory/{label}.json'
    inventory = json.loads(path.read_text(encoding='utf-8'))
    scripts = {}
    failures = []
    with Path(inventory['path']).open('rb') as original:
        if digest_stream(original) != inventory['sha256']:
            raise ValueError('CIA differs from frozen inventory')
        for content in inventory['contents']:
            rows = [row for row in content['ncch']['romfsFiles'] if row['path'].lower().endswith('.nut')]
            if not rows:
                continue
            original.seek(content['offset'])
            header = original.read(512)
            start, pages = struct.unpack_from('<II', header, 0x1b0)
            reader = RomFSReader(SubsectionIO(original, content['offset'] + start * 512, pages * 512),
                                 case_insensitive=False, closefd=False)
            for row in rows:
                with reader.open(row['path']) as stream:
                    raw = stream.read()
                if len(raw) != row['size'] or sha(raw) != row['sha256']:
                    raise ValueError('Script differs from inventory')
                try:
                    analyzed = analyze_script(raw)
                    scripts[row['path']] = {'path': row['path'], 'layer': label,
                                            'sha256': row['sha256'], 'size': row['size'], **analyzed}
                except (ValueError, UnicodeError) as error:
                    failures.append({'path': row['path'], 'sha256': row['sha256'], 'error': str(error)})
        original.seek(0)
        if digest_stream(original) != inventory['sha256']:
            raise ValueError('CIA changed during script indexing')
    return scripts, failures, {'path': str(path.relative_to(ROOT)), 'sha256': sha(path.read_bytes()),
                              'ciaSha256': inventory['sha256']}


def resolve_literal(candidate, origin, paths):
    candidate = candidate.replace('\\', '/')
    if '..' in PurePosixPath(candidate).parts:
        return []
    choices = {candidate, candidate + '.nut'} if not candidate.lower().endswith('.nut') else {candidate}
    alternatives = {value for choice in choices for value in
                    (choice, '/' + choice.lstrip('/'), '/data/Script/' + choice.lstrip('/'),
                     str(PurePosixPath(origin).parent / choice))}
    resolved = sorted(alternatives & paths)
    if not resolved:
        resolved = sorted(path for path in paths if any(path.endswith('/' + choice.lstrip('/')) for choice in choices))
    return resolved


def native_strings(label, sought):
    path = ROOT / f'evidence/inventory/{label}-content0.json'
    inventory = json.loads(path.read_text(encoding='utf-8'))
    data = (ROOT / f'generated/{label}-content0/code.bin').read_bytes()
    if sha(data) != inventory['codeSha256']:
        raise ValueError('Native code differs from inventory')
    result = collections.defaultdict(list)
    for match in re.finditer(rb'(?<![A-Za-z0-9_])[A-Za-z_][A-Za-z0-9_]{1,127}\x00', data):
        raw = match.group()[:-1]
        digest = sha(raw)
        if digest not in sought:
            continue
        for segment in inventory['layout']['segments']:
            if segment['codeBinOffset'] <= match.start() < segment['codeBinOffset'] + segment['initializedBytes']:
                address = segment['address'] + match.start() - segment['codeBinOffset']
                result[digest].append(address)
                break
    pointer_targets = {address: digest for digest, addresses in result.items() for address in addresses}
    pointer_refs = collections.defaultdict(list)
    for segment in inventory['layout']['segments']:
        for offset in range(segment['codeBinOffset'], segment['codeBinOffset'] + segment['initializedBytes'] - 3, 4):
            value = struct.unpack_from('<I', data, offset)[0]
            if value in pointer_targets:
                pointer_refs[pointer_targets[value]].append({
                    'pointerWordAddress': segment['address'] + offset - segment['codeBinOffset'],
                    'stringAddress': value, 'segment': segment['name']})
    return {'codeSha256': sha(data), 'identifierStringAddresses': dict(sorted(result.items())),
            'identifierPointerWordReferences': dict(sorted(pointer_refs.items()))}


def main():
    base, base_failures, base_pin = read_scripts('base')
    update, update_failures, update_pin = read_scripts('update')
    effective = base | update
    definitions = collections.defaultdict(list)
    callers = collections.defaultdict(list)
    for path, row in effective.items():
        for identifier in row['definitions']:
            definitions[identifier].append(path)
        for identifier, count in row['calls'].items():
            callers[identifier].append({'path': path, 'count': count,
                                        'qualifiedCount': row['qualifiedCalls'].get(identifier, 0)})
        retained = []
        for dependency in row['literalDependencies']:
            candidate = dependency.pop('candidate')
            dependency['resolvedPaths'] = resolve_literal(candidate, path, set(effective))
            if dependency['resolvedPaths'] or candidate.lower().endswith('.nut'):
                dependency['status'] = 'literal-resource-candidate-not-proved-load-operation'
                retained.append(dependency)
        row['literalDependencies'] = retained
    sought = set(callers)
    native = {label: native_strings(label, sought) for label in ('base', 'update')}
    bindings = []
    binding_path = OUT / 'update-native.json'
    if binding_path.is_file():
        report = json.loads(binding_path.read_text(encoding='utf-8'))
        for table in report['nativeBindingTableCandidates']:
            for row in table['entries']:
                if row['nameSha256'] in callers:
                    bindings.append({'nameSha256': row['nameSha256'], 'tableAddress': row['tableAddress'],
                                     'functionAddress': row['functionAddress'], 'mode': row['mode'],
                                     'scriptCallers': callers[row['nameSha256']],
                                     'qualification': 'candidate-registry-layout-and-lexical-call-intersection'})
    unresolved = [{'identifierSha256': identifier, 'callSites': sum(row['count'] for row in rows),
                   'scriptFiles': len(rows), 'nativeStringAddresses': native['update']['identifierStringAddresses'].get(identifier, []),
                   'nativePointerWordReferences': native['update']['identifierPointerWordReferences'].get(identifier, [])}
                  for identifier, rows in callers.items() if identifier not in definitions]
    unresolved.sort(key=lambda row: (-len(row['nativeStringAddresses']), -row['callSites'], row['identifierSha256']))
    output = {'schemaVersion': 1, 'producerSha256': sha(Path(__file__).read_bytes()),
              'reproductionArgv': sys.argv, 'inputs': [base_pin, update_pin],
              'baseScriptFiles': len(base), 'updateScriptFiles': len(update),
              'effectiveScriptFiles': len(effective), 'effectiveOriginalSourceBytes': sum(row['size'] for row in effective.values()),
              'scripts': list(effective.values()), 'definitionIdentifiers': dict(sorted(definitions.items())),
              'callIdentifiers': dict(sorted(callers.items())), 'nativeIdentifierStrings': native,
              'nativeBindingIntersections': bindings, 'unresolvedCallIdentifierQueue': unresolved,
              'lexicalFailures': {'base': base_failures, 'update': update_failures},
              'inventoryComplete': False, 'acceptedRecoveredScriptBytes': 0,
              'limits': ['Lexical index is not a full Squirrel parser or proof of runtime reachability',
                         'Definitions/calls use final identifier hashes and can collide across scopes/receivers',
                         'Unresolved calls include VM builtins, dynamic script functions and native bindings',
                         'Literal resource references, including extension-free names, are not assumed to be executed imports',
                         'All embedded original script source receives zero reconstruction credit']}
    dump('script-interfaces.json', output)
    summary = {key: output[key] for key in ('baseScriptFiles', 'updateScriptFiles', 'effectiveScriptFiles',
                                           'effectiveOriginalSourceBytes', 'inventoryComplete', 'acceptedRecoveredScriptBytes')}
    summary.update({'definitionIdentifiers': len(definitions), 'callIdentifiers': len(callers),
                    'unresolvedIdentifiers': len(unresolved), 'nativeBindingIntersections': len(bindings),
                    'baseFailures': len(base_failures), 'updateFailures': len(update_failures)})
    dump('script-summary.json', summary)
    print(json.dumps(summary, indent=2))


if __name__ == '__main__':
    main()
