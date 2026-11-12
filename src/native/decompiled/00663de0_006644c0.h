#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 * fn_001142a8(); extern undefined4 * fn_00118290(); extern undefined4 fn_00145ac0(); extern undefined4 fn_00145b00(); extern undefined4 fn_00146594();
extern undefined8 fn_0017821c(); extern undefined4 fn_0022f584(); extern undefined8 fn_00301a9c(); extern undefined1 * fn_00451c18(); extern undefined4 fn_00527488(); extern undefined4 fn_005df130();
extern undefined4 fn_005df620(); extern int fn_005df764(); extern undefined4 fn_00664500(); extern bool fn_006cfe7c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00662aa4; extern undefined4 DAT_007c8a42; extern undefined4 DAT_007c8a58; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_008ccfb8; extern undefined4 DAT_008ccfbc; extern code *DAT_008ccfc0; extern undefined4 UNK_007c8a3e;
extern undefined4 UNK_007c8a46; extern undefined4 UNK_007c8a4a;
