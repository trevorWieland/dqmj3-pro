#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern int * fn_001588d4(); extern undefined4 * fn_00168a24(); extern undefined4 fn_002bf4f4(); extern undefined4 fn_002c2070(); extern undefined4 fn_002c263c();
extern undefined4 fn_002e84d4(); extern undefined4 fn_002e8628(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined4 fn_00380308(); extern undefined4 fn_00380424();
extern undefined4 fn_0042fdf8(); extern undefined4 fn_0042fea4(); extern undefined4 fn_00430f14(); extern undefined4 fn_0043100c(); extern undefined4 fn_0043213c(); extern undefined4 fn_0043243c();
extern undefined4 fn_00432620(); extern undefined4 fn_00432fdc(); extern undefined4 fn_00433620(); extern bool fn_00433f60(); extern bool fn_004341e8(); extern undefined4 fn_006899f4();
extern undefined4 fn_0068ab44();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c7611; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
