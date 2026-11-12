#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00893204; extern undefined4 DAT_00893b64; extern undefined4 DAT_00893b80; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00894fa4; extern undefined4 DAT_00894fa8; extern undefined4 DAT_00894fa9; extern undefined4 DAT_00894faa;
extern undefined4 DAT_00894fab; extern undefined4 DAT_00894fac; extern undefined4 DAT_00894fad; extern undefined4 DAT_00894fae;
extern undefined4 DAT_00894faf; extern undefined4 DAT_00894fb0; extern undefined4 DAT_00894fb1; extern undefined4 DAT_00894fb2;
extern undefined4 DAT_00894fb3; extern undefined4 DAT_00894fb4; extern undefined4 DAT_00894fb5; extern undefined4 DAT_00894fb6;
extern undefined4 DAT_00894fb7; extern undefined4 DAT_00894fb8; extern undefined4 DAT_00894fb9; extern undefined4 DAT_00894fba;
extern undefined4 DAT_00894fbb; extern undefined4 DAT_00894fbc; extern undefined4 DAT_00894fbd; extern undefined4 DAT_00894fbe;
extern undefined4 DAT_00894fbf; extern undefined4 DAT_00894fc0; extern undefined4 DAT_00894fc1; extern undefined4 DAT_00894fc2;
extern undefined4 DAT_00894fc3; extern undefined4 DAT_00894fc4; extern undefined4 DAT_00894fc5; extern undefined4 DAT_00894fc6;
extern undefined4 DAT_00894fc7; extern undefined4 DAT_00894fc8; extern undefined4 DAT_00894fc9; extern undefined4 DAT_00894fca;
extern undefined4 DAT_00894fcb; extern undefined4 DAT_00894fcc; extern undefined4 DAT_00894fd0; extern undefined4 DAT_008950e4;
extern undefined4 DAT_008951f0; extern undefined4 DAT_008959c0; extern undefined4 DAT_008959c4; extern undefined4 DAT_008959c8;
extern undefined4 DAT_008959c9; extern undefined4 DAT_008959ca; extern undefined4 DAT_008959cb; extern undefined4 DAT_008959cc;
extern undefined4 DAT_008959d0; extern undefined4 DAT_008959d1; extern undefined4 DAT_008959d2; extern undefined4 DAT_008959d3;
extern undefined4 DAT_008959d4; extern undefined4 DAT_008959d5; extern undefined4 DAT_008959d6; extern undefined4 DAT_008959d7;
extern undefined4 DAT_008959d8; extern undefined4 DAT_008959d9; extern undefined4 DAT_008959da; extern undefined4 DAT_008959db;
extern undefined4 DAT_008959dc; extern undefined4 DAT_008959dd; extern undefined4 DAT_008959de; extern undefined4 DAT_008959df;
extern undefined4 DAT_008959e0; extern undefined4 DAT_008959e1; extern undefined4 DAT_008959e2; extern undefined4 DAT_008959e3;
extern undefined4 DAT_008959e4; extern undefined4 DAT_008959e5; extern undefined4 DAT_008959e6; extern undefined4 DAT_008959e7;
extern undefined4 DAT_008959e8; extern undefined4 DAT_008959ec; extern undefined4 DAT_00895b48; extern undefined4 DAT_00895b4c;
extern undefined4 DAT_00895b50; extern undefined4 DAT_00896354; extern undefined4 DAT_00896358; extern undefined4 DAT_008963ac;
extern undefined4 DAT_008963b0; extern undefined4 DAT_008963b4; extern undefined4 DAT_00896624; extern undefined4 DAT_00896628;
extern undefined4 DAT_0089662c; extern undefined4 DAT_0089663c; extern undefined4 DAT_00896650; extern undefined4 DAT_00896654;
extern undefined4 DAT_00896658; extern undefined4 DAT_00896678; extern undefined4 DAT_0089667c; extern undefined4 DAT_00896680;
extern undefined4 DAT_0089673c; extern undefined4 DAT_00896740; extern undefined4 DAT_00896744; extern undefined4 DAT_00896750;
extern undefined4 DAT_00896754; extern undefined4 DAT_00896758; extern undefined4 DAT_00896764; extern undefined4 DAT_00896768;
extern undefined4 DAT_0089676c; extern undefined4 DAT_00896790; extern undefined4 DAT_0089689c; extern undefined4 DAT_0089699c;
extern undefined4 DAT_008969a0; extern undefined4 DAT_008969a4; extern undefined4 DAT_008969bc; extern undefined4 DAT_008969c0;
extern undefined4 DAT_008969c4; extern undefined4 DAT_00896a88; extern undefined4 DAT_00896a8c; extern undefined4 DAT_00896a90;
extern undefined4 DAT_0089711c; extern undefined4 DAT_00897120; extern undefined4 DAT_00897124; extern undefined4 DAT_008988e4;
extern undefined4 DAT_008988e8; extern undefined4 DAT_00898904; extern undefined4 DAT_00898908; extern undefined4 DAT_008cba2c;
extern undefined4 DAT_008cba30; extern undefined4 DAT_008cba34; extern undefined4 DAT_008cba38; extern undefined4 DAT_008cba3c;
extern undefined4 DAT_008cba40; extern undefined4 DAT_008cc1b8; extern undefined4 DAT_008cc1bc; extern undefined4 DAT_008cc1c0;
extern undefined4 DAT_008cc1c4; extern undefined4 DAT_008cc1c8; extern undefined4 DAT_008cc1cc; extern undefined4 DAT_008cc2a8;
extern undefined4 DAT_008cc2ac; extern undefined4 DAT_008cc2b0; extern undefined4 DAT_008cc2b4; extern undefined4 DAT_008cc2b8;
extern undefined4 DAT_008cc2bc; extern undefined4 DAT_008cc8e0; extern undefined4 DAT_008cc8e4; extern undefined4 DAT_008cc8e8;
extern undefined4 DAT_008cc8ec; extern undefined4 DAT_008cc8f0; extern undefined4 DAT_008cc8f4; extern undefined4 DAT_008cc970;
extern undefined4 DAT_008cc974; extern undefined4 DAT_008cc978; extern undefined4 DAT_008cc97c; extern undefined4 DAT_008cc980;
extern undefined4 DAT_008cc984; extern undefined4 DAT_008ccb80; extern undefined4 DAT_008ccb84; extern undefined4 DAT_008ccb88;
extern undefined4 DAT_008ccb8c; extern undefined4 DAT_008ccb90; extern undefined4 DAT_008ccb94; extern undefined4 DAT_008ccbc8;
extern undefined4 DAT_008ccbcc; extern undefined4 DAT_008ccbd0; extern undefined4 DAT_008ccbd4; extern undefined4 DAT_008ccbd8;
extern undefined4 DAT_008ccbdc; extern undefined4 DAT_008ccbf8; extern undefined4 DAT_008ccbfc; extern undefined4 DAT_008ccc00;
extern undefined4 DAT_008ccc04; extern undefined4 DAT_008ccc08; extern undefined4 DAT_008ccc0c; extern undefined4 DAT_008ccc70;
extern undefined4 DAT_008ccc74; extern undefined4 DAT_008ccc78; extern undefined4 DAT_008ccc7c; extern undefined4 DAT_008ccc80;
extern undefined4 DAT_008ccc84; extern undefined4 DAT_008ccc88; extern undefined4 DAT_008ccc8c; extern undefined4 DAT_008ccc90;
extern undefined4 DAT_008ccc94; extern undefined4 DAT_008ccc98; extern undefined4 DAT_008ccc9c; extern undefined4 DAT_008ccca0;
extern undefined4 DAT_008ccca4; extern undefined4 DAT_008ccca8; extern undefined4 DAT_008cccac; extern undefined4 DAT_008cccb0;
extern undefined4 DAT_008cccb4; extern undefined4 DAT_008ccf10; extern undefined4 DAT_008ccf14; extern undefined4 DAT_008ccf18;
extern undefined4 DAT_008ccf1c; extern undefined4 DAT_008ccf20; extern undefined4 DAT_008ccf24; extern undefined4 DAT_008ccf28;
extern undefined4 DAT_008ccf2c; extern undefined4 DAT_008ccf30; extern undefined4 DAT_008ccf34; extern undefined4 DAT_008ccf38;
extern undefined4 DAT_008ccf3c; extern undefined4 DAT_008ccf58; extern undefined4 DAT_008ccf5c; extern undefined4 DAT_008ccf60;
extern undefined4 DAT_008ccf64; extern undefined4 DAT_008ccf68; extern undefined4 DAT_008ccf6c; extern undefined4 DAT_008cd824;
extern undefined4 DAT_008cd828; extern undefined4 DAT_008cd82c; extern undefined4 DAT_008cd830; extern undefined4 DAT_008cd834;
extern undefined4 DAT_008cd838; extern undefined4 DAT_008d016c; extern undefined4 DAT_008d0170; extern undefined4 DAT_008d0174;
extern undefined4 DAT_008d0178; extern undefined4 DAT_008d017c; extern undefined4 DAT_008d0180; extern undefined4 DAT_008d01cc;
extern undefined4 DAT_008d01d0; extern undefined4 DAT_008d01d4; extern undefined4 DAT_008d01d8; extern undefined4 DAT_008d01dc;
extern undefined4 DAT_008d01e0;
