#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern uint fn_00101a50(); extern int * fn_0015e6f0(); extern undefined4 fn_0015e9d8(); extern undefined4 * fn_00170f54(); extern int fn_00170fa4();
extern char * fn_00177f50(); extern int fn_0017d82c(); extern int fn_0017fe44(); extern uint fn_00190ef0(); extern undefined4 fn_00455124(); extern int fn_00785b1c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004558d0; extern undefined4 DAT_004558f4; extern undefined4 DAT_0045590c; extern undefined4 DAT_00455928;
extern undefined4 DAT_007d9c58; extern undefined4 DAT_007d9e38; extern undefined4 DAT_007d9e40; extern undefined4 DAT_007d9e48;
extern undefined4 DAT_007d9e50; extern undefined4 DAT_00855a94;
