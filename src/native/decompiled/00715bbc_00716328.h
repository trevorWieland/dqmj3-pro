#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_00303b10(); extern undefined4 * fn_0045503c(); extern undefined4 fn_00474678(); extern undefined4 fn_004a18ac();
extern undefined4 fn_004a1a00(); extern undefined4 fn_004b9b58(); extern undefined4 * fn_0074d720(); extern undefined4 * fn_0074da7c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0049e6d4(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004b2434(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00853418; extern undefined4 DAT_00853dcc; extern undefined4 DAT_00853e80; extern undefined4 DAT_008549c8;
extern undefined4 DAT_00855794; extern undefined4 DAT_00891a04; extern undefined4 DAT_00891a08; extern undefined4 DAT_00891a0c;
extern undefined4 DAT_00892358; extern undefined4 DAT_0089235c; extern undefined4 DAT_00892ea8; extern undefined4 DAT_00892eac;
extern undefined4 DAT_00893070; extern undefined4 DAT_00893074; extern undefined4 DAT_00893078; extern undefined4 DAT_00893b1c;
extern undefined4 DAT_00893d20; extern undefined4 DAT_00893d5c; extern undefined4 DAT_00893d60; extern undefined4 DAT_00893d64;
extern undefined4 DAT_00893d68; extern undefined4 DAT_00893d6c; extern undefined4 DAT_00894020; extern undefined4 DAT_00894038;
extern undefined4 DAT_00894058; extern undefined4 DAT_0089405c; extern undefined4 DAT_00894060; extern undefined4 DAT_00894064;
extern undefined4 DAT_0089446c; extern undefined4 DAT_00894470; extern undefined4 DAT_00894474; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00894678; extern undefined4 DAT_008951bc; extern undefined4 DAT_0089544c; extern undefined4 DAT_00895518;
extern undefined4 DAT_0089551c; extern undefined4 DAT_0089551d; extern undefined4 DAT_0089551e; extern undefined4 DAT_0089551f;
extern undefined4 DAT_00895520; extern undefined4 DAT_00895521; extern undefined4 DAT_00895522; extern undefined4 DAT_00895523;
extern undefined4 DAT_00895524; extern undefined4 DAT_00895525; extern undefined4 DAT_00895526; extern undefined4 DAT_00895527;
extern undefined4 DAT_00895528; extern undefined4 DAT_00895529; extern undefined4 DAT_0089552a; extern undefined4 DAT_0089552b;
extern undefined4 DAT_0089552c; extern undefined4 DAT_0089552d; extern undefined4 DAT_0089552e; extern undefined4 DAT_0089552f;
extern undefined4 DAT_00895530; extern undefined4 DAT_00895531; extern undefined4 DAT_00895532; extern undefined4 DAT_00895533;
extern undefined4 DAT_00895534; extern undefined4 DAT_00895535; extern undefined4 DAT_00895536; extern undefined4 DAT_00895537;
extern undefined4 DAT_00895538; extern undefined4 DAT_00895539; extern undefined4 DAT_0089553a; extern undefined4 DAT_0089553b;
extern undefined4 DAT_0089553c; extern undefined4 DAT_0089553d; extern undefined4 DAT_0089553e; extern undefined4 DAT_0089553f;
extern undefined4 DAT_00895540; extern undefined4 DAT_00895544; extern undefined4 DAT_00895b54; extern undefined4 DAT_008988d4;
extern undefined4 DAT_008988d8; extern undefined4 DAT_0089a95c; extern undefined4 DAT_0089a960; extern undefined4 DAT_0089a978;
extern undefined4 DAT_0089a980; extern undefined4 DAT_008b6400; extern undefined4 DAT_008b6508; extern undefined4 DAT_008c8fbc;
extern undefined4 DAT_008c8fc0; extern undefined4 DAT_008c8fc4; extern undefined4 DAT_008c8fc8; extern undefined4 DAT_008c8fcc;
extern undefined4 DAT_008c8fd0; extern undefined4 DAT_008c94b4; extern undefined4 DAT_008c94b8; extern undefined4 DAT_008c94bc;
extern undefined4 DAT_008c94c0; extern undefined4 DAT_008c94c4; extern undefined4 DAT_008c94c8; extern undefined4 DAT_008c9ea0;
extern undefined4 DAT_008c9ea4; extern undefined4 DAT_008c9ea8; extern undefined4 DAT_008c9eac; extern undefined4 DAT_008c9eb0;
extern undefined4 DAT_008c9eb4; extern undefined4 DAT_008ca1e0; extern undefined4 DAT_008ca1e4; extern undefined4 DAT_008ca1e8;
extern undefined4 DAT_008ca1ec; extern undefined4 DAT_008ca1f0; extern undefined4 DAT_008ca1f4; extern undefined4 DAT_008cae08;
extern undefined4 DAT_008cae0c; extern undefined4 DAT_008cae10; extern undefined4 DAT_008cae14; extern undefined4 DAT_008cae18;
extern undefined4 DAT_008cae1c; extern undefined4 DAT_008cae20; extern undefined4 DAT_008cae24; extern undefined4 DAT_008cae28;
extern undefined4 DAT_008cae2c; extern undefined4 DAT_008cae30; extern undefined4 DAT_008cae34; extern undefined4 DAT_008cafd0;
extern undefined4 DAT_008cafd4; extern undefined4 DAT_008cafd8; extern undefined4 DAT_008cafdc; extern undefined4 DAT_008cafe0;
extern undefined4 DAT_008cafe4; extern undefined4 DAT_008cb318; extern undefined4 DAT_008cb31c; extern undefined4 DAT_008cb320;
extern undefined4 DAT_008cb324; extern undefined4 DAT_008cb328; extern undefined4 DAT_008cb32c; extern undefined4 DAT_008cbf18;
extern undefined4 DAT_008cbf1c; extern undefined4 DAT_008cbf20; extern undefined4 DAT_008cbf24; extern undefined4 DAT_008cbf28;
extern undefined4 DAT_008cbf2c; extern undefined4 DAT_008d013c; extern undefined4 DAT_008d0140; extern undefined4 DAT_008d0144;
extern undefined4 DAT_008d0148; extern undefined4 DAT_008d014c; extern undefined4 DAT_008d0150; extern undefined4 DAT_008e6744;
extern undefined4 DAT_008e6838;
