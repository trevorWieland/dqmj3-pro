#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined1 fn_00163c80(); extern undefined8 fn_00169f1c(); extern undefined4 fn_001746c0(); extern undefined4 fn_00618b44(); extern undefined4 fn_00619504(); extern undefined4 fn_0061e370();
extern undefined4 fn_0061e728(); extern undefined4 * fn_0061e770(); extern int fn_006228ac(); extern undefined4 fn_0062454c(); extern int fn_0062a40c(); extern int fn_0062bc78();
extern undefined4 fn_0063a5a4(); extern undefined4 fn_00654c08(); extern undefined4 fn_00655a88(); extern undefined4 fn_00656458(); extern undefined4 fn_006564a8(); extern undefined4 * fn_00656538();
extern undefined4 fn_006565b8(); extern int fn_006565e0(); extern int fn_006921a0(); extern bool fn_006f0908(); extern byte fn_006f44fc(); extern undefined4 fn_006f94f4();
extern undefined1 * fn_007a5540(); extern int * fn_007af59c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007e192c;
