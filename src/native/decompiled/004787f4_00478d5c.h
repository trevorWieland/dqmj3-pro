#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern undefined4 fn_001249d0(); extern undefined4 fn_0013d0fc(); extern undefined4 fn_0015ef58(); extern undefined4 fn_00455040();
extern undefined4 fn_00456a78(); extern undefined4 fn_00459d70(); extern undefined4 * fn_0045b64c(); extern int * fn_00467160(); extern undefined4 fn_00467564(); extern undefined4 fn_00468d84();
extern int * fn_00469dc8(); extern uint fn_00478a24(); extern undefined4 fn_0048df6c(); extern undefined4 fn_004b47c0(); extern undefined4 fn_004b4860(); extern undefined4 fn_004b5930();
extern bool fn_006d1068();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00456a9c; extern undefined4 DAT_008528bc; extern undefined4 DAT_008b6404;
