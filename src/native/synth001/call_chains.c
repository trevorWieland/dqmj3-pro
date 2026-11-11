/*
 * A call followed by a tail call.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below calls one split function and then tail-calls a second,
 *  with no other work between them. Both callees are named by the addresses
 *  the original call and branch instructions target.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

/* This unit calls these split functions; each resolves to the address
 * its original call instruction targets:
 * fn_0010c3ec, fn_001dc088, fn_001eb3f0, fn_0020a848, fn_0022f750, fn_002ea9c8, fn_002f1c5c, fn_002feef8, fn_0030bf28, fn_00339ae4, fn_003b8284, fn_00455018, fn_0048d5d0, fn_0049339c, fn_004a2158, fn_004aaf4c, fn_004b9f08, fn_005aa084, fn_005e6a40, fn_005e96b4, fn_005f3a1c, fn_00682b74, fn_006c4288, fn_006c4304, fn_006c4410, fn_006c4568, fn_006c4628
 */

void fn_001eb3e0(void) { fn_001eb3f0(); fn_002feef8(); }

void fn_00203874(void) { fn_005f3a1c(); fn_002feef8(); }

void fn_0020a838(void) { fn_0020a848(); fn_002feef8(); }

void fn_00228bec(void) { fn_00682b74(); fn_002feef8(); }

void fn_00267f94(void) { fn_005e6a40(); fn_002feef8(); }

void fn_002d7ac8(void) { fn_006c4288(); fn_0022f750(); }

void fn_002d7ad8(void) { fn_006c4304(); fn_0022f750(); }

void fn_002d7ae8(void) { fn_006c4628(); fn_0022f750(); }

void fn_002d7b30(void) { fn_006c4410(); fn_0022f750(); }

void fn_002d7b40(void) { fn_006c4568(); fn_0022f750(); }

void fn_002ea9b8(void) { fn_002ea9c8(); fn_002feef8(); }

void fn_002f1d48(void) { fn_002f1c5c(); fn_002feef8(); }

void fn_002f2584(void) { fn_002f1c5c(); fn_002feef8(); }

void fn_002f2d7c(void) { fn_002f1c5c(); fn_002feef8(); }

void fn_002f3064(void) { fn_002f1c5c(); fn_002feef8(); }

void fn_002f38c0(void) { fn_002f1c5c(); fn_002feef8(); }

void fn_0030bf18(void) { fn_0030bf28(); fn_002feef8(); }

void fn_0038e2b4(void) { fn_00339ae4(); fn_002feef8(); }

void fn_003b8274(void) { fn_003b8284(); fn_002feef8(); }

void fn_003d7ba8(void) { fn_001dc088(); fn_002feef8(); }

void fn_0048d5c0(void) { fn_0048d5d0(); fn_00455018(); }

void fn_0049338c(void) { fn_0049339c(); fn_00455018(); }

void fn_004a2148(void) { fn_004a2158(); fn_00455018(); }

void fn_004aaf3c(void) { fn_004aaf4c(); fn_00455018(); }

void fn_004b9ef8(void) { fn_004b9f08(); fn_00455018(); }

void fn_00551350(void) { fn_0010c3ec(); fn_002feef8(); }

void fn_005a9ce0(void) { fn_005aa084(); fn_002feef8(); }

void fn_005aa074(void) { fn_005aa084(); fn_002feef8(); }

void fn_005e2c34(void) { fn_005e96b4(); fn_002feef8(); }
