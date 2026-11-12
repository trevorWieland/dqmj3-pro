#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_0013c500(); extern undefined4 fn_0015e5e0(); extern undefined4 fn_00303b10(); extern undefined4 * fn_0067408c(); extern uint * fn_0078afd4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00167690(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0044da8c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008526d8; extern undefined4 DAT_0088d6c0; extern undefined4 DAT_0088d7c0; extern undefined4 DAT_0088d8c0;
extern undefined4 DAT_008922c0; extern undefined4 DAT_008922c4; extern undefined4 DAT_008930b8; extern undefined4 DAT_008930bc;
extern undefined4 DAT_00893b64; extern undefined4 DAT_00893bb0; extern undefined4 DAT_00893efc; extern undefined4 DAT_00893f00;
extern undefined4 DAT_00893f04; extern undefined4 DAT_00894270; extern undefined4 DAT_00894274; extern undefined4 DAT_00894275;
extern undefined4 DAT_00894276; extern undefined4 DAT_00894277; extern undefined4 DAT_00894278; extern undefined4 DAT_00894279;
extern undefined4 DAT_0089427a; extern undefined4 DAT_0089427b; extern undefined4 DAT_0089427c; extern undefined4 DAT_0089427d;
extern undefined4 DAT_0089427e; extern undefined4 DAT_0089427f; extern undefined4 DAT_00894280; extern undefined4 DAT_00894281;
extern undefined4 DAT_00894282; extern undefined4 DAT_00894283; extern undefined4 DAT_00894284; extern undefined4 DAT_00894285;
extern undefined4 DAT_00894286; extern undefined4 DAT_00894287; extern undefined4 DAT_00894288; extern undefined4 DAT_00894289;
extern undefined4 DAT_0089428a; extern undefined4 DAT_0089428b; extern undefined4 DAT_0089428c; extern undefined4 DAT_0089428d;
extern undefined4 DAT_0089428e; extern undefined4 DAT_0089428f; extern undefined4 DAT_00894290; extern undefined4 DAT_00894291;
extern undefined4 DAT_00894292; extern undefined4 DAT_00894293; extern undefined4 DAT_00894294; extern undefined4 DAT_00894295;
extern undefined4 DAT_00894296; extern undefined4 DAT_00894297; extern undefined4 DAT_00894298; extern undefined4 DAT_0089429c;
extern undefined4 DAT_0089466c; extern undefined4 DAT_008951f0; extern undefined4 DAT_008951f4; extern undefined4 DAT_008951f8;
extern undefined4 DAT_00896e60; extern undefined4 DAT_00896e64; extern undefined4 DAT_00897138; extern undefined4 DAT_0089713c;
extern undefined4 DAT_0089725c; extern undefined4 DAT_00897260; extern undefined4 DAT_008972d4; extern undefined4 DAT_008972d8;
extern undefined4 DAT_00898950; extern undefined4 DAT_0089895c; extern undefined4 DAT_00898960; extern undefined4 DAT_00898c10;
extern undefined4 DAT_00898c14; extern undefined4 DAT_00898c18; extern undefined4 DAT_0089a670; extern undefined4 DAT_0089a850;
extern undefined4 DAT_008c03b4; extern undefined4 DAT_008c045c; extern undefined4 DAT_008c33d8; extern undefined4 DAT_008c33e0;
extern undefined4 DAT_008c33f4; extern undefined4 DAT_008c33fc; extern undefined4 DAT_008c3404; extern undefined4 DAT_008c3408;
extern undefined4 DAT_008c3c4c; extern undefined4 DAT_008c3c5c; extern undefined4 DAT_008c9490; extern undefined4 DAT_008c9494;
extern undefined4 DAT_008c9498; extern undefined4 DAT_008c949c; extern undefined4 DAT_008c94a0; extern undefined4 DAT_008c94a4;
extern undefined4 DAT_008c94a8; extern undefined4 DAT_008c94ac; extern undefined4 DAT_008c94b0; extern undefined4 DAT_008ca270;
extern undefined4 DAT_008ca274; extern undefined4 DAT_008ca278; extern undefined4 DAT_008ca27c; extern undefined4 DAT_008ca280;
extern undefined4 DAT_008ca284; extern undefined4 DAT_008caf28; extern undefined4 DAT_008caf2c; extern undefined4 DAT_008caf30;
extern undefined4 DAT_008caf34; extern undefined4 DAT_008caf38; extern undefined4 DAT_008caf3c; extern undefined4 DAT_008cb0c0;
extern undefined4 DAT_008cb0c4; extern undefined4 DAT_008cb0c8; extern undefined4 DAT_008cb0cc; extern undefined4 DAT_008cb0d0;
extern undefined4 DAT_008cb0d4; extern undefined4 DAT_008cbb94; extern undefined4 DAT_008cbb98; extern undefined4 DAT_008cbb9c;
extern undefined4 DAT_008cbba0; extern undefined4 DAT_008cbba4; extern undefined4 DAT_008cbba8; extern undefined4 DAT_008cbbac;
extern undefined4 DAT_008cbbb0; extern undefined4 DAT_008cbbb4; extern undefined4 DAT_008cbbb8; extern undefined4 DAT_008cbbbc;
extern undefined4 DAT_008cbbc0; extern undefined4 DAT_008cbbc4; extern undefined4 DAT_008cbbc8; extern undefined4 DAT_008cbbcc;
extern undefined4 DAT_008cd510; extern undefined4 DAT_008cd514; extern undefined4 DAT_008cd518; extern undefined4 DAT_008cd51c;
extern undefined4 DAT_008cd520; extern undefined4 DAT_008cd524; extern undefined4 DAT_008cd854; extern undefined4 DAT_008cd858;
extern undefined4 DAT_008cd85c; extern undefined4 DAT_008cd860; extern undefined4 DAT_008cd864; extern undefined4 DAT_008cd868;
extern undefined4 DAT_008cda04; extern undefined4 DAT_008cda08; extern undefined4 DAT_008cda0c; extern undefined4 DAT_008cda10;
extern undefined4 DAT_008cda14; extern undefined4 DAT_008cda18; extern undefined4 DAT_008cdaf4; extern undefined4 DAT_008cdaf8;
extern undefined4 DAT_008cdafc; extern undefined4 DAT_008cdb00; extern undefined4 DAT_008cdb04; extern undefined4 DAT_008cdb08;
extern undefined4 DAT_008cfee8; extern undefined4 DAT_008d028c; extern undefined4 DAT_008d0290; extern undefined4 DAT_008d0294;
extern undefined4 DAT_008d0298; extern undefined4 DAT_008d029c; extern undefined4 DAT_008d02a0; extern undefined4 DAT_008d03c4;
extern undefined4 DAT_008d03c8; extern undefined4 DAT_008d03cc; extern undefined4 DAT_008d03d0; extern undefined4 DAT_008d03d4;
extern undefined4 DAT_008d03d8; extern undefined4 DAT_008e33ac; extern undefined4 DAT_008e33b0; extern undefined4 DAT_008e33b4;
extern undefined4 DAT_008e33b8; extern undefined4 DAT_008e33bc; extern undefined4 DAT_008e33c0; extern undefined4 DAT_008e33d0;
extern undefined4 DAT_008e33dc; extern undefined4 DAT_008e33e0; extern undefined4 DAT_008e33e4; extern undefined4 DAT_008e33e8;
extern undefined4 DAT_008e33ec; extern undefined4 DAT_008e33f0; extern undefined4 DAT_008e33f4; extern undefined4 DAT_008e33f8;
extern undefined4 DAT_008e33fc; extern undefined4 DAT_008e340c; extern undefined4 DAT_008e3418; extern undefined4 DAT_008e341c;
extern undefined4 DAT_008e3420; extern undefined4 DAT_008e3424; extern undefined4 DAT_008e3428; extern undefined4 DAT_008e342c;
extern undefined4 DAT_008e3430; extern undefined4 DAT_008e3434; extern undefined4 DAT_008e3438; extern undefined4 DAT_008e3448;
extern undefined4 DAT_008e3454; extern undefined4 DAT_008e3458; extern undefined4 DAT_008e345c; extern undefined4 DAT_008e3460;
extern undefined4 DAT_008e3470;
