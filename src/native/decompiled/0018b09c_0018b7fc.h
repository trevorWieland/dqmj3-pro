#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00150c68(); extern undefined4 fn_0015f38c(); extern undefined4 fn_00170ffc(); extern undefined4 fn_001710c8(); extern undefined4 fn_001710d8(); extern undefined4 fn_001714f4();
extern int * fn_0017d948(); extern void fn_0018b588(); extern int fn_00193600(); extern uint fn_00193690(); extern undefined4 fn_0019371c(); extern bool fn_00193884();
extern uint fn_001938dc(); extern undefined4 fn_00193968(); extern undefined4 fn_00193fc0(); extern undefined4 fn_00195a70(); extern undefined4 fn_00195e44(); extern undefined4 fn_0019be88();
extern undefined4 fn_0019f23c(); extern undefined4 fn_00303afc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c357c; extern undefined4 DAT_008f272c; extern undefined4 DAT_008f2730; extern undefined4 DAT_008f2734;
extern undefined4 DAT_008f2738; extern undefined4 DAT_008f273c; extern undefined4 DAT_008f2740; extern undefined4 DAT_008f2744;
