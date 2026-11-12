#include "003633a0_00363c3c.h"



uint fn_00363c3c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fn_002ea69c();
  uVar2 = (uint)(iVar1 != 0);
  iVar1 = fn_002ea638(param_1);
  if (iVar1 != 0) {
    uVar2 = uVar2 | 8;
  }
  iVar1 = fn_002ea608(param_1);
  if (iVar1 != 0) {
    uVar2 = uVar2 | 0x40;
  }
  iVar1 = fn_002ea68c(param_1);
  if (iVar1 != 0) {
    uVar2 = uVar2 | 2;
  }
  iVar1 = fn_002ea7e0(param_1);
  if (iVar1 == 0) {
    iVar1 = fn_002ea870(param_1);
    if (iVar1 != 0) {
      uVar2 = uVar2 | 4;
    }
  }
  else {
    uVar2 = uVar2 | 0x2000;
  }
  iVar1 = fn_002ea798(param_1);
  if (iVar1 != 0) {
    uVar2 = uVar2 | 0x10;
  }
  iVar1 = fn_002ea628(param_1);
  if (iVar1 != 0) {
    uVar2 = uVar2 | 0x80;
  }
  iVar1 = fn_002ea720(param_1);
  if (iVar1 != 0) {
    uVar2 = uVar2 | 0x20;
  }
  iVar1 = fn_002ea67c(param_1);
  if (iVar1 != 0) {
    uVar2 = uVar2 | 0x100;
  }
  iVar1 = fn_002ea618(param_1);
  if (iVar1 != 0) {
    uVar2 = uVar2 | 0x200;
  }
  iVar1 = fn_002ea710(param_1);
  if (iVar1 != 0) {
    uVar2 = uVar2 | 0x400;
  }
  return uVar2;
}



void fn_003634fc(undefined4 param_1,int *param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  
  fn_0012a2d8(&DAT_008914d0);
  iVar2 = *param_2;
  uVar4 = 0;
  if (param_2[1] - iVar2 >> 1 != 0) {
    do {
      puVar3 = &DAT_008914d0 + uVar4;
      iVar1 = uVar4 * 2;
      uVar4 = uVar4 + 1;
      *puVar3 = *(undefined2 *)(iVar2 + iVar1);
      iVar2 = *param_2;
    } while (uVar4 < (uint)(param_2[1] - iVar2 >> 1));
  }
  DAT_008914c0 = param_1;
  DAT_008914c8 = param_5;
  DAT_008914bc = param_4;
  DAT_008914c4 = param_3;
  return;
}



undefined4 fn_003634ec(int param_1)

{
  return *(undefined4 *)(&DAT_007be488 + param_1 * 4);
}



undefined4
fn_003633a0(undefined4 param_1,int param_2,ushort *param_3,uint param_4,ushort *param_5,int param_6
            ,int param_7)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_s0;
  
  if (*param_3 < param_4) {
    if ((int)(uint)*param_5 <=
        (int)(4 - (uint)(byte)(&DAT_007be488)[*(char *)(param_6 + 0x1be) * 4])) {
      *param_5 = (ushort)(byte)(&DAT_007be488)[*(char *)(param_6 + 0x1be) * 4] + *param_5;
      if (param_7 == 0) {
        param_7 = *(int *)(param_6 + 0x1d0);
      }
      iVar3 = param_2 + (uint)*param_3 * 0x24;
      uVar2 = fn_006b09bc(param_6);
      *(undefined2 *)(iVar3 + 0x30) = uVar2;
      *(undefined2 *)(iVar3 + 0x32) = *(undefined2 *)(param_6 + 0x16a);
      fn_006b0964(param_6,1);
      *(undefined4 *)(iVar3 + 0x3c) = in_s0;
      *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(param_6 + 0x1d4);
      *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(param_6 + 0x1d8);
      *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(param_6 + 0x1dc);
      *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(param_6 + 0x1e0);
      *(undefined2 *)(iVar3 + 0x50) = *(undefined2 *)(param_6 + 0x1e4);
      *(short *)(iVar3 + 0x34) = (short)*(undefined4 *)(param_6 + 0x1c4);
      *(undefined1 *)(iVar3 + 0x36) = *(undefined1 *)(param_6 + 0x16d);
      *(char *)(iVar3 + 0x37) = (char)param_7;
      uVar2 = fn_006bb52c(*(undefined4 *)(param_6 + 0x170));
      *(undefined2 *)(iVar3 + 0x38) = uVar2;
      bVar1 = false;
      iVar3 = -1;
      iVar5 = 0;
      *param_3 = *param_3 + 1;
      do {
        iVar4 = (int)*(short *)(param_2 + iVar5 * 2 + 0xc0);
        if (iVar4 == -1) {
          if (iVar3 == -1) {
            iVar3 = iVar5;
          }
        }
        else if (iVar4 == *(int *)(*(int *)(param_6 + 0x170) + 0xfc)) {
          bVar1 = true;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x40);
      if (!bVar1) {
        *(undefined2 *)(param_2 + iVar3 * 2 + 0xc0) =
             *(undefined2 *)(*(int *)(param_6 + 0x170) + 0xfc);
      }
      return 1;
    }
  }
  return 0;
}


