#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890b20; extern undefined4 DAT_00890b24; extern undefined4 DAT_00890b28; extern undefined4 DAT_00890b2c;
extern undefined4 DAT_00890b30; extern undefined4 DAT_00890b34; extern undefined4 DAT_00892b20; extern undefined4 DAT_00892b24;
extern undefined4 DAT_00892b28; extern undefined4 DAT_00892ef0; extern undefined4 DAT_00892ef4; extern undefined4 DAT_00892ef8;
extern undefined4 DAT_00892fe8; extern undefined4 DAT_00892fec; extern undefined4 DAT_00892ff0; extern undefined4 DAT_00893b10;
extern undefined4 DAT_00893b64; extern undefined4 DAT_00893b70; extern undefined4 DAT_00894484; extern undefined4 DAT_008944b4;
extern undefined4 DAT_00894658; extern undefined4 DAT_0089465c; extern undefined4 DAT_00894660; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00894678; extern undefined4 DAT_008951cc; extern undefined4 DAT_008951fc; extern undefined4 DAT_00895e88;
extern undefined4 DAT_00895e8c; extern undefined4 DAT_00895e90; extern undefined4 DAT_00896fa8; extern undefined4 DAT_00896fac;
extern undefined4 DAT_00896fb0; extern undefined4 DAT_00896ffc; extern undefined4 DAT_0089700c; extern undefined4 DAT_0089704c;
extern undefined4 DAT_00897134; extern undefined4 DAT_0089718c; extern undefined4 DAT_008971a4; extern undefined4 DAT_008971a8;
extern undefined4 DAT_008971ac; extern undefined4 DAT_00898ddc; extern undefined4 DAT_00898de0; extern undefined4 DAT_00898de1;
extern undefined4 DAT_00898de2; extern undefined4 DAT_00898de3; extern undefined4 DAT_00898de4; extern undefined4 DAT_00898de5;
extern undefined4 DAT_00898de6; extern undefined4 DAT_00898de7; extern undefined4 DAT_00898de8; extern undefined4 DAT_00898de9;
extern undefined4 DAT_00898dea; extern undefined4 DAT_00898deb; extern undefined4 DAT_00898dec; extern undefined4 DAT_00898ded;
extern undefined4 DAT_00898dee; extern undefined4 DAT_00898def; extern undefined4 DAT_00898df0; extern undefined4 DAT_00898df1;
extern undefined4 DAT_00898df2; extern undefined4 DAT_00898df3; extern undefined4 DAT_00898df4; extern undefined4 DAT_00898df5;
extern undefined4 DAT_00898df6; extern undefined4 DAT_00898df7; extern undefined4 DAT_00898df8; extern undefined4 DAT_00898df9;
extern undefined4 DAT_00898dfa; extern undefined4 DAT_00898dfb; extern undefined4 DAT_00898dfc; extern undefined4 DAT_00898dfd;
extern undefined4 DAT_00898dfe; extern undefined4 DAT_00898dff; extern undefined4 DAT_00898e00; extern undefined4 DAT_00898e01;
extern undefined4 DAT_00898e02; extern undefined4 DAT_00898e03; extern undefined4 DAT_00898e04; extern undefined4 DAT_00898e08;
extern undefined4 DAT_00898ed0; extern undefined4 DAT_00898ed4; extern undefined4 DAT_00898ed8; extern undefined4 DAT_00899044;
extern undefined4 DAT_00899048; extern undefined4 DAT_0089904c; extern undefined4 DAT_00899080; extern undefined4 DAT_00899084;
extern undefined4 DAT_00899088; extern undefined4 DAT_008990b0; extern undefined4 DAT_008990b4; extern undefined4 DAT_008990b8;
extern undefined4 DAT_00899128; extern undefined4 DAT_0089912c; extern undefined4 DAT_00899130; extern undefined4 DAT_008991b4;
extern undefined4 DAT_008991b8; extern undefined4 DAT_008991bc; extern undefined4 DAT_008991c0; extern undefined4 DAT_008991c4;
extern undefined4 DAT_008991c8; extern undefined4 DAT_008c80ec; extern undefined4 DAT_008c80f0; extern undefined4 DAT_008c80f4;
extern undefined4 DAT_008c80f8; extern undefined4 DAT_008c80fc; extern undefined4 DAT_008c8100; extern undefined4 DAT_008c8104;
extern undefined4 DAT_008c8108; extern undefined4 DAT_008c810c; extern undefined4 DAT_008c8110; extern undefined4 DAT_008c8114;
extern undefined4 DAT_008c8118; extern undefined4 DAT_008c9af8; extern undefined4 DAT_008c9afc; extern undefined4 DAT_008c9b00;
extern undefined4 DAT_008c9b04; extern undefined4 DAT_008c9b08; extern undefined4 DAT_008c9b0c; extern undefined4 DAT_008c9f48;
extern undefined4 DAT_008c9f4c; extern undefined4 DAT_008c9f50; extern undefined4 DAT_008c9f54; extern undefined4 DAT_008c9f58;
extern undefined4 DAT_008c9f5c; extern undefined4 DAT_008ca0d8; extern undefined4 DAT_008ca0dc; extern undefined4 DAT_008ca0e0;
extern undefined4 DAT_008ca0e4; extern undefined4 DAT_008ca0e8; extern undefined4 DAT_008ca0ec; extern undefined4 DAT_008cb4e0;
extern undefined4 DAT_008cb4e4; extern undefined4 DAT_008cb4e8; extern undefined4 DAT_008cb4ec; extern undefined4 DAT_008cb4f0;
extern undefined4 DAT_008cb4f4; extern undefined4 DAT_008cc61c; extern undefined4 DAT_008cc620; extern undefined4 DAT_008cc624;
extern undefined4 DAT_008cc628; extern undefined4 DAT_008cc62c; extern undefined4 DAT_008cc630; extern undefined4 DAT_008cd644;
extern undefined4 DAT_008cd648; extern undefined4 DAT_008cd64c; extern undefined4 DAT_008cd650; extern undefined4 DAT_008cd654;
extern undefined4 DAT_008cd658; extern undefined4 DAT_008cd92c; extern undefined4 DAT_008cd930; extern undefined4 DAT_008cd934;
extern undefined4 DAT_008cd938; extern undefined4 DAT_008cd93c; extern undefined4 DAT_008cd940; extern undefined4 DAT_008d1224;
extern undefined4 DAT_008d1228; extern undefined4 DAT_008d122c; extern undefined4 DAT_008d1230; extern undefined4 DAT_008d1234;
extern undefined4 DAT_008d1238; extern undefined4 DAT_008d12b4; extern undefined4 DAT_008d12b8; extern undefined4 DAT_008d12bc;
extern undefined4 DAT_008d12c0; extern undefined4 DAT_008d12c4; extern undefined4 DAT_008d12c8; extern undefined4 DAT_008d141c;
extern undefined4 DAT_008d1420; extern undefined4 DAT_008d1424; extern undefined4 DAT_008d1428; extern undefined4 DAT_008d142c;
extern undefined4 DAT_008d1430; extern undefined4 DAT_008d1494; extern undefined4 DAT_008d1498; extern undefined4 DAT_008d149c;
extern undefined4 DAT_008d14a0; extern undefined4 DAT_008d14a4; extern undefined4 DAT_008d14a8; extern undefined4 DAT_008d14f4;
extern undefined4 DAT_008d14f8; extern undefined4 DAT_008d14fc; extern undefined4 DAT_008d1500; extern undefined4 DAT_008d1504;
extern undefined4 DAT_008d1508; extern undefined4 DAT_008d159c; extern undefined4 DAT_008d15a0; extern undefined4 DAT_008d15a4;
extern undefined4 DAT_008d15a8; extern undefined4 DAT_008d15ac; extern undefined4 DAT_008d15b0; extern undefined4 DAT_008d165c;
extern undefined4 DAT_008d1660; extern undefined4 DAT_008d1664; extern undefined4 DAT_008d1668; extern undefined4 DAT_008d166c;
extern undefined4 DAT_008d1670; extern undefined4 DAT_008d1674; extern undefined4 DAT_008d1678; extern undefined4 DAT_008d167c;
extern undefined4 DAT_008d1680; extern undefined4 DAT_008d1684; extern undefined4 DAT_008d1688;
