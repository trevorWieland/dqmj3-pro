#include "00799a90_0079f228.h"



void fn_0079f228(undefined4 *param_1,int param_2,uint *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  char *local_24;
  char *local_20;
  
  pcVar2 = *(char **)(param_2 + 0x10);
  bVar4 = true;
  pcVar3 = pcVar2;
  if (*(char **)(pcVar2 + 4) != (char *)0x0) {
    pcVar1 = *(char **)(pcVar2 + 4);
    do {
      pcVar3 = pcVar1;
      bVar4 = *param_3 < *(uint *)(pcVar3 + 0x10);
      if (bVar4) {
        pcVar1 = *(char **)(pcVar3 + 8);
      }
      else {
        pcVar1 = *(char **)(pcVar3 + 0xc);
      }
    } while (pcVar1 != (char *)0x0);
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    local_20 = pcVar3;
    if (bVar4) {
      if (pcVar3 == *(char **)(pcVar2 + 8)) goto LAB_0079f328;
      if ((*pcVar3 == '\0') && (*(char **)(*(int *)(pcVar3 + 4) + 4) == pcVar3)) {
        local_20 = *(char **)(pcVar3 + 0xc);
      }
      else {
        local_20 = *(char **)(pcVar3 + 8);
        if (local_20 == (char *)0x0) {
          local_20 = *(char **)(pcVar3 + 4);
          pcVar2 = local_20;
          if (pcVar3 == *(char **)(local_20 + 8)) {
            do {
              local_20 = *(char **)(pcVar2 + 4);
              bVar4 = pcVar2 == *(char **)(local_20 + 8);
              pcVar2 = local_20;
            } while (bVar4);
          }
        }
        else {
          for (pcVar3 = *(char **)(local_20 + 0xc); pcVar3 != (char *)0x0;
              pcVar3 = *(char **)(pcVar3 + 0xc)) {
            local_20 = pcVar3;
          }
        }
      }
    }
    if (*param_3 <= *(uint *)(local_20 + 0x10)) goto LAB_0079f350;
  }
LAB_0079f328:
  fn_0077a0f8(&local_24);
  local_20 = local_24;
LAB_0079f350:
  *param_1 = local_20;
  return;
}



void fn_0079f0e0(undefined4 *param_1,int param_2,uint *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  char *local_2c;
  char *local_28;
  
  pcVar2 = *(char **)(param_2 + 0x10);
  bVar4 = true;
  pcVar3 = pcVar2;
  if (*(char **)(pcVar2 + 4) != (char *)0x0) {
    pcVar1 = *(char **)(pcVar2 + 4);
    do {
      pcVar3 = pcVar1;
      bVar4 = param_3[1] <= *(uint *)(pcVar3 + 0x14) &&
              (uint)(*(uint *)(pcVar3 + 0x10) <= *param_3) <= param_3[1] - *(uint *)(pcVar3 + 0x14);
      if (bVar4) {
        pcVar1 = *(char **)(pcVar3 + 8);
      }
      else {
        pcVar1 = *(char **)(pcVar3 + 0xc);
      }
    } while (pcVar1 != (char *)0x0);
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    local_28 = pcVar3;
    if (bVar4) {
      if (pcVar3 == *(char **)(pcVar2 + 8)) goto LAB_0079f1f0;
      if ((*pcVar3 == '\0') && (*(char **)(*(int *)(pcVar3 + 4) + 4) == pcVar3)) {
        local_28 = *(char **)(pcVar3 + 0xc);
      }
      else {
        local_28 = *(char **)(pcVar3 + 8);
        if (local_28 == (char *)0x0) {
          local_28 = *(char **)(pcVar3 + 4);
          pcVar2 = local_28;
          if (pcVar3 == *(char **)(local_28 + 8)) {
            do {
              local_28 = *(char **)(pcVar2 + 4);
              bVar4 = pcVar2 == *(char **)(local_28 + 8);
              pcVar2 = local_28;
            } while (bVar4);
          }
        }
        else {
          for (pcVar3 = *(char **)(local_28 + 0xc); pcVar3 != (char *)0x0;
              pcVar3 = *(char **)(pcVar3 + 0xc)) {
            local_28 = pcVar3;
          }
        }
      }
    }
    if (param_3[1] < *(uint *)(local_28 + 0x14) ||
        *(uint *)(local_28 + 0x14) - param_3[1] < (uint)(*param_3 <= *(uint *)(local_28 + 0x10)))
    goto LAB_0079f218;
  }
LAB_0079f1f0:
  fn_007691ac(&local_2c);
  local_28 = local_2c;
LAB_0079f218:
  *param_1 = local_28;
  return;
}



void fn_0079e460(uint *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  
  puVar8 = param_1 + 1;
  puVar1 = (undefined2 *)*puVar8;
  uVar4 = (int)((int)puVar1 - *param_1) >> 1;
  if ((uint)((int)(param_1[2] - *param_1) >> 1) <= uVar4) {
    uVar9 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar9 < uVar4 + 0x20) {
      uVar9 = uVar4 + 0x20;
    }
    puVar2 = (undefined2 *)fn_00100fc6(uVar9 << 1,0);
    puVar6 = puVar2;
    for (puVar1 = (undefined2 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = *puVar1;
      }
      puVar6 = puVar6 + 1;
    }
    puVar1 = (undefined2 *)(((int)param_2 - *param_1 & 0xfffffffe) + (int)puVar2);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar6 = (undefined2 *)*puVar8;
    puVar1 = (undefined2 *)(((int)param_2 - *param_1 & 0xfffffffe) + (int)puVar2);
    for (; param_2 != puVar6; param_2 = param_2 + 1) {
      puVar1 = puVar1 + 1;
      if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = *param_2;
      }
    }
    uVar3 = *param_1;
    uVar7 = *puVar8;
    uVar4 = uVar3;
    if (uVar7 < uVar3) {
      do {
        uVar4 = uVar4 + 2;
      } while (uVar4 != uVar7);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 1,0);
    param_1[2] = (uint)(puVar2 + uVar9);
    *puVar8 = (uint)(puVar2 + ((int)(uVar7 - uVar3) >> 1) + 1);
    *param_1 = (uint)puVar2;
    return;
  }
  *puVar8 = (uint)(puVar1 + 1);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = puVar1[-1];
  }
  puVar6 = puVar1 + -1;
  if (param_2 < puVar6) {
    iVar5 = (int)puVar6 - (int)param_2;
    if (0 < iVar5) {
      if (iVar5 * 0x40000000 < 0) {
        puVar6 = puVar1 + -2;
        puVar1 = puVar1 + -1;
        *puVar1 = *puVar6;
      }
      for (iVar5 = iVar5 >> 2; iVar5 != 0; iVar5 = iVar5 + -1) {
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



void fn_0079ce44(uint *param_1,undefined4 *param_2,undefined4 *param_3)

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



void fn_00799a90(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  
  puVar9 = param_1 + 1;
  puVar1 = (undefined4 *)*puVar9;
  uVar4 = (int)((int)puVar1 - *param_1) >> 2;
  if ((uint)((int)(param_1[2] - *param_1) >> 2) <= uVar4) {
    uVar10 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar10 < uVar4 + 0x20) {
      uVar10 = uVar4 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
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
    puVar6 = (undefined4 *)*puVar9;
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar2);
    for (; param_2 != puVar6; param_2 = param_2 + 1) {
      puVar1 = puVar1 + 1;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_2;
      }
    }
    uVar3 = *param_1;
    uVar7 = *puVar9;
    uVar4 = uVar3;
    if (uVar7 < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != uVar7);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 2,0);
    param_1[2] = (uint)(puVar2 + uVar10);
    *puVar9 = (uint)(puVar2 + ((int)(uVar7 - uVar3) >> 2) + 1);
    *param_1 = (uint)puVar2;
    return;
  }
  *puVar9 = (uint)(puVar1 + 1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar1[-1];
  }
  puVar6 = puVar1 + -1;
  if (param_2 < puVar6) {
    if (0 < (int)puVar6 - (int)param_2) {
      iVar8 = (int)puVar6 - (int)param_2 >> 2;
      iVar5 = 0;
      do {
        iVar8 = iVar8 + -1;
        puVar1[iVar5 + -1] = puVar6[iVar5 + -1];
        iVar5 = iVar5 + -1;
      } while (iVar8 != 0);
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


