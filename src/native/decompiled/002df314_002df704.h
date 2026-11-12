#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001c6c38(); extern undefined4 fn_002782b4(); extern bool fn_00279b34(); extern undefined4 fn_003919b8(); extern undefined4 * fn_003d9b6c();
extern undefined4 fn_003f2f54(); extern undefined4 * fn_003f4e40(); extern undefined4 fn_0057bed8(); extern undefined4 fn_0059c438(); extern bool fn_006a7f8c(); extern int fn_006f7a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0082b158; extern undefined4 DAT_0083b498; extern undefined4 DAT_00841c3c;
extern undefined4 DAT_00841c60; extern undefined4 DAT_00843824; extern undefined4 DAT_00845d1c; extern undefined4 DAT_00845d48;
extern undefined4 DAT_008977e0;
