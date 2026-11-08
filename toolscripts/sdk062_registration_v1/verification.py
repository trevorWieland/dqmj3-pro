import hashlib
import json


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def artifacts(root):
    return {p.relative_to(root).as_posix():digest(p) for p in root.rglob('*')
            if p.is_file() and p.suffix in ['.o','.elf','.dll','.lib','.exp']}


def update(digest, value):
    digest.update(json.dumps(value,sort_keys=True,separators=(',',':')).encode())
    digest.update(b'\n')


def summarize(value):
    normal, source = hashlib.sha256(), hashlib.sha256()
    observations = 0
    for row in value['profiles']:
        native = row['target']=='windows'
        if native and int(row['arenaAddress'],16)<=0xffffffff:
            raise ValueError('Windows arena was not high address')
        metadata = {key:item for key,item in row.items()
                    if key!='observations' and not(native and key=='arenaAddress')}
        update(normal,metadata)
        update(source,{key:item for key,item in metadata.items()
                       if key not in ['originalPcs','originalAuthoredEndpointsMapped','referenceAuthoredScope']})
        for observed in row['observations']:
            if not observed['completeIndependentArenaModel']:
                raise ValueError('unvalidated arena')
            projection = observed['namedLiveOwnershipProjection']
            fingerprint = hashlib.sha256(json.dumps(projection,sort_keys=True,separators=(',',':')).encode()).hexdigest()
            if fingerprint!=observed['namedLiveOwnershipFingerprint']:
                raise ValueError('named-role fingerprint mismatch')
            comparable = {key:item for key,item in observed.items()
                          if not(native and key=='sourceRawArenaSha256')}
            update(normal,comparable)
            update(source,{key:item for key,item in comparable.items() if key!='originalRawArenaSha256'})
            observations+=1
    return dict(normal=normal.hexdigest(),sourceOnlyComparable=source.hexdigest(),observations=observations)


def controls(folder):
    value=json.loads((folder/'controls-attempt001/report.json').read_text())
    if value['status']!='passed' or value['returningRejections']!=24:
        raise ValueError('returning controls incomplete')
    for row in value['controls']:
        for outcome in row['outcomes']:
            if not outcome['normallyReturned']:
                raise ValueError('control did not return normally')
            if outcome['target']=='windows':
                outcome.pop('actualArenaSha256')
                outcome.pop('expectedArenaSha256')
    return value
