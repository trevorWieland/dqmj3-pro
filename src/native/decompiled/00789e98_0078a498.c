#include "00789e98_0078a498.h"



void fn_0078a498(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = param_1[1];
  uVar4 = (int)(uVar1 - *param_1) / 0x104;
  if ((uint)((int)(param_1[2] - *param_1) / 0x104) <= uVar4) {
    uVar1 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar1 < uVar4 + 0x20) {
      uVar1 = uVar4 + 0x20;
    }
    uVar2 = fn_00100fc6(uVar1 * 0x104,0);
    uVar5 = uVar2;
    for (uVar4 = *param_1; uVar4 != param_2; uVar4 = uVar4 + 0x104) {
      if (uVar5 != 0) {
        fn_0017821c(uVar5,uVar4,0x104);
      }
      uVar5 = uVar5 + 0x104;
    }
    iVar6 = uVar2 + ((int)(param_2 - *param_1) / 0x104) * 0x104;
    if (iVar6 != 0) {
      fn_0017821c(iVar6,param_3);
    }
    uVar4 = param_1[1];
    iVar6 = uVar2 + ((int)(param_2 - *param_1) / 0x104) * 0x104;
    for (; param_2 != uVar4; param_2 = param_2 + 0x104) {
      iVar6 = iVar6 + 0x104;
      if (iVar6 != 0) {
        fn_0017821c(iVar6,param_2,0x104);
      }
    }
    uVar5 = *param_1;
    uVar3 = param_1[1];
    uVar4 = uVar5;
    if (uVar3 < uVar5) {
      do {
        uVar4 = uVar4 + 0x104;
      } while (uVar4 != uVar3);
    }
    fn_001008c4(uVar5,(int)(param_1[2] - uVar5) / 0x104,0);
    *param_1 = uVar2;
    param_1[1] = uVar2 + ((int)(uVar3 - uVar5) / 0x104) * 0x104 + 0x104;
    param_1[2] = uVar2 + uVar1 * 0x104;
    return;
  }
  param_1[1] = uVar1 + 0x104;
  if (uVar1 != 0) {
    fn_0017821c(uVar1,uVar1 - 0x104,0x104);
  }
  uVar4 = uVar1 - 0x104;
  if (param_2 < uVar4) {
    if (0 < (int)(uVar4 - param_2)) {
      uVar5 = (int)(uVar4 - param_2) / 0x104;
      if ((uVar5 & 1) != 0) {
        uVar4 = uVar1 - 0x208;
        uVar1 = uVar1 - 0x104;
        fn_0017821c(uVar1,uVar4,0x104);
      }
      for (iVar6 = (int)uVar5 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        fn_0017821c(uVar1 - 0x104,uVar4 - 0x104,0x104);
        uVar1 = uVar1 - 0x208;
        uVar4 = uVar4 - 0x208;
        fn_0017821c(uVar1,uVar4,0x104);
      }
    }
  }
  else {
    while (param_2 != uVar4) {
      uVar4 = uVar4 - 0x104;
      uVar1 = uVar1 - 0x104;
      fn_0017821c(uVar1,uVar4,0x104);
    }
  }
  fn_0017821c(param_2,param_3,0x104);
  return;
}



void fn_0078a2f0(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  
  puVar8 = param_1 + 1;
  puVar1 = (undefined4 *)*puVar8;
  uVar4 = (int)((int)puVar1 - *param_1) >> 2;
  if ((uint)((int)(param_1[2] - *param_1) >> 2) <= uVar4) {
    uVar9 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar9 < uVar4 + 0x20) {
      uVar9 = uVar4 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
    puVar6 = puVar2;
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar1;
      }
      puVar6 = puVar6 + 1;
    }
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar2);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar6 = (undefined4 *)*puVar8;
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar2);
    for (; param_2 != puVar6; param_2 = param_2 + 1) {
      puVar1 = puVar1 + 1;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_2;
      }
    }
    uVar3 = *param_1;
    uVar7 = *puVar8;
    uVar4 = uVar3;
    if (uVar7 < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != uVar7);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 2,0);
    param_1[2] = (uint)(puVar2 + uVar9);
    *puVar8 = (uint)(puVar2 + ((int)(uVar7 - uVar3) >> 2) + 1);
    *param_1 = (uint)puVar2;
    return;
  }
  *puVar8 = (uint)(puVar1 + 1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar1[-1];
  }
  puVar6 = puVar1 + -1;
  if (param_2 < puVar6) {
    iVar5 = (int)puVar6 - (int)param_2;
    if (0 < iVar5) {
      if (iVar5 * 0x20000000 < 0) {
        puVar6 = puVar1 + -2;
        puVar1 = puVar1 + -1;
        *puVar1 = *puVar6;
      }
      for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1[-1] = puVar6[-1];
        puVar6 = puVar6 + -2;
        puVar1 = puVar1 + -2;
        *puVar1 = *puVar6;
      }
    }
  }
  else {
    while (param_2 != puVar6) {
      puVar6 = puVar6 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar6;
    }
  }
  *param_2 = *param_3;
  return;
}



int * fn_0078a298(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  for (iVar1 = *param_1; iVar1 != iVar2; iVar1 = iVar1 + 0x2c) {
    fn_002fedf4(iVar1);
  }
  fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x2c,0);
  return param_1;
}



void fn_00789e98(uint *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint local_2c;
  uint local_28;
  
  if (param_3 != param_4) {
    uVar9 = param_1[1];
    iVar10 = (param_4 - param_3) / 0x2c;
    uVar7 = (int)(uVar9 - *param_1) / 0x2c;
    local_2c = uVar7 + iVar10;
    if ((uint)((int)(param_1[2] - *param_1) / 0x2c) < local_2c) {
      local_28 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
      if (local_28 < uVar7 + 0x20) {
        local_28 = uVar7 + 0x20;
      }
      puVar3 = &local_28;
      if (local_28 <= local_2c) {
        puVar3 = &local_2c;
      }
      uVar11 = *puVar3;
      uVar4 = fn_00100fc6(uVar11 * 0x2c,0);
      uVar9 = uVar4;
      for (uVar7 = *param_1; uVar7 != param_2; uVar7 = uVar7 + 0x2c) {
        if (uVar9 != 0) {
          iVar1 = fn_001c6ba4(uVar9,uVar7);
          *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(uVar7 + 0x28);
        }
        uVar9 = uVar9 + 0x2c;
      }
      iVar1 = uVar4 + ((int)(param_2 - *param_1) / 0x2c) * 0x2c;
      for (; param_3 != param_4; param_3 = param_3 + 0x2c) {
        if (iVar1 != 0) {
          iVar8 = fn_001c6ba4(iVar1,param_3);
          *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(param_3 + 0x28);
        }
        iVar1 = iVar1 + 0x2c;
      }
      uVar7 = param_1[1];
      iVar1 = uVar4 + ((int)(param_2 - *param_1) / 0x2c + iVar10) * 0x2c;
      for (; param_2 != uVar7; param_2 = param_2 + 0x2c) {
        if (iVar1 != 0) {
          iVar8 = fn_001c6ba4(iVar1,param_2);
          *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(param_2 + 0x28);
        }
        iVar1 = iVar1 + 0x2c;
      }
      uVar7 = *param_1;
      uVar9 = param_1[1];
      iVar1 = uVar9 - uVar7;
      for (; uVar7 != uVar9; uVar7 = uVar7 + 0x2c) {
        fn_002fedf4(uVar7);
      }
      fn_001008c4(*param_1,(int)(param_1[2] - *param_1) / 0x2c,0);
      *param_1 = uVar4;
      param_1[1] = uVar4 + (iVar1 / 0x2c) * 0x2c + iVar10 * 0x2c;
      param_1[2] = uVar4 + uVar11 * 0x2c;
      return;
    }
    param_1[1] = uVar9 + iVar10 * 0x2c;
    if (param_2 + iVar10 * 0x2c < uVar9) {
      uVar7 = uVar9;
      for (uVar11 = uVar9 + iVar10 * -0x2c; uVar11 != uVar9; uVar11 = uVar11 + 0x2c) {
        if (uVar7 != 0) {
          iVar1 = fn_001c6ba4(uVar7,uVar11);
          *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(uVar11 + 0x28);
        }
        uVar7 = uVar7 + 0x2c;
      }
      for (uVar7 = uVar9 + iVar10 * -0x2c; param_2 != uVar7; uVar7 = uVar7 - 0x2c) {
        fn_003007d0(uVar9 - 0x2c,uVar7 - 0x2c);
        uVar5 = *(undefined4 *)(uVar7 - 0x24);
        uVar6 = *(undefined4 *)(uVar7 - 0x20);
        *(undefined4 *)(uVar9 - 0x28) = *(undefined4 *)(uVar7 - 0x28);
        *(undefined4 *)(uVar9 - 0x24) = uVar5;
        *(undefined4 *)(uVar9 - 0x20) = uVar6;
        uVar5 = *(undefined4 *)(uVar7 - 0x18);
        uVar6 = *(undefined4 *)(uVar7 - 0x14);
        *(undefined4 *)(uVar9 - 0x1c) = *(undefined4 *)(uVar7 - 0x1c);
        *(undefined4 *)(uVar9 - 0x18) = uVar5;
        *(undefined4 *)(uVar9 - 0x14) = uVar6;
        uVar5 = *(undefined4 *)(uVar7 - 0xc);
        uVar6 = *(undefined4 *)(uVar7 - 8);
        *(undefined4 *)(uVar9 - 0x10) = *(undefined4 *)(uVar7 - 0x10);
        *(undefined4 *)(uVar9 - 0xc) = uVar5;
        *(undefined4 *)(uVar9 - 8) = uVar6;
        puVar12 = (undefined4 *)(uVar9 - 4);
        uVar9 = uVar9 - 0x2c;
        *puVar12 = *(undefined4 *)(uVar7 - 4);
      }
      for (; param_3 != param_4; param_3 = param_3 + 0x2c) {
        fn_003007d0(param_2,param_3);
        uVar5 = *(undefined4 *)(param_3 + 8);
        uVar6 = *(undefined4 *)(param_3 + 0xc);
        *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
        *(undefined4 *)(param_2 + 8) = uVar5;
        *(undefined4 *)(param_2 + 0xc) = uVar6;
        uVar5 = *(undefined4 *)(param_3 + 0x14);
        uVar6 = *(undefined4 *)(param_3 + 0x18);
        *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
        *(undefined4 *)(param_2 + 0x14) = uVar5;
        *(undefined4 *)(param_2 + 0x18) = uVar6;
        uVar5 = *(undefined4 *)(param_3 + 0x20);
        uVar6 = *(undefined4 *)(param_3 + 0x24);
        *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
        *(undefined4 *)(param_2 + 0x20) = uVar5;
        *(undefined4 *)(param_2 + 0x24) = uVar6;
        *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
        param_2 = param_2 + 0x2c;
      }
    }
    else {
      iVar8 = param_3 + ((int)(uVar9 - param_2) / 0x2c) * 0x2c;
      uVar7 = uVar9;
      for (iVar1 = iVar8; iVar1 != param_4; iVar1 = iVar1 + 0x2c) {
        if (uVar7 != 0) {
          iVar2 = fn_001c6ba4(uVar7,iVar1);
          *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
        }
        uVar7 = uVar7 + 0x2c;
      }
      iVar10 = param_2 + iVar10 * 0x2c;
      for (uVar7 = param_2; uVar7 != uVar9; uVar7 = uVar7 + 0x2c) {
        if (iVar10 != 0) {
          iVar1 = fn_001c6ba4(iVar10,uVar7);
          *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(uVar7 + 0x28);
        }
        iVar10 = iVar10 + 0x2c;
      }
      if (param_3 != iVar8) {
        do {
          fn_003007d0(param_2,param_3);
          uVar5 = *(undefined4 *)(param_3 + 8);
          uVar6 = *(undefined4 *)(param_3 + 0xc);
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
          *(undefined4 *)(param_2 + 8) = uVar5;
          *(undefined4 *)(param_2 + 0xc) = uVar6;
          uVar5 = *(undefined4 *)(param_3 + 0x14);
          uVar6 = *(undefined4 *)(param_3 + 0x18);
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
          *(undefined4 *)(param_2 + 0x14) = uVar5;
          *(undefined4 *)(param_2 + 0x18) = uVar6;
          uVar5 = *(undefined4 *)(param_3 + 0x20);
          uVar6 = *(undefined4 *)(param_3 + 0x24);
          puVar12 = (undefined4 *)(param_3 + 0x28);
          *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
          *(undefined4 *)(param_2 + 0x20) = uVar5;
          *(undefined4 *)(param_2 + 0x24) = uVar6;
          param_3 = param_3 + 0x2c;
          *(undefined4 *)(param_2 + 0x28) = *puVar12;
          param_2 = param_2 + 0x2c;
        } while (param_3 != iVar8);
        return;
      }
    }
  }
  return;
}


