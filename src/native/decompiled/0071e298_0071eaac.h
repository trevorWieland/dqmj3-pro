#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890710; extern undefined4 DAT_00890714; extern undefined4 DAT_00890718; extern undefined4 DAT_00890c8c;
extern undefined4 DAT_00890ec4; extern undefined4 DAT_00890ec8; extern undefined4 DAT_00890ec9; extern undefined4 DAT_00890eca;
extern undefined4 DAT_00890ecb; extern undefined4 DAT_00890ecc; extern undefined4 DAT_00890ecd; extern undefined4 DAT_00890ece;
extern undefined4 DAT_00890ecf; extern undefined4 DAT_00890ed0; extern undefined4 DAT_00890ed1; extern undefined4 DAT_00890ed2;
extern undefined4 DAT_00890ed3; extern undefined4 DAT_00890ed4; extern undefined4 DAT_00890ed5; extern undefined4 DAT_00890ed6;
extern undefined4 DAT_00890ed7; extern undefined4 DAT_00890ed8; extern undefined4 DAT_00890ed9; extern undefined4 DAT_00890eda;
extern undefined4 DAT_00890edb; extern undefined4 DAT_00890edc; extern undefined4 DAT_00890edd; extern undefined4 DAT_00890ede;
extern undefined4 DAT_00890edf; extern undefined4 DAT_00890ee0; extern undefined4 DAT_00890ee1; extern undefined4 DAT_00890ee2;
extern undefined4 DAT_00890ee3; extern undefined4 DAT_00890ee4; extern undefined4 DAT_00890ee5; extern undefined4 DAT_00890ee6;
extern undefined4 DAT_00890ee7; extern undefined4 DAT_00890ee8; extern undefined4 DAT_00890ee9; extern undefined4 DAT_00890eea;
extern undefined4 DAT_00890eeb; extern undefined4 DAT_00890eec; extern undefined4 DAT_00890ef0; extern undefined4 DAT_00893050;
extern undefined4 DAT_00893054; extern undefined4 DAT_00893118; extern undefined4 DAT_0089311c; extern undefined4 DAT_00893b64;
extern undefined4 DAT_00894478; extern undefined4 DAT_008945f8; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894c9c;
extern undefined4 DAT_00894ca0; extern undefined4 DAT_00894cb0; extern undefined4 DAT_00894cb4; extern undefined4 DAT_00894cb8;
extern undefined4 DAT_00894d28; extern undefined4 DAT_008953b0; extern undefined4 DAT_008953b4; extern undefined4 DAT_008953b5;
extern undefined4 DAT_008953b6; extern undefined4 DAT_008953b7; extern undefined4 DAT_008953b8; extern undefined4 DAT_008953b9;
extern undefined4 DAT_008953ba; extern undefined4 DAT_008953bb; extern undefined4 DAT_008953bc; extern undefined4 DAT_008953bd;
extern undefined4 DAT_008953be; extern undefined4 DAT_008953bf; extern undefined4 DAT_008953c0; extern undefined4 DAT_008953c1;
extern undefined4 DAT_008953c2; extern undefined4 DAT_008953c3; extern undefined4 DAT_008953c4; extern undefined4 DAT_008953c5;
extern undefined4 DAT_008953c6; extern undefined4 DAT_008953c7; extern undefined4 DAT_008953c8; extern undefined4 DAT_008953c9;
extern undefined4 DAT_008953ca; extern undefined4 DAT_008953cb; extern undefined4 DAT_008953cc; extern undefined4 DAT_008953cd;
extern undefined4 DAT_008953ce; extern undefined4 DAT_008953cf; extern undefined4 DAT_008953d0; extern undefined4 DAT_008953d1;
extern undefined4 DAT_008953d2; extern undefined4 DAT_008953d3; extern undefined4 DAT_008953d4; extern undefined4 DAT_008953d5;
extern undefined4 DAT_008953d6; extern undefined4 DAT_008953d7; extern undefined4 DAT_008953d8; extern undefined4 DAT_008953dc;
extern undefined4 DAT_0089544c; extern undefined4 DAT_0089547c; extern undefined4 DAT_00895488; extern undefined4 DAT_0089548c;
extern undefined4 DAT_00895490; extern undefined4 DAT_00895c10; extern undefined4 DAT_00895c14; extern undefined4 DAT_00895c18;
extern undefined4 DAT_0089668c; extern undefined4 DAT_00896690; extern undefined4 DAT_00896694; extern undefined4 DAT_00896695;
extern undefined4 DAT_00896696; extern undefined4 DAT_00896697; extern undefined4 DAT_00896698; extern undefined4 DAT_0089669c;
extern undefined4 DAT_0089669d; extern undefined4 DAT_0089669e; extern undefined4 DAT_0089669f; extern undefined4 DAT_008966a0;
extern undefined4 DAT_008966a1; extern undefined4 DAT_008966a2; extern undefined4 DAT_008966a3; extern undefined4 DAT_008966a4;
extern undefined4 DAT_008966a5; extern undefined4 DAT_008966a6; extern undefined4 DAT_008966a7; extern undefined4 DAT_008966a8;
extern undefined4 DAT_008966a9; extern undefined4 DAT_008966aa; extern undefined4 DAT_008966ab; extern undefined4 DAT_008966ac;
extern undefined4 DAT_008966ad; extern undefined4 DAT_008966ae; extern undefined4 DAT_008966af; extern undefined4 DAT_008966b0;
extern undefined4 DAT_008966b1; extern undefined4 DAT_008966b2; extern undefined4 DAT_008966b3; extern undefined4 DAT_008966bc;
extern undefined4 DAT_008966c0; extern undefined4 DAT_00896790; extern undefined4 DAT_0089689c; extern undefined4 DAT_008968a0;
extern undefined4 DAT_008968a4; extern undefined4 DAT_00896a84; extern undefined4 DAT_00896ff0; extern undefined4 DAT_00896ff4;
extern undefined4 DAT_00896ff8; extern undefined4 DAT_00896ffc; extern undefined4 DAT_00897050; extern undefined4 DAT_00897054;
extern undefined4 DAT_00897058; extern undefined4 DAT_00898a9c; extern undefined4 DAT_00898aa0; extern undefined4 DAT_00898aa4;
extern undefined4 DAT_008c7b8c; extern undefined4 DAT_008c7b90; extern undefined4 DAT_008c7b94; extern undefined4 DAT_008c7b98;
extern undefined4 DAT_008c7b9c; extern undefined4 DAT_008c7ba0; extern undefined4 DAT_008c83bc; extern undefined4 DAT_008c83c0;
extern undefined4 DAT_008c83c4; extern undefined4 DAT_008c83c8; extern undefined4 DAT_008c83cc; extern undefined4 DAT_008c83d0;
extern undefined4 DAT_008ca198; extern undefined4 DAT_008ca19c; extern undefined4 DAT_008ca1a0; extern undefined4 DAT_008ca1a4;
extern undefined4 DAT_008ca1a8; extern undefined4 DAT_008ca1ac; extern undefined4 DAT_008ca348; extern undefined4 DAT_008ca34c;
extern undefined4 DAT_008ca350; extern undefined4 DAT_008ca354; extern undefined4 DAT_008ca358; extern undefined4 DAT_008ca35c;
extern undefined4 DAT_008cb750; extern undefined4 DAT_008cb754; extern undefined4 DAT_008cb758; extern undefined4 DAT_008cb75c;
extern undefined4 DAT_008cb760; extern undefined4 DAT_008cb764; extern undefined4 DAT_008cb780; extern undefined4 DAT_008cb784;
extern undefined4 DAT_008cb788; extern undefined4 DAT_008cb78c; extern undefined4 DAT_008cb790; extern undefined4 DAT_008cb794;
extern undefined4 DAT_008cbda4; extern undefined4 DAT_008cbda8; extern undefined4 DAT_008cbdac; extern undefined4 DAT_008cbdb0;
extern undefined4 DAT_008cbdb4; extern undefined4 DAT_008cbdb8; extern undefined4 DAT_008cbdbc; extern undefined4 DAT_008cbdc0;
extern undefined4 DAT_008cbdc4; extern undefined4 DAT_008cbdc8; extern undefined4 DAT_008cbdcc; extern undefined4 DAT_008cbdd0;
extern undefined4 DAT_008cbdd4; extern undefined4 DAT_008cbdd8; extern undefined4 DAT_008cbddc; extern undefined4 DAT_008cbde0;
extern undefined4 DAT_008cbde4; extern undefined4 DAT_008cbde8; extern undefined4 DAT_008cbe7c; extern undefined4 DAT_008cbe80;
extern undefined4 DAT_008cbe84; extern undefined4 DAT_008cbe88; extern undefined4 DAT_008cbe8c; extern undefined4 DAT_008cbe90;
extern undefined4 DAT_008cc37c; extern undefined4 DAT_008cc380; extern undefined4 DAT_008cc384; extern undefined4 DAT_008cc388;
extern undefined4 DAT_008cc38c; extern undefined4 DAT_008cc390; extern undefined4 DAT_008ccc10; extern undefined4 DAT_008ccc14;
extern undefined4 DAT_008ccc18; extern undefined4 DAT_008ccc1c; extern undefined4 DAT_008ccc20; extern undefined4 DAT_008ccc24;
extern undefined4 DAT_008ccda8; extern undefined4 DAT_008ccdac; extern undefined4 DAT_008ccdb0; extern undefined4 DAT_008ccdb4;
extern undefined4 DAT_008ccdb8; extern undefined4 DAT_008ccdbc; extern undefined4 DAT_008cd68c; extern undefined4 DAT_008cd690;
extern undefined4 DAT_008cd694; extern undefined4 DAT_008cd698; extern undefined4 DAT_008cd69c; extern undefined4 DAT_008cd6a0;
extern undefined4 DAT_008cd71c; extern undefined4 DAT_008cd720; extern undefined4 DAT_008cd724; extern undefined4 DAT_008cd728;
extern undefined4 DAT_008cd72c; extern undefined4 DAT_008cd730; extern undefined4 DAT_008d0364; extern undefined4 DAT_008d0368;
extern undefined4 DAT_008d036c; extern undefined4 DAT_008d0370; extern undefined4 DAT_008d0374; extern undefined4 DAT_008d0378;
