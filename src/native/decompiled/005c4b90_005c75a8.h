#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00124930(); extern undefined4 * fn_0013d3e8(); extern undefined4 fn_00145b00(); extern undefined4 fn_0014f1bc(); extern undefined4 fn_0014f510(); extern undefined4 fn_0015b0dc();
extern undefined4 * fn_0015ece0(); extern undefined4 fn_001638a0(); extern undefined4 * fn_00170f54(); extern int fn_00170fa4(); extern undefined4 fn_00190d50(); extern undefined4 fn_00203884();
extern undefined4 fn_00203898(); extern char * fn_00203bc8(); extern undefined4 fn_00203c20(); extern undefined4 fn_00203cb4(); extern undefined4 fn_0022f750(); extern undefined4 fn_0026a494();
extern undefined4 fn_002d6808(); extern undefined4 fn_002d697c(); extern undefined4 fn_002d69e8(); extern undefined8 fn_00301a9c(); extern undefined4 fn_00327a18(); extern undefined4 * fn_00327fb4();
extern undefined4 fn_0048c740(); extern undefined4 fn_0048c758(); extern undefined4 fn_0048c938(); extern undefined4 fn_005c5ee4(); extern undefined4 fn_005d668c(); extern undefined1 fn_0066e158();
extern undefined4 fn_006780d4(); extern char fn_006c4720(); extern undefined4 fn_006f5e08(); extern undefined4 fn_00749130();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_005c516c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005c5c08; extern undefined4 DAT_005c7708; extern undefined4 DAT_005c7724; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_00897818; extern undefined4 DAT_00897830; extern undefined4 DAT_00897850; extern undefined4 DAT_00898214;
extern undefined4 DAT_00898840;
