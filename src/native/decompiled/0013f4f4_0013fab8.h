#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_0013c500(); extern undefined4 fn_0013fd24(); extern undefined4 fn_00150bb4(); extern undefined4 fn_00150be0(); extern undefined4 fn_00150c1c();
extern undefined4 fn_00151170(); extern undefined4 fn_0015158c(); extern undefined4 fn_001517f0(); extern undefined4 fn_00151944(); extern undefined4 fn_00156618(); extern undefined4 fn_0016048c();
extern undefined4 fn_0017d90c(); extern int * fn_0017d948(); extern int fn_002febd8(); extern undefined4 fn_00303afc();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00158814(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00857b38; extern undefined4 DAT_008c0600; extern undefined4 DAT_008c0605; extern undefined4 DAT_008ed148;
extern undefined4 DAT_008ed14c;
