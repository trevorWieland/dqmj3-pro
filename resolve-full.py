import json, pathlib, subprocess
p = pathlib.Path('config/build-units.json')
ours = subprocess.run(['git','show',':2:config/build-units.json'],capture_output=True,check=True).stdout.decode('utf-8')
theirs = subprocess.run(['git','show',':3:config/build-units.json'],capture_output=True,check=True).stdout.decode('utf-8')
a = json.loads(ours); b = json.loads(theirs)
have = {u['source'] for u in a['units']}
added = [u for u in b['units'] if u['source'] not in have]
removed = {u['source'] for u in b['units']} - {u['source'] for u in a['units']}
# take main's file text and append the branch's new units, byte-preserving
text = ours
nl = '\r\n' if '\r\n' in text[:4000] else '\n'
i = '    '
for u in added:
    idx = text.index('"excludedSources"'); close = text.rindex(']',0,idx)
    block = text[:close].rstrip()
    if not block.endswith(','): block += ','
    lines = [i+'{', i+'  "source": "%s",' % u['source'], i+'  "headers": [']
    hd = u.get('headers') or []
    for k,h in enumerate(hd):
        lines.append(i+'    "%s"%s' % (h, ',' if k < len(hd)-1 else ''))
    lines.append(i+'  ],')
    for key in ('role','dataProfile','extentProfile','targets','compilerProfile','allowedUnusedParameters'):
        if key in u:
            lines.append(i+'  "%s": %s%s' % (key, json.dumps(u[key]), ',' if key != 'allowedUnusedParameters' else ''))
    if lines[-1].endswith(','): lines[-1] = lines[-1][:-1]
    lines.append(i+'}')
    text = block + nl + nl.join(lines) + nl + '  ' + text[close:]
# roots union
roots = list(dict.fromkeys(a.get('nativeComponentRoots', []) + b.get('nativeComponentRoots', [])))
cfg = json.loads(text)
missing_roots = [r for r in roots if r not in cfg.get('nativeComponentRoots', [])]
if missing_roots:
    anchor = '"nativeComponentRoots": ['
    i2 = text.index(anchor); j2 = text.index(']', i2)
    blk = text[i2:j2].rstrip()
    if not blk.endswith(','): blk += ','
    text = text[:i2] + blk + nl + nl.join('    "%s"' % r for r in missing_roots) + nl + '  ' + text[j2:]
p.write_bytes(text.encode('utf-8'))
d = json.loads(p.read_bytes().decode('utf-8'))
print('units:', len(d['units']), 'added:', len(added), 'roots:', len(d['nativeComponentRoots']))
