#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00190d50(); extern undefined4 fn_0022f584(); extern undefined4 fn_002e6978(); extern int fn_00397a0c(); extern undefined4 fn_003c70f0();
extern undefined * fn_0058417c(); extern int * fn_0068897c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008305bc; extern undefined4 DAT_008969ac; extern undefined4 DAT_008969b0;
extern undefined4 DAT_008969b4; extern undefined4 DAT_008969b8; extern undefined4 DAT_008969e0; extern undefined4 PTR_s_HelpTextPassingSecret1_008969c8;
