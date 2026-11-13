#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0017fe34(); extern undefined4 fn_00303b10(); extern undefined4 * fn_0045503c(); extern undefined4 * fn_004745d8();
extern undefined4 fn_00474678(); extern undefined4 fn_004a18ac(); extern undefined4 fn_004a1a00(); extern undefined4 * fn_0074d9cc();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00474660(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004b2414(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0051e3d8; extern undefined4 DAT_00853418; extern undefined4 DAT_00853a38; extern undefined4 DAT_00853e5c;
extern undefined4 DAT_00855780; extern undefined4 DAT_00890844; extern undefined4 DAT_00890848; extern undefined4 DAT_0089084c;
extern undefined4 DAT_008908c0; extern undefined4 DAT_008908c4; extern undefined4 DAT_008908c8; extern undefined4 DAT_00890928;
extern undefined4 DAT_0089092c; extern undefined4 DAT_00890930; extern undefined4 DAT_008909c8; extern undefined4 DAT_008909cc;
extern undefined4 DAT_008909d0; extern undefined4 DAT_008909d4; extern undefined4 DAT_00890f3c; extern undefined4 DAT_00891894;
extern undefined4 DAT_00891898; extern undefined4 DAT_008918c0; extern undefined4 DAT_008918c4; extern undefined4 DAT_008918f4;
extern undefined4 DAT_008918f8; extern undefined4 DAT_00891908; extern undefined4 DAT_0089190c; extern undefined4 DAT_00891910;
extern undefined4 DAT_00892924; extern undefined4 DAT_00892928; extern undefined4 DAT_0089293c; extern undefined4 DAT_00892940;
extern undefined4 DAT_00892941; extern undefined4 DAT_00892942; extern undefined4 DAT_00892943; extern undefined4 DAT_00892944;
extern undefined4 DAT_00892945; extern undefined4 DAT_00892946; extern undefined4 DAT_00892947; extern undefined4 DAT_00892948;
extern undefined4 DAT_00892949; extern undefined4 DAT_0089294a; extern undefined4 DAT_0089294b; extern undefined4 DAT_0089294c;
extern undefined4 DAT_0089294d; extern undefined4 DAT_0089294e; extern undefined4 DAT_0089294f; extern undefined4 DAT_00892950;
extern undefined4 DAT_00892951; extern undefined4 DAT_00892952; extern undefined4 DAT_00892953; extern undefined4 DAT_00892954;
extern undefined4 DAT_00892955; extern undefined4 DAT_00892956; extern undefined4 DAT_00892957; extern undefined4 DAT_00892958;
extern undefined4 DAT_00892959; extern undefined4 DAT_0089295a; extern undefined4 DAT_0089295b; extern undefined4 DAT_0089295c;
extern undefined4 DAT_0089295d; extern undefined4 DAT_0089295e; extern undefined4 DAT_0089295f; extern undefined4 DAT_00892960;
extern undefined4 DAT_00892961; extern undefined4 DAT_00892962; extern undefined4 DAT_00892963; extern undefined4 DAT_00892964;
extern undefined4 DAT_00892968; extern undefined4 DAT_008929a4; extern undefined4 DAT_00893204; extern undefined4 DAT_00893210;
extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678; extern undefined4 DAT_008988c4; extern undefined4 DAT_008988c8;
extern undefined4 DAT_008aec70; extern undefined4 DAT_008aec74; extern undefined4 DAT_008b6400; extern undefined4 DAT_008b6508;
extern undefined4 DAT_008c7cf4; extern undefined4 DAT_008c7cf8; extern undefined4 DAT_008c7cfc; extern undefined4 DAT_008c7d00;
extern undefined4 DAT_008c7d04; extern undefined4 DAT_008c7d08; extern undefined4 DAT_008c7d24; extern undefined4 DAT_008c7d28;
extern undefined4 DAT_008c7d2c; extern undefined4 DAT_008c7d30; extern undefined4 DAT_008c7d34; extern undefined4 DAT_008c7d38;
extern undefined4 DAT_008c7d84; extern undefined4 DAT_008c7d88; extern undefined4 DAT_008c7d8c; extern undefined4 DAT_008c7d90;
extern undefined4 DAT_008c7d94; extern undefined4 DAT_008c7d98; extern undefined4 DAT_008c7f9c; extern undefined4 DAT_008c7fa0;
extern undefined4 DAT_008c7fa4; extern undefined4 DAT_008c7fa8; extern undefined4 DAT_008c7fac; extern undefined4 DAT_008c7fb0;
extern undefined4 DAT_008c8e18; extern undefined4 DAT_008c8e1c; extern undefined4 DAT_008c8e20; extern undefined4 DAT_008c8e24;
extern undefined4 DAT_008c8e28; extern undefined4 DAT_008c8e2c; extern undefined4 DAT_008c8e30; extern undefined4 DAT_008c8e34;
extern undefined4 DAT_008c8e38; extern undefined4 DAT_008c8e3c; extern undefined4 DAT_008c8e40; extern undefined4 DAT_008c8e44;
extern undefined4 DAT_008c8e9c; extern undefined4 DAT_008c8ea0; extern undefined4 DAT_008c8ea4; extern undefined4 DAT_008c8ea8;
extern undefined4 DAT_008c8eac; extern undefined4 DAT_008c8eb0; extern undefined4 DAT_008c8ee4; extern undefined4 DAT_008c8ee8;
extern undefined4 DAT_008c8eec; extern undefined4 DAT_008c8ef0; extern undefined4 DAT_008c8ef4; extern undefined4 DAT_008c8ef8;
extern undefined4 DAT_008c8f14; extern undefined4 DAT_008c8f18; extern undefined4 DAT_008c8f1c; extern undefined4 DAT_008c8f20;
extern undefined4 DAT_008c8f24; extern undefined4 DAT_008c8f28; extern undefined4 DAT_008c8f2c; extern undefined4 DAT_008c8f30;
extern undefined4 DAT_008c8f34; extern undefined4 DAT_008c99f0; extern undefined4 DAT_008c99f4; extern undefined4 DAT_008c99f8;
extern undefined4 DAT_008c99fc; extern undefined4 DAT_008c9a00; extern undefined4 DAT_008c9a04; extern undefined4 DAT_008c9a08;
extern undefined4 DAT_008c9a0c; extern undefined4 DAT_008c9a10; extern undefined4 DAT_008c9a14; extern undefined4 DAT_008c9a18;
extern undefined4 DAT_008c9a1c; extern undefined4 DAT_008d010c; extern undefined4 DAT_008d0110; extern undefined4 DAT_008d0114;
extern undefined4 DAT_008d0118; extern undefined4 DAT_008d011c; extern undefined4 DAT_008d0120; extern undefined4 DAT_008e69b0;
extern undefined4 DAT_008e69d8; extern undefined4 DAT_008e6a0c; extern undefined4 DAT_008f34bc; extern undefined4 DAT_008f34f0;
extern undefined4 DAT_008f34f4; extern undefined4 DAT_008f34f8;
