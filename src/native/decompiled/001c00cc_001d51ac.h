#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00110c80(); extern undefined4 fn_0011e284(); extern undefined4 fn_0012a25c(); extern undefined4 fn_00145b00(); extern uint fn_00147e6c(); extern undefined4 fn_00154ac8();
extern undefined4 * fn_00158f6c(); extern ulonglong fn_00169c20(); extern undefined8 fn_0017821c(); extern uint * fn_001782b8(); extern undefined4 fn_001c41d0(); extern undefined4 fn_001d0cdc();
extern undefined4 fn_001d3a94(); extern undefined4 fn_001d48e4(); extern undefined4 fn_0023e6c8(); extern int fn_0026a584(); extern undefined4 fn_00278a40(); extern undefined4 fn_00279ae4();
extern undefined4 fn_002feef8(); extern undefined4 * fn_00301f50(); extern undefined4 fn_0061a2d0(); extern undefined4 fn_006208d0(); extern int fn_006afe90(); extern undefined4 fn_006b7664();
extern int fn_006f7a9c(); extern undefined4 fn_0078eff8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007be328; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977e0; extern unsigned char *DAT_008977e4;
extern unsigned char *DAT_00897808; extern unsigned char *DAT_0089780c; extern undefined4 DAT_008c6cd3;
