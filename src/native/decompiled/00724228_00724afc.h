#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00892b58; extern undefined4 DAT_00892b5c; extern undefined4 DAT_00892b60; extern undefined4 DAT_00892c6c;
extern undefined4 DAT_00892c70; extern undefined4 DAT_00892c74; extern undefined4 DAT_00892ca4; extern undefined4 DAT_00892ca8;
extern undefined4 DAT_00892cac; extern undefined4 DAT_00892f8c; extern undefined4 DAT_00892f90; extern undefined4 DAT_00892f94;
extern undefined4 DAT_0089314c; extern undefined4 DAT_00893150; extern undefined4 DAT_00893b64; extern undefined4 DAT_00894460;
extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678; extern undefined4 DAT_00894694; extern undefined4 DAT_00894698;
extern undefined4 DAT_0089469c; extern undefined4 DAT_008951fc; extern undefined4 DAT_00895318; extern undefined4 DAT_00895458;
extern undefined4 DAT_00895bcc; extern undefined4 DAT_00897028; extern undefined4 DAT_0089702c; extern undefined4 DAT_00897030;
extern undefined4 DAT_008970ac; extern undefined4 DAT_008970b0; extern undefined4 DAT_008970b4; extern undefined4 DAT_008970b5;
extern undefined4 DAT_008970b6; extern undefined4 DAT_008970b7; extern undefined4 DAT_008970b8; extern undefined4 DAT_008970bc;
extern undefined4 DAT_008970bd; extern undefined4 DAT_008970be; extern undefined4 DAT_008970bf; extern undefined4 DAT_008970c0;
extern undefined4 DAT_008970c1; extern undefined4 DAT_008970c2; extern undefined4 DAT_008970c3; extern undefined4 DAT_008970c4;
extern undefined4 DAT_008970c5; extern undefined4 DAT_008970c6; extern undefined4 DAT_008970c7; extern undefined4 DAT_008970c8;
extern undefined4 DAT_008970c9; extern undefined4 DAT_008970ca; extern undefined4 DAT_008970cb; extern undefined4 DAT_008970cc;
extern undefined4 DAT_008970cd; extern undefined4 DAT_008970ce; extern undefined4 DAT_008970cf; extern undefined4 DAT_008970d0;
extern undefined4 DAT_008970d1; extern undefined4 DAT_008970d2; extern undefined4 DAT_008970d3; extern undefined4 DAT_008970d4;
extern undefined4 DAT_008970d8; extern undefined4 DAT_008970e8; extern undefined4 DAT_008970ec; extern undefined4 DAT_008970f0;
extern undefined4 DAT_00897134; extern undefined4 DAT_0089715c; extern undefined4 DAT_00897160; extern undefined4 DAT_00897164;
extern undefined4 DAT_00899068; extern undefined4 DAT_0089906c; extern undefined4 DAT_00899070; extern undefined4 DAT_00899074;
extern undefined4 DAT_00899078; extern undefined4 DAT_0089907c; extern undefined4 DAT_008990d4; extern undefined4 DAT_008990d8;
extern undefined4 DAT_008990dc; extern undefined4 DAT_008990f4; extern undefined4 DAT_008990f8; extern undefined4 DAT_008990fc;
extern undefined4 DAT_00899140; extern undefined4 DAT_00899144; extern undefined4 DAT_00899148; extern undefined4 DAT_008991dc;
extern undefined4 DAT_008991e0; extern undefined4 DAT_008991e4; extern undefined4 DAT_008991ec; extern undefined4 DAT_008991f0;
extern undefined4 DAT_008991f4; extern undefined4 DAT_008991f8; extern undefined4 DAT_008991fc; extern undefined4 DAT_00899200;
extern undefined4 DAT_008c9b58; extern undefined4 DAT_008c9b5c; extern undefined4 DAT_008c9b60; extern undefined4 DAT_008c9b64;
extern undefined4 DAT_008c9b68; extern undefined4 DAT_008c9b6c; extern undefined4 DAT_008c9c48; extern undefined4 DAT_008c9c4c;
extern undefined4 DAT_008c9c50; extern undefined4 DAT_008c9c54; extern undefined4 DAT_008c9c58; extern undefined4 DAT_008c9c5c;
extern undefined4 DAT_008c9cc0; extern undefined4 DAT_008c9cc4; extern undefined4 DAT_008c9cc8; extern undefined4 DAT_008c9ccc;
extern undefined4 DAT_008c9cd0; extern undefined4 DAT_008c9cd4; extern undefined4 DAT_008ca030; extern undefined4 DAT_008ca034;
extern undefined4 DAT_008ca038; extern undefined4 DAT_008ca03c; extern undefined4 DAT_008ca040; extern undefined4 DAT_008ca044;
extern undefined4 DAT_008ca3c0; extern undefined4 DAT_008ca3c4; extern undefined4 DAT_008ca3c8; extern undefined4 DAT_008ca3cc;
extern undefined4 DAT_008ca3d0; extern undefined4 DAT_008ca3d4; extern undefined4 DAT_008cb558; extern undefined4 DAT_008cb55c;
extern undefined4 DAT_008cb560; extern undefined4 DAT_008cb564; extern undefined4 DAT_008cb568; extern undefined4 DAT_008cb56c;
extern undefined4 DAT_008cd6ec; extern undefined4 DAT_008cd6f0; extern undefined4 DAT_008cd6f4; extern undefined4 DAT_008cd6f8;
extern undefined4 DAT_008cd6fc; extern undefined4 DAT_008cd700; extern undefined4 DAT_008cd794; extern undefined4 DAT_008cd798;
extern undefined4 DAT_008cd79c; extern undefined4 DAT_008cd7a0; extern undefined4 DAT_008cd7a4; extern undefined4 DAT_008cd7a8;
extern undefined4 DAT_008cd7c4; extern undefined4 DAT_008cd7c8; extern undefined4 DAT_008cd7cc; extern undefined4 DAT_008cd7d0;
extern undefined4 DAT_008cd7d4; extern undefined4 DAT_008cd7d8; extern undefined4 DAT_008cd89c; extern undefined4 DAT_008cd8a0;
extern undefined4 DAT_008cd8a4; extern undefined4 DAT_008cd8a8; extern undefined4 DAT_008cd8ac; extern undefined4 DAT_008cd8b0;
extern undefined4 DAT_008d1464; extern undefined4 DAT_008d1468; extern undefined4 DAT_008d146c; extern undefined4 DAT_008d1470;
extern undefined4 DAT_008d1474; extern undefined4 DAT_008d1478; extern undefined4 DAT_008d147c; extern undefined4 DAT_008d1480;
extern undefined4 DAT_008d1484; extern undefined4 DAT_008d1488; extern undefined4 DAT_008d148c; extern undefined4 DAT_008d1490;
extern undefined4 DAT_008d1524; extern undefined4 DAT_008d1528; extern undefined4 DAT_008d152c; extern undefined4 DAT_008d1530;
extern undefined4 DAT_008d1534; extern undefined4 DAT_008d1538; extern undefined4 DAT_008d1554; extern undefined4 DAT_008d1558;
extern undefined4 DAT_008d155c; extern undefined4 DAT_008d1560; extern undefined4 DAT_008d1564; extern undefined4 DAT_008d1568;
extern undefined4 DAT_008d15cc; extern undefined4 DAT_008d15d0; extern undefined4 DAT_008d15d4; extern undefined4 DAT_008d15d8;
extern undefined4 DAT_008d15dc; extern undefined4 DAT_008d15e0; extern undefined4 DAT_008d16a4; extern undefined4 DAT_008d16a8;
extern undefined4 DAT_008d16ac; extern undefined4 DAT_008d16b0; extern undefined4 DAT_008d16b4; extern undefined4 DAT_008d16b8;
extern undefined4 DAT_008d16bc; extern undefined4 DAT_008d16c0; extern undefined4 DAT_008d16c4; extern undefined4 DAT_008d16c8;
extern undefined4 DAT_008d16cc; extern undefined4 DAT_008d16d0; extern undefined4 DAT_008d16d4; extern undefined4 DAT_008d16d8;
extern undefined4 DAT_008d16dc; extern undefined4 DAT_008d16e0; extern undefined4 DAT_008d16e4; extern undefined4 DAT_008d16e8;
