#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern int fn_0015a130(); extern undefined4 fn_0015aabc(); extern void fn_0015b054(); extern undefined4 fn_0015c954(); extern undefined4 fn_00163edc();
extern undefined4 fn_00164a34(); extern uint * fn_00168b28(); extern undefined4 fn_0016a50c(); extern undefined4 fn_0016a82c(); extern int fn_0016ba34(); extern undefined4 fn_0016ba78();
extern undefined4 fn_0016ba84(); extern undefined4 fn_0016bad4(); extern undefined1 fn_0016c0d0(); extern int fn_0016c2b8(); extern undefined4 * fn_00171634(); extern int fn_00174bac();
extern undefined4 fn_001754ac(); extern undefined4 fn_0017d96c(); extern undefined4 fn_00182994(); extern undefined4 * fn_00301f50();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0015b0b4; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081e58c; extern undefined4 DAT_008977e4;
extern undefined4 DAT_00897800; extern undefined4 DAT_00898210; extern undefined4 PTR_s_camera_101_ALLYM4_00_007bba30; extern undefined4 PTR_s_camera_101_ALLYN4_00_007bb930;
extern undefined4 PTR_s_camera_101_ALLYS4_00_007bb830;
