#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined4 fn_0015b0dc(); extern undefined4 fn_0022f584(); extern undefined4 fn_002c4304();
extern undefined4 fn_002c4694(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined4 fn_0031b77c(); extern undefined4 fn_0036c5f4(); extern undefined4 fn_0039696c();
extern void fn_003970bc(); extern undefined4 fn_003f8108(); extern undefined4 fn_003f820c(); extern undefined4 fn_00689828(); extern undefined4 fn_00689878(); extern undefined4 fn_006899f4();
extern undefined4 fn_00689bd0(); extern undefined4 fn_00689d04(); extern undefined4 fn_0068ab44(); extern undefined4 * fn_0068ad5c(); extern bool fn_006ba220(); extern bool fn_006bec78();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00397304; extern undefined4 DAT_00894398; extern undefined4 DAT_0089439c; extern undefined4 DAT_008c7611;
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4; extern undefined4 PTR_FUN_0081f238; extern undefined4 PTR_FUN_0082bc80;
