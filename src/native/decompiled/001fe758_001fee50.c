#include "001fe758_001fee50.h"



void fn_001fee50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar2 * 4 + 4);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar2 * 4 + 0x2c);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  if (param_2 < 10) {
    iVar2 = *(int *)(param_1 + param_2 * 4 + 0x2c);
  }
  else {
    iVar2 = *(int *)(param_1 + (param_2 % 10) * 4 + 4);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    }
    iVar2 = *(int *)(param_1 + (param_2 / 10) * 4 + 0x2c);
  }
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
  }
  return;
}



void fn_001fede8(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar1 = fn_001828f0(*(undefined4 *)(iVar4 + 0xa0),s_Null_tutorial_top_win_008c4560);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  uVar2 = fn_001827b0(*(undefined4 *)(iVar4 + 0xa0),s_tb_announce_02_008c4576);
  uVar3 = fn_0068eb18(DAT_008977e8);
  uVar3 = fn_0025f988(uVar3,param_2);
  fn_00190d50(uVar2,uVar3);
  return;
}



void fn_001fedc0(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_001828f0(*(undefined4 *)(*param_1 + 0xa0),s_Null_tutorial_top_win_008c454a);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  return;
}



void fn_001fed8c(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_001828f0(*(undefined4 *)(*param_1 + 0xa0),DAT_00896e94);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  }
  return;
}



void fn_001fed14(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar1 = fn_001828f0(*(undefined4 *)(iVar4 + 0xa0),DAT_00896e94);
  if (iVar1 == 0) {
    return;
  }
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  uVar2 = fn_001827b0(*(undefined4 *)(iVar4 + 0xa0),s_tb_auto_move_008c4525);
  uVar3 = fn_0068eb18(DAT_008977e8);
  uVar3 = fn_0025f988(uVar3,s_race_tutorial_auto_move_008c4532);
  fn_00190d50(uVar2,uVar3);
  return;
}



void fn_001feb50(int *param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  undefined1 auStack_d0 [20];
  char *local_bc [7];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float fStack_74;
  undefined1 auStack_68 [80];
  
  iVar3 = *param_1;
  local_7c = *param_3;
  local_78 = param_3[1];
  fStack_74 = param_3[2];
  iVar1 = fn_0068eb0c(DAT_008977e8);
  iVar2 = fn_0068eb0c(DAT_008977e8);
  fVar6 = *(float *)(iVar1 + 0x20) - *(float *)(iVar2 + 8);
  fVar4 = *(float *)(iVar1 + 0x24) - *(float *)(iVar2 + 0xc);
  fVar7 = *(float *)(iVar1 + 0x28) - *(float *)(iVar2 + 0x10);
  iVar1 = fn_0068eb0c(DAT_008977e8);
  uVar5 = 0;
  if (0.0 <= fVar6 * (local_7c - *(float *)(iVar1 + 8)) +
             fVar4 * (local_78 - *(float *)(iVar1 + 0xc)) +
             fVar7 * (fStack_74 - *(float *)(iVar1 + 0x10))) {
    fn_0068eb0c(DAT_008977e8);
    iVar1 = fn_00176d68();
    fn_001694c0(auStack_68,iVar1 + 0x1a8);
    fn_001781f0(auStack_d0,iVar1 + 0x148);
    local_94 = 0x3f800000;
    local_a0 = uVar5;
    local_9c = uVar5;
    local_98 = uVar5;
    fn_0017fdf0(&local_88,&local_7c,auStack_68,auStack_d0);
    fVar4 = local_88 - 200.0;
    iVar1 = 0;
    local_84 = -(local_84 - 120.0);
    uVar8 = (ulonglong)(uint)local_84;
    local_bc[0] = s_Null_circle_s_008c447f;
    local_bc[1] = s_Null_circle_m_008c448d;
    local_bc[2] = s_Null_circle_l_008c449b;
    local_88 = fVar4;
    do {
      iVar2 = fn_001828f0(*(undefined4 *)(iVar3 + 0xa0),local_bc[iVar1]);
      *(byte *)(iVar2 + 0x44) = iVar1 == param_2 | *(byte *)(iVar2 + 0x44) & 0xfe;
      *(undefined4 *)(iVar2 + 0x24) = uVar5;
      iVar1 = iVar1 + 1;
      *(float *)(iVar2 + 0x1c) = fVar4;
      *(int *)(iVar2 + 0x20) = (int)uVar8;
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
    } while (iVar1 < 3);
    *(undefined1 *)(iVar3 + 0x2de) = 1;
  }
  return;
}



void fn_001feaa8(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  char *local_30 [6];
  
  iVar3 = 0;
  iVar4 = *param_1;
  uVar5 = 0;
  local_30[0] = s_Null_circle_s_008c447f;
  local_30[1] = s_Null_circle_m_008c448d;
  local_30[2] = s_Null_circle_l_008c449b;
  do {
    iVar1 = fn_001828f0(*(undefined4 *)(iVar4 + 0xa0),local_30[iVar3]);
    *(byte *)(iVar1 + 0x44) = iVar3 == param_2 | *(byte *)(iVar1 + 0x44) & 0xfe;
    uVar2 = param_3[1];
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar1 + 0x1c) = *param_3;
    *(undefined4 *)(iVar1 + 0x20) = uVar2;
    *(int *)(iVar1 + 0x24) = (int)uVar5;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  } while (iVar3 < 3);
  *(undefined1 *)(iVar4 + 0x2de) = 1;
  return;
}



void fn_001fea78(int *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = fn_001828f0(*(undefined4 *)(*param_1 + 0xa0),s_act_y_008c4479);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  return;
}



void fn_001fea48(int *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = fn_001828f0(*(undefined4 *)(*param_1 + 0xa0),s_act_x_008c4473);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  return;
}



void fn_001fe9f8(int *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = fn_001828f0(*(undefined4 *)(iVar2 + 0xa0),s_BNull_lamp_tention_008c444f + 1);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  iVar1 = fn_001828f0(*(undefined4 *)(iVar2 + 0xa0),s_Null_gauge_frame_008c4462);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  return;
}



void fn_001fe9a8(int *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = fn_001828f0(*(undefined4 *)(*param_1 + 0xa0),s_win_race_time_008c4438);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  return;
}



void fn_001fe830(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  char *local_40 [6];
  char *local_28 [4];
  
  iVar5 = *param_1;
  iVar1 = fn_001828f0(*(undefined4 *)(iVar5 + 0xa0),s_Null_tutorial_count_008c44a9);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  iVar1 = 0;
  local_40[0] = s_count_1a_008c44bd;
  local_40[1] = s_count_2a_008c44c6;
  local_40[2] = s_count_3a_008c44cf;
  local_40[3] = s_count_4a_008c44d8;
  local_40[4] = s_count_5a_008c44e1;
  local_28[0] = s_count_1b_008c44ea;
  local_28[1] = s_count_2b_008c44f3;
  local_28[2] = s_count_3b_008c44fc;
  local_28[3] = s_count_4b_008c4505;
  do {
    iVar2 = fn_001828f0(*(undefined4 *)(iVar5 + 0xa0),local_40[iVar1]);
    bVar6 = iVar1 == param_2 + -1;
    iVar1 = iVar1 + 1;
    bVar4 = *(byte *)(iVar2 + 0x44) & 0xfe;
    if (bVar6) {
      bVar4 = bVar4 | 1;
    }
    *(byte *)(iVar2 + 0x44) = bVar4;
  } while (iVar1 < 5);
  iVar1 = 0;
  do {
    iVar2 = fn_001828f0(*(undefined4 *)(iVar5 + 0xa0),local_28[iVar1]);
    bVar6 = iVar1 == param_3 + -1;
    iVar1 = iVar1 + 1;
    bVar4 = *(byte *)(iVar2 + 0x44) & 0xfe;
    if (bVar6) {
      bVar4 = bVar4 | 1;
    }
    *(byte *)(iVar2 + 0x44) = bVar4;
  } while (iVar1 < 4);
  iVar1 = fn_001828f0(*(undefined4 *)(iVar5 + 0xa0),s_tutorial_start_008c43fe);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  iVar1 = fn_001828f0(*(undefined4 *)(iVar5 + 0xa0),s_tutorial_cleat_008c440d);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  *(undefined1 *)(*(int *)(iVar5 + 8) + *(int *)(iVar5 + 0x18)) = 0x1c;
  uVar3 = *(int *)(iVar5 + 0x18) + 1;
  if ((uint)(*(int *)(iVar5 + 0xc) - *(int *)(iVar5 + 8)) <= uVar3) {
    uVar3 = 0;
  }
  *(uint *)(iVar5 + 0x18) = uVar3;
  return;
}



void fn_001fe758(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  *(undefined1 *)(*(int *)(iVar4 + 8) + *(int *)(iVar4 + 0x18)) = 0x1f;
  uVar1 = *(int *)(iVar4 + 0x18) + 1;
  if ((uint)(*(int *)(iVar4 + 0xc) - *(int *)(iVar4 + 8)) <= uVar1) {
    uVar1 = 0;
  }
  *(uint *)(iVar4 + 0x18) = uVar1;
  piVar2 = *(int **)(*(int *)(iVar4 + 0xa0) + 0x10);
  iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,s_win_yerrow_blur_00_008c43d8,1);
  piVar2 = *(int **)(*(int *)(iVar4 + 0xa0) + 0x10);
  iVar4 = (**(code **)(*piVar2 + 0x2c))(piVar2,s_win_yerrow_blur_01_008c43eb,1);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
  *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
  return;
}


