#include "00791f18_007925ec.h"



int * fn_007925ec(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  
  if (param_2 == param_1) {
    return param_1;
  }
  iVar5 = *param_2;
  iVar8 = param_2[1];
  puVar6 = (undefined4 *)*param_1;
  uVar1 = (iVar8 - iVar5) / 0x18;
  if ((uint)((param_1[2] - (int)puVar6) / 0x18) < uVar1) {
    uVar2 = (param_1[1] - (int)puVar6) / 0x18;
    uVar9 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
    if (uVar9 < uVar2 + 0x20) {
      uVar9 = uVar2 + 0x20;
    }
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    puVar3 = (undefined4 *)fn_0015ece0(uVar9 * 0x18);
    iVar8 = param_2[1];
    puVar6 = puVar3;
    for (iVar5 = *param_2; iVar5 != iVar8; iVar5 = iVar5 + 0x18) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = &DAT_00854534;
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(iVar5 + 4);
        iVar4 = fn_004b637c(puVar6 + 2,iVar5 + 8);
        iVar4 = fn_004b637c(iVar4 + 8,iVar5 + 0x10);
        *(undefined **)(iVar4 + -0x10) = &DAT_00853860;
      }
      puVar6 = puVar6 + 6;
    }
    puVar7 = (undefined4 *)param_1[1];
    for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar7; puVar6 = puVar6 + 6) {
      (**(code **)*puVar6)(puVar6);
    }
    fn_0014f1bc(*param_1);
    *param_1 = (int)puVar3;
    param_1[1] = (int)(puVar3 + ((param_2[1] - *param_2) / 0x18) * 6);
    param_1[2] = (int)(puVar3 + uVar9 * 6);
  }
  else {
    uVar2 = (param_1[1] - (int)puVar6) / 0x18;
    if (uVar2 < uVar1) {
      iVar8 = iVar5 + uVar2 * 0x18;
      for (; iVar5 != iVar8; iVar5 = iVar5 + 0x18) {
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(iVar5 + 4);
        fn_00170fa4(puVar6 + 2,iVar5 + 8);
        fn_00170fa4(puVar6 + 4,iVar5 + 0x10);
        puVar6 = puVar6 + 6;
      }
      param_1[1] = *param_1 + ((param_2[1] - *param_2) / 0x18) * 0x18;
      iVar8 = param_2[1];
      puVar6 = (undefined4 *)(*param_1 + uVar2 * 0x18);
      for (iVar5 = *param_2 + uVar2 * 0x18; iVar5 != iVar8; iVar5 = iVar5 + 0x18) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = &DAT_00854534;
          *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(iVar5 + 4);
          iVar4 = fn_004b637c(puVar6 + 2,iVar5 + 8);
          iVar4 = fn_004b637c(iVar4 + 8,iVar5 + 0x10);
          *(undefined **)(iVar4 + -0x10) = &DAT_00853860;
        }
        puVar6 = puVar6 + 6;
      }
    }
    else {
      for (; iVar5 != iVar8; iVar5 = iVar5 + 0x18) {
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(iVar5 + 4);
        fn_00170fa4(puVar6 + 2,iVar5 + 8);
        fn_00170fa4(puVar6 + 4,iVar5 + 0x10);
        puVar6 = puVar6 + 6;
      }
      puVar3 = (undefined4 *)param_1[1];
      for (; puVar6 != puVar3; puVar6 = puVar6 + 6) {
        (**(code **)*puVar6)(puVar6);
      }
      iVar5 = *param_1 + ((param_2[1] - *param_2) / 0x18) * 0x18;
      param_1[1] = iVar5;
      param_1[2] = iVar5;
    }
  }
  return param_1;
}



void fn_00792354(int *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar5 = (undefined4 *)param_1[1];
  uVar1 = ((int)puVar5 - *param_1) / 0x18;
  if (uVar1 < (uint)((param_1[2] - *param_1) / 0x18)) {
    param_1[1] = (int)(puVar5 + 6);
    puVar7 = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = &DAT_00854534;
      *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar5 + -5);
      iVar2 = fn_004b637c(puVar5 + 2,puVar5 + -4);
      iVar2 = fn_004b637c(iVar2 + 8,puVar5 + -2);
      *(undefined **)(iVar2 + -0x10) = &DAT_00853860;
    }
    while (param_2 != puVar7 + -6) {
      *(undefined1 *)(puVar5 + -5) = *(undefined1 *)(puVar7 + -0xb);
      fn_00170fa4(puVar5 + -4,puVar7 + -10);
      fn_00170fa4(puVar5 + -2,puVar7 + -8);
      puVar5 = puVar5 + -6;
      puVar7 = puVar7 + -6;
    }
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 4);
    fn_00170fa4(param_2 + 2,param_3 + 8);
    fn_00170fa4(param_2 + 4,param_3 + 0x10);
    return;
  }
  uVar4 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar4 < uVar1 + 0x20) {
    uVar4 = uVar1 + 0x20;
  }
  puVar3 = (undefined4 *)fn_0015ece0(uVar4 * 0x18);
  puVar7 = puVar3;
  for (puVar5 = (undefined4 *)*param_1; puVar5 != param_2; puVar5 = puVar5 + 6) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = &DAT_00854534;
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar5 + 1);
      iVar2 = fn_004b637c(puVar7 + 2,puVar5 + 2);
      iVar2 = fn_004b637c(iVar2 + 8,puVar5 + 4);
      *(undefined **)(iVar2 + -0x10) = &DAT_00853860;
    }
    puVar7 = puVar7 + 6;
  }
  puVar5 = puVar3 + (((int)param_2 - *param_1) / 0x18) * 6;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &DAT_00854534;
    *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(param_3 + 4);
    iVar2 = fn_004b637c(puVar5 + 2,param_3 + 8);
    iVar2 = fn_004b637c(iVar2 + 8,param_3 + 0x10);
    *(undefined **)(iVar2 + -0x10) = &DAT_00853860;
  }
  puVar7 = (undefined4 *)param_1[1];
  puVar5 = puVar3 + (((int)param_2 - *param_1) / 0x18) * 6;
  for (; param_2 != puVar7; param_2 = param_2 + 6) {
    puVar6 = puVar5 + 6;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = &DAT_00854534;
      *(undefined1 *)(puVar5 + 7) = *(undefined1 *)(param_2 + 1);
      iVar2 = fn_004b637c(puVar5 + 8,param_2 + 2);
      iVar2 = fn_004b637c(iVar2 + 8,param_2 + 4);
      *(undefined **)(iVar2 + -0x10) = &DAT_00853860;
    }
    puVar5 = puVar6;
  }
  puVar5 = (undefined4 *)*param_1;
  puVar7 = (undefined4 *)param_1[1];
  iVar2 = (int)puVar7 - (int)puVar5;
  for (; puVar5 != puVar7; puVar5 = puVar5 + 6) {
    (**(code **)*puVar5)(puVar5);
  }
  fn_0014f1bc(*param_1);
  *param_1 = (int)puVar3;
  param_1[1] = (int)(puVar3 + (iVar2 / 0x18) * 6 + 6);
  param_1[2] = (int)(puVar3 + uVar4 * 6);
  return;
}



void fn_007920fc(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  
  iVar4 = param_1[1];
  uVar1 = (iVar4 - *param_1) / 0x50;
  if (uVar1 < (uint)((param_1[2] - *param_1) / 0x50)) {
    param_1[1] = iVar4 + 0x50;
    iVar7 = iVar4;
    if (iVar4 != 0) {
      fn_0047717c(iVar4,iVar4 + -0x50);
    }
    while (param_2 != iVar7 + -0x50) {
      *(undefined1 *)(iVar4 + -0x4c) = *(undefined1 *)(iVar7 + -0x9c);
      *(undefined4 *)(iVar4 + -0x48) = *(undefined4 *)(iVar7 + -0x98);
      uVar3 = *(undefined4 *)(iVar7 + -0x8c);
      *(undefined4 *)(iVar4 + -0x40) = *(undefined4 *)(iVar7 + -0x90);
      *(undefined4 *)(iVar4 + -0x3c) = uVar3;
      *(undefined4 *)(iVar4 + -0x38) = *(undefined4 *)(iVar7 + -0x88);
      *(undefined4 *)(iVar4 + -0x34) = *(undefined4 *)(iVar7 + -0x84);
      *(undefined4 *)(iVar4 + -0x30) = *(undefined4 *)(iVar7 + -0x80);
      fn_0079c5b8(iVar4 + -0x2c,iVar7 + -0x7c);
      uVar3 = *(undefined4 *)(iVar7 + -0x6c);
      *(undefined4 *)(iVar4 + -0x20) = *(undefined4 *)(iVar7 + -0x70);
      *(undefined4 *)(iVar4 + -0x1c) = uVar3;
      fn_0079c5b8(iVar4 + -0x18,iVar7 + -0x68);
      fn_0014f510(iVar4 + -8,iVar7 + -0x58);
      iVar4 = iVar4 + -0x50;
      iVar7 = iVar7 + -0x50;
    }
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 8);
    uVar3 = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar3;
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    fn_0079c5b8(param_2 + 0x24,param_3 + 0x24);
    uVar3 = *(undefined4 *)(param_3 + 0x34);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)(param_2 + 0x34) = uVar3;
    fn_0079c5b8(param_2 + 0x38,param_3 + 0x38);
    fn_0014f510(param_2 + 0x48,param_3 + 0x48);
    return;
  }
  uVar8 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar8 < uVar1 + 0x20) {
    uVar8 = uVar1 + 0x20;
  }
  iVar2 = fn_0015ece0(uVar8 * 0x50);
  iVar7 = iVar2;
  for (iVar4 = *param_1; iVar4 != param_2; iVar4 = iVar4 + 0x50) {
    if (iVar7 != 0) {
      fn_0047717c(iVar7,iVar4);
    }
    iVar7 = iVar7 + 0x50;
  }
  iVar4 = iVar2 + ((param_2 - *param_1) / 0x50) * 0x50;
  if (iVar4 != 0) {
    fn_0047717c(iVar4,param_3);
  }
  iVar7 = param_1[1];
  iVar4 = iVar2 + ((param_2 - *param_1) / 0x50) * 0x50;
  for (; param_2 != iVar7; param_2 = param_2 + 0x50) {
    iVar4 = iVar4 + 0x50;
    if (iVar4 != 0) {
      fn_0047717c(iVar4,param_2);
    }
  }
  puVar5 = (undefined4 *)*param_1;
  puVar6 = (undefined4 *)param_1[1];
  iVar4 = (int)puVar6 - (int)puVar5;
  for (; puVar5 != puVar6; puVar5 = puVar5 + 0x14) {
    (**(code **)*puVar5)(puVar5);
  }
  fn_0014f1bc(*param_1);
  *param_1 = iVar2;
  param_1[1] = iVar2 + (iVar4 / 0x50) * 0x50 + 0x50;
  param_1[2] = iVar2 + uVar8 * 0x50;
  return;
}



void fn_00791f18(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  
  puVar5 = param_1 + 1;
  uVar1 = *puVar5;
  uVar6 = (int)(uVar1 - *param_1) >> 3;
  if ((uint)((int)(param_1[2] - *param_1) >> 3) <= uVar6) {
    uVar1 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
    if (uVar1 < uVar6 + 0x20) {
      uVar1 = uVar6 + 0x20;
    }
    uVar2 = fn_00100fc6(uVar1 << 3,0);
    uVar3 = uVar2;
    for (uVar6 = *param_1; uVar6 != param_2; uVar6 = uVar6 + 8) {
      if (uVar3 != 0) {
        fn_00166824(uVar3,uVar6);
      }
      uVar3 = uVar3 + 8;
    }
    iVar7 = (param_2 - *param_1 & 0xfffffff8) + uVar2;
    if (iVar7 != 0) {
      fn_00166824(iVar7,param_3);
    }
    uVar6 = *puVar5;
    iVar7 = (param_2 - *param_1 & 0xfffffff8) + uVar2;
    for (; param_2 != uVar6; param_2 = param_2 + 8) {
      iVar7 = iVar7 + 8;
      if (iVar7 != 0) {
        fn_00166824(iVar7,param_2);
      }
    }
    uVar3 = *param_1;
    uVar4 = *puVar5;
    uVar6 = uVar3;
    if (uVar4 < uVar3) {
      do {
        uVar6 = uVar6 + 8;
      } while (uVar6 != uVar4);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 3,0);
    param_1[2] = uVar2 + uVar1 * 8;
    *puVar5 = uVar2 + ((int)(uVar4 - uVar3) >> 3) * 8 + 8;
    *param_1 = uVar2;
    return;
  }
  *puVar5 = uVar1 + 8;
  if (uVar1 != 0) {
    fn_00166824(uVar1,uVar1 - 8);
  }
  uVar6 = uVar1 - 8;
  if (param_2 < uVar6) {
    iVar7 = uVar6 - param_2;
    if (0 < iVar7) {
      uVar3 = uVar6;
      if (iVar7 * 0x10000000 < 0) {
        uVar3 = uVar1 - 0x10;
        fn_00166824(uVar6,uVar3);
        uVar1 = uVar6;
      }
      for (iVar7 = iVar7 >> 4; iVar7 != 0; iVar7 = iVar7 + -1) {
        fn_00166824(uVar1 - 8,uVar3 - 8);
        uVar1 = uVar1 - 0x10;
        uVar3 = uVar3 - 0x10;
        fn_00166824();
      }
    }
  }
  else {
    while (param_2 != uVar6) {
      uVar6 = uVar6 - 8;
      uVar1 = uVar1 - 8;
      fn_00166824(uVar1,uVar6);
    }
  }
  fn_00166824(param_2,param_3);
  return;
}


