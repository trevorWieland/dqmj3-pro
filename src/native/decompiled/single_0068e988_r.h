#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 fn_0011c184(); extern undefined4 fn_0012148c(); extern undefined4 * fn_001287b4(); extern undefined4 fn_0012d73c(); extern undefined4 fn_00145ac0();
extern undefined4 fn_001828f0(); extern undefined4 fn_001cc0e0(); extern undefined4 fn_001cc0f4(); extern undefined4 fn_001cc13c(); extern undefined4 fn_001cc2a8(); extern undefined4 fn_001fe9a8();
extern undefined1 * fn_002487f4(); extern undefined1 * fn_0024a548(); extern undefined4 fn_0024ab74(); extern undefined4 fn_0024c760(); extern undefined4 fn_006a6980(); extern int fn_006a8a34();
extern int fn_006adb48(); extern int fn_006b6bc4(); extern undefined4 fn_006b71a8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern unsigned char *DAT_008977e8; extern undefined4 s_Null_rank_008c442e;
