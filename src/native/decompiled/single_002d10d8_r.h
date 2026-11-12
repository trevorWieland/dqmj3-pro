#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001481c8(); extern undefined4 fn_00178f9c(); extern int * fn_001827b0(); extern undefined4 fn_001828f0(); extern undefined4 fn_00190d50(); extern undefined4 fn_001923e0();
extern int fn_0025f988(); extern undefined4 fn_0068eb18();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e8; extern undefined4 DAT_008c52a4; extern undefined4 s_floating_window_bflyt_008c52a6; extern undefined4 s_race_pause_008c52f2;
extern undefined4 s_race_pause_no_008c532a; extern undefined4 s_race_pause_yes_008c530c; extern undefined4 s_tb_bar_base_00_008c52fd; extern undefined4 s_tb_bar_base_01_008c531b;
extern undefined4 s_tb_mess_2_line_00_008c52e0; extern undefined4 s_win_bar_selsct_00_008c52bc; extern undefined4 s_win_bar_selsct_01_008c52ce;
