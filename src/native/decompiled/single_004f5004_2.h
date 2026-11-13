#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00124e48(); extern undefined4 * fn_00158f6c(); extern undefined8 fn_00169f1c(); extern undefined4 fn_004ed514(); extern int fn_004eea84(); extern undefined4 * fn_004f0ce8();
extern undefined4 fn_004f15b4(); extern undefined1 * fn_00517cf0(); extern int fn_0051811c(); extern undefined4 fn_006d92e4(); extern bool fn_006db038(); extern int fn_006db058();
extern int fn_006db080(); extern undefined4 fn_006db908();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern unsigned char *DAT_008bf4a0; extern unsigned char *DAT_008bf4cc; extern unsigned char *DAT_008bf4d4; extern unsigned char *DAT_008bf4e0;
extern unsigned char *DAT_008c06a0;
