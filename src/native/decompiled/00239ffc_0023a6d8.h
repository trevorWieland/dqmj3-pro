#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern undefined4 fn_00145b00(); extern undefined4 fn_001781f0(); extern void fn_0023a264(); extern undefined4 * fn_0023a3b4();
extern undefined4 fn_002d7638(); extern undefined4 fn_002d7688(); extern undefined4 fn_002d7a04(); extern undefined4 fn_002feef8(); extern undefined4 fn_00303afc(); extern undefined4 fn_005f45d0();
extern undefined4 fn_005f46b4(); extern undefined4 * fn_005f4c7c(); extern int fn_006ed004(); extern undefined4 fn_006ed010(); extern undefined4 fn_0078b278(); extern int * fn_0078b8ac();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001ad770(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008c62fc; extern undefined4 DAT_008c6300; extern undefined4 DAT_008f9e2c;
extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34; extern undefined4 DAT_008f9e38; extern undefined4 DAT_008f9e3c;
extern undefined4 DAT_008f9e40; extern undefined4 DAT_008f9e44; extern undefined4 DAT_008f9e48; extern undefined4 DAT_008f9e4c;
extern undefined4 DAT_008f9e50; extern undefined4 DAT_008f9e54; extern undefined4 DAT_008f9e58; extern undefined4 DAT_008f9e5c;
extern undefined4 DAT_008f9e60; extern undefined4 DAT_008f9e64; extern undefined4 PTR_FUN_0081d144;
