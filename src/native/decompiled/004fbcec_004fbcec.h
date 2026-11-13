#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00124e48(); extern undefined4 fn_004efcf4(); extern undefined4 fn_00505a0c(); extern int fn_0050b080(); extern int fn_0050b144(); extern int fn_0050b370();
extern undefined4 fn_0050b66c(); extern undefined4 fn_0050fb58(); extern undefined1 * fn_005118f4(); extern int fn_0051811c(); extern undefined4 fn_005191c0(); extern undefined1 * fn_0051b784();
extern undefined4 fn_0051ba28(); extern undefined4 fn_0051c5c8(); extern undefined1 * fn_0051ca8c(); extern undefined4 fn_0051cb64(); extern undefined4 fn_0051da28(); extern undefined4 fn_006d6e30();
extern undefined4 fn_006d897c(); extern undefined4 fn_006d92e4(); extern undefined4 fn_006db160(); extern undefined4 fn_006db530(); extern undefined4 fn_006db790(); extern undefined4 fn_006db908();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern undefined4 DAT_00000006; extern undefined4 DAT_008bf49c; extern undefined4 DAT_008bf4cc;
extern undefined4 DAT_008bf4d4; extern unsigned char *DAT_008bf4e0; extern undefined4 DAT_008c0674; extern undefined4 DAT_008c06a0;
