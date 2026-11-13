#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101ce8(); extern undefined4 fn_00102388(); extern undefined4 fn_0010239a(); extern undefined4 fn_00146594(); extern undefined4 fn_0014d6cc(); extern int fn_0014d9ec();
extern int fn_001560d8(); extern undefined4 fn_0015cf8c(); extern undefined4 fn_0015e294(); extern undefined4 fn_0015e304(); extern undefined4 fn_0015e590(); extern undefined4 fn_00184b48();
extern undefined4 fn_00184c6c(); extern undefined4 fn_00184cd0(); extern int fn_0018501c(); extern undefined4 fn_0018513c(); extern undefined4 fn_001851bc(); extern bool fn_00191f08();
extern undefined4 fn_00192114(); extern int fn_001930b8(); extern int fn_001ad654(); extern undefined4 fn_001af0d8(); extern undefined4 fn_001af844(); extern undefined4 fn_001af874();
extern undefined ** fn_001af8e0(); extern undefined4 fn_001b02c8(); extern undefined4 fn_001b0398(); extern undefined4 fn_001bf270(); extern int fn_001c04c4(); extern undefined4 * fn_00301f50();
extern undefined4 fn_0044d6e4(); extern undefined4 fn_007407d4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001c0bcc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_001ae7f8; extern undefined4 DAT_001afd54; extern undefined4 DAT_001b0294; extern undefined4 DAT_001b02ac;
extern undefined4 DAT_00899eb4; extern unsigned char *DAT_00899eb8; extern undefined4 DAT_008bf50c; extern undefined4 DAT_008bf50f;
extern undefined4 DAT_008bf514; extern undefined4 DAT_008bf518; extern undefined4 DAT_008bf51c; extern undefined4 DAT_008bf520;
extern undefined4 DAT_008bf604; extern undefined4 DAT_008e970c; extern undefined4 DAT_008e9710; extern undefined4 DAT_008e971c;
extern undefined4 PTR_FUN_007e09d0;
