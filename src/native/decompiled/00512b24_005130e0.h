#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined8 fn_001694e4(); extern undefined4 fn_004ecfe0(); extern int fn_00509460(); extern int fn_00509470(); extern int fn_00513e2c();
extern undefined4 fn_00656b0c(); extern undefined4 fn_00656b7c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00513fc4(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf4d4; extern undefined4 DAT_008c0630; extern undefined4 DAT_008c06a8; extern undefined4 DAT_008ed95c;
extern undefined4 DAT_d8a1482e; extern undefined4 DAT_e0a14821; extern undefined4 DAT_e0a14827; extern undefined4 DAT_e0a1482b;
