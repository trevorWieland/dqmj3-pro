#include "00153bf0_00154328.h"



uint fn_00154328(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_2 >> 2;
  uVar2 = 0x6155a7cc;
  if (0 < (int)(uVar1 - 1)) {
    piVar3 = param_1 + -1;
    if ((uVar1 & 1) == 0) {
      uVar2 = ((uint)(*param_1 * -0x3361d2af) >> 0x11 | *param_1 * 0x16a88000) * 0x1b873593 ^
              0x6155a7cc;
      uVar2 = (uVar2 >> 0x13 | uVar2 << 0xd) * 5 + 0xe6546b64;
      piVar3 = param_1;
    }
    iVar6 = piVar3[1];
    for (iVar5 = (int)(uVar1 - 1) >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar8 = iVar6 * -0x3361d2af;
      iVar7 = piVar3[2];
      uVar9 = iVar6 * 0x16a88000;
      iVar6 = piVar3[3];
      uVar2 = uVar2 ^ (uVar8 >> 0x11 | uVar9) * 0x1b873593;
      uVar2 = (uVar2 >> 0x13 | uVar2 << 0xd) * 5 + 0xe6546b64 ^
              ((uint)(iVar7 * -0x3361d2af) >> 0x11 | iVar7 * 0x16a88000) * 0x1b873593;
      uVar2 = (uVar2 >> 0x13 | uVar2 << 0xd) * 5 + 0xe6546b64;
      piVar3 = piVar3 + 2;
    }
  }
  if (-1 < (int)(uVar1 - 1)) {
    uVar2 = uVar2 ^ ((uint)(param_1[uVar1 - 1] * -0x3361d2af) >> 0x11 |
                    param_1[uVar1 - 1] * 0x16a88000) * 0x1b873593;
    uVar2 = (uVar2 >> 0x13 | uVar2 << 0xd) * 5 + 0xe6546b64;
  }
  uVar9 = param_2 & 3;
  pbVar4 = (byte *)(param_1 + uVar1);
  uVar1 = 0;
  if (uVar9 != 1) {
    if (uVar9 != 2) {
      if (uVar9 != 3) goto LAB_00154460;
      uVar1 = (uint)pbVar4[2] << 0x10;
    }
    uVar1 = uVar1 ^ (uint)pbVar4[1] << 8;
  }
  uVar2 = uVar2 ^ ((uVar1 ^ *pbVar4) * -0x3361d2af >> 0x11 | (uVar1 ^ *pbVar4) * 0x16a88000) *
                  0x1b873593;
LAB_00154460:
  uVar1 = (uVar2 ^ param_2 ^ (uVar2 ^ param_2) >> 0x10) * -0x7a143595;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51cb;
  return uVar1 ^ uVar1 >> 0x10;
}



undefined4 fn_0015427c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2;
  uVar3 = param_3;
  uVar4 = param_4;
  fn_00173d14(param_1);
  fn_00158128(param_1,param_2,0xffffffff);
  iVar1 = fn_00157dc0(param_1,param_3,param_4,param_2,1,param_1,uVar2,uVar3,uVar4);
  if (iVar1 < 0) {
    uVar2 = fn_00157ff4(param_1);
    fn_00173cb8(param_1,uVar2);
    return 0;
  }
  fn_00166f0c(param_1,0xfffffffd,0);
  uVar2 = fn_00157ff4(param_1);
  fn_00173cb8(param_1,uVar2);
  return 1;
}



bool fn_001541ec(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_00157ff4();
  fn_00173cb8(param_1,uVar1);
  fn_00173d14(param_1);
  fn_00158128(param_1,param_2,0xffffffff);
  iVar2 = fn_00157df4(param_1,0xfffffffe);
  if (iVar2 < 0) {
    uVar1 = fn_00157ff4();
    fn_00173cb8(param_1,uVar1);
    return false;
  }
  fn_00173d14(param_1);
  iVar2 = fn_00157c74(param_1,1,0);
  return -1 < iVar2;
}



undefined4 fn_00154184(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2;
  uVar2 = param_3;
  fn_00173d14(param_1);
  fn_00158128(param_1,param_2,0xffffffff,param_4,param_1,uVar1,uVar2);
  fn_00176fc8(param_1,param_3,0);
  fn_00166f0c(param_1,0xfffffffd,0);
  uVar1 = fn_00157ff4(param_1);
  fn_00173cb8(param_1,uVar1);
  return 1;
}



undefined4 fn_001540f8(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  if (param_3 < (piVar2[8] & 0xffffffU)) {
    param_3 = piVar2[8] & 0xffffff;
  }
  iVar1 = fn_00153ff0(piVar2);
  fn_00153e38(piVar2,iVar1,param_2,param_3,param_4);
  if (piVar2[1] == 0) {
    piVar2[1] = iVar1;
    *piVar2 = iVar1;
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  else {
    *(int *)(piVar2[1] + 4) = iVar1;
    *(int *)(iVar1 + 8) = piVar2[1];
    piVar2[1] = iVar1;
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  return *(undefined4 *)(iVar1 + 0x10);
}



int fn_00153ff0(int param_1)

{
  int iVar1;
  undefined1 auStack_4c [16];
  int local_3c;
  
  if ((*(byte *)(param_1 + 0x23) & 0xf0) == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 4) != 0) {
        *(undefined4 *)(*(int *)(iVar1 + 4) + 8) = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(iVar1 + 8) != 0) {
        *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = *(undefined4 *)(iVar1 + 4);
      }
      if (*(int *)(param_1 + 0x10) == iVar1) {
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 4);
      }
      if (*(int *)(param_1 + 0x14) == iVar1) {
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 8);
      }
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
  }
  else {
    fn_0014426c(auStack_4c);
    if ((*(byte *)(param_1 + 0x23) & 0xf) == 0) {
      local_3c = fn_00145b00(0x44,&DAT_00812c8c);
    }
    else {
      fn_00153e38(param_1,auStack_4c,0x44,*(uint *)(param_1 + 0x20) & 0xffffff,2);
    }
    if (local_3c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = fn_0014426c();
    }
  }
  return iVar1;
}



void fn_00153e38(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  code *in_r12;
  bool bVar5;
  int local_28;
  
  local_28 = param_4;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  iVar1 = fn_00169f1c(param_3 + param_4 + -1,param_4);
  iVar1 = iVar1 * param_4;
  bVar5 = (*(uint *)(&DAT_007e1a94 + param_5 * 8) & 1) == 0;
  if (bVar5) {
    in_r12 = *(code **)(&DAT_007e1a90 + param_5 * 8);
  }
  piVar4 = (int *)(param_1 + ((int)*(uint *)(&DAT_007e1a94 + param_5 * 8) >> 1));
  if (!bVar5) {
    in_r12 = *(code **)(*piVar4 + *(int *)(&DAT_007e1a90 + param_5 * 8));
  }
  iVar2 = (*in_r12)(piVar4,iVar1,param_4,&local_28);
  if (param_5 == 2) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    uVar3 = (*(int *)(iVar2 + 0x10) + *(int *)(iVar2 + 0x14)) - iVar1;
    *(uint *)(param_2 + 0x10) = uVar3;
    if ((uVar3 & param_4 - 1U) == 0) {
      *(int *)(param_2 + 0x14) = iVar1;
    }
    else {
      iVar1 = fn_00169f1c(uVar3 + param_4 + -1,param_4);
      param_4 = iVar1 * param_4 - param_4;
      *(int *)(param_2 + 0x10) = param_4;
      iVar1 = (*(int *)(iVar2 + 0x10) + *(int *)(iVar2 + 0x14)) - param_4;
      *(int *)(param_2 + 0x14) = iVar1;
    }
    uVar3 = *(int *)(iVar2 + 0x14) - iVar1;
    *(uint *)(iVar2 + 0x14) = uVar3;
  }
  else {
    *(int *)(param_2 + 0xc) = local_28;
    *(int *)(param_2 + 0x14) = iVar1;
    *(int *)(param_2 + 0x10) = local_28 + *(int *)(iVar2 + 0x10);
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) - (iVar1 + local_28);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + iVar1 + local_28;
    uVar3 = *(uint *)(iVar2 + 0x14);
  }
  if ((uVar3 == 0) || ((uVar3 < 0x21 && (0x1f < *(uint *)(param_1 + 0x1c) >> 9)))) {
    if (param_5 == 2) {
      *(uint *)(param_2 + 0xc) = uVar3;
    }
    else {
      *(uint *)(param_2 + 0x14) = uVar3 + *(int *)(param_2 + 0x14);
    }
    if (*(int *)(iVar2 + 4) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 4) + 8) = *(undefined4 *)(iVar2 + 8);
    }
    if (*(int *)(iVar2 + 8) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 8) + 4) = *(undefined4 *)(iVar2 + 4);
    }
    if (*(int *)(param_1 + 8) == iVar2) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 4);
    }
    if (*(int *)(param_1 + 0xc) == iVar2) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar2 + 8);
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 4) = 0;
    fn_00143d68(param_1,iVar2);
  }
  return;
}



void fn_00153d4c(int param_1,int param_2)

{
  if (**(int **)(*(int *)(*(int *)(param_1 + 4) + 0x360) + param_2 * 4) == 0) {
    return;
  }
  fn_00161b2c();
  return;
}



void fn_00153d2c(int param_1,int param_2)

{
  if (**(int **)(*(int *)(*(int *)(param_1 + 4) + 0x360) + param_2 * 4) == 0) {
    return;
  }
  fn_00161b24();
  return;
}



undefined4 * fn_00153bfc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = &DAT_00858e7c;
  param_1[1] = 0;
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_00163724(iVar1,param_2,param_3);
  }
  iVar5 = param_1[1];
  if (iVar5 != iVar1) {
    if (iVar5 != 0) {
      puVar2 = *(undefined4 **)(iVar5 + 4);
      if (puVar2 != &DAT_008f9cf4) {
        piVar3 = puVar2 + -3;
        iVar4 = *piVar3;
        if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
          iVar4 = *(int *)(iVar5 + 4);
          fn_001008c4(iVar4 + -0xc,*(int *)(iVar4 + -8) + 8,0);
        }
      }
      fn_002feef8(iVar5);
    }
    param_1[1] = iVar1;
  }
  return param_1;
}



void fn_00153bf0(int param_1)

{
  undefined4 in_s0;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x20) = in_s0;
  return;
}


