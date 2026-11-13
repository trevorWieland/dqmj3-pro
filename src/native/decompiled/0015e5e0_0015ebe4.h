#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern int fn_00101054(); extern short * fn_00101144(); extern int fn_00101160(); extern int fn_00101d80(); extern undefined4 fn_0014ed0c();
extern undefined4 fn_0015e294(); extern undefined4 fn_0015e6d8(); extern int * fn_0015e6f0(); extern void fn_0015eb44(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_00169c08();
extern ulonglong fn_00169c20(); extern undefined8 fn_00169f1c(); extern undefined4 fn_00170c9c(); extern undefined4 * fn_00170f54(); extern int fn_00170fa4(); extern undefined4 fn_0017695c();
extern undefined4 fn_00176fc4(); extern undefined4 fn_001777e0(); extern char * fn_00177f50(); extern undefined4 fn_0030233c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0015e9c8; extern undefined4 DAT_007dbc10; extern undefined4 DAT_00855a94; extern undefined4 DAT_008b6381;
extern undefined4 DAT_008b6382; extern undefined4 DAT_008b63a1; extern undefined4 DAT_008b63dc; extern unsigned char *DAT_008b63e0;
extern undefined4 DAT_008b6518; extern undefined4 DAT_008b651c; extern undefined4 DAT_008e7710;
