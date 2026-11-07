import argparse
import hashlib
from pathlib import Path

from native_stream056_build import WORK, SOURCE, SYMBOLS, build
from native_stream056_cases import corpus
from native_stream056_measure import save
from native_stream056_oracle import Machine, Windows
from native_stream056_inputs import inputs
from native_stream056_layout import STREAM, STATE, TARGET, NATIVE


MUTATIONS = [
    ('omit-input-rewind','input -= bits >> 3;','input -= 0;',1),
    ('wrong-literal','*output++ = (StreamByte056)code.value;','*output++ = (StreamByte056)(code.value + 1);',1),
    ('ignore-window-next','index = state->window_next + state->window_size - needed;','index = state->window_size - needed;',1),
    ('distance-one-only','*output = *(output - distance);','*output = *(output - 1);',1),
    ('ignore-distance-extra','distance += hold & ((1u << extra) - 1u);','distance += 0;',1),
    ('wrong-error-mode','state->mode = 29;','state->mode = 28;',3),
    ('miss-end-code','if (code.operation & 32) {','if (0) {',1),
    ('overwrite-inactive-mode-tail','state->mode = 29;','state->untouched_mode_tail[0] = 0; state->mode = 29;',3),
    ('increment-caller-total','finish:\n','finish:\n    stream->total_input += 1;\n',1),
    ('ignore-history-have','if (needed > state->window_have && state->sane) {','if (0) {',1),
]


def mismatch_regions(offsets,target):
    layout,pointer_bytes = (TARGET,4) if target == 'arm' else (NATIVE,8)
    fields = [('stream.'+name,STREAM+layout['stream'][name])
              for name in ('next_input','next_output','message','state')]
    fields += [('state.'+name,STATE+layout['state'][name]) for name in ('window','lengths','distances')]
    result=set()
    for offset in offsets:
        field=next((name for name,start in fields if start <= offset < start+pointer_bytes),None)
        result.add('pointer:'+field if field else 'byte:'+hex(offset))
    return sorted(result)


def verify_controls(output):
    from native_stream056_build import ROOT
    if not output.resolve().is_relative_to(ROOT/'work/native-stream056'):
        raise ValueError('056 control outputs must stay in the private workspace')
    output.mkdir(parents=True,exist_ok=True)
    before_inputs=inputs()
    source = SOURCE.read_text()
    result=[]
    raw_mismatches=[]
    for name,old,new,count in MUTATIONS:
        if source.count(old) != count:
            raise ValueError('Control source location changed: '+name)
        folder = output/name
        folder.mkdir(parents=True,exist_ok=True)
        mutant = folder/'stream056.c'
        mutated = source.replace(old,new)
        if name == 'ignore-history-have':
            mutated += '\nconst char stream056_control_kept_message[] = "invalid distance too far back";\n'
        mutant.write_text(mutated)
        (folder/'stream056.h').write_bytes(SOURCE.with_suffix('.h').read_bytes())
        artifacts = {target:build(folder/target,target,mutant)[0] for target in ('arm','windows','a64')}
        machines = dict(arm=Machine('arm',artifacts['arm']),windows=Windows(artifacts['windows']),
                        a64=Machine('a64',artifacts['a64']))
        winner=None
        for case in corpus():
            try:
                machines['arm'].execute(SYMBOLS[0],case)
            except ValueError as error:
                if not getattr(error,'normal_return',False):
                    raise ValueError('Control was rejected by a terminal/ABI condition, not semantic return: '+name) from error
                winner=case
                break
        if winner is None:
            raise ValueError('Control survived corpus: '+name)
        checks=[]
        for target,machine in machines.items():
            for symbol in SYMBOLS:
                try:
                    machine.execute(symbol,winner)
                except ValueError as error:
                    if not getattr(error,'normal_return',False):
                        raise
                    checks.append(dict(target=target,symbol=symbol,case=winner['id'],normalReturn=True,
                                       rejectedByWholeArenaSemanticMismatch=True,
                                       mismatchRegions=mismatch_regions(error.differences,target)))
                    raw_mismatches.append(dict(control=name,target=target,symbol=symbol,
                                               differences=error.differences,
                                               actualArenaSha256=hashlib.sha256(error.actual).hexdigest(),
                                               expectedArenaSha256=hashlib.sha256(error.wanted).hexdigest()))
                else:
                    raise ValueError('Control returned an accepted state on '+target+': '+name)
        result.append(dict(name=name,sourceSha256=hashlib.sha256(mutant.read_bytes()).hexdigest(),
                           case=winner['id'],checks=checks))
        machines['windows'].close()
        print('returning control rejected',name,flush=True)
    report=dict(schemaVersion=1,status='compiled-normally-returning-semantic-controls-rejected',
                controls=len(result),targetSymbolChecks=sum(len(row['checks']) for row in result),results=result,
                rawArenaMismatchRequiredBeforeReportClassification=True,
                pointerByteCoincidences='ASLR-dependent byte bitmaps retained privately; deterministic report identifies the exact typed pointer field and every other differing byte.')
    save(output/'report.json',report)
    save(output/'raw-mismatches.json',raw_mismatches)
    if inputs() != before_inputs:
        raise ValueError('056 frozen inputs changed during returning controls')
    save(output/'input-guard.json',dict(before=before_inputs,after=inputs(),unchanged=True))
    return report


if __name__ == '__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--output',type=Path,default=WORK/'controls')
    arguments=parser.parse_args()
    verify_controls(arguments.output.resolve())
