#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 * fn_0013ce98(); extern undefined4 fn_0013d0fc(); extern undefined4 fn_0014f1bc(); extern undefined4 fn_0014f510(); extern undefined4 * fn_0015ecdc();
extern undefined4 * fn_0015ece0(); extern undefined4 fn_0015ef4c(); extern int fn_00170fa4(); extern bool fn_00454cbc(); extern undefined4 fn_00455e8c(); extern undefined4 fn_00456510();
extern undefined4 fn_0045db00(); extern undefined4 fn_00479b1c(); extern undefined4 fn_00479c98(); extern undefined4 fn_0047fba4(); extern undefined4 fn_0048a058(); extern void fn_00493b28();
extern undefined4 fn_004941c4(); extern undefined4 fn_004b301c(); extern undefined4 fn_004b8d18(); extern undefined4 fn_004b8d4c(); extern undefined4 fn_0074a4c8(); extern undefined4 fn_0074a528();
extern undefined4 fn_0074a5fc();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00493cf8(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00493cec; extern undefined4 DAT_00493e60; extern undefined4 DAT_007dba44; extern undefined4 DAT_00852c28;
extern undefined4 DAT_00853500; extern undefined4 DAT_0085435c; extern undefined4 PTR_s_CACERT_PUBLIC_CA_5_der_0089a988;
