#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_00124be8(); extern undefined4 * fn_0013d40c(); extern int * fn_00147974(); extern int fn_0014e2f4(); extern undefined4 fn_0014f510();
extern int * fn_001588d4(); extern undefined4 * fn_00170f54(); extern undefined1 fn_001759e8(); extern undefined4 fn_0022f750(); extern undefined4 fn_0031b78c(); extern undefined4 fn_00397618();
extern int fn_00397774(); extern undefined4 fn_00454da8(); extern undefined4 fn_0045f7f0(); extern int fn_004b8734(); extern undefined4 fn_004b8754(); extern undefined4 fn_004b8790();
extern undefined4 fn_004b87a0(); extern undefined4 fn_004b87b0(); extern undefined4 fn_004b87bc(); extern undefined4 fn_004b87cc(); extern int * fn_004b87dc(); extern int * fn_004b8820();
extern undefined4 fn_00689efc();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00449ad4; extern undefined4 DAT_00449ad8; extern undefined4 DAT_00449ae0; extern undefined4 DAT_00449af8;
extern undefined4 DAT_00449b04; extern undefined4 DAT_00449b14; extern undefined4 DAT_00449b1c; extern undefined4 DAT_007c7930;
extern undefined4 DAT_007c7938; extern undefined4 DAT_007c7940; extern undefined4 DAT_00895be8; extern undefined4 DAT_00897804;
extern unsigned char *DAT_0089a7a0; extern unsigned char *DAT_008b63dc; extern unsigned char *DAT_008b64a4; extern code *DAT_008bfb40;
extern undefined4 DAT_008e932c;
