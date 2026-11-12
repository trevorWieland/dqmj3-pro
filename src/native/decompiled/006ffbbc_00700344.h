#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined8 fn_00103d64(); extern int fn_0015fa88(); extern undefined4 fn_00166ad8(); extern undefined4 fn_00303b10(); extern int fn_0044f8b4();
extern undefined4 fn_004b8d6c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00104074_1(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001ad8e4(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0044f5d4; extern undefined4 DAT_005cddd0; extern undefined4 DAT_007d63d8; extern undefined4 DAT_007d63f0;
extern undefined4 DAT_008526b4; extern undefined4 DAT_0089034c; extern undefined4 DAT_00890350; extern undefined4 DAT_008912bc;
extern undefined4 DAT_008912c0; extern undefined4 DAT_008912cc; extern undefined4 DAT_008912cd; extern undefined4 DAT_008912ce;
extern undefined4 DAT_008912cf; extern undefined4 DAT_008912d0; extern undefined4 DAT_008912d1; extern undefined4 DAT_008912d2;
extern undefined4 DAT_008912d3; extern undefined4 DAT_008912d4; extern undefined4 DAT_008912d8; extern undefined4 DAT_0089191c;
extern undefined4 DAT_00891920; extern undefined4 DAT_0089321c; extern undefined4 DAT_00893220; extern undefined4 DAT_00893224;
extern undefined4 DAT_00893228; extern undefined4 DAT_0089322c; extern undefined4 DAT_00894664; extern undefined4 DAT_00894668;
extern undefined4 DAT_008961e0; extern undefined4 DAT_008961e4; extern undefined4 DAT_008961e5; extern undefined4 DAT_008961e6;
extern undefined4 DAT_008961e7; extern undefined4 DAT_008961e8; extern undefined4 DAT_008961ec; extern undefined4 DAT_008961f0;
extern undefined4 DAT_008961f4; extern undefined4 DAT_008961f5; extern undefined4 DAT_008961f6; extern undefined4 DAT_008961f7;
extern undefined4 DAT_008961f8; extern undefined4 DAT_008961f9; extern undefined4 DAT_008961fa; extern undefined4 DAT_008961fb;
extern undefined4 DAT_008961fc; extern undefined4 DAT_00896200; extern undefined4 DAT_00896201; extern undefined4 DAT_00896202;
extern undefined4 DAT_00896203; extern undefined4 DAT_00896204; extern undefined4 DAT_00896208; extern undefined4 DAT_00897290;
extern undefined4 DAT_00897294; extern undefined4 DAT_008994a0; extern undefined4 DAT_0089a4e0; extern undefined4 DAT_0089a4e4;
extern undefined4 DAT_0089a50c; extern undefined4 DAT_0089a510; extern undefined4 DAT_0089a850; extern undefined4 DAT_0089a924;
extern undefined4 DAT_0089a928; extern undefined4 DAT_008bfbd8; extern undefined4 DAT_008c33f4; extern undefined4 DAT_008c3c4c;
extern undefined4 DAT_008c3d48; extern undefined4 DAT_008c78fc; extern undefined4 DAT_008c7900; extern undefined4 DAT_008c7904;
extern undefined4 DAT_008c7908; extern undefined4 DAT_008c790c; extern undefined4 DAT_008c7910; extern undefined4 DAT_008c8c14;
extern undefined4 DAT_008c8c18; extern undefined4 DAT_008c8c1c; extern undefined4 DAT_008c8c20; extern undefined4 DAT_008c8c24;
extern undefined4 DAT_008c8c28; extern undefined4 DAT_008c8c44; extern undefined4 DAT_008c8c48; extern undefined4 DAT_008c8c4c;
extern undefined4 DAT_008c8c50; extern undefined4 DAT_008c8c54; extern undefined4 DAT_008c8c58; extern undefined4 DAT_008c8c5c;
extern undefined4 DAT_008c8c60; extern undefined4 DAT_008c8c64; extern undefined4 DAT_008c8f50; extern undefined4 DAT_008c8f54;
extern undefined4 DAT_008c8f58; extern undefined4 DAT_008c8f5c; extern undefined4 DAT_008c8f60; extern undefined4 DAT_008c8f64;
extern undefined4 DAT_008ca558; extern undefined4 DAT_008ca55c; extern undefined4 DAT_008ca560; extern undefined4 DAT_008ca564;
extern undefined4 DAT_008ca568; extern undefined4 DAT_008ca56c; extern undefined4 DAT_008ca570; extern undefined4 DAT_008ca574;
extern undefined4 DAT_008ca578; extern undefined4 DAT_008ca57c; extern undefined4 DAT_008ca580; extern undefined4 DAT_008ca584;
extern undefined4 DAT_008cb4f8; extern undefined4 DAT_008cb4fc; extern undefined4 DAT_008cb500; extern undefined4 DAT_008cb504;
extern undefined4 DAT_008cb508; extern undefined4 DAT_008cb50c; extern undefined4 DAT_008cc880; extern undefined4 DAT_008cc884;
extern undefined4 DAT_008cc888; extern undefined4 DAT_008cc88c; extern undefined4 DAT_008cc890; extern undefined4 DAT_008cc894;
extern undefined4 DAT_008cda7c; extern undefined4 DAT_008cda80; extern undefined4 DAT_008cda84; extern undefined4 DAT_008cda88;
extern undefined4 DAT_008cda8c; extern undefined4 DAT_008cda90; extern undefined4 DAT_008d188c; extern undefined4 DAT_008d1914;
extern undefined4 DAT_008d1918; extern undefined4 DAT_008d191c; extern undefined4 DAT_008d1920; extern undefined4 DAT_008d1924;
extern undefined4 DAT_008d1928; extern undefined4 DAT_008e3000; extern undefined4 DAT_008e3004; extern undefined4 DAT_008e3008;
extern undefined4 DAT_008e300c; extern undefined4 DAT_008e3010; extern undefined4 DAT_008e3014; extern undefined4 DAT_008e3018;
extern undefined4 DAT_008e3054; extern undefined4 DAT_008e3058; extern undefined4 DAT_008e305c; extern undefined4 DAT_008e3060;
extern undefined4 DAT_008e3748; extern undefined4 DAT_008e374c; extern undefined4 DAT_008e3750; extern undefined4 DAT_008e3754;
extern undefined4 DAT_008e3758; extern undefined4 DAT_008e375c; extern undefined4 DAT_008e3760; extern undefined4 DAT_008f2a80;
