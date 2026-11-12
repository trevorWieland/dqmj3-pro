#include "004aa778_004aae70.h"



undefined4 fn_004aae70(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_18;
  undefined1 auStack_14 [4];
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar1 = *(int *)(param_1 + 0x94);
  local_18 = iVar1;
  iVar2 = *(int *)(iVar1 + 4);
  while (iVar2 != 0) {
    if (*(uint *)(iVar2 + 0x10) < param_2) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      local_18 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((local_18 == iVar1) || (param_2 < *(uint *)(local_18 + 0x10))) {
    local_18 = iVar1;
  }
  if (local_18 == iVar1) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 0;
  }
  fn_0076d89c(auStack_14,param_1 + 0x84,&local_18);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}



undefined4 fn_004aac80(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  bool bVar9;
  char *local_3c;
  char *local_38;
  undefined1 local_34;
  char *local_30;
  undefined1 local_2c;
  int iStack_28;
  uint local_24;
  
  iStack_28 = param_1;
  local_24 = param_2;
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  pcVar5 = *(char **)(param_1 + 0x94);
  pcVar6 = pcVar5;
  pcVar3 = *(char **)(pcVar5 + 4);
  while (pcVar3 != (char *)0x0) {
    if (*(uint *)(pcVar3 + 0x10) < local_24) {
      pcVar3 = *(char **)(pcVar3 + 0xc);
    }
    else {
      pcVar6 = pcVar3;
      pcVar3 = *(char **)(pcVar3 + 8);
    }
  }
  uVar4 = 0;
  if ((pcVar6 == pcVar5) || (uVar4 = *(uint *)(pcVar6 + 0x10), local_24 < uVar4)) {
    pcVar6 = pcVar5;
  }
  if (pcVar6 != pcVar5) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
    return 0;
  }
  bVar8 = *(char **)(pcVar5 + 4) != (char *)0x0;
  if (bVar8) {
    uVar4 = local_24;
  }
  bVar9 = true;
  pcVar6 = pcVar5;
  pcVar3 = *(char **)(pcVar5 + 4);
  while (bVar8) {
    bVar9 = uVar4 < *(uint *)(pcVar3 + 0x10);
    if (bVar9) {
      pcVar7 = *(char **)(pcVar3 + 8);
    }
    else {
      pcVar7 = *(char **)(pcVar3 + 0xc);
    }
    bVar8 = pcVar7 != (char *)0x0;
    pcVar6 = pcVar3;
    pcVar3 = pcVar7;
  }
  if (*(char *)(param_1 + 0x9c) == '\0') {
    local_38 = pcVar6;
    if (bVar9) {
      if (pcVar6 == *(char **)(pcVar5 + 8)) goto LAB_004aae2c;
      if ((*pcVar6 == '\0') && (*(char **)(*(int *)(pcVar6 + 4) + 4) == pcVar6)) {
        local_38 = *(char **)(pcVar6 + 0xc);
      }
      else {
        local_38 = *(char **)(pcVar6 + 8);
        if (local_38 == (char *)0x0) {
          local_38 = *(char **)(pcVar6 + 4);
          pcVar3 = local_38;
          if (pcVar6 == *(char **)(local_38 + 8)) {
            do {
              local_38 = *(char **)(pcVar3 + 4);
              bVar8 = pcVar3 == *(char **)(local_38 + 8);
              pcVar3 = local_38;
            } while (bVar8);
          }
        }
        else {
          for (pcVar6 = *(char **)(local_38 + 0xc); pcVar6 != (char *)0x0;
              pcVar6 = *(char **)(pcVar6 + 0xc)) {
            local_38 = pcVar6;
          }
        }
      }
    }
    if (local_24 <= *(uint *)(local_38 + 0x10)) {
      local_34 = 0;
      goto LAB_004aae44;
    }
  }
LAB_004aae2c:
  fn_0076df34(&local_3c);
  local_38 = local_3c;
  local_34 = 1;
LAB_004aae44:
  local_30 = local_38;
  local_2c = local_34;
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return 1;
}



void fn_004aabe4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x94) + 8);
  while (iVar2 != *(int *)(param_1 + 0x94)) {
    (**(code **)(**(int **)(iVar2 + 0x10) + 0x60))(*(int **)(iVar2 + 0x10),param_2,param_3,param_4);
    iVar1 = *(int *)(iVar2 + 0xc);
    if (*(int *)(iVar2 + 0xc) == 0) {
      iVar1 = *(int *)(iVar2 + 4);
      if (iVar2 == *(int *)(iVar1 + 0xc)) {
        do {
          iVar2 = iVar1;
          iVar1 = *(int *)(iVar2 + 4);
        } while (iVar2 == *(int *)(iVar1 + 0xc));
      }
      if (*(int *)(iVar2 + 0xc) != iVar1) {
        iVar2 = iVar1;
      }
    }
    else {
      do {
        iVar2 = iVar1;
        iVar1 = *(int *)(iVar2 + 8);
      } while (*(int *)(iVar2 + 8) != 0);
    }
  }
  return;
}



void fn_004aaad0(int *param_1,int param_2,undefined4 param_3,undefined1 *param_4,int param_5)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_48;
  undefined1 local_44;
  undefined4 local_3c [3];
  undefined1 auStack_30 [12];
  
  sVar1 = fn_004ba934(param_2);
  iVar2 = *(int *)(*(int *)(param_5 + 0x70) + 0x28);
  uVar4 = *(undefined4 *)(iVar2 + 0xc);
  uVar3 = *(undefined4 *)(iVar2 + 0x10);
  if (sVar1 != 1) {
    local_3c[0] = 0x80010002;
    uVar3 = fn_004b8d4c(&local_48,local_3c);
    fn_0047187c(param_1,uVar3);
    return;
  }
  local_48 = &DAT_00854554;
  local_44 = 0;
  iVar2 = fn_0013d40c(auStack_30);
  *(undefined **)(iVar2 + -0x18) = &DAT_00853900;
  *(undefined4 *)(iVar2 + -0x10) = 0;
  *(undefined4 *)(iVar2 + -0xc) = 0;
  *(undefined4 *)(iVar2 + -8) = 0;
  *(undefined4 *)(iVar2 + -4) = 0;
  *(undefined4 *)(iVar2 + 8) = 0;
  fn_00496578(param_2,&local_48);
  if (*(char *)(param_2 + 4) == '\0') {
    (**(code **)(*param_1 + 0x60))(param_1,uVar4,uVar3,&local_48);
    fn_004ba7ac(param_3,0x8001);
    *param_4 = 1;
  }
  local_48 = &DAT_00854554;
  fn_00170f54(auStack_30);
  return;
}



void fn_004aaaa0(undefined4 *param_1)

{
  *param_1 = &DAT_008554e0;
  fn_0014f1bc(param_1[0xe]);
  fn_0014f1bc(param_1[0xb]);
  fn_00455018(param_1);
  return;
}



uint fn_004aa778(int param_1,undefined4 param_2,undefined1 *param_3,uint param_4,
                 undefined1 *param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint local_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  uint local_20;
  
  puVar4 = &local_30;
  iStack_2c = param_1;
  uStack_28 = param_2;
  puStack_24 = param_3;
  local_20 = param_4;
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 4));
  uVar9 = 0;
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x44) == '\0') {
      if (*(int *)(param_1 + 0x2c) == *(int *)(param_1 + 0x30)) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar9 = (**(code **)(**(int **)(param_1 + 0x24) + 8))
                            (*(int **)(param_1 + 0x24),param_3,local_20,param_1 + 0x44);
        }
        else {
          local_30 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x28);
          if (local_20 < local_30) {
            puVar4 = &local_20;
          }
          uVar9 = *puVar4;
          fn_00301a9c(param_3,*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x1c),uVar9);
          if (*(int *)(param_1 + 0x28) + uVar9 == *(int *)(param_1 + 0x20)) {
            *(undefined1 *)(param_1 + 0x44) = 1;
          }
        }
        uVar8 = *(int *)(param_1 + 0x28) + uVar9;
        *(uint *)(param_1 + 0x28) = uVar8;
        if (uVar8 <= *(uint *)(param_1 + 0x20)) {
          return uVar9;
        }
LAB_004aaa34:
        fn_00456510(iVar1,4);
        return 0;
      }
      local_30 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c);
      puVar4 = &local_30;
      if (local_20 < local_30) {
        puVar4 = &local_20;
      }
      uVar9 = *puVar4;
      puVar2 = *(undefined1 **)(param_1 + 0x2c);
      if (0 < (int)uVar9) {
        puVar3 = puVar2 + -1;
        puVar5 = param_3 + -1;
        if ((uVar9 & 1) != 0) {
          *param_3 = *puVar2;
          puVar3 = puVar2;
          puVar5 = param_3;
        }
        for (iVar1 = (int)uVar9 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
          puVar5[1] = puVar3[1];
          puVar3 = puVar3 + 2;
          puVar5 = puVar5 + 2;
          *puVar5 = *puVar3;
        }
      }
      puVar3 = *(undefined1 **)(param_1 + 0x2c);
      puVar2 = puVar3 + uVar9;
      if (puVar3 != *(undefined1 **)(param_1 + 0x30)) {
        uVar8 = (int)*(undefined1 **)(param_1 + 0x30) - (int)puVar2;
        if (0 < (int)uVar8) {
          puVar5 = puVar2 + -1;
          puVar6 = puVar3 + -1;
          if ((uVar8 & 1) != 0) {
            *puVar3 = *puVar2;
            puVar5 = puVar2;
            puVar6 = puVar3;
          }
          for (iVar1 = (int)uVar8 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
            puVar6[1] = puVar5[1];
            puVar5 = puVar5 + 2;
            puVar6 = puVar6 + 2;
            *puVar6 = *puVar5;
          }
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - ((int)puVar2 - (int)puVar3);
      }
    }
    else {
      puVar2 = *(undefined1 **)(param_1 + 0x38);
      local_30 = *(int *)(param_1 + 0x3c) - (int)puVar2;
      puVar4 = &local_30;
      if (local_20 < local_30) {
        puVar4 = &local_20;
      }
      uVar9 = *puVar4;
      if (0 < (int)uVar9) {
        puVar3 = puVar2 + -1;
        puVar5 = param_3 + -1;
        if ((uVar9 & 1) != 0) {
          *param_3 = *puVar2;
          puVar3 = puVar2;
          puVar5 = param_3;
        }
        for (iVar7 = (int)uVar9 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar5[1] = puVar3[1];
          puVar3 = puVar3 + 2;
          puVar5 = puVar5 + 2;
          *puVar5 = *puVar3;
        }
      }
      puVar3 = *(undefined1 **)(param_1 + 0x38);
      puVar2 = puVar3 + uVar9;
      if (puVar3 != *(undefined1 **)(param_1 + 0x3c)) {
        uVar8 = (int)*(undefined1 **)(param_1 + 0x3c) - (int)puVar2;
        if (0 < (int)uVar8) {
          puVar5 = puVar2 + -1;
          puVar6 = puVar3 + -1;
          if ((uVar8 & 1) != 0) {
            *puVar3 = *puVar2;
            puVar5 = puVar2;
            puVar6 = puVar3;
          }
          for (iVar7 = (int)uVar8 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar6[1] = puVar5[1];
            puVar5 = puVar5 + 2;
            puVar6 = puVar6 + 2;
            *puVar6 = *puVar5;
          }
        }
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - ((int)puVar2 - (int)puVar3);
      }
      if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 0x3c)) {
        if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x20)) goto LAB_004aaa34;
        *param_5 = 1;
      }
    }
  }
  return uVar9;
}


