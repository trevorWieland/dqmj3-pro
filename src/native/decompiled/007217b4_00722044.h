#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00892c9c; extern undefined4 DAT_00892ca0; extern undefined4 DAT_00892ffc; extern undefined4 DAT_00893000;
extern undefined4 DAT_00893b10; extern undefined4 DAT_00893b64; extern undefined4 DAT_00893b70; extern undefined4 DAT_00893fbc;
extern undefined4 DAT_00893fc0; extern undefined4 DAT_00893fc4; extern undefined4 DAT_00893fc5; extern undefined4 DAT_00893fc6;
extern undefined4 DAT_00893fc7; extern undefined4 DAT_00893fc8; extern undefined4 DAT_00893fcc; extern undefined4 DAT_00893fcd;
extern undefined4 DAT_00893fce; extern undefined4 DAT_00893fcf; extern undefined4 DAT_00893fd0; extern undefined4 DAT_00893fd1;
extern undefined4 DAT_00893fd2; extern undefined4 DAT_00893fd3; extern undefined4 DAT_00893fd4; extern undefined4 DAT_00893fd5;
extern undefined4 DAT_00893fd6; extern undefined4 DAT_00893fd7; extern undefined4 DAT_00893fd8; extern undefined4 DAT_00893fd9;
extern undefined4 DAT_00893fda; extern undefined4 DAT_00893fdb; extern undefined4 DAT_00893fdc; extern undefined4 DAT_00893fdd;
extern undefined4 DAT_00893fde; extern undefined4 DAT_00893fdf; extern undefined4 DAT_00893fe0; extern undefined4 DAT_00893fe1;
extern undefined4 DAT_00893fe2; extern undefined4 DAT_00893fe3; extern undefined4 DAT_00893fe4; extern undefined4 DAT_00893fe5;
extern undefined4 DAT_00893fe6; extern undefined4 DAT_00893fe7; extern undefined4 DAT_00893fe8; extern undefined4 DAT_00893fec;
extern undefined4 DAT_00894484; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894cbc; extern undefined4 DAT_00894cc0;
extern undefined4 DAT_00894cc4; extern undefined4 DAT_008951f0; extern undefined4 DAT_008951fc; extern undefined4 DAT_0089522c;
extern undefined4 DAT_00895230; extern undefined4 DAT_00895234; extern undefined4 DAT_00895280; extern undefined4 DAT_00895284;
extern undefined4 DAT_00895288; extern undefined4 DAT_00895804; extern undefined4 DAT_00895834; extern undefined4 DAT_00895838;
extern undefined4 DAT_0089583c; extern undefined4 DAT_008959f0; extern undefined4 DAT_00895a04; extern undefined4 DAT_00895a08;
extern undefined4 DAT_00895ec4; extern undefined4 DAT_00895ec8; extern undefined4 DAT_00895ecc; extern undefined4 DAT_00896468;
extern undefined4 DAT_00896484; extern undefined4 DAT_00896488; extern undefined4 DAT_008964b0; extern undefined4 DAT_008964b4;
extern undefined4 DAT_008968a8; extern undefined4 DAT_008968ac; extern undefined4 DAT_008968b0; extern undefined4 DAT_00896ba0;
extern undefined4 DAT_00896ba4; extern undefined4 DAT_00896ba8; extern undefined4 DAT_00896bd4; extern undefined4 DAT_00896bd8;
extern undefined4 DAT_00896bdc; extern undefined4 DAT_00897008; extern undefined4 DAT_00897010; extern undefined4 DAT_00897014;
extern undefined4 DAT_00897018; extern undefined4 DAT_00897110; extern undefined4 DAT_00897114; extern undefined4 DAT_00897118;
extern undefined4 DAT_00897134; extern undefined4 DAT_00897244; extern undefined4 DAT_00897248; extern undefined4 DAT_0089724c;
extern undefined4 DAT_008c9ca8; extern undefined4 DAT_008c9cac; extern undefined4 DAT_008c9cb0; extern undefined4 DAT_008c9cb4;
extern undefined4 DAT_008c9cb8; extern undefined4 DAT_008c9cbc; extern undefined4 DAT_008ca108; extern undefined4 DAT_008ca10c;
extern undefined4 DAT_008ca110; extern undefined4 DAT_008ca114; extern undefined4 DAT_008ca118; extern undefined4 DAT_008ca11c;
extern undefined4 DAT_008ca120; extern undefined4 DAT_008ca124; extern undefined4 DAT_008ca128; extern undefined4 DAT_008ca12c;
extern undefined4 DAT_008ca130; extern undefined4 DAT_008ca134; extern undefined4 DAT_008caf70; extern undefined4 DAT_008caf74;
extern undefined4 DAT_008caf78; extern undefined4 DAT_008caf7c; extern undefined4 DAT_008caf80; extern undefined4 DAT_008caf84;
extern undefined4 DAT_008cb798; extern undefined4 DAT_008cb79c; extern undefined4 DAT_008cb7a0; extern undefined4 DAT_008cb7a4;
extern undefined4 DAT_008cb7a8; extern undefined4 DAT_008cb7ac; extern undefined4 DAT_008cbc00; extern undefined4 DAT_008cbc04;
extern undefined4 DAT_008cbc08; extern undefined4 DAT_008cbc0c; extern undefined4 DAT_008cbc10; extern undefined4 DAT_008cbc14;
extern undefined4 DAT_008cbc78; extern undefined4 DAT_008cbc7c; extern undefined4 DAT_008cbc80; extern undefined4 DAT_008cbc84;
extern undefined4 DAT_008cbc88; extern undefined4 DAT_008cbc8c; extern undefined4 DAT_008cc0e0; extern undefined4 DAT_008cc0e4;
extern undefined4 DAT_008cc0e8; extern undefined4 DAT_008cc0ec; extern undefined4 DAT_008cc0f0; extern undefined4 DAT_008cc0f4;
extern undefined4 DAT_008cc1d0; extern undefined4 DAT_008cc1d4; extern undefined4 DAT_008cc1d8; extern undefined4 DAT_008cc1dc;
extern undefined4 DAT_008cc1e0; extern undefined4 DAT_008cc1e4; extern undefined4 DAT_008cc64c; extern undefined4 DAT_008cc650;
extern undefined4 DAT_008cc654; extern undefined4 DAT_008cc658; extern undefined4 DAT_008cc65c; extern undefined4 DAT_008cc660;
extern undefined4 DAT_008cca18; extern undefined4 DAT_008cca1c; extern undefined4 DAT_008cca20; extern undefined4 DAT_008cca24;
extern undefined4 DAT_008cca28; extern undefined4 DAT_008cca2c; extern undefined4 DAT_008cca48; extern undefined4 DAT_008cca4c;
extern undefined4 DAT_008cca50; extern undefined4 DAT_008cca54; extern undefined4 DAT_008cca58; extern undefined4 DAT_008cca5c;
extern undefined4 DAT_008ccdc0; extern undefined4 DAT_008ccdc4; extern undefined4 DAT_008ccdc8; extern undefined4 DAT_008ccdcc;
extern undefined4 DAT_008ccdd0; extern undefined4 DAT_008ccdd4; extern undefined4 DAT_008cd054; extern undefined4 DAT_008cd058;
extern undefined4 DAT_008cd05c; extern undefined4 DAT_008cd060; extern undefined4 DAT_008cd064; extern undefined4 DAT_008cd068;
extern undefined4 DAT_008cd084; extern undefined4 DAT_008cd088; extern undefined4 DAT_008cd08c; extern undefined4 DAT_008cd090;
extern undefined4 DAT_008cd094; extern undefined4 DAT_008cd098; extern undefined4 DAT_008cd6bc; extern undefined4 DAT_008cd6c0;
extern undefined4 DAT_008cd6c4; extern undefined4 DAT_008cd6c8; extern undefined4 DAT_008cd6cc; extern undefined4 DAT_008cd6d0;
extern undefined4 DAT_008cd80c; extern undefined4 DAT_008cd810; extern undefined4 DAT_008cd814; extern undefined4 DAT_008cd818;
extern undefined4 DAT_008cd81c; extern undefined4 DAT_008cd820; extern undefined4 DAT_008cd9d4; extern undefined4 DAT_008cd9d8;
extern undefined4 DAT_008cd9dc; extern undefined4 DAT_008cd9e0; extern undefined4 DAT_008cd9e4; extern undefined4 DAT_008cd9e8;
