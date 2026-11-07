#include "table_internal.h"

static void destroy_table(void *object) { sq_table_destroy019(object); }
static void release_table(void *object) { sq_table_release019(object); }
const SqPrototypeVTable011 sq_table_vtable019 = {destroy_table, 0, release_table};
