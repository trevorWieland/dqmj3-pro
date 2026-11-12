#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_00303b10(); extern undefined4 * fn_0045503c(); extern undefined4 fn_00474678(); extern undefined4 fn_004a18ac();
extern undefined4 fn_004a1a00(); extern undefined4 * fn_0074dbdc();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004b2dcc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00853418; extern undefined4 DAT_00853ec8; extern undefined4 DAT_0085580c; extern undefined4 DAT_00890a28;
extern undefined4 DAT_00890a2c; extern undefined4 DAT_00890a30; extern undefined4 DAT_00890fe0; extern undefined4 DAT_00890fe4;
extern undefined4 DAT_00890fe8; extern undefined4 DAT_00891a80; extern undefined4 DAT_00891a84; extern undefined4 DAT_00891a88;
extern undefined4 DAT_00891c84; extern undefined4 DAT_00891c88; extern undefined4 DAT_00891c8c; extern undefined4 DAT_00892ba0;
extern undefined4 DAT_00892ba4; extern undefined4 DAT_00892ba8; extern undefined4 DAT_00892bac; extern undefined4 DAT_00892bb0;
extern undefined4 DAT_00892bb1; extern undefined4 DAT_00892bb2; extern undefined4 DAT_00892bb3; extern undefined4 DAT_00892bb4;
extern undefined4 DAT_00892bb5; extern undefined4 DAT_00892bb6; extern undefined4 DAT_00892bb7; extern undefined4 DAT_00892bb8;
extern undefined4 DAT_00892bb9; extern undefined4 DAT_00892bba; extern undefined4 DAT_00892bbb; extern undefined4 DAT_00892bbc;
extern undefined4 DAT_00892bbd; extern undefined4 DAT_00892bbe; extern undefined4 DAT_00892bbf; extern undefined4 DAT_00892bc0;
extern undefined4 DAT_00892bc1; extern undefined4 DAT_00892bc2; extern undefined4 DAT_00892bc3; extern undefined4 DAT_00892bc4;
extern undefined4 DAT_00892bc5; extern undefined4 DAT_00892bc6; extern undefined4 DAT_00892bc7; extern undefined4 DAT_00892bc8;
extern undefined4 DAT_00892bc9; extern undefined4 DAT_00892bca; extern undefined4 DAT_00892bcb; extern undefined4 DAT_00892bcc;
extern undefined4 DAT_00892bcd; extern undefined4 DAT_00892bce; extern undefined4 DAT_00892bcf; extern undefined4 DAT_00892bd0;
extern undefined4 DAT_00892bd1; extern undefined4 DAT_00892bd2; extern undefined4 DAT_00892bd3; extern undefined4 DAT_00892bd4;
extern undefined4 DAT_00892bd8; extern undefined4 DAT_00892f98; extern undefined4 DAT_00892fa4; extern undefined4 DAT_00892fa8;
extern undefined4 DAT_0089300c; extern undefined4 DAT_008939c0; extern undefined4 DAT_008939cc; extern undefined4 DAT_008939d0;
extern undefined4 DAT_008939d4; extern undefined4 DAT_00893a00; extern undefined4 DAT_00893a04; extern undefined4 DAT_00893a08;
extern undefined4 DAT_00893b1c; extern undefined4 DAT_00893b64; extern undefined4 DAT_00893ddc; extern undefined4 DAT_00893de0;
extern undefined4 DAT_00893de4; extern undefined4 DAT_00893f1c; extern undefined4 DAT_00893f20; extern undefined4 DAT_00893f21;
extern undefined4 DAT_00893f22; extern undefined4 DAT_00893f23; extern undefined4 DAT_00893f24; extern undefined4 DAT_00893f25;
extern undefined4 DAT_00893f26; extern undefined4 DAT_00893f27; extern undefined4 DAT_00893f28; extern undefined4 DAT_00893f29;
extern undefined4 DAT_00893f2a; extern undefined4 DAT_00893f2b; extern undefined4 DAT_00893f2c; extern undefined4 DAT_00893f2d;
extern undefined4 DAT_00893f2e; extern undefined4 DAT_00893f2f; extern undefined4 DAT_00893f30; extern undefined4 DAT_00893f31;
extern undefined4 DAT_00893f32; extern undefined4 DAT_00893f33; extern undefined4 DAT_00893f34; extern undefined4 DAT_00893f35;
extern undefined4 DAT_00893f36; extern undefined4 DAT_00893f37; extern undefined4 DAT_00893f38; extern undefined4 DAT_00893f39;
extern undefined4 DAT_00893f3a; extern undefined4 DAT_00893f3b; extern undefined4 DAT_00893f3c; extern undefined4 DAT_00893f3d;
extern undefined4 DAT_00893f3e; extern undefined4 DAT_00893f3f; extern undefined4 DAT_00893f40; extern undefined4 DAT_00893f41;
extern undefined4 DAT_00893f42; extern undefined4 DAT_00893f43; extern undefined4 DAT_00893f44; extern undefined4 DAT_00893f45;
extern undefined4 DAT_00893f46; extern undefined4 DAT_00893f47; extern undefined4 DAT_00893f50; extern undefined4 DAT_00893f54;
extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678; extern undefined4 DAT_00894b30; extern undefined4 DAT_008951c0;
extern undefined4 DAT_008951fc; extern undefined4 DAT_00895334; extern undefined4 DAT_00895de0; extern undefined4 DAT_00895de4;
extern undefined4 DAT_00895de8; extern undefined4 DAT_008963d8; extern undefined4 DAT_008b6400; extern undefined4 DAT_008b6508;
extern undefined4 DAT_008c7fcc; extern undefined4 DAT_008c7fd0; extern undefined4 DAT_008c7fd4; extern undefined4 DAT_008c7fd8;
extern undefined4 DAT_008c7fdc; extern undefined4 DAT_008c7fe0; extern undefined4 DAT_008c850c; extern undefined4 DAT_008c8510;
extern undefined4 DAT_008c8514; extern undefined4 DAT_008c8518; extern undefined4 DAT_008c851c; extern undefined4 DAT_008c8520;
extern undefined4 DAT_008c904c; extern undefined4 DAT_008c9050; extern undefined4 DAT_008c9054; extern undefined4 DAT_008c9058;
extern undefined4 DAT_008c905c; extern undefined4 DAT_008c9060; extern undefined4 DAT_008c9154; extern undefined4 DAT_008c9158;
extern undefined4 DAT_008c915c; extern undefined4 DAT_008c9160; extern undefined4 DAT_008c9164; extern undefined4 DAT_008c9168;
extern undefined4 DAT_008c9ba0; extern undefined4 DAT_008c9ba4; extern undefined4 DAT_008c9ba8; extern undefined4 DAT_008c9bac;
extern undefined4 DAT_008c9bb0; extern undefined4 DAT_008c9bb4; extern undefined4 DAT_008c9bb8; extern undefined4 DAT_008c9bbc;
extern undefined4 DAT_008c9bc0; extern undefined4 DAT_008c9bc4; extern undefined4 DAT_008c9bc8; extern undefined4 DAT_008c9bcc;
extern undefined4 DAT_008ca048; extern undefined4 DAT_008ca04c; extern undefined4 DAT_008ca050; extern undefined4 DAT_008ca054;
extern undefined4 DAT_008ca058; extern undefined4 DAT_008ca05c; extern undefined4 DAT_008caa08; extern undefined4 DAT_008caa0c;
extern undefined4 DAT_008caa10; extern undefined4 DAT_008caa14; extern undefined4 DAT_008caa18; extern undefined4 DAT_008caa1c;
extern undefined4 DAT_008caa68; extern undefined4 DAT_008caa6c; extern undefined4 DAT_008caa70; extern undefined4 DAT_008caa74;
extern undefined4 DAT_008caa78; extern undefined4 DAT_008caa7c; extern undefined4 DAT_008cae80; extern undefined4 DAT_008cae84;
extern undefined4 DAT_008cae88; extern undefined4 DAT_008cae8c; extern undefined4 DAT_008cae90; extern undefined4 DAT_008cae94;
extern undefined4 DAT_008caf40; extern undefined4 DAT_008caf44; extern undefined4 DAT_008caf48; extern undefined4 DAT_008caf4c;
extern undefined4 DAT_008caf50; extern undefined4 DAT_008caf54; extern undefined4 DAT_008cc5bc; extern undefined4 DAT_008cc5c0;
extern undefined4 DAT_008cc5c4; extern undefined4 DAT_008cc5c8; extern undefined4 DAT_008cc5cc; extern undefined4 DAT_008cc5d0;
extern undefined4 DAT_008ed7ec;
