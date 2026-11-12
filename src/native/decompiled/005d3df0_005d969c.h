#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001006ac(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined4 fn_0014f1bc(); extern undefined4 fn_0015a41c();
extern undefined4 fn_0015b0f8(); extern undefined4 * fn_0015ece0(); extern undefined4 * fn_00170f54(); extern undefined4 fn_0022f244(); extern undefined4 fn_0022f750(); extern undefined4 fn_00231d50();
extern undefined4 fn_0023c2a8(); extern undefined4 fn_0023cd94(); extern undefined4 fn_0023cdac(); extern undefined4 fn_0023cdcc(); extern undefined4 fn_0023d0d4(); extern undefined4 fn_0023d0ec();
extern undefined4 fn_0023d104(); extern undefined4 fn_0023d11c(); extern undefined4 fn_0023d150(); extern undefined4 fn_0023d270(); extern undefined4 fn_0023d2e4(); extern undefined4 fn_002c29a0();
extern undefined4 fn_002c330c(); extern undefined4 fn_002f6490(); extern undefined4 fn_002f6534(); extern undefined4 fn_002f68a4(); extern undefined4 fn_002f70cc(); extern undefined4 fn_002ff628();
extern undefined8 fn_00301a9c(); extern undefined4 fn_0031b78c(); extern undefined4 fn_00321118(); extern undefined4 * fn_004b637c(); extern undefined4 fn_004b9b4c(); extern int fn_004bb560();
extern undefined4 fn_00689bd0(); extern undefined4 fn_00689efc(); extern undefined4 fn_0068ab44(); extern bool fn_006ba220(); extern undefined4 fn_006ba284(); extern undefined4 fn_006f5dec();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005d41b0; extern undefined4 DAT_005d4238; extern undefined4 DAT_007c9fe0; extern undefined4 DAT_00853388;
extern undefined4 DAT_00869ad0; extern undefined4 DAT_00896fd0; extern undefined4 DAT_00898840; extern undefined4 DAT_008c7611;
extern undefined4 DAT_008c7635; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4; extern undefined4 PTR_FUN_00853b40;
extern undefined4 PTR_FUN_00854c0c;
