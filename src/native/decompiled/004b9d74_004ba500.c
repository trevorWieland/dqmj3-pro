#include "004b9d74_004ba500.h"



void fn_004ba500(undefined4 *param_1)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  bool bVar4;
  
  piVar3 = (int *)param_1[0x36];
  *param_1 = &DAT_00855a38;
  if (piVar3 != (int *)0x0) {
    puVar2 = (uint *)(piVar3 + 1);
    do {
      uVar1 = *puVar2 - 1;
      bVar4 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar4);
    *puVar2 = uVar1;
    bVar4 = uVar1 == 0;
    if (bVar4) {
      uVar1 = (uint)*(byte *)(piVar3 + 2);
    }
    if (bVar4 && uVar1 == 0) {
      *(undefined1 *)(piVar3 + 2) = 1;
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  *param_1 = &DAT_00853740;
  param_1[1] = 0;
  param_1[0x24] = &DAT_0085316c;
  if ((code *)param_1[-2] == (code *)0x0) {
    fn_0030233c(param_1 + -2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004ba58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[-2])();
  return;
}



void fn_004ba13c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_38 [36];
  
  fn_004b54dc(auStack_38);
  uVar1 = fn_002febd8(param_3);
  fn_0015ef58(auStack_38,param_3,uVar1,0xffffffff);
  fn_004ba19c(param_1,param_2,auStack_38,param_4);
  fn_0014f480(auStack_38);
  return;
}



void fn_004ba19c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  bool bVar8;
  char *local_94;
  undefined *local_90;
  undefined4 local_8c;
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 auStack_74 [12];
  char *local_68;
  undefined1 local_64;
  undefined1 auStack_60 [8];
  char *local_58;
  undefined1 local_54;
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar1 = (int *)(param_1 + 0x3c);
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  (**(code **)(*piVar1 + 8))();
  uVar2 = fn_004b54dc(auStack_60);
  local_8c = local_30;
  iVar3 = fn_004b5404(local_88,uVar2);
  pcVar4 = *(char **)(param_1 + 0x14);
  bVar8 = true;
  pcVar5 = pcVar4;
  if (*(char **)(pcVar4 + 4) != (char *)0x0) {
    pcVar6 = *(char **)(pcVar4 + 4);
    do {
      pcVar5 = pcVar6;
      bVar8 = *(uint *)(iVar3 + -4) < *(uint *)(pcVar5 + 0x10);
      if (bVar8) {
        pcVar6 = *(char **)(pcVar5 + 8);
      }
      else {
        pcVar6 = *(char **)(pcVar5 + 0xc);
      }
    } while (pcVar6 != (char *)0x0);
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    local_68 = pcVar5;
    if (bVar8) {
      if (pcVar5 != *(char **)(pcVar4 + 8)) {
        if ((*pcVar5 == '\0') && (*(char **)(*(int *)(pcVar5 + 4) + 4) == pcVar5)) {
          local_68 = *(char **)(pcVar5 + 0xc);
        }
        else {
          local_68 = *(char **)(pcVar5 + 8);
          if (local_68 == (char *)0x0) {
            local_68 = *(char **)(pcVar5 + 4);
            pcVar4 = local_68;
            if (pcVar5 == *(char **)(local_68 + 8)) {
              do {
                local_68 = *(char **)(pcVar4 + 4);
                bVar8 = pcVar4 == *(char **)(local_68 + 8);
                pcVar4 = local_68;
              } while (bVar8);
            }
          }
          else {
            for (pcVar5 = *(char **)(local_68 + 0xc); pcVar5 != (char *)0x0;
                pcVar5 = *(char **)(pcVar5 + 0xc)) {
              local_68 = pcVar5;
            }
          }
        }
        goto LAB_004ba2f4;
      }
      fn_00776c90(&local_94);
      local_68 = local_94;
      local_64 = 1;
    }
    else {
LAB_004ba2f4:
      if (*(uint *)(local_68 + 0x10) < *(uint *)(iVar3 + -4)) goto LAB_004ba30c;
      local_64 = 0;
    }
  }
  else {
LAB_004ba30c:
    fn_00776c90(&local_94);
    local_68 = local_94;
    local_64 = 1;
  }
  pcVar5 = local_68;
  fn_0014f480(local_88);
  fn_0014f480(auStack_60);
  fn_004b5540(pcVar5 + 0x14,param_3);
  local_8c = 1;
  local_80 = 0;
  local_90 = &DAT_008558c4;
  local_88[0] = 0;
  local_84 = 0;
  local_7c = 0;
  local_78 = local_30;
  iVar3 = fn_004b31c4(auStack_74,&local_90);
  puVar7 = (uint *)(iVar3 + -4);
  pcVar4 = *(char **)(param_1 + 0x30);
  bVar8 = true;
  pcVar5 = pcVar4;
  if (*(char **)(pcVar4 + 4) != (char *)0x0) {
    pcVar6 = *(char **)(pcVar4 + 4);
    do {
      pcVar5 = pcVar6;
      bVar8 = *puVar7 < *(uint *)(pcVar5 + 0x10);
      if (bVar8) {
        pcVar6 = *(char **)(pcVar5 + 8);
      }
      else {
        pcVar6 = *(char **)(pcVar5 + 0xc);
      }
    } while (pcVar6 != (char *)0x0);
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    local_58 = pcVar5;
    if (bVar8) {
      if (pcVar5 == *(char **)(pcVar4 + 8)) {
        fn_00775ee4(&local_94,param_1 + 0x20,0,pcVar5,puVar7);
        local_58 = local_94;
        local_54 = 1;
        goto LAB_004ba4c0;
      }
      if ((*pcVar5 == '\0') && (*(char **)(*(int *)(pcVar5 + 4) + 4) == pcVar5)) {
        local_58 = *(char **)(pcVar5 + 0xc);
      }
      else {
        local_58 = *(char **)(pcVar5 + 8);
        if (local_58 == (char *)0x0) {
          local_58 = *(char **)(pcVar5 + 4);
          pcVar4 = local_58;
          if (pcVar5 == *(char **)(local_58 + 8)) {
            do {
              local_58 = *(char **)(pcVar4 + 4);
              bVar8 = pcVar4 == *(char **)(local_58 + 8);
              pcVar4 = local_58;
            } while (bVar8);
          }
        }
        else {
          for (pcVar4 = *(char **)(local_58 + 0xc); pcVar4 != (char *)0x0;
              pcVar4 = *(char **)(pcVar4 + 0xc)) {
            local_58 = pcVar4;
          }
        }
      }
    }
    if (*puVar7 <= *(uint *)(local_58 + 0x10)) {
      local_54 = 0;
      goto LAB_004ba4c0;
    }
  }
  fn_00775ee4(&local_94,param_1 + 0x20,0,pcVar5,puVar7);
  local_58 = local_94;
  local_54 = 1;
LAB_004ba4c0:
  pcVar5 = local_58;
  fn_0014f2b0(auStack_74);
  fn_0014f2b0(&local_90);
  fn_0015ed58(pcVar5 + 0x14,param_4);
                    /* WARNING: Could not recover jumptable at 0x004ba4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



undefined4 fn_004b9f98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_38 [36];
  
  fn_004b54dc(auStack_38);
  uVar1 = fn_002febd8(param_3);
  fn_0015ef58(auStack_38,param_3,uVar1,0xffffffff);
  uVar1 = fn_004ba000(param_1,param_2,auStack_38,param_4);
  fn_0014f480(auStack_38);
  return uVar1;
}



undefined4 fn_004ba000(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(param_1 + 0x3c);
  (**(code **)(*piVar1 + 8))();
  iVar4 = *(int *)(param_1 + 0x14);
  iVar3 = iVar4;
  iVar2 = *(int *)(iVar4 + 4);
  while (iVar2 != 0) {
    if (*(uint *)(iVar2 + 0x10) < param_2) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((iVar3 == iVar4) || (param_2 < *(uint *)(iVar3 + 0x10))) {
    iVar3 = iVar4;
  }
  if (((iVar3 == iVar4) || (*(int *)(iVar3 + 0x24) != *(int *)(param_3 + 0x10))) ||
     (iVar3 = fn_001010c8(*(int *)(param_3 + 0xc) + *(int *)(param_3 + 0x18),
                           *(int *)(iVar3 + 0x20) + *(int *)(iVar3 + 0x2c)), iVar3 != 0)) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x30);
  iVar3 = iVar4;
  iVar2 = *(int *)(iVar4 + 4);
  while (iVar2 != 0) {
    if (*(uint *)(iVar2 + 0x10) < param_2) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((iVar3 == iVar4) || (param_2 < *(uint *)(iVar3 + 0x10))) {
    iVar3 = iVar4;
  }
  fn_0015ed58(param_4,iVar3 + 0x14);
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return 1;
}



void fn_004b9ef8(void)

{
  fn_004b9f08();
  fn_00455018();
  return;
}



void fn_004b9e68(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0xe0));
  fn_004b8d90(*(int *)(param_1 + 0xe8) + 0x130,param_2);
  if (iVar1 != 0) {
    iVar2 = fn_006d3b8c(param_2);
    local_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    if (iVar2 == 0) {
      fn_00456044(iVar1,&local_20);
    }
    else {
      fn_00456074();
    }
  }
  if (*(char *)(param_1 + 0x22) == '\x05') {
    return;
  }
  fn_004b2f04(param_1);
  return;
}



void fn_004b9d88(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *param_1 = &DAT_00855bcc;
  iVar1 = fn_0013cd7c(param_1 + 2,param_3);
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined1 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + -4) = param_2;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined1 *)(iVar1 + 0x7c) = 0;
  return;
}



void fn_004b9d74(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b9d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 0x40))(*(int **)(param_1 + 4),param_1);
  return;
}


