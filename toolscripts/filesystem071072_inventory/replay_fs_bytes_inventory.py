import hashlib
import json
import sys
from pathlib import Path

sys.dont_write_bytecode=True
HERE=Path(__file__).resolve().parent


def main():
    source=HERE/'replay_fs_inventory.py'
    text=source.read_text()
    changes={"choices=['holes','normal-caller']":"choices=['holes','bytes','normal-caller']",
        "if args.profile=='holes':":"if args.profile in ('holes','bytes'):",
        "observer.run('holes',output)":"observer.run(args.profile,output)"}
    for old,new in changes.items():
        if text.count(old)!=1:
            raise ValueError('Frozen inventory observer shape changed')
        text=text.replace(old,new)
    namespace=dict(__name__='filesystem_inventory_bytes_adapter',__file__=str(source))
    exec(compile(text,str(source),'exec'),namespace)
    namespace['main']()
    path=HERE/'original-bytes-v1/inventory-observation-v1.json'
    report=json.loads(path.read_text())
    report['observerRebinding']=dict(path=source.name,sha256=hashlib.sha256(source.read_bytes()).hexdigest(),
        scope='Select the existing frozen namespace bytes profile only',originalCodeOrDataAltered=False)
    path.write_text(json.dumps(report,indent=2)+'\n')


if __name__=='__main__':
    main()
