#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_004f0ce8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890680; extern undefined4 DAT_00890684; extern undefined4 DAT_008907a0; extern undefined4 DAT_008907a4;
extern undefined4 DAT_008907a8; extern undefined4 DAT_00892cf0; extern undefined4 DAT_00893b10; extern undefined4 DAT_00893b3c;
extern undefined4 DAT_00893b64; extern undefined4 DAT_00894564; extern undefined4 DAT_00894568; extern undefined4 DAT_0089456c;
extern undefined4 DAT_0089456d; extern undefined4 DAT_0089456e; extern undefined4 DAT_0089456f; extern undefined4 DAT_00894570;
extern undefined4 DAT_00894574; extern undefined4 DAT_00894575; extern undefined4 DAT_00894576; extern undefined4 DAT_00894577;
extern undefined4 DAT_00894578; extern undefined4 DAT_00894579; extern undefined4 DAT_0089457a; extern undefined4 DAT_0089457b;
extern undefined4 DAT_0089457c; extern undefined4 DAT_0089457d; extern undefined4 DAT_0089457e; extern undefined4 DAT_0089457f;
extern undefined4 DAT_00894580; extern undefined4 DAT_00894581; extern undefined4 DAT_00894582; extern undefined4 DAT_00894583;
extern undefined4 DAT_00894584; extern undefined4 DAT_00894585; extern undefined4 DAT_00894586; extern undefined4 DAT_00894587;
extern undefined4 DAT_00894588; extern undefined4 DAT_00894589; extern undefined4 DAT_0089458a; extern undefined4 DAT_0089458b;
extern undefined4 DAT_008945ac; extern undefined4 DAT_008945b0; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678;
extern undefined4 DAT_00894b90; extern undefined4 DAT_00894b94; extern undefined4 DAT_00894b98; extern undefined4 DAT_00894cfc;
extern undefined4 DAT_00894cfd; extern undefined4 DAT_00894cfe; extern undefined4 DAT_00894cff; extern undefined4 DAT_00894d00;
extern undefined4 DAT_00894d01; extern undefined4 DAT_00894d02; extern undefined4 DAT_00894d03; extern undefined4 DAT_00894d04;
extern undefined4 DAT_00894d05; extern undefined4 DAT_00894d06; extern undefined4 DAT_00894d07; extern undefined4 DAT_00894d08;
extern undefined4 DAT_00894d09; extern undefined4 DAT_00894d0a; extern undefined4 DAT_00894d0b; extern undefined4 DAT_00894d0c;
extern undefined4 DAT_00894d0d; extern undefined4 DAT_00894d0e; extern undefined4 DAT_00894d0f; extern undefined4 DAT_00894d10;
extern undefined4 DAT_00894d11; extern undefined4 DAT_00894d12; extern undefined4 DAT_00894d13; extern undefined4 DAT_00894d14;
extern undefined4 DAT_00894d15; extern undefined4 DAT_00894d16; extern undefined4 DAT_00894d17; extern undefined4 DAT_00894d18;
extern undefined4 DAT_00894d19; extern undefined4 DAT_00894d1a; extern undefined4 DAT_00894d1b; extern undefined4 DAT_00894d1c;
extern undefined4 DAT_00894d1d; extern undefined4 DAT_00894d1e; extern undefined4 DAT_00894d1f; extern undefined4 DAT_00894d20;
extern undefined4 DAT_00894d24; extern undefined4 DAT_008951fc; extern undefined4 DAT_00895238; extern undefined4 DAT_0089523c;
extern undefined4 DAT_00895240; extern undefined4 DAT_00896730; extern undefined4 DAT_00896734; extern undefined4 DAT_00896738;
extern undefined4 DAT_008968e0; extern undefined4 DAT_008968e4; extern undefined4 DAT_008968e8; extern undefined4 DAT_00896bb4;
extern undefined4 DAT_00896bb8; extern undefined4 DAT_00896bbc; extern undefined4 DAT_00896f90; extern undefined4 DAT_00896f94;
extern undefined4 DAT_00896f98; extern undefined4 DAT_00896ffc; extern undefined4 DAT_00897000; extern undefined4 DAT_00897004;
extern undefined4 DAT_00897104; extern undefined4 DAT_00897108; extern undefined4 DAT_0089710c; extern undefined4 DAT_008971fc;
extern undefined4 DAT_00897200; extern undefined4 DAT_00897204; extern undefined4 DAT_00899020; extern undefined4 DAT_00899024;
extern undefined4 DAT_00899028; extern undefined4 DAT_00899204; extern undefined4 DAT_00899210; extern undefined4 DAT_00899214;
extern undefined4 DAT_008c0698; extern undefined4 DAT_008c069c; extern undefined4 DAT_008c79ec; extern undefined4 DAT_008c79f0;
extern undefined4 DAT_008c79f4; extern undefined4 DAT_008c79f8; extern undefined4 DAT_008c79fc; extern undefined4 DAT_008c7a00;
extern undefined4 DAT_008c7cac; extern undefined4 DAT_008c7cb0; extern undefined4 DAT_008c7cb4; extern undefined4 DAT_008c7cb8;
extern undefined4 DAT_008c7cbc; extern undefined4 DAT_008c7cc0; extern undefined4 DAT_008cb450; extern undefined4 DAT_008cb454;
extern undefined4 DAT_008cb458; extern undefined4 DAT_008cb45c; extern undefined4 DAT_008cb460; extern undefined4 DAT_008cb464;
extern undefined4 DAT_008cb660; extern undefined4 DAT_008cb664; extern undefined4 DAT_008cb668; extern undefined4 DAT_008cb66c;
extern undefined4 DAT_008cb670; extern undefined4 DAT_008cb674; extern undefined4 DAT_008cb7e0; extern undefined4 DAT_008cb7e4;
extern undefined4 DAT_008cb7e8; extern undefined4 DAT_008cb7ec; extern undefined4 DAT_008cb7f0; extern undefined4 DAT_008cb7f4;
extern undefined4 DAT_008cbc18; extern undefined4 DAT_008cbc1c; extern undefined4 DAT_008cbc20; extern undefined4 DAT_008cbc24;
extern undefined4 DAT_008cbc28; extern undefined4 DAT_008cbc2c; extern undefined4 DAT_008ccc58; extern undefined4 DAT_008ccc5c;
extern undefined4 DAT_008ccc60; extern undefined4 DAT_008ccc64; extern undefined4 DAT_008ccc68; extern undefined4 DAT_008ccc6c;
extern undefined4 DAT_008cce20; extern undefined4 DAT_008cce24; extern undefined4 DAT_008cce28; extern undefined4 DAT_008cce2c;
extern undefined4 DAT_008cce30; extern undefined4 DAT_008cce34; extern undefined4 DAT_008cd06c; extern undefined4 DAT_008cd070;
extern undefined4 DAT_008cd074; extern undefined4 DAT_008cd078; extern undefined4 DAT_008cd07c; extern undefined4 DAT_008cd080;
extern undefined4 DAT_008cd614; extern undefined4 DAT_008cd618; extern undefined4 DAT_008cd61c; extern undefined4 DAT_008cd620;
extern undefined4 DAT_008cd624; extern undefined4 DAT_008cd628; extern undefined4 DAT_008cd6a4; extern undefined4 DAT_008cd6a8;
extern undefined4 DAT_008cd6ac; extern undefined4 DAT_008cd6b0; extern undefined4 DAT_008cd6b4; extern undefined4 DAT_008cd6b8;
extern undefined4 DAT_008cd7f4; extern undefined4 DAT_008cd7f8; extern undefined4 DAT_008cd7fc; extern undefined4 DAT_008cd800;
extern undefined4 DAT_008cd804; extern undefined4 DAT_008cd808; extern undefined4 DAT_008cd98c; extern undefined4 DAT_008cd990;
extern undefined4 DAT_008cd994; extern undefined4 DAT_008cd998; extern undefined4 DAT_008cd99c; extern undefined4 DAT_008cd9a0;
extern undefined4 DAT_008d13d4; extern undefined4 DAT_008d13d8; extern undefined4 DAT_008d13dc; extern undefined4 DAT_008d13e0;
extern undefined4 DAT_008d13e4; extern undefined4 DAT_008d13e8; extern undefined4 DAT_008d16ec; extern undefined4 DAT_008d16f0;
extern undefined4 DAT_008d16f4; extern undefined4 DAT_008d16f8; extern undefined4 DAT_008d16fc; extern undefined4 DAT_008d1700;
