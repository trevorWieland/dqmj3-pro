#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined4 fn_00102d78(); extern uint fn_00147e6c(); extern undefined4 fn_00154ac8();
extern undefined4 fn_00176ec8(); extern undefined8 fn_0017821c(); extern undefined4 fn_00183718(); extern undefined4 fn_00231d50(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628();
extern undefined8 fn_00301a9c(); extern undefined4 fn_00305a6c(); extern undefined1 * fn_00337790(); extern undefined4 fn_00337d5c(); extern undefined4 fn_0033d924(); extern undefined4 fn_0033e4e8();
extern undefined4 fn_0033e6c8(); extern undefined4 fn_0033f858(); extern undefined4 fn_00340d24(); extern undefined4 * fn_0034194c(); extern undefined4 fn_0037ce70(); extern undefined4 fn_0037ce88();
extern undefined4 fn_0037cee4(); extern undefined4 fn_00525bd0(); extern bool fn_006113f4(); extern bool fn_0061140c(); extern undefined4 fn_00692eac(); extern int fn_006c17a4();
extern uint * fn_0078e228(); extern undefined4 fn_007a325c(); extern undefined4 fn_007a351c(); extern undefined4 fn_007aa4d4(); extern undefined4 fn_007aaaa4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0033c438(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00340134; extern undefined4 DAT_0034013c; extern undefined4 DAT_00824e38; extern undefined4 DAT_008920ac;
extern undefined4 DAT_008c7611; extern undefined4 DAT_008c9358; extern undefined4 DAT_008c9364; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cf4;
