#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern undefined4 fn_001249d0(); extern undefined4 * fn_0013d40c(); extern undefined4 fn_0014f1bc(); extern undefined4 * fn_0015ecdc();
extern undefined4 fn_0015ef4c(); extern undefined4 * fn_00170f54(); extern int fn_00170fa4(); extern undefined4 fn_00454da8(); extern undefined4 fn_00456044(); extern undefined4 fn_00456074();
extern undefined4 fn_00456400(); extern undefined4 fn_0045f6f0(); extern undefined4 fn_0045f7f0(); extern undefined4 fn_0046d70c(); extern undefined4 fn_0046e0a4(); extern undefined4 fn_00473638();
extern undefined4 fn_00479b1c(); extern undefined4 fn_0048a058(); extern undefined4 fn_0048ca64(); extern undefined4 fn_0048cbf8(); extern void fn_004ad7e8(); extern void fn_004ad84c();
extern undefined4 fn_004b2f04(); extern undefined4 fn_004b2f0c(); extern undefined4 * fn_004b73b0(); extern undefined4 fn_004b7520(); extern undefined4 * fn_004b8c5c(); extern int fn_004b8cb4();
extern undefined4 fn_004b8d6c(); extern undefined4 fn_004b8d90(); extern int * fn_004b93dc(); extern undefined4 fn_004ba7ac(); extern undefined4 fn_004ba7c4(); extern bool fn_004bab34();
extern int fn_006d3b8c(); extern bool fn_006d3ef4(); extern int * fn_00794084(); extern int * fn_0079448c(); extern int * fn_0079dd48();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004ae178(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004adac4; extern undefined4 DAT_004add48; extern undefined4 DAT_00853500; extern undefined4 DAT_00854bdc;
extern undefined4 DAT_00855624; extern undefined4 DAT_008e9354; extern undefined4 DAT_008e9360; extern undefined4 DAT_008e93b0;
