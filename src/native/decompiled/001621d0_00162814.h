#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined * fn_00141104(); extern undefined * fn_001524d0(); extern undefined4 * fn_00152724(); extern void fn_001623b0(); extern uint fn_001626f8();
extern undefined8 fn_00169f1c(); extern undefined4 fn_0016a50c(); extern undefined4 fn_0016c358(); extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern undefined4 fn_001711a4();
extern undefined4 fn_00171380(); extern undefined4 fn_00172d60(); extern undefined4 fn_00172f4c(); extern uint fn_00172f98(); extern undefined4 fn_00173040(); extern undefined4 fn_0017313c();
extern undefined4 * fn_00173340(); extern undefined4 fn_001733d4(); extern undefined4 * fn_00173460(); extern int fn_00176ca0(); extern int * fn_0017d948(); extern undefined4 * fn_0017e758();
extern undefined4 * fn_0017eca4(); extern undefined1 * fn_0018b794(); extern uint fn_00191dd4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0017301c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00845474; extern undefined4 DAT_00858388; extern undefined4 DAT_0085839c; extern undefined4 DAT_008583cc;
extern undefined4 DAT_008584a8; extern undefined4 DAT_008ece50;
