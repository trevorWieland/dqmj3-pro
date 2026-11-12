#include "00158938_00158f14.h"

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


void fn_00158f14(void)

{
  svc_0x28();
  return;
}



undefined4 fn_00158f10(undefined4 param_1)

{
  svc_0x28();
  return param_1;
}



void fn_00158c6c(uint *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  if (param_3 == 0) {
    return;
  }
  puVar1 = (undefined4 *)param_1[1];
  iVar7 = (int)((int)puVar1 - *param_1) >> 2;
  if ((uint)((int)(param_1[2] - *param_1) >> 2) < (uint)(param_3 + iVar7)) {
    uVar5 = param_3 + iVar7;
    uVar3 = (int)(param_1[1] - *param_1) >> 2;
    uVar8 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    if (uVar8 < uVar3 + 0x20) {
      uVar8 = uVar3 + 0x20;
    }
    if (uVar8 <= uVar5) {
      uVar8 = uVar5;
    }
    puVar2 = (undefined4 *)fn_0015ece0(uVar8 << 2);
    puVar6 = puVar2;
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar1;
      }
      puVar6 = puVar6 + 1;
    }
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar2);
    for (iVar7 = param_3; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_4;
      }
      puVar1 = puVar1 + 1;
    }
    puVar6 = (undefined4 *)param_1[1];
    puVar1 = puVar2 + param_3 + ((int)((int)param_2 - *param_1) >> 2);
    for (; param_2 != puVar6; param_2 = param_2 + 1) {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_2;
      }
      puVar1 = puVar1 + 1;
    }
    uVar3 = *param_1;
    uVar5 = param_1[1];
    fn_0014f1bc();
    param_1[2] = (uint)(puVar2 + uVar8);
    param_1[1] = (uint)(puVar2 + ((int)(uVar5 - uVar3) >> 2) + param_3);
    *param_1 = (uint)puVar2;
    return;
  }
  puVar6 = param_2 + param_3;
  param_1[1] = (uint)(puVar1 + param_3);
  if (puVar6 < puVar1) {
    puVar4 = puVar1 + -param_3;
    puVar9 = puVar1;
    for (puVar2 = puVar4; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = *puVar2;
      }
      puVar9 = puVar9 + 1;
    }
    iVar7 = (int)puVar4 - (int)param_2;
    if (0 < iVar7 >> 2) {
      if (iVar7 * 0x20000000 < 0) {
        puVar4 = puVar4 + -1;
        puVar1 = puVar1 + -1;
        *puVar1 = *puVar4;
      }
      for (iVar7 = iVar7 >> 3; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar1[-1] = puVar4[-1];
        puVar4 = puVar4 + -2;
        puVar1 = puVar1 + -2;
        *puVar1 = *puVar4;
      }
    }
    iVar7 = (int)puVar6 - (int)param_2;
    if (0 < iVar7 >> 2) {
      puVar1 = param_2 + -1;
      if (iVar7 * 0x20000000 < 0) {
        *param_2 = *param_4;
        puVar1 = param_2;
      }
      for (iVar7 = iVar7 >> 3; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar1[1] = *param_4;
        puVar1 = puVar1 + 2;
        *puVar1 = *param_4;
      }
    }
  }
  else {
    iVar7 = (int)puVar1 - (int)param_2;
    puVar2 = puVar1;
    for (param_3 = param_3 - (iVar7 >> 2); puVar9 = param_2, param_3 != 0; param_3 = param_3 + -1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *param_4;
      }
      puVar2 = puVar2 + 1;
    }
    for (; puVar9 != puVar1; puVar9 = puVar9 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar9;
      }
      puVar6 = puVar6 + 1;
    }
    if (0 < iVar7 >> 2) {
      puVar1 = param_2 + -1;
      if (iVar7 * 0x20000000 < 0) {
        *param_2 = *param_4;
        puVar1 = param_2;
      }
      iVar7 = iVar7 >> 3;
      if (iVar7 != 0) {
        do {
          iVar7 = iVar7 + -1;
          puVar1[1] = *param_4;
          puVar1 = puVar1 + 2;
          *puVar1 = *param_4;
        } while (iVar7 != 0);
        return;
      }
    }
  }
  return;
}



void fn_00158938(uint *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint local_28;
  uint local_24 [2];
  
  if (param_3 == 0) {
    return;
  }
  puVar11 = (undefined4 *)param_1[1];
  local_28 = param_3 + ((int)((int)puVar11 - *param_1) >> 2);
  if ((uint)((int)(param_1[2] - *param_1) >> 2) < local_28) {
    uVar10 = (int)(param_1[1] - *param_1) >> 2;
    local_24[0] = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (local_24[0] < uVar10 + 0x20) {
      local_24[0] = uVar10 + 0x20;
    }
    puVar3 = local_24;
    if (local_24[0] <= local_28) {
      puVar3 = &local_28;
    }
    uVar10 = *puVar3;
    puVar4 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    puVar7 = puVar4;
    for (puVar11 = (undefined4 *)*param_1; puVar11 != param_2; puVar11 = puVar11 + 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar11;
      }
      puVar7 = puVar7 + 1;
    }
    puVar11 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar4);
    for (iVar2 = param_3; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = *param_4;
      }
      puVar11 = puVar11 + 1;
    }
    puVar7 = (undefined4 *)param_1[1];
    puVar11 = puVar4 + param_3 + ((int)((int)param_2 - *param_1) >> 2);
    for (; param_2 != puVar7; param_2 = param_2 + 1) {
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = *param_2;
      }
      puVar11 = puVar11 + 1;
    }
    uVar5 = *param_1;
    uVar8 = param_1[1];
    uVar6 = uVar5;
    if (uVar8 < uVar5) {
      do {
        uVar6 = uVar6 + 4;
      } while (uVar6 != uVar8);
    }
    fn_001008c4(uVar5,(int)(param_1[2] - uVar5) >> 2,0);
    param_1[2] = (uint)(puVar4 + uVar10);
    param_1[1] = (uint)(puVar4 + ((int)(uVar8 - uVar5) >> 2) + param_3);
    *param_1 = (uint)puVar4;
    return;
  }
  puVar7 = param_2 + param_3;
  param_1[1] = (uint)(puVar11 + param_3);
  if (puVar7 < puVar11) {
    puVar1 = puVar11 + -param_3;
    puVar9 = puVar11;
    for (puVar4 = puVar1; puVar4 != puVar11; puVar4 = puVar4 + 1) {
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = *puVar4;
      }
      puVar9 = puVar9 + 1;
    }
    if (param_2 < puVar1) {
      iVar2 = (int)puVar1 - (int)param_2;
      if (0 < iVar2) {
        if (iVar2 * 0x20000000 < 0) {
          puVar1 = puVar1 + -1;
          puVar11 = puVar11 + -1;
          *puVar11 = *puVar1;
        }
        for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
          puVar11[-1] = puVar1[-1];
          puVar1 = puVar1 + -2;
          puVar11 = puVar11 + -2;
          *puVar11 = *puVar1;
        }
      }
    }
    else {
      while (param_2 != puVar1) {
        puVar1 = puVar1 + -1;
        puVar11 = puVar11 + -1;
        *puVar11 = *puVar1;
      }
    }
    if (param_2 < puVar7) {
      iVar2 = (int)puVar7 - (int)param_2;
      if (0 < iVar2) {
        puVar11 = param_2;
        if (iVar2 * 0x20000000 < 0) {
          puVar11 = param_2 + 1;
          *param_2 = *param_4;
        }
        iVar2 = iVar2 >> 3;
        if (iVar2 != 0) {
          do {
            iVar2 = iVar2 + -1;
            puVar7 = puVar11 + 1;
            *puVar11 = *param_4;
            puVar11 = puVar11 + 2;
            *puVar7 = *param_4;
          } while (iVar2 != 0);
          return;
        }
      }
    }
    else {
      for (; param_2 != puVar7; param_2 = param_2 + 1) {
        *param_2 = *param_4;
      }
    }
  }
  else {
    iVar2 = (int)puVar11 - (int)param_2;
    puVar4 = puVar11;
    for (param_3 = param_3 - (iVar2 >> 2); puVar9 = param_2, param_3 != 0; param_3 = param_3 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *param_4;
      }
      puVar4 = puVar4 + 1;
    }
    for (; puVar9 != puVar11; puVar9 = puVar9 + 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar9;
      }
      puVar7 = puVar7 + 1;
    }
    if (param_2 < puVar11) {
      if (0 < iVar2) {
        puVar11 = param_2;
        if (iVar2 * 0x20000000 < 0) {
          puVar11 = param_2 + 1;
          *param_2 = *param_4;
        }
        iVar2 = iVar2 >> 3;
        if (iVar2 != 0) {
          do {
            iVar2 = iVar2 + -1;
            puVar7 = puVar11 + 1;
            *puVar11 = *param_4;
            puVar11 = puVar11 + 2;
            *puVar7 = *param_4;
          } while (iVar2 != 0);
          return;
        }
      }
    }
    else if (param_2 != puVar11) {
      do {
        puVar7 = param_2 + 1;
        *param_2 = *param_4;
        param_2 = puVar7;
      } while (puVar7 != puVar11);
      return;
    }
  }
  return;
}


