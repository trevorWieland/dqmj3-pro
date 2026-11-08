import hashlib,json,sys
from pathlib import Path

def digest(path):return hashlib.sha256(path.read_bytes()).hexdigest()
def load(root,inputs,manifest):
 value=json.loads(manifest.read_text());files=[];seen=set()
 if value['version']!=1:raise ValueError('unsupported heap input manifest')
 for row in value['files']:
  name=Path(row['target'])
  if name.is_absolute()or'..'in name.parts:raise ValueError('invalid input path')
  if str(name)in seen:raise ValueError('duplicate input path')
  seen.add(str(name))
  prefixes={'production':'src/native/wave062-heap/','qualification':'toolscripts/fixtures/sdk062_heap_v1/','support':'toolscripts/sdk062_heap_v1/','driver':'toolscripts/sdk062_heap_v1/driver/'}
  if row['role']not in prefixes or not name.as_posix().startswith(prefixes[row['role']]):raise ValueError('input role/path mismatch')
  path=(inputs/name).resolve();path.relative_to(inputs.resolve())
  if path.stat().st_size!=row['bytes']or digest(path)!=row['sha256']:raise ValueError('public input drift '+str(path))
  files.append((row,path))
 production=[r for r,p in files if r['role']=='production']
 if sum(r['target'].endswith('.c')for r in production)!=10 or sum(r['target'].endswith('.h')for r in production)!=1 or sum(r['role']=='qualification'for r,p in files)!=2:raise ValueError('production/fixture completeness changed')
 for row in value['readOnlyHelpers']:
  path=root/row['path']
  if digest(path)!=row['sha256']or path.stat().st_size!=row['bytes']:raise ValueError('read-only public helper drift '+str(path))
 return value,files
