#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern int fn_0011c134(); extern undefined4 fn_0015e294(); extern undefined4 fn_004e81f4(); extern uint fn_004e82d0(); extern uint fn_004e8624();
extern uint fn_004e88dc(); extern uint fn_004e8a60(); extern uint fn_004e8ba8(); extern uint fn_004e8d90(); extern uint fn_004e8de4(); extern uint fn_004e98d8();
extern undefined4 fn_004ea0d0(); extern undefined4 fn_004ea16c(); extern undefined4 fn_004ec0f0(); extern undefined4 fn_004ec16c(); extern undefined4 fn_004ed050(); extern undefined4 fn_004ed098();
extern undefined4 fn_004ed13c(); extern undefined4 fn_004ed158(); extern undefined4 fn_004ed164(); extern undefined4 fn_004ed2e8(); extern undefined4 fn_004edc34(); extern undefined4 fn_004edc70();
extern undefined4 fn_004edd1c(); extern undefined4 * fn_004eddf4(); extern undefined4 fn_004f01f4(); extern undefined4 * fn_004f0ce8(); extern undefined4 fn_00656e14(); extern bool fn_006d589c();
extern undefined4 fn_006d5cf0(); extern undefined4 fn_006d5d14(); extern undefined4 fn_006d6c60(); extern bool fn_006d6cb8();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00124db8(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00856874; extern undefined4 DAT_00856a40; extern undefined4 DAT_00856a60; extern undefined4 DAT_008bf504;
