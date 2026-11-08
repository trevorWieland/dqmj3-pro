import hashlib
import json
from pathlib import Path
import shutil


KINDS = {'code', 'exheader'}
STAGING = 'work/component-intake/private/generated'


def validate_policy(plan):
    policy = plan.get('intakeCleanup')
    if policy is None:
        return False
    if not isinstance(policy, dict) or set(policy) != {'mode', 'producerInputs'}:
        raise ValueError('Intake cleanup requires an explicit code/exheader-only policy')
    inputs = policy['producerInputs']
    if (policy['mode'] != 'code-exheader-only' or not isinstance(inputs, list)
            or not all(isinstance(kind, str) for kind in inputs) or len(inputs) != 2 or set(inputs) != KINDS):
        raise ValueError('Intake cleanup cannot serve asset/container/RomFS plans')
    steps = plan.get('producerSteps')
    if not isinstance(steps, list) or not steps:
        raise ValueError('Cleanup requires explicit producer steps')
    for step in steps:
        kinds = step.get('inputKinds')
        if kinds == ['none']:
            continue
        if (not isinstance(kinds, list) or not kinds or not all(isinstance(kind, str) for kind in kinds)
                or len(kinds) != len(set(kinds)) or not set(kinds) <= KINDS):
            raise ValueError('Cleanup producers must explicitly consume only code/exheader inputs')
    return True


def digest(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def pin(path, root):
    return {'path': path.relative_to(root).as_posix(), 'bytes': path.stat().st_size, 'sha256': digest(path)}


def owned(root, relative):
    if not isinstance(relative, str) or not relative or '\\' in relative:
        raise ValueError('Cleanup needs explicit slash-separated replay paths')
    parts = Path(relative)
    if parts.is_absolute() or '..' in parts.parts:
        raise ValueError('Cleanup path escapes its replay root')
    current = root
    for part in parts.parts:
        current = current / part
        if current.is_symlink() or getattr(current, 'is_junction', lambda: False)():
            raise ValueError('Cleanup cannot follow linked replay paths')
    resolved = current.resolve()
    if resolved == root or not resolved.is_relative_to(root):
        raise ValueError('Cleanup path escapes its replay root')
    return resolved


def save(path, value):
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def cleanup(owner, destination, plan, *, read_only_originals=False):
    if not validate_policy(plan):
        return None
    owner = Path(owner).resolve()
    raw_destination = Path(destination).absolute()
    relative = raw_destination.relative_to(owner)
    destination = owned(owner, relative.as_posix())
    expected_parent = owner / 'work/clean-replay'
    if destination == expected_parent or not destination.is_relative_to(expected_parent):
        raise ValueError('Cleanup requires an independently owned clean-replay child')
    project = json.loads(owned(destination, 'project.json').read_text())
    if set(project['inputs']) != {'base', 'update'}:
        raise ValueError('Cleanup requires the two measured CIA input identities')
    final_copies, copied_inputs, inventory_receipts, read_only_inputs = [], [], [], []
    targets = []
    for label in ['base', 'update']:
        inventory_path = owned(destination, 'evidence/inventory/' + label + '-content0.json')
        frozen = json.loads(inventory_path.read_text())
        for name, key in [('code.bin', 'codeSha256'), ('exheader.bin', 'exheaderSha256')]:
            target = owned(destination, 'generated/' + label + '-content0/' + name)
            expected_size = frozen['codeBytes'] if name == 'code.bin' else 2048
            if not target.is_file() or target.stat().st_size != expected_size or digest(target) != frozen[key]:
                raise ValueError('Cleanup final code/ExHeader copy failed its frozen identity')
            final_copies.append(pin(target, destination))
        relative_input = project['inputs'][label]
        if not relative_input.startswith('inputs/archive/') or Path(relative_input).suffix.lower() != '.cia':
            raise ValueError('Cleanup CIA target is outside the private input-copy tree')
        target = owned(destination, relative_input)
        primary = owned(owner, relative_input)
        if read_only_originals:
            if target.exists() or not primary.is_file() or digest(primary) != project[label + 'CiaSha256']:
                raise ValueError('Read-only original archive changed or an unnecessary local copy exists')
            read_only_inputs.append(pin(primary, owner))
        else:
            if not target.is_file() or digest(target) != project[label + 'CiaSha256']:
                raise ValueError('Cleanup copied CIA identity differs')
            if primary.exists() and target.samefile(primary):
                raise ValueError('Cleanup input is linked to the owner primary')
            targets.append(target)
            copied_inputs.append(pin(target, destination))
        for name in [label + '.json', label + '-content0.json']:
            receipt = owned(destination, 'work/component-intake/private/evidence/inventory/' + name)
            if not receipt.is_file():
                raise ValueError('Cleanup would discard unrecorded fresh-intake metadata')
            fresh = json.loads(receipt.read_text())
            expected = {'sha256': project[label + 'CiaSha256']} if name == label + '.json' else {
                'codeSha256': frozen['codeSha256'], 'exheaderSha256': frozen['exheaderSha256']}
            if any(fresh.get(key) != value for key, value in expected.items()):
                raise ValueError('Cleanup fresh-intake receipt differs from measured identities')
            inventory_receipts.append(pin(receipt, destination))
    staging = owned(destination, STAGING)
    if not staging.is_dir():
        raise ValueError('Cleanup fresh-intake generated staging is absent')
    staged = []
    directories = [staging]
    pending = [staging]
    while pending:
        for path in sorted(pending.pop().iterdir()):
            checked = owned(destination, path.relative_to(destination).as_posix())
            if checked.is_file():
                relative = checked.relative_to(staging)
                if (len(relative.parts) != 2 or relative.parts[0] not in ['base-content0', 'update-content0']
                        or relative.name not in ['code.bin', 'code-compressed.bin', 'exheader.bin']):
                    raise ValueError('Cleanup staging contains assets, modules or inputs beyond main code/ExHeader')
                staged.append(pin(checked, destination))
            elif checked.is_dir():
                directories.append(checked)
                pending.append(checked)
            else:
                raise ValueError('Cleanup staging contains an unsupported filesystem entry')
    receipt_path = owned(destination, 'intake-cleanup.json')
    if receipt_path.exists():
        raise ValueError('Cleanup requires a fresh receipt path')
    receipt = {'schemaVersion': 1, 'status': 'verified-before-removal', 'policy': plan['intakeCleanup'],
        'executedHelperSha256': digest(Path(__file__).resolve()),
        'finalCopies': final_copies, 'copiedInputs': copied_inputs, 'stagingFiles': staged,
        'readOnlyOriginalInputs': read_only_inputs, 'freshExtractionVerified': True,
        'preservedFreshInventory': inventory_receipts, 'removedPaths': [],
        'ownerPrimaryInputsModified': False, 'generatedFinalCopiesRemoved': False}
    save(receipt_path, receipt)
    try:
        for target, identity in zip(targets, copied_inputs, strict=True):
            checked = owned(destination, identity['path'])
            if checked != target or pin(checked, destination) != identity:
                raise ValueError('Cleanup CIA changed after verification')
            checked.unlink()
            receipt['removedPaths'].append(identity['path'])
            save(receipt_path, receipt)
        for identity in staged:
            if pin(owned(destination, identity['path']), destination) != identity:
                raise ValueError('Cleanup staging changed after verification')
        for directory in directories:
            if owned(destination, directory.relative_to(destination).as_posix()) != directory:
                raise ValueError('Cleanup staging directory ownership changed')
        if owned(destination, STAGING) != staging:
            raise ValueError('Cleanup staging ownership changed')
        shutil.rmtree(staging)
        receipt['removedPaths'].append(STAGING)
        receipt['status'] = 'removed-verified-replay-input-copies'
    except Exception as error:
        receipt.update(status='cleanup-failed', errorType=type(error).__name__, error=str(error))
        raise
    finally:
        save(receipt_path, receipt)
    return pin(receipt_path, destination)
