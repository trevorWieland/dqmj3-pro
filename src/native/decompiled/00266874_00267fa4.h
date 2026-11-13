#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00121838(); extern undefined4 fn_0014481c(); extern undefined4 fn_00145b00(); extern undefined4 fn_001480d0(); extern undefined4 fn_001481c8(); extern undefined4 fn_00178f9c();
extern undefined4 fn_001828f0(); extern undefined4 fn_0018a69c(); extern undefined4 fn_00190d50(); extern undefined4 fn_001924ec(); extern undefined4 fn_001c8abc(); extern undefined4 fn_001ccd10();
extern undefined4 fn_002309d8(); extern undefined4 fn_00246824(); extern bool fn_00246924(); extern undefined4 fn_00263814(); extern float * fn_00266ed4(); extern int * fn_0028aad0();
extern undefined4 fn_002cd49c(); extern undefined4 fn_002feef8(); extern uint fn_003035b0(); extern undefined4 fn_00305898(); extern undefined4 fn_003eff3c(); extern undefined4 fn_0054ca5c();
extern undefined4 fn_005e6a40(); extern int fn_00661570(); extern int * fn_0068897c(); extern undefined4 fn_00688c04(); extern undefined4 fn_00689210(); extern int * fn_00689220();
extern int fn_0068c2e4(); extern undefined4 fn_0068c6c4(); extern undefined4 * fn_007b858c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c9e40; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00896e14; extern undefined4 DAT_00896e18;
extern undefined4 DAT_00896e1c; extern undefined4 DAT_00896e20; extern undefined4 DAT_00896e24; extern undefined4 DAT_00896e28;
extern undefined4 DAT_00896e2c; extern undefined4 DAT_008977e8; extern undefined4 DAT_00897800; extern undefined4 DAT_00897804;
extern undefined4 DAT_00898780; extern undefined4 DAT_008c4e52; extern undefined4 DAT_008c4e54; extern undefined4 DAT_008c4eb6;
extern undefined4 s_16_gold_G_008c4e70; extern undefined4 s_G_gauge_008c4e7a; extern undefined4 s_Nl_numb_exp_008c4e3d; extern undefined4 s_Null_mon_icon_bg_008c4e82;
extern undefined4 s_Null_s_size_008c4e5b; extern undefined4 s_Parts_00_008c4e49; extern undefined4 s_Parts_01_008c4e67; extern undefined4 s_bS_00_008c4e55;
extern undefined4 s_gage_blue_008c4ef1; extern undefined4 s_gage_max_008c4e34; extern undefined4 s_gage_max_008c4ee8; extern undefined4 s_level_up_008c4ecd;
extern undefined4 s_level_up_00_008c4ed6; extern undefined4 s_mon_icon_bg_p_00_008c4e93; extern undefined4 s_tb_00_008c4ea4; extern undefined4 s_tb_01_008c4eb0;
extern undefined4 s_tb_02_008c4eaa; extern undefined4 s_tb_03_008c4ee2; extern undefined4 s_tb_standby_mon_008c4ebe;
