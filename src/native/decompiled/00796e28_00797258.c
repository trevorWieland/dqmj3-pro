#include "00796e28_00797258.h"



void fn_00797258(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  bool bVar15;
  
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 != (undefined4 *)param_1[2]) {
    param_1[1] = (int)(puVar3 + 2);
    if (puVar3 != (undefined4 *)0x0) {
      fn_0065a190(puVar3);
    }
    return;
  }
  uVar1 = (int)puVar3 - *param_1 >> 3;
  if (uVar1 < (uint)(param_1[2] - *param_1 >> 3)) {
    param_1[1] = (int)(puVar3 + 2);
    if (puVar3 != (undefined4 *)0x0) {
      fn_0065a190(puVar3,puVar3 + -2);
    }
    puVar14 = puVar3;
    puVar2 = puVar3 + -2;
    while (puVar3 != puVar2) {
      puVar10 = puVar2 + -2;
      piVar13 = puVar2 + -1;
      puVar9 = puVar14 + -2;
      *puVar9 = *puVar10;
      iVar4 = puVar2[-1];
      piVar6 = puVar14 + -1;
      piVar5 = (int *)(iVar4 + -0xc);
      puVar14 = puVar9;
      puVar2 = puVar10;
      if (*piVar5 == -1) {
        if (piVar6 != piVar13) {
          fn_00177c88(piVar6,0,*(undefined4 *)(*piVar6 + -4),iVar4,*(undefined4 *)(iVar4 + -4),0,
                       *(undefined4 *)(iVar4 + -4));
        }
      }
      else {
        if (piVar5 != &DAT_008f9ce8) {
          *piVar5 = *piVar5 + 1;
        }
        if ((undefined4 *)*piVar6 != &DAT_008f9cf4) {
          piVar5 = (undefined4 *)*piVar6 + -3;
          iVar4 = *piVar5;
          if ((iVar4 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar4 + -1, iVar4 == 0)))) {
            fn_001008c4(*piVar6 + -0xc,*(int *)(*piVar6 + -8) + 8,0);
          }
        }
        *piVar6 = *piVar13;
      }
    }
    *puVar3 = *param_2;
    fn_007854f8(puVar3 + 1,param_2 + 1);
    return;
  }
  uVar11 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar11 < uVar1 + 0x20) {
    uVar11 = uVar1 + 0x20;
  }
  piVar6 = (int *)fn_00100fc6(uVar11 << 3,0);
  piVar5 = piVar6;
  for (puVar14 = (undefined4 *)*param_1; puVar14 != puVar3; puVar14 = puVar14 + 2) {
    if (piVar5 != (int *)0x0) {
      fn_0065a190(piVar5,puVar14);
    }
    piVar5 = piVar5 + 2;
  }
  iVar4 = ((int)puVar3 - *param_1 & 0xfffffff8U) + (int)piVar6;
  if (iVar4 != 0) {
    fn_0065a190(iVar4,param_2);
  }
  puVar14 = (undefined4 *)param_1[1];
  iVar4 = ((int)puVar3 - *param_1 & 0xfffffff8U) + (int)piVar6;
  for (; puVar3 != puVar14; puVar3 = puVar3 + 2) {
    iVar4 = iVar4 + 8;
    if (iVar4 != 0) {
      fn_0065a190(iVar4,puVar3);
    }
  }
  iVar4 = *param_1;
  iVar12 = param_1[1];
  bVar15 = iVar4 != iVar12;
  if (bVar15) {
    piVar5 = &DAT_008f9ce8;
  }
  iVar7 = iVar12 - iVar4;
  while (bVar15) {
    if (*(undefined4 **)(iVar4 + 4) != &DAT_008f9cf4) {
      piVar13 = *(undefined4 **)(iVar4 + 4) + -3;
      iVar8 = *piVar13;
      if ((iVar8 == -1) || ((piVar13 != piVar5 && (*piVar13 = iVar8 + -1, iVar8 == 0)))) {
        fn_001008c4(*(int *)(iVar4 + 4) + -0xc,*(int *)(*(int *)(iVar4 + 4) + -8) + 8,0);
      }
    }
    iVar4 = iVar4 + 8;
    bVar15 = iVar4 != iVar12;
  }
  fn_001008c4(*param_1,param_1[2] - *param_1 >> 3,0);
  *param_1 = (int)piVar6;
  param_1[1] = (int)(piVar6 + (iVar7 >> 3) * 2 + 2);
  param_1[2] = (int)(piVar6 + uVar11 * 2);
  return;
}



int * fn_007971f8(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[1];
  for (puVar1 = (undefined4 *)*param_1; puVar1 != puVar2; puVar1 = puVar1 + 0xd) {
    (**(code **)*puVar1)(puVar1);
  }
  fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x34,0);
  return param_1;
}



int fn_00797194(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_1[1] - *param_1) / 0x34;
  if (uVar1 <= param_2) {
    fn_002ff628(9,&DAT_008c7640,&DAT_008c7640,param_2,uVar1);
  }
  return *param_1 + param_2 * 0x34;
}



void fn_00796e28(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  
  iVar10 = param_1[1];
  iVar3 = iVar10 - *param_1;
  uVar1 = (param_1[2] - *param_1) / 0x34;
  iVar2 = iVar3 >> 0x1f;
  iVar3 = iVar3 / 0x34 + iVar2;
  uVar4 = iVar3 - iVar2;
  if (uVar4 < uVar1) {
    param_1[1] = iVar10 + 0x34;
    iVar3 = iVar10;
    if (iVar10 != 0) {
      fn_00656538(iVar10,iVar10 + -0x34);
    }
    while (param_2 != iVar3 + -0x34) {
      *(undefined1 *)(iVar10 + -0x30) = *(undefined1 *)(iVar3 + -100);
      *(undefined1 *)(iVar10 + -0x2f) = *(undefined1 *)(iVar3 + -99);
      *(undefined1 *)(iVar10 + -0x2e) = *(undefined1 *)(iVar3 + -0x62);
      *(undefined4 *)(iVar10 + -0x2c) = *(undefined4 *)(iVar3 + -0x60);
      fn_006f94f4(iVar10 + -0x28,iVar3 + -0x5c);
      *(undefined4 *)(iVar10 + -0x28) = *(undefined4 *)(iVar3 + -0x5c);
      *(undefined2 *)(iVar10 + -0x28) = *(undefined2 *)(iVar3 + -0x5c);
      *(undefined2 *)(iVar10 + -0x28) = *(undefined2 *)(iVar3 + -0x5c);
      *(undefined2 *)(iVar10 + -0x28) = *(undefined2 *)(iVar3 + -0x5c);
      *(undefined1 *)(iVar10 + -0x1e) = *(undefined1 *)(iVar3 + -0x52);
      uVar6 = *(undefined4 *)(iVar3 + -0x4c);
      uVar7 = *(undefined4 *)(iVar3 + -0x48);
      uVar8 = *(undefined4 *)(iVar3 + -0x44);
      uVar12 = *(undefined4 *)(iVar3 + -0x40);
      uVar13 = *(undefined4 *)(iVar3 + -0x3c);
      uVar15 = *(undefined4 *)(iVar3 + -0x38);
      *(undefined4 *)(iVar10 + -0x1c) = *(undefined4 *)(iVar3 + -0x50);
      *(undefined4 *)(iVar10 + -0x18) = uVar6;
      *(undefined4 *)(iVar10 + -0x14) = uVar7;
      *(undefined4 *)(iVar10 + -0x10) = uVar8;
      *(undefined4 *)(iVar10 + -0xc) = uVar12;
      *(undefined4 *)(iVar10 + -8) = uVar13;
      *(undefined4 *)(iVar10 + -4) = uVar15;
      iVar10 = iVar10 + -0x34;
      iVar3 = iVar3 + -0x34;
    }
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_3 + 5);
    *(undefined1 *)(param_2 + 6) = *(undefined1 *)(param_3 + 6);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 8);
    fn_006f94f4(param_2 + 0xc,param_3 + 0xc);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_3 + 0xc);
    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(param_3 + 0xc);
    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(param_3 + 0xc);
    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(param_3 + 0xc);
    *(undefined1 *)(param_2 + 0x16) = *(undefined1 *)(param_3 + 0x16);
    uVar6 = *(undefined4 *)(param_3 + 0x1c);
    uVar7 = *(undefined4 *)(param_3 + 0x20);
    uVar8 = *(undefined4 *)(param_3 + 0x24);
    uVar12 = *(undefined4 *)(param_3 + 0x28);
    uVar13 = *(undefined4 *)(param_3 + 0x2c);
    uVar15 = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = uVar6;
    *(undefined4 *)(param_2 + 0x20) = uVar7;
    *(undefined4 *)(param_2 + 0x24) = uVar8;
    *(undefined4 *)(param_2 + 0x28) = uVar12;
    *(undefined4 *)(param_2 + 0x2c) = uVar13;
    *(undefined4 *)(param_2 + 0x30) = uVar15;
    return;
  }
  uVar14 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
  if (uVar14 < uVar4 + 0x20) {
    uVar14 = uVar4 + 0x20;
  }
  puVar5 = (undefined4 *)fn_00100fc6(uVar14 * 0x34,0,uVar1,iVar3,param_1,param_2);
  puVar11 = puVar5;
  for (iVar3 = *param_1; iVar3 != param_2; iVar3 = iVar3 + 0x34) {
    if (puVar11 != (undefined4 *)0x0) {
      *puVar11 = &DAT_00859628;
      *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(iVar3 + 4);
      *(undefined1 *)((int)puVar11 + 5) = *(undefined1 *)(iVar3 + 5);
      *(undefined1 *)((int)puVar11 + 6) = *(undefined1 *)(iVar3 + 6);
      puVar11[2] = *(undefined4 *)(iVar3 + 8);
      fn_006f94f4(puVar11 + 3,iVar3 + 0xc);
      puVar11[3] = *(undefined4 *)(iVar3 + 0xc);
      *(undefined2 *)(puVar11 + 3) = *(undefined2 *)(iVar3 + 0xc);
      *(undefined2 *)(puVar11 + 3) = *(undefined2 *)(iVar3 + 0xc);
      *(undefined2 *)(puVar11 + 3) = *(undefined2 *)(iVar3 + 0xc);
      *(undefined1 *)((int)puVar11 + 0x16) = *(undefined1 *)(iVar3 + 0x16);
      uVar6 = *(undefined4 *)(iVar3 + 0x1c);
      uVar7 = *(undefined4 *)(iVar3 + 0x20);
      uVar8 = *(undefined4 *)(iVar3 + 0x24);
      uVar12 = *(undefined4 *)(iVar3 + 0x28);
      uVar13 = *(undefined4 *)(iVar3 + 0x2c);
      uVar15 = *(undefined4 *)(iVar3 + 0x30);
      puVar11[6] = *(undefined4 *)(iVar3 + 0x18);
      puVar11[7] = uVar6;
      puVar11[8] = uVar7;
      puVar11[9] = uVar8;
      puVar11[10] = uVar12;
      puVar11[0xb] = uVar13;
      puVar11[0xc] = uVar15;
    }
    puVar11 = puVar11 + 0xd;
  }
  if (puVar5 + ((param_2 - *param_1) / 0x34) * 0xd != (undefined4 *)0x0) {
    fn_00656538(puVar5 + ((param_2 - *param_1) / 0x34) * 0xd,param_3);
  }
  iVar3 = param_1[1];
  puVar11 = puVar5 + ((param_2 - *param_1) / 0x34) * 0xd;
  for (; param_2 != iVar3; param_2 = param_2 + 0x34) {
    puVar9 = puVar11 + 0xd;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = &DAT_00859628;
      *(undefined1 *)(puVar11 + 0xe) = *(undefined1 *)(param_2 + 4);
      *(undefined1 *)((int)puVar11 + 0x39) = *(undefined1 *)(param_2 + 5);
      *(undefined1 *)((int)puVar11 + 0x3a) = *(undefined1 *)(param_2 + 6);
      puVar11[0xf] = *(undefined4 *)(param_2 + 8);
      fn_006f94f4(puVar11 + 0x10,param_2 + 0xc);
      puVar11[0x10] = *(undefined4 *)(param_2 + 0xc);
      *(undefined2 *)(puVar11 + 0x10) = *(undefined2 *)(param_2 + 0xc);
      *(undefined2 *)(puVar11 + 0x10) = *(undefined2 *)(param_2 + 0xc);
      *(undefined2 *)(puVar11 + 0x10) = *(undefined2 *)(param_2 + 0xc);
      *(undefined1 *)((int)puVar11 + 0x4a) = *(undefined1 *)(param_2 + 0x16);
      uVar6 = *(undefined4 *)(param_2 + 0x1c);
      uVar7 = *(undefined4 *)(param_2 + 0x20);
      uVar8 = *(undefined4 *)(param_2 + 0x24);
      uVar12 = *(undefined4 *)(param_2 + 0x28);
      uVar13 = *(undefined4 *)(param_2 + 0x2c);
      uVar15 = *(undefined4 *)(param_2 + 0x30);
      puVar11[0x13] = *(undefined4 *)(param_2 + 0x18);
      puVar11[0x14] = uVar6;
      puVar11[0x15] = uVar7;
      puVar11[0x16] = uVar8;
      puVar11[0x17] = uVar12;
      puVar11[0x18] = uVar13;
      puVar11[0x19] = uVar15;
    }
    puVar11 = puVar9;
  }
  puVar9 = (undefined4 *)param_1[1];
  puVar11 = (undefined4 *)*param_1;
  iVar3 = (int)puVar9 - (int)puVar11;
  for (; puVar11 != puVar9; puVar11 = puVar11 + 0xd) {
    (**(code **)*puVar11)(puVar11);
  }
  fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x34,0);
  *param_1 = (int)puVar5;
  param_1[1] = (int)(puVar5 + (iVar3 / 0x34) * 0xd + 0xd);
  param_1[2] = (int)(puVar5 + uVar14 * 0xd);
  return;
}


