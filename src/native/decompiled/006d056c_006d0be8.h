#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101054(); extern undefined4 fn_0010b444(); extern int fn_0011c134(); extern undefined4 fn_0014ea80(); extern undefined4 fn_0014f510(); extern int * fn_0015e6f0();
extern undefined4 * fn_00170f54(); extern int fn_0017d82c(); extern int fn_0017fe44(); extern uint fn_00190ef0(); extern undefined4 fn_00455124(); extern undefined4 fn_00455590();
extern undefined4 fn_0045c8f4(); extern undefined4 fn_004b4218(); extern undefined4 fn_004b983c(); extern undefined4 fn_006d0810();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_006d0ae0; extern undefined4 DAT_006d0bc4; extern undefined4 DAT_007d9c4c; extern undefined4 DAT_007d9e30;
extern undefined4 DAT_007d9e50; extern undefined4 DAT_00855a94;
