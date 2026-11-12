#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_0014f590(); extern undefined4 fn_004ecfd0(); extern undefined4 fn_004ed2e8(); extern undefined4 fn_004ed714(); extern undefined4 fn_004ed7b8();
extern undefined4 fn_004f01f4(); extern undefined4 fn_0050a26c(); extern undefined4 fn_0050b66c(); extern undefined4 fn_0050eee8(); extern undefined4 fn_0050faac(); extern undefined4 fn_00514c1c();
extern int fn_00514c74(); extern undefined4 fn_00516e0c(); extern int fn_00518698(); extern undefined4 fn_005191c0(); extern undefined4 fn_0051ba28(); extern undefined4 fn_0051c11c();
extern undefined1 * fn_0051ca8c(); extern uint fn_00656680(); extern uint fn_006566c4(); extern undefined4 fn_006568fc(); extern undefined4 fn_00656e14(); extern longlong fn_006d9ef0();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_005107ac(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00856c94; extern undefined4 DAT_0085716c; extern undefined4 DAT_008bf4cc; extern unsigned char *DAT_008bf4d0;
extern undefined4 DAT_008c0674; extern undefined4 DAT_008c06a0; extern unsigned char *DAT_008c06a8; extern undefined4 DAT_e0a14821;
