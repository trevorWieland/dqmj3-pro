#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_0013cd7c(); extern int fn_0013ce04(); extern undefined4 * fn_0013ce98(); extern undefined1 * fn_0013d29c(); extern undefined4 * fn_0013d3e8();
extern undefined4 fn_00144298(); extern undefined4 fn_001443a0(); extern undefined4 fn_00145b00(); extern int * fn_00146994(); extern undefined4 fn_00147b74(); extern undefined4 fn_00147be0();
extern undefined4 fn_0014f1bc(); extern bool fn_001541ec(); extern undefined4 fn_0015427c(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_001638a0(); extern undefined4 * fn_00170f54();
extern undefined4 fn_0019d650(); extern undefined4 fn_002feca8(); extern undefined4 fn_002feef8(); extern undefined4 * fn_00301f50();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001446b8(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00143b44; extern undefined4 DAT_00144260; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008533d0;
extern undefined4 DAT_00859450; extern undefined4 DAT_00893198; extern undefined4 DAT_00896d60; extern undefined4 DAT_00898840;
extern undefined4 DAT_0089884c; extern undefined4 DAT_00898850; extern undefined4 DAT_008b63b4; extern undefined4 DAT_008b63b8;
extern undefined4 DAT_008cff54;
