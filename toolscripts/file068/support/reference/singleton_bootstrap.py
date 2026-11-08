import argparse
import json
from pathlib import Path
import sys


sys.path.insert(0, str(Path(__file__).resolve().parent))
import patch_provider


class Machine(patch_provider.Machine):
    def __init__(self, elf, respond_initialize=False):
        super().__init__(elf, respond_initialize)
        self.allow_create_thread = True


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    report = patch_provider.fs_priority.run_component.run(Machine, output)
    report['workerScheduled'] = False
    report['limits'].append('Original CreateThread uses the separately measured067 runnable-but-not-scheduled contract; no kernel thread or worker task was actually run by068.')
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
