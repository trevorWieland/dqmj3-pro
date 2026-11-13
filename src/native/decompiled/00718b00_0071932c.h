#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00894460; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894b4c; extern undefined4 DAT_00894b50;
extern undefined4 DAT_00894b54; extern undefined4 DAT_00894b78; extern undefined4 DAT_00894b7c; extern undefined4 DAT_00894b80;
extern undefined4 DAT_00894ba4; extern undefined4 DAT_00894ba8; extern undefined4 DAT_00894bac; extern undefined4 DAT_00894c5c;
extern undefined4 DAT_00894c60; extern undefined4 DAT_00894c64; extern undefined4 DAT_00894c78; extern undefined4 DAT_00894c7c;
extern undefined4 DAT_00894c80; extern undefined4 DAT_00894da8; extern undefined4 DAT_00894dc0; extern undefined4 DAT_00894dc4;
extern undefined4 DAT_00894dc8; extern undefined4 DAT_00894dd8; extern undefined4 DAT_00894ddc; extern undefined4 DAT_00894de0;
extern undefined4 DAT_00894e54; extern undefined4 DAT_00894e58; extern undefined4 DAT_00894e5c; extern undefined4 DAT_00894e70;
extern undefined4 DAT_00894e74; extern undefined4 DAT_00894e78; extern undefined4 DAT_00894f20; extern undefined4 DAT_00894f24;
extern undefined4 DAT_00894f28; extern undefined4 DAT_008950b4; extern undefined4 DAT_008950e4; extern undefined4 DAT_008950e8;
extern undefined4 DAT_008950e9; extern undefined4 DAT_008950ea; extern undefined4 DAT_008950eb; extern undefined4 DAT_008950ec;
extern undefined4 DAT_008950ed; extern undefined4 DAT_008950ee; extern undefined4 DAT_008950ef; extern undefined4 DAT_008950f0;
extern undefined4 DAT_008950f1; extern undefined4 DAT_008950f2; extern undefined4 DAT_008950f3; extern undefined4 DAT_008950f4;
extern undefined4 DAT_008950f5; extern undefined4 DAT_008950f6; extern undefined4 DAT_008950f7; extern undefined4 DAT_008950f8;
extern undefined4 DAT_008950f9; extern undefined4 DAT_008950fa; extern undefined4 DAT_008950fb; extern undefined4 DAT_008950fc;
extern undefined4 DAT_008950fd; extern undefined4 DAT_008950fe; extern undefined4 DAT_008950ff; extern undefined4 DAT_00895100;
extern undefined4 DAT_00895101; extern undefined4 DAT_00895102; extern undefined4 DAT_00895103; extern undefined4 DAT_00895104;
extern undefined4 DAT_00895105; extern undefined4 DAT_00895106; extern undefined4 DAT_00895107; extern undefined4 DAT_00895108;
extern undefined4 DAT_00895109; extern undefined4 DAT_0089510a; extern undefined4 DAT_0089510b; extern undefined4 DAT_0089510c;
extern undefined4 DAT_00895110; extern undefined4 DAT_00895150; extern undefined4 DAT_00895180; extern undefined4 DAT_00895184;
extern undefined4 DAT_00895185; extern undefined4 DAT_00895186; extern undefined4 DAT_00895187; extern undefined4 DAT_00895188;
extern undefined4 DAT_00895189; extern undefined4 DAT_0089518a; extern undefined4 DAT_0089518b; extern undefined4 DAT_0089518c;
extern undefined4 DAT_0089518d; extern undefined4 DAT_0089518e; extern undefined4 DAT_0089518f; extern undefined4 DAT_00895190;
extern undefined4 DAT_00895191; extern undefined4 DAT_00895192; extern undefined4 DAT_00895193; extern undefined4 DAT_00895194;
extern undefined4 DAT_00895195; extern undefined4 DAT_00895196; extern undefined4 DAT_00895197; extern undefined4 DAT_00895198;
extern undefined4 DAT_00895199; extern undefined4 DAT_0089519a; extern undefined4 DAT_0089519b; extern undefined4 DAT_0089519c;
extern undefined4 DAT_0089519d; extern undefined4 DAT_0089519e; extern undefined4 DAT_0089519f; extern undefined4 DAT_008951a0;
extern undefined4 DAT_008951a1; extern undefined4 DAT_008951a2; extern undefined4 DAT_008951a3; extern undefined4 DAT_008951a4;
extern undefined4 DAT_008951a5; extern undefined4 DAT_008951a6; extern undefined4 DAT_008951a7; extern undefined4 DAT_008951b0;
extern undefined4 DAT_008951b4; extern undefined4 DAT_008951f0; extern undefined4 DAT_0089541c; extern undefined4 DAT_00895420;
extern undefined4 DAT_00895421; extern undefined4 DAT_00895422; extern undefined4 DAT_00895423; extern undefined4 DAT_00895424;
extern undefined4 DAT_00895425; extern undefined4 DAT_00895426; extern undefined4 DAT_00895427; extern undefined4 DAT_00895428;
extern undefined4 DAT_00895429; extern undefined4 DAT_0089542a; extern undefined4 DAT_0089542b; extern undefined4 DAT_0089542c;
extern undefined4 DAT_0089542d; extern undefined4 DAT_0089542e; extern undefined4 DAT_0089542f; extern undefined4 DAT_00895430;
extern undefined4 DAT_00895431; extern undefined4 DAT_00895432; extern undefined4 DAT_00895433; extern undefined4 DAT_00895434;
extern undefined4 DAT_00895435; extern undefined4 DAT_00895436; extern undefined4 DAT_00895437; extern undefined4 DAT_00895438;
extern undefined4 DAT_00895439; extern undefined4 DAT_0089543a; extern undefined4 DAT_0089543b; extern undefined4 DAT_0089543c;
extern undefined4 DAT_0089543d; extern undefined4 DAT_0089543e; extern undefined4 DAT_0089543f; extern undefined4 DAT_00895440;
extern undefined4 DAT_00895441; extern undefined4 DAT_00895442; extern undefined4 DAT_00895443; extern undefined4 DAT_00895444;
extern undefined4 DAT_00895448; extern undefined4 DAT_0089544c; extern undefined4 DAT_00895458; extern undefined4 DAT_00895494;
extern undefined4 DAT_00895498; extern undefined4 DAT_0089549c; extern undefined4 DAT_00895858; extern undefined4 DAT_0089585c;
extern undefined4 DAT_008cb618; extern undefined4 DAT_008cb61c; extern undefined4 DAT_008cb620; extern undefined4 DAT_008cb624;
extern undefined4 DAT_008cb628; extern undefined4 DAT_008cb62c; extern undefined4 DAT_008cb648; extern undefined4 DAT_008cb64c;
extern undefined4 DAT_008cb650; extern undefined4 DAT_008cb654; extern undefined4 DAT_008cb658; extern undefined4 DAT_008cb65c;
extern undefined4 DAT_008cb678; extern undefined4 DAT_008cb67c; extern undefined4 DAT_008cb680; extern undefined4 DAT_008cb684;
extern undefined4 DAT_008cb688; extern undefined4 DAT_008cb68c; extern undefined4 DAT_008cb6d8; extern undefined4 DAT_008cb6dc;
extern undefined4 DAT_008cb6e0; extern undefined4 DAT_008cb6e4; extern undefined4 DAT_008cb6e8; extern undefined4 DAT_008cb6ec;
extern undefined4 DAT_008cb708; extern undefined4 DAT_008cb70c; extern undefined4 DAT_008cb710; extern undefined4 DAT_008cb714;
extern undefined4 DAT_008cb718; extern undefined4 DAT_008cb71c; extern undefined4 DAT_008cb8a0; extern undefined4 DAT_008cb8a4;
extern undefined4 DAT_008cb8a8; extern undefined4 DAT_008cb8ac; extern undefined4 DAT_008cb8b0; extern undefined4 DAT_008cb8b4;
extern undefined4 DAT_008cb8b8; extern undefined4 DAT_008cb8bc; extern undefined4 DAT_008cb8c0; extern undefined4 DAT_008cb8c4;
extern undefined4 DAT_008cb8c8; extern undefined4 DAT_008cb8cc; extern undefined4 DAT_008cb918; extern undefined4 DAT_008cb91c;
extern undefined4 DAT_008cb920; extern undefined4 DAT_008cb924; extern undefined4 DAT_008cb928; extern undefined4 DAT_008cb92c;
extern undefined4 DAT_008cb930; extern undefined4 DAT_008cb934; extern undefined4 DAT_008cb938; extern undefined4 DAT_008cb93c;
extern undefined4 DAT_008cb940; extern undefined4 DAT_008cb944; extern undefined4 DAT_008cb9cc; extern undefined4 DAT_008cb9d0;
extern undefined4 DAT_008cb9d4; extern undefined4 DAT_008cb9d8; extern undefined4 DAT_008cb9dc; extern undefined4 DAT_008cb9e0;
extern undefined4 DAT_008cbad4; extern undefined4 DAT_008cbad8; extern undefined4 DAT_008cbadc; extern undefined4 DAT_008cbae0;
extern undefined4 DAT_008cbae4; extern undefined4 DAT_008cbae8; extern undefined4 DAT_008cbb34; extern undefined4 DAT_008cbb38;
extern undefined4 DAT_008cbb3c; extern undefined4 DAT_008cbb40; extern undefined4 DAT_008cbb44; extern undefined4 DAT_008cbb48;
extern undefined4 DAT_008cbe04; extern undefined4 DAT_008cbe08; extern undefined4 DAT_008cbe0c; extern undefined4 DAT_008cbe10;
extern undefined4 DAT_008cbe14; extern undefined4 DAT_008cbe18; extern undefined4 DAT_008cbe94; extern undefined4 DAT_008cbe98;
extern undefined4 DAT_008cbe9c; extern undefined4 DAT_008cbea0; extern undefined4 DAT_008cbea4; extern undefined4 DAT_008cbea8;
extern undefined4 DAT_008cc110; extern undefined4 DAT_008cc114; extern undefined4 DAT_008cc118; extern undefined4 DAT_008cc11c;
extern undefined4 DAT_008cc120; extern undefined4 DAT_008cc124;
