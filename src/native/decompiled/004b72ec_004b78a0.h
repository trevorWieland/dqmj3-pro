#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101d80(); extern int fn_0013cd7c(); extern undefined4 fn_0013d1a8(); extern char * fn_00147a40(); extern undefined4 fn_0014ea80(); extern undefined4 fn_0015ebe4();
extern undefined4 * fn_0015ece0(); extern undefined4 * fn_00170f54(); extern undefined4 fn_0030233c(); extern undefined4 * fn_00454d0c(); extern undefined4 * fn_004b54dc(); extern undefined4 fn_004b626c();
extern undefined4 fn_004b7268(); extern undefined4 fn_004b7748(); extern undefined4 fn_006d0734(); extern undefined4 fn_0078638c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007db524; extern undefined4 DAT_007dba44; extern undefined4 DAT_00852740; extern undefined4 DAT_00855b74;
extern undefined4 DAT_008b637e; extern undefined4 DAT_008b63d8; extern undefined4 DAT_008e76a0; extern unsigned char *DAT_008e76e4;
extern undefined4 DAT_80010001;
