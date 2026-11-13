#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern uint fn_00101a50(); extern undefined4 fn_00145b00(); extern undefined4 fn_0016a7c4(); extern undefined4 fn_00190d50(); extern undefined4 fn_0022cf0c();
extern undefined4 fn_0022ef60(); extern undefined4 fn_0022f584(); extern undefined4 fn_00290aa4(); extern undefined4 fn_00290ae4(); extern undefined4 fn_002ff628(); extern undefined4 fn_0031c040();
extern undefined4 fn_0031c7d0(); extern undefined4 fn_0031ca5c(); extern undefined4 fn_00385b60(); extern undefined4 * fn_003bc118(); extern undefined4 fn_003e2778(); extern undefined4 * fn_003fbe64();
extern undefined4 fn_0042f1c0(); extern int * fn_0079e7a0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003fb9b4; extern undefined4 DAT_003fbdf8; extern undefined4 DAT_003fbdfc; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_00835ed4; extern undefined4 DAT_00894d28; extern undefined4 DAT_008c762f; extern undefined4 DAT_008c7674;
