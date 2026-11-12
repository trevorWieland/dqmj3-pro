#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern undefined4 * fn_00168a24(); extern int fn_0016ba34(); extern int fn_00177c88(); extern undefined4 fn_00190d50();
extern undefined4 fn_001f7510(); extern undefined4 fn_0022f584(); extern undefined4 fn_0022f750(); extern bool fn_002e8098(); extern undefined4 fn_00321118(); extern undefined4 fn_003947d8();
extern undefined4 fn_00394a9c(); extern undefined4 * fn_00394af0(); extern undefined4 fn_003f71d0(); extern undefined4 fn_0043cd80(); extern undefined4 fn_0066e4a4(); extern undefined4 fn_0066eb80();
extern undefined4 fn_006732a0(); extern undefined4 fn_00675a7c(); extern undefined4 fn_00689bd0(); extern undefined4 fn_00689c1c(); extern undefined4 fn_0068ab44(); extern bool fn_00748844();
extern undefined4 fn_00748898(); extern undefined4 fn_0074908c(); extern int fn_0077f9bc(); extern undefined4 fn_00799de8();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0057ff88(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00580084; extern undefined4 DAT_005800e8; extern undefined4 DAT_005800ec; extern undefined4 DAT_005801bc;
extern undefined4 DAT_005802b4; extern undefined4 DAT_00842428; extern undefined4 DAT_008937e0; extern undefined4 DAT_008942dc;
extern undefined4 DAT_008963ac; extern undefined4 DAT_008964f4; extern undefined4 DAT_00897800; extern undefined4 DAT_00897850;
extern undefined4 DAT_00898230; extern undefined4 DAT_00898840; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
extern undefined4 PTR_FUN_008422a0;
