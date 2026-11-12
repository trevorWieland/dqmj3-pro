#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined8 fn_00103d64(); extern undefined4 fn_0010b240(); extern undefined4 fn_0013c500(); extern undefined4 fn_0017fe34(); extern undefined4 fn_00303b10();
extern int * fn_0044fa90(); extern undefined4 fn_004545f0(); extern int * fn_00454924(); extern uint * fn_0078afd4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00104074_1(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00520cb8(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0044ce68; extern undefined4 DAT_0044f548; extern undefined4 DAT_0044f5d4; extern undefined4 DAT_0045469c;
extern undefined4 DAT_007d6f0c; extern undefined4 DAT_0085269c; extern undefined4 DAT_008526b4; extern undefined4 DAT_00852730;
extern undefined4 DAT_00857354; extern undefined4 DAT_008912a4; extern undefined4 DAT_008912a8; extern undefined4 DAT_008912ac;
extern undefined4 DAT_008912b0; extern undefined4 DAT_00891e3c; extern undefined4 DAT_00891e40; extern undefined4 DAT_00891e44;
extern undefined4 DAT_00891e5c; extern undefined4 DAT_00891e60; extern undefined4 DAT_00891e64; extern undefined4 DAT_00891e68;
extern undefined4 DAT_00891e6c; extern undefined4 DAT_00891e70; extern undefined4 DAT_0089250c; extern undefined4 DAT_00892510;
extern undefined4 DAT_0089316c; extern undefined4 DAT_00893170; extern undefined4 DAT_00893174; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00894670; extern undefined4 DAT_00894674; extern undefined4 DAT_00895edc; extern undefined4 DAT_00895ee0;
extern undefined4 DAT_00897854; extern undefined4 DAT_00897858; extern undefined4 DAT_00897898; extern undefined4 DAT_008981b0;
extern undefined4 DAT_008981b4; extern undefined4 DAT_008981b8; extern undefined4 DAT_008981bc; extern undefined4 DAT_008994ac;
extern undefined4 DAT_0089a634; extern undefined4 DAT_0089a658; extern undefined4 DAT_0089a65c; extern undefined4 DAT_0089a850;
extern undefined4 DAT_008bfbbc; extern undefined4 DAT_008bfbc4; extern undefined4 DAT_008c0354; extern undefined4 DAT_008c0358;
extern undefined4 DAT_008c0388; extern undefined4 DAT_008c038c; extern undefined4 DAT_008c0398; extern undefined4 DAT_008c039c;
extern undefined4 DAT_008c03a0; extern undefined4 DAT_008c03a4; extern undefined4 DAT_008c33dc; extern undefined4 DAT_008c8bfc;
extern undefined4 DAT_008c8c00; extern undefined4 DAT_008c8c04; extern undefined4 DAT_008c8c08; extern undefined4 DAT_008c8c0c;
extern undefined4 DAT_008c8c10; extern undefined4 DAT_008c92cc; extern undefined4 DAT_008c92d0; extern undefined4 DAT_008c92d4;
extern undefined4 DAT_008c92d8; extern undefined4 DAT_008c92dc; extern undefined4 DAT_008c92e0; extern undefined4 DAT_008c92e4;
extern undefined4 DAT_008c92e8; extern undefined4 DAT_008c92ec; extern undefined4 DAT_008c9688; extern undefined4 DAT_008c968c;
extern undefined4 DAT_008c9690; extern undefined4 DAT_008c9694; extern undefined4 DAT_008c9698; extern undefined4 DAT_008c969c;
extern undefined4 DAT_008ca420; extern undefined4 DAT_008ca424; extern undefined4 DAT_008ca428; extern undefined4 DAT_008ca42c;
extern undefined4 DAT_008ca430; extern undefined4 DAT_008ca434; extern undefined4 DAT_008cb510; extern undefined4 DAT_008cb514;
extern undefined4 DAT_008cb518; extern undefined4 DAT_008cb51c; extern undefined4 DAT_008cb520; extern undefined4 DAT_008cb524;
extern undefined4 DAT_008cc67c; extern undefined4 DAT_008cc680; extern undefined4 DAT_008cc684; extern undefined4 DAT_008cc688;
extern undefined4 DAT_008cc68c; extern undefined4 DAT_008cc690; extern undefined4 DAT_008cdd54; extern undefined4 DAT_008cdd58;
extern undefined4 DAT_008cdd5c; extern undefined4 DAT_008cdd60; extern undefined4 DAT_008cdd64; extern undefined4 DAT_008cdd68;
extern undefined4 DAT_008e31e8; extern undefined4 DAT_008e3254; extern undefined4 DAT_008e32e0; extern undefined4 DAT_008e3310;
extern undefined4 DAT_008e3314; extern undefined4 DAT_008e3318; extern undefined4 DAT_008e331c; extern undefined4 DAT_008e3320;
extern undefined4 DAT_008e3324; extern undefined4 DAT_008e3328; extern undefined4 DAT_008e332c; extern undefined4 DAT_008e3330;
extern undefined4 DAT_008e3334; extern undefined4 DAT_008e3338; extern undefined4 DAT_008e333c; extern undefined4 DAT_008e3340;
extern undefined4 DAT_008e3344; extern undefined4 DAT_008e3348; extern undefined4 DAT_008e334c; extern undefined4 DAT_008e3350;
extern undefined4 DAT_008e3354; extern undefined4 DAT_008e3358; extern undefined4 DAT_008e335c; extern undefined4 DAT_008e3360;
extern undefined4 DAT_008e3364; extern undefined4 DAT_008e3368; extern undefined4 DAT_008e336c; extern undefined4 DAT_008ebc28;
extern undefined4 DAT_008ebc2c; extern undefined4 DAT_008ebc30; extern undefined4 DAT_008ebc34; extern undefined4 DAT_008ebc38;
extern undefined4 DAT_008ebc3c; extern undefined4 DAT_008ebc40; extern undefined4 DAT_008ebc7c; extern undefined4 DAT_008ebc80;
extern undefined4 DAT_008ebc84; extern undefined4 DAT_008ebc88; extern undefined4 DAT_008ebc8c; extern undefined4 DAT_008ebc90;
extern undefined4 DAT_008ebd7c; extern undefined4 DAT_008ebd80; extern undefined4 DAT_008ebd84; extern undefined4 DAT_008ebd88;
extern undefined4 DAT_008ebd8c; extern undefined4 DAT_008ebda8; extern undefined4 DAT_008ebdb0; extern undefined4 DAT_008ebdb8;
extern undefined4 DAT_008ebdc0; extern undefined4 DAT_008ebdc4; extern undefined4 DAT_008ebdcc; extern undefined4 DAT_008ebdd4;
extern undefined4 DAT_008ebdd8; extern undefined4 DAT_008ebddc; extern undefined4 DAT_008ebde0; extern undefined4 DAT_008ebde4;
extern undefined4 DAT_008ebde8; extern undefined4 DAT_008ebdec; extern undefined4 DAT_008ec46c; extern undefined4 DAT_008ec478;
extern undefined4 DAT_008ec538; extern undefined4 DAT_008ec53c; extern undefined4 DAT_008ec540; extern undefined4 DAT_008ec544;
extern undefined4 DAT_008ec548; extern undefined4 DAT_008ec54c; extern undefined4 DAT_008ec550;
