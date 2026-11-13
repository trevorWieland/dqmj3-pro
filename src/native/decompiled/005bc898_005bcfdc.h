#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001006ac(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern int * fn_001588d4();
extern undefined4 * fn_0015ece0(); extern undefined8 fn_0017821c(); extern undefined4 fn_001f74d8(); extern undefined4 fn_0022f750(); extern undefined4 fn_0023d364(); extern undefined4 fn_002c3e78();
extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined4 fn_0031b78c(); extern undefined4 fn_0038e520(); extern undefined4 fn_00397618();
extern int fn_00397774(); extern undefined4 * fn_004b637c(); extern undefined4 fn_004b9b4c(); extern undefined4 fn_005bd474(); extern undefined4 fn_0068974c(); extern undefined4 fn_00689efc();
extern undefined4 fn_006ba250(); extern int fn_006ba274(); extern undefined4 fn_006ba284(); extern bool fn_006e8ff4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005bccdc; extern undefined4 DAT_005bd0a8; extern undefined4 DAT_00849518; extern undefined4 DAT_00853388;
extern undefined4 DAT_008990ec; extern undefined4 DAT_008990f0; extern undefined4 DAT_00899218; extern undefined4 DAT_008c7611;
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4; extern undefined4 PTR_FUN_00853b40; extern undefined4 PTR_FUN_00854c0c;
