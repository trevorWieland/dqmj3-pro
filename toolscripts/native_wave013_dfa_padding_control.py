import ctypes

from native_wave013_common import ROOT,record
import native_wave013_dfa_build as build_tools
import native_wave013_dfa_runtime as runtime
import native_wave013_dfa_native as native
import native_wave013_nfa_data as services


def prove(build,original,data,receipts):
    build.mkdir(parents=True,exist_ok=True)
    source=ROOT/'src/native/wave013/dfa_api.c'
    text=source.read_text()
    helper='''static __attribute__((noinline)) void read_unused_member_padding(CompileContext *context)
{
    MatchState *state = (MatchState *)context->compiled_states.previous;
    if ((IntrusiveLink *)state != &context->compiled_states && state->data.members != (void *)0 &&
        state->data.member_count == 4)
        (void)*(const volatile unsigned char *)(state->data.members + state->data.member_count);
}

'''
    before='return fn_004c2a00(context, arena, &builder->states.head, &builder->accept);'
    after='int result = fn_004c2a00(context, arena, &builder->states.head, &builder->accept);\n    read_unused_member_padding(context);\n    return result;'
    if text.count(before)!=1:
        raise ValueError('Padding-read control no longer targets actual source')
    text=text.replace('#include "dfa_compile.h"\n\n','#include "dfa_compile.h"\n\n'+helper).replace(before,after)
    changed=build/'dfa_api.c'
    changed.write_text(text)
    overrides={'dfa_api.c':changed}
    graph=build_tools.arm(build/'arm',receipts,overrides)
    specification={'pattern':'\\p{ASCII}|[a-f]','candidate':'A','free_slots':44}
    reference=runtime.execute(original,specification,data,seed=762,thumb=True,flags=15)
    actual=runtime.execute(graph,specification,data,source=True,seed=762,thumb=True,flags=15)
    final=runtime.compare_state_only(actual,reference)
    if not actual['lifetime']['readBeforeReinitialization']:
        raise ValueError('Returning padding read did not trigger the lifetime observer')
    try:
        runtime.compare(actual,reference)
    except RuntimeError as failure:
        reason=str(failure)
    else:
        raise ValueError('Returning same-final-state padding read escaped observer')
    library=ctypes.CDLL(str(build_tools.windows(build/'windows',receipts,overrides)))
    binding=services.bind_windows(library,data)
    windows=native.execute(library,binding,specification,reference,seed=762)
    return {'name':'retired-pointer-padding-read','source':record(changed),'specification':specification,
            'returnedNormally':True,'sameDefinedFinalState':final,'nativeSameDefinedFinalState':windows,
            'observerRejected':reason,'lifetime':actual['lifetime'],'grantsFunctionalAcceptance':False}
