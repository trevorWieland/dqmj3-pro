#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00154ac8(); extern undefined4 fn_0028bc24(); extern undefined4 fn_002feef8(); extern undefined4 fn_006015f0();
extern int fn_00661248(); extern int fn_006614d0(); extern undefined4 fn_0066158c(); extern int fn_006616e0(); extern int fn_006616f4(); extern int fn_0066173c();
extern undefined4 fn_006896f4(); extern undefined4 fn_0068af70(); extern undefined4 fn_0068b0a4(); extern undefined4 fn_0068b334(); extern undefined4 fn_00763e68(); extern undefined4 fn_0076410c();
extern undefined4 fn_007a91c0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c7d90; extern undefined4 DAT_007c7de8; extern undefined4 DAT_007c7e10; extern undefined4 DAT_0081cf84;
extern undefined4 PTR_FUN_007c7dc0; extern undefined4 PTR_LAB_007c7db0; extern undefined4 PTR_LAB_007c7e2c;
