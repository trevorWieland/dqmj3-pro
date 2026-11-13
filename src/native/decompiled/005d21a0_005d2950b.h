#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern int fn_00172c98(); extern undefined4 fn_00394abc(); extern undefined4 fn_00394adc(); extern undefined4 fn_003956e0(); extern undefined4 fn_00580c14();
extern undefined4 fn_00580cdc(); extern undefined4 fn_00580ce0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005d2708; extern undefined4 DAT_005d2724; extern undefined4 DAT_007c67c4; extern undefined4 DAT_007c67c6;
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0084c48c;
