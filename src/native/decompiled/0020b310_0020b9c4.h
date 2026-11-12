#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern short * fn_001003e0(); extern undefined4 fn_00146590(); extern undefined4 fn_0015b064(); extern undefined8 fn_0017821c(); extern void fn_0020b59c(); extern undefined4 fn_0020ddfc();
extern undefined4 fn_0020e3a4(); extern undefined4 fn_0020e628(); extern undefined4 fn_0020fd10(); extern undefined4 fn_00210174(); extern undefined4 fn_0022f584(); extern undefined4 fn_002467b4();
extern undefined4 fn_00246880(); extern undefined4 * fn_00301f50(); extern int fn_00388784(); extern int fn_005fe128(); extern int fn_00660a50(); extern int fn_00661248();
extern undefined4 fn_0066128c(); extern int fn_006613ec(); extern int fn_006614d0(); extern int fn_00661570(); extern undefined4 fn_0066158c(); extern int fn_0066173c();
extern int fn_006617a8(); extern undefined4 fn_0068f818(); extern int fn_006c0028();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0020b8f4;
