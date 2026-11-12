#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_00162d44(); extern undefined4 fn_001793c4(); extern int fn_00182d34();
extern undefined4 fn_001969a4(); extern undefined4 fn_00237c74(); extern undefined4 fn_0023d448(); extern undefined4 fn_0023d9c8(); extern undefined4 fn_0023db0c(); extern undefined4 fn_0023df88();
extern undefined4 fn_002a406c(); extern undefined4 fn_002a449c(); extern int fn_002a47cc(); extern undefined4 * fn_002a4e24(); extern undefined4 * fn_002e9024(); extern int fn_0034e710();
extern undefined4 fn_0053ec84(); extern undefined4 fn_005f0a90(); extern bool fn_00692ec8();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0023d3fc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081d164; extern undefined4 DAT_0089781c;
