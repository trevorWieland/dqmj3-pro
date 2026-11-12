#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 fn_0015e294(); extern undefined4 fn_00160094(); extern undefined4 fn_001600c4(); extern undefined4 fn_00160190(); extern uint * fn_001782b8();
extern undefined4 fn_00456ab4(); extern undefined4 fn_00456dd4(); extern void fn_00456f50(); extern void fn_004570c0(); extern void fn_0045724c(); extern undefined4 fn_004574b8();
extern undefined4 fn_00479c98(); extern undefined4 fn_0048a058(); extern undefined4 fn_0049599c(); extern undefined4 fn_004b2e68(); extern undefined4 fn_004b2f04(); extern undefined4 fn_004b4218();
extern undefined4 fn_004b7748(); extern undefined4 fn_004b8d4c(); extern undefined4 fn_004b9e68(); extern undefined4 fn_0052cec0(); extern undefined4 fn_0052d088(); extern undefined4 fn_0052d0fc();
extern undefined4 fn_0052d1c8();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004577f8(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004570ac; extern undefined4 DAT_00457234; extern undefined4 DAT_004574b4; extern undefined4 DAT_007dba44;
extern undefined4 DAT_00853500; extern undefined4 DAT_0085748c;
