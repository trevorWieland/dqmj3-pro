#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890358; extern undefined4 DAT_0089035c; extern undefined4 DAT_008906b4; extern undefined4 DAT_008906b8;
extern undefined4 DAT_008906f0; extern undefined4 DAT_008906f4; extern undefined4 DAT_00890be4; extern undefined4 DAT_00890be8;
extern undefined4 DAT_00890bec; extern undefined4 DAT_008919f8; extern undefined4 DAT_00892b40; extern undefined4 DAT_00892b44;
extern undefined4 DAT_00892b48; extern undefined4 DAT_00892b4c; extern undefined4 DAT_00892b50; extern undefined4 DAT_00892b54;
extern undefined4 DAT_00892b70; extern undefined4 DAT_00892b74; extern undefined4 DAT_00892b75; extern undefined4 DAT_00892b76;
extern undefined4 DAT_00892b77; extern undefined4 DAT_00892b78; extern undefined4 DAT_00892b79; extern undefined4 DAT_00892b7a;
extern undefined4 DAT_00892b7b; extern undefined4 DAT_00892b7c; extern undefined4 DAT_00892b7d; extern undefined4 DAT_00892b7e;
extern undefined4 DAT_00892b7f; extern undefined4 DAT_00892b80; extern undefined4 DAT_00892b81; extern undefined4 DAT_00892b82;
extern undefined4 DAT_00892b83; extern undefined4 DAT_00892b84; extern undefined4 DAT_00892b85; extern undefined4 DAT_00892b86;
extern undefined4 DAT_00892b87; extern undefined4 DAT_00892b88; extern undefined4 DAT_00892b89; extern undefined4 DAT_00892b8a;
extern undefined4 DAT_00892b8b; extern undefined4 DAT_00892b8c; extern undefined4 DAT_00892b8d; extern undefined4 DAT_00892b8e;
extern undefined4 DAT_00892b8f; extern undefined4 DAT_00892b90; extern undefined4 DAT_00892b91; extern undefined4 DAT_00892b92;
extern undefined4 DAT_00892b93; extern undefined4 DAT_00892b94; extern undefined4 DAT_00892b95; extern undefined4 DAT_00892b96;
extern undefined4 DAT_00892b97; extern undefined4 DAT_00892b98; extern undefined4 DAT_00892b9c; extern undefined4 DAT_00892da0;
extern undefined4 DAT_00892dac; extern undefined4 DAT_00892db0; extern undefined4 DAT_00892de4; extern undefined4 DAT_00892de8;
extern undefined4 DAT_00892dec; extern undefined4 DAT_00892e88; extern undefined4 DAT_00893064; extern undefined4 DAT_00893068;
extern undefined4 DAT_0089306c; extern undefined4 DAT_008930ac; extern undefined4 DAT_008930b0; extern undefined4 DAT_008930b4;
extern undefined4 DAT_0089315c; extern undefined4 DAT_00893160; extern undefined4 DAT_00893278; extern undefined4 DAT_00893b1c;
extern undefined4 DAT_00893b64; extern undefined4 DAT_00893b70; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678;
extern undefined4 DAT_00894b34; extern undefined4 DAT_008951bc; extern undefined4 DAT_008951d8; extern undefined4 DAT_008951fc;
extern undefined4 DAT_00895334; extern undefined4 DAT_00895d9c; extern undefined4 DAT_00895da0; extern undefined4 DAT_00897250;
extern undefined4 DAT_00897254; extern undefined4 DAT_00897258; extern undefined4 DAT_008989f0; extern undefined4 DAT_008989f4;
extern undefined4 DAT_008989f8; extern undefined4 DAT_00899134; extern undefined4 DAT_00899138; extern undefined4 DAT_0089913c;
extern undefined4 DAT_008c7a84; extern undefined4 DAT_008c7a88; extern undefined4 DAT_008c7a8c; extern undefined4 DAT_008c7a90;
extern undefined4 DAT_008c7a94; extern undefined4 DAT_008c7a98; extern undefined4 DAT_008c7b2c; extern undefined4 DAT_008c7b30;
extern undefined4 DAT_008c7b34; extern undefined4 DAT_008c7b38; extern undefined4 DAT_008c7b3c; extern undefined4 DAT_008c7b40;
extern undefined4 DAT_008c8224; extern undefined4 DAT_008c8228; extern undefined4 DAT_008c822c; extern undefined4 DAT_008c8230;
extern undefined4 DAT_008c8234; extern undefined4 DAT_008c8238; extern undefined4 DAT_008c9b28; extern undefined4 DAT_008c9b2c;
extern undefined4 DAT_008c9b30; extern undefined4 DAT_008c9b34; extern undefined4 DAT_008c9b38; extern undefined4 DAT_008c9b3c;
extern undefined4 DAT_008c9b40; extern undefined4 DAT_008c9b44; extern undefined4 DAT_008c9b48; extern undefined4 DAT_008c9b4c;
extern undefined4 DAT_008c9b50; extern undefined4 DAT_008c9b54; extern undefined4 DAT_008c9b88; extern undefined4 DAT_008c9b8c;
extern undefined4 DAT_008c9b90; extern undefined4 DAT_008c9b94; extern undefined4 DAT_008c9b98; extern undefined4 DAT_008c9b9c;
extern undefined4 DAT_008c9de0; extern undefined4 DAT_008c9de4; extern undefined4 DAT_008c9de8; extern undefined4 DAT_008c9dec;
extern undefined4 DAT_008c9df0; extern undefined4 DAT_008c9df4; extern undefined4 DAT_008c9df8; extern undefined4 DAT_008c9dfc;
extern undefined4 DAT_008c9e00; extern undefined4 DAT_008c9e04; extern undefined4 DAT_008c9e08; extern undefined4 DAT_008c9e0c;
extern undefined4 DAT_008ca1c8; extern undefined4 DAT_008ca1cc; extern undefined4 DAT_008ca1d0; extern undefined4 DAT_008ca1d4;
extern undefined4 DAT_008ca1d8; extern undefined4 DAT_008ca1dc; extern undefined4 DAT_008ca258; extern undefined4 DAT_008ca25c;
extern undefined4 DAT_008ca260; extern undefined4 DAT_008ca264; extern undefined4 DAT_008ca268; extern undefined4 DAT_008ca26c;
extern undefined4 DAT_008ca3f0; extern undefined4 DAT_008ca3f4; extern undefined4 DAT_008ca3f8; extern undefined4 DAT_008ca3fc;
extern undefined4 DAT_008ca400; extern undefined4 DAT_008ca404; extern undefined4 DAT_008cc55c; extern undefined4 DAT_008cc560;
extern undefined4 DAT_008cc564; extern undefined4 DAT_008cc568; extern undefined4 DAT_008cc56c; extern undefined4 DAT_008cc570;
extern undefined4 DAT_008cd9ec; extern undefined4 DAT_008cd9f0; extern undefined4 DAT_008cd9f4; extern undefined4 DAT_008cd9f8;
extern undefined4 DAT_008cd9fc; extern undefined4 DAT_008cda00; extern undefined4 DAT_008d0304; extern undefined4 DAT_008d0308;
extern undefined4 DAT_008d030c; extern undefined4 DAT_008d0310; extern undefined4 DAT_008d0314; extern undefined4 DAT_008d0318;
extern undefined4 DAT_008d15b4; extern undefined4 DAT_008d15b8; extern undefined4 DAT_008d15bc; extern undefined4 DAT_008d15c0;
extern undefined4 DAT_008d15c4; extern undefined4 DAT_008d15c8;
