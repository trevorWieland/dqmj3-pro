#include "007928c8_00792dc4.h"



void fn_00792dc4(int *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  
  puVar2 = (undefined4 *)param_1[1];
  uVar1 = ((int)puVar2 - *param_1) / 0x18;
  if (uVar1 < (uint)((param_1[2] - *param_1) / 0x18)) {
    param_1[1] = (int)(puVar2 + 6);
    puVar6 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar2 + -5);
      puVar2[2] = puVar2[-4];
      puVar2[3] = puVar2[-3];
      puVar2[4] = puVar2[-2];
      *puVar2 = &DAT_008547f8;
    }
    while (param_2 != puVar6 + -6) {
      *(undefined1 *)(puVar2 + -5) = *(undefined1 *)(puVar6 + -0xb);
      uVar8 = puVar6[-9];
      puVar2[-4] = puVar6[-10];
      puVar2[-3] = uVar8;
      puVar2[-2] = puVar6[-8];
      puVar2 = puVar2 + -6;
      puVar6 = puVar6 + -6;
    }
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 4);
    uVar8 = *(undefined4 *)(param_3 + 0xc);
    param_2[2] = *(undefined4 *)(param_3 + 8);
    param_2[3] = uVar8;
    param_2[4] = *(undefined4 *)(param_3 + 0x10);
    return;
  }
  uVar3 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  uVar9 = uVar1 + 0x20;
  if (uVar1 + 0x20 <= uVar3) {
    uVar9 = uVar3;
  }
  puVar4 = (undefined4 *)fn_0015ece0(uVar9 * 0x18);
  puVar6 = puVar4;
  for (puVar2 = (undefined4 *)*param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = &DAT_00855318;
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar2 + 1);
      uVar8 = puVar2[3];
      puVar6[2] = puVar2[2];
      puVar6[3] = uVar8;
      puVar6[4] = puVar2[4];
      *puVar6 = &DAT_008547f8;
    }
    puVar6 = puVar6 + 6;
  }
  puVar2 = puVar4 + (((int)param_2 - *param_1) / 0x18) * 6;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_00855318;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_3 + 4);
    uVar8 = *(undefined4 *)(param_3 + 0xc);
    puVar2[2] = *(undefined4 *)(param_3 + 8);
    puVar2[3] = uVar8;
    puVar2[4] = *(undefined4 *)(param_3 + 0x10);
    *puVar2 = &DAT_008547f8;
  }
  puVar6 = (undefined4 *)param_1[1];
  puVar2 = puVar4 + (((int)param_2 - *param_1) / 0x18) * 6;
  for (; param_2 != puVar6; param_2 = param_2 + 6) {
    puVar7 = puVar2 + 6;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = &DAT_00855318;
      *(undefined1 *)(puVar2 + 7) = *(undefined1 *)(param_2 + 1);
      uVar8 = param_2[3];
      puVar2[8] = param_2[2];
      puVar2[9] = uVar8;
      puVar2[10] = param_2[4];
      *puVar7 = &DAT_008547f8;
    }
    puVar2 = puVar7;
  }
  puVar2 = (undefined4 *)*param_1;
  puVar6 = (undefined4 *)param_1[1];
  iVar5 = (int)puVar6 - (int)puVar2;
  for (; puVar2 != puVar6; puVar2 = puVar2 + 6) {
    (**(code **)*puVar2)(puVar2);
  }
  fn_0014f1bc(*param_1);
  *param_1 = (int)puVar4;
  param_1[1] = (int)(puVar4 + (iVar5 / 0x18) * 6 + 6);
  param_1[2] = (int)(puVar4 + uVar9 * 6);
  return;
}



void fn_00792b54(int *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  
  puVar4 = (undefined4 *)param_1[1];
  uVar1 = ((int)puVar4 - *param_1) / 0x18;
  if (uVar1 < (uint)((param_1[2] - *param_1) / 0x18)) {
    param_1[1] = (int)(puVar4 + 6);
    puVar7 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar4 + -5);
      puVar4[2] = puVar4[-4];
      puVar4[3] = puVar4[-3];
      puVar4[4] = puVar4[-2];
      puVar4[5] = puVar4[-1];
      *puVar4 = &DAT_008540d0;
    }
    while (param_2 != puVar7 + -6) {
      *(undefined1 *)(puVar4 + -5) = *(undefined1 *)(puVar7 + -0xb);
      uVar8 = puVar7[-9];
      puVar4[-4] = puVar7[-10];
      puVar4[-3] = uVar8;
      uVar8 = puVar7[-7];
      puVar4[-2] = puVar7[-8];
      puVar4[-1] = uVar8;
      puVar4 = puVar4 + -6;
      puVar7 = puVar7 + -6;
    }
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 4);
    uVar8 = *(undefined4 *)(param_3 + 0xc);
    param_2[2] = *(undefined4 *)(param_3 + 8);
    param_2[3] = uVar8;
    uVar8 = *(undefined4 *)(param_3 + 0x14);
    param_2[4] = *(undefined4 *)(param_3 + 0x10);
    param_2[5] = uVar8;
    return;
  }
  uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar9 < uVar1 + 0x20) {
    uVar9 = uVar1 + 0x20;
  }
  puVar2 = (undefined4 *)fn_0015ece0(uVar9 * 0x18);
  puVar7 = puVar2;
  for (puVar4 = (undefined4 *)*param_1; puVar4 != param_2; puVar4 = puVar4 + 6) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = &DAT_008550b4;
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar4 + 1);
      uVar8 = puVar4[3];
      puVar7[2] = puVar4[2];
      puVar7[3] = uVar8;
      uVar8 = puVar4[5];
      puVar7[4] = puVar4[4];
      puVar7[5] = uVar8;
      *puVar7 = &DAT_008540d0;
    }
    puVar7 = puVar7 + 6;
  }
  puVar4 = puVar2 + (((int)param_2 - *param_1) / 0x18) * 6;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &DAT_008550b4;
    *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(param_3 + 4);
    uVar8 = *(undefined4 *)(param_3 + 0xc);
    puVar4[2] = *(undefined4 *)(param_3 + 8);
    puVar4[3] = uVar8;
    uVar8 = *(undefined4 *)(param_3 + 0x10);
    uVar6 = *(undefined4 *)(param_3 + 0x14);
    *puVar4 = &DAT_008540d0;
    puVar4[4] = uVar8;
    puVar4[5] = uVar6;
  }
  puVar7 = (undefined4 *)param_1[1];
  puVar4 = puVar2 + (((int)param_2 - *param_1) / 0x18) * 6;
  for (; param_2 != puVar7; param_2 = param_2 + 6) {
    puVar5 = puVar4 + 6;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = &DAT_008550b4;
      *(undefined1 *)(puVar4 + 7) = *(undefined1 *)(param_2 + 1);
      uVar8 = param_2[3];
      puVar4[8] = param_2[2];
      puVar4[9] = uVar8;
      uVar8 = param_2[5];
      puVar4[10] = param_2[4];
      puVar4[0xb] = uVar8;
      *puVar5 = &DAT_008540d0;
    }
    puVar4 = puVar5;
  }
  puVar4 = (undefined4 *)*param_1;
  puVar7 = (undefined4 *)param_1[1];
  iVar3 = (int)puVar7 - (int)puVar4;
  for (; puVar4 != puVar7; puVar4 = puVar4 + 6) {
    (**(code **)*puVar4)(puVar4);
  }
  fn_0014f1bc(*param_1);
  *param_1 = (int)puVar2;
  param_1[1] = (int)(puVar2 + (iVar3 / 0x18) * 6 + 6);
  param_1[2] = (int)(puVar2 + uVar9 * 6);
  return;
}



uint * fn_00792adc(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  uVar1 = param_1[1];
  uVar2 = uVar1;
  if (uVar4 < uVar1) {
    uVar2 = (param_1[1] - uVar4) * 0x10000000;
  }
  if (uVar4 < uVar1) {
    uVar2 = uVar2 >> 0x1f;
  }
  else {
    uVar2 = 0;
  }
  for (iVar3 = uVar2 + 1; iVar3 < ((int)(param_1[1] - uVar4) >> 3) + 1; iVar3 = iVar3 + 2) {
  }
  if (uVar4 != 0) {
    if (*(code **)(uVar4 - 8) == (code *)0x0) {
      fn_0030233c(uVar4 - 8);
    }
    else {
      (**(code **)(uVar4 - 8))();
    }
  }
  return param_1;
}



void fn_007928c8(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  uVar1 = param_1[2] - *param_1;
  iVar6 = param_1[1];
  iVar2 = (int)((longlong)(int)uVar1 * -0x4de9bd37 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  uVar1 = iVar6 - *param_1;
  uVar4 = (iVar2 >> 7) - (iVar2 >> 0x1f);
  iVar3 = (int)((longlong)(int)uVar1 * -0x4de9bd37 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  iVar2 = iVar3 >> 7;
  if ((uint)(iVar2 - (iVar3 >> 0x1f)) < uVar4) {
    param_1[1] = iVar6 + 0xb8;
    if (iVar6 != 0) {
      fn_00481c70(iVar6,iVar6 + -0xb8,uVar4,iVar2,param_1,param_2);
    }
    iVar2 = iVar6 + -0xb8;
    while (param_2 != iVar2) {
      iVar6 = iVar6 + -0xb8;
      iVar2 = iVar2 + -0xb8;
      fn_0049647c(iVar6,iVar2);
    }
    fn_0049647c(param_2,param_3);
    return;
  }
  iVar2 = (int)((longlong)(int)uVar1 * -0x4de9bd37 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  uVar4 = (iVar2 >> 7) - (iVar2 >> 0x1f);
  uVar1 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
  if (uVar1 < uVar4 + 0x20) {
    uVar1 = uVar4 + 0x20;
  }
  iVar3 = fn_0015ece0(uVar1 * 0xb8);
  iVar6 = iVar3;
  for (iVar2 = *param_1; iVar2 != param_2; iVar2 = iVar2 + 0xb8) {
    if (iVar6 != 0) {
      fn_00481c70(iVar6,iVar2);
    }
    iVar6 = iVar6 + 0xb8;
  }
  iVar2 = (int)((longlong)(param_2 - *param_1) * -0x4de9bd37 +
                ((ulonglong)(uint)(param_2 - *param_1) << 0x20) >> 0x20);
  iVar2 = iVar3 + ((iVar2 >> 7) - (iVar2 >> 0x1f)) * 0xb8;
  if (iVar2 != 0) {
    fn_00481c70(iVar2,param_3);
  }
  iVar6 = param_1[1];
  iVar2 = (int)((longlong)(param_2 - *param_1) * -0x4de9bd37 +
                ((ulonglong)(uint)(param_2 - *param_1) << 0x20) >> 0x20);
  iVar2 = iVar3 + ((iVar2 >> 7) - (iVar2 >> 0x1f)) * 0xb8;
  for (; param_2 != iVar6; param_2 = param_2 + 0xb8) {
    iVar2 = iVar2 + 0xb8;
    if (iVar2 != 0) {
      fn_00481c70(iVar2,param_2);
    }
  }
  puVar5 = (undefined4 *)*param_1;
  puVar7 = (undefined4 *)param_1[1];
  uVar4 = (int)puVar7 - (int)puVar5;
  iVar2 = (int)((longlong)(int)uVar4 * -0x4de9bd37 + ((ulonglong)uVar4 << 0x20) >> 0x20);
  for (; puVar5 != puVar7; puVar5 = puVar5 + 0x2e) {
    (**(code **)*puVar5)(puVar5);
  }
  fn_0014f1bc(*param_1);
  *param_1 = iVar3;
  param_1[1] = iVar3 + ((iVar2 >> 7) - (iVar2 >> 0x1f)) * 0xb8 + 0xb8;
  param_1[2] = iVar3 + uVar1 * 0xb8;
  return;
}


