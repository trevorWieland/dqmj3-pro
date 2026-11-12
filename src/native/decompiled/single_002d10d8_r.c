#include "single_002d10d8_r.h"


extern undefined4 u_rom__data_Layout_common_floating_008c524c;

void fn_002d10d8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  param_1 = (undefined4 *)*param_1;
  *param_1 = param_2;
  uVar1 = fn_001481c8(param_2,u_rom__data_Layout_common_floating_008c524c,&DAT_008c52a4,1,1);
  param_1[1] = uVar1;
  uVar1 = fn_001923e0(*param_1,s_floating_window_bflyt_008c52a6,1,0);
  param_1[2] = uVar1;
  uVar1 = fn_00178f9c(*param_1,uVar1);
  uVar2 = fn_001828f0(uVar1,s_win_bar_selsct_00_008c52bc);
  param_1[3] = uVar2;
  uVar2 = fn_001828f0(uVar1,s_win_bar_selsct_01_008c52ce);
  param_1[4] = uVar2;
  iVar3 = fn_001827b0(uVar1,s_tb_mess_2_line_00_008c52e0);
  if (iVar3 != 0) {
    uVar2 = fn_0068eb18(DAT_008977e8);
    uVar2 = fn_0025f988(uVar2,s_race_pause_008c52f2);
    fn_00190d50(iVar3,uVar2);
  }
  iVar3 = fn_001827b0(uVar1,s_tb_bar_base_00_008c52fd);
  if (iVar3 != 0) {
    uVar2 = fn_0068eb18(DAT_008977e8);
    uVar2 = fn_0025f988(uVar2,s_race_pause_yes_008c530c);
    fn_00190d50(iVar3,uVar2);
  }
  iVar3 = fn_001827b0(uVar1,s_tb_bar_base_01_008c531b);
  if (iVar3 == 0) {
    return;
  }
  uVar1 = fn_0068eb18(DAT_008977e8);
  uVar1 = fn_0025f988(uVar1,s_race_pause_no_008c532a);
  fn_00190d50(iVar3,uVar1);
  return;
}


