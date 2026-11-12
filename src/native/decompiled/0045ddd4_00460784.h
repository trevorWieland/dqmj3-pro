#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101ce8(); extern undefined4 fn_00102388(); extern undefined4 fn_0010239a(); extern undefined4 fn_00102908(); extern undefined4 fn_001249d0(); extern undefined4 fn_0013d0fc();
extern undefined4 fn_00146594(); extern undefined4 fn_0014d6cc(); extern int fn_0014d9ec(); extern undefined4 fn_0014f1bc(); extern int fn_001560d8(); extern undefined4 fn_0015cf8c();
extern undefined4 * fn_00170f54(); extern uint fn_00190ef0(); extern undefined4 fn_004591b0(); extern undefined4 fn_004722b4(); extern int fn_004b61c8(); extern undefined4 * fn_004b6318();
extern undefined4 * fn_004b637c(); extern int * fn_004b9334(); extern undefined4 fn_006d0810(); extern undefined4 fn_0076b3fc(); extern undefined4 fn_0079b86c(); extern int * fn_0079c5b8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0045e284; extern undefined4 DAT_007d9c3c; extern undefined4 DAT_007d9e30; extern undefined4 DAT_0085238c;
extern undefined4 DAT_0086e672; extern undefined4 DAT_0089a94c; extern undefined4 DAT_008b63dc; extern code *DAT_008b649c;
