#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00178f9c(); extern undefined4 * fn_0025dea8(); extern undefined4 fn_00385b88(); extern void fn_00387104(); extern void fn_00387168();
extern int * fn_0068897c(); extern undefined4 fn_00688c04(); extern undefined4 * fn_0068ad5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00387014; extern undefined4 DAT_00387028; extern undefined4 DAT_00387038; extern undefined4 DAT_00387048;
extern undefined4 DAT_00387058; extern undefined4 DAT_00387068; extern undefined4 DAT_00387078; extern undefined4 DAT_00387084;
extern undefined4 DAT_00387094; extern undefined4 DAT_007c73fc; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081cd10;
extern undefined4 DAT_0082a100; extern undefined4 DAT_0082a218; extern undefined4 DAT_00893af0; extern undefined4 PTR_FUN_00829fb4;
