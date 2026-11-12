#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890668; extern undefined4 DAT_0089066c; extern undefined4 DAT_00890b74; extern undefined4 DAT_00890b80;
extern undefined4 DAT_00890b84; extern undefined4 DAT_00890b88; extern undefined4 DAT_00890c80; extern undefined4 DAT_00890c84;
extern undefined4 DAT_00890c88; extern undefined4 DAT_00890c8c; extern undefined4 DAT_00890d8c; extern undefined4 DAT_00890d90;
extern undefined4 DAT_00890d91; extern undefined4 DAT_00890d92; extern undefined4 DAT_00890d93; extern undefined4 DAT_00890d94;
extern undefined4 DAT_00890d95; extern undefined4 DAT_00890d96; extern undefined4 DAT_00890d97; extern undefined4 DAT_00890d98;
extern undefined4 DAT_00890d99; extern undefined4 DAT_00890d9a; extern undefined4 DAT_00890d9b; extern undefined4 DAT_00890d9c;
extern undefined4 DAT_00890d9d; extern undefined4 DAT_00890d9e; extern undefined4 DAT_00890d9f; extern undefined4 DAT_00890da0;
extern undefined4 DAT_00890da1; extern undefined4 DAT_00890da2; extern undefined4 DAT_00890da3; extern undefined4 DAT_00890da4;
extern undefined4 DAT_00890da5; extern undefined4 DAT_00890da6; extern undefined4 DAT_00890da7; extern undefined4 DAT_00890da8;
extern undefined4 DAT_00890da9; extern undefined4 DAT_00890daa; extern undefined4 DAT_00890dab; extern undefined4 DAT_00890dac;
extern undefined4 DAT_00890dad; extern undefined4 DAT_00890dae; extern undefined4 DAT_00890daf; extern undefined4 DAT_00890db0;
extern undefined4 DAT_00890db1; extern undefined4 DAT_00890db2; extern undefined4 DAT_00890db3; extern undefined4 DAT_00890dc4;
extern undefined4 DAT_00890dc8; extern undefined4 DAT_00891a34; extern undefined4 DAT_00892c24; extern undefined4 DAT_00892c28;
extern undefined4 DAT_00892c2c; extern undefined4 DAT_00892c60; extern undefined4 DAT_00892c64; extern undefined4 DAT_00892c68;
extern undefined4 DAT_00893128; extern undefined4 DAT_0089312c; extern undefined4 DAT_00893b1c; extern undefined4 DAT_00893b64;
extern undefined4 DAT_008944a8; extern undefined4 DAT_008944ac; extern undefined4 DAT_008944b0; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00894678; extern undefined4 DAT_008951bc; extern undefined4 DAT_0089544c; extern undefined4 DAT_00895458;
extern undefined4 DAT_00896f58; extern undefined4 DAT_00896f5c; extern undefined4 DAT_00896f60; extern undefined4 DAT_00896f7c;
extern undefined4 DAT_00896f88; extern undefined4 DAT_00896f8c; extern undefined4 DAT_00896f9c; extern undefined4 DAT_00896fa0;
extern undefined4 DAT_00896fa4; extern undefined4 DAT_00896fb4; extern undefined4 DAT_00896fb8; extern undefined4 DAT_00896fbc;
extern undefined4 DAT_00896ffc; extern undefined4 DAT_00897044; extern undefined4 DAT_00897134; extern undefined4 DAT_00897140;
extern undefined4 DAT_00897144; extern undefined4 DAT_00897148; extern undefined4 DAT_008971cc; extern undefined4 DAT_008971d0;
extern undefined4 DAT_008971d1; extern undefined4 DAT_008971d2; extern undefined4 DAT_008971d3; extern undefined4 DAT_008971d4;
extern undefined4 DAT_008971d5; extern undefined4 DAT_008971d6; extern undefined4 DAT_008971d7; extern undefined4 DAT_008971d8;
extern undefined4 DAT_008971dc; extern undefined4 DAT_008971dd; extern undefined4 DAT_008971de; extern undefined4 DAT_008971df;
extern undefined4 DAT_008971e0; extern undefined4 DAT_008971e1; extern undefined4 DAT_008971e2; extern undefined4 DAT_008971e3;
extern undefined4 DAT_008971e4; extern undefined4 DAT_008971e5; extern undefined4 DAT_008971e6; extern undefined4 DAT_008971e7;
extern undefined4 DAT_008971e8; extern undefined4 DAT_008971e9; extern undefined4 DAT_008971ea; extern undefined4 DAT_008971eb;
extern undefined4 DAT_008971ec; extern undefined4 DAT_008971ed; extern undefined4 DAT_008971ee; extern undefined4 DAT_008971ef;
extern undefined4 DAT_008971f0; extern undefined4 DAT_008971f1; extern undefined4 DAT_008971f2; extern undefined4 DAT_008971f3;
extern undefined4 DAT_008971f4; extern undefined4 DAT_008971f8; extern undefined4 DAT_00898fb4; extern undefined4 DAT_00898fb8;
extern undefined4 DAT_00898fbc; extern undefined4 DAT_00899224; extern undefined4 DAT_008c79a4; extern undefined4 DAT_008c79a8;
extern undefined4 DAT_008c79ac; extern undefined4 DAT_008c79b0; extern undefined4 DAT_008c79b4; extern undefined4 DAT_008c79b8;
extern undefined4 DAT_008c817c; extern undefined4 DAT_008c8180; extern undefined4 DAT_008c8184; extern undefined4 DAT_008c8188;
extern undefined4 DAT_008c818c; extern undefined4 DAT_008c8190; extern undefined4 DAT_008c82fc; extern undefined4 DAT_008c8300;
extern undefined4 DAT_008c8304; extern undefined4 DAT_008c8308; extern undefined4 DAT_008c830c; extern undefined4 DAT_008c8310;
extern undefined4 DAT_008c835c; extern undefined4 DAT_008c8360; extern undefined4 DAT_008c8364; extern undefined4 DAT_008c8368;
extern undefined4 DAT_008c836c; extern undefined4 DAT_008c8370; extern undefined4 DAT_008c9c00; extern undefined4 DAT_008c9c04;
extern undefined4 DAT_008c9c08; extern undefined4 DAT_008c9c0c; extern undefined4 DAT_008c9c10; extern undefined4 DAT_008c9c14;
extern undefined4 DAT_008c9c30; extern undefined4 DAT_008c9c34; extern undefined4 DAT_008c9c38; extern undefined4 DAT_008c9c3c;
extern undefined4 DAT_008c9c40; extern undefined4 DAT_008c9c44; extern undefined4 DAT_008ca378; extern undefined4 DAT_008ca37c;
extern undefined4 DAT_008ca380; extern undefined4 DAT_008ca384; extern undefined4 DAT_008ca388; extern undefined4 DAT_008ca38c;
extern undefined4 DAT_008cb378; extern undefined4 DAT_008cb37c; extern undefined4 DAT_008cb380; extern undefined4 DAT_008cb384;
extern undefined4 DAT_008cb388; extern undefined4 DAT_008cb38c; extern undefined4 DAT_008cd5b4; extern undefined4 DAT_008cd5b8;
extern undefined4 DAT_008cd5bc; extern undefined4 DAT_008cd5c0; extern undefined4 DAT_008cd5c4; extern undefined4 DAT_008cd5c8;
extern undefined4 DAT_008cd5fc; extern undefined4 DAT_008cd600; extern undefined4 DAT_008cd604; extern undefined4 DAT_008cd608;
extern undefined4 DAT_008cd60c; extern undefined4 DAT_008cd610; extern undefined4 DAT_008cd62c; extern undefined4 DAT_008cd630;
extern undefined4 DAT_008cd634; extern undefined4 DAT_008cd638; extern undefined4 DAT_008cd63c; extern undefined4 DAT_008cd640;
extern undefined4 DAT_008cd65c; extern undefined4 DAT_008cd660; extern undefined4 DAT_008cd664; extern undefined4 DAT_008cd668;
extern undefined4 DAT_008cd66c; extern undefined4 DAT_008cd670; extern undefined4 DAT_008cd86c; extern undefined4 DAT_008cd870;
extern undefined4 DAT_008cd874; extern undefined4 DAT_008cd878; extern undefined4 DAT_008cd87c; extern undefined4 DAT_008cd880;
extern undefined4 DAT_008cd974; extern undefined4 DAT_008cd978; extern undefined4 DAT_008cd97c; extern undefined4 DAT_008cd980;
extern undefined4 DAT_008cd984; extern undefined4 DAT_008cd988; extern undefined4 DAT_008d135c; extern undefined4 DAT_008d1360;
extern undefined4 DAT_008d1364; extern undefined4 DAT_008d1368; extern undefined4 DAT_008d136c; extern undefined4 DAT_008d1370;
