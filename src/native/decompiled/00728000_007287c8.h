#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890c8c; extern undefined4 DAT_00890d2c; extern undefined4 DAT_00890d30; extern undefined4 DAT_00890d34;
extern undefined4 DAT_00890d35; extern undefined4 DAT_00890d36; extern undefined4 DAT_00890d37; extern undefined4 DAT_00890d38;
extern undefined4 DAT_00890d3c; extern undefined4 DAT_00890d3d; extern undefined4 DAT_00890d3e; extern undefined4 DAT_00890d3f;
extern undefined4 DAT_00890d40; extern undefined4 DAT_00890d41; extern undefined4 DAT_00890d42; extern undefined4 DAT_00890d43;
extern undefined4 DAT_00890d44; extern undefined4 DAT_00890d45; extern undefined4 DAT_00890d46; extern undefined4 DAT_00890d47;
extern undefined4 DAT_00890d48; extern undefined4 DAT_00890d49; extern undefined4 DAT_00890d4a; extern undefined4 DAT_00890d4b;
extern undefined4 DAT_00890d4c; extern undefined4 DAT_00890d4d; extern undefined4 DAT_00890d4e; extern undefined4 DAT_00890d4f;
extern undefined4 DAT_00890d50; extern undefined4 DAT_00890d51; extern undefined4 DAT_00890d52; extern undefined4 DAT_00890d53;
extern undefined4 DAT_00890d54; extern undefined4 DAT_00890d58; extern undefined4 DAT_00893b10; extern undefined4 DAT_00893b64;
extern undefined4 DAT_008944cc; extern undefined4 DAT_008944d0; extern undefined4 DAT_008944d4; extern undefined4 DAT_00894644;
extern undefined4 DAT_00894648; extern undefined4 DAT_0089464c; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678;
extern undefined4 DAT_00897134; extern undefined4 DAT_00897174; extern undefined4 DAT_00897178; extern undefined4 DAT_0089717c;
extern undefined4 DAT_0089718c; extern undefined4 DAT_008971bc; extern undefined4 DAT_00898cf8; extern undefined4 DAT_00898cfc;
extern undefined4 DAT_00898cfd; extern undefined4 DAT_00898cfe; extern undefined4 DAT_00898cff; extern undefined4 DAT_00898d00;
extern undefined4 DAT_00898d01; extern undefined4 DAT_00898d02; extern undefined4 DAT_00898d03; extern undefined4 DAT_00898d04;
extern undefined4 DAT_00898d05; extern undefined4 DAT_00898d06; extern undefined4 DAT_00898d07; extern undefined4 DAT_00898d08;
extern undefined4 DAT_00898d09; extern undefined4 DAT_00898d0a; extern undefined4 DAT_00898d0b; extern undefined4 DAT_00898d0c;
extern undefined4 DAT_00898d0d; extern undefined4 DAT_00898d0e; extern undefined4 DAT_00898d0f; extern undefined4 DAT_00898d10;
extern undefined4 DAT_00898d11; extern undefined4 DAT_00898d12; extern undefined4 DAT_00898d13; extern undefined4 DAT_00898d14;
extern undefined4 DAT_00898d15; extern undefined4 DAT_00898d16; extern undefined4 DAT_00898d17; extern undefined4 DAT_00898d18;
extern undefined4 DAT_00898d19; extern undefined4 DAT_00898d1a; extern undefined4 DAT_00898d1b; extern undefined4 DAT_00898d1c;
extern undefined4 DAT_00898d1d; extern undefined4 DAT_00898d1e; extern undefined4 DAT_00898d1f; extern undefined4 DAT_00898d20;
extern undefined4 DAT_00898d24; extern undefined4 DAT_00898d34; extern undefined4 DAT_00898d38; extern undefined4 DAT_00898d39;
extern undefined4 DAT_00898d3a; extern undefined4 DAT_00898d3b; extern undefined4 DAT_00898d3c; extern undefined4 DAT_00898d3d;
extern undefined4 DAT_00898d3e; extern undefined4 DAT_00898d3f; extern undefined4 DAT_00898d40; extern undefined4 DAT_00898d41;
extern undefined4 DAT_00898d42; extern undefined4 DAT_00898d43; extern undefined4 DAT_00898d44; extern undefined4 DAT_00898d45;
extern undefined4 DAT_00898d46; extern undefined4 DAT_00898d47; extern undefined4 DAT_00898d48; extern undefined4 DAT_00898d49;
extern undefined4 DAT_00898d4a; extern undefined4 DAT_00898d4b; extern undefined4 DAT_00898d4c; extern undefined4 DAT_00898d4d;
extern undefined4 DAT_00898d4e; extern undefined4 DAT_00898d4f; extern undefined4 DAT_00898d50; extern undefined4 DAT_00898d51;
extern undefined4 DAT_00898d52; extern undefined4 DAT_00898d53; extern undefined4 DAT_00898d54; extern undefined4 DAT_00898d55;
extern undefined4 DAT_00898d56; extern undefined4 DAT_00898d57; extern undefined4 DAT_00898d58; extern undefined4 DAT_00898d59;
extern undefined4 DAT_00898d5a; extern undefined4 DAT_00898d5b; extern undefined4 DAT_00898d5c; extern undefined4 DAT_00898d60;
extern undefined4 DAT_00898d64; extern undefined4 DAT_00898d68; extern undefined4 DAT_00898d69; extern undefined4 DAT_00898d6a;
extern undefined4 DAT_00898d6b; extern undefined4 DAT_00898d6c; extern undefined4 DAT_00898d6d; extern undefined4 DAT_00898d6e;
extern undefined4 DAT_00898d6f; extern undefined4 DAT_00898d70; extern undefined4 DAT_00898d71; extern undefined4 DAT_00898d72;
extern undefined4 DAT_00898d73; extern undefined4 DAT_00898d74; extern undefined4 DAT_00898d75; extern undefined4 DAT_00898d76;
extern undefined4 DAT_00898d77; extern undefined4 DAT_00898d78; extern undefined4 DAT_00898d79; extern undefined4 DAT_00898d7a;
extern undefined4 DAT_00898d7b; extern undefined4 DAT_00898d7c; extern undefined4 DAT_00898d7d; extern undefined4 DAT_00898d7e;
extern undefined4 DAT_00898d7f; extern undefined4 DAT_00898d80; extern undefined4 DAT_00898d81; extern undefined4 DAT_00898d82;
extern undefined4 DAT_00898d83; extern undefined4 DAT_00898d84; extern undefined4 DAT_00898d85; extern undefined4 DAT_00898d86;
extern undefined4 DAT_00898d87; extern undefined4 DAT_00898d88; extern undefined4 DAT_00898d89; extern undefined4 DAT_00898d8a;
extern undefined4 DAT_00898d8b; extern undefined4 DAT_00898d8c; extern undefined4 DAT_00898d90; extern undefined4 DAT_00898e1c;
extern undefined4 DAT_00898e20; extern undefined4 DAT_00898e21; extern undefined4 DAT_00898e22; extern undefined4 DAT_00898e23;
extern undefined4 DAT_00898e24; extern undefined4 DAT_00898e25; extern undefined4 DAT_00898e26; extern undefined4 DAT_00898e27;
extern undefined4 DAT_00898e28; extern undefined4 DAT_00898e29; extern undefined4 DAT_00898e2a; extern undefined4 DAT_00898e2b;
extern undefined4 DAT_00898e2c; extern undefined4 DAT_00898e2d; extern undefined4 DAT_00898e2e; extern undefined4 DAT_00898e2f;
extern undefined4 DAT_00898e30; extern undefined4 DAT_00898e31; extern undefined4 DAT_00898e32; extern undefined4 DAT_00898e33;
extern undefined4 DAT_00898e34; extern undefined4 DAT_00898e35; extern undefined4 DAT_00898e36; extern undefined4 DAT_00898e37;
extern undefined4 DAT_00898e38; extern undefined4 DAT_00898e39; extern undefined4 DAT_00898e3a; extern undefined4 DAT_00898e3b;
extern undefined4 DAT_00898e3c; extern undefined4 DAT_00898e3d; extern undefined4 DAT_00898e3e; extern undefined4 DAT_00898e3f;
extern undefined4 DAT_00898e40; extern undefined4 DAT_00898e41; extern undefined4 DAT_00898e42; extern undefined4 DAT_00898e43;
extern undefined4 DAT_00898e44; extern undefined4 DAT_00898e48; extern undefined4 DAT_00898f44; extern undefined4 DAT_00898f48;
extern undefined4 DAT_00898f4c; extern undefined4 DAT_00898f50; extern undefined4 DAT_0089905c; extern undefined4 DAT_00899060;
extern undefined4 DAT_00899064; extern undefined4 DAT_008c832c; extern undefined4 DAT_008c8330; extern undefined4 DAT_008c8334;
extern undefined4 DAT_008c8338; extern undefined4 DAT_008c833c; extern undefined4 DAT_008c8340; extern undefined4 DAT_008cb3c0;
extern undefined4 DAT_008cb3c4; extern undefined4 DAT_008cb3c8; extern undefined4 DAT_008cb3cc; extern undefined4 DAT_008cb3d0;
extern undefined4 DAT_008cb3d4; extern undefined4 DAT_008cb4c8; extern undefined4 DAT_008cb4cc; extern undefined4 DAT_008cb4d0;
extern undefined4 DAT_008cb4d4; extern undefined4 DAT_008cb4d8; extern undefined4 DAT_008cb4dc; extern undefined4 DAT_008cd8cc;
extern undefined4 DAT_008cd8d0; extern undefined4 DAT_008cd8d4; extern undefined4 DAT_008cd8d8; extern undefined4 DAT_008cd8dc;
extern undefined4 DAT_008cd8e0; extern undefined4 DAT_008d11c4; extern undefined4 DAT_008d11c8; extern undefined4 DAT_008d11cc;
extern undefined4 DAT_008d11d0; extern undefined4 DAT_008d11d4; extern undefined4 DAT_008d11d8; extern undefined4 DAT_008d11dc;
extern undefined4 DAT_008d11e0; extern undefined4 DAT_008d11e4; extern undefined4 DAT_008d11e8; extern undefined4 DAT_008d11ec;
extern undefined4 DAT_008d11f0; extern undefined4 DAT_008d11f4; extern undefined4 DAT_008d11f8; extern undefined4 DAT_008d11fc;
extern undefined4 DAT_008d1200; extern undefined4 DAT_008d1204; extern undefined4 DAT_008d1208; extern undefined4 DAT_008d123c;
extern undefined4 DAT_008d1240; extern undefined4 DAT_008d1244; extern undefined4 DAT_008d1248; extern undefined4 DAT_008d124c;
extern undefined4 DAT_008d1250; extern undefined4 DAT_008d132c; extern undefined4 DAT_008d1330; extern undefined4 DAT_008d1334;
extern undefined4 DAT_008d1338; extern undefined4 DAT_008d133c; extern undefined4 DAT_008d1340; extern undefined4 DAT_008d144c;
extern undefined4 DAT_008d1450; extern undefined4 DAT_008d1454; extern undefined4 DAT_008d1458; extern undefined4 DAT_008d145c;
extern undefined4 DAT_008d1460;
