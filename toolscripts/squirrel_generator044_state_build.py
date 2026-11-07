import hashlib
import json
from concurrent.futures import ThreadPoolExecutor
from squirrel_generator044_build import ROOT,arm,windows,android,load,SOURCES as FROZEN_SOURCES

SOURCE=ROOT/'source/squirrel-wave046'
WORK=ROOT/'work/squirrel-generator046'
for name,expected in [('evidence/lanes/squirrel-generator044/ready.json','697c044d9897da2b2a6e7e0856f8cbdfeddbec10de5c520e0114fe9da9384d94'),('evidence/lanes/squirrel-state040/core-abi-v1/frozen-manifest.json','23a38012b40a93aa1426a9fa08f424949d418a95c9cac939f7abdc2b237f2e28')]:
 path=ROOT/name
 if hashlib.sha256(path.read_bytes()).hexdigest()!=expected:raise ValueError('046 frozen input changed '+name)
 for row in json.loads(path.read_text())['files']:
  p=ROOT/row['path']
  if p.stat().st_size!=row['bytes']or hashlib.sha256(p.read_bytes()).hexdigest()!=row['sha256']:raise ValueError('046 frozen row changed '+str(p))
SOURCES=[p for p in FROZEN_SOURCES if p.name!="fixture_resources.c"]+[SOURCE/name for name in['generator_storage.c','generator_yield.c','generator_resume.c','generator_error.c','fixture_state.c','fixture_snapshot.c','fixture_resources.c']]+[ROOT/'source/squirrel-wave020/lookup_scratch.c']


def build(folder,sources=SOURCES):
 folder=folder.resolve();folder.mkdir(parents=True,exist_ok=True)
 with ThreadPoolExecutor(3)as pool:
  fs=[pool.submit(f,folder/name,sources)for f,name in[(arm,'arm'),(windows,'windows'),(android,'android')]]
  return[future.result()for future in fs]


if __name__=='__main__':build(WORK/'probe-2')
