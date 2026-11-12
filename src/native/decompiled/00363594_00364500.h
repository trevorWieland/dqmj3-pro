#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00129d4c(); extern undefined4 fn_00144834(); extern undefined4 fn_00154ae0(); extern undefined4 fn_00163868(); extern undefined4 fn_00163d44();
extern undefined4 fn_001cff74(); extern undefined4 fn_001d1284(); extern undefined4 fn_00215e7c(); extern int fn_002aaac8(); extern undefined4 fn_002cd56c(); extern undefined4 fn_002ea030();
extern int fn_002ea524(); extern undefined4 fn_003633a0(); extern void fn_00363594(); extern undefined4 fn_00363d1c(); extern undefined4 fn_003f2b10(); extern undefined4 fn_006952bc();
extern char * fn_006ab040(); extern int fn_006afabc(); extern int fn_006afb24(); extern uint fn_006b06e8(); extern undefined4 fn_006b0964(); extern int fn_006b09bc();
extern bool fn_006b6398(); extern undefined4 fn_006bb52c(); extern undefined4 fn_006c2fc4(); extern bool fn_006c3400(); extern bool fn_006c3a70(); extern bool fn_006c3a84();
extern undefined4 fn_006f637c(); extern undefined4 fn_006f6fe8(); extern undefined4 fn_006f7508(); extern undefined4 fn_006f7a0c(); extern undefined4 fn_006f7a84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_006c31ac; extern undefined4 DAT_006c31b4; extern undefined4 DAT_006c31bc; extern undefined4 DAT_006c31c4;
extern undefined4 DAT_007be438; extern undefined4 DAT_007be43c; extern undefined4 DAT_007be440; extern undefined4 DAT_007be444;
extern undefined4 DAT_007be488; extern undefined4 DAT_008977e0; extern undefined4 DAT_008977e4; extern undefined4 DAT_00897804;
