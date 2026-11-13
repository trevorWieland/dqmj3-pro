#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_001010c8(); extern int fn_00101a1c(); extern undefined4 fn_004ecfd0(); extern undefined4 fn_004ecfe0(); extern int fn_004ed5a0();
extern int fn_004ed5b0(); extern undefined4 fn_004ef2b0(); extern undefined4 fn_004efd64(); extern undefined4 fn_004effa4(); extern undefined4 fn_004f0010(); extern undefined4 fn_004f0104();
extern undefined4 fn_004f01e8(); extern undefined4 fn_00656aec(); extern int fn_006f4e34();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004ee76c(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004ee790(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004ed728; extern undefined4 DAT_00856cd4; extern undefined4 DAT_00856ce8; extern undefined4 DAT_008c0634;
extern undefined4 DAT_008c0638; extern undefined4 DAT_d8a1482e; extern undefined4 DAT_e0a14827; extern undefined4 DAT_e0a1482b;
