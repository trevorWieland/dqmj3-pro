import argparse
import hashlib
import json
import sys
from pathlib import Path

sys.dont_write_bytecode=True
HERE=Path(__file__).resolve().parent
sys.path.insert(0,str(HERE))
import verify_fs_inventory


def main():
    parser=argparse.ArgumentParser()
    parser.add_argument('--packet',required=True,type=Path)
    args=parser.parse_args()
    proposal=json.loads((args.packet/'inventory-proposal-v1.json').read_text())
    dynamic=json.loads((args.packet/'dynamic-proof-v1.json').read_text())
    controls=json.loads((args.packet/'returning-controls-v1.json').read_text())
    verify_fs_inventory.validate(proposal,dynamic)
    if len(controls['controls'])!=9 or not all(row['returnedNormally'] and row['rejected'] for row in controls['controls']):
        raise ValueError('Missing returning inventory controls')
    if any(name.split('.')[0] in ('unicorn','capstone','pyctr','sdk062_original_v1') for name in sys.modules):
        raise ValueError('Metadata-only check imported an original/CPU provider')
    print(json.dumps(dict(status='public-metadata-only-filesystem-repair-check-passed',before=26673,proposed=26676,
        instructionOwnershipNetDelta=84,excludedLiteralBytes=20,sourceCreditGranted=0,originalInputsRequired=0,
        originalProgramsExecuted=0,canonicalAdmissionPerformed=False)))


if __name__=='__main__':
    main()
