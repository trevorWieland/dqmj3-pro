#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890b38; extern undefined4 DAT_00890b3c; extern undefined4 DAT_00890b40; extern undefined4 DAT_00890b74;
extern undefined4 DAT_00890b78; extern undefined4 DAT_00890b7c; extern undefined4 DAT_00890bc0; extern undefined4 DAT_00891ac8;
extern undefined4 DAT_00891b60; extern undefined4 DAT_00891b64; extern undefined4 DAT_00891b68; extern undefined4 DAT_00891b69;
extern undefined4 DAT_00891b6a; extern undefined4 DAT_00891b6b; extern undefined4 DAT_00891b6c; extern undefined4 DAT_00891b70;
extern undefined4 DAT_00891b71; extern undefined4 DAT_00891b72; extern undefined4 DAT_00891b73; extern undefined4 DAT_00891b74;
extern undefined4 DAT_00891b75; extern undefined4 DAT_00891b76; extern undefined4 DAT_00891b77; extern undefined4 DAT_00891b78;
extern undefined4 DAT_00891b79; extern undefined4 DAT_00891b7a; extern undefined4 DAT_00891b7b; extern undefined4 DAT_00891b7c;
extern undefined4 DAT_00891b7d; extern undefined4 DAT_00891b7e; extern undefined4 DAT_00891b7f; extern undefined4 DAT_00891b80;
extern undefined4 DAT_00891b81; extern undefined4 DAT_00891b82; extern undefined4 DAT_00891b83; extern undefined4 DAT_00891b84;
extern undefined4 DAT_00891b85; extern undefined4 DAT_00891b86; extern undefined4 DAT_00891b87; extern undefined4 DAT_00891b88;
extern undefined4 DAT_00891b8c; extern undefined4 DAT_00891bc4; extern undefined4 DAT_00892b2c; extern undefined4 DAT_00892c30;
extern undefined4 DAT_00892c34; extern undefined4 DAT_00892c35; extern undefined4 DAT_00892c36; extern undefined4 DAT_00892c37;
extern undefined4 DAT_00892c38; extern undefined4 DAT_00892c39; extern undefined4 DAT_00892c3a; extern undefined4 DAT_00892c3b;
extern undefined4 DAT_00892c3c; extern undefined4 DAT_00892c3d; extern undefined4 DAT_00892c3e; extern undefined4 DAT_00892c3f;
extern undefined4 DAT_00892c40; extern undefined4 DAT_00892c41; extern undefined4 DAT_00892c42; extern undefined4 DAT_00892c43;
extern undefined4 DAT_00892c44; extern undefined4 DAT_00892c45; extern undefined4 DAT_00892c46; extern undefined4 DAT_00892c47;
extern undefined4 DAT_00892c48; extern undefined4 DAT_00892c49; extern undefined4 DAT_00892c4a; extern undefined4 DAT_00892c4b;
extern undefined4 DAT_00892c4c; extern undefined4 DAT_00892c4d; extern undefined4 DAT_00892c4e; extern undefined4 DAT_00892c4f;
extern undefined4 DAT_00892c50; extern undefined4 DAT_00892c51; extern undefined4 DAT_00892c52; extern undefined4 DAT_00892c53;
extern undefined4 DAT_00892c54; extern undefined4 DAT_00892c55; extern undefined4 DAT_00892c56; extern undefined4 DAT_00892c57;
extern undefined4 DAT_00892c58; extern undefined4 DAT_00892c5c; extern undefined4 DAT_00893104; extern undefined4 DAT_00893108;
extern undefined4 DAT_0089310c; extern undefined4 DAT_00893b1c; extern undefined4 DAT_00893b64; extern undefined4 DAT_008944c0;
extern undefined4 DAT_008944c4; extern undefined4 DAT_008944c8; extern undefined4 DAT_0089460c; extern undefined4 DAT_00894610;
extern undefined4 DAT_00894614; extern undefined4 DAT_00894615; extern undefined4 DAT_00894616; extern undefined4 DAT_00894617;
extern undefined4 DAT_00894618; extern undefined4 DAT_0089461c; extern undefined4 DAT_0089461d; extern undefined4 DAT_0089461e;
extern undefined4 DAT_0089461f; extern undefined4 DAT_00894620; extern undefined4 DAT_00894621; extern undefined4 DAT_00894622;
extern undefined4 DAT_00894623; extern undefined4 DAT_00894624; extern undefined4 DAT_00894625; extern undefined4 DAT_00894626;
extern undefined4 DAT_00894627; extern undefined4 DAT_00894628; extern undefined4 DAT_00894629; extern undefined4 DAT_0089462a;
extern undefined4 DAT_0089462b; extern undefined4 DAT_0089462c; extern undefined4 DAT_0089462d; extern undefined4 DAT_0089462e;
extern undefined4 DAT_0089462f; extern undefined4 DAT_00894630; extern undefined4 DAT_00894631; extern undefined4 DAT_00894632;
extern undefined4 DAT_00894633; extern undefined4 DAT_00894634; extern undefined4 DAT_00894638; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00894678; extern undefined4 DAT_00894d44; extern undefined4 DAT_00894d48; extern undefined4 DAT_00894d4c;
extern undefined4 DAT_00894d50; extern undefined4 DAT_008951bc; extern undefined4 DAT_008951cc; extern undefined4 DAT_008951d0;
extern undefined4 DAT_008951d4; extern undefined4 DAT_008951dc; extern undefined4 DAT_008953b0; extern undefined4 DAT_00896b78;
extern undefined4 DAT_00896b7c; extern undefined4 DAT_00896b80; extern undefined4 DAT_00896fcc; extern undefined4 DAT_00896fd8;
extern undefined4 DAT_00896fdc; extern undefined4 DAT_00897134; extern undefined4 DAT_0089718c; extern undefined4 DAT_00897190;
extern undefined4 DAT_00897194; extern undefined4 DAT_008971c0; extern undefined4 DAT_008971c4; extern undefined4 DAT_008971c8;
extern undefined4 DAT_00899004; extern undefined4 DAT_00899008; extern undefined4 DAT_0089900c; extern undefined4 DAT_008c811c;
extern undefined4 DAT_008c8120; extern undefined4 DAT_008c8124; extern undefined4 DAT_008c8128; extern undefined4 DAT_008c812c;
extern undefined4 DAT_008c8130; extern undefined4 DAT_008c8164; extern undefined4 DAT_008c8168; extern undefined4 DAT_008c816c;
extern undefined4 DAT_008c8170; extern undefined4 DAT_008c8174; extern undefined4 DAT_008c8178; extern undefined4 DAT_008c90dc;
extern undefined4 DAT_008c90e0; extern undefined4 DAT_008c90e4; extern undefined4 DAT_008c90e8; extern undefined4 DAT_008c90ec;
extern undefined4 DAT_008c90f0; extern undefined4 DAT_008c9c18; extern undefined4 DAT_008c9c1c; extern undefined4 DAT_008c9c20;
extern undefined4 DAT_008c9c24; extern undefined4 DAT_008c9c28; extern undefined4 DAT_008c9c2c; extern undefined4 DAT_008ca318;
extern undefined4 DAT_008ca31c; extern undefined4 DAT_008ca320; extern undefined4 DAT_008ca324; extern undefined4 DAT_008ca328;
extern undefined4 DAT_008ca32c; extern undefined4 DAT_008cb3a8; extern undefined4 DAT_008cb3ac; extern undefined4 DAT_008cb3b0;
extern undefined4 DAT_008cb3b4; extern undefined4 DAT_008cb3b8; extern undefined4 DAT_008cb3bc; extern undefined4 DAT_008cb4b0;
extern undefined4 DAT_008cb4b4; extern undefined4 DAT_008cb4b8; extern undefined4 DAT_008cb4bc; extern undefined4 DAT_008cb4c0;
extern undefined4 DAT_008cb4c4; extern undefined4 DAT_008cb828; extern undefined4 DAT_008cb82c; extern undefined4 DAT_008cb830;
extern undefined4 DAT_008cb834; extern undefined4 DAT_008cb838; extern undefined4 DAT_008cb83c; extern undefined4 DAT_008cbb64;
extern undefined4 DAT_008cbb68; extern undefined4 DAT_008cbb6c; extern undefined4 DAT_008cbb70; extern undefined4 DAT_008cbb74;
extern undefined4 DAT_008cbb78; extern undefined4 DAT_008cd024; extern undefined4 DAT_008cd028; extern undefined4 DAT_008cd02c;
extern undefined4 DAT_008cd030; extern undefined4 DAT_008cd034; extern undefined4 DAT_008cd038; extern undefined4 DAT_008cd674;
extern undefined4 DAT_008cd678; extern undefined4 DAT_008cd67c; extern undefined4 DAT_008cd680; extern undefined4 DAT_008cd684;
extern undefined4 DAT_008cd688; extern undefined4 DAT_008cd8fc; extern undefined4 DAT_008cd900; extern undefined4 DAT_008cd904;
extern undefined4 DAT_008cd908; extern undefined4 DAT_008cd90c; extern undefined4 DAT_008cd910; extern undefined4 DAT_008cd95c;
extern undefined4 DAT_008cd960; extern undefined4 DAT_008cd964; extern undefined4 DAT_008cd968; extern undefined4 DAT_008cd96c;
extern undefined4 DAT_008cd970; extern undefined4 DAT_008d13bc; extern undefined4 DAT_008d13c0; extern undefined4 DAT_008d13c4;
extern undefined4 DAT_008d13c8; extern undefined4 DAT_008d13cc; extern undefined4 DAT_008d13d0;
