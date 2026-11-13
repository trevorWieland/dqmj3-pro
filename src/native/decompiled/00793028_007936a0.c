#include "00793028_007936a0.h"



int * fn_007936a0(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  if (param_2 == param_1) {
    return param_1;
  }
  iVar2 = *param_2;
  iVar5 = param_2[1];
  puVar6 = (undefined4 *)*param_1;
  uVar10 = (iVar5 - iVar2) / 0x28;
  if ((uint)((param_1[2] - (int)puVar6) / 0x28) < uVar10) {
    uVar1 = (param_1[1] - (int)puVar6) / 0x28;
    uVar4 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
    if (uVar4 < uVar1 + 0x20) {
      uVar4 = uVar1 + 0x20;
    }
    if (uVar10 < uVar4) {
      uVar10 = uVar4;
    }
    puVar3 = (undefined4 *)fn_0015ece0(uVar10 * 0x28);
    iVar5 = param_2[1];
    puVar6 = puVar3;
    for (iVar2 = *param_2; iVar2 != iVar5; iVar2 = iVar2 + 0x28) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = &DAT_00855760;
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(iVar2 + 4);
        *(undefined1 *)((int)puVar6 + 5) = *(undefined1 *)(iVar2 + 5);
        puVar6[2] = &DAT_00854bec;
        *(undefined1 *)(puVar6 + 3) = *(undefined1 *)(iVar2 + 0xc);
        uVar7 = *(undefined4 *)(iVar2 + 0x14);
        puVar6[4] = *(undefined4 *)(iVar2 + 0x10);
        puVar6[5] = uVar7;
        puVar6[6] = *(undefined4 *)(iVar2 + 0x18);
        uVar7 = *(undefined4 *)(iVar2 + 0x24);
        puVar6[8] = *(undefined4 *)(iVar2 + 0x20);
        puVar6[9] = uVar7;
        puVar6[2] = &DAT_00853ae8;
        *puVar6 = &DAT_00855160;
      }
      puVar6 = puVar6 + 10;
    }
    puVar9 = (undefined4 *)param_1[1];
    for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar9; puVar6 = puVar6 + 10) {
      (**(code **)*puVar6)(puVar6);
    }
    fn_0014f1bc(*param_1);
    *param_1 = (int)puVar3;
    param_1[1] = (int)(puVar3 + ((param_2[1] - *param_2) / 0x28) * 10);
    param_1[2] = (int)(puVar3 + uVar10 * 10);
  }
  else {
    uVar1 = (param_1[1] - (int)puVar6) / 0x28;
    if (uVar1 < uVar10) {
      iVar5 = iVar2 + uVar1 * 0x28;
      for (; iVar2 != iVar5; iVar2 = iVar2 + 0x28) {
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(iVar2 + 4);
        *(undefined1 *)((int)puVar6 + 5) = *(undefined1 *)(iVar2 + 5);
        *(undefined1 *)(puVar6 + 3) = *(undefined1 *)(iVar2 + 0xc);
        uVar7 = *(undefined4 *)(iVar2 + 0x14);
        puVar6[4] = *(undefined4 *)(iVar2 + 0x10);
        puVar6[5] = uVar7;
        puVar6[6] = *(undefined4 *)(iVar2 + 0x18);
        uVar7 = *(undefined4 *)(iVar2 + 0x24);
        puVar6[8] = *(undefined4 *)(iVar2 + 0x20);
        puVar6[9] = uVar7;
        puVar6 = puVar6 + 10;
      }
      param_1[1] = *param_1 + ((param_2[1] - *param_2) / 0x28) * 0x28;
      iVar5 = param_2[1];
      puVar6 = (undefined4 *)(*param_1 + uVar1 * 0x28);
      for (iVar2 = *param_2 + uVar1 * 0x28; iVar2 != iVar5; iVar2 = iVar2 + 0x28) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = &DAT_00855760;
          *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(iVar2 + 4);
          *(undefined1 *)((int)puVar6 + 5) = *(undefined1 *)(iVar2 + 5);
          puVar6[2] = &DAT_00854bec;
          *(undefined1 *)(puVar6 + 3) = *(undefined1 *)(iVar2 + 0xc);
          uVar7 = *(undefined4 *)(iVar2 + 0x14);
          puVar6[4] = *(undefined4 *)(iVar2 + 0x10);
          puVar6[5] = uVar7;
          puVar6[6] = *(undefined4 *)(iVar2 + 0x18);
          uVar7 = *(undefined4 *)(iVar2 + 0x20);
          uVar8 = *(undefined4 *)(iVar2 + 0x24);
          puVar6[2] = &DAT_00853ae8;
          puVar6[8] = uVar7;
          puVar6[9] = uVar8;
          *puVar6 = &DAT_00855160;
        }
        puVar6 = puVar6 + 10;
      }
    }
    else {
      for (; iVar2 != iVar5; iVar2 = iVar2 + 0x28) {
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(iVar2 + 4);
        *(undefined1 *)((int)puVar6 + 5) = *(undefined1 *)(iVar2 + 5);
        *(undefined1 *)(puVar6 + 3) = *(undefined1 *)(iVar2 + 0xc);
        uVar7 = *(undefined4 *)(iVar2 + 0x14);
        puVar6[4] = *(undefined4 *)(iVar2 + 0x10);
        puVar6[5] = uVar7;
        puVar6[6] = *(undefined4 *)(iVar2 + 0x18);
        uVar7 = *(undefined4 *)(iVar2 + 0x24);
        puVar6[8] = *(undefined4 *)(iVar2 + 0x20);
        puVar6[9] = uVar7;
        puVar6 = puVar6 + 10;
      }
      puVar3 = (undefined4 *)param_1[1];
      for (; puVar6 != puVar3; puVar6 = puVar6 + 10) {
        (**(code **)*puVar6)(puVar6);
      }
      iVar2 = *param_1 + ((param_2[1] - *param_2) / 0x28) * 0x28;
      param_1[1] = iVar2;
      param_1[2] = iVar2;
    }
  }
  return param_1;
}



int * fn_00793660(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[1];
  for (puVar1 = (undefined4 *)*param_1; puVar1 != puVar2; puVar1 = puVar1 + 10) {
    (**(code **)*puVar1)(puVar1);
  }
  fn_0014f1bc(*param_1);
  return param_1;
}



void fn_007932d4(int *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  puVar2 = (undefined4 *)param_1[1];
  uVar1 = ((int)puVar2 - *param_1) / 0x28;
  if (uVar1 < (uint)((param_1[2] - *param_1) / 0x28)) {
    param_1[1] = (int)(puVar2 + 10);
    puVar9 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar2 + -9);
      *(undefined1 *)((int)puVar2 + 5) = *(undefined1 *)((int)puVar2 + -0x23);
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(puVar2 + -7);
      puVar2[4] = puVar2[-6];
      puVar2[5] = puVar2[-5];
      puVar2[6] = puVar2[-4];
      puVar2[2] = &DAT_00853ae8;
      puVar2[8] = puVar2[-2];
      puVar2[9] = puVar2[-1];
      *puVar2 = &DAT_00855160;
    }
    while (param_2 != puVar9 + -10) {
      *(undefined1 *)(puVar2 + -9) = *(undefined1 *)(puVar9 + -0x13);
      *(undefined1 *)((int)puVar2 + -0x23) = *(undefined1 *)((int)puVar9 + -0x4b);
      *(undefined1 *)(puVar2 + -7) = *(undefined1 *)(puVar9 + -0x11);
      uVar10 = puVar9[-0xf];
      puVar2[-6] = puVar9[-0x10];
      puVar2[-5] = uVar10;
      puVar2[-4] = puVar9[-0xe];
      uVar10 = puVar9[-0xb];
      puVar2[-2] = puVar9[-0xc];
      puVar2[-1] = uVar10;
      puVar2 = puVar2 + -10;
      puVar9 = puVar9 + -10;
    }
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)(param_3 + 5);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_3 + 0xc);
    uVar10 = *(undefined4 *)(param_3 + 0x14);
    param_2[4] = *(undefined4 *)(param_3 + 0x10);
    param_2[5] = uVar10;
    param_2[6] = *(undefined4 *)(param_3 + 0x18);
    uVar10 = *(undefined4 *)(param_3 + 0x24);
    param_2[8] = *(undefined4 *)(param_3 + 0x20);
    param_2[9] = uVar10;
    return;
  }
  uVar7 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  uVar3 = uVar1 + 0x20;
  if (uVar1 + 0x20 <= uVar7) {
    uVar3 = uVar7;
  }
  puVar4 = (undefined4 *)fn_0015ece0(uVar3 * 0x28);
  puVar9 = puVar4;
  for (puVar2 = (undefined4 *)*param_1; puVar2 != param_2; puVar2 = puVar2 + 10) {
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = &DAT_00855760;
      *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar2 + 1);
      *(undefined1 *)((int)puVar9 + 5) = *(undefined1 *)((int)puVar2 + 5);
      puVar9[2] = &DAT_00854bec;
      *(undefined1 *)(puVar9 + 3) = *(undefined1 *)(puVar2 + 3);
      uVar10 = puVar2[5];
      puVar9[4] = puVar2[4];
      puVar9[5] = uVar10;
      puVar9[6] = puVar2[6];
      uVar10 = puVar2[9];
      puVar9[8] = puVar2[8];
      puVar9[9] = uVar10;
      puVar9[2] = &DAT_00853ae8;
      *puVar9 = &DAT_00855160;
    }
    puVar9 = puVar9 + 10;
  }
  puVar2 = puVar4 + (((int)param_2 - *param_1) / 0x28) * 10;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_00855760;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)((int)puVar2 + 5) = *(undefined1 *)(param_3 + 5);
    puVar2[2] = &DAT_00854bec;
    *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_3 + 0xc);
    uVar10 = *(undefined4 *)(param_3 + 0x14);
    puVar2[4] = *(undefined4 *)(param_3 + 0x10);
    puVar2[5] = uVar10;
    puVar2[6] = *(undefined4 *)(param_3 + 0x18);
    uVar10 = *(undefined4 *)(param_3 + 0x20);
    uVar8 = *(undefined4 *)(param_3 + 0x24);
    puVar2[2] = &DAT_00853ae8;
    puVar2[8] = uVar10;
    puVar2[9] = uVar8;
    *puVar2 = &DAT_00855160;
  }
  puVar9 = (undefined4 *)param_1[1];
  puVar2 = puVar4 + (((int)param_2 - *param_1) / 0x28) * 10;
  for (; param_2 != puVar9; param_2 = param_2 + 10) {
    puVar5 = puVar2 + 10;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = &DAT_00855760;
      *(undefined1 *)(puVar2 + 0xb) = *(undefined1 *)(param_2 + 1);
      *(undefined1 *)((int)puVar2 + 0x2d) = *(undefined1 *)((int)param_2 + 5);
      puVar2[0xc] = &DAT_00854bec;
      *(undefined1 *)(puVar2 + 0xd) = *(undefined1 *)(param_2 + 3);
      uVar10 = param_2[5];
      puVar2[0xe] = param_2[4];
      puVar2[0xf] = uVar10;
      puVar2[0x10] = param_2[6];
      uVar10 = param_2[8];
      uVar8 = param_2[9];
      puVar2[0xc] = &DAT_00853ae8;
      puVar2[0x12] = uVar10;
      puVar2[0x13] = uVar8;
      *puVar5 = &DAT_00855160;
    }
    puVar2 = puVar5;
  }
  puVar2 = (undefined4 *)*param_1;
  puVar9 = (undefined4 *)param_1[1];
  iVar6 = (int)puVar9 - (int)puVar2;
  for (; puVar2 != puVar9; puVar2 = puVar2 + 10) {
    (**(code **)*puVar2)(puVar2);
  }
  fn_0014f1bc(*param_1);
  *param_1 = (int)puVar4;
  param_1[1] = (int)(puVar4 + (iVar6 / 0x28) * 10 + 10);
  param_1[2] = (int)(puVar4 + uVar3 * 10);
  return;
}



void fn_00793028(int *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  
  puVar2 = (undefined4 *)param_1[1];
  uVar1 = (int)puVar2 - *param_1 >> 5;
  if (uVar1 < (uint)(param_1[2] - *param_1 >> 5)) {
    param_1[1] = (int)(puVar2 + 8);
    puVar6 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar2 + -7);
      puVar2[2] = puVar2[-6];
      puVar2[3] = puVar2[-5];
      puVar2[4] = puVar2[-4];
      puVar2[5] = puVar2[-3];
      *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(puVar2 + -2);
      puVar2[7] = puVar2[-1];
      *puVar2 = &DAT_00854c58;
    }
    while (param_2 != puVar6 + -8) {
      *(undefined1 *)(puVar2 + -7) = *(undefined1 *)(puVar6 + -0xf);
      uVar7 = puVar6[-0xd];
      puVar2[-6] = puVar6[-0xe];
      puVar2[-5] = uVar7;
      puVar2[-4] = puVar6[-0xc];
      puVar2[-3] = puVar6[-0xb];
      *(undefined2 *)(puVar2 + -2) = *(undefined2 *)(puVar6 + -10);
      puVar2[-1] = puVar6[-9];
      puVar2 = puVar2 + -8;
      puVar6 = puVar6 + -8;
    }
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 4);
    uVar7 = *(undefined4 *)(param_3 + 0xc);
    param_2[2] = *(undefined4 *)(param_3 + 8);
    param_2[3] = uVar7;
    param_2[4] = *(undefined4 *)(param_3 + 0x10);
    param_2[5] = *(undefined4 *)(param_3 + 0x14);
    *(undefined2 *)(param_2 + 6) = *(undefined2 *)(param_3 + 0x18);
    param_2[7] = *(undefined4 *)(param_3 + 0x1c);
    return;
  }
  uVar8 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar8 < uVar1 + 0x20) {
    uVar8 = uVar1 + 0x20;
  }
  puVar3 = (undefined4 *)fn_0015ece0(uVar8 << 5);
  puVar6 = puVar3;
  for (puVar2 = (undefined4 *)*param_1; puVar2 != param_2; puVar2 = puVar2 + 8) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = &DAT_00855634;
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar2 + 1);
      uVar7 = puVar2[3];
      puVar6[2] = puVar2[2];
      puVar6[3] = uVar7;
      puVar6[4] = puVar2[4];
      puVar6[5] = puVar2[5];
      *(undefined2 *)(puVar6 + 6) = *(undefined2 *)(puVar2 + 6);
      puVar6[7] = puVar2[7];
      *puVar6 = &DAT_00854c58;
    }
    puVar6 = puVar6 + 8;
  }
  puVar2 = (undefined4 *)(((int)param_2 - *param_1 & 0xffffffe0U) + (int)puVar3);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_00855634;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_3 + 4);
    uVar7 = *(undefined4 *)(param_3 + 0xc);
    puVar2[2] = *(undefined4 *)(param_3 + 8);
    puVar2[3] = uVar7;
    puVar2[4] = *(undefined4 *)(param_3 + 0x10);
    puVar2[5] = *(undefined4 *)(param_3 + 0x14);
    *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(param_3 + 0x18);
    puVar2[7] = *(undefined4 *)(param_3 + 0x1c);
    *puVar2 = &DAT_00854c58;
  }
  puVar6 = (undefined4 *)param_1[1];
  puVar2 = (undefined4 *)(((int)param_2 - *param_1 & 0xffffffe0U) + (int)puVar3);
  for (; param_2 != puVar6; param_2 = param_2 + 8) {
    puVar4 = puVar2 + 8;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = &DAT_00855634;
      *(undefined1 *)(puVar2 + 9) = *(undefined1 *)(param_2 + 1);
      uVar7 = param_2[3];
      puVar2[10] = param_2[2];
      puVar2[0xb] = uVar7;
      puVar2[0xc] = param_2[4];
      puVar2[0xd] = param_2[5];
      *(undefined2 *)(puVar2 + 0xe) = *(undefined2 *)(param_2 + 6);
      puVar2[0xf] = param_2[7];
      *puVar4 = &DAT_00854c58;
    }
    puVar2 = puVar4;
  }
  puVar2 = (undefined4 *)*param_1;
  puVar6 = (undefined4 *)param_1[1];
  iVar5 = (int)puVar6 - (int)puVar2;
  for (; puVar2 != puVar6; puVar2 = puVar2 + 8) {
    (**(code **)*puVar2)(puVar2);
  }
  fn_0014f1bc(*param_1);
  *param_1 = (int)puVar3;
  param_1[1] = (int)(puVar3 + (iVar5 >> 5) * 8 + 8);
  param_1[2] = (int)(puVar3 + uVar8 * 8);
  return;
}


