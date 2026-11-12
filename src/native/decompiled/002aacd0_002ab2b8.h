#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern bool fn_001cf540(); extern undefined4 fn_001d5fa4(); extern undefined4 fn_001d68cc(); extern undefined4 fn_001d8a48(); extern undefined4 fn_001d91ec(); extern undefined4 fn_001d92ac();
extern undefined4 fn_001d92e8(); extern undefined4 fn_001d9bb4(); extern undefined4 fn_001dcdf0(); extern undefined4 fn_001dcee8(); extern undefined4 fn_001f6464(); extern undefined4 fn_001f6470();
extern undefined4 fn_0021afb8(); extern undefined4 fn_0021c420(); extern undefined4 fn_0021c488(); extern undefined4 fn_0021d7a0(); extern undefined4 fn_00259878(); extern undefined4 fn_0026fd8c();
extern undefined4 fn_0027042c(); extern undefined4 fn_00270f38(); extern undefined4 fn_00274348(); extern undefined4 fn_002761b4(); extern void fn_002aafbc(); extern undefined4 fn_002cd59c();
extern int fn_002e9c90(); extern int fn_002e9ce8(); extern undefined4 fn_002ea2b0(); extern undefined4 fn_005456d0(); extern int fn_0066173c(); extern undefined4 fn_00692f98();
extern undefined4 fn_00698fb8(); extern undefined4 fn_006aa87c(); extern bool fn_006aba74(); extern undefined4 fn_006abae0(); extern int fn_006b09bc(); extern bool fn_006b13fc();
extern undefined4 fn_006ca25c(); extern uint fn_006ca788(); extern undefined4 fn_006f72a0(); extern undefined4 fn_006f72b4(); extern undefined4 fn_006f7508(); extern undefined4 fn_006f7a5c();
extern undefined4 fn_006f7a84(); extern undefined4 fn_006f7ab8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081eb74; extern undefined4 DAT_008977e0;
