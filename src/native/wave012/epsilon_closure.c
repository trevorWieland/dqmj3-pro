#include "compile_graph.h"

void fn_004c1edc(CompileContext *context, unsigned char *members)
{
restart:
    for (unsigned int index = 0; index < context->source_count; ++index) {
        if (members[index] == 0)
            continue;
        NfaState *state = context->sources[index];
        for (IntrusiveLink *link = state->transitions.next; link != &state->transitions; link = link->next) {
            MatchEdge *edge = (MatchEdge *)link;
            if (edge->label.kind == INTERVAL_SET_EPSILON) {
                NfaState *destination = edge->label.destination;
                if (members[destination->identifier] == 0) {
                    members[destination->identifier] = 1;
                    goto restart;
                }
            }
        }
    }
}
