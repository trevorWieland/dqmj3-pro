#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00303b10(); extern undefined4 fn_00657340(); extern undefined4 * fn_0067408c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001ad748(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0045469c; extern undefined4 DAT_00657354; extern undefined4 DAT_0085269c; extern undefined4 DAT_008526b4;
extern undefined4 DAT_00890ae4; extern undefined4 DAT_00890ae8; extern undefined4 DAT_00890aec; extern undefined4 DAT_00890af0;
extern undefined4 DAT_00890c20; extern undefined4 DAT_00890c24; extern undefined4 DAT_00890f8c; extern undefined4 DAT_00890f90;
extern undefined4 DAT_00890f94; extern undefined4 DAT_00890fac; extern undefined4 DAT_00890fb0; extern undefined4 DAT_00890fb4;
extern undefined4 DAT_008922b0; extern undefined4 DAT_008922b4; extern undefined4 DAT_008923bc; extern undefined4 DAT_008923c0;
extern undefined4 DAT_00892428; extern undefined4 DAT_0089242c; extern undefined4 DAT_00892d74; extern undefined4 DAT_00892d78;
extern undefined4 DAT_00892d7c; extern undefined4 DAT_00893204; extern undefined4 DAT_00893210; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00897868; extern undefined4 DAT_0089786c; extern undefined4 DAT_008981c0; extern undefined4 DAT_008981c1;
extern undefined4 DAT_008981c2; extern undefined4 DAT_008981c3; extern undefined4 DAT_008981c4; extern undefined4 DAT_008981c5;
extern undefined4 DAT_008981c6; extern undefined4 DAT_008981c7; extern undefined4 DAT_008981c8; extern undefined4 DAT_008981c9;
extern undefined4 DAT_008981ca; extern undefined4 DAT_008981cb; extern undefined4 DAT_008981cc; extern undefined4 DAT_008981cd;
extern undefined4 DAT_008981ce; extern undefined4 DAT_008981cf; extern undefined4 DAT_008981d0; extern undefined4 DAT_008981d1;
extern undefined4 DAT_008981d2; extern undefined4 DAT_008981d3; extern undefined4 DAT_008981d4; extern undefined4 DAT_008981d5;
extern undefined4 DAT_008981d6; extern undefined4 DAT_008981d7; extern undefined4 DAT_008981d8; extern undefined4 DAT_008981d9;
extern undefined4 DAT_008981da; extern undefined4 DAT_008981db; extern undefined4 DAT_008981dc; extern undefined4 DAT_008981dd;
extern undefined4 DAT_008981de; extern undefined4 DAT_008981df; extern undefined4 DAT_008981e0; extern undefined4 DAT_008981e1;
extern undefined4 DAT_008981e2; extern undefined4 DAT_008981e3; extern undefined4 DAT_008981e4; extern undefined4 DAT_008981e5;
extern undefined4 DAT_008981e6; extern undefined4 DAT_008981e7; extern undefined4 DAT_008981e8; extern undefined4 DAT_008981ec;
extern undefined4 DAT_008981f0; extern undefined4 DAT_008981f4; extern undefined4 DAT_0089892c; extern undefined4 DAT_00898930;
extern undefined4 DAT_00898cd0; extern undefined4 DAT_00898cd4; extern undefined4 DAT_008c346c; extern undefined4 DAT_008c3470;
extern undefined4 DAT_008c3d00; extern undefined4 DAT_008c3d08; extern undefined4 DAT_008c3d10; extern undefined4 DAT_008c3d18;
extern undefined4 DAT_008c8074; extern undefined4 DAT_008c8078; extern undefined4 DAT_008c807c; extern undefined4 DAT_008c8080;
extern undefined4 DAT_008c8084; extern undefined4 DAT_008c8088; extern undefined4 DAT_008c829c; extern undefined4 DAT_008c82a0;
extern undefined4 DAT_008c82a4; extern undefined4 DAT_008c82a8; extern undefined4 DAT_008c82ac; extern undefined4 DAT_008c82b0;
extern undefined4 DAT_008c84c4; extern undefined4 DAT_008c84c8; extern undefined4 DAT_008c84cc; extern undefined4 DAT_008c84d0;
extern undefined4 DAT_008c84d4; extern undefined4 DAT_008c84d8; extern undefined4 DAT_008c84dc; extern undefined4 DAT_008c84e0;
extern undefined4 DAT_008c84e4; extern undefined4 DAT_008c84e8; extern undefined4 DAT_008c84ec; extern undefined4 DAT_008c84f0;
extern undefined4 DAT_008c9460; extern undefined4 DAT_008c9464; extern undefined4 DAT_008c9468; extern undefined4 DAT_008c946c;
extern undefined4 DAT_008c9470; extern undefined4 DAT_008c9474; extern undefined4 DAT_008c9544; extern undefined4 DAT_008c9548;
extern undefined4 DAT_008c954c; extern undefined4 DAT_008c9550; extern undefined4 DAT_008c9554; extern undefined4 DAT_008c9558;
extern undefined4 DAT_008c95ec; extern undefined4 DAT_008c95f0; extern undefined4 DAT_008c95f4; extern undefined4 DAT_008c95f8;
extern undefined4 DAT_008c95fc; extern undefined4 DAT_008c9600; extern undefined4 DAT_008c9d38; extern undefined4 DAT_008c9d3c;
extern undefined4 DAT_008c9d40; extern undefined4 DAT_008c9d44; extern undefined4 DAT_008c9d48; extern undefined4 DAT_008c9d4c;
extern undefined4 DAT_008c9d50; extern undefined4 DAT_008cdd6c; extern undefined4 DAT_008cdd70; extern undefined4 DAT_008cdd74;
extern undefined4 DAT_008cdd78; extern undefined4 DAT_008cdd7c; extern undefined4 DAT_008cdd80; extern undefined4 DAT_008cfde8;
extern undefined4 DAT_008cfdec; extern undefined4 DAT_008cfdf0; extern undefined4 DAT_008cfdf4; extern undefined4 DAT_008cfdf8;
extern undefined4 DAT_008cfdfc; extern undefined4 DAT_008cfe00; extern undefined4 DAT_008cfe04; extern undefined4 DAT_008cfe08;
extern undefined4 DAT_008cfe0c; extern undefined4 DAT_008cfe10; extern undefined4 DAT_008cfe14; extern undefined4 DAT_008d0244;
extern undefined4 DAT_008d0248; extern undefined4 DAT_008d024c; extern undefined4 DAT_008d0250; extern undefined4 DAT_008d0254;
extern undefined4 DAT_008d0258; extern undefined4 DAT_008d1164; extern undefined4 DAT_008d1168; extern undefined4 DAT_008d116c;
extern undefined4 DAT_008d1170; extern undefined4 DAT_008d1174; extern undefined4 DAT_008d1178; extern undefined4 DAT_008e36d8;
extern undefined4 DAT_008e36dc; extern undefined4 DAT_008e36e0; extern undefined4 DAT_008e36e4; extern undefined4 DAT_008e36e8;
extern undefined4 DAT_008e36ec; extern undefined4 DAT_008e36f0; extern undefined4 DAT_008e372c; extern undefined4 DAT_008e3730;
extern undefined4 DAT_008e3734; extern undefined4 DAT_008e3738; extern undefined4 DAT_008e373c; extern undefined4 DAT_008e3740;
extern undefined4 DAT_008ed8b8; extern undefined4 DAT_008f77e8;
