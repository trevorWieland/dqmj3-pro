#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern int fn_0020ae1c(); extern int fn_0020afdc(); extern int fn_002d6c68(); extern int fn_002d6c94(); extern undefined4 fn_002d6cb0();
extern bool fn_002d6e98(); extern bool fn_002d6fb0(); extern bool fn_002d7124(); extern undefined4 fn_002d7624(); extern undefined4 fn_003147d4(); extern bool fn_006baa60();
extern int fn_006c61c4(); extern undefined4 fn_006c6a38();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_002d7300(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 UNK_007c3468; extern undefined4 UNK_007c347c;
