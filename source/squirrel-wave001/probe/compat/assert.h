#ifndef SQ_PROBE_ASSERT_H
#define SQ_PROBE_ASSERT_H
#include <stdlib.h>
#ifdef NDEBUG
#define assert(x) ((void)0)
#else
#define assert(x) ((x)?(void)0:abort())
#endif
#endif
