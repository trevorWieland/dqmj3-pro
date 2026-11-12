#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_0013c500(); extern undefined4 fn_00303b10(); extern int fn_0044f610(); extern int * fn_0044faec(); extern undefined4 * fn_004eea00();
extern uint * fn_0078afd4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001ad944(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001ad974(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0051e778(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0044f5d4; extern undefined4 DAT_0052645c; extern undefined4 DAT_00704058; extern undefined4 DAT_0077ef1c;
extern undefined4 DAT_00812bda; extern undefined4 DAT_00852678; extern undefined4 DAT_00856d4c; extern undefined4 DAT_00857360;
extern undefined4 DAT_00859700; extern undefined4 DAT_00859714; extern undefined4 DAT_008902a8; extern undefined4 DAT_008902ac;
extern undefined4 DAT_00890974; extern undefined4 DAT_00890978; extern undefined4 DAT_0089099c; extern undefined4 DAT_008909a0;
extern undefined4 DAT_008909c0; extern undefined4 DAT_008909c4; extern undefined4 DAT_00891860; extern undefined4 DAT_00891864;
extern undefined4 DAT_00891874; extern undefined4 DAT_00891878; extern undefined4 DAT_0089216c; extern undefined4 DAT_00892170;
extern undefined4 DAT_008922a0; extern undefined4 DAT_008922a4; extern undefined4 DAT_00892364; extern undefined4 DAT_00892368;
extern undefined4 DAT_008963a0; extern undefined4 DAT_00896e30; extern undefined4 DAT_00896e34; extern undefined4 DAT_0089788c;
extern undefined4 DAT_00897890; extern undefined4 DAT_0089891c; extern undefined4 DAT_00898920; extern undefined4 DAT_00899310;
extern undefined4 DAT_00899314; extern undefined4 DAT_00899318; extern undefined4 DAT_008bfb20; extern undefined4 DAT_008bfb34;
extern undefined4 DAT_008c3dec; extern undefined4 DAT_008c3df0; extern undefined4 DAT_008c3df4; extern undefined4 DAT_008c3df8;
extern undefined4 DAT_008c78b4; extern undefined4 DAT_008c78b8; extern undefined4 DAT_008c78bc; extern undefined4 DAT_008c78c0;
extern undefined4 DAT_008c78c4; extern undefined4 DAT_008c78c8; extern undefined4 DAT_008c7e2c; extern undefined4 DAT_008c7e30;
extern undefined4 DAT_008c7e34; extern undefined4 DAT_008c7e38; extern undefined4 DAT_008c7e3c; extern undefined4 DAT_008c7e40;
extern undefined4 DAT_008c7eec; extern undefined4 DAT_008c7ef0; extern undefined4 DAT_008c7ef4; extern undefined4 DAT_008c7ef8;
extern undefined4 DAT_008c7efc; extern undefined4 DAT_008c7f00; extern undefined4 DAT_008c7f84; extern undefined4 DAT_008c7f88;
extern undefined4 DAT_008c7f8c; extern undefined4 DAT_008c7f90; extern undefined4 DAT_008c7f94; extern undefined4 DAT_008c7f98;
extern undefined4 DAT_008c8db8; extern undefined4 DAT_008c8dbc; extern undefined4 DAT_008c8dc0; extern undefined4 DAT_008c8dc4;
extern undefined4 DAT_008c8dc8; extern undefined4 DAT_008c8dcc; extern undefined4 DAT_008c8de8; extern undefined4 DAT_008c8dec;
extern undefined4 DAT_008c8df0; extern undefined4 DAT_008c8df4; extern undefined4 DAT_008c8df8; extern undefined4 DAT_008c8dfc;
extern undefined4 DAT_008c93c4; extern undefined4 DAT_008c93c8; extern undefined4 DAT_008c93cc; extern undefined4 DAT_008c93d0;
extern undefined4 DAT_008c93d4; extern undefined4 DAT_008c93d8; extern undefined4 DAT_008c93dc; extern undefined4 DAT_008c93e0;
extern undefined4 DAT_008c93e4; extern undefined4 DAT_008c9430; extern undefined4 DAT_008c9434; extern undefined4 DAT_008c9438;
extern undefined4 DAT_008c943c; extern undefined4 DAT_008c9440; extern undefined4 DAT_008c9444; extern undefined4 DAT_008c94cc;
extern undefined4 DAT_008c94d0; extern undefined4 DAT_008c94d4; extern undefined4 DAT_008c94d8; extern undefined4 DAT_008c94dc;
extern undefined4 DAT_008c94e0; extern undefined4 DAT_008c9634; extern undefined4 DAT_008c964c; extern undefined4 DAT_008cd4f8;
extern undefined4 DAT_008cd4fc; extern undefined4 DAT_008cd500; extern undefined4 DAT_008cd504; extern undefined4 DAT_008cd508;
extern undefined4 DAT_008cd50c; extern undefined4 DAT_008cdd9c; extern undefined4 DAT_008cdda0; extern undefined4 DAT_008cdda4;
extern undefined4 DAT_008cdda8; extern undefined4 DAT_008cddac; extern undefined4 DAT_008cddb0; extern undefined4 DAT_008cfeb8;
extern undefined4 DAT_008cfec8; extern undefined4 DAT_008d0214; extern undefined4 DAT_008d0218; extern undefined4 DAT_008d021c;
extern undefined4 DAT_008d0220; extern undefined4 DAT_008d0224; extern undefined4 DAT_008d0228; extern undefined4 DAT_008d1868;
extern undefined4 DAT_008d186c; extern undefined4 DAT_008d1870; extern undefined4 DAT_008d1874; extern undefined4 DAT_008d1878;
extern undefined4 DAT_008d187c; extern undefined4 DAT_008e320c; extern undefined4 DAT_008e3224; extern undefined4 DAT_008e323c;
extern undefined4 DAT_008e3248; extern undefined4 DAT_008ebc98; extern undefined4 DAT_008ebc9c; extern undefined4 DAT_008ebca0;
extern undefined4 DAT_008ebca4; extern undefined4 DAT_008ebca8; extern undefined4 DAT_008ebcac; extern undefined4 DAT_008ebcb0;
extern undefined4 DAT_008ebcec; extern undefined4 DAT_008ebcf0; extern undefined4 DAT_008ebcf4; extern undefined4 DAT_008ebcf8;
extern undefined4 DAT_008ebcfc; extern undefined4 DAT_008ebd00; extern undefined4 DAT_008ebd04; extern undefined4 DAT_008ebd08;
extern undefined4 DAT_008ec348; extern undefined4 DAT_008ec34c; extern undefined4 DAT_008ec358; extern undefined4 DAT_008ec35c;
extern undefined4 DAT_008ec360;
