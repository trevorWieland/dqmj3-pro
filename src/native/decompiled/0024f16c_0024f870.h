#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern bool fn_0014ccb4(); extern undefined8 fn_0017821c(); extern undefined1 fn_0020cc00(); extern undefined4 fn_0020de2c();
extern undefined4 fn_0024e96c(); extern int fn_002500b8(); extern undefined4 fn_0025be84(); extern undefined4 fn_0028aa48(); extern undefined4 fn_0028ad34(); extern undefined4 fn_00660c64();
extern undefined4 fn_00660ccc(); extern int fn_00661248(); extern int fn_0066133c(); extern int fn_006613ec(); extern int fn_006614d0(); extern undefined4 fn_0066158c();
extern int fn_006616f4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0088fcd8; extern undefined4 DAT_0088fcdc; extern undefined4 DAT_00897804;
