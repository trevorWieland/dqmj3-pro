#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_002febd8(); extern undefined4 fn_002fec40(); extern int fn_0044bc3c(); extern int fn_005226e0(); extern int fn_005227f8(); extern int fn_00522928();
extern int fn_00522b0c(); extern int fn_00522b4c(); extern int fn_00522b88(); extern int fn_00522c08(); extern int fn_00522cdc(); extern int fn_00522e28();
extern int fn_00522e6c(); extern int fn_00522f50(); extern bool fn_00522f90(); extern bool fn_00522fa8(); extern undefined4 fn_00522ff8(); extern undefined4 fn_00523544();
extern undefined4 fn_005236dc(); extern int fn_00523d9c(); extern int fn_00523eb4(); extern int fn_00523fe4(); extern int fn_005241c8(); extern int fn_00524208();
extern int fn_00524244(); extern int fn_005242fc(); extern int fn_005243d0(); extern int fn_00524470(); extern undefined4 fn_005244b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0085743c;
