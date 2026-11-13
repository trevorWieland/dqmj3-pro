#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001008c4(); extern int fn_00101a1c(); extern undefined4 fn_001028d4(); extern undefined4 fn_00159f34(); extern undefined4 fn_00178f9c();
extern undefined4 fn_0018a618(); extern undefined4 fn_00190d50(); extern undefined4 fn_001924ec(); extern undefined4 fn_0019501c(); extern undefined4 fn_0022ccb4(); extern undefined4 fn_0022cdf0();
extern undefined4 fn_0022ef60(); extern undefined4 fn_00231410(); extern undefined4 fn_00231690(); extern undefined4 fn_002feef8(); extern uint fn_003035b0(); extern undefined4 fn_003bbdc0();
extern undefined4 fn_003bbde0(); extern undefined4 * fn_003bc118(); extern undefined4 fn_003bc2c8(); extern int fn_003dd794(); extern undefined4 fn_003ddf90(); extern undefined4 fn_0042ec00();
extern undefined4 fn_00688c04(); extern undefined4 fn_006890bc(); extern undefined4 fn_006e1ee8(); extern int * fn_0079ed6c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001ad824(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003ddf48; extern undefined4 DAT_003df6b4; extern undefined4 DAT_00832040; extern undefined4 DAT_00860ad4;
extern undefined4 DAT_00860adc; extern undefined4 DAT_00894090; extern undefined4 DAT_0089560c; extern undefined4 DAT_00895618;
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
