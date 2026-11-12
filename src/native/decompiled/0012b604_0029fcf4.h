#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00154c7c(); extern undefined4 fn_00154e38(); extern int fn_001550fc(); extern undefined4 fn_00155348(); extern undefined4 fn_00155a74();
extern undefined4 fn_00155ac8(); extern undefined4 fn_00157f00(); extern undefined4 fn_00157f58(); extern undefined4 fn_001581d0(); extern int fn_001659c0(); extern int fn_00174a74();
extern int fn_00174bac(); extern int fn_00175044(); extern undefined4 fn_001755cc(); extern undefined4 fn_0017591c(); extern undefined8 fn_0017a7fc(); extern undefined4 fn_00182994();
extern undefined4 fn_0023e6c8(); extern undefined4 fn_0029dd20(); extern undefined4 fn_0029e580(); extern undefined4 * fn_00301f50();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00148920; extern undefined4 DAT_0029f188; extern undefined4 DAT_0029f194; extern undefined4 DAT_008977e4;
extern unsigned char *DAT_00897808; extern unsigned char *DAT_0089780c; extern unsigned char *DAT_00897894; extern unsigned char *DAT_00898898;
extern code *DAT_0089a520; extern undefined4 DAT_0089a524; extern undefined4 DAT_008bf790; extern undefined4 DAT_008bf794;
extern unsigned char *DAT_008e3104;
