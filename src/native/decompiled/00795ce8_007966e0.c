#include "00795ce8_007966e0.h"



void fn_007966e0(uint *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = param_1[1];
  iVar1 = uVar7 - *param_1;
  uVar6 = iVar1 / 6;
  if ((uint)((int)(param_1[2] - *param_1) / 6) <= uVar6) {
    uVar7 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
    if (uVar7 < uVar6 + 0x20) {
      uVar7 = uVar6 + 0x20;
    }
    uVar4 = fn_00100fc6(uVar7 * 6,0,iVar1 * 0x2aaaaaab);
    uVar3 = uVar4;
    for (uVar6 = *param_1; uVar6 != param_2; uVar6 = uVar6 + 6) {
      if (uVar3 != 0) {
        fn_0019bc50(uVar3,uVar6);
      }
      uVar3 = uVar3 + 6;
    }
    iVar1 = uVar4 + ((int)(param_2 - *param_1) / 6) * 6;
    if (iVar1 != 0) {
      fn_0019bc50(iVar1,param_3);
    }
    uVar6 = param_1[1];
    iVar1 = uVar4 + ((int)(param_2 - *param_1) / 6) * 6;
    for (; param_2 != uVar6; param_2 = param_2 + 6) {
      iVar1 = iVar1 + 6;
      if (iVar1 != 0) {
        fn_0019bc50(iVar1,param_2);
      }
    }
    uVar3 = *param_1;
    uVar5 = param_1[1];
    uVar6 = uVar3;
    if (uVar5 < uVar3) {
      do {
        uVar6 = uVar6 + 6;
      } while (uVar6 != uVar5);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) / 6,0);
    *param_1 = uVar4;
    param_1[1] = uVar4 + ((int)(uVar5 - uVar3) / 6) * 6 + 6;
    param_1[2] = uVar4 + uVar7 * 6;
    return;
  }
  param_1[1] = uVar7 + 6;
  if (uVar7 != 0) {
    fn_0019bc50(uVar7,uVar7 - 6);
  }
  uVar6 = uVar7 - 6;
  if (param_2 < uVar6) {
    iVar1 = uVar6 - param_2;
    if (0 < iVar1) {
      iVar2 = iVar1 / 6 + (iVar1 >> 0x1f);
      uVar3 = uVar7;
      if ((iVar2 - (iVar1 >> 0x1f) & 1U) != 0) {
        uVar3 = uVar7 - 6;
        uVar6 = uVar7 - 0xc;
        fn_0019bc50(uVar3,uVar6);
      }
      for (iVar2 = iVar2 / 2; iVar2 != 0; iVar2 = iVar2 + -1) {
        fn_0019bc50(uVar3 - 6,uVar6 - 6);
        uVar3 = uVar3 - 0xc;
        uVar6 = uVar6 - 0xc;
        fn_0019bc50();
      }
    }
  }
  else {
    while (param_2 != uVar6) {
      uVar6 = uVar6 - 6;
      uVar7 = uVar7 - 6;
      fn_0019bc50(uVar7,uVar6);
    }
  }
  fn_0019bc50(param_2,param_3);
  return;
}



uint * fn_00796694(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (param_1[1] <= uVar2) {
    for (; uVar1 != param_1[1]; uVar1 = uVar1 + 8) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 3,0);
  return param_1;
}



uint * fn_00796448(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (param_1[1] <= uVar2) {
    for (; uVar1 != param_1[1]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 2,0);
  return param_1;
}



void fn_007961ec(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 != (undefined4 *)param_1[2]) {
    param_1[1] = (uint)(puVar8 + 3);
    if (puVar8 != (undefined4 *)0x0) {
      uVar9 = param_2[1];
      uVar11 = param_2[2];
      *puVar8 = *param_2;
      puVar8[1] = uVar9;
      puVar8[2] = uVar11;
    }
    return;
  }
  uVar4 = (int)((int)puVar8 - *param_1) / 0xc;
  if (uVar4 < (uint)((int)((int)param_1[2] - *param_1) / 0xc)) {
    param_1[1] = (uint)(puVar8 + 3);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = puVar8[-3];
      puVar8[1] = puVar8[-2];
      puVar8[2] = puVar8[-1];
    }
    puVar6 = puVar8 + -3;
    puVar10 = puVar8;
    if (puVar8 < puVar6) {
      if (0 < (int)puVar6 - (int)puVar8) {
        uVar4 = ((int)puVar6 - (int)puVar8) / 0xc;
        if ((uVar4 & 1) != 0) {
          puVar6 = puVar8 + -6;
          puVar10 = puVar8 + -3;
          *puVar10 = *puVar6;
          puVar8[-2] = puVar8[-5];
          puVar8[-1] = puVar8[-4];
        }
        for (iVar5 = (int)uVar4 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          uVar9 = puVar6[-2];
          uVar11 = puVar6[-1];
          puVar10[-3] = puVar6[-3];
          puVar10[-2] = uVar9;
          puVar10[-1] = uVar11;
          uVar9 = puVar6[-5];
          uVar11 = puVar6[-4];
          puVar10[-6] = puVar6[-6];
          puVar10[-5] = uVar9;
          puVar10[-4] = uVar11;
          puVar6 = puVar6 + -6;
          puVar10 = puVar10 + -6;
        }
      }
    }
    else {
      while (puVar8 != puVar6) {
        uVar9 = puVar6[-2];
        uVar11 = puVar6[-1];
        puVar10[-3] = puVar6[-3];
        puVar10[-2] = uVar9;
        puVar10[-1] = uVar11;
        puVar10 = puVar10 + -3;
        puVar6 = puVar6 + -3;
      }
    }
    uVar9 = param_2[1];
    uVar11 = param_2[2];
    *puVar8 = *param_2;
    puVar8[1] = uVar9;
    puVar8[2] = uVar11;
    return;
  }
  uVar12 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
  if (uVar12 < uVar4 + 0x20) {
    uVar12 = uVar4 + 0x20;
  }
  puVar1 = (undefined4 *)fn_00100fc6(uVar12 * 0xc,0);
  puVar10 = puVar1;
  for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar8; puVar6 = puVar6 + 3) {
    if (puVar10 != (undefined4 *)0x0) {
      uVar9 = puVar6[1];
      uVar11 = puVar6[2];
      *puVar10 = *puVar6;
      puVar10[1] = uVar9;
      puVar10[2] = uVar11;
    }
    puVar10 = puVar10 + 3;
  }
  puVar6 = puVar1 + ((int)((int)puVar8 - *param_1) / 0xc) * 3;
  if (puVar6 != (undefined4 *)0x0) {
    uVar9 = param_2[1];
    uVar11 = param_2[2];
    *puVar6 = *param_2;
    puVar6[1] = uVar9;
    puVar6[2] = uVar11;
  }
  puVar10 = (undefined4 *)param_1[1];
  puVar6 = puVar1 + ((int)((int)puVar8 - *param_1) / 0xc) * 3;
  for (; puVar8 != puVar10; puVar8 = puVar8 + 3) {
    puVar2 = puVar6 + 3;
    if (puVar2 != (undefined4 *)0x0) {
      uVar9 = puVar8[1];
      uVar11 = puVar8[2];
      *puVar2 = *puVar8;
      puVar6[4] = uVar9;
      puVar6[5] = uVar11;
    }
    puVar6 = puVar2;
  }
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = uVar3;
  if (uVar7 < uVar3) {
    do {
      uVar4 = uVar4 + 0xc;
    } while (uVar4 != uVar7);
  }
  fn_001008c4(uVar3,(int)(param_1[2] - uVar3) / 0xc,0);
  *param_1 = (uint)puVar1;
  param_1[1] = (uint)(puVar1 + ((int)(uVar7 - uVar3) / 0xc) * 3 + 3);
  param_1[2] = (uint)(puVar1 + uVar12 * 3);
  return;
}



void fn_00795ce8(uint *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint local_28 [2];
  uint *puStack_20;
  uint local_1c;
  
  local_1c = param_2;
  puStack_20 = param_1;
  puVar7 = local_28;
  if (0x9249249 < param_2) {
    local_28[0] = 0x9249249;
    fn_002ff628(8,&DAT_008c7637);
  }
  uVar5 = param_1[2] - *param_1;
  iVar6 = (int)((longlong)(int)uVar5 * -0x6db6db6d + ((ulonglong)uVar5 << 0x20) >> 0x20);
  if ((uint)((iVar6 >> 4) - (iVar6 >> 0x1f)) < local_1c) {
    uVar5 = param_1[1] - *param_1;
    iVar6 = (int)((longlong)(int)uVar5 * -0x6db6db6d + ((ulonglong)uVar5 << 0x20) >> 0x20);
    uVar5 = (iVar6 >> 4) - (iVar6 >> 0x1f);
    local_28[0] = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
    if (local_28[0] < uVar5 + 0x20) {
      local_28[0] = uVar5 + 0x20;
    }
    if (local_28[0] <= local_1c) {
      puVar7 = &local_1c;
    }
    uVar5 = *puVar7;
    puVar1 = (undefined1 *)fn_00100fc6(uVar5 * 0x1c,0);
    puVar9 = (undefined1 *)param_1[1];
    puVar8 = puVar1;
    for (puVar2 = (undefined1 *)*param_1; puVar2 != puVar9; puVar2 = puVar2 + 0x1c) {
      if (puVar8 != (undefined1 *)0x0) {
        *puVar8 = *puVar2;
        uVar10 = *(undefined4 *)(puVar2 + 8);
        *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puVar2 + 4);
        *(undefined4 *)(puVar8 + 8) = uVar10;
        *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar2 + 0xc);
        *(undefined4 *)(puVar8 + 0x10) = *(undefined4 *)(puVar2 + 0x10);
        *(undefined4 *)(puVar8 + 0x14) = *(undefined4 *)(puVar2 + 0x14);
        *(undefined4 *)(puVar8 + 0x18) = *(undefined4 *)(puVar2 + 0x18);
      }
      puVar8 = puVar8 + 0x1c;
    }
    uVar3 = *param_1;
    uVar4 = uVar3;
    if (param_1[1] < uVar3) {
      do {
        uVar4 = uVar4 + 0x1c;
      } while (uVar4 != param_1[1]);
    }
    iVar6 = (int)((longlong)(int)(param_1[2] - uVar3) * -0x6db6db6d +
                  ((ulonglong)(param_1[2] - uVar3) << 0x20) >> 0x20);
    fn_001008c4(uVar3,(iVar6 >> 4) - (iVar6 >> 0x1f),0);
    uVar4 = *param_1;
    *param_1 = (uint)puVar1;
    iVar6 = (int)((longlong)(int)(param_1[1] - uVar4) * -0x6db6db6d +
                  ((ulonglong)(param_1[1] - uVar4) << 0x20) >> 0x20);
    param_1[1] = (uint)(puVar1 + ((iVar6 >> 4) - (iVar6 >> 0x1f)) * 0x1c);
    param_1[2] = (uint)(puVar1 + uVar5 * 0x1c);
  }
  return;
}


