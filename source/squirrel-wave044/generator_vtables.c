#include "generator.h"

static void destroy(void *pointer){sq_generator_destroy044(pointer);}
static void release(void *pointer){sq_generator_release044(pointer);}

const SqPrototypeVTable011 sq_generator_vtable044={destroy,0,release};
