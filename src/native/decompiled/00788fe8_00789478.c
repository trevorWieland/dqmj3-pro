#include "00788fe8_00789478.h"



void fn_00789478(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  
  puVar9 = (undefined4 *)param_1[1];
  if (puVar9 != (undefined4 *)param_1[2]) {
    param_1[1] = (uint)(puVar9 + 2);
    if (puVar9 != (undefined4 *)0x0) {
      uVar10 = param_2[1];
      *puVar9 = *param_2;
      puVar9[1] = uVar10;
    }
    return;
  }
  uVar4 = (int)((int)puVar9 - *param_1) >> 3;
  if (uVar4 < (uint)((int)((int)param_1[2] - *param_1) >> 3)) {
    param_1[1] = (uint)(puVar9 + 2);
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = puVar9[-2];
      puVar9[1] = puVar9[-1];
    }
    puVar6 = puVar9 + -2;
    puVar7 = puVar9;
    if (puVar9 < puVar6) {
      iVar5 = (int)puVar6 - (int)puVar9;
      if (0 < iVar5) {
        if (iVar5 * 0x10000000 < 0) {
          puVar6 = puVar9 + -4;
          puVar7 = puVar9 + -2;
          *puVar7 = *puVar6;
          puVar9[-1] = puVar9[-3];
        }
        for (iVar5 = iVar5 >> 4; iVar5 != 0; iVar5 = iVar5 + -1) {
          uVar10 = puVar6[-1];
          puVar7[-2] = puVar6[-2];
          puVar7[-1] = uVar10;
          uVar10 = puVar6[-3];
          puVar7[-4] = puVar6[-4];
          puVar7[-3] = uVar10;
          puVar6 = puVar6 + -4;
          puVar7 = puVar7 + -4;
        }
      }
    }
    else {
      while (puVar9 != puVar6) {
        uVar10 = puVar6[-1];
        puVar7[-2] = puVar6[-2];
        puVar7[-1] = uVar10;
        puVar7 = puVar7 + -2;
        puVar6 = puVar6 + -2;
      }
    }
    uVar10 = param_2[1];
    *puVar9 = *param_2;
    puVar9[1] = uVar10;
    return;
  }
  uVar11 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
  if (uVar11 < uVar4 + 0x20) {
    uVar11 = uVar4 + 0x20;
  }
  puVar1 = (undefined4 *)fn_00100fc6(uVar11 << 3,0);
  puVar7 = puVar1;
  for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar9; puVar6 = puVar6 + 2) {
    if (puVar7 != (undefined4 *)0x0) {
      uVar10 = puVar6[1];
      *puVar7 = *puVar6;
      puVar7[1] = uVar10;
    }
    puVar7 = puVar7 + 2;
  }
  puVar6 = (undefined4 *)(((int)puVar9 - *param_1 & 0xfffffff8) + (int)puVar1);
  if (puVar6 != (undefined4 *)0x0) {
    uVar10 = param_2[1];
    *puVar6 = *param_2;
    puVar6[1] = uVar10;
  }
  puVar7 = (undefined4 *)param_1[1];
  puVar6 = (undefined4 *)(((int)puVar9 - *param_1 & 0xfffffff8) + (int)puVar1);
  for (; puVar9 != puVar7; puVar9 = puVar9 + 2) {
    puVar2 = puVar6 + 2;
    if (puVar2 != (undefined4 *)0x0) {
      uVar10 = puVar9[1];
      *puVar2 = *puVar9;
      puVar6[3] = uVar10;
    }
    puVar6 = puVar2;
  }
  uVar3 = *param_1;
  uVar8 = param_1[1];
  uVar4 = uVar3;
  if (uVar8 < uVar3) {
    do {
      uVar4 = uVar4 + 8;
    } while (uVar4 != uVar8);
  }
  fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 3,0);
  param_1[2] = (uint)(puVar1 + uVar11 * 2);
  param_1[1] = (uint)(puVar1 + ((int)(uVar8 - uVar3) >> 3) * 2 + 2);
  *param_1 = (uint)puVar1;
  return;
}



void fn_0078919c(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = param_1[2] - *param_1;
  iVar2 = (int)((longlong)(int)uVar1 * -0x99fc267 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  uVar6 = (iVar2 >> 10) - (iVar2 >> 0x1f);
  uVar1 = param_1[1];
  uVar4 = uVar1 - *param_1;
  iVar2 = (int)((longlong)(int)uVar4 * -0x99fc267 + ((ulonglong)uVar4 << 0x20) >> 0x20);
  uVar5 = (iVar2 >> 10) - (iVar2 >> 0x1f);
  if (uVar5 < uVar6) {
    uVar4 = uVar1 - 0x428;
    param_1[1] = uVar1 + 0x428;
    if (uVar1 != 0) {
      fn_0017821c(uVar1,uVar4,0x428);
    }
    if (param_2 < uVar4) {
      uVar5 = uVar4 - param_2;
      iVar2 = (int)((longlong)(int)uVar5 * -0x99fc267 + ((ulonglong)uVar5 << 0x20) >> 0x20);
      iVar7 = 1;
      if (1 < ((iVar2 >> 10) - (iVar2 >> 0x1f)) + 1) {
        do {
          uVar4 = uVar4 - 0x428;
          uVar1 = uVar1 - 0x428;
          fn_0017821c(uVar1,uVar4,0x426);
          iVar2 = (int)((longlong)(int)uVar5 * -0x99fc267 + ((ulonglong)uVar5 << 0x20) >> 0x20);
          iVar7 = iVar7 + 1;
        } while (iVar7 < ((iVar2 >> 10) - (iVar2 >> 0x1f)) + 1);
      }
    }
    else {
      while (param_2 != uVar4) {
        uVar4 = uVar4 - 0x428;
        uVar1 = uVar1 - 0x428;
        fn_0017821c(uVar1,uVar4,0x426);
      }
    }
    fn_0017821c(param_2,param_3,0x426);
    return;
  }
  iVar2 = (int)((longlong)(int)uVar4 * -0x99fc267 + ((ulonglong)uVar4 << 0x20) >> 0x20);
  uVar4 = (iVar2 >> 10) - (iVar2 >> 0x1f);
  uVar1 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
  if (uVar1 < uVar4 + 0x20) {
    uVar1 = uVar4 + 0x20;
  }
  uVar6 = fn_00100fc6(uVar1 * 0x428,0,uVar5,uVar6,param_1,param_2);
  uVar5 = uVar6;
  for (uVar4 = *param_1; uVar4 != param_2; uVar4 = uVar4 + 0x428) {
    if (uVar5 != 0) {
      fn_0017821c(uVar5,uVar4,0x428);
    }
    uVar5 = uVar5 + 0x428;
  }
  iVar2 = (int)((longlong)(int)(param_2 - *param_1) * -0x99fc267 +
                ((ulonglong)(param_2 - *param_1) << 0x20) >> 0x20);
  iVar2 = uVar6 + ((iVar2 >> 10) - (iVar2 >> 0x1f)) * 0x428;
  if (iVar2 != 0) {
    fn_0017821c(iVar2,param_3);
  }
  uVar4 = param_1[1];
  iVar2 = (int)((longlong)(int)(param_2 - *param_1) * -0x99fc267 +
                ((ulonglong)(param_2 - *param_1) << 0x20) >> 0x20);
  iVar2 = uVar6 + ((iVar2 >> 10) - (iVar2 >> 0x1f)) * 0x428;
  for (; param_2 != uVar4; param_2 = param_2 + 0x428) {
    iVar2 = iVar2 + 0x428;
    if (iVar2 != 0) {
      fn_0017821c(iVar2,param_2,0x428);
    }
  }
  uVar5 = *param_1;
  uVar3 = param_1[1];
  iVar2 = (int)((longlong)(int)(uVar3 - uVar5) * -0x99fc267 + ((ulonglong)(uVar3 - uVar5) << 0x20)
               >> 0x20);
  uVar4 = uVar5;
  if (uVar3 < uVar5) {
    do {
      uVar4 = uVar4 + 0x428;
    } while (uVar4 != uVar3);
  }
  iVar7 = (int)((longlong)(int)(param_1[2] - uVar5) * -0x99fc267 +
                ((ulonglong)(param_1[2] - uVar5) << 0x20) >> 0x20);
  fn_001008c4(uVar5,(iVar7 >> 10) - (iVar7 >> 0x1f),0);
  *param_1 = uVar6;
  param_1[1] = uVar6 + ((iVar2 >> 10) - (iVar2 >> 0x1f)) * 0x428 + 0x428;
  param_1[2] = uVar6 + uVar1 * 0x428;
  return;
}



void fn_00788fe8(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  
  puVar7 = (undefined1 *)param_1[1];
  if (puVar7 != (undefined1 *)param_1[2]) {
    param_1[1] = (uint)(puVar7 + 1);
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = *param_2;
    }
    return;
  }
  uVar1 = (int)puVar7 - *param_1;
  if (uVar1 < (int)param_1[2] - *param_1) {
    param_1[1] = (uint)(puVar7 + 1);
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = puVar7[-1];
    }
    puVar2 = puVar7 + -1;
    puVar8 = puVar7;
    if (puVar7 < puVar2) {
      uVar1 = (int)puVar2 - (int)puVar7;
      if (0 < (int)uVar1) {
        if ((uVar1 & 1) != 0) {
          puVar2 = puVar7 + -2;
          puVar8 = puVar7 + -1;
          *puVar8 = *puVar2;
        }
        for (iVar5 = (int)uVar1 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar8[-1] = puVar2[-1];
          puVar2 = puVar2 + -2;
          puVar8 = puVar8 + -2;
          *puVar8 = *puVar2;
        }
      }
    }
    else {
      while (puVar7 != puVar2) {
        puVar2 = puVar2 + -1;
        puVar8[-1] = *puVar2;
        puVar8 = puVar8 + -1;
      }
    }
    *puVar7 = *param_2;
    return;
  }
  uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar9 < uVar1 + 0x20) {
    uVar9 = uVar1 + 0x20;
  }
  puVar3 = (undefined1 *)fn_00100fc6(uVar9,0);
  puVar8 = puVar3;
  for (puVar2 = (undefined1 *)*param_1; puVar2 != puVar7; puVar2 = puVar2 + 1) {
    if (puVar8 != (undefined1 *)0x0) {
      *puVar8 = *puVar2;
    }
    puVar8 = puVar8 + 1;
  }
  if (puVar3 + ((int)puVar7 - *param_1) != (undefined1 *)0x0) {
    puVar3[(int)puVar7 - *param_1] = *param_2;
  }
  puVar8 = (undefined1 *)param_1[1];
  puVar2 = puVar3 + ((int)puVar7 - *param_1);
  for (; puVar7 != puVar8; puVar7 = puVar7 + 1) {
    puVar2 = puVar2 + 1;
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = *puVar7;
    }
  }
  uVar4 = *param_1;
  uVar6 = param_1[1];
  uVar1 = uVar4;
  if (uVar6 < uVar4) {
    do {
      uVar1 = uVar1 + 1;
    } while (uVar1 != uVar6);
  }
  fn_001008c4(uVar4,param_1[2] - uVar4,0);
  *param_1 = (uint)puVar3;
  param_1[1] = (uint)(puVar3 + (uVar6 - uVar4) + 1);
  param_1[2] = (uint)(puVar3 + uVar9);
  return;
}


