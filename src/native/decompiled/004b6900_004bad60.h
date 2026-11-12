#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern undefined4 fn_001249d0(); extern undefined4 fn_0015ebe4(); extern undefined4 * fn_0015ece0(); extern int fn_00173bf4(); extern undefined8 fn_00301a9c();
extern undefined4 fn_0030233c(); extern undefined4 fn_00480b24(); extern undefined4 fn_0048a058(); extern undefined4 fn_004b301c(); extern int fn_004b55dc(); extern undefined4 fn_004b6850();
extern undefined4 fn_004b6ee4(); extern undefined4 fn_0079c308();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000071; extern undefined4 DAT_007dba44; extern undefined4 DAT_008b6460; extern unsigned char *DAT_008b6464;
extern unsigned char *DAT_008b64f8; extern undefined4 DAT_80010001;
