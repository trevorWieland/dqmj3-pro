#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0015b0dc(); extern undefined4 fn_0015b0f8(); extern undefined4 fn_00203440(); extern undefined4 fn_0022f584();
extern bool fn_002f5d5c(); extern bool fn_002f61a4(); extern undefined1 fn_002f6240(); extern undefined4 fn_002f68a4(); extern undefined4 fn_002f68fc(); extern undefined4 fn_002f6c2c();
extern undefined4 fn_002f7e70(); extern int fn_002febd8(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined8 fn_00301b24(); extern int fn_0036c13c();
extern undefined4 fn_0068974c(); extern undefined4 fn_006899f4(); extern undefined4 * fn_0068ab5c(); extern undefined4 fn_006adb80(); extern undefined1 fn_006f6a6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0057170c; extern undefined4 DAT_00571724; extern undefined4 DAT_00571740; extern undefined4 DAT_00571758;
extern undefined4 DAT_00571770; extern undefined4 DAT_00571788; extern undefined4 DAT_00840e34; extern undefined4 DAT_00859100;
extern undefined4 DAT_008c7615; extern undefined4 DAT_008f9cf8; extern undefined4 DAT_008f9d04;
