#include "005e42cc_005e499c.h"



undefined4 * fn_005e499c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = param_1[5];
  uVar2 = uVar1;
  if ((uint)param_1[6] <= uVar1) {
    for (; uVar2 != param_1[6]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[7] - uVar1) >> 2,0);
  uVar1 = param_1[2];
  uVar2 = uVar1;
  if ((uint)param_1[3] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[3]);
  }
  fn_001008c4(uVar1,(int)(param_1[4] - uVar1) >> 2,0);
  puVar3 = (undefined4 *)*param_1;
  if ((puVar3 != (undefined4 *)0x0) && (*(char *)(param_1 + 1) != '\0')) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(int *)puVar3[1] + 0xc))((int *)puVar3[1],puVar3);
  }
  return param_1;
}



undefined4 *
fn_005e4680(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 **ppuVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined1 local_60 [4];
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  ppuVar3 = &local_68;
  ppuVar8 = &local_68;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_60[0] = 0;
  local_58 = 0;
  local_38 = 0;
  local_3c = 0;
  local_54 = 0;
  local_24 = 0;
  local_34 = 0;
  local_44 = 0;
  local_2c = 0;
  local_28 = 0;
  local_4c = 0;
  local_48 = 0;
  local_30 = 0;
  local_50 = 0;
  local_40 = 0;
  local_5c = (int)param_3 + (int)param_4;
  puVar1 = (undefined4 *)fn_00541434(local_60);
  local_64 = (undefined4 *)CONCAT31(((unsigned int)(local_64) >> 8) & 0xffffff,1);
  local_68 = puVar1;
  if ((undefined4 **)param_1 != &local_68) {
    local_68 = (undefined4 *)*param_1;
    local_64 = (undefined4 *)CONCAT31(((unsigned int)(local_64) >> 8) & 0xffffff,*(undefined1 *)(param_1 + 1));
    *param_1 = puVar1;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  puVar1 = local_68;
  if ((local_68 != (undefined4 *)0x0) && ((char)local_64 != '\0')) {
    (**(code **)*local_68)(local_68);
    piVar2 = (int *)puVar1[1];
    (**(code **)(*piVar2 + 0xc))(piVar2,puVar1);
  }
  puVar10 = param_1 + 2;
  local_64 = param_3;
  if ((undefined4 *)0x3fffffff < param_3) {
    local_68 = (undefined4 *)0x3fffffff;
    fn_002ff628(8,&DAT_008c766c,&DAT_008c766c,param_3);
  }
  if ((undefined4 *)((int)(param_1[4] - *puVar10) >> 2) < local_64) {
    uVar7 = (int)(param_1[3] - *puVar10) >> 2;
    local_68 = (undefined4 *)(uVar7 + (uVar7 >> 1) + (uVar7 >> 3));
    if (local_68 < (undefined4 *)(uVar7 + 0x20)) {
      local_68 = (undefined4 *)(uVar7 + 0x20);
    }
    if (local_68 <= local_64) {
      ppuVar3 = &local_64;
    }
    puVar11 = *ppuVar3;
    puVar4 = (undefined4 *)fn_00100fc6((int)puVar11 << 2,0);
    puVar9 = (undefined4 *)param_1[3];
    puVar5 = puVar4;
    for (puVar1 = (undefined4 *)*puVar10; puVar1 != puVar9; puVar1 = puVar1 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar1;
      }
      puVar5 = puVar5 + 1;
    }
    uVar6 = *puVar10;
    uVar7 = uVar6;
    if ((uint)param_1[3] < uVar6) {
      do {
        uVar7 = uVar7 + 4;
      } while (uVar7 != param_1[3]);
    }
    fn_001008c4(uVar6,(int)(param_1[4] - uVar6) >> 2,0);
    uVar7 = *puVar10;
    param_1[2] = puVar4;
    param_1[3] = (param_1[3] - uVar7 & 0xfffffffc) + (int)puVar4;
    param_1[4] = puVar4 + (int)puVar11;
  }
  puVar10 = param_1 + 5;
  local_64 = param_4;
  if ((undefined4 *)0x3fffffff < param_4) {
    local_68 = (undefined4 *)0x3fffffff;
    fn_002ff628(8,&DAT_008c766b,&DAT_008c766b,param_4);
  }
  if ((undefined4 *)((int)(param_1[7] - *puVar10) >> 2) < local_64) {
    uVar7 = (int)(param_1[6] - *puVar10) >> 2;
    local_68 = (undefined4 *)(uVar7 + (uVar7 >> 1) + (uVar7 >> 3));
    if (local_68 < (undefined4 *)(uVar7 + 0x20)) {
      local_68 = (undefined4 *)(uVar7 + 0x20);
    }
    if (local_68 <= local_64) {
      ppuVar8 = &local_64;
    }
    puVar11 = *ppuVar8;
    puVar4 = (undefined4 *)fn_00100fc6((int)puVar11 << 2,0);
    puVar9 = (undefined4 *)param_1[6];
    puVar5 = puVar4;
    for (puVar1 = (undefined4 *)*puVar10; puVar1 != puVar9; puVar1 = puVar1 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar1;
      }
      puVar5 = puVar5 + 1;
    }
    uVar6 = *puVar10;
    uVar7 = uVar6;
    if ((uint)param_1[6] < uVar6) {
      do {
        uVar7 = uVar7 + 4;
      } while (uVar7 != param_1[6]);
    }
    fn_001008c4(uVar6,(int)(param_1[7] - uVar6) >> 2,0);
    uVar7 = *puVar10;
    param_1[5] = puVar4;
    param_1[6] = (param_1[6] - uVar7 & 0xfffffffc) + (int)puVar4;
    param_1[7] = puVar4 + (int)puVar11;
  }
  return param_1;
}



void fn_005e4488(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 4);
  puVar10 = (uint *)(iVar1 + 0x14);
  puVar9 = *(undefined4 **)(iVar1 + 0x18);
  if (puVar9 != *(undefined4 **)(iVar1 + 0x1c)) {
    *(undefined4 **)(iVar1 + 0x18) = puVar9 + 1;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = param_2;
    }
    return;
  }
  uVar4 = (int)((int)puVar9 - *puVar10) >> 2;
  if ((uint)((int)((int)*(undefined4 **)(iVar1 + 0x1c) - *puVar10) >> 2) <= uVar4) {
    uVar11 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar11 < uVar4 + 0x20) {
      uVar11 = uVar4 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
    puVar7 = puVar2;
    for (puVar6 = (undefined4 *)*puVar10; puVar6 != puVar9; puVar6 = puVar6 + 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar6;
      }
      puVar7 = puVar7 + 1;
    }
    puVar6 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar2);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = param_2;
    }
    puVar7 = *(undefined4 **)(iVar1 + 0x18);
    puVar6 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar2);
    for (; puVar9 != puVar7; puVar9 = puVar9 + 1) {
      puVar6 = puVar6 + 1;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar9;
      }
    }
    uVar3 = *puVar10;
    uVar8 = *(uint *)(iVar1 + 0x18);
    uVar4 = uVar3;
    if (uVar8 < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != uVar8);
    }
    fn_001008c4(uVar3,(int)(*(int *)(iVar1 + 0x1c) - uVar3) >> 2,0);
    *(undefined4 **)(iVar1 + 0x1c) = puVar2 + uVar11;
    *(undefined4 **)(iVar1 + 0x18) = puVar2 + ((int)(uVar8 - uVar3) >> 2) + 1;
    *puVar10 = (uint)puVar2;
    return;
  }
  *(undefined4 **)(iVar1 + 0x18) = puVar9 + 1;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = puVar9[-1];
  }
  puVar6 = puVar9 + -1;
  puVar7 = puVar9;
  if (puVar9 < puVar6) {
    if (0 < (int)puVar6 - (int)puVar9) {
      iVar1 = (int)puVar6 - (int)puVar9 >> 2;
      iVar5 = 0;
      do {
        iVar1 = iVar1 + -1;
        puVar9[iVar5 + -1] = puVar6[iVar5 + -1];
        iVar5 = iVar5 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    while (puVar9 != puVar6) {
      puVar6 = puVar6 + -1;
      puVar7[-1] = *puVar6;
      puVar7 = puVar7 + -1;
    }
  }
  *puVar9 = param_2;
  return;
}



void fn_005e42cc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 4);
  puVar10 = (uint *)(iVar1 + 8);
  puVar9 = *(undefined4 **)(iVar1 + 0xc);
  if (puVar9 != *(undefined4 **)(iVar1 + 0x10)) {
    *(undefined4 **)(iVar1 + 0xc) = puVar9 + 1;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = param_2;
    }
    return;
  }
  uVar4 = (int)((int)puVar9 - *puVar10) >> 2;
  if ((uint)((int)((int)*(undefined4 **)(iVar1 + 0x10) - *puVar10) >> 2) <= uVar4) {
    uVar11 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar11 < uVar4 + 0x20) {
      uVar11 = uVar4 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
    puVar7 = puVar2;
    for (puVar6 = (undefined4 *)*puVar10; puVar6 != puVar9; puVar6 = puVar6 + 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar6;
      }
      puVar7 = puVar7 + 1;
    }
    puVar6 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar2);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = param_2;
    }
    puVar7 = *(undefined4 **)(iVar1 + 0xc);
    puVar6 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar2);
    for (; puVar9 != puVar7; puVar9 = puVar9 + 1) {
      puVar6 = puVar6 + 1;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar9;
      }
    }
    uVar3 = *puVar10;
    uVar8 = *(uint *)(iVar1 + 0xc);
    uVar4 = uVar3;
    if (uVar8 < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != uVar8);
    }
    fn_001008c4(uVar3,(int)(*(int *)(iVar1 + 0x10) - uVar3) >> 2,0);
    *(undefined4 **)(iVar1 + 0x10) = puVar2 + uVar11;
    *(undefined4 **)(iVar1 + 0xc) = puVar2 + ((int)(uVar8 - uVar3) >> 2) + 1;
    *puVar10 = (uint)puVar2;
    return;
  }
  *(undefined4 **)(iVar1 + 0xc) = puVar9 + 1;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = puVar9[-1];
  }
  puVar6 = puVar9 + -1;
  puVar7 = puVar9;
  if (puVar9 < puVar6) {
    if (0 < (int)puVar6 - (int)puVar9) {
      iVar1 = (int)puVar6 - (int)puVar9 >> 2;
      iVar5 = 0;
      do {
        iVar1 = iVar1 + -1;
        puVar9[iVar5 + -1] = puVar6[iVar5 + -1];
        iVar5 = iVar5 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    while (puVar9 != puVar6) {
      puVar6 = puVar6 + -1;
      puVar7[-1] = *puVar6;
      puVar7 = puVar7 + -1;
    }
  }
  *puVar9 = param_2;
  return;
}


