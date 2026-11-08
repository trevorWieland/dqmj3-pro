import argparse
import importlib.util
import json
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]


def main():
    parser=argparse.ArgumentParser()
    parser.add_argument('--output',type=Path,required=True)
    parser.add_argument('--mode',choices=['full','source-only','public-only'],required=True)
    args=parser.parse_args()
    output=args.output.resolve()
    if not output.is_relative_to(ROOT/'work') or output==ROOT/'work':
        raise ValueError('Velocity replay verification must stay within its owned work output')
    source=ROOT/'evidence/verification/producers/review_particle019_preflight.py'
    spec=importlib.util.spec_from_file_location('particle019_replay_review',source)
    module=importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    result=module.scope(output,args.mode)
    payload=dict(status='velocity-replay-artifacts-and-post-exit-monitors-verified',
        **{key:value for key,value in result.items() if key!='compiledArtifacts'},
        nativeArtifactsChecked=len(result['compiledArtifacts']),sourceCreditGranted=0,wholeGameClaimed=False)
    (output/'coordinator-scope-verification.json').write_text(json.dumps(payload,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(payload))


if __name__=='__main__':
    main()
