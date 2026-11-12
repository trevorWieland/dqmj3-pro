#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00303afc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00891d60; extern undefined4 DAT_00891d90; extern undefined4 DAT_00891d94; extern undefined4 DAT_00891d95;
extern undefined4 DAT_00891d96; extern undefined4 DAT_00891d97; extern undefined4 DAT_00891d98; extern undefined4 DAT_00891d99;
extern undefined4 DAT_00891d9a; extern undefined4 DAT_00891d9b; extern undefined4 DAT_00891d9c; extern undefined4 DAT_00891d9d;
extern undefined4 DAT_00891d9e; extern undefined4 DAT_00891d9f; extern undefined4 DAT_00891da0; extern undefined4 DAT_00891da1;
extern undefined4 DAT_00891da2; extern undefined4 DAT_00891da3; extern undefined4 DAT_00891da4; extern undefined4 DAT_00891da5;
extern undefined4 DAT_00891da6; extern undefined4 DAT_00891da7; extern undefined4 DAT_00891da8; extern undefined4 DAT_00891da9;
extern undefined4 DAT_00891daa; extern undefined4 DAT_00891dab; extern undefined4 DAT_00891dac; extern undefined4 DAT_00891dad;
extern undefined4 DAT_00891dae; extern undefined4 DAT_00891daf; extern undefined4 DAT_00891db0; extern undefined4 DAT_00891db1;
extern undefined4 DAT_00891db2; extern undefined4 DAT_00891db3; extern undefined4 DAT_00891db4; extern undefined4 DAT_00891db5;
extern undefined4 DAT_00891db6; extern undefined4 DAT_00891db7; extern undefined4 DAT_00891dc0; extern undefined4 DAT_00891dc4;
extern undefined4 DAT_008920e0; extern undefined4 DAT_008920e4; extern undefined4 DAT_00893144; extern undefined4 DAT_00893148;
extern undefined4 DAT_008931b4; extern undefined4 DAT_008931b8; extern undefined4 DAT_008931c4; extern undefined4 DAT_008931c8;
extern undefined4 DAT_008931cc; extern undefined4 DAT_008931d0; extern undefined4 DAT_008931d4; extern undefined4 DAT_008931d8;
extern undefined4 DAT_00893278; extern undefined4 DAT_008933a8; extern undefined4 DAT_0089345c; extern undefined4 DAT_00893660;
extern undefined4 DAT_0089366c; extern undefined4 DAT_00893670; extern undefined4 DAT_00893674; extern undefined4 DAT_00893678;
extern undefined4 DAT_0089367c; extern undefined4 DAT_0089368c; extern undefined4 DAT_00893690; extern undefined4 DAT_00893694;
extern undefined4 DAT_008936fc; extern undefined4 DAT_00893700; extern undefined4 DAT_00893704; extern undefined4 DAT_008937ec;
extern undefined4 DAT_00893b1c; extern undefined4 DAT_00894230; extern undefined4 DAT_00894234; extern undefined4 DAT_00894238;
extern undefined4 DAT_00894414; extern undefined4 DAT_00894418; extern undefined4 DAT_0089441c; extern undefined4 DAT_0089441d;
extern undefined4 DAT_0089441e; extern undefined4 DAT_0089441f; extern undefined4 DAT_00894420; extern undefined4 DAT_00894424;
extern undefined4 DAT_00894425; extern undefined4 DAT_00894426; extern undefined4 DAT_00894427; extern undefined4 DAT_00894428;
extern undefined4 DAT_00894429; extern undefined4 DAT_0089442a; extern undefined4 DAT_0089442b; extern undefined4 DAT_0089442c;
extern undefined4 DAT_0089442d; extern undefined4 DAT_0089442e; extern undefined4 DAT_0089442f; extern undefined4 DAT_00894430;
extern undefined4 DAT_00894431; extern undefined4 DAT_00894432; extern undefined4 DAT_00894433; extern undefined4 DAT_00894434;
extern undefined4 DAT_00894435; extern undefined4 DAT_00894436; extern undefined4 DAT_00894437; extern undefined4 DAT_00894438;
extern undefined4 DAT_00894439; extern undefined4 DAT_0089443a; extern undefined4 DAT_0089443b; extern undefined4 DAT_0089443c;
extern undefined4 DAT_00894440; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678; extern undefined4 DAT_008951bc;
extern undefined4 DAT_008961c0; extern undefined4 DAT_008961c1; extern undefined4 DAT_008961c2; extern undefined4 DAT_008961c3;
extern undefined4 DAT_008961c4; extern undefined4 DAT_008961c8; extern undefined4 DAT_008c62fc; extern undefined4 DAT_008c91fc;
extern undefined4 DAT_008c9200; extern undefined4 DAT_008c9204; extern undefined4 DAT_008c9208; extern undefined4 DAT_008c920c;
extern undefined4 DAT_008c9210; extern undefined4 DAT_008c9358; extern undefined4 DAT_008c935c; extern undefined4 DAT_008c9360;
extern undefined4 DAT_008c9364; extern undefined4 DAT_008c9368; extern undefined4 DAT_008c936c; extern undefined4 DAT_008c9370;
extern undefined4 DAT_008c9374; extern undefined4 DAT_008c9378; extern undefined4 DAT_008c937c; extern undefined4 DAT_008c9380;
extern undefined4 DAT_008c9384; extern undefined4 DAT_008ca3a8; extern undefined4 DAT_008ca3ac; extern undefined4 DAT_008ca3b0;
extern undefined4 DAT_008ca3b4; extern undefined4 DAT_008ca3b8; extern undefined4 DAT_008ca3bc; extern undefined4 DAT_008ca450;
extern undefined4 DAT_008ca454; extern undefined4 DAT_008ca458; extern undefined4 DAT_008ca45c; extern undefined4 DAT_008ca460;
extern undefined4 DAT_008ca464; extern undefined4 DAT_008ca480; extern undefined4 DAT_008ca484; extern undefined4 DAT_008ca488;
extern undefined4 DAT_008ca48c; extern undefined4 DAT_008ca490; extern undefined4 DAT_008ca494; extern undefined4 DAT_008ca498;
extern undefined4 DAT_008ca49c; extern undefined4 DAT_008ca4a0; extern undefined4 DAT_008ca4a4; extern undefined4 DAT_008ca4a8;
extern undefined4 DAT_008ca4ac; extern undefined4 DAT_008ca4b0; extern undefined4 DAT_008ca4b4; extern undefined4 DAT_008ca4b8;
extern undefined4 DAT_008ca4bc; extern undefined4 DAT_008ca4c0; extern undefined4 DAT_008ca4c4; extern undefined4 DAT_008ca7c8;
extern undefined4 DAT_008ca7cc; extern undefined4 DAT_008ca7d0; extern undefined4 DAT_008ca7d4; extern undefined4 DAT_008ca7d8;
extern undefined4 DAT_008ca7dc; extern undefined4 DAT_008ca7e0; extern undefined4 DAT_008ca7e4; extern undefined4 DAT_008ca7e8;
extern undefined4 DAT_008ca7ec; extern undefined4 DAT_008ca7f0; extern undefined4 DAT_008ca7f4; extern undefined4 DAT_008ca7f8;
extern undefined4 DAT_008ca7fc; extern undefined4 DAT_008ca800; extern undefined4 DAT_008ca804; extern undefined4 DAT_008ca808;
extern undefined4 DAT_008ca80c; extern undefined4 DAT_008ca840; extern undefined4 DAT_008ca844; extern undefined4 DAT_008ca848;
extern undefined4 DAT_008ca84c; extern undefined4 DAT_008ca850; extern undefined4 DAT_008ca854; extern undefined4 DAT_008cb060;
extern undefined4 DAT_008cb064; extern undefined4 DAT_008cb068; extern undefined4 DAT_008cb06c; extern undefined4 DAT_008cb070;
extern undefined4 DAT_008cb074; extern undefined4 DAT_008cb2b8; extern undefined4 DAT_008cb2bc; extern undefined4 DAT_008cb2c0;
extern undefined4 DAT_008cb2c4; extern undefined4 DAT_008cb2c8; extern undefined4 DAT_008cb2cc; extern undefined4 DAT_008cc844;
extern undefined4 DAT_008cc848; extern undefined4 DAT_008cc84c; extern undefined4 DAT_008cc850; extern undefined4 DAT_008cc854;
extern undefined4 DAT_008cc858; extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34;
