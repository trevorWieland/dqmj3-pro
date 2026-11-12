#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_004dbe24(); extern undefined4 fn_004e21dc(); extern undefined4 fn_004ecfd0(); extern uint fn_004ed4f8(); extern undefined4 fn_004edc34(); extern undefined4 fn_004edc70();
extern int fn_004ef7ac(); extern undefined4 fn_004efe44(); extern undefined4 fn_004f01f4(); extern undefined4 fn_004f0a20(); extern undefined4 fn_004f0a60(); extern undefined4 fn_004f0b78();
extern undefined4 * fn_004f0ce8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00856ae8; extern undefined4 DAT_00856d7c; extern unsigned char *DAT_008bf49c; extern undefined4 DAT_008bf504;
extern undefined4 DAT_008c0640; extern undefined4 DAT_008c0644;
