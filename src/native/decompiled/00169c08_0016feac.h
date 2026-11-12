#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00147f5c(); extern undefined4 fn_001480d0(); extern undefined4 fn_001481c8(); extern int fn_00179ac8(); extern int fn_00179c8c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0017c0fc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0016dd14; extern undefined4 DAT_0016dd40; extern undefined4 PTR_s_battle_subwindows_bflyt_007ba1bc; extern undefined4 PTR_u_rom__data_Layout_battle_battle_l_007ba188;
