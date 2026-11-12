#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001028d4(); extern undefined4 fn_00145b00(); extern undefined4 fn_0015b0f8(); extern undefined4 fn_001638a0(); extern undefined4 fn_0022f584(); extern undefined4 fn_002f6fa8();
extern int fn_002f81dc(); extern undefined1 fn_002f8914(); extern int fn_0036c13c(); extern int fn_0041fe24(); extern undefined4 fn_005f8fb4(); extern undefined4 * fn_005f954c();
extern undefined4 fn_0068974c(); extern undefined4 fn_006adb80(); extern int fn_006cd638(); extern int fn_006cd6fc(); extern undefined1 fn_006f6a6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005f938c; extern undefined4 DAT_005f93e4; extern undefined4 DAT_005f93fc; extern undefined4 DAT_005f9418;
extern undefined4 DAT_005f9434; extern undefined4 DAT_005f9450; extern undefined4 DAT_007cae5c; extern undefined4 DAT_007cae60;
extern undefined4 DAT_00812c8c;
