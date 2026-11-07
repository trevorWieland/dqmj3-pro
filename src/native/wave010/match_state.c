#include "match_state.h"

void fn_004becdc(MatchCursor *cursor, unsigned int flags)
{
    MatchState *state = cursor->state;
restart:
    {
        MatchLink *end = &state->data.transitions;
        for (MatchLink *link = end->next; link != end; link = link->next) {
            MatchEdge *edge = (MatchEdge *)link;
            if (edge->label.kind == 4 && (unsigned char)edge->label.value.control_bit < 32 &&
                (flags & (1u << (unsigned char)edge->label.value.control_bit)) != 0) {
                state = edge->label.destination;
                cursor->state = state;
                goto restart;
            }
        }
    }
}
static int input_space(unsigned short character)
{
    return (character >= 9 && character <= 13) || character == 32 || character == 0x85 ||
           character == 0x2028 || character == 0x2029 || character == 0x3000;
}
static int line_break(unsigned short character)
{
    return character == 10 || character == 13 || character == 0x85 || character == 0x2028 || character == 0x2029;
}
int fn_004bed30(MatchCursor *cursor, const MatchContext *context, const unsigned short *text)
{
    int previous_space = 1;
    cursor->state = context->initial;
    fn_004becdc(cursor, 0x11);
    while (*text != 0) {
        int remaining = -1;
        if (line_break(*text)) {
            remaining = *text == 13 && text[1] == 10 ? 2 : 1;
            fn_004becdc(cursor, 2);
        }
        do {
            int space = input_space(*text);
            fn_004becdc(cursor, space == previous_space ? 8 : 4);
            MatchLink *end = &cursor->state->data.transitions;
            MatchLink *link = end->next;
            for (; link != end; link = link->next) {
                MatchEdge *edge = (MatchEdge *)link;
                if (fn_00780578(&edge->label, *text)) {
                    cursor->state = edge->label.destination;
                    break;
                }
            }
            if (link == end)
                return 0;
            if (remaining != -1) {
                --remaining;
                if (remaining == 0)
                    fn_004becdc(cursor, 1);
            }
            previous_space = space;
            ++text;
        } while (*text != 0 && remaining > 0);
    }
    fn_004becdc(cursor, 0x62 | (previous_space ? 8 : 4));
    return cursor->state->data.result;
}
