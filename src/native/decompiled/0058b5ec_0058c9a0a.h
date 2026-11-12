#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern bool fn_001296e8(); extern undefined4 fn_00144df4(); extern undefined4 fn_0015b0dc(); extern undefined8 fn_0017821c(); extern undefined4 fn_0020bbc4(); extern bool fn_00269864();
extern undefined4 fn_00269b38(); extern undefined4 fn_0028a68c(); extern undefined4 fn_0028a9cc(); extern undefined1 * fn_0028abc4(); extern undefined4 fn_0028ad24(); extern int fn_0028af90();
extern int fn_0028b0f8(); extern undefined4 fn_0028b7e4(); extern undefined4 fn_002e80c4(); extern undefined4 fn_002e8160(); extern undefined4 * fn_002e8cf0(); extern undefined4 * fn_00301f50();
extern undefined4 fn_003f71d0(); extern undefined1 fn_003f71f4(); extern undefined4 fn_0042f204(); extern undefined4 fn_00444154(); extern undefined4 fn_00689efc(); extern undefined4 fn_006b846c();
extern undefined4 fn_006b8538(); extern undefined4 fn_006bf5e0(); extern undefined4 fn_006bfdb4(); extern int fn_006c001c(); extern undefined4 fn_00749130();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0058b78c; extern undefined4 DAT_0058b9f8; extern undefined4 DAT_00897804; extern undefined4 DAT_00897818;
extern undefined4 DAT_00898214; extern undefined4 DAT_00898840;
