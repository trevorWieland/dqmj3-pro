#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern bool fn_001296e8(); extern undefined4 fn_00145b00(); extern undefined4 fn_0016a50c(); extern undefined4 fn_001f74d8(); extern undefined4 fn_0022f750(); extern undefined4 fn_00238e44();
extern undefined4 fn_002525a0(); extern undefined4 fn_0025264c(); extern undefined4 fn_0025265c(); extern undefined4 fn_002f96c4(); extern int fn_002fa328(); extern int fn_002febd8();
extern undefined4 fn_002fec38(); extern undefined4 fn_002fec40(); extern undefined4 fn_002feef8(); extern undefined4 fn_00303234(); extern undefined4 fn_00312c90(); extern undefined4 fn_00328984();
extern undefined4 fn_0036c340(); extern undefined4 fn_0036c3fc(); extern undefined4 fn_003dcd5c(); extern undefined4 fn_0040f564(); extern uint fn_00443e84(); extern undefined4 fn_005f6270();
extern uint fn_0066e224(); extern int fn_0066e3bc(); extern undefined4 fn_0066e4a4(); extern undefined4 fn_0066e620(); extern undefined4 fn_0066e6f0(); extern undefined4 fn_0066eb90();
extern undefined4 fn_00675bcc(); extern undefined4 fn_00689824(); extern undefined4 fn_0068993c(); extern undefined4 fn_006899f4(); extern undefined1 fn_006f6a6c(); extern undefined4 fn_00747f94();
extern undefined4 fn_00748024(); extern undefined4 fn_00748448();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00313238; extern undefined4 DAT_00313240; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00892cf0;
extern undefined4 DAT_00897850; extern undefined4 DAT_00898840; extern undefined4 PTR_FUN_008224e4;
