import argparse
import hashlib
import json
from pathlib import Path

import effect_queue067_cohort as cohort
import effect_queue067_source_build as builder
from effect_queue067_observation import Observation


ROOT = builder.ROOT
CONTROLS = [
    ('fifo-order', 'queue_store.c', 'node->next = sentinel;\n    node->previous = sentinel->previous;\n    sentinel->previous->next = node;\n    sentinel->previous = node;',
        'node->next = sentinel->next;\n    node->previous = sentinel;\n    sentinel->next->previous = node;\n    sentinel->next = node;', 'pending-shutdown'),
    ('logical-growth-budget', 'queue_store.c', 'if (count < previous + 32u)\n                count = previous + 32u;',
        'if (count < previous + 31u)\n                count = previous + 31u;', 'opaque-growth'),
    ('pending-task-ownership', 'queue_worker.c', 'task->operations->destroy(task);', '(void)task;', 'pending-shutdown'),
    ('false-file-completion', 'queue_worker.c', 'task->operations->load(task);', 'effect_request_set_state066(task, 1);', 'single'),
    ('unwritten-worker-field', 'queue_manager.c', 'worker->current = 0;', 'worker->current = 0;\n        worker->unknown_1024 = 0;', 'idle'),
    ('native-pointer-width', 'queue_store.c', 'node->task = task;',
        'node->task = (EffectRequestTask066 *)(__UINTPTR_TYPE__)(unsigned int)(__UINTPTR_TYPE__)task;', 'opaque-growth'),
    ('provider-close-ownership', '../wave066-request/request_provider.c',
        '                    files->finalize(files->context, stream);\n                    return;',
        '                    (void)stream;\n                    return;', 'single'),
]


def cleanup(machine):
    observer = Observation(machine)
    if len(observer.records) < 2 or not observer.records[1][5]:
        return
    pending = observer.pointer(machine.worker + machine.q['pending'])
    if pending:
        cohort.invoke(machine, 'effect_queue_store_clear067', [machine.worker + machine.q['pending']])
    if not isinstance(machine, cohort.native.Native) and machine.worker_context is None:
        machine.step()
    if isinstance(machine, cohort.native.Native):
        machine.library.effect_queue_manager_destroy067(machine.manager)
    else:
        machine.destroy()


def run(expected_folder, output):
    if output.exists():
        raise ValueError('Preserve returning source controls')
    output.mkdir(parents=True)
    rows = []
    for name, filename, before, after, case in CONTROLS:
        source = (ROOT / 'src/native/wave067-queue' / filename).resolve()
        original = source.read_text()
        if original.count(before) != 1:
            raise ValueError('Control edit is not one exact ordinary-source expression')
        replacement = output / (name + '.c')
        edited = original.replace(before, after)
        for header in ['file_queue.h', 'request.h']:
            edited = edited.replace('#include "' + header + '"', '#include "' + (source.parent / header).as_posix() + '"')
        replacement.write_text(edited)
        folder = output / name
        builder.build(folder, {source: replacement})
        for profile in ['arm', 'windows', 'a64']:
            machine = cohort.native.Native(folder / 'windows') if profile == 'windows' else cohort.cpu.Machine(profile, folder / profile / 'effect_resource.elf')
            expected = json.loads((expected_folder / (case + '-original.json')).read_text())
            error, returned = None, False
            try:
                actual = cohort.run_case(machine, case)
                returned = True
                if actual != expected:
                    error = 'Normally returning source graph/budget differs from actual original'
            except ValueError as exception:
                error = str(exception)
                returned = error in ['Constructor or worker changed explicitly unwritten fields',
                    'Queue pointer has no independently owned allocation/caller identity',
                    'Worker completed without the actual generated file bytes',
                    'FIFO worker did not complete the independently selected next task',
                    'Queue/worker teardown retained a live task or block allocation']
                if not returned:
                    raise
            finally:
                cleanup(machine)
            applicable = not (name == 'native-pointer-width' and profile == 'arm')
            if bool(error) != applicable or not returned:
                raise ValueError('Control was accepted, trapped, or rejected outside its declared source semantics')
            rows.append({'control': name, 'case': case, 'profile': profile, 'applicable': applicable,
                'actualSourceOperationReturned': returned, 'rejected': bool(error), 'reason': error,
                'mutatedSourceSha256': hashlib.sha256(replacement.read_bytes()).hexdigest()})
        (output / 'progress.json').write_text(json.dumps(rows, indent=2) + '\n')
        print(json.dumps({'control': name, 'profileChecks': 3}), flush=True)
    (output / 'report.json').write_text(json.dumps({'status': 'normally-returning-semantic-source-controls-rejected',
        'controls': rows, 'sourceCreditGranted': 0}, indent=2) + '\n')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('expected_folder', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.expected_folder.resolve(), args.output.resolve())
