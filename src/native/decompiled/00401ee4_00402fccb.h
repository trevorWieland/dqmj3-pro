#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001483c0(); extern undefined4 fn_00149844(); extern int fn_0016561c(); extern int fn_001659c0(); extern undefined4 fn_0016a6d0();
extern undefined1 fn_0016c0d0(); extern int fn_00174a74(); extern int fn_00174c34(); extern int fn_00174c80(); extern int fn_00175044(); extern undefined4 fn_001754ac();
extern undefined4 fn_001754f0(); extern undefined4 fn_00182994(); extern undefined * fn_0029f004(); extern undefined4 fn_0029f030(); extern undefined4 fn_0029fcf4(); extern undefined4 fn_0029ffa8();
extern undefined4 fn_002a0188(); extern undefined4 fn_002a05e0(); extern undefined4 fn_002a1070(); extern undefined4 fn_002a17e8(); extern undefined4 fn_002e3524(); extern undefined4 fn_002e3564();
extern undefined4 * fn_002e3ad8(); extern int fn_002e3bbc(); extern undefined4 fn_002feef8(); extern uint fn_003035b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004022b0; extern undefined4 DAT_004022cc; extern undefined4 DAT_00402cac; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_0083770c; extern undefined4 DAT_008977e0; extern undefined4 DAT_008977e4;
