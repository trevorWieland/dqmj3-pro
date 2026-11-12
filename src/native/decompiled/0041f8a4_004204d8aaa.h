#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00145b00(); extern undefined4 fn_0015b0dc(); extern undefined4 fn_0022f584(); extern undefined4 fn_002f68a4(); extern int fn_002f7420();
extern int fn_0036c13c(); extern undefined4 fn_0041fb28(); extern undefined4 * fn_0041fd70(); extern undefined4 fn_0065d098(); extern undefined4 fn_0068974c(); extern undefined1 fn_006f6a6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0041fad4; extern undefined4 DAT_0041faf0; extern undefined4 DAT_0041fb10; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_00896fe0; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
