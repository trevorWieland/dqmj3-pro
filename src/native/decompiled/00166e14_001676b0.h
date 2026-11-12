#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001006de(); extern int fn_00100b58(); extern undefined4 fn_001028d4(); extern undefined4 fn_0014ded0(); extern int fn_0014df84(); extern undefined4 fn_001581d0();
extern undefined4 * fn_0015ece0(); extern undefined8 fn_00169f1c(); extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern undefined4 fn_00173cd0(); extern int fn_00173d40();
extern int fn_00173d4c(); extern undefined4 fn_00173d60(); extern char * fn_00191f28(); extern undefined4 fn_0019813c(); extern undefined4 fn_0019828c(); extern undefined4 fn_001987e4();
extern undefined4 fn_001a36d4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00166ff8; extern undefined4 DAT_00167018; extern undefined4 DAT_007e09b4; extern undefined4 DAT_008bfab0;
