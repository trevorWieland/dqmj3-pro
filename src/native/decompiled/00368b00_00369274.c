#include "00368b00_00369274.h"



void fn_00369274(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x188);
  *param_2 = *(undefined4 *)(iVar1 + 0x24);
  param_2[1] = *(undefined4 *)(iVar1 + 0x28);
  param_2[2] = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined2 *)(param_2 + 3) = *(undefined2 *)(iVar1 + 0x30);
  *(undefined4 *)((int)param_2 + 0xe) = *(undefined4 *)(iVar1 + 0x32);
  *(undefined4 *)((int)param_2 + 0x12) = *(undefined4 *)(iVar1 + 0x36);
  *(undefined4 *)((int)param_2 + 0x16) = *(undefined4 *)(iVar1 + 0x3a);
  *(undefined2 *)((int)param_2 + 0x1a) = *(undefined2 *)(iVar1 + 0x3e);
  return;
}



undefined4 * fn_00369144(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_008275f0;
  uVar2 = param_1[7];
  uVar1 = uVar2;
  if ((uint)param_1[8] < uVar2) {
    do {
      uVar1 = uVar1 + 0x14;
    } while (uVar1 != param_1[8]);
  }
  fn_001008c4(uVar2,(int)(param_1[9] - uVar2) / 0x14,0);
  uVar2 = param_1[4];
  uVar1 = uVar2;
  if ((uint)param_1[5] <= uVar2) {
    for (; uVar1 != param_1[5]; uVar1 = uVar1 + 0x34) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[6] - uVar2) / 0x34,0);
  uVar2 = param_1[1];
  uVar1 = uVar2;
  if ((uint)param_1[2] <= uVar2) {
    for (; uVar1 != param_1[2]; uVar1 = uVar1 + 0x34) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[3] - uVar2) / 0x34,0);
  return param_1;
}



undefined4 * fn_00369140(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_008275f0;
  uVar2 = param_1[7];
  uVar1 = uVar2;
  if ((uint)param_1[8] < uVar2) {
    do {
      uVar1 = uVar1 + 0x14;
    } while (uVar1 != param_1[8]);
  }
  fn_001008c4(uVar2,(int)(param_1[9] - uVar2) / 0x14,0);
  uVar2 = param_1[4];
  uVar1 = uVar2;
  if ((uint)param_1[5] <= uVar2) {
    for (; uVar1 != param_1[5]; uVar1 = uVar1 + 0x34) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[6] - uVar2) / 0x34,0);
  uVar2 = param_1[1];
  uVar1 = uVar2;
  if ((uint)param_1[2] <= uVar2) {
    for (; uVar1 != param_1[2]; uVar1 = uVar1 + 0x34) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[3] - uVar2) / 0x34,0);
  return param_1;
}



void fn_003690f4(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &DAT_008275f0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = param_2;
  param_1[9] = 0;
  return;
}



int fn_00368f60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = 0;
  if (((0 < param_2) && (iVar1 = fn_003b37b0(*(undefined4 *)(param_1 + 0x28)), iVar1 != 0)) &&
     (iVar1 = fn_003b237c(*(undefined4 *)(param_1 + 0x28),(int)*(short *)(iVar1 + 8)), iVar1 != 0))
  {
    iVar4 = 0;
    do {
      uVar6 = fn_003b2730(*(undefined4 *)(param_1 + 0x28),(int)*(short *)(iVar1 + iVar4 * 8 + 0xc))
      ;
      iVar3 = (int)((ulonglong)uVar6 >> 0x20);
      iVar2 = (int)uVar6;
      if (iVar2 != 0) {
        iVar3 = (int)*(short *)(iVar2 + 4);
      }
      if (iVar2 != 0 && iVar3 != 0) {
        if (*(short *)(iVar2 + 2) < 1) {
          iVar3 = fn_0066173c(iVar3);
        }
        else {
          iVar3 = fn_002ea308();
        }
        if (iVar5 < iVar3) {
          iVar5 = iVar3;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 10);
  }
  return iVar5;
}



void fn_00368da4(int *param_1,short *param_2,undefined1 param_3,undefined2 param_4)

{
  int iVar1;
  int *piVar2;
  float in_s0;
  undefined4 local_40;
  undefined2 local_3c;
  short local_3a;
  undefined4 local_38;
  float local_34;
  short local_30;
  short local_2e;
  short local_2c;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_38 = 0;
  local_40 = 0xffffffff;
  local_28 = 0xff;
  local_27 = 0;
  local_2a = 0;
  local_25 = 0xff;
  local_24 = 0xff;
  local_29 = 0;
  local_21 = 0xff;
  local_18 = 0xffffffff;
  local_23 = 0xff;
  local_20 = 0;
  local_1c = 0;
  local_3a = *param_2;
  local_34 = in_s0 * in_s0;
  local_30 = param_2[1];
  local_2e = param_2[3];
  local_2c = param_2[2];
  local_3c = param_4;
  local_26 = param_3;
  iVar1 = fn_006f7a0c(DAT_008977e0);
  local_25 = fn_006c3a70(*(undefined4 *)(iVar1 + 0x30));
  iVar1 = fn_006f7a0c(DAT_008977e0);
  local_24 = fn_006c3a84(*(undefined4 *)(iVar1 + 0x30));
  local_23 = (undefined1)param_2[6];
  local_1c = *(undefined4 *)(param_2 + 4);
  local_22 = (**(code **)(*param_1 + 0x44))(param_1,(int)*param_2);
  piVar2 = (int *)fn_006f7508(DAT_008977e0);
  (**(code **)(*piVar2 + 0x68))(piVar2,&local_40);
  return;
}



void fn_00368d50(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)param_1 = 0xffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  return;
}



void fn_00368ce8(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0xff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}



undefined4 fn_00368c90(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = param_1[1] - *param_1;
  iVar1 = iVar3 >> 0x1f;
  iVar3 = iVar3 / 0x2c + iVar1;
  if (iVar3 != iVar1) {
    do {
      if (*(short *)(*param_1 + uVar2 * 0x2c + 6) == param_2) {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(iVar3 - iVar1));
  }
  return 0;
}



void fn_00368b00(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_130 [144];
  short local_a0 [66];
  
  iVar1 = fn_00154ae0(DAT_008977e4);
  fn_0017821c(auStack_130,iVar1 + 0x38,0x90);
  fn_0017821c(local_a0,iVar1 + 200,0x80);
  uVar4 = 0;
  do {
    if (local_a0[uVar4] != -1) {
      piVar2 = (int *)fn_006f7508(DAT_008977e0);
      iVar1 = (**(code **)(*piVar2 + 0x84))(piVar2,(int)local_a0[uVar4]);
      if (iVar1 != 0) {
        uVar3 = fn_006bb52c();
        iVar1 = (**(code **)(*param_1 + 0x40))(param_1,uVar3);
        if ((iVar1 != 0) && (*(short *)(iVar1 + 0xc) == 4)) {
          fn_00242710(*(undefined4 *)(DAT_00897804 + 0x1c),*(undefined4 *)(iVar1 + 8),1);
        }
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x40);
  return;
}


