#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern bool fn_001296d0(); extern bool fn_001296e8(); extern undefined4 fn_00145b00(); extern undefined4 fn_001603f8(); extern undefined4 fn_00163988(); extern undefined4 fn_001e33e8();
extern undefined4 fn_001f749c(); extern undefined4 fn_001f751c(); extern undefined4 fn_00219400(); extern undefined4 fn_0022f584(); extern undefined4 fn_002feef8(); extern undefined4 fn_00303edc();
extern undefined4 fn_00303f80(); extern undefined4 fn_00303fd0(); extern undefined4 fn_0036c340(); extern undefined4 fn_0036c5f4(); extern undefined4 fn_004f121c(); extern undefined4 fn_005f3c7c();
extern undefined4 fn_0066eb04(); extern undefined4 fn_00673be8(); extern undefined4 fn_0068326c(); extern undefined4 fn_00694a10(); extern undefined4 fn_006bd958(); extern undefined4 fn_006f612c();
extern undefined4 fn_006f73a0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0069888c; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008942d0; extern undefined4 DAT_008977e0;
extern undefined4 DAT_00897808; extern undefined4 DAT_0089780c; extern undefined4 DAT_00897850; extern undefined4 DAT_00898840;
extern undefined4 DAT_008bf49c; extern unsigned char *DAT_008bf4f4;
