#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00892c84; extern undefined4 DAT_00892c88; extern undefined4 DAT_00892c8c; extern undefined4 DAT_00892fc4;
extern undefined4 DAT_00892fc8; extern undefined4 DAT_00892fcc; extern undefined4 DAT_00893b1c; extern undefined4 DAT_00893b64;
extern undefined4 DAT_00893b70; extern undefined4 DAT_00893d14; extern undefined4 DAT_00893e18; extern undefined4 DAT_00893eb8;
extern undefined4 DAT_00893ebc; extern undefined4 DAT_00893ebd; extern undefined4 DAT_00893ebe; extern undefined4 DAT_00893ebf;
extern undefined4 DAT_00893ec0; extern undefined4 DAT_00893ec1; extern undefined4 DAT_00893ec2; extern undefined4 DAT_00893ec3;
extern undefined4 DAT_00893ec4; extern undefined4 DAT_00893ec5; extern undefined4 DAT_00893ec6; extern undefined4 DAT_00893ec7;
extern undefined4 DAT_00893ec8; extern undefined4 DAT_00893ec9; extern undefined4 DAT_00893eca; extern undefined4 DAT_00893ecb;
extern undefined4 DAT_00893ecc; extern undefined4 DAT_00893ecd; extern undefined4 DAT_00893ece; extern undefined4 DAT_00893ecf;
extern undefined4 DAT_00893ed0; extern undefined4 DAT_00893ed1; extern undefined4 DAT_00893ed2; extern undefined4 DAT_00893ed3;
extern undefined4 DAT_00893ed4; extern undefined4 DAT_00893ed5; extern undefined4 DAT_00893ed6; extern undefined4 DAT_00893ed7;
extern undefined4 DAT_00893ed8; extern undefined4 DAT_00893ed9; extern undefined4 DAT_00893eda; extern undefined4 DAT_00893edb;
extern undefined4 DAT_00893edc; extern undefined4 DAT_00893edd; extern undefined4 DAT_00893ede; extern undefined4 DAT_00893edf;
extern undefined4 DAT_00893ee0; extern undefined4 DAT_00893ee4; extern undefined4 DAT_00894208; extern undefined4 DAT_0089420c;
extern undefined4 DAT_0089420d; extern undefined4 DAT_0089420e; extern undefined4 DAT_0089420f; extern undefined4 DAT_00894210;
extern undefined4 DAT_00894214; extern undefined4 DAT_00894498; extern undefined4 DAT_0089449c; extern undefined4 DAT_008944a0;
extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678; extern undefined4 DAT_00895458; extern undefined4 DAT_00895be8;
extern undefined4 DAT_00896fec; extern undefined4 DAT_00897134; extern undefined4 DAT_00897214; extern undefined4 DAT_00897218;
extern undefined4 DAT_00897219; extern undefined4 DAT_0089721a; extern undefined4 DAT_0089721b; extern undefined4 DAT_0089721c;
extern undefined4 DAT_0089721d; extern undefined4 DAT_0089721e; extern undefined4 DAT_0089721f; extern undefined4 DAT_00897220;
extern undefined4 DAT_00897224; extern undefined4 DAT_00897225; extern undefined4 DAT_00897226; extern undefined4 DAT_00897227;
extern undefined4 DAT_00897228; extern undefined4 DAT_00897229; extern undefined4 DAT_0089722a; extern undefined4 DAT_0089722b;
extern undefined4 DAT_0089722c; extern undefined4 DAT_0089722d; extern undefined4 DAT_0089722e; extern undefined4 DAT_0089722f;
extern undefined4 DAT_00897230; extern undefined4 DAT_00897231; extern undefined4 DAT_00897232; extern undefined4 DAT_00897233;
extern undefined4 DAT_00897234; extern undefined4 DAT_00897235; extern undefined4 DAT_00897236; extern undefined4 DAT_00897237;
extern undefined4 DAT_00897238; extern undefined4 DAT_00897239; extern undefined4 DAT_0089723a; extern undefined4 DAT_0089723b;
extern undefined4 DAT_0089723c; extern undefined4 DAT_00897240; extern undefined4 DAT_00898efc; extern undefined4 DAT_00898f00;
extern undefined4 DAT_00898f01; extern undefined4 DAT_00898f02; extern undefined4 DAT_00898f03; extern undefined4 DAT_00898f04;
extern undefined4 DAT_00898f05; extern undefined4 DAT_00898f06; extern undefined4 DAT_00898f07; extern undefined4 DAT_00898f08;
extern undefined4 DAT_00898f0c; extern undefined4 DAT_00898f0d; extern undefined4 DAT_00898f0e; extern undefined4 DAT_00898f0f;
extern undefined4 DAT_00898f10; extern undefined4 DAT_00898f11; extern undefined4 DAT_00898f12; extern undefined4 DAT_00898f13;
extern undefined4 DAT_00898f14; extern undefined4 DAT_00898f15; extern undefined4 DAT_00898f16; extern undefined4 DAT_00898f17;
extern undefined4 DAT_00898f18; extern undefined4 DAT_00898f19; extern undefined4 DAT_00898f1a; extern undefined4 DAT_00898f1b;
extern undefined4 DAT_00898f1c; extern undefined4 DAT_00898f1d; extern undefined4 DAT_00898f1e; extern undefined4 DAT_00898f1f;
extern undefined4 DAT_00898f20; extern undefined4 DAT_00898f21; extern undefined4 DAT_00898f22; extern undefined4 DAT_00898f23;
extern undefined4 DAT_00898f24; extern undefined4 DAT_00898f28; extern undefined4 DAT_00899050; extern undefined4 DAT_00899054;
extern undefined4 DAT_00899058; extern undefined4 DAT_008990bc; extern undefined4 DAT_008990c0; extern undefined4 DAT_008990c4;
extern undefined4 DAT_008990c8; extern undefined4 DAT_008990cc; extern undefined4 DAT_008990d0; extern undefined4 DAT_00899168;
extern undefined4 DAT_0089916c; extern undefined4 DAT_00899170; extern undefined4 DAT_00899174; extern undefined4 DAT_00899178;
extern undefined4 DAT_0089917c; extern undefined4 DAT_00899248; extern undefined4 DAT_0089924c; extern undefined4 DAT_00899250;
extern undefined4 DAT_00899254; extern undefined4 DAT_00899258; extern undefined4 DAT_0089925c; extern undefined4 DAT_008c9c78;
extern undefined4 DAT_008c9c7c; extern undefined4 DAT_008c9c80; extern undefined4 DAT_008c9c84; extern undefined4 DAT_008c9c88;
extern undefined4 DAT_008c9c8c; extern undefined4 DAT_008ca090; extern undefined4 DAT_008ca094; extern undefined4 DAT_008ca098;
extern undefined4 DAT_008ca09c; extern undefined4 DAT_008ca0a0; extern undefined4 DAT_008ca0a4; extern undefined4 DAT_008caef8;
extern undefined4 DAT_008caefc; extern undefined4 DAT_008caf00; extern undefined4 DAT_008caf04; extern undefined4 DAT_008caf08;
extern undefined4 DAT_008caf0c; extern undefined4 DAT_008cb030; extern undefined4 DAT_008cb034; extern undefined4 DAT_008cb038;
extern undefined4 DAT_008cb03c; extern undefined4 DAT_008cb040; extern undefined4 DAT_008cb044; extern undefined4 DAT_008cb360;
extern undefined4 DAT_008cb364; extern undefined4 DAT_008cb368; extern undefined4 DAT_008cb36c; extern undefined4 DAT_008cb370;
extern undefined4 DAT_008cb374; extern undefined4 DAT_008cd9bc; extern undefined4 DAT_008cd9c0; extern undefined4 DAT_008cd9c4;
extern undefined4 DAT_008cd9c8; extern undefined4 DAT_008cd9cc; extern undefined4 DAT_008cd9d0; extern undefined4 DAT_008d1314;
extern undefined4 DAT_008d1318; extern undefined4 DAT_008d131c; extern undefined4 DAT_008d1320; extern undefined4 DAT_008d1324;
extern undefined4 DAT_008d1328; extern undefined4 DAT_008d1434; extern undefined4 DAT_008d1438; extern undefined4 DAT_008d143c;
extern undefined4 DAT_008d1440; extern undefined4 DAT_008d1444; extern undefined4 DAT_008d1448; extern undefined4 DAT_008d150c;
extern undefined4 DAT_008d1510; extern undefined4 DAT_008d1514; extern undefined4 DAT_008d1518; extern undefined4 DAT_008d151c;
extern undefined4 DAT_008d1520; extern undefined4 DAT_008d1614; extern undefined4 DAT_008d1618; extern undefined4 DAT_008d161c;
extern undefined4 DAT_008d1620; extern undefined4 DAT_008d1624; extern undefined4 DAT_008d1628; extern undefined4 DAT_008d162c;
extern undefined4 DAT_008d1630; extern undefined4 DAT_008d1634; extern undefined4 DAT_008d1638; extern undefined4 DAT_008d163c;
extern undefined4 DAT_008d1640; extern undefined4 DAT_008d1764; extern undefined4 DAT_008d1768; extern undefined4 DAT_008d176c;
extern undefined4 DAT_008d1770; extern undefined4 DAT_008d1774; extern undefined4 DAT_008d1778; extern undefined4 DAT_008d1790;
extern undefined4 DAT_008d1794; extern undefined4 DAT_008d1798; extern undefined4 DAT_008d179c; extern undefined4 DAT_008d17a0;
extern undefined4 DAT_008d17a4;
