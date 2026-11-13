#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern int fn_00177c88(); extern undefined4 fn_00178f9c(); extern undefined4 fn_0017a18c();
extern undefined4 fn_0017a1d4(); extern undefined4 fn_001854ac(); extern undefined4 fn_00190d50(); extern undefined4 fn_0022f584(); extern undefined4 fn_00290c1c(); extern int fn_002913e0();
extern undefined4 fn_00291664(); extern undefined4 fn_00291670(); extern undefined4 fn_002e6cc8(); extern undefined4 fn_002e6dac(); extern undefined4 fn_002e6e84(); extern undefined4 * fn_002e7a60();
extern int fn_002febd8(); extern undefined4 fn_002fec40(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern uint fn_003035b0(); extern undefined4 fn_0031c810();
extern undefined4 fn_003ba13c(); extern undefined4 fn_003ba178(); extern undefined4 fn_003ba190(); extern undefined4 fn_003ba200(); extern int fn_006b8954(); extern bool fn_006b8970();
extern int * fn_007854f8();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_002e7a2c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_002e7a18; extern undefined4 DAT_00893ef0; extern undefined4 DAT_008c7611; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cf4;
