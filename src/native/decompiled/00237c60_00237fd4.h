#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001594e4(); extern undefined4 fn_00163868(); extern undefined4 fn_0017894c(); extern int fn_00237c18(); extern undefined4 fn_002cd49c(); extern undefined4 fn_002cd778();
extern int fn_002e9be0(); extern int fn_002e9c38(); extern int fn_002e9c90(); extern int fn_002e9ce8(); extern int fn_002e9e4c(); extern int fn_002e9ea4();
extern int fn_002e9efc(); extern int fn_002ea0cc(); extern int fn_002ea17c(); extern int fn_002ea3e8(); extern int fn_002ea524(); extern undefined4 * fn_00301f50();
extern int fn_00388784(); extern int fn_00660a50(); extern int fn_00661518(); extern int fn_00661570(); extern int fn_006616f4(); extern int fn_0066173c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4;
