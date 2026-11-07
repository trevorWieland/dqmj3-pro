#ifndef DQMJ3_SQUIRREL_CLASS_INTERNAL030_H
#define DQMJ3_SQUIRREL_CLASS_INTERNAL030_H

#include "class_call.h"
#include "../squirrel-wave011/prototype_internal.h"
#include "../squirrel-wave019/table_internal.h"

void sq_class_add_chain030(SqPrefixState012 *shared,SqPrefixCollectable012 *node);
void sq_class_remove_chain030(SqPrefixState012 *shared,SqPrefixCollectable012 *node);
void sq_class_reset_weak030(SqPrototypePrefix011 *prefix);
void sq_class_release_member030(const SqLookupMember020 *member);
void sq_class_resize_values030(SqPrefixVector012 *vector,SqPrototypeU32 requested);

#endif
