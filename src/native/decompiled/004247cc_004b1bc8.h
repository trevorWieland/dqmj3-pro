#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern undefined4 fn_00128744(); extern undefined4 fn_0013d0fc(); extern undefined4 fn_00163988(); extern undefined4 fn_0016b40c();
extern int fn_0016ba34(); extern undefined4 fn_001d68cc(); extern undefined4 fn_001d6988(); extern undefined4 fn_001d7084(); extern undefined4 fn_001d8140(); extern undefined4 fn_001d91ec();
extern undefined4 fn_001d92ac(); extern undefined4 fn_001dd0a0(); extern undefined4 fn_001def30(); extern undefined4 fn_001e5dc0(); extern undefined4 fn_001ea890(); extern int fn_0023b858();
extern undefined4 fn_002fb664(); extern undefined4 fn_002fb670(); extern undefined4 fn_00300398(); extern undefined4 fn_0038fee8(); extern undefined4 fn_0038ff40(); extern undefined4 fn_004834e8();
extern undefined4 fn_004843e4(); extern undefined4 fn_0048cbf8(); extern undefined4 fn_004b7748(); extern undefined4 fn_00697004(); extern undefined4 fn_00698fb8(); extern undefined4 fn_006aaa00();
extern undefined4 fn_006c83f0(); extern undefined4 fn_006c85d4(); extern undefined4 fn_006f7388(); extern undefined4 fn_006f7508(); extern undefined4 fn_006f75ac(); extern undefined4 fn_006f7a48();
extern undefined4 fn_006f7a5c(); extern undefined4 fn_006f7a70(); extern undefined4 fn_006f7a84(); extern undefined4 fn_0074a4c8(); extern undefined4 fn_0074a528(); extern int fn_0074cd38();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001ad990(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004845d4(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004242e8; extern undefined4 DAT_004242f8; extern undefined4 DAT_007bec58; extern undefined4 DAT_008977e0;
extern undefined4 DAT_00897800; extern undefined4 DAT_00897810; extern unsigned char *DAT_008b6404; extern unsigned char *DAT_008c3dcc;
extern unsigned char *DAT_008c3dd0;
