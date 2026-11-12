#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00147080(); extern undefined4 fn_00303afc(); extern undefined4 fn_00303b10(); extern undefined4 fn_007606ac();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00167720(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001ad8d4(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0044fab8(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0055ad64(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_007564f4(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0044f548; extern undefined4 DAT_007606bc; extern undefined4 DAT_008580f0; extern undefined4 DAT_00858104;
extern undefined4 DAT_008581d8; extern undefined4 DAT_00858228; extern undefined4 DAT_0085823c; extern undefined4 DAT_0089037c;
extern undefined4 DAT_00890380; extern undefined4 DAT_00890734; extern undefined4 DAT_00890738; extern undefined4 DAT_0089073c;
extern undefined4 DAT_00890794; extern undefined4 DAT_00890798; extern undefined4 DAT_0089079c; extern undefined4 DAT_008908e8;
extern undefined4 DAT_008908ec; extern undefined4 DAT_008908f0; extern undefined4 DAT_0089095c; extern undefined4 DAT_00890960;
extern undefined4 DAT_0089096c; extern undefined4 DAT_00890970; extern undefined4 DAT_00890c18; extern undefined4 DAT_00890c1c;
extern undefined4 DAT_00890f50; extern undefined4 DAT_00890f54; extern undefined4 DAT_00890f58; extern undefined4 DAT_00890f6c;
extern undefined4 DAT_00890f70; extern undefined4 DAT_00890f74; extern undefined4 DAT_00891270; extern undefined4 DAT_00891274;
extern undefined4 DAT_00892418; extern undefined4 DAT_0089241c; extern undefined4 DAT_00892420; extern undefined4 DAT_00892424;
extern undefined4 DAT_008942fc; extern undefined4 DAT_0089466c; extern undefined4 DAT_00898a28; extern undefined4 DAT_00898a2c;
extern undefined4 DAT_00898a30; extern undefined4 DAT_0089a850; extern undefined4 DAT_008bfb04; extern undefined4 DAT_008bfb08;
extern undefined4 DAT_008bfb0c; extern undefined4 DAT_008bfb10; extern undefined4 DAT_008c05e8; extern undefined4 DAT_008c05ec;
extern undefined4 DAT_008c05f0; extern undefined4 DAT_008c05f4; extern undefined4 DAT_008c05f8; extern undefined4 DAT_008c33e4;
extern undefined4 DAT_008c33f8; extern undefined4 DAT_008c3c4c; extern undefined4 DAT_008c3dd4; extern undefined4 DAT_008c3dd8;
extern undefined4 DAT_008c3ddc; extern undefined4 DAT_008c3de0; extern undefined4 DAT_008c792c; extern undefined4 DAT_008c7930;
extern undefined4 DAT_008c7934; extern undefined4 DAT_008c7938; extern undefined4 DAT_008c793c; extern undefined4 DAT_008c7940;
extern undefined4 DAT_008c7bd4; extern undefined4 DAT_008c7bd8; extern undefined4 DAT_008c7bdc; extern undefined4 DAT_008c7be0;
extern undefined4 DAT_008c7be4; extern undefined4 DAT_008c7be8; extern undefined4 DAT_008c7c94; extern undefined4 DAT_008c7c98;
extern undefined4 DAT_008c7c9c; extern undefined4 DAT_008c7ca0; extern undefined4 DAT_008c7ca4; extern undefined4 DAT_008c7ca8;
extern undefined4 DAT_008c7d3c; extern undefined4 DAT_008c7d40; extern undefined4 DAT_008c7d44; extern undefined4 DAT_008c7d48;
extern undefined4 DAT_008c7d4c; extern undefined4 DAT_008c7d50; extern undefined4 DAT_008c7de4; extern undefined4 DAT_008c7de8;
extern undefined4 DAT_008c7dec; extern undefined4 DAT_008c7df0; extern undefined4 DAT_008c7df4; extern undefined4 DAT_008c7df8;
extern undefined4 DAT_008c7e14; extern undefined4 DAT_008c7e18; extern undefined4 DAT_008c7e1c; extern undefined4 DAT_008c7e20;
extern undefined4 DAT_008c7e24; extern undefined4 DAT_008c7e28; extern undefined4 DAT_008c8284; extern undefined4 DAT_008c8288;
extern undefined4 DAT_008c828c; extern undefined4 DAT_008c8290; extern undefined4 DAT_008c8294; extern undefined4 DAT_008c8298;
extern undefined4 DAT_008c847c; extern undefined4 DAT_008c8480; extern undefined4 DAT_008c8484; extern undefined4 DAT_008c8488;
extern undefined4 DAT_008c848c; extern undefined4 DAT_008c8490; extern undefined4 DAT_008c8494; extern undefined4 DAT_008c8498;
extern undefined4 DAT_008c849c; extern undefined4 DAT_008c84a0; extern undefined4 DAT_008c84a4; extern undefined4 DAT_008c84a8;
extern undefined4 DAT_008c8b9c; extern undefined4 DAT_008c8ba0; extern undefined4 DAT_008c8ba4; extern undefined4 DAT_008c8ba8;
extern undefined4 DAT_008c8bac; extern undefined4 DAT_008c8bb0; extern undefined4 DAT_008c95bc; extern undefined4 DAT_008c95c0;
extern undefined4 DAT_008c95c4; extern undefined4 DAT_008c95c8; extern undefined4 DAT_008c95cc; extern undefined4 DAT_008c95d0;
extern undefined4 DAT_008c95d4; extern undefined4 DAT_008c95d8; extern undefined4 DAT_008c95dc; extern undefined4 DAT_008c95e0;
extern undefined4 DAT_008c95e4; extern undefined4 DAT_008c95e8; extern undefined4 DAT_008d0334; extern undefined4 DAT_008d0338;
extern undefined4 DAT_008d033c; extern undefined4 DAT_008d0340; extern undefined4 DAT_008d0344; extern undefined4 DAT_008d0348;
extern undefined4 DAT_008e96e0; extern undefined4 DAT_008e96e4; extern undefined4 DAT_008e96e8; extern undefined4 DAT_008eac10;
extern undefined4 DAT_008ece50; extern undefined4 DAT_008ece51; extern undefined4 DAT_008ece52; extern undefined4 DAT_008ece54;
extern undefined4 DAT_008ece58; extern undefined4 DAT_008ece5c; extern undefined4 DAT_008ece60; extern undefined4 DAT_008ece64;
extern undefined4 DAT_008ed100;
