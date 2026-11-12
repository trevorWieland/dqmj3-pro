#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0014481c(); extern undefined4 fn_0017fe34(); extern undefined4 fn_001fd428(); extern undefined4 fn_002ff628();
extern undefined4 fn_00303afc(); extern undefined4 fn_0052534c(); extern int fn_006b6bc4(); extern undefined4 fn_006b6d3c(); extern int fn_006b6e94(); extern undefined4 fn_006b71a8();
extern undefined4 fn_006ba7d4(); extern int fn_006f7de8(); extern bool fn_006f8074(); extern undefined4 fn_006f8418(); extern undefined4 fn_00797ee4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e8; extern undefined4 DAT_008c62ec; extern undefined4 DAT_008c62f0; extern undefined4 DAT_008c62f4;
extern undefined4 DAT_008c7647;
