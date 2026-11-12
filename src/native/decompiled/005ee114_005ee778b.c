#include "005ee114_005ee778b.h"



undefined4 * fn_005ee778(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = &DAT_00858d98;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  param_1[0x10] = DAT_008f9e2c;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  return param_1;
}



void fn_005ee704(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
  if (0 < iVar1) {
    do {
      uVar2 = fn_005f03cc(*(undefined4 *)(*(int *)(param_1 + 0x14) + iVar3 * 4));
      fn_0052de98(uVar2,param_2);
      iVar4 = 0;
      if (0 < param_2) {
        do {
          fn_005f0370(*(undefined4 *)(*(int *)(param_1 + 0x14) + iVar3 * 4));
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}



void fn_005ee6e4(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x38);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(iVar1 + 0x7c) = *param_2;
  *(undefined4 *)(iVar1 + 0x80) = uVar2;
  *(undefined4 *)(iVar1 + 0x84) = uVar3;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  return;
}



void fn_005ee694(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_s0;
  ulonglong uVar4;
  
  iVar3 = 0;
  uVar4 = (ulonglong)in_s0;
  iVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
  if (0 < iVar1) {
    do {
      iVar2 = fn_005f03cc(*(undefined4 *)(*(int *)(param_1 + 0x14) + iVar3 * 4));
      iVar3 = iVar3 + 1;
      *(int *)(iVar2 + 0x23c) = (int)uVar4;
    } while (iVar3 < iVar1);
  }
  return;
}


