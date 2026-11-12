#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001638a0(); extern undefined4 fn_00174828(); extern undefined4 fn_0025e31c(); extern undefined4 fn_0025e7cc(); extern undefined4 fn_0025e868();
extern undefined4 fn_002fecec(); extern undefined4 fn_002ff628(); extern undefined4 fn_0030233c(); extern undefined4 fn_00303afc(); extern undefined4 fn_0030b8f8(); extern undefined4 fn_00353a38();
extern bool fn_00353aa4(); extern undefined4 fn_00353af4(); extern undefined4 fn_00353c20(); extern undefined4 fn_003a62bc(); extern undefined4 fn_003a6d3c(); extern undefined4 fn_003a6e34();
extern void fn_003a7ab8(); extern void fn_003a7f50(); extern undefined4 fn_003a8858(); extern undefined4 fn_005a8a44(); extern undefined4 fn_005a8e3c(); extern undefined4 fn_005a8e78();
extern undefined4 fn_005a9084(); extern int fn_005a96b0(); extern int fn_006c2700(); extern int fn_006c2734();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977e4; extern undefined4 DAT_008c62fc; extern undefined4 DAT_008c764d;
extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34;
