#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_001603f8(); extern undefined4 fn_00163988(); extern undefined4 fn_00174828(); extern undefined4 fn_00182988(); extern undefined4 fn_001a4a3c();
extern undefined4 fn_001c2374(); extern undefined4 fn_001d4cc0(); extern int fn_001d4e7c(); extern undefined4 fn_002a19f8(); extern undefined4 fn_002a1ad0(); extern undefined4 fn_002a1af4();
extern undefined4 fn_002a1b0c(); extern undefined4 fn_002a1b80(); extern undefined4 fn_002a1bbc(); extern undefined4 fn_002d3f68(); extern undefined4 fn_002d4480(); extern undefined4 fn_002d46cc();
extern undefined4 fn_002d4a9c(); extern undefined4 fn_003398b0(); extern undefined4 fn_003398e4(); extern undefined4 fn_00339980(); extern undefined4 fn_003399ac(); extern undefined4 fn_003399e0();
extern undefined4 fn_003399fc(); extern undefined4 fn_00376bec(); extern undefined4 fn_003a58c8(); extern undefined4 fn_003a7cf0(); extern undefined1 fn_0066e158(); extern undefined4 fn_0066e5b4();
extern undefined4 fn_006a7b78(); extern undefined4 fn_006b8a50(); extern int fn_006b8a60(); extern int fn_006b8a70(); extern int fn_006b8a80(); extern int fn_006b8a90();
extern int fn_006b8aa0(); extern undefined4 fn_006c0f40(); extern undefined4 fn_006c1108(); extern undefined4 fn_006c13f8(); extern undefined4 fn_0077f4ac(); extern undefined4 fn_0077f550();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001d4e64(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4; extern undefined4 DAT_00897808; extern undefined4 DAT_0089780c; extern undefined4 DAT_00897840;
extern undefined4 DAT_00898840;
