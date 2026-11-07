import hashlib
import json
import struct
from pathlib import Path

from pyctr.fileio import SubsectionIO
from pyctr.type.romfs import RomFSReader
from native_wave013_common import ROOT,record,sha


PATHS=['/data/Field/Lod/A00_00/VP.lod','/data/Field/Env/env000.xbb',
    '/data/Script/Battle/Pos/BATTLE004.xbb.gz','/data/Layout/NaviMap/A00_00.arc']


def extract(folder):
    folder.mkdir(parents=True,exist_ok=True)
    settings=json.loads((ROOT/'project.json').read_text());inventory=json.loads((ROOT/'evidence/inventory/base.json').read_text())
    original=ROOT/settings['inputs']['base']
    with original.open('rb') as file:
        if hashlib.file_digest(file,'sha256').hexdigest()!=inventory['sha256']:raise ValueError('Owner CIA identity differs')
    content=inventory['contents'][0];members={row['path']:row for row in content['ncch']['romfsFiles']};results=[]
    with original.open('rb') as file:
        file.seek(content['offset']);header=file.read(512)
        if header[0x100:0x104]!=b'NCCH' or not header[0x18f]&4:raise ValueError('Owner unencrypted NCCH identity differs')
        offset,units=struct.unpack_from('<II',header,0x1b0)
        reader=RomFSReader(SubsectionIO(file,content['offset']+offset*512,units*512),closefd=False,case_insensitive=False)
        for index,name in enumerate(PATHS):
            member=members[name]
            with reader.open(name) as stream:data=stream.read(member['size']+1)
            if len(data)!=member['size'] or sha(data)!=member['sha256']:raise ValueError('Owner resource identity differs')
            path=folder/(str(index)+'-'+Path(name).name)
            if path.exists() and path.read_bytes()!=data:raise ValueError('Private cache differs; preserved')
            if not path.exists():path.write_bytes(data)
            results.append({'romfsPath':name,'ownerCiaSha256':inventory['sha256'],**record(path)})
    return results
