#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00101a1c(); extern undefined4 fn_00113c58(); extern undefined4 fn_00124be8(); extern undefined4 fn_00145b00(); extern undefined4 fn_0014f1bc();
extern undefined4 fn_0014f510(); extern undefined4 * fn_00170f54(); extern undefined8 fn_0017821c(); extern undefined4 fn_001828f0(); extern undefined4 fn_001f74d8(); extern undefined4 fn_0022cab4();
extern undefined4 fn_0022ccb4(); extern undefined4 fn_0023cff0(); extern undefined4 fn_00255cd0(); extern undefined4 * fn_002cc310(); extern undefined4 fn_0037cac0(); extern undefined4 fn_0037cad0();
extern undefined4 fn_0037cae0(); extern undefined4 fn_0037cb0c(); extern undefined4 fn_0037cb1c(); extern undefined4 fn_0037cb40(); extern undefined4 fn_0037cb50(); extern undefined4 fn_0037cb60();
extern undefined4 fn_0037cbbc(); extern undefined4 fn_0037cbe0(); extern undefined4 fn_0037cbf0(); extern undefined4 * fn_0038e974(); extern int fn_00397a0c(); extern undefined4 fn_00397a78();
extern int fn_004bb560(); extern undefined4 fn_005bd8fc(); extern undefined4 fn_005fc96c(); extern undefined4 fn_005fc980(); extern int fn_006ba274(); extern undefined4 fn_006ba284();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0020c1dc(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00256038(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005bd7e4; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00860454; extern undefined4 DAT_008991d4;
extern undefined4 DAT_008991d8; extern undefined4 DAT_00899218; extern undefined4 DAT_008b64f8; extern undefined4 PTR_FUN_00849678;
extern undefined4 PTR_FUN_00854c0c;
