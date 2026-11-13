#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001006de(); extern int fn_00100b58(); extern undefined4 fn_00145b00(); extern undefined4 fn_0018a618(); extern undefined4 fn_00190d50(); extern undefined4 fn_002305a4();
extern undefined4 fn_00230a84(); extern undefined4 fn_0028c898(); extern undefined4 fn_0028fe14(); extern undefined4 * fn_0028fec0(); extern void fn_0031d348(); extern void fn_0031d41c();
extern undefined4 fn_0031d554(); extern undefined4 fn_0031d724(); extern undefined4 fn_00688ff8(); extern undefined4 fn_0069e710(); extern int * fn_007854f8();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0031ce70(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0031ce54; extern undefined4 DAT_0031ce64; extern undefined4 DAT_0031d54c; extern undefined4 DAT_0031d550;
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00823038; extern undefined4 DAT_008631e4; extern undefined4 DAT_008631f4;
extern undefined4 DAT_00863204; extern undefined4 DAT_00863210; extern undefined4 DAT_008934b8; extern undefined4 DAT_008934bc;
extern undefined4 DAT_008934c0; extern undefined4 DAT_008934c4; extern undefined4 DAT_008934c8; extern undefined4 DAT_008934cc;
extern undefined4 DAT_00893894; extern undefined4 DAT_00893898; extern undefined4 DAT_0089389c; extern undefined4 DAT_008938a0;
extern undefined4 DAT_0089a930; extern undefined4 _DAT_008938a8; extern undefined4 _DAT_008938b0; extern undefined4 _DAT_008938b4;
extern undefined4 _DAT_008938b8; extern undefined4 _DAT_008938c4;
