#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern undefined4 fn_001249d0(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0015ef4c(); extern undefined4 fn_00455e10();
extern undefined4 fn_0046e0a4(); extern undefined4 fn_0048ca64(); extern undefined4 fn_0048cbf8(); extern undefined4 fn_004a83d8(); extern undefined4 * fn_004b4d30(); extern undefined4 fn_004b4d84();
extern undefined4 * fn_004b73b0(); extern undefined4 fn_004b7520(); extern undefined4 fn_004ba7d4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000020; extern undefined4 DAT_007dba44; extern undefined4 DAT_008533d0; extern unsigned char *DAT_008bf4f4;
extern unsigned char *DAT_008c3dcc; extern unsigned char *DAT_008c3dd0; extern undefined4 DAT_008e955c;
