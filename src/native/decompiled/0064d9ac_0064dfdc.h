#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined1 fn_00163cbc(); extern undefined8 fn_00169f1c(); extern int fn_00182924(); extern int fn_00182944();
extern undefined4 fn_002ff628(); extern undefined4 fn_0061be08(); extern undefined4 fn_0063a5a4(); extern undefined4 fn_0063b53c(); extern undefined4 fn_0063b5c0(); extern undefined4 fn_0064d9ac();
extern undefined4 fn_0064e7dc(); extern int fn_0065e38c(); extern int fn_0065e400(); extern int fn_0065e448(); extern int fn_0065e460(); extern bool fn_0065e494();
extern undefined4 fn_00660ab8(); extern undefined4 fn_0068fd00(); extern int fn_00691994(); extern uint fn_00691e94(); extern short * fn_006f14a4(); extern undefined4 fn_006f1a78();
extern undefined4 fn_006f4044(); extern undefined4 fn_006f4ba8(); extern undefined4 fn_00796c50();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c763f;
