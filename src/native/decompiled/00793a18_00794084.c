#include "00793a18_00794084.h"



int * fn_00794084(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  
  if (param_2 == param_1) {
    return param_1;
  }
  iVar3 = *param_2;
  iVar5 = param_2[1];
  puVar7 = (undefined4 *)*param_1;
  uVar1 = (iVar5 - iVar3) / 0x28;
  if ((uint)((param_1[2] - (int)puVar7) / 0x28) < uVar1) {
    uVar2 = (param_1[1] - (int)puVar7) / 0x28;
    uVar6 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
    uVar9 = uVar2 + 0x20;
    if (uVar2 + 0x20 <= uVar6) {
      uVar9 = uVar6;
    }
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    puVar4 = (undefined4 *)fn_0015ece0(uVar9 * 0x28);
    iVar5 = param_2[1];
    puVar7 = puVar4;
    for (iVar3 = *param_2; iVar3 != iVar5; iVar3 = iVar3 + 0x28) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = &DAT_00855830;
        *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(iVar3 + 4);
        *(undefined1 *)((int)puVar7 + 5) = *(undefined1 *)(iVar3 + 5);
        puVar7[2] = &DAT_008554d0;
        *(undefined1 *)(puVar7 + 3) = *(undefined1 *)(iVar3 + 0xc);
        *(undefined1 *)((int)puVar7 + 0xd) = *(undefined1 *)(iVar3 + 0xd);
        *(undefined1 *)((int)puVar7 + 0xe) = *(undefined1 *)(iVar3 + 0xe);
        *(undefined1 *)((int)puVar7 + 0xf) = *(undefined1 *)(iVar3 + 0xf);
        uVar10 = *(undefined4 *)(iVar3 + 0x14);
        puVar7[4] = *(undefined4 *)(iVar3 + 0x10);
        puVar7[5] = uVar10;
        puVar7[6] = *(undefined4 *)(iVar3 + 0x18);
        puVar7[7] = *(undefined4 *)(iVar3 + 0x1c);
        *(undefined1 *)(puVar7 + 8) = *(undefined1 *)(iVar3 + 0x20);
        *(undefined2 *)((int)puVar7 + 0x22) = *(undefined2 *)(iVar3 + 0x22);
        puVar7[2] = &DAT_008549ec;
        *puVar7 = &DAT_00855674;
      }
      puVar7 = puVar7 + 10;
    }
    puVar8 = (undefined4 *)param_1[1];
    for (puVar7 = (undefined4 *)*param_1; puVar7 != puVar8; puVar7 = puVar7 + 10) {
      (**(code **)*puVar7)(puVar7);
    }
    fn_0014f1bc(*param_1);
    *param_1 = (int)puVar4;
    param_1[1] = (int)(puVar4 + ((param_2[1] - *param_2) / 0x28) * 10);
    param_1[2] = (int)(puVar4 + uVar9 * 10);
  }
  else {
    uVar2 = (param_1[1] - (int)puVar7) / 0x28;
    if (uVar2 < uVar1) {
      iVar5 = iVar3 + uVar2 * 0x28;
      for (; iVar3 != iVar5; iVar3 = iVar3 + 0x28) {
        *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(iVar3 + 4);
        *(undefined1 *)((int)puVar7 + 5) = *(undefined1 *)(iVar3 + 5);
        *(undefined1 *)(puVar7 + 3) = *(undefined1 *)(iVar3 + 0xc);
        *(undefined1 *)((int)puVar7 + 0xd) = *(undefined1 *)(iVar3 + 0xd);
        *(undefined1 *)((int)puVar7 + 0xe) = *(undefined1 *)(iVar3 + 0xe);
        *(undefined1 *)((int)puVar7 + 0xf) = *(undefined1 *)(iVar3 + 0xf);
        uVar10 = *(undefined4 *)(iVar3 + 0x14);
        puVar7[4] = *(undefined4 *)(iVar3 + 0x10);
        puVar7[5] = uVar10;
        puVar7[6] = *(undefined4 *)(iVar3 + 0x18);
        puVar7[7] = *(undefined4 *)(iVar3 + 0x1c);
        *(undefined1 *)(puVar7 + 8) = *(undefined1 *)(iVar3 + 0x20);
        *(undefined2 *)((int)puVar7 + 0x22) = *(undefined2 *)(iVar3 + 0x22);
        puVar7 = puVar7 + 10;
      }
      param_1[1] = *param_1 + ((param_2[1] - *param_2) / 0x28) * 0x28;
      iVar5 = param_2[1];
      puVar7 = (undefined4 *)(*param_1 + uVar2 * 0x28);
      for (iVar3 = *param_2 + uVar2 * 0x28; iVar3 != iVar5; iVar3 = iVar3 + 0x28) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = &DAT_00855830;
          *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(iVar3 + 4);
          *(undefined1 *)((int)puVar7 + 5) = *(undefined1 *)(iVar3 + 5);
          puVar7[2] = &DAT_008554d0;
          *(undefined1 *)(puVar7 + 3) = *(undefined1 *)(iVar3 + 0xc);
          *(undefined1 *)((int)puVar7 + 0xd) = *(undefined1 *)(iVar3 + 0xd);
          *(undefined1 *)((int)puVar7 + 0xe) = *(undefined1 *)(iVar3 + 0xe);
          *(undefined1 *)((int)puVar7 + 0xf) = *(undefined1 *)(iVar3 + 0xf);
          uVar10 = *(undefined4 *)(iVar3 + 0x14);
          puVar7[4] = *(undefined4 *)(iVar3 + 0x10);
          puVar7[5] = uVar10;
          puVar7[6] = *(undefined4 *)(iVar3 + 0x18);
          puVar7[7] = *(undefined4 *)(iVar3 + 0x1c);
          *(undefined1 *)(puVar7 + 8) = *(undefined1 *)(iVar3 + 0x20);
          *(undefined2 *)((int)puVar7 + 0x22) = *(undefined2 *)(iVar3 + 0x22);
          puVar7[2] = &DAT_008549ec;
          *puVar7 = &DAT_00855674;
        }
        puVar7 = puVar7 + 10;
      }
    }
    else {
      for (; iVar3 != iVar5; iVar3 = iVar3 + 0x28) {
        *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(iVar3 + 4);
        *(undefined1 *)((int)puVar7 + 5) = *(undefined1 *)(iVar3 + 5);
        *(undefined1 *)(puVar7 + 3) = *(undefined1 *)(iVar3 + 0xc);
        *(undefined1 *)((int)puVar7 + 0xd) = *(undefined1 *)(iVar3 + 0xd);
        *(undefined1 *)((int)puVar7 + 0xe) = *(undefined1 *)(iVar3 + 0xe);
        *(undefined1 *)((int)puVar7 + 0xf) = *(undefined1 *)(iVar3 + 0xf);
        uVar10 = *(undefined4 *)(iVar3 + 0x14);
        puVar7[4] = *(undefined4 *)(iVar3 + 0x10);
        puVar7[5] = uVar10;
        puVar7[6] = *(undefined4 *)(iVar3 + 0x18);
        puVar7[7] = *(undefined4 *)(iVar3 + 0x1c);
        *(undefined1 *)(puVar7 + 8) = *(undefined1 *)(iVar3 + 0x20);
        *(undefined2 *)((int)puVar7 + 0x22) = *(undefined2 *)(iVar3 + 0x22);
        puVar7 = puVar7 + 10;
      }
      puVar4 = (undefined4 *)param_1[1];
      for (; puVar7 != puVar4; puVar7 = puVar7 + 10) {
        (**(code **)*puVar7)(puVar7);
      }
      iVar3 = *param_1 + ((param_2[1] - *param_2) / 0x28) * 0x28;
      param_1[1] = iVar3;
      param_1[2] = iVar3;
    }
  }
  return param_1;
}



void fn_00793cec(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar7 = param_1[1];
  uVar1 = (iVar7 - *param_1) / 0x28;
  if (uVar1 < (uint)((param_1[2] - *param_1) / 0x28)) {
    param_1[1] = iVar7 + 0x28;
    iVar2 = iVar7;
    if (iVar7 != 0) {
      fn_004aeb08(iVar7,iVar7 + -0x28);
    }
    while (param_2 != iVar2 + -0x28) {
      *(undefined1 *)(iVar7 + -0x24) = *(undefined1 *)(iVar2 + -0x4c);
      *(undefined1 *)(iVar7 + -0x23) = *(undefined1 *)(iVar2 + -0x4b);
      *(undefined1 *)(iVar7 + -0x1c) = *(undefined1 *)(iVar2 + -0x44);
      *(undefined1 *)(iVar7 + -0x1b) = *(undefined1 *)(iVar2 + -0x43);
      *(undefined1 *)(iVar7 + -0x1a) = *(undefined1 *)(iVar2 + -0x42);
      *(undefined1 *)(iVar7 + -0x19) = *(undefined1 *)(iVar2 + -0x41);
      uVar5 = *(undefined4 *)(iVar2 + -0x3c);
      *(undefined4 *)(iVar7 + -0x18) = *(undefined4 *)(iVar2 + -0x40);
      *(undefined4 *)(iVar7 + -0x14) = uVar5;
      *(undefined4 *)(iVar7 + -0x10) = *(undefined4 *)(iVar2 + -0x38);
      *(undefined4 *)(iVar7 + -0xc) = *(undefined4 *)(iVar2 + -0x34);
      *(undefined1 *)(iVar7 + -8) = *(undefined1 *)(iVar2 + -0x30);
      *(undefined2 *)(iVar7 + -6) = *(undefined2 *)(iVar2 + -0x2e);
      iVar7 = iVar7 + -0x28;
      iVar2 = iVar2 + -0x28;
    }
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_3 + 5);
    *(undefined1 *)(param_2 + 0xc) = *(undefined1 *)(param_3 + 0xc);
    *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_3 + 0xd);
    *(undefined1 *)(param_2 + 0xe) = *(undefined1 *)(param_3 + 0xe);
    *(undefined1 *)(param_2 + 0xf) = *(undefined1 *)(param_3 + 0xf);
    uVar5 = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar5;
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
    *(undefined2 *)(param_2 + 0x22) = *(undefined2 *)(param_3 + 0x22);
    return;
  }
  uVar4 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar4 < uVar1 + 0x20) {
    uVar4 = uVar1 + 0x20;
  }
  puVar3 = (undefined4 *)fn_0015ece0(uVar4 * 0x28);
  puVar6 = puVar3;
  for (iVar7 = *param_1; iVar7 != param_2; iVar7 = iVar7 + 0x28) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = &DAT_00855830;
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(iVar7 + 4);
      *(undefined1 *)((int)puVar6 + 5) = *(undefined1 *)(iVar7 + 5);
      puVar6[2] = &DAT_008554d0;
      *(undefined1 *)(puVar6 + 3) = *(undefined1 *)(iVar7 + 0xc);
      *(undefined1 *)((int)puVar6 + 0xd) = *(undefined1 *)(iVar7 + 0xd);
      *(undefined1 *)((int)puVar6 + 0xe) = *(undefined1 *)(iVar7 + 0xe);
      *(undefined1 *)((int)puVar6 + 0xf) = *(undefined1 *)(iVar7 + 0xf);
      uVar5 = *(undefined4 *)(iVar7 + 0x14);
      puVar6[4] = *(undefined4 *)(iVar7 + 0x10);
      puVar6[5] = uVar5;
      puVar6[6] = *(undefined4 *)(iVar7 + 0x18);
      puVar6[7] = *(undefined4 *)(iVar7 + 0x1c);
      *(undefined1 *)(puVar6 + 8) = *(undefined1 *)(iVar7 + 0x20);
      *(undefined2 *)((int)puVar6 + 0x22) = *(undefined2 *)(iVar7 + 0x22);
      puVar6[2] = &DAT_008549ec;
      *puVar6 = &DAT_00855674;
    }
    puVar6 = puVar6 + 10;
  }
  if (puVar3 + ((param_2 - *param_1) / 0x28) * 10 != (undefined4 *)0x0) {
    fn_004aeb08(puVar3 + ((param_2 - *param_1) / 0x28) * 10,param_3);
  }
  iVar7 = param_1[1];
  puVar6 = puVar3 + ((param_2 - *param_1) / 0x28) * 10;
  for (; param_2 != iVar7; param_2 = param_2 + 0x28) {
    puVar8 = puVar6 + 10;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = &DAT_00855830;
      *(undefined1 *)(puVar6 + 0xb) = *(undefined1 *)(param_2 + 4);
      *(undefined1 *)((int)puVar6 + 0x2d) = *(undefined1 *)(param_2 + 5);
      puVar6[0xc] = &DAT_008554d0;
      *(undefined1 *)(puVar6 + 0xd) = *(undefined1 *)(param_2 + 0xc);
      *(undefined1 *)((int)puVar6 + 0x35) = *(undefined1 *)(param_2 + 0xd);
      *(undefined1 *)((int)puVar6 + 0x36) = *(undefined1 *)(param_2 + 0xe);
      *(undefined1 *)((int)puVar6 + 0x37) = *(undefined1 *)(param_2 + 0xf);
      uVar5 = *(undefined4 *)(param_2 + 0x14);
      puVar6[0xe] = *(undefined4 *)(param_2 + 0x10);
      puVar6[0xf] = uVar5;
      puVar6[0x10] = *(undefined4 *)(param_2 + 0x18);
      puVar6[0x11] = *(undefined4 *)(param_2 + 0x1c);
      *(undefined1 *)(puVar6 + 0x12) = *(undefined1 *)(param_2 + 0x20);
      *(undefined2 *)((int)puVar6 + 0x4a) = *(undefined2 *)(param_2 + 0x22);
      puVar6[0xc] = &DAT_008549ec;
      *puVar8 = &DAT_00855674;
    }
    puVar6 = puVar8;
  }
  puVar6 = (undefined4 *)*param_1;
  puVar8 = (undefined4 *)param_1[1];
  iVar7 = (int)puVar8 - (int)puVar6;
  for (; puVar6 != puVar8; puVar6 = puVar6 + 10) {
    (**(code **)*puVar6)(puVar6);
  }
  fn_0014f1bc(*param_1);
  *param_1 = (int)puVar3;
  param_1[1] = (int)(puVar3 + (iVar7 / 0x28) * 10 + 10);
  param_1[2] = (int)(puVar3 + uVar4 * 10);
  return;
}



void fn_00793a18(int *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
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
      *(undefined2 *)(puVar2 + 5) = *(undefined2 *)(puVar2 + -1);
      *(undefined2 *)((int)puVar2 + 0x16) = *(undefined2 *)((int)puVar2 + -2);
      *puVar2 = &DAT_00855170;
    }
    while (param_2 != puVar6 + -6) {
      *(undefined1 *)(puVar2 + -5) = *(undefined1 *)(puVar6 + -0xb);
      puVar2[-4] = puVar6[-10];
      puVar2[-3] = puVar6[-9];
      puVar2[-2] = puVar6[-8];
      *(undefined2 *)(puVar2 + -1) = *(undefined2 *)(puVar6 + -7);
      *(undefined2 *)((int)puVar2 + -2) = *(undefined2 *)((int)puVar6 + -0x1a);
      puVar2 = puVar2 + -6;
      puVar6 = puVar6 + -6;
    }
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 4);
    param_2[2] = *(undefined4 *)(param_3 + 8);
    param_2[3] = *(undefined4 *)(param_3 + 0xc);
    param_2[4] = *(undefined4 *)(param_3 + 0x10);
    *(undefined2 *)(param_2 + 5) = *(undefined2 *)(param_3 + 0x14);
    *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)(param_3 + 0x16);
    return;
  }
  uVar7 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar7 < uVar1 + 0x20) {
    uVar7 = uVar1 + 0x20;
  }
  puVar3 = (undefined4 *)fn_0015ece0(uVar7 * 0x18);
  puVar6 = puVar3;
  for (puVar2 = (undefined4 *)*param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = &DAT_00855770;
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar2 + 1);
      puVar6[2] = puVar2[2];
      puVar6[3] = puVar2[3];
      puVar6[4] = puVar2[4];
      *(undefined2 *)(puVar6 + 5) = *(undefined2 *)(puVar2 + 5);
      *(undefined2 *)((int)puVar6 + 0x16) = *(undefined2 *)((int)puVar2 + 0x16);
      *puVar6 = &DAT_00855170;
    }
    puVar6 = puVar6 + 6;
  }
  puVar2 = puVar3 + (((int)param_2 - *param_1) / 0x18) * 6;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_00855770;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_3 + 4);
    puVar2[2] = *(undefined4 *)(param_3 + 8);
    puVar2[3] = *(undefined4 *)(param_3 + 0xc);
    puVar2[4] = *(undefined4 *)(param_3 + 0x10);
    *(undefined2 *)(puVar2 + 5) = *(undefined2 *)(param_3 + 0x14);
    *(undefined2 *)((int)puVar2 + 0x16) = *(undefined2 *)(param_3 + 0x16);
    *puVar2 = &DAT_00855170;
  }
  puVar6 = (undefined4 *)param_1[1];
  puVar2 = puVar3 + (((int)param_2 - *param_1) / 0x18) * 6;
  for (; param_2 != puVar6; param_2 = param_2 + 6) {
    puVar4 = puVar2 + 6;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = &DAT_00855770;
      *(undefined1 *)(puVar2 + 7) = *(undefined1 *)(param_2 + 1);
      puVar2[8] = param_2[2];
      puVar2[9] = param_2[3];
      puVar2[10] = param_2[4];
      *(undefined2 *)(puVar2 + 0xb) = *(undefined2 *)(param_2 + 5);
      *(undefined2 *)((int)puVar2 + 0x2e) = *(undefined2 *)((int)param_2 + 0x16);
      *puVar4 = &DAT_00855170;
    }
    puVar2 = puVar4;
  }
  puVar2 = (undefined4 *)*param_1;
  puVar6 = (undefined4 *)param_1[1];
  iVar5 = (int)puVar6 - (int)puVar2;
  for (; puVar2 != puVar6; puVar2 = puVar2 + 6) {
    (**(code **)*puVar2)(puVar2);
  }
  fn_0014f1bc(*param_1);
  *param_1 = (int)puVar3;
  param_1[1] = (int)(puVar3 + (iVar5 / 0x18) * 6 + 6);
  param_1[2] = (int)(puVar3 + uVar7 * 6);
  return;
}


