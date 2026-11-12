#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_004ed304(); extern undefined4 fn_00658a04(); extern undefined4 fn_00658bdc(); extern undefined4 fn_006590e4(); extern undefined4 fn_006591d0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c062c; extern undefined4 DAT_008c062d; extern undefined4 DAT_008c06e0; extern undefined4 DAT_008ed884;
extern undefined4 DAT_008ed8b8; extern undefined4 DAT_008ed8bc; extern undefined4 DAT_008ed8c0; extern undefined4 DAT_008eef3c;
extern unsigned char *DAT_008eef44;
