#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00893af4; extern undefined4 DAT_00893af8; extern undefined4 DAT_00893afc; extern undefined4 DAT_00893b64;
extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678; extern undefined4 DAT_00894d50; extern undefined4 DAT_00894e3c;
extern undefined4 DAT_008951fc; extern undefined4 DAT_00895268; extern undefined4 DAT_0089526c; extern undefined4 DAT_00895270;
extern undefined4 DAT_00895308; extern undefined4 DAT_0089530c; extern undefined4 DAT_00895310; extern undefined4 DAT_00895318;
extern undefined4 DAT_0089544c; extern undefined4 DAT_00895458; extern undefined4 DAT_0089545c; extern undefined4 DAT_00895460;
extern undefined4 DAT_00895464; extern undefined4 DAT_008954ac; extern undefined4 DAT_008954b0; extern undefined4 DAT_008954b1;
extern undefined4 DAT_008954b2; extern undefined4 DAT_008954b3; extern undefined4 DAT_008954b4; extern undefined4 DAT_008954b5;
extern undefined4 DAT_008954b6; extern undefined4 DAT_008954b7; extern undefined4 DAT_008954b8; extern undefined4 DAT_008954b9;
extern undefined4 DAT_008954ba; extern undefined4 DAT_008954bb; extern undefined4 DAT_008954bc; extern undefined4 DAT_008954bd;
extern undefined4 DAT_008954be; extern undefined4 DAT_008954bf; extern undefined4 DAT_008954c0; extern undefined4 DAT_008954c1;
extern undefined4 DAT_008954c2; extern undefined4 DAT_008954c3; extern undefined4 DAT_008954c4; extern undefined4 DAT_008954c5;
extern undefined4 DAT_008954c6; extern undefined4 DAT_008954c7; extern undefined4 DAT_008954c8; extern undefined4 DAT_008954c9;
extern undefined4 DAT_008954ca; extern undefined4 DAT_008954cb; extern undefined4 DAT_008954cc; extern undefined4 DAT_008954cd;
extern undefined4 DAT_008954ce; extern undefined4 DAT_008954cf; extern undefined4 DAT_008954d0; extern undefined4 DAT_008954d1;
extern undefined4 DAT_008954d2; extern undefined4 DAT_008954d3; extern undefined4 DAT_008954d4; extern undefined4 DAT_008954d8;
extern undefined4 DAT_00895704; extern undefined4 DAT_00895708; extern undefined4 DAT_0089570c; extern undefined4 DAT_00895880;
extern undefined4 DAT_00895884; extern undefined4 DAT_00895a60; extern undefined4 DAT_00895a64; extern undefined4 DAT_00895a65;
extern undefined4 DAT_00895a66; extern undefined4 DAT_00895a67; extern undefined4 DAT_00895a68; extern undefined4 DAT_00895a69;
extern undefined4 DAT_00895a6a; extern undefined4 DAT_00895a6b; extern undefined4 DAT_00895a6c; extern undefined4 DAT_00895a6d;
extern undefined4 DAT_00895a6e; extern undefined4 DAT_00895a6f; extern undefined4 DAT_00895a70; extern undefined4 DAT_00895a71;
extern undefined4 DAT_00895a72; extern undefined4 DAT_00895a73; extern undefined4 DAT_00895a74; extern undefined4 DAT_00895a75;
extern undefined4 DAT_00895a76; extern undefined4 DAT_00895a77; extern undefined4 DAT_00895a78; extern undefined4 DAT_00895a79;
extern undefined4 DAT_00895a7a; extern undefined4 DAT_00895a7b; extern undefined4 DAT_00895a7c; extern undefined4 DAT_00895a7d;
extern undefined4 DAT_00895a7e; extern undefined4 DAT_00895a7f; extern undefined4 DAT_00895a80; extern undefined4 DAT_00895a81;
extern undefined4 DAT_00895a82; extern undefined4 DAT_00895a83; extern undefined4 DAT_00895a84; extern undefined4 DAT_00895a85;
extern undefined4 DAT_00895a86; extern undefined4 DAT_00895a87; extern undefined4 DAT_00895a88; extern undefined4 DAT_00895a8c;
extern undefined4 DAT_00895b3c; extern undefined4 DAT_00895b40; extern undefined4 DAT_00895b44; extern undefined4 DAT_00895c98;
extern undefined4 DAT_00895cc4; extern undefined4 DAT_00895cc8; extern undefined4 DAT_0089612c; extern undefined4 DAT_00896130;
extern undefined4 DAT_00896134; extern undefined4 DAT_00896984; extern undefined4 DAT_00896988; extern undefined4 DAT_0089698c;
extern undefined4 DAT_008969e8; extern undefined4 DAT_008969ec; extern undefined4 DAT_008969f0; extern undefined4 DAT_008969f4;
extern undefined4 DAT_00896a00; extern undefined4 DAT_00896a04; extern undefined4 DAT_0089727c; extern undefined4 DAT_00897280;
extern undefined4 DAT_008972e0; extern undefined4 DAT_008972e4; extern undefined4 DAT_008977a8; extern undefined4 DAT_008977ac;
extern undefined4 DAT_008977b0; extern undefined4 DAT_008cab70; extern undefined4 DAT_008cab74; extern undefined4 DAT_008cab78;
extern undefined4 DAT_008cab7c; extern undefined4 DAT_008cab80; extern undefined4 DAT_008cab84; extern undefined4 DAT_008cbc48;
extern undefined4 DAT_008cbc4c; extern undefined4 DAT_008cbc50; extern undefined4 DAT_008cbc54; extern undefined4 DAT_008cbc58;
extern undefined4 DAT_008cbc5c; extern undefined4 DAT_008cbd38; extern undefined4 DAT_008cbd3c; extern undefined4 DAT_008cbd40;
extern undefined4 DAT_008cbd44; extern undefined4 DAT_008cbd48; extern undefined4 DAT_008cbd4c; extern undefined4 DAT_008cbe34;
extern undefined4 DAT_008cbe38; extern undefined4 DAT_008cbe3c; extern undefined4 DAT_008cbe40; extern undefined4 DAT_008cbe44;
extern undefined4 DAT_008cbe48; extern undefined4 DAT_008cbeac; extern undefined4 DAT_008cbeb0; extern undefined4 DAT_008cbeb4;
extern undefined4 DAT_008cbeb8; extern undefined4 DAT_008cbebc; extern undefined4 DAT_008cbec0; extern undefined4 DAT_008cbff0;
extern undefined4 DAT_008cbff4; extern undefined4 DAT_008cbff8; extern undefined4 DAT_008cbffc; extern undefined4 DAT_008cc000;
extern undefined4 DAT_008cc004; extern undefined4 DAT_008cc140; extern undefined4 DAT_008cc144; extern undefined4 DAT_008cc148;
extern undefined4 DAT_008cc14c; extern undefined4 DAT_008cc150; extern undefined4 DAT_008cc154; extern undefined4 DAT_008cc218;
extern undefined4 DAT_008cc21c; extern undefined4 DAT_008cc220; extern undefined4 DAT_008cc224; extern undefined4 DAT_008cc228;
extern undefined4 DAT_008cc22c; extern undefined4 DAT_008cc290; extern undefined4 DAT_008cc294; extern undefined4 DAT_008cc298;
extern undefined4 DAT_008cc29c; extern undefined4 DAT_008cc2a0; extern undefined4 DAT_008cc2a4; extern undefined4 DAT_008cc4cc;
extern undefined4 DAT_008cc4d0; extern undefined4 DAT_008cc4d4; extern undefined4 DAT_008cc4d8; extern undefined4 DAT_008cc4dc;
extern undefined4 DAT_008cc4e0; extern undefined4 DAT_008cc76c; extern undefined4 DAT_008cc770; extern undefined4 DAT_008cc774;
extern undefined4 DAT_008cc778; extern undefined4 DAT_008cc77c; extern undefined4 DAT_008cc780; extern undefined4 DAT_008ccee0;
extern undefined4 DAT_008ccee4; extern undefined4 DAT_008ccee8; extern undefined4 DAT_008cceec; extern undefined4 DAT_008ccef0;
extern undefined4 DAT_008ccef4; extern undefined4 DAT_008ccf40; extern undefined4 DAT_008ccf44; extern undefined4 DAT_008ccf48;
extern undefined4 DAT_008ccf4c; extern undefined4 DAT_008ccf50; extern undefined4 DAT_008ccf54; extern undefined4 DAT_008cda64;
extern undefined4 DAT_008cda68; extern undefined4 DAT_008cda6c; extern undefined4 DAT_008cda70; extern undefined4 DAT_008cda74;
extern undefined4 DAT_008cda78; extern undefined4 DAT_008cdb0c; extern undefined4 DAT_008cdb10; extern undefined4 DAT_008cdb14;
extern undefined4 DAT_008cdb18; extern undefined4 DAT_008cdb1c; extern undefined4 DAT_008cdb20; extern undefined4 DAT_008cdd0c;
extern undefined4 DAT_008cdd10; extern undefined4 DAT_008cdd14; extern undefined4 DAT_008cdd18; extern undefined4 DAT_008cdd1c;
extern undefined4 DAT_008cdd20;
