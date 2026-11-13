#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001480d0(); extern undefined4 fn_001481c8(); extern undefined4 fn_001482f4(); extern undefined4 fn_00159f34(); extern undefined4 fn_0016a43c();
extern int fn_00172c98(); extern undefined2 fn_00176970(); extern undefined4 fn_00178eec(); extern undefined4 fn_00178f9c(); extern undefined4 fn_001853ec(); extern undefined4 fn_001854ac();
extern undefined4 fn_0031c080(); extern undefined4 fn_0031c154(); extern undefined4 fn_0031c180(); extern undefined4 fn_0031c810(); extern undefined4 * fn_0031cb44(); extern undefined4 fn_004488dc();
extern undefined4 fn_005d2254(); extern undefined4 fn_006890bc(); extern undefined4 * fn_00689144(); extern undefined4 fn_00689210(); extern undefined4 fn_00689b18(); extern undefined4 * fn_0068ab5c();
extern undefined4 * fn_0068ad5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0022cc84; extern undefined4 DAT_0022cc88; extern undefined4 DAT_0022cc94; extern undefined4 DAT_0022cca0;
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081cd10; extern undefined4 DAT_00864374; extern undefined4 DAT_008951fc;
extern undefined4 DAT_00895314;
