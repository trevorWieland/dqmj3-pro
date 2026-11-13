#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00150c1c(); extern undefined4 * fn_00152680(); extern undefined4 * fn_00152724(); extern undefined4 fn_001585d4(); extern undefined4 fn_001675c4();
extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern undefined4 fn_0017d8f8(); extern undefined4 fn_0017d90c(); extern undefined4 fn_0017dc74(); extern undefined4 fn_0017dfc4();
extern undefined4 fn_0017ed40(); extern int fn_0017f0ec(); extern undefined4 fn_0017f108(); extern undefined4 fn_0018b010(); extern undefined4 fn_00303afc();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0015882c(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0017dc64(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00857c64; extern undefined4 DAT_00857f98; extern undefined4 DAT_008c3584; extern undefined4 DAT_008c358c;
extern undefined4 DAT_008c3594; extern undefined4 DAT_008f2770; extern undefined4 DAT_008f2978;
