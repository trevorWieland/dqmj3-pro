#ifndef SQ_PORTABLE_RECORD_STORAGE012_H
#define SQ_PORTABLE_RECORD_STORAGE012_H

#include "reference_prefix.h"
#include "../squirrel-wave009/class_release.h"

void sq_prefix_call_resize012(SqCallVector *vector, SqU32 requested, const SqCallInfo *fill);
void sq_prefix_member_resize012(SqClassMemberVector009 *vector, SqU32 requested, const SqClassMember009 *fill);

#endif
