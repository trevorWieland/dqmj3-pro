#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_00145ac0(); extern undefined8 fn_0017821c(); extern undefined4 fn_0022f584(); extern undefined8 fn_00301a9c(); extern undefined4 fn_00453ab4();
extern undefined4 fn_00527488(); extern undefined4 fn_005df2e8(); extern undefined4 fn_005df3dc(); extern undefined4 fn_005df474(); extern undefined4 fn_005df490(); extern undefined4 fn_005df4ec();
extern undefined4 fn_005df508(); extern undefined4 fn_005df594(); extern undefined4 fn_005df5ec(); extern undefined4 fn_006f5d18();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00001500; extern undefined4 DAT_00662acc; extern undefined4 DAT_007c8a42; extern undefined4 DAT_008ccfb8;
extern undefined4 DAT_008ccfbc; extern code *DAT_008ccfc0; extern undefined4 UNK_007c8a3e; extern undefined4 UNK_007c8a46;
extern undefined4 UNK_007c8a4a;
