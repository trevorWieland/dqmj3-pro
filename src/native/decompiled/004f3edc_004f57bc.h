#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00124e48(); extern undefined4 fn_004ed050(); extern undefined4 fn_004ed0e4(); extern undefined4 fn_004ed2e8(); extern int fn_004eea84(); extern undefined4 fn_004efcf4();
extern undefined4 fn_004f01f4(); extern undefined4 * fn_004f0ce8(); extern undefined4 fn_004f15b4(); extern uint fn_004f3c30(); extern undefined4 fn_004feb10(); extern undefined4 fn_00502890();
extern undefined4 fn_00505a04(); extern undefined4 fn_00505a0c(); extern undefined1 * fn_0050a490(); extern int fn_0050b080(); extern undefined4 fn_00515598(); extern undefined1 * fn_00517050();
extern undefined1 * fn_00517cf0(); extern undefined4 fn_00517f28(); extern int fn_0051811c(); extern undefined4 fn_00656b0c(); extern undefined4 fn_00656b7c(); extern undefined4 fn_00656e14();
extern undefined4 fn_00656e58(); extern longlong fn_006d6e58(); extern undefined4 fn_006d88c8(); extern undefined4 fn_006d92e4(); extern bool fn_006db038(); extern int fn_006db058();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004f3b6c(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004f3dd0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004f41f8; extern undefined4 DAT_007ec2e8; extern undefined4 DAT_007ec2f8; extern undefined4 DAT_008bf4a0;
extern undefined4 DAT_008bf4cc; extern undefined4 DAT_008bf4d4; extern undefined4 DAT_008bf4e0;
