import hashlib
import json
import sys
import os
from pathlib import Path
ROOT=next(p for p in Path(__file__).resolve().parents if(p/'AGENTS.md').is_file())

def pin(path):
    b=Path(path).read_bytes();return dict(bytes=len(b),sha256=hashlib.sha256(b).hexdigest())

def checked(base,relative,expected):
    value=Path(relative);p=(base/value).resolve()
    if value.is_absolute()or '..'in value.parts or '\\'in relative or not p.is_relative_to(Path(os.path.abspath(base)))or p==Path(os.path.abspath(base)):raise ValueError('owner intake path escape')
    if pin(p)!={k:expected[k]for k in ['bytes','sha256']}:raise ValueError('owner intake input changed '+relative)
    return p

def load(intake,source_only=False):
    source=json.loads((intake/'source-manifest-v1.json').read_bytes());support=json.loads((intake/'support-manifest-v1.json').read_bytes());reference=json.loads((intake/'reference-inputs-v1.json').read_bytes())
    if (source['productionUnits'],source['headers'],source['qualificationOnlyUnits'])!=(7,2,4):raise ValueError('owner source roles differ')
    if sorted(r['role']for r in source['files'])!=sorted(['production-algorithm']*7+['header']*2+['qualification-fixture']*4):raise ValueError('owner exact source roles differ')
    provider=json.loads((intake/'provenance/providers-v1.json').read_bytes())
    for role,key,prefix in [('production-algorithm','productionC','src/native/wave062-owner/'),('header','headers','src/native/wave062-owner/include/'),('qualification-fixture','qualificationOnly','toolscripts/fixtures/sdk062_owner_v1/')]:
        rows=[r for r in source['files']if r['role']==role]
        if {Path(r['proposedPath']).name for r in rows}!={Path(p).name for p in provider[key]}or any(not r['proposedPath'].startswith(prefix)for r in rows):raise ValueError('owner production/header/fixture role moved')
    if len({r['proposedPath']for r in source['files']})!=13:raise ValueError('owner source membership duplicates')
    frozen=json.loads((intake/'provenance/ready-v1.json').read_bytes())['owned'];pins={}
    for row in source['files']+support['files']:
        p=checked(intake,row['intakePath'],row);pins[str(p)]=pin(p)
        if frozen[row['oldPath']]!={k:row[k]for k in ['bytes','sha256']}:raise ValueError('owner source diverges from frozen packet')
    for row in source['existingSdkInputs']+support['inheritedFiles']:
        p=checked(ROOT,row['path'],row);pins[str(p)]=pin(p)
    for row in support['frozenProvenance']:
        p=checked(intake,row['intakePath'],row);pins[str(p)]=pin(p)
    for name in ['source-manifest-v1.json','support-manifest-v1.json','reference-inputs-v1.json','programs-v1.json','expected-artifacts-v1.json','contract.py','gates.py','bindings.py','run.py']:
        p=intake/name;pins[str(p.resolve())]=pin(p)
    if not source_only:
        for row in reference['files']:
            p=checked(ROOT,row['path'],row);pins[str(p)]=pin(p)
    pins[str(ROOT/'AGENTS.md')]=pin(ROOT/'AGENTS.md')
    runtime_manifest=ROOT/'evidence/lanes/native-sdk062/public-inputs-v1/runtime-manifest.json'
    pins[str(runtime_manifest.resolve())]=pin(runtime_manifest)
    canonical={r['path']for r in reference['files']}
    bases={'project':ROOT,'python-base':Path(sys.base_prefix).resolve()}
    for row in json.loads(runtime_manifest.read_bytes())['files']:
        if source_only and row['scope']=='project'and row['path']in canonical:continue
        p=checked(bases[row['scope']],row['path'],row);pins[str(p)]=pin(p)
    for p in {Path(sys.executable),Path(sys._base_executable),Path(sys.base_prefix)/'python313.dll'}:pins[str(p.resolve())]=pin(p)
    return source,support,reference,pins
