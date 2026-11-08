import argparse
import hashlib
import json
from pathlib import Path
import shutil
import types

ROOT=Path.cwd()
PUBLIC_MANIFEST='evidence/lanes/native-particle019-velocity/public-inputs-v1/transport-manifest-v2.json'


def digest(path):
    raw=path.read_bytes();return dict(bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())


def contained(root,name):
    relative=Path(name);assert not relative.is_absolute()and'..'not in relative.parts and':'not in name;path=(root/relative).resolve();assert path.is_relative_to(root.resolve())and path!=root.resolve();return path


def main(args):
    public=Path(args.public_root).resolve();manifest_path=contained(public,PUBLIC_MANIFEST);manifest=json.loads(manifest_path.read_bytes());output=Path(args.output).resolve();assert output.is_relative_to(ROOT/'work')and not output.exists();output.mkdir();adapter=output/'adapter';adapter.mkdir()
    for row in manifest['files']+manifest['transportAdapters']:
        source=contained(public,row['proposedPublicPath']);assert digest(source)=={key:row['input'][key]for key in ['bytes','sha256']}
    for row in manifest['transportAdapters']:
        source=contained(public,row['proposedPublicPath']);target=contained(adapter,row['snapshot']);target.parent.mkdir(parents=True,exist_ok=True);shutil.copyfile(source,target)
    (adapter/'input-manifest-v1.json').write_bytes(manifest_path.read_bytes());module=types.ModuleType('published_velocity019_transport');module.__file__=str(adapter/'transport.py');exec(compile((adapter/'transport.py').read_bytes(),str(adapter/'transport.py'),'exec'),module.__dict__);module.WORK=adapter;module.PUBLIC_BASE=public;module.main(argparse.Namespace(mode=args.mode,output='replay',boundaries=args.boundaries))
    receipt=adapter/'replay/transport-receipt.public.json';value=json.loads(receipt.read_bytes());assert value['status']=='closed-velocity-public-transport-qualified';(output/'public-replay-receipt.public.json').write_text(json.dumps(dict(status='published-placement-replay-qualified',publicRoot=str(public),transportManifest=digest(manifest_path),transportReceipt=str(receipt.relative_to(output)),sourceReadyReopened=False,publishedProductionCompiledDirectly=True,sourceCreditGranted=0),indent=2)+'\n');print(json.dumps(dict(status='published-placement-replay-qualified',mode=args.mode)))


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--public-root',default=str(ROOT));parser.add_argument('--output',required=True);parser.add_argument('--mode',choices=['full','source-only','public-only'],required=True);parser.add_argument('--boundaries',action='store_true');main(parser.parse_args())
