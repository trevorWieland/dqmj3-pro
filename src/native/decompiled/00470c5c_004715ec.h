#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 * fn_0014f480(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0015ef58(); extern bool fn_00454b8c(); extern undefined4 fn_0046ffa8();
extern undefined4 fn_00470088(); extern undefined4 fn_004703e4(); extern void fn_00471460(); extern undefined4 * fn_004745d8(); extern undefined4 * fn_004b5488(); extern int fn_004b5540();
extern int fn_004b616c(); extern undefined4 fn_004b8d4c(); extern undefined4 fn_004b8d90(); extern undefined4 fn_004b9c58(); extern undefined4 fn_004b9cb4(); extern undefined4 fn_004b9d24();
extern undefined4 fn_004b9d74(); extern uint fn_004ba5ac(); extern bool fn_006d3b54();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008531d8;
