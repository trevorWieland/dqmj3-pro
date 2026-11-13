#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001ad654(); extern int fn_002febd8(); extern undefined4 * fn_00301f50(); extern undefined4 * fn_00520de8(); extern undefined4 fn_00520e74(); extern undefined4 fn_00520fd0();
extern undefined4 fn_00521008(); extern undefined4 fn_005210b0(); extern undefined4 fn_005213e4(); extern int fn_00522860(); extern int fn_00522900(); extern int fn_00522988();
extern int fn_005229bc(); extern int fn_00522a08(); extern int fn_00522acc(); extern int fn_00522d9c(); extern bool fn_00522f90(); extern bool fn_00522fa8();
extern undefined4 fn_00522ff8(); extern undefined4 fn_0052302c(); extern undefined4 fn_00523200(); extern undefined4 fn_00523270(); extern undefined4 fn_005232ec(); extern undefined4 fn_0052332c();
extern undefined4 fn_00523420(); extern undefined4 fn_00523448(); extern undefined4 fn_00523544(); extern undefined4 fn_005236dc(); extern int fn_00523f1c(); extern int fn_00523fbc();
extern int fn_00524044(); extern int fn_00524078(); extern int fn_005240c4(); extern int fn_00524188(); extern int fn_0052441c(); extern undefined4 fn_005244b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d6438; extern undefined4 DAT_00857424;
