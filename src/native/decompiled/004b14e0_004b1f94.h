#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern undefined4 * fn_00124930(); extern undefined4 fn_001249d0(); extern undefined4 * fn_0013d3e8(); extern undefined4 fn_0014f1bc();
extern undefined4 * fn_0015ece0(); extern undefined4 fn_0015ef4c(); extern undefined4 * fn_00170f54(); extern undefined4 fn_0046e0a4(); extern undefined4 fn_0047a2e4(); extern undefined4 * fn_0047a4a4();
extern undefined4 * fn_0047e0b0(); extern undefined4 fn_0048c758(); extern undefined4 fn_0048ca64(); extern undefined4 fn_0048cbf8(); extern undefined4 fn_00493134(); extern undefined4 fn_004a1fa4();
extern undefined4 fn_004a2158(); extern void fn_004b1b4c(); extern undefined4 * fn_004b5170(); extern int * fn_004b51c4(); extern undefined4 * fn_004b73b0(); extern undefined4 fn_004b7520();
extern undefined4 fn_004ba7ac(); extern undefined4 fn_004ba7c4(); extern bool fn_004bab34(); extern bool fn_006d3ef4(); extern undefined4 fn_0076e8fc(); extern undefined4 fn_00786da0();
extern undefined4 fn_00786e84();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0047e188(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0085355c; extern undefined4 DAT_00853740; extern undefined4 DAT_008556e8; extern undefined4 DAT_008e6818;
