#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0017fe34();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008906d8; extern undefined4 DAT_008906dc; extern undefined4 DAT_00890bd8; extern undefined4 DAT_00890bdc;
extern undefined4 DAT_00890be0; extern undefined4 DAT_008913d4; extern undefined4 DAT_008913d8; extern undefined4 DAT_008929a8;
extern undefined4 DAT_00892a70; extern undefined4 DAT_00892a74; extern undefined4 DAT_00892a75; extern undefined4 DAT_00892a76;
extern undefined4 DAT_00892a77; extern undefined4 DAT_00892a78; extern undefined4 DAT_00892a79; extern undefined4 DAT_00892a7a;
extern undefined4 DAT_00892a7b; extern undefined4 DAT_00892a7c; extern undefined4 DAT_00892a7d; extern undefined4 DAT_00892a7e;
extern undefined4 DAT_00892a7f; extern undefined4 DAT_00892a80; extern undefined4 DAT_00892a81; extern undefined4 DAT_00892a82;
extern undefined4 DAT_00892a83; extern undefined4 DAT_00892a84; extern undefined4 DAT_00892a85; extern undefined4 DAT_00892a86;
extern undefined4 DAT_00892a87; extern undefined4 DAT_00892a88; extern undefined4 DAT_00892a89; extern undefined4 DAT_00892a8a;
extern undefined4 DAT_00892a8b; extern undefined4 DAT_00892a8c; extern undefined4 DAT_00892a8d; extern undefined4 DAT_00892a8e;
extern undefined4 DAT_00892a8f; extern undefined4 DAT_00892a90; extern undefined4 DAT_00892a91; extern undefined4 DAT_00892a92;
extern undefined4 DAT_00892a93; extern undefined4 DAT_00892a94; extern undefined4 DAT_00892a95; extern undefined4 DAT_00892a96;
extern undefined4 DAT_00892a97; extern undefined4 DAT_00892a98; extern undefined4 DAT_00892a9c; extern undefined4 DAT_00893024;
extern undefined4 DAT_00893028; extern undefined4 DAT_00893110; extern undefined4 DAT_00893114; extern undefined4 DAT_00893260;
extern undefined4 DAT_00893b1c; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678; extern undefined4 DAT_00895c24;
extern undefined4 DAT_00895c38; extern undefined4 DAT_00895c3c; extern undefined4 DAT_00895c80; extern undefined4 DAT_00895c84;
extern undefined4 DAT_00895d7c; extern undefined4 DAT_00895d80; extern undefined4 DAT_008965b8; extern undefined4 DAT_008965bc;
extern undefined4 DAT_008965c8; extern undefined4 DAT_008965cc; extern undefined4 DAT_008966cc; extern undefined4 DAT_008966d0;
extern undefined4 DAT_008966d1; extern undefined4 DAT_008966d2; extern undefined4 DAT_008966d3; extern undefined4 DAT_008966d4;
extern undefined4 DAT_008966d5; extern undefined4 DAT_008966d6; extern undefined4 DAT_008966d7; extern undefined4 DAT_008966d8;
extern undefined4 DAT_008966d9; extern undefined4 DAT_008966da; extern undefined4 DAT_008966db; extern undefined4 DAT_008966dc;
extern undefined4 DAT_008966dd; extern undefined4 DAT_008966de; extern undefined4 DAT_008966df; extern undefined4 DAT_008966e0;
extern undefined4 DAT_008966e1; extern undefined4 DAT_008966e2; extern undefined4 DAT_008966e3; extern undefined4 DAT_008966e4;
extern undefined4 DAT_008966e5; extern undefined4 DAT_008966e6; extern undefined4 DAT_008966e7; extern undefined4 DAT_008966e8;
extern undefined4 DAT_008966e9; extern undefined4 DAT_008966ea; extern undefined4 DAT_008966eb; extern undefined4 DAT_008966ec;
extern undefined4 DAT_008966ed; extern undefined4 DAT_008966ee; extern undefined4 DAT_008966ef; extern undefined4 DAT_008966f0;
extern undefined4 DAT_008966f1; extern undefined4 DAT_008966f2; extern undefined4 DAT_008966f3; extern undefined4 DAT_008966f4;
extern undefined4 DAT_008966f8; extern undefined4 DAT_00896948; extern undefined4 DAT_0089694c; extern undefined4 DAT_00896950;
extern undefined4 DAT_00897134; extern undefined4 DAT_00897180; extern undefined4 DAT_00897184; extern undefined4 DAT_00897188;
extern undefined4 DAT_00898944; extern undefined4 DAT_00898948; extern undefined4 DAT_0089894c; extern undefined4 DAT_008c0440;
extern undefined4 DAT_008c0450; extern undefined4 DAT_008c7ae4; extern undefined4 DAT_008c7ae8; extern undefined4 DAT_008c7aec;
extern undefined4 DAT_008c7af0; extern undefined4 DAT_008c7af4; extern undefined4 DAT_008c7af8; extern undefined4 DAT_008c820c;
extern undefined4 DAT_008c8210; extern undefined4 DAT_008c8214; extern undefined4 DAT_008c8218; extern undefined4 DAT_008c821c;
extern undefined4 DAT_008c8220; extern undefined4 DAT_008c9a98; extern undefined4 DAT_008c9a9c; extern undefined4 DAT_008c9aa0;
extern undefined4 DAT_008c9aa4; extern undefined4 DAT_008c9aa8; extern undefined4 DAT_008c9aac; extern undefined4 DAT_008ca180;
extern undefined4 DAT_008ca184; extern undefined4 DAT_008ca188; extern undefined4 DAT_008ca18c; extern undefined4 DAT_008ca190;
extern undefined4 DAT_008ca194; extern undefined4 DAT_008ca330; extern undefined4 DAT_008ca334; extern undefined4 DAT_008ca338;
extern undefined4 DAT_008ca33c; extern undefined4 DAT_008ca340; extern undefined4 DAT_008ca344; extern undefined4 DAT_008cc3c4;
extern undefined4 DAT_008cc3c8; extern undefined4 DAT_008cc3cc; extern undefined4 DAT_008cc3d0; extern undefined4 DAT_008cc3d4;
extern undefined4 DAT_008cc3d8; extern undefined4 DAT_008cc40c; extern undefined4 DAT_008cc410; extern undefined4 DAT_008cc414;
extern undefined4 DAT_008cc418; extern undefined4 DAT_008cc41c; extern undefined4 DAT_008cc420; extern undefined4 DAT_008cc4fc;
extern undefined4 DAT_008cc500; extern undefined4 DAT_008cc504; extern undefined4 DAT_008cc508; extern undefined4 DAT_008cc50c;
extern undefined4 DAT_008cc510; extern undefined4 DAT_008ccb08; extern undefined4 DAT_008ccb0c; extern undefined4 DAT_008ccb10;
extern undefined4 DAT_008ccb14; extern undefined4 DAT_008ccb18; extern undefined4 DAT_008ccb1c; extern undefined4 DAT_008ccb20;
extern undefined4 DAT_008ccb24; extern undefined4 DAT_008ccb28; extern undefined4 DAT_008ccb2c; extern undefined4 DAT_008ccb30;
extern undefined4 DAT_008ccb34; extern undefined4 DAT_008ccc28; extern undefined4 DAT_008ccc2c; extern undefined4 DAT_008ccc30;
extern undefined4 DAT_008ccc34; extern undefined4 DAT_008ccc38; extern undefined4 DAT_008ccc3c; extern undefined4 DAT_008cce80;
extern undefined4 DAT_008cce84; extern undefined4 DAT_008cce88; extern undefined4 DAT_008cce8c; extern undefined4 DAT_008cce90;
extern undefined4 DAT_008cce94; extern undefined4 DAT_008cd8e4; extern undefined4 DAT_008cd8e8; extern undefined4 DAT_008cd8ec;
extern undefined4 DAT_008cd8f0; extern undefined4 DAT_008cd8f4; extern undefined4 DAT_008cd8f8; extern undefined4 DAT_008d0274;
extern undefined4 DAT_008d0278; extern undefined4 DAT_008d027c; extern undefined4 DAT_008d0280; extern undefined4 DAT_008d0284;
extern undefined4 DAT_008d0288;
