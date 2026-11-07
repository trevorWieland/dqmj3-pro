import hashlib
import json
import tarfile
import urllib.request
from pathlib import Path

from native_wave013_common import ROOT,record,save


LOCK=ROOT/'toolscripts/native_archive032_gzip_zlib14.lock.json'


def prepare(folder):
    lock=json.loads(LOCK.read_text());folder.mkdir(parents=True,exist_ok=True)
    archive=folder/'zlib-1.4.tar.gz';expected=lock['upstreamArchive']
    if not archive.exists():
        data=urllib.request.urlopen(expected['url'],timeout=60).read(expected['bytes']+1)
        if len(data)!=expected['bytes'] or hashlib.sha256(data).hexdigest()!=expected['sha256']:
            raise ValueError('Public zlib download identity differs')
        archive.write_bytes(data)
    raw=archive.read_bytes()
    if len(raw)!=expected['bytes'] or hashlib.sha256(raw).hexdigest()!=expected['sha256']:
        raise ValueError('Existing public zlib archive differs; preserved')
    source=folder/'source';source.mkdir(exist_ok=True);records=[]
    with tarfile.open(archive,'r:gz') as package:
        for row in lock['files']:
            relative=Path(row['path'])
            if relative.is_absolute() or '..' in relative.parts or len(relative.parts)!=1:
                raise ValueError('Public zlib source path escapes dependency folder')
            member=package.getmember(lock['archivePrefix']+relative.as_posix())
            if not member.isfile() or member.size!=row['bytes']:raise ValueError('Public zlib member type/length differs')
            data=package.extractfile(member).read()
            if hashlib.sha256(data).hexdigest()!=row['sha256']:raise ValueError('Public zlib source identity differs')
            target=source/relative
            if target.exists() and target.read_bytes()!=data:raise ValueError('Existing public zlib source differs; preserved')
            if not target.exists():target.write_bytes(data)
            records.append(record(target))
    receipt={'lock':record(LOCK),'archive':record(archive),'sources':records,'unmodifiedPublicSource':True,
        'sdkSourceIdentityOrCreditClaimed':False}
    save(folder/'dependency-receipt.json',receipt)
    return source,receipt
