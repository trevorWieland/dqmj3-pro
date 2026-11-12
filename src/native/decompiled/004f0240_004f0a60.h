#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00100394(); extern undefined4 * fn_00158f40(); extern undefined8 fn_001694e4(); extern undefined8 fn_00169f1c(); extern uint * fn_001782b8(); extern undefined4 fn_004ecffc();
extern undefined4 fn_004ed21c(); extern undefined4 fn_004ed284(); extern undefined4 fn_004ed2e8(); extern undefined4 fn_004ed3b8(); extern undefined4 fn_004ed714(); extern undefined4 fn_004ee1cc();
extern undefined4 fn_004eed1c(); extern undefined4 fn_004ef288(); extern undefined4 fn_004f0208(); extern undefined4 fn_004f0230(); extern int fn_004f0240(); extern int fn_004f0338();
extern undefined1 * fn_004f0860(); extern undefined4 fn_004f11b0(); extern undefined4 fn_0065673c(); extern undefined4 fn_00755b58(); extern undefined4 fn_00755e38(); extern undefined4 fn_00780890();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00856c94; extern undefined4 DAT_00856d70; extern undefined4 DAT_008575a0; extern undefined4 DAT_008bf488;
extern undefined4 DAT_008bf489; extern undefined4 DAT_008bf48c; extern undefined4 DAT_008c0630; extern undefined4 DAT_008c35f0;
extern undefined4 DAT_e0a14827; extern undefined4 DAT_e0a1482b;
