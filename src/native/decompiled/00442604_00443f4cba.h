#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern int * fn_001827b0(); extern undefined4 fn_001828f0(); extern undefined4 fn_00190d50(); extern undefined4 fn_002e69f8(); extern undefined4 fn_00443e54();
extern undefined4 fn_0066e368(); extern int fn_0066e3bc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00443d34; extern undefined4 DAT_00443d3c; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00862850;
extern undefined4 DAT_00862860; extern undefined4 DAT_00862880; extern undefined4 DAT_00892f08; extern undefined4 DAT_00897850;
extern undefined4 PTR_s_tb_player_00_00892f18;
