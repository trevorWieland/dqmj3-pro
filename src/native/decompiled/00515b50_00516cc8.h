#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined8 fn_001694d4(); extern undefined4 fn_004ed714(); extern undefined4 fn_00509fc4(); extern undefined4 fn_0050a29c(); extern undefined1 * fn_0050a490();
extern int fn_0050b144(); extern undefined4 fn_0050fc24(); extern undefined4 fn_005157b0(); extern undefined4 fn_00515b50(); extern void fn_00515fe0(); extern undefined4 fn_0051603c();
extern undefined4 fn_00516180(); extern undefined4 fn_005162c8(); extern undefined4 fn_005165d8(); extern undefined4 fn_005167a4(); extern undefined4 fn_005169fc(); extern undefined4 fn_00516cec();
extern undefined4 fn_00516e40(); extern undefined4 fn_00517020(); extern undefined4 fn_006d6e30(); extern uint fn_006da08c(); extern undefined4 fn_006da484(); extern undefined4 fn_006da4e0();
extern undefined4 fn_006da56c(); extern uint fn_006dafe4(); extern uint fn_006daff8(); extern uint fn_006db024();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_006f9410(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf4cc;
