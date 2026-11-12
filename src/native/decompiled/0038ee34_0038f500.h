#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00144834(); extern undefined4 fn_00145b00(); extern undefined4 fn_00154ac8(); extern undefined4 fn_001638a0(); extern undefined4 fn_0017fd38(); extern undefined4 fn_0017fde4();
extern undefined4 fn_001db0c0(); extern undefined4 fn_001db8a4(); extern undefined4 * fn_001dc088(); extern undefined4 fn_0020bbc4(); extern undefined4 fn_00210f78(); extern undefined4 fn_002113c8();
extern undefined4 fn_00211a98(); extern undefined4 fn_0022f584(); extern int * fn_0028aad0(); extern undefined4 fn_002caccc(); extern undefined4 fn_002cb3c0(); extern undefined4 * fn_002cb3ec();
extern undefined4 fn_002cb420(); extern undefined4 fn_002cbcb8(); extern undefined4 fn_002feef8(); extern undefined4 fn_0036c5f4(); extern undefined4 fn_0039452c(); extern undefined4 fn_00394550();
extern undefined4 fn_005ea63c(); extern undefined4 fn_005eeda8(); extern undefined4 fn_005ef0b8(); extern undefined4 * fn_0065fdf0(); extern undefined4 fn_00689bd0(); extern undefined4 fn_006b5ce8();
extern bool fn_006b7b34(); extern int fn_006bf240(); extern int fn_006bfda8(); extern undefined4 fn_006bfdec(); extern undefined4 fn_006bfe90(); extern int fn_006e6814();
extern int fn_006e6820(); extern undefined4 fn_006f72e0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0082ae04; extern undefined4 DAT_00891ca8; extern undefined4 DAT_00891cb8;
extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804; extern undefined4 PTR_FUN_0082ada8;
