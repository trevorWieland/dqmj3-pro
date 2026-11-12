#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00144df4(); extern undefined4 fn_00156f24(); extern undefined4 fn_00163d44(); extern undefined2 fn_00176970(); extern undefined8 fn_0017821c();
extern undefined4 fn_0017d96c(); extern undefined4 fn_0017fd10(); extern int fn_00182964(); extern undefined4 fn_001c8a8c(); extern undefined4 fn_001c9000(); extern undefined4 fn_001da640();
extern undefined4 fn_001da8fc(); extern undefined4 fn_001e1c54(); extern undefined4 fn_001f74f8(); extern undefined4 fn_002028d0(); extern undefined4 fn_0020bbc4(); extern bool fn_00227398();
extern undefined4 fn_002281a4(); extern undefined4 fn_00228c38(); extern int * fn_0028aad0(); extern int fn_002aad7c(); extern undefined4 fn_00682a8c(); extern undefined4 fn_00683fe8();
extern undefined4 fn_00696994(); extern uint fn_006a99b0(); extern int fn_006b83e4(); extern int fn_006bf5bc(); extern int fn_006bf5c8(); extern int fn_006c0028();
extern int fn_006c0114(); extern undefined4 fn_006f756c(); extern undefined4 fn_006f7a0c(); extern undefined4 fn_006f7a5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0021d4fc; extern undefined4 DAT_0021dce0; extern undefined4 DAT_007c1e10; extern undefined4 DAT_007c1e68;
extern unsigned char *DAT_00891214; extern undefined4 DAT_00893ddc; extern undefined4 DAT_00894f2c; extern undefined4 DAT_008977e0;
extern undefined4 DAT_00897804; extern unsigned char *DAT_00897894; extern undefined4 DAT_008987bc; extern undefined4 s_;
