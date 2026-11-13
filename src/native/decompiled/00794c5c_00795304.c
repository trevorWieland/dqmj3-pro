#include "00794c5c_00795304.h"



void fn_00795304(uint *param_1,uint param_2,undefined4 param_3)

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



void fn_007950c0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 == (undefined4 *)param_1[2]) {
    uVar5 = ((int)puVar2 - *param_1) / 0x14;
    if ((uint)((param_1[2] - *param_1) / 0x14) <= uVar5) {
      uVar7 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
      if (uVar7 < uVar5 + 0x20) {
        uVar7 = uVar5 + 0x20;
      }
      iVar3 = fn_00100fc6(uVar7 * 0x14,0);
      iVar9 = iVar3;
      for (puVar10 = (undefined4 *)*param_1; puVar10 != puVar2; puVar10 = puVar10 + 5) {
        if (iVar9 != 0) {
          fn_005ac880(iVar9,puVar10);
        }
        iVar9 = iVar9 + 0x14;
      }
      iVar9 = iVar3 + (((int)puVar2 - *param_1) / 0x14) * 0x14;
      if (iVar9 != 0) {
        fn_005ac880(iVar9,param_2);
      }
      puVar10 = (undefined4 *)param_1[1];
      iVar9 = iVar3 + (((int)puVar2 - *param_1) / 0x14) * 0x14;
      for (; puVar2 != puVar10; puVar2 = puVar2 + 5) {
        iVar9 = iVar9 + 0x14;
        if (iVar9 != 0) {
          fn_005ac880(iVar9,puVar2);
        }
      }
      iVar9 = *param_1;
      iVar8 = param_1[1];
      iVar4 = iVar8 - iVar9;
      for (; iVar9 != iVar8; iVar9 = iVar9 + 0x14) {
        uVar6 = *(uint *)(iVar9 + 8);
        uVar5 = uVar6;
        if (*(uint *)(iVar9 + 0xc) < uVar6) {
          do {
            uVar5 = uVar5 + 2;
          } while (uVar5 != *(uint *)(iVar9 + 0xc));
        }
        fn_001008c4(uVar6,(int)(*(int *)(iVar9 + 0x10) - uVar6) >> 1,0);
      }
      fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x14,0);
      *param_1 = iVar3;
      param_1[1] = iVar3 + (iVar4 / 0x14) * 0x14 + 0x14;
      param_1[2] = iVar3 + uVar7 * 0x14;
      return;
    }
    param_1[1] = (int)(puVar2 + 5);
    if (puVar2 != (undefined4 *)0x0) {
      fn_005ac880(puVar2,puVar2 + -5);
    }
    puVar10 = puVar2;
    puVar1 = puVar2 + -5;
    while (puVar2 != puVar1) {
      puVar10[-5] = puVar1[-5];
      puVar10[-4] = puVar1[-4];
      fn_0079e834(puVar10 + -3,puVar1 + -3);
      puVar10 = puVar10 + -5;
      puVar1 = puVar1 + -5;
    }
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    fn_0079e834(puVar2 + 2,param_2 + 2);
  }
  else {
    param_1[1] = (int)(puVar2 + 5);
    if (puVar2 != (undefined4 *)0x0) {
      fn_005ac880();
      return;
    }
  }
  return;
}



void fn_00794e34(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  
  puVar1 = (undefined4 *)param_1[1];
  uVar5 = (int)((int)puVar1 - *param_1) / 0xc;
  if ((uint)((int)(param_1[2] - *param_1) / 0xc) <= uVar5) {
    uVar10 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
    if (uVar10 < uVar5 + 0x20) {
      uVar10 = uVar5 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar10 * 0xc,0);
    puVar7 = puVar2;
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 3) {
      if (puVar7 != (undefined4 *)0x0) {
        uVar9 = puVar1[1];
        uVar11 = puVar1[2];
        *puVar7 = *puVar1;
        puVar7[1] = uVar9;
        puVar7[2] = uVar11;
      }
      puVar7 = puVar7 + 3;
    }
    puVar1 = puVar2 + ((int)((int)param_2 - *param_1) / 0xc) * 3;
    if (puVar1 != (undefined4 *)0x0) {
      uVar9 = param_3[1];
      uVar11 = param_3[2];
      *puVar1 = *param_3;
      puVar1[1] = uVar9;
      puVar1[2] = uVar11;
    }
    puVar7 = (undefined4 *)param_1[1];
    puVar1 = puVar2 + ((int)((int)param_2 - *param_1) / 0xc) * 3;
    for (; param_2 != puVar7; param_2 = param_2 + 3) {
      puVar3 = puVar1 + 3;
      if (puVar3 != (undefined4 *)0x0) {
        uVar9 = param_2[1];
        uVar11 = param_2[2];
        *puVar3 = *param_2;
        puVar1[4] = uVar9;
        puVar1[5] = uVar11;
      }
      puVar1 = puVar3;
    }
    uVar4 = *param_1;
    uVar8 = param_1[1];
    uVar5 = uVar4;
    if (uVar8 < uVar4) {
      do {
        uVar5 = uVar5 + 0xc;
      } while (uVar5 != uVar8);
    }
    fn_001008c4(uVar4,(int)(param_1[2] - uVar4) / 0xc,0);
    *param_1 = (uint)puVar2;
    param_1[1] = (uint)(puVar2 + ((int)(uVar8 - uVar4) / 0xc) * 3 + 3);
    param_1[2] = (uint)(puVar2 + uVar10 * 3);
    return;
  }
  param_1[1] = (uint)(puVar1 + 3);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar1[-3];
    puVar1[1] = puVar1[-2];
    puVar1[2] = puVar1[-1];
  }
  puVar7 = puVar1 + -3;
  if (param_2 < puVar7) {
    if (0 < (int)puVar7 - (int)param_2) {
      uVar5 = ((int)puVar7 - (int)param_2) / 0xc;
      puVar2 = puVar1;
      if ((uVar5 & 1) != 0) {
        puVar7 = puVar1 + -6;
        puVar2 = puVar1 + -3;
        *puVar2 = *puVar7;
        puVar1[-2] = puVar1[-5];
        puVar1[-1] = puVar1[-4];
      }
      for (iVar6 = (int)uVar5 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        uVar9 = puVar7[-2];
        uVar11 = puVar7[-1];
        puVar2[-3] = puVar7[-3];
        puVar2[-2] = uVar9;
        puVar2[-1] = uVar11;
        uVar9 = puVar7[-5];
        uVar11 = puVar7[-4];
        puVar2[-6] = puVar7[-6];
        puVar2[-5] = uVar9;
        puVar2[-4] = uVar11;
        puVar2 = puVar2 + -6;
        puVar7 = puVar7 + -6;
      }
    }
  }
  else {
    while (param_2 != puVar7) {
      uVar9 = puVar7[-2];
      uVar11 = puVar7[-1];
      puVar1[-3] = puVar7[-3];
      puVar1[-2] = uVar9;
      puVar1[-1] = uVar11;
      puVar1 = puVar1 + -3;
      puVar7 = puVar7 + -3;
    }
  }
  uVar9 = param_3[1];
  uVar11 = param_3[2];
  *param_2 = *param_3;
  param_2[1] = uVar9;
  param_2[2] = uVar11;
  return;
}



void fn_00794c5c(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  
  puVar9 = param_1 + 1;
  puVar1 = (undefined4 *)*puVar9;
  uVar5 = (int)((int)puVar1 - *param_1) >> 3;
  if ((uint)((int)(param_1[2] - *param_1) >> 3) <= uVar5) {
    uVar10 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
    if (uVar10 < uVar5 + 0x20) {
      uVar10 = uVar5 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar10 << 3,0);
    puVar7 = puVar2;
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 2) {
      if (puVar7 != (undefined4 *)0x0) {
        uVar11 = puVar1[1];
        *puVar7 = *puVar1;
        puVar7[1] = uVar11;
      }
      puVar7 = puVar7 + 2;
    }
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffff8) + (int)puVar2);
    if (puVar1 != (undefined4 *)0x0) {
      uVar11 = param_3[1];
      *puVar1 = *param_3;
      puVar1[1] = uVar11;
    }
    puVar7 = (undefined4 *)*puVar9;
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffff8) + (int)puVar2);
    for (; param_2 != puVar7; param_2 = param_2 + 2) {
      puVar3 = puVar1 + 2;
      if (puVar3 != (undefined4 *)0x0) {
        uVar11 = param_2[1];
        *puVar3 = *param_2;
        puVar1[3] = uVar11;
      }
      puVar1 = puVar3;
    }
    uVar4 = *param_1;
    uVar8 = *puVar9;
    uVar5 = uVar4;
    if (uVar8 < uVar4) {
      do {
        uVar5 = uVar5 + 8;
      } while (uVar5 != uVar8);
    }
    fn_001008c4(uVar4,(int)(param_1[2] - uVar4) >> 3,0);
    param_1[2] = (uint)(puVar2 + uVar10 * 2);
    *puVar9 = (uint)(puVar2 + ((int)(uVar8 - uVar4) >> 3) * 2 + 2);
    *param_1 = (uint)puVar2;
    return;
  }
  *puVar9 = (uint)(puVar1 + 2);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar1[-2];
    puVar1[1] = puVar1[-1];
  }
  puVar7 = puVar1 + -2;
  if (param_2 < puVar7) {
    iVar6 = (int)puVar7 - (int)param_2;
    if (0 < iVar6) {
      puVar2 = puVar1;
      if (iVar6 * 0x10000000 < 0) {
        puVar7 = puVar1 + -4;
        puVar2 = puVar1 + -2;
        *puVar2 = *puVar7;
        puVar1[-1] = puVar1[-3];
      }
      for (iVar6 = iVar6 >> 4; iVar6 != 0; iVar6 = iVar6 + -1) {
        uVar11 = puVar7[-1];
        puVar2[-2] = puVar7[-2];
        puVar2[-1] = uVar11;
        uVar11 = puVar7[-3];
        puVar2[-4] = puVar7[-4];
        puVar2[-3] = uVar11;
        puVar2 = puVar2 + -4;
        puVar7 = puVar7 + -4;
      }
    }
  }
  else {
    while (param_2 != puVar7) {
      uVar11 = puVar7[-1];
      puVar1[-2] = puVar7[-2];
      puVar1[-1] = uVar11;
      puVar1 = puVar1 + -2;
      puVar7 = puVar7 + -2;
    }
  }
  uVar11 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = uVar11;
  return;
}


