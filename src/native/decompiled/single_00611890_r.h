#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern int fn_0011c134(); extern longlong fn_00129f6c(); extern int fn_0016ba34(); extern undefined4 fn_00178f9c(); extern undefined4 fn_00190d50();
extern undefined4 fn_00231ca0(); extern int fn_006c89e4(); extern int fn_006c89fc(); extern undefined4 fn_006c969c(); extern undefined1 fn_006ca8c0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 DAT_00897800; extern undefined4 DAT_008c680e; extern undefined4 DAT_008c6818;
extern undefined4 DAT_008c682d; extern undefined4 DAT_008c6838; extern undefined4 DAT_008c6840; extern undefined4 DAT_008c684a;
extern undefined4 DAT_008c6852; extern undefined4 DAT_008c6868; extern undefined4 DAT_008c6872; extern undefined4 DAT_008c6882;
extern undefined4 DAT_008c689a; extern undefined4 DAT_008c68aa; extern undefined4 DAT_008c68bc; extern undefined4 DAT_008c68d2;
extern undefined4 DAT_008c68e6; extern undefined4 DAT_008c68f0; extern undefined4 DAT_008c6902; extern undefined4 DAT_008c6914;
extern undefined4 DAT_008c6926; extern undefined4 DAT_008c6937; extern undefined4 DAT_008c694b; extern undefined4 DAT_008c6962;
extern undefined4 DAT_008c6980; extern undefined4 DAT_008c698f; extern undefined4 DAT_008c699e; extern undefined4 DAT_008c69ae;
extern undefined4 DAT_008c69b6; extern undefined4 DAT_008c69c0; extern undefined4 DAT_008c69d0; extern undefined4 DAT_008c69da;
extern undefined4 DAT_008c69ec; extern undefined4 DAT_008c69f6; extern undefined4 DAT_008c6b33; extern undefined4 DAT_008c6b3d;
extern undefined4 DAT_008c6b44; extern undefined4 s_BasicResultType_Odds_008c6818; extern undefined4 s_BasicResultType_Value_008c68bc; extern undefined4 s_G00_tb_02_008c6840;
extern undefined4 s_G00_tb_02_008c68f8; extern undefined4 s_G00_tb_05_008c6852; extern undefined4 s_G00_tb_05_008c690a; extern undefined4 s_G00_tb_06_008c6868;
extern undefined4 s_G00_tb_06_008c691c; extern undefined4 s_G00_tb_07_008c6937; extern undefined4 s_G00_tb_09_008c6882; extern undefined4 s_G00_tb_09_008c6941;
extern undefined4 s_G00_tb_10_008c680e; extern undefined4 s_G00_tb_10_008c68b2; extern undefined4 s_G00_tb_11_008c68d2; extern undefined4 s_G00_tb_13_008c682d;
extern undefined4 s_G00_tb_13_008c68dc; extern undefined4 s_G00_tb_16_008c68e6; extern undefined4 s_G00_tb_17_008c694b; extern undefined4 s_G01_tb_00_008c6b33;
extern undefined4 s_G02_tb_00_008c69b6; extern undefined4 s_G02_tb_01_008c69d0; extern undefined4 s_G02_tb_02_008c69ec; extern undefined4 s_PrizeUnit_Exp_008c688c;
extern undefined4 s_PrizeUnit_Gold_008c689a; extern undefined4 s_ResultType_Odds_008c6872; extern undefined4 s_ResultType_Value_008c6926; extern undefined4 s_df_lv_008c6b3d;
extern undefined4 s_frame_battlecount_008c69da; extern undefined4 s_frame_deathcount_008c69f6; extern undefined4 s_frame_playtime_008c699e; extern undefined4 s_frame_turncount_008c69c0;
extern undefined4 s_tb_playtime_01_008c6962; extern undefined4 s_tb_playtime_02_008c6980; extern undefined4 s_tb_playtime_03_008c698f;
