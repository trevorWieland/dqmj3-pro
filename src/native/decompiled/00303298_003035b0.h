#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_002fec38(); extern undefined4 fn_002feca8(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff020(); extern undefined4 fn_002ff628(); extern undefined4 fn_002ff770();
extern undefined4 fn_00303234(); extern void fn_00303478(); extern int * fn_003034c0(); extern undefined4 fn_003034e4(); extern int * fn_00303564(); extern undefined4 fn_00303afc();
extern undefined4 fn_00303b10();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00104344_1(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00303470; extern undefined4 DAT_008c3da4; extern undefined4 DAT_008c3da8; extern undefined4 DAT_008c3dac;
extern undefined4 DAT_008c3db0; extern undefined4 DAT_008c3db4; extern undefined4 DAT_008c75f6; extern undefined4 DAT_008c7678;
extern undefined4 DAT_008c767c; extern undefined4 DAT_008c7680;
