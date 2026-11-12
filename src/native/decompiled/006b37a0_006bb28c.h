#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 fn_001028d4(); extern undefined4 fn_00114248(); extern undefined * fn_00128eac(); extern undefined4 fn_00145ac0(); extern undefined4 fn_00154ac8();
extern undefined4 fn_00163d44(); extern undefined4 fn_00163d68(); extern undefined4 fn_00235ba0(); extern undefined4 fn_00235bb4(); extern undefined4 fn_00235c3c(); extern undefined4 fn_00289500();
extern bool fn_0028bcb0(); extern bool fn_005f6e60(); extern undefined1 fn_00661714(); extern undefined4 fn_006915dc(); extern int fn_006a7ae8(); extern undefined4 fn_006b3494();
extern int fn_006b44e4(); extern int fn_006b7674(); extern int fn_006b771c(); extern bool fn_006b8970(); extern int fn_006f6e30();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern undefined4 DAT_006bb328; extern undefined4 DAT_007c44a8; extern undefined4 DAT_008911fc;
extern undefined4 DAT_00891200;
