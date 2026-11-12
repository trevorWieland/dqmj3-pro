#include "005eb2f8_005eb2f8.h"



void fn_005eb2f8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 ushort *param_6)

{
  ushort uVar1;
  byte *pbVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float *local_100;
  float *pfStack_fc;
  float *pfStack_f8;
  float local_f4;
  float local_e4;
  float local_d4;
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [60];
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  int iStack_28;
  
  uVar1 = *param_6;
  piVar7 = (int *)(*(int *)(*(int *)(param_6 + 0x16) + 0x34) + (uint)uVar1 * 0x2c);
  iVar6 = *(int *)(param_1 + 4);
  uVar8 = *(undefined4 *)(*piVar7 + 8);
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  fn_006eb278(param_2);
  pbVar2 = (byte *)fn_005e19c8();
  fn_005e5874(local_30,piVar7,iVar6 + (uint)uVar1 * 0x158);
  fn_005e6958(local_30,uVar8);
  pfVar3 = (float *)fn_006eb2b4(local_30);
  fVar12 = 0.0;
  if ((**(byte **)(param_6 + 0x16) & 2) == 0) {
    fn_001781f0(&local_100,param_5);
    iVar6 = fn_005e58f8(local_30,local_2c);
    bVar10 = iVar6 == 0;
    if (bVar10) {
      iVar6 = *(int *)(pbVar2 + 0x10);
    }
    if (!bVar10 || iVar6 != param_4) {
      local_f4 = local_f4 + *pfVar3;
      local_e4 = local_e4 + pfVar3[1];
      local_d4 = local_d4 + pfVar3[2];
      uVar8 = fn_00171688();
      fn_005e60c8(local_30,local_2c,uVar8);
      fn_005e614c(local_30,local_2c,&local_100);
      fVar11 = *pfVar3;
      bVar10 = fVar11 == fVar12;
      if (bVar10) {
        fVar11 = pfVar3[1];
      }
      bVar9 = false;
      if (bVar10 && (bVar10 && fVar11 == fVar12)) {
        bVar9 = pfVar3[2] == fVar12;
      }
      if (bVar9) {
        fn_005e657c(local_30,local_2c,param_1 + 0xa0);
      }
      else {
        fn_001ad2a0(auStack_d0,&local_100);
        fn_001ad184(auStack_a0,&local_100);
        fn_001ad06c(auStack_70,auStack_d0,auStack_a0);
        fn_005e657c(local_30,local_2c,auStack_70);
      }
    }
    fn_005e6304(local_30,local_2c);
    iVar6 = *(int *)(*(int *)(param_1 + 0x8c) + (uint)*param_6 * 4);
    if (iVar6 != 0) {
      fn_005e7c88(iVar6,local_2c);
    }
    if ((**(byte **)(param_6 + 0x16) & 4) == 0) {
      fn_006e0b54(param_6,local_2c);
      goto LAB_005eb880;
    }
    if ((*(byte *)(param_1 + 0x98) & 0x10) == 0) {
LAB_005eb838:
      uVar4 = (int)param_6 - *(int *)(*(int *)(param_6 + 0x16) + 0x40);
      iVar6 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
      fn_006e1abc(param_6,local_2c,*(int *)(param_1 + 0x3c) + ((iVar6 >> 5) - (iVar6 >> 0x1f)) * 8,
                   *(undefined4 *)(pbVar2 + 0xc));
    }
    else {
      if ((*pbVar2 & 4) != 0) {
        uVar4 = (int)param_6 - *(int *)(*(byte **)(param_6 + 0x16) + 0x40);
        iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
        iVar6 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
        fn_006e1d54(param_6,*(int *)(param_1 + 0x44) + ((iVar6 >> 5) - (iVar6 >> 0x1f)) * 0xc,
                     *(int *)(param_1 + 0x3c) + ((iVar5 >> 5) - (iVar5 >> 0x1f)) * 8,
                     *(undefined4 *)(pbVar2 + 0xc));
        if ((*(byte *)(param_1 + 0x98) & 0x10) == 0) goto LAB_005eb838;
      }
      uVar4 = (int)param_6 - *(int *)(*(int *)(param_6 + 0x16) + 0x40);
      iVar6 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
      fn_006e1c30(param_6,local_2c,
                   *(int *)(param_1 + 0x44) + ((iVar6 >> 5) - (iVar6 >> 0x1f)) * 0xc);
    }
    goto LAB_005eb880;
  }
  iVar6 = fn_005e58f8(local_30,local_2c);
  bVar10 = iVar6 == 0;
  if (bVar10) {
    iVar6 = *(int *)(pbVar2 + 0x10);
  }
  if (!bVar10 || iVar6 != param_4) {
    uVar8 = fn_00171688();
    fn_005e60c8(local_30,local_2c,uVar8);
    fn_005e6724(local_30,local_2c);
  }
  fn_005e6304(local_30,local_2c);
  iVar6 = *(int *)(*(int *)(param_1 + 0x8c) + (uint)*param_6 * 4);
  if (iVar6 != 0) {
    fn_005e7c88(iVar6,local_2c);
  }
  if ((**(byte **)(param_6 + 0x16) & 4) == 0) {
    fVar11 = *pfVar3;
    bVar10 = fVar11 == fVar12;
    if (bVar10) {
      fVar11 = pfVar3[1];
    }
    bVar9 = false;
    if (bVar10 && (bVar10 && fVar11 == fVar12)) {
      bVar9 = pfVar3[2] == fVar12;
    }
    if (bVar9) {
      iVar6 = fn_006eb284(local_30);
      fn_006e1328(param_6,local_2c,param_1 + 0xc,iVar6 + 0x10);
    }
    else {
      iVar6 = fn_006eb284(local_30);
      local_100 = pfVar3;
      fn_006e16f0(param_6,local_2c,param_1 + 0xc,iVar6 + 0x10);
    }
    goto LAB_005eb880;
  }
  if ((*(byte *)(param_1 + 0x98) & 0x10) == 0) {
LAB_005eb530:
    fVar11 = *pfVar3;
    bVar10 = fVar11 == fVar12;
    if (bVar10) {
      fVar11 = pfVar3[1];
    }
    bVar9 = false;
    if (bVar10 && (bVar10 && fVar11 == fVar12)) {
      bVar9 = pfVar3[2] == fVar12;
    }
    if (bVar9) {
      iVar6 = fn_006eb284(local_30);
      pfStack_fc = (float *)(iVar6 + 0x10);
      uVar4 = (int)param_6 - *(int *)(*(int *)(param_6 + 0x16) + 0x40);
      iVar6 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
      local_100 = *(float **)(pbVar2 + 0xc);
      fn_006e0bb8(param_6,local_2c,param_1 + 0xc,
                   *(int *)(param_1 + 0x3c) + ((iVar6 >> 5) - (iVar6 >> 0x1f)) * 8);
    }
    else {
      iVar6 = fn_006eb284(local_30);
      pfStack_fc = (float *)(iVar6 + 0x10);
      uVar4 = (int)param_6 - *(int *)(*(int *)(param_6 + 0x16) + 0x40);
      iVar6 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
      local_100 = *(float **)(pbVar2 + 0xc);
      pfStack_f8 = pfVar3;
      fn_006e0db0(param_6,local_2c,param_1 + 0xc,
                   *(int *)(param_1 + 0x3c) + ((iVar6 >> 5) - (iVar6 >> 0x1f)) * 8);
    }
  }
  else {
    if ((*pbVar2 & 4) != 0) {
      uVar4 = (int)param_6 - *(int *)(*(byte **)(param_6 + 0x16) + 0x40);
      iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
      iVar6 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
      fn_006e1d54(param_6,*(int *)(param_1 + 0x44) + ((iVar6 >> 5) - (iVar6 >> 0x1f)) * 0xc,
                   *(int *)(param_1 + 0x3c) + ((iVar5 >> 5) - (iVar5 >> 0x1f)) * 8,
                   *(undefined4 *)(pbVar2 + 0xc));
      if ((*(byte *)(param_1 + 0x98) & 0x10) == 0) goto LAB_005eb530;
    }
    fVar11 = *pfVar3;
    bVar10 = fVar11 == fVar12;
    if (bVar10) {
      fVar11 = pfVar3[1];
    }
    bVar9 = false;
    if (bVar10 && (bVar10 && fVar11 == fVar12)) {
      bVar9 = pfVar3[2] == fVar12;
    }
    if (bVar9) {
      iVar6 = fn_006eb284(local_30);
      local_100 = (float *)(iVar6 + 0x10);
      uVar4 = (int)param_6 - *(int *)(*(int *)(param_6 + 0x16) + 0x40);
      iVar6 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
      fn_006e0fc4(param_6,local_2c,param_1 + 0xc,
                   *(int *)(param_1 + 0x44) + ((iVar6 >> 5) - (iVar6 >> 0x1f)) * 0xc);
    }
    else {
      iVar6 = fn_006eb284(local_30);
      local_100 = (float *)(iVar6 + 0x10);
      uVar4 = (int)param_6 - *(int *)(*(int *)(param_6 + 0x16) + 0x40);
      iVar6 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
      pfStack_fc = pfVar3;
      fn_006e1168(param_6,local_2c,param_1 + 0xc,
                   *(int *)(param_1 + 0x44) + ((iVar6 >> 5) - (iVar6 >> 0x1f)) * 0xc);
    }
  }
LAB_005eb880:
  *(int *)(pbVar2 + 0x10) = param_4;
  return;
}


