#include "00473b74_00473ce0.h"



undefined4 fn_00473ce0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  bool bVar7;
  
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  piVar3 = *(int **)(param_1 + 0x9c);
  if (piVar3 != (int *)0x0) {
    if (*(char *)((int)piVar3 + 0x22) != '\x05') goto LAB_00473d94;
    puVar6 = (uint *)(piVar3 + 1);
    do {
      uVar5 = *puVar6 - 1;
      bVar7 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar7);
    *puVar6 = uVar5;
    bVar7 = uVar5 == 0;
    if (bVar7) {
      uVar5 = (uint)*(byte *)(piVar3 + 2);
    }
    if (bVar7 && uVar5 == 0) {
      *(undefined1 *)(piVar3 + 2) = 1;
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  piVar3 = *(int **)(param_1 + 0x94);
  if (piVar3 != (int *)0x0) {
    if (*(char *)((int)piVar3 + 0x22) != '\x05') {
LAB_00473d94:
      (**(code **)(*piVar2 + 0xc))(piVar2);
      return 0;
    }
    puVar6 = (uint *)(piVar3 + 1);
    do {
      uVar5 = *puVar6 - 1;
      bVar7 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar7);
    *puVar6 = uVar5;
    bVar7 = uVar5 == 0;
    if (bVar7) {
      uVar5 = (uint)*(byte *)(piVar3 + 2);
    }
    if (bVar7 && uVar5 == 0) {
      *(undefined1 *)(piVar3 + 2) = 1;
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  uVar4 = fn_00473638(param_1,param_2,param_3);
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return uVar4;
}



undefined4 fn_00473cb8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  bool bVar7;
  
  fn_004738f0();
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  piVar3 = *(int **)(param_1 + 0x9c);
  if (piVar3 != (int *)0x0) {
    if (*(char *)((int)piVar3 + 0x22) != '\x05') goto LAB_00473d94;
    puVar6 = (uint *)(piVar3 + 1);
    do {
      uVar5 = *puVar6 - 1;
      bVar7 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar7);
    *puVar6 = uVar5;
    bVar7 = uVar5 == 0;
    if (bVar7) {
      uVar5 = (uint)*(byte *)(piVar3 + 2);
    }
    if (bVar7 && uVar5 == 0) {
      *(undefined1 *)(piVar3 + 2) = 1;
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  piVar3 = *(int **)(param_1 + 0x94);
  if (piVar3 != (int *)0x0) {
    if (*(char *)((int)piVar3 + 0x22) != '\x05') {
LAB_00473d94:
      (**(code **)(*piVar2 + 0xc))(piVar2);
      return 0;
    }
    puVar6 = (uint *)(piVar3 + 1);
    do {
      uVar5 = *puVar6 - 1;
      bVar7 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar7);
    *puVar6 = uVar5;
    bVar7 = uVar5 == 0;
    if (bVar7) {
      uVar5 = (uint)*(byte *)(piVar3 + 2);
    }
    if (bVar7 && uVar5 == 0) {
      *(undefined1 *)(piVar3 + 2) = 1;
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  uVar4 = fn_00473638(param_1,param_2,param_3);
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return uVar4;
}



void fn_00473ca4(int param_1)

{
  if (*(int *)(param_1 + 0x84) == 0) {
    return;
  }
  fn_004a1464();
  return;
}



undefined4 fn_00473c88(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  bool bVar10;
  char *local_3c;
  char *local_38;
  undefined1 local_34;
  char *local_30;
  undefined1 local_2c;
  int iStack_28;
  uint local_24;
  
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 == 0) {
    return 0;
  }
  iStack_28 = iVar1;
  local_24 = param_2;
  iVar2 = fn_001249d0();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  pcVar6 = *(char **)(iVar1 + 0x50);
  pcVar7 = pcVar6;
  pcVar4 = *(char **)(pcVar6 + 4);
  while (pcVar4 != (char *)0x0) {
    if (*(uint *)(pcVar4 + 0x10) < local_24) {
      pcVar4 = *(char **)(pcVar4 + 0xc);
    }
    else {
      pcVar7 = pcVar4;
      pcVar4 = *(char **)(pcVar4 + 8);
    }
  }
  uVar5 = 0;
  if ((pcVar7 == pcVar6) || (uVar5 = *(uint *)(pcVar7 + 0x10), local_24 < uVar5)) {
    pcVar7 = pcVar6;
  }
  if (pcVar7 != pcVar6) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 0;
  }
  bVar9 = *(char **)(pcVar6 + 4) != (char *)0x0;
  if (bVar9) {
    uVar5 = local_24;
  }
  bVar10 = true;
  pcVar7 = pcVar6;
  pcVar4 = *(char **)(pcVar6 + 4);
  while (bVar9) {
    bVar10 = uVar5 < *(uint *)(pcVar4 + 0x10);
    if (bVar10) {
      pcVar8 = *(char **)(pcVar4 + 8);
    }
    else {
      pcVar8 = *(char **)(pcVar4 + 0xc);
    }
    bVar9 = pcVar8 != (char *)0x0;
    pcVar7 = pcVar4;
    pcVar4 = pcVar8;
  }
  if (*(char *)(iVar1 + 0x58) == '\0') {
    local_38 = pcVar7;
    if (bVar10) {
      if (pcVar7 == *(char **)(pcVar6 + 8)) goto LAB_004a1420;
      if ((*pcVar7 == '\0') && (*(char **)(*(int *)(pcVar7 + 4) + 4) == pcVar7)) {
        local_38 = *(char **)(pcVar7 + 0xc);
      }
      else {
        local_38 = *(char **)(pcVar7 + 8);
        if (local_38 == (char *)0x0) {
          local_38 = *(char **)(pcVar7 + 4);
          pcVar4 = local_38;
          if (pcVar7 == *(char **)(local_38 + 8)) {
            do {
              local_38 = *(char **)(pcVar4 + 4);
              bVar9 = pcVar4 == *(char **)(local_38 + 8);
              pcVar4 = local_38;
            } while (bVar9);
          }
        }
        else {
          for (pcVar7 = *(char **)(local_38 + 0xc); pcVar7 != (char *)0x0;
              pcVar7 = *(char **)(pcVar7 + 0xc)) {
            local_38 = pcVar7;
          }
        }
      }
    }
    if (local_24 <= *(uint *)(local_38 + 0x10)) {
      local_34 = 0;
      goto LAB_004a1438;
    }
  }
LAB_004a1420:
  fn_0076d530(&local_3c);
  local_38 = local_3c;
  local_34 = 1;
LAB_004a1438:
  local_30 = local_38;
  local_2c = local_34;
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}



void fn_00473c68(int param_1,undefined4 param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = *param_3;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



void fn_00473c30(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_0045c8f4();
  fn_004aae70(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(param_1 + 0x84));
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x78) + 0x24) + 0x14);
                    /* WARNING: Could not recover jumptable at 0x00473c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x28))(piVar2,100);
  return;
}



void fn_00473bd4(int param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x78) = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0xc)
  ;
  *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x7c) =
       *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x10);
  iVar1 = fn_0045c8f4();
  fn_004aac80(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(param_1 + 0x84));
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x78) + 0x24) + 0x14);
                    /* WARNING: Could not recover jumptable at 0x00473c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x24))(piVar2,100,*(undefined4 *)(param_1 + 0x88));
  return;
}



void fn_00473b74(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  piVar1 = *(int **)(param_1 + 0x78);
  if (piVar1 != (int *)0x0) {
    puVar3 = (uint *)(piVar1 + 1);
    do {
      uVar2 = *puVar3 - 1;
      bVar4 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar4);
    *puVar3 = uVar2;
    bVar4 = uVar2 == 0;
    if (bVar4) {
      uVar2 = (uint)*(byte *)(piVar1 + 2);
    }
    if (bVar4 && uVar2 == 0) {
      *(undefined1 *)(piVar1 + 2) = 1;
      (**(code **)(*piVar1 + 4))();
    }
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}


