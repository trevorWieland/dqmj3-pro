#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00124e48(); extern undefined4 fn_004ecfd0(); extern undefined4 fn_004ed050(); extern undefined4 fn_004ed068(); extern undefined4 fn_004ed098(); extern undefined4 fn_004ed13c();
extern undefined4 fn_004ed158(); extern undefined4 fn_004ed164(); extern undefined4 fn_004ed2e8(); extern undefined4 * fn_004eddf4(); extern undefined4 fn_004ede4c(); extern undefined4 fn_004f01f4();
extern undefined4 fn_004f5854(); extern undefined4 fn_00505c70(); extern undefined4 fn_00505d54(); extern undefined1 * fn_0050697c(); extern int fn_0050b080(); extern int fn_00518140();
extern undefined4 fn_005196a0(); extern undefined4 fn_00656b0c(); extern undefined4 fn_00656b7c(); extern undefined4 fn_00656e14(); extern undefined4 fn_006d8a94(); extern undefined4 fn_006d8aec();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004f1970(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004f3cb4(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf4cc; extern undefined4 DAT_008bf4d4; extern undefined4 DAT_008bf4e0; extern undefined4 DAT_008c0690;
extern undefined4 DAT_008ed96c; extern undefined4 DAT_008edb18; extern undefined4 PTR_FUN_00856d88;
