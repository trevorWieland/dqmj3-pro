#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00893278; extern undefined4 DAT_0089342c; extern undefined4 DAT_00893430; extern undefined4 DAT_00893431;
extern undefined4 DAT_00893432; extern undefined4 DAT_00893433; extern undefined4 DAT_00893434; extern undefined4 DAT_00893435;
extern undefined4 DAT_00893436; extern undefined4 DAT_00893437; extern undefined4 DAT_00893438; extern undefined4 DAT_00893439;
extern undefined4 DAT_0089343a; extern undefined4 DAT_0089343b; extern undefined4 DAT_0089343c; extern undefined4 DAT_0089343d;
extern undefined4 DAT_0089343e; extern undefined4 DAT_0089343f; extern undefined4 DAT_00893440; extern undefined4 DAT_00893441;
extern undefined4 DAT_00893442; extern undefined4 DAT_00893443; extern undefined4 DAT_00893444; extern undefined4 DAT_00893445;
extern undefined4 DAT_00893446; extern undefined4 DAT_00893447; extern undefined4 DAT_00893448; extern undefined4 DAT_00893449;
extern undefined4 DAT_0089344a; extern undefined4 DAT_0089344b; extern undefined4 DAT_0089344c; extern undefined4 DAT_0089344d;
extern undefined4 DAT_0089344e; extern undefined4 DAT_0089344f; extern undefined4 DAT_00893450; extern undefined4 DAT_00893451;
extern undefined4 DAT_00893452; extern undefined4 DAT_00893453; extern undefined4 DAT_00893454; extern undefined4 DAT_00893458;
extern undefined4 DAT_008934ac; extern undefined4 DAT_008934b0; extern undefined4 DAT_008934b4; extern undefined4 DAT_008937bc;
extern undefined4 DAT_008937d8; extern undefined4 DAT_00893918; extern undefined4 DAT_0089391c; extern undefined4 DAT_00893920;
extern undefined4 DAT_00893938; extern undefined4 DAT_00893a20; extern undefined4 DAT_00893a24; extern undefined4 DAT_00893a28;
extern undefined4 DAT_00893b10; extern undefined4 DAT_00893b14; extern undefined4 DAT_00893b18; extern undefined4 DAT_00893b1c;
extern undefined4 DAT_00893b20; extern undefined4 DAT_00893b24; extern undefined4 DAT_00893b70; extern undefined4 DAT_00893de8;
extern undefined4 DAT_00893dec; extern undefined4 DAT_00893ded; extern undefined4 DAT_00893dee; extern undefined4 DAT_00893def;
extern undefined4 DAT_00893df0; extern undefined4 DAT_00893df1; extern undefined4 DAT_00893df2; extern undefined4 DAT_00893df3;
extern undefined4 DAT_00893df4; extern undefined4 DAT_00893df5; extern undefined4 DAT_00893df6; extern undefined4 DAT_00893df7;
extern undefined4 DAT_00893df8; extern undefined4 DAT_00893df9; extern undefined4 DAT_00893dfa; extern undefined4 DAT_00893dfb;
extern undefined4 DAT_00893dfc; extern undefined4 DAT_00893dfd; extern undefined4 DAT_00893dfe; extern undefined4 DAT_00893dff;
extern undefined4 DAT_00893e00; extern undefined4 DAT_00893e01; extern undefined4 DAT_00893e02; extern undefined4 DAT_00893e03;
extern undefined4 DAT_00893e04; extern undefined4 DAT_00893e05; extern undefined4 DAT_00893e06; extern undefined4 DAT_00893e07;
extern undefined4 DAT_00893e08; extern undefined4 DAT_00893e09; extern undefined4 DAT_00893e0a; extern undefined4 DAT_00893e0b;
extern undefined4 DAT_00893e0c; extern undefined4 DAT_00893e0d; extern undefined4 DAT_00893e0e; extern undefined4 DAT_00893e0f;
extern undefined4 DAT_00893e10; extern undefined4 DAT_00893e14; extern undefined4 DAT_00893eb8; extern undefined4 DAT_008941b4;
extern undefined4 DAT_008941b8; extern undefined4 DAT_008941b9; extern undefined4 DAT_008941ba; extern undefined4 DAT_008941bb;
extern undefined4 DAT_008941bc; extern undefined4 DAT_008941bd; extern undefined4 DAT_008941be; extern undefined4 DAT_008941bf;
extern undefined4 DAT_008941c0; extern undefined4 DAT_008941c1; extern undefined4 DAT_008941c2; extern undefined4 DAT_008941c3;
extern undefined4 DAT_008941c4; extern undefined4 DAT_008941c5; extern undefined4 DAT_008941c6; extern undefined4 DAT_008941c7;
extern undefined4 DAT_008941c8; extern undefined4 DAT_008941c9; extern undefined4 DAT_008941ca; extern undefined4 DAT_008941cb;
extern undefined4 DAT_008941cc; extern undefined4 DAT_008941cd; extern undefined4 DAT_008941ce; extern undefined4 DAT_008941cf;
extern undefined4 DAT_008941d0; extern undefined4 DAT_008941d1; extern undefined4 DAT_008941d2; extern undefined4 DAT_008941d3;
extern undefined4 DAT_008941d4; extern undefined4 DAT_008941d5; extern undefined4 DAT_008941d6; extern undefined4 DAT_008941d7;
extern undefined4 DAT_008941d8; extern undefined4 DAT_008941d9; extern undefined4 DAT_008941da; extern undefined4 DAT_008941db;
extern undefined4 DAT_008941dc; extern undefined4 DAT_008941dd; extern undefined4 DAT_008941de; extern undefined4 DAT_008941df;
extern undefined4 DAT_008941e0; extern undefined4 DAT_008941e4; extern undefined4 DAT_008943a0; extern undefined4 DAT_008943a4;
extern undefined4 DAT_008943a8; extern undefined4 DAT_008943ac; extern undefined4 DAT_00894404; extern undefined4 DAT_00894454;
extern undefined4 DAT_00894458; extern undefined4 DAT_0089445c; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678;
extern undefined4 DAT_00894eb0; extern undefined4 DAT_00894eb4; extern undefined4 DAT_00894eb8; extern undefined4 DAT_00894eec;
extern undefined4 DAT_00895df4; extern undefined4 DAT_008ca678; extern undefined4 DAT_008ca67c; extern undefined4 DAT_008ca680;
extern undefined4 DAT_008ca684; extern undefined4 DAT_008ca688; extern undefined4 DAT_008ca68c; extern undefined4 DAT_008ca6c0;
extern undefined4 DAT_008ca6c4; extern undefined4 DAT_008ca6c8; extern undefined4 DAT_008ca6cc; extern undefined4 DAT_008ca6d0;
extern undefined4 DAT_008ca6d4; extern undefined4 DAT_008ca948; extern undefined4 DAT_008ca94c; extern undefined4 DAT_008ca950;
extern undefined4 DAT_008ca954; extern undefined4 DAT_008ca958; extern undefined4 DAT_008ca95c; extern undefined4 DAT_008caa98;
extern undefined4 DAT_008caa9c; extern undefined4 DAT_008caaa0; extern undefined4 DAT_008caaa4; extern undefined4 DAT_008caaa8;
extern undefined4 DAT_008caaac; extern undefined4 DAT_008caba0; extern undefined4 DAT_008caba4; extern undefined4 DAT_008caba8;
extern undefined4 DAT_008cabac; extern undefined4 DAT_008cabb0; extern undefined4 DAT_008cabb4; extern undefined4 DAT_008cabb8;
extern undefined4 DAT_008cabbc; extern undefined4 DAT_008cabc0; extern undefined4 DAT_008cabc4; extern undefined4 DAT_008cabc8;
extern undefined4 DAT_008cabcc; extern undefined4 DAT_008cae98; extern undefined4 DAT_008cae9c; extern undefined4 DAT_008caea0;
extern undefined4 DAT_008caea4; extern undefined4 DAT_008caea8; extern undefined4 DAT_008caeac; extern undefined4 DAT_008cb018;
extern undefined4 DAT_008cb01c; extern undefined4 DAT_008cb020; extern undefined4 DAT_008cb024; extern undefined4 DAT_008cb028;
extern undefined4 DAT_008cb02c; extern undefined4 DAT_008cb228; extern undefined4 DAT_008cb22c; extern undefined4 DAT_008cb230;
extern undefined4 DAT_008cb234; extern undefined4 DAT_008cb238; extern undefined4 DAT_008cb23c; extern undefined4 DAT_008cb2e8;
extern undefined4 DAT_008cb2ec; extern undefined4 DAT_008cb2f0; extern undefined4 DAT_008cb2f4; extern undefined4 DAT_008cb2f8;
extern undefined4 DAT_008cb2fc; extern undefined4 DAT_008cb978; extern undefined4 DAT_008cb97c; extern undefined4 DAT_008cb980;
extern undefined4 DAT_008cb984; extern undefined4 DAT_008cb988; extern undefined4 DAT_008cb98c;
