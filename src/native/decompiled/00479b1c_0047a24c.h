#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 fn_0013d0fc(); extern undefined4 * fn_0015ece0(); extern int fn_00173bf4(); extern int fn_0017fe44(); extern undefined4 fn_0030233c();
extern undefined4 fn_0045616c(); extern undefined4 fn_00479a70(); extern void fn_00479b1c(); extern ushort fn_0047a2ec(); extern undefined4 fn_004a3d10(); extern undefined4 fn_004b301c();
extern undefined4 fn_004b3044(); extern undefined4 fn_004bab94(); extern undefined4 * fn_004bac20(); extern undefined4 fn_004bd1e0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_001c1300; extern undefined4 DAT_007dba44; extern undefined4 DAT_00853500; extern undefined4 DAT_0085354c;
extern undefined4 DAT_00853740; extern undefined4 DAT_00855bb4; extern undefined4 DAT_80010001; extern undefined4 PTR_FUN_00853510;
