#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_00147e54(); extern undefined4 * fn_00158f6c(); extern undefined8 fn_001694e4(); extern undefined4 fn_004ecfd0(); extern undefined4 fn_004ecfe0();
extern int fn_004ed5a0(); extern int fn_004ed5b0(); extern undefined4 fn_00733bac();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004f167c; extern undefined4 DAT_00856d14; extern undefined4 DAT_00856d20; extern unsigned char *DAT_008bf4a0;
extern undefined4 DAT_008c0334; extern unsigned char *DAT_008c0634; extern undefined4 DAT_d8a1482e; extern undefined4 DAT_e0a14827;
extern undefined4 DAT_e0a1482b;
