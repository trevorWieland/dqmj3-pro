#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001028d4(); extern undefined * fn_00128eac(); extern undefined4 fn_00145ac0(); extern undefined4 fn_00159b18(); extern undefined4 fn_00163868(); extern undefined4 fn_00164f84();
extern bool fn_0016678c(); extern int fn_0016ba34(); extern int fn_00175ab8(); extern undefined4 fn_0018367c(); extern uint fn_001a23a8(); extern undefined4 fn_001c26a8();
extern undefined4 fn_00339ae8(); extern undefined4 fn_005f6ce8(); extern undefined4 fn_006ae004(); extern int fn_006c4d1c(); extern int fn_006c4ddc(); extern int fn_006c4e9c();
extern undefined4 fn_006ec8f0(); extern undefined4 fn_006fa358();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00164f64; extern undefined4 DAT_006adeac; extern undefined4 DAT_00897800; extern undefined4 DAT_0089820c;
extern undefined4 DAT_008c7f1c; extern undefined4 PTR_s_Dummy_007bc260;
