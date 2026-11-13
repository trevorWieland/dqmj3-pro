#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008906bc; extern undefined4 DAT_008906c0; extern undefined4 DAT_008906f8; extern undefined4 DAT_008906fc;
extern undefined4 DAT_00890708; extern undefined4 DAT_0089070c; extern undefined4 DAT_00890910; extern undefined4 DAT_00890914;
extern undefined4 DAT_00890918; extern undefined4 DAT_0089091c; extern undefined4 DAT_00890920; extern undefined4 DAT_00890924;
extern undefined4 DAT_00890c68; extern undefined4 DAT_00890c6c; extern undefined4 DAT_00891060; extern undefined4 DAT_00891064;
extern undefined4 DAT_00891068; extern undefined4 DAT_008918e8; extern undefined4 DAT_008918ec; extern undefined4 DAT_00891958;
extern undefined4 DAT_0089195c; extern undefined4 DAT_00891a70; extern undefined4 DAT_00891a74; extern undefined4 DAT_00891a78;
extern undefined4 DAT_00892cec; extern undefined4 DAT_00892d64; extern undefined4 DAT_00892d68; extern undefined4 DAT_00892d6c;
extern undefined4 DAT_00892d70; extern undefined4 DAT_00893204; extern undefined4 DAT_00893210; extern undefined4 DAT_00893b10;
extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678; extern undefined4 DAT_00894e2c; extern undefined4 DAT_00895458;
extern undefined4 DAT_00895cac; extern undefined4 DAT_00895cb0; extern undefined4 DAT_00896990; extern undefined4 DAT_00896994;
extern undefined4 DAT_00896998; extern undefined4 DAT_00896f64; extern undefined4 DAT_00896f68; extern undefined4 DAT_00896f6c;
extern undefined4 DAT_0089726c; extern undefined4 DAT_00897270; extern undefined4 DAT_00898fe4; extern undefined4 DAT_00898fe8;
extern undefined4 DAT_00898fec; extern undefined4 DAT_00898ff0; extern undefined4 DAT_0089a848; extern undefined4 DAT_008c0440;
extern undefined4 DAT_008c0444; extern undefined4 DAT_008c0448; extern undefined4 DAT_008c044c; extern undefined4 DAT_008c3400;
extern undefined4 DAT_008c3404; extern undefined4 DAT_008c3c60; extern undefined4 DAT_008c3d2c; extern undefined4 DAT_008c7a9c;
extern undefined4 DAT_008c7aa0; extern undefined4 DAT_008c7aa4; extern undefined4 DAT_008c7aa8; extern undefined4 DAT_008c7aac;
extern undefined4 DAT_008c7ab0; extern undefined4 DAT_008c7b44; extern undefined4 DAT_008c7b48; extern undefined4 DAT_008c7b4c;
extern undefined4 DAT_008c7b50; extern undefined4 DAT_008c7b54; extern undefined4 DAT_008c7b58; extern undefined4 DAT_008c7b74;
extern undefined4 DAT_008c7b78; extern undefined4 DAT_008c7b7c; extern undefined4 DAT_008c7b80; extern undefined4 DAT_008c7b84;
extern undefined4 DAT_008c7b88; extern undefined4 DAT_008c7d54; extern undefined4 DAT_008c7d58; extern undefined4 DAT_008c7d5c;
extern undefined4 DAT_008c7d60; extern undefined4 DAT_008c7d64; extern undefined4 DAT_008c7d68; extern undefined4 DAT_008c7d6c;
extern undefined4 DAT_008c7d70; extern undefined4 DAT_008c7d74; extern undefined4 DAT_008c7d78; extern undefined4 DAT_008c7d7c;
extern undefined4 DAT_008c7d80; extern undefined4 DAT_008c82e4; extern undefined4 DAT_008c82e8; extern undefined4 DAT_008c82ec;
extern undefined4 DAT_008c82f0; extern undefined4 DAT_008c82f4; extern undefined4 DAT_008c82f8; extern undefined4 DAT_008c856c;
extern undefined4 DAT_008c8570; extern undefined4 DAT_008c8574; extern undefined4 DAT_008c8578; extern undefined4 DAT_008c857c;
extern undefined4 DAT_008c8580; extern undefined4 DAT_008c8ecc; extern undefined4 DAT_008c8ed0; extern undefined4 DAT_008c8ed4;
extern undefined4 DAT_008c8ed8; extern undefined4 DAT_008c8edc; extern undefined4 DAT_008c8ee0; extern undefined4 DAT_008c8f8c;
extern undefined4 DAT_008c8f90; extern undefined4 DAT_008c8f94; extern undefined4 DAT_008c8f98; extern undefined4 DAT_008c8f9c;
extern undefined4 DAT_008c8fa0; extern undefined4 DAT_008c9034; extern undefined4 DAT_008c9038; extern undefined4 DAT_008c903c;
extern undefined4 DAT_008c9040; extern undefined4 DAT_008c9044; extern undefined4 DAT_008c9048; extern undefined4 DAT_008c9d20;
extern undefined4 DAT_008c9d24; extern undefined4 DAT_008c9d28; extern undefined4 DAT_008c9d2c; extern undefined4 DAT_008c9d30;
extern undefined4 DAT_008c9d34; extern undefined4 DAT_008cc484; extern undefined4 DAT_008cc488; extern undefined4 DAT_008cc48c;
extern undefined4 DAT_008cc490; extern undefined4 DAT_008cc494; extern undefined4 DAT_008cc498; extern undefined4 DAT_008ccef8;
extern undefined4 DAT_008ccefc; extern undefined4 DAT_008ccf00; extern undefined4 DAT_008ccf04; extern undefined4 DAT_008ccf08;
extern undefined4 DAT_008ccf0c; extern undefined4 DAT_008cd5cc; extern undefined4 DAT_008cd5d0; extern undefined4 DAT_008cd5d4;
extern undefined4 DAT_008cd5d8; extern undefined4 DAT_008cd5dc; extern undefined4 DAT_008cd5e0; extern undefined4 DAT_008cda34;
extern undefined4 DAT_008cda38; extern undefined4 DAT_008cda3c; extern undefined4 DAT_008cda40; extern undefined4 DAT_008cda44;
extern undefined4 DAT_008cda48; extern undefined4 DAT_008d1374; extern undefined4 DAT_008d1378; extern undefined4 DAT_008d137c;
extern undefined4 DAT_008d1380; extern undefined4 DAT_008d1384; extern undefined4 DAT_008d1388;
