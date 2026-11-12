#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001006de(); extern int fn_00100b58(); extern int fn_00101d80(); extern undefined4 fn_0015b064(); extern undefined4 fn_0015b0f8(); extern undefined4 fn_0017d96c();
extern undefined4 fn_00190d50(); extern undefined4 fn_0022cdb4(); extern undefined4 fn_0022cdf0(); extern undefined4 fn_0022f584(); extern undefined4 fn_00231db4(); extern undefined4 fn_002b427c();
extern undefined4 fn_002ff628(); extern undefined4 fn_0036fc5c(); extern undefined4 fn_003bbdc0(); extern undefined4 fn_003bbde0(); extern undefined4 fn_0042e8f4(); extern undefined4 fn_0042ec40();
extern undefined4 fn_00437134(); extern undefined4 fn_0043721c(); extern undefined4 fn_004374f4(); extern undefined4 fn_0043761c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00435870; extern undefined4 DAT_00435888; extern undefined4 DAT_004358a0; extern undefined4 DAT_00435b68;
extern undefined4 DAT_004374e0; extern undefined4 DAT_008c7651;
