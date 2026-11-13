#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00100654(); extern undefined4 fn_001249d0(); extern undefined4 fn_0013d0fc(); extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern undefined4 fn_0030233c();
extern undefined4 fn_00459c64(); extern int fn_00466f1c(); extern undefined * fn_0046774c(); extern undefined4 fn_004680fc(); extern undefined4 fn_004699ec(); extern undefined4 fn_004747a4();
extern undefined4 fn_00476a94(); extern undefined4 fn_00478b90(); extern undefined4 fn_004790f8(); extern int * fn_0047a798(); extern undefined4 fn_0048cd74(); extern undefined4 fn_0049599c();
extern undefined4 fn_004a34f4(); extern undefined4 fn_004b47c0(); extern undefined4 fn_004b4860(); extern undefined4 fn_004b4a60(); extern undefined4 fn_004b5930(); extern undefined4 fn_004b59d0();
extern undefined4 * fn_004b5c8c(); extern undefined4 fn_004bd8d0(); extern undefined4 fn_0074a8dc(); extern undefined4 fn_00754778(); extern undefined4 fn_00754868();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0045fb6c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008528bc; extern undefined4 DAT_008529d4; extern undefined4 DAT_00855a08; extern undefined4 DAT_008b637c;
extern undefined4 DAT_008b6387; extern undefined4 DAT_008b6393; extern undefined4 DAT_008b63e8; extern undefined4 DAT_008e7794;
extern undefined4 PTR_FUN_008534b4;
