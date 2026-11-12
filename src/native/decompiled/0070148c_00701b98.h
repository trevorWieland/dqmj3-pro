#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined8 fn_00103d64(); extern undefined4 fn_0013c500(); extern undefined4 fn_0017fe34(); extern undefined4 fn_00303b10();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00104074_1(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0044f5d4; extern undefined4 DAT_00763c4c; extern undefined4 DAT_00890230; extern undefined4 DAT_00890234;
extern undefined4 DAT_008909b0; extern undefined4 DAT_008909b4; extern undefined4 DAT_00890ac0; extern undefined4 DAT_00890ac4;
extern undefined4 DAT_00891888; extern undefined4 DAT_0089188c; extern undefined4 DAT_00891890; extern undefined4 DAT_00892484;
extern undefined4 DAT_008924a0; extern undefined4 DAT_008924a4; extern undefined4 DAT_008987d4; extern undefined4 DAT_008987d8;
extern undefined4 DAT_008987dc; extern undefined4 DAT_008987dd; extern undefined4 DAT_008987de; extern undefined4 DAT_008987df;
extern undefined4 DAT_008987e0; extern undefined4 DAT_008987e4; extern undefined4 DAT_008987e5; extern undefined4 DAT_008987e6;
extern undefined4 DAT_008987e7; extern undefined4 DAT_008987e8; extern undefined4 DAT_008987ec; extern undefined4 DAT_008987ed;
extern undefined4 DAT_008987ee; extern undefined4 DAT_008987ef; extern undefined4 DAT_008987f0; extern undefined4 DAT_008987f4;
extern undefined4 DAT_008987f5; extern undefined4 DAT_008987f6; extern undefined4 DAT_008987f7; extern undefined4 DAT_008987f8;
extern undefined4 DAT_008987fc; extern undefined4 DAT_008987fd; extern undefined4 DAT_008987fe; extern undefined4 DAT_008987ff;
extern undefined4 DAT_00898800; extern undefined4 DAT_00898804; extern undefined4 DAT_00898805; extern undefined4 DAT_00898806;
extern undefined4 DAT_00898807; extern undefined4 DAT_00898808; extern undefined4 DAT_0089880c; extern undefined4 DAT_0089880d;
extern undefined4 DAT_0089880e; extern undefined4 DAT_0089880f; extern undefined4 DAT_00898810; extern undefined4 DAT_00898814;
extern undefined4 DAT_00898815; extern undefined4 DAT_00898816; extern undefined4 DAT_00898817; extern undefined4 DAT_00898818;
extern undefined4 DAT_0089881c; extern undefined4 DAT_0089881d; extern undefined4 DAT_0089881e; extern undefined4 DAT_0089881f;
extern undefined4 DAT_00898820; extern undefined4 DAT_00898824; extern undefined4 DAT_00898825; extern undefined4 DAT_00898826;
extern undefined4 DAT_00898827; extern undefined4 DAT_00898828; extern undefined4 DAT_0089882c; extern undefined4 DAT_0089882d;
extern undefined4 DAT_0089882e; extern undefined4 DAT_0089882f; extern undefined4 DAT_00898830; extern undefined4 DAT_00898834;
extern undefined4 DAT_00898835; extern undefined4 DAT_00898836; extern undefined4 DAT_00898837; extern undefined4 DAT_00898838;
extern undefined4 DAT_0089a924; extern undefined4 DAT_0089a92c; extern undefined4 DAT_0089a930; extern undefined4 DAT_008bfb78;
extern undefined4 DAT_008bfb7c; extern undefined4 DAT_008bfb80; extern undefined4 DAT_008bfb84; extern undefined4 DAT_008bfb88;
extern undefined4 DAT_008bfb8c; extern undefined4 DAT_008bfb90; extern undefined4 DAT_008bfb94; extern undefined4 DAT_008bfb98;
extern undefined4 DAT_008bfb9c; extern undefined4 DAT_008bfba0; extern undefined4 DAT_008bfba4; extern undefined4 DAT_008c0640;
extern undefined4 DAT_008c0644; extern undefined4 DAT_008c0648; extern undefined4 DAT_008c064c; extern undefined4 DAT_008c780c;
extern undefined4 DAT_008c7810; extern undefined4 DAT_008c7814; extern undefined4 DAT_008c7818; extern undefined4 DAT_008c781c;
extern undefined4 DAT_008c7820; extern undefined4 DAT_008c783c; extern undefined4 DAT_008c7840; extern undefined4 DAT_008c7844;
extern undefined4 DAT_008c7848; extern undefined4 DAT_008c784c; extern undefined4 DAT_008c7850; extern undefined4 DAT_008c7f28;
extern undefined4 DAT_008c7f2c; extern undefined4 DAT_008c7f30; extern undefined4 DAT_008c7f34; extern undefined4 DAT_008c7f38;
extern undefined4 DAT_008c7f3c; extern undefined4 DAT_008c8014; extern undefined4 DAT_008c8018; extern undefined4 DAT_008c801c;
extern undefined4 DAT_008c8020; extern undefined4 DAT_008c8024; extern undefined4 DAT_008c8028; extern undefined4 DAT_008c8e00;
extern undefined4 DAT_008c8e04; extern undefined4 DAT_008c8e08; extern undefined4 DAT_008c8e0c; extern undefined4 DAT_008c8e10;
extern undefined4 DAT_008c8e14; extern undefined4 DAT_008c961c; extern undefined4 DAT_008c9620; extern undefined4 DAT_008c9624;
extern undefined4 DAT_008c9628; extern undefined4 DAT_008c962c; extern undefined4 DAT_008c9630; extern undefined4 DAT_008cfe48;
extern undefined4 DAT_008cfe4c; extern undefined4 DAT_008cfe50; extern undefined4 DAT_008cfe54; extern undefined4 DAT_008cfe58;
extern undefined4 DAT_008cfe5c; extern undefined4 DAT_008cfe60; extern undefined4 DAT_008cfe64; extern undefined4 DAT_008cfe68;
extern undefined4 DAT_008cfe6c; extern undefined4 DAT_008cfe70; extern undefined4 DAT_008cfe74; extern undefined4 DAT_008cfe78;
extern undefined4 DAT_008cfe7c; extern undefined4 DAT_008cfe80; extern undefined4 DAT_008cfe84; extern undefined4 DAT_008cfe88;
extern undefined4 DAT_008cfe8c; extern undefined4 DAT_008cfe90; extern undefined4 DAT_008cfe94; extern undefined4 DAT_008cfe98;
extern undefined4 DAT_008cfe9c; extern undefined4 DAT_008cfea0; extern undefined4 DAT_008cfea4; extern undefined4 DAT_008cfea8;
extern undefined4 DAT_008cfeac; extern undefined4 DAT_008cfeb0; extern undefined4 DAT_008cfeb4; extern undefined4 DAT_008e3230;
extern undefined4 DAT_008e32ec; extern undefined4 DAT_008e32f0; extern undefined4 DAT_008e32f4; extern undefined4 DAT_008e32f8;
extern undefined4 DAT_008e32fc; extern undefined4 DAT_008e3300; extern undefined4 DAT_008e3304; extern undefined4 DAT_008f32b0;
extern undefined4 DAT_008f32b4; extern undefined4 DAT_008f32b8; extern undefined4 DAT_008f32bc; extern undefined4 DAT_008f32c0;
extern undefined4 DAT_008f32c4; extern undefined4 DAT_008f32c8; extern undefined4 DAT_008f3310; extern undefined4 DAT_008f3315;
extern undefined4 DAT_008f7520; extern undefined4 DAT_008f7524; extern undefined4 DAT_008f7528; extern undefined4 UNK_0044e79c;
