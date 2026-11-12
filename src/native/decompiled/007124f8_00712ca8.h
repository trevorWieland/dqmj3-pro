#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0017fe34();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00893a84; extern undefined4 DAT_00893a88; extern undefined4 DAT_00893a8c; extern undefined4 DAT_00893b64;
extern undefined4 DAT_00893b68; extern undefined4 DAT_00893b6c; extern undefined4 DAT_00893b70; extern undefined4 DAT_00893b74;
extern undefined4 DAT_00893b78; extern undefined4 DAT_00893b80; extern undefined4 DAT_00893b84; extern undefined4 DAT_00893b88;
extern undefined4 DAT_00894038; extern undefined4 DAT_0089403c; extern undefined4 DAT_00894040; extern undefined4 DAT_00894478;
extern undefined4 DAT_0089447c; extern undefined4 DAT_00894480; extern undefined4 DAT_0089466c; extern undefined4 DAT_00894da8;
extern undefined4 DAT_00894dac; extern undefined4 DAT_00894db0; extern undefined4 DAT_00895318; extern undefined4 DAT_00895334;
extern undefined4 DAT_00895338; extern undefined4 DAT_0089533c; extern undefined4 DAT_0089533d; extern undefined4 DAT_0089533e;
extern undefined4 DAT_0089533f; extern undefined4 DAT_00895340; extern undefined4 DAT_00895344; extern undefined4 DAT_00895345;
extern undefined4 DAT_00895346; extern undefined4 DAT_00895347; extern undefined4 DAT_00895348; extern undefined4 DAT_00895349;
extern undefined4 DAT_0089534a; extern undefined4 DAT_0089534b; extern undefined4 DAT_0089534c; extern undefined4 DAT_0089534d;
extern undefined4 DAT_0089534e; extern undefined4 DAT_0089534f; extern undefined4 DAT_00895350; extern undefined4 DAT_00895351;
extern undefined4 DAT_00895352; extern undefined4 DAT_00895353; extern undefined4 DAT_00895354; extern undefined4 DAT_00895355;
extern undefined4 DAT_00895356; extern undefined4 DAT_00895357; extern undefined4 DAT_00895358; extern undefined4 DAT_00895359;
extern undefined4 DAT_0089535a; extern undefined4 DAT_0089535b; extern undefined4 DAT_0089535c; extern undefined4 DAT_00895360;
extern undefined4 DAT_0089544c; extern undefined4 DAT_00895458; extern undefined4 DAT_00895464; extern undefined4 DAT_00895468;
extern undefined4 DAT_0089546c; extern undefined4 DAT_008956c8; extern undefined4 DAT_008956cc; extern undefined4 DAT_008956cd;
extern undefined4 DAT_008956ce; extern undefined4 DAT_008956cf; extern undefined4 DAT_008956d0; extern undefined4 DAT_008956d1;
extern undefined4 DAT_008956d2; extern undefined4 DAT_008956d3; extern undefined4 DAT_008956d4; extern undefined4 DAT_008956d5;
extern undefined4 DAT_008956d6; extern undefined4 DAT_008956d7; extern undefined4 DAT_008956d8; extern undefined4 DAT_008956d9;
extern undefined4 DAT_008956da; extern undefined4 DAT_008956db; extern undefined4 DAT_008956dc; extern undefined4 DAT_008956dd;
extern undefined4 DAT_008956de; extern undefined4 DAT_008956df; extern undefined4 DAT_008956e0; extern undefined4 DAT_008956e1;
extern undefined4 DAT_008956e2; extern undefined4 DAT_008956e3; extern undefined4 DAT_008956e4; extern undefined4 DAT_008956e5;
extern undefined4 DAT_008956e6; extern undefined4 DAT_008956e7; extern undefined4 DAT_008956e8; extern undefined4 DAT_008956e9;
extern undefined4 DAT_008956ea; extern undefined4 DAT_008956eb; extern undefined4 DAT_008956ec; extern undefined4 DAT_008956ed;
extern undefined4 DAT_008956ee; extern undefined4 DAT_008956ef; extern undefined4 DAT_008956f0; extern undefined4 DAT_008956f4;
extern undefined4 DAT_00895804; extern undefined4 DAT_00895808; extern undefined4 DAT_00895809; extern undefined4 DAT_0089580a;
extern undefined4 DAT_0089580b; extern undefined4 DAT_0089580c; extern undefined4 DAT_0089580d; extern undefined4 DAT_0089580e;
extern undefined4 DAT_0089580f; extern undefined4 DAT_00895810; extern undefined4 DAT_00895811; extern undefined4 DAT_00895812;
extern undefined4 DAT_00895813; extern undefined4 DAT_00895814; extern undefined4 DAT_00895815; extern undefined4 DAT_00895816;
extern undefined4 DAT_00895817; extern undefined4 DAT_00895818; extern undefined4 DAT_00895819; extern undefined4 DAT_0089581a;
extern undefined4 DAT_0089581b; extern undefined4 DAT_0089581c; extern undefined4 DAT_0089581d; extern undefined4 DAT_0089581e;
extern undefined4 DAT_0089581f; extern undefined4 DAT_00895820; extern undefined4 DAT_00895821; extern undefined4 DAT_00895822;
extern undefined4 DAT_00895823; extern undefined4 DAT_00895824; extern undefined4 DAT_00895825; extern undefined4 DAT_00895826;
extern undefined4 DAT_00895827; extern undefined4 DAT_00895828; extern undefined4 DAT_00895829; extern undefined4 DAT_0089582a;
extern undefined4 DAT_0089582b; extern undefined4 DAT_0089582c; extern undefined4 DAT_00895830; extern undefined4 DAT_00895df8;
extern undefined4 DAT_00895dfc; extern undefined4 DAT_00895e00; extern undefined4 DAT_00895e01; extern undefined4 DAT_00895e02;
extern undefined4 DAT_00895e03; extern undefined4 DAT_00895e04; extern undefined4 DAT_00895e08; extern undefined4 DAT_00895e09;
extern undefined4 DAT_00895e0a; extern undefined4 DAT_00895e0b; extern undefined4 DAT_00895e0c; extern undefined4 DAT_00895e0d;
extern undefined4 DAT_00895e0e; extern undefined4 DAT_00895e0f; extern undefined4 DAT_00895e10; extern undefined4 DAT_00895e11;
extern undefined4 DAT_00895e12; extern undefined4 DAT_00895e13; extern undefined4 DAT_00895e14; extern undefined4 DAT_00895e15;
extern undefined4 DAT_00895e16; extern undefined4 DAT_00895e17; extern undefined4 DAT_00895e18; extern undefined4 DAT_00895e19;
extern undefined4 DAT_00895e1a; extern undefined4 DAT_00895e1b; extern undefined4 DAT_00895e1c; extern undefined4 DAT_00895e1d;
extern undefined4 DAT_00895e1e; extern undefined4 DAT_00895e1f; extern undefined4 DAT_00895e20; extern undefined4 DAT_00895e24;
extern undefined4 DAT_00895e28; extern undefined4 DAT_008caaf8; extern undefined4 DAT_008caafc; extern undefined4 DAT_008cab00;
extern undefined4 DAT_008cab04; extern undefined4 DAT_008cab08; extern undefined4 DAT_008cab0c; extern undefined4 DAT_008cac30;
extern undefined4 DAT_008cac34; extern undefined4 DAT_008cac38; extern undefined4 DAT_008cac3c; extern undefined4 DAT_008cac40;
extern undefined4 DAT_008cac44; extern undefined4 DAT_008cac48; extern undefined4 DAT_008cac4c; extern undefined4 DAT_008cac50;
extern undefined4 DAT_008cac54; extern undefined4 DAT_008cac58; extern undefined4 DAT_008cac5c; extern undefined4 DAT_008cac60;
extern undefined4 DAT_008cac64; extern undefined4 DAT_008cac68; extern undefined4 DAT_008cac6c; extern undefined4 DAT_008cac70;
extern undefined4 DAT_008cac74; extern undefined4 DAT_008cafb8; extern undefined4 DAT_008cafbc; extern undefined4 DAT_008cafc0;
extern undefined4 DAT_008cafc4; extern undefined4 DAT_008cafc8; extern undefined4 DAT_008cafcc; extern undefined4 DAT_008cb330;
extern undefined4 DAT_008cb334; extern undefined4 DAT_008cb338; extern undefined4 DAT_008cb33c; extern undefined4 DAT_008cb340;
extern undefined4 DAT_008cb344; extern undefined4 DAT_008cb870; extern undefined4 DAT_008cb874; extern undefined4 DAT_008cb878;
extern undefined4 DAT_008cb87c; extern undefined4 DAT_008cb880; extern undefined4 DAT_008cb884; extern undefined4 DAT_008cbd8c;
extern undefined4 DAT_008cbd90; extern undefined4 DAT_008cbd94; extern undefined4 DAT_008cbd98; extern undefined4 DAT_008cbd9c;
extern undefined4 DAT_008cbda0; extern undefined4 DAT_008cbe4c; extern undefined4 DAT_008cbe50; extern undefined4 DAT_008cbe54;
extern undefined4 DAT_008cbe58; extern undefined4 DAT_008cbe5c; extern undefined4 DAT_008cbe60; extern undefined4 DAT_008cbfd8;
extern undefined4 DAT_008cbfdc; extern undefined4 DAT_008cbfe0; extern undefined4 DAT_008cbfe4; extern undefined4 DAT_008cbfe8;
extern undefined4 DAT_008cbfec; extern undefined4 DAT_008cc080; extern undefined4 DAT_008cc084; extern undefined4 DAT_008cc088;
extern undefined4 DAT_008cc08c; extern undefined4 DAT_008cc090; extern undefined4 DAT_008cc094; extern undefined4 DAT_008cc098;
extern undefined4 DAT_008cc09c; extern undefined4 DAT_008cc0a0; extern undefined4 DAT_008cc0a4; extern undefined4 DAT_008cc0a8;
extern undefined4 DAT_008cc0ac; extern undefined4 DAT_008cc0b0; extern undefined4 DAT_008cc0b4; extern undefined4 DAT_008cc0b8;
extern undefined4 DAT_008cc0bc; extern undefined4 DAT_008cc0c0; extern undefined4 DAT_008cc0c4; extern undefined4 DAT_008cc0c8;
extern undefined4 DAT_008cc0cc; extern undefined4 DAT_008cc0d0; extern undefined4 DAT_008cc0d4; extern undefined4 DAT_008cc0d8;
extern undefined4 DAT_008cc0dc; extern undefined4 DAT_008cc5d4; extern undefined4 DAT_008cc5d8; extern undefined4 DAT_008cc5dc;
extern undefined4 DAT_008cc5e0; extern undefined4 DAT_008cc5e4; extern undefined4 DAT_008cc5e8;
