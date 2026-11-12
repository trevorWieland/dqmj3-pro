#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001010c8(); extern undefined4 fn_001249d0(); extern undefined4 fn_0014f24c(); extern undefined4 * fn_0014f480(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0015ef58();
extern int fn_002febd8(); extern undefined4 fn_00455e10(); extern undefined4 fn_004812bc(); extern int fn_00484660(); extern undefined4 fn_004b3044(); extern undefined4 * fn_004b5404();
extern undefined4 * fn_004b5488(); extern undefined4 * fn_004b54dc(); extern int fn_004b5540(); extern int fn_004b55dc(); extern undefined4 fn_004bdba4(); extern undefined4 fn_006084b4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00852ab0; extern undefined4 DAT_008b6418;
