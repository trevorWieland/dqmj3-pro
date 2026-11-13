#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00101a1c(); extern int fn_0011c134(); extern undefined4 fn_0011dda8(); extern undefined4 fn_00120a0c();
extern int fn_00120aa8(); extern undefined4 fn_00120be4(); extern undefined4 fn_00120c38(); extern undefined4 fn_00120c70(); extern undefined4 fn_001283fc(); extern undefined4 fn_00129dd4();
extern undefined4 fn_00129e04(); extern undefined4 fn_0012c034(); extern undefined4 fn_0012d1c4(); extern undefined4 fn_00145b00(); extern uint fn_00147e6c(); extern undefined4 * fn_00301f50();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00122314(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00112f64; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081cfb0; extern undefined4 DAT_0081d340;
extern undefined4 DAT_0081e13c; extern undefined4 DAT_0081e700; extern undefined4 DAT_00851994; extern undefined4 DAT_008977fc;
extern undefined4 DAT_008c97a8;
