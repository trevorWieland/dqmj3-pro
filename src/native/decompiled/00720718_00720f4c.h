#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00892ff4; extern undefined4 DAT_00892ff8; extern undefined4 DAT_00893b10; extern undefined4 DAT_00893b48;
extern undefined4 DAT_00893b80; extern undefined4 DAT_00893e80; extern undefined4 DAT_00893e84; extern undefined4 DAT_00893e85;
extern undefined4 DAT_00893e86; extern undefined4 DAT_00893e87; extern undefined4 DAT_00893e88; extern undefined4 DAT_00893e89;
extern undefined4 DAT_00893e8a; extern undefined4 DAT_00893e8b; extern undefined4 DAT_00893e8c; extern undefined4 DAT_00893e8d;
extern undefined4 DAT_00893e8e; extern undefined4 DAT_00893e8f; extern undefined4 DAT_00893e90; extern undefined4 DAT_00893e91;
extern undefined4 DAT_00893e92; extern undefined4 DAT_00893e93; extern undefined4 DAT_00893e94; extern undefined4 DAT_00893e95;
extern undefined4 DAT_00893e96; extern undefined4 DAT_00893e97; extern undefined4 DAT_00893e98; extern undefined4 DAT_00893e99;
extern undefined4 DAT_00893e9a; extern undefined4 DAT_00893e9b; extern undefined4 DAT_00893e9c; extern undefined4 DAT_00893e9d;
extern undefined4 DAT_00893e9e; extern undefined4 DAT_00893e9f; extern undefined4 DAT_00893ea0; extern undefined4 DAT_00893ea1;
extern undefined4 DAT_00893ea2; extern undefined4 DAT_00893ea3; extern undefined4 DAT_00893ea4; extern undefined4 DAT_00893ea5;
extern undefined4 DAT_00893ea6; extern undefined4 DAT_00893ea7; extern undefined4 DAT_00893ea8; extern undefined4 DAT_00893eac;
extern undefined4 DAT_00893eb8; extern undefined4 DAT_0089446c; extern undefined4 DAT_008945f8; extern undefined4 DAT_008945fc;
extern undefined4 DAT_00894600; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678; extern undefined4 DAT_00894ca4;
extern undefined4 DAT_00894ca8; extern undefined4 DAT_00894cac; extern undefined4 DAT_00894d7c; extern undefined4 DAT_00894d80;
extern undefined4 DAT_00894d84; extern undefined4 DAT_00894da8; extern undefined4 DAT_00894e88; extern undefined4 DAT_00894e8c;
extern undefined4 DAT_00894e90; extern undefined4 DAT_008951fc; extern undefined4 DAT_0089525c; extern undefined4 DAT_00895260;
extern undefined4 DAT_00895264; extern undefined4 DAT_008952d8; extern undefined4 DAT_008952dc; extern undefined4 DAT_008952e0;
extern undefined4 DAT_00896630; extern undefined4 DAT_00896634; extern undefined4 DAT_00896638; extern undefined4 DAT_0089666c;
extern undefined4 DAT_00896670; extern undefined4 DAT_00896674; extern undefined4 DAT_00896770; extern undefined4 DAT_00896774;
extern undefined4 DAT_00896778; extern undefined4 DAT_008968f8; extern undefined4 DAT_008968fc; extern undefined4 DAT_00896900;
extern undefined4 DAT_008969a8; extern undefined4 DAT_008969e0; extern undefined4 DAT_00896a94; extern undefined4 DAT_00896c40;
extern undefined4 DAT_00896c44; extern undefined4 DAT_00896c45; extern undefined4 DAT_00896c46; extern undefined4 DAT_00896c47;
extern undefined4 DAT_00896c48; extern undefined4 DAT_00896c49; extern undefined4 DAT_00896c4a; extern undefined4 DAT_00896c4b;
extern undefined4 DAT_00896c4c; extern undefined4 DAT_00896c4d; extern undefined4 DAT_00896c4e; extern undefined4 DAT_00896c4f;
extern undefined4 DAT_00896c50; extern undefined4 DAT_00896c51; extern undefined4 DAT_00896c52; extern undefined4 DAT_00896c53;
extern undefined4 DAT_00896c54; extern undefined4 DAT_00896c55; extern undefined4 DAT_00896c56; extern undefined4 DAT_00896c57;
extern undefined4 DAT_00896c58; extern undefined4 DAT_00896c59; extern undefined4 DAT_00896c5a; extern undefined4 DAT_00896c5b;
extern undefined4 DAT_00896c5c; extern undefined4 DAT_00896c5d; extern undefined4 DAT_00896c5e; extern undefined4 DAT_00896c5f;
extern undefined4 DAT_00896c60; extern undefined4 DAT_00896c61; extern undefined4 DAT_00896c62; extern undefined4 DAT_00896c63;
extern undefined4 DAT_00896c64; extern undefined4 DAT_00896c65; extern undefined4 DAT_00896c66; extern undefined4 DAT_00896c67;
extern undefined4 DAT_00896c68; extern undefined4 DAT_00896c69; extern undefined4 DAT_00896c6a; extern undefined4 DAT_00896c6b;
extern undefined4 DAT_00896c6c; extern undefined4 DAT_00896c70; extern undefined4 DAT_00897048; extern undefined4 DAT_00897134;
extern undefined4 DAT_00897198; extern undefined4 DAT_0089719c; extern undefined4 DAT_008971a0; extern undefined4 DAT_008ca0f0;
extern undefined4 DAT_008ca0f4; extern undefined4 DAT_008ca0f8; extern undefined4 DAT_008ca0fc; extern undefined4 DAT_008ca100;
extern undefined4 DAT_008ca104; extern undefined4 DAT_008caee0; extern undefined4 DAT_008caee4; extern undefined4 DAT_008caee8;
extern undefined4 DAT_008caeec; extern undefined4 DAT_008caef0; extern undefined4 DAT_008caef4; extern undefined4 DAT_008cb498;
extern undefined4 DAT_008cb49c; extern undefined4 DAT_008cb4a0; extern undefined4 DAT_008cb4a4; extern undefined4 DAT_008cb4a8;
extern undefined4 DAT_008cb4ac; extern undefined4 DAT_008cb768; extern undefined4 DAT_008cb76c; extern undefined4 DAT_008cb770;
extern undefined4 DAT_008cb774; extern undefined4 DAT_008cb778; extern undefined4 DAT_008cb77c; extern undefined4 DAT_008cb858;
extern undefined4 DAT_008cb85c; extern undefined4 DAT_008cb860; extern undefined4 DAT_008cb864; extern undefined4 DAT_008cb868;
extern undefined4 DAT_008cb86c; extern undefined4 DAT_008cb948; extern undefined4 DAT_008cb94c; extern undefined4 DAT_008cb950;
extern undefined4 DAT_008cb954; extern undefined4 DAT_008cb958; extern undefined4 DAT_008cb95c; extern undefined4 DAT_008cbc30;
extern undefined4 DAT_008cbc34; extern undefined4 DAT_008cbc38; extern undefined4 DAT_008cbc3c; extern undefined4 DAT_008cbc40;
extern undefined4 DAT_008cbc44; extern undefined4 DAT_008cbcd8; extern undefined4 DAT_008cbcdc; extern undefined4 DAT_008cbce0;
extern undefined4 DAT_008cbce4; extern undefined4 DAT_008cbce8; extern undefined4 DAT_008cbcec; extern undefined4 DAT_008ccb98;
extern undefined4 DAT_008ccb9c; extern undefined4 DAT_008ccba0; extern undefined4 DAT_008ccba4; extern undefined4 DAT_008ccba8;
extern undefined4 DAT_008ccbac; extern undefined4 DAT_008ccbe0; extern undefined4 DAT_008ccbe4; extern undefined4 DAT_008ccbe8;
extern undefined4 DAT_008ccbec; extern undefined4 DAT_008ccbf0; extern undefined4 DAT_008ccbf4; extern undefined4 DAT_008cccb8;
extern undefined4 DAT_008cccbc; extern undefined4 DAT_008cccc0; extern undefined4 DAT_008cccc4; extern undefined4 DAT_008cccc8;
extern undefined4 DAT_008ccccc; extern undefined4 DAT_008cce50; extern undefined4 DAT_008cce54; extern undefined4 DAT_008cce58;
extern undefined4 DAT_008cce5c; extern undefined4 DAT_008cce60; extern undefined4 DAT_008cce64; extern undefined4 DAT_008cd0b4;
extern undefined4 DAT_008cd0b8; extern undefined4 DAT_008cd0bc; extern undefined4 DAT_008cd0c0; extern undefined4 DAT_008cd0c4;
extern undefined4 DAT_008cd0c8; extern undefined4 DAT_008cd914; extern undefined4 DAT_008cd918; extern undefined4 DAT_008cd91c;
extern undefined4 DAT_008cd920; extern undefined4 DAT_008cd924; extern undefined4 DAT_008cd928;
