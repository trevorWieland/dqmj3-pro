#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145adc(); extern undefined1 fn_00163c80(); extern bool fn_001667f0(); extern bool fn_00166804(); extern undefined4 fn_0017419c(); extern undefined4 fn_00174398();
extern undefined8 fn_0017821c(); extern longlong fn_00300f74(); extern int fn_0063a510(); extern int fn_00691898(); extern int fn_006918b4(); extern int fn_00691e14();
extern int fn_00691e30(); extern int fn_00691fec(); extern int fn_00692008(); extern undefined4 fn_006924f4(); extern undefined4 fn_006925f4(); extern undefined4 fn_006f3f7c();
extern byte fn_006f44fc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000007;
