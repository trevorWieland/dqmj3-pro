#include "0048a714_0048b0e4.h"



void fn_0048b0e4(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined4 uStack_18;
  
  *param_1 = &DAT_00853ac8;
  if (param_1[7] != 0) {
    iVar1 = fn_001249d0();
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    piVar2 = (int *)(iVar1 + 0x50);
    (**(code **)(*piVar2 + 8))();
    iVar1 = fn_001249d0();
    iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),param_1[7]);
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x10) == '\x01')) {
      uStack_20 = 0x80010004;
      puStack_1c = &DAT_007dba44;
      uStack_18 = 0x71;
      fn_00455e8c(iVar1,3,&uStack_20,1);
    }
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  if (*(char *)(param_1 + 10) != '\0') {
    if (DAT_008b637e != '\0') {
      fn_001775e8(DAT_008b63d8);
    }
    iVar1 = fn_00170de0(&DAT_008e769c,0xe);
    (**(code **)(DAT_008e76e8 + 8))(&DAT_008e76e8);
    *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -1;
    (**(code **)(DAT_008e76e8 + 0xc))(&DAT_008e76e8);
    *(undefined1 *)(param_1 + 10) = 0;
  }
  fn_00474f88(param_1);
  return;
}



void fn_0048afe0(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_30 [16];
  undefined4 *local_20;
  
  fn_004b4c44(auStack_30);
  iVar1 = fn_004b7748();
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  fn_00786550(auStack_30,iVar1 + 0x78);
  (**(code **)(*piVar2 + 0xc))(piVar2);
  for (puVar5 = (undefined4 *)*local_20; puVar5 != local_20; puVar5 = (undefined4 *)*puVar5) {
    uVar3 = fn_006d0810(puVar5 + 2,L"type",0);
    if (((uVar3 & 2) != 0) && (iVar1 = fn_006d0810(puVar5 + 2,L"RVCID",0), iVar1 != 0)) {
      iVar1 = fn_004b7748();
      if (iVar1 == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = *(int **)(iVar1 + 0x90);
      }
      iVar1 = (**(code **)(*piVar2 + 0x2c))();
      if (*(char *)(puVar5 + 0x1b) == '\0') {
        fn_0014ea80(puVar5 + 2);
      }
      iVar4 = puVar5[3];
      uVar6 = *(undefined4 *)(iVar4 + 8);
      uVar7 = *(undefined4 *)(iVar4 + 0xc);
      uVar8 = *(undefined4 *)(iVar4 + 0x10);
      uVar9 = *(undefined4 *)(iVar4 + 0x14);
      uVar10 = *(undefined4 *)(iVar4 + 0x18);
      uVar11 = *(undefined4 *)(iVar4 + 0x1c);
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar1 + 0x18) = uVar6;
      *(undefined4 *)(iVar1 + 0x1c) = uVar7;
      *(undefined4 *)(iVar1 + 0x20) = uVar8;
      *(undefined4 *)(iVar1 + 0x24) = uVar9;
      *(undefined4 *)(iVar1 + 0x28) = uVar10;
      *(undefined4 *)(iVar1 + 0x2c) = uVar11;
    }
  }
  fn_00786480(auStack_30);
  return;
}



void fn_0048aec8(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  piVar1 = *(int **)(param_1 + 0x28);
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
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 + 4);
    *(int *)(param_1 + 0x28) = param_2;
    do {
      bVar4 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar4);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



void fn_0048ab4c(void)

{
  int iVar1;
  
  iVar1 = fn_0048ab7c();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0048ab6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



undefined4 * fn_0048a988(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined *local_28;
  undefined4 local_24 [3];
  
  local_28 = &DAT_00855a94;
  fn_0015e6f0(local_24,L"CallContextRegister");
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &DAT_0085355c;
  param_1[3] = &DAT_00855a94;
  fn_0015e6f0(param_1 + 4,local_24[0]);
  *(undefined2 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  fn_00170f54(&local_28);
  piVar4 = param_1 + 8;
  *param_1 = &DAT_00853a60;
  *piVar4 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0x60;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x300);
  piVar1[2] = iVar2;
  *piVar1 = *piVar4;
  piVar1[1] = 0x20;
  *piVar4 = (int)piVar1;
  iVar2 = piVar1[2];
  param_1[10] = iVar2;
  param_1[0xb] = iVar2 + 0x300;
  puVar3 = (undefined1 *)param_1[10];
  param_1[10] = puVar3 + 0x18;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[0xc] = puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(param_1[0xc] + 8) = param_1[0xc];
  *(undefined4 *)(param_1[0xc] + 0xc) = param_1[0xc];
  piVar4 = param_1 + 0xf;
  *piVar4 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)((int)param_1 + 0x55) = 1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x300);
  piVar1[2] = iVar2;
  *piVar1 = *piVar4;
  piVar1[1] = 0x20;
  *piVar4 = (int)piVar1;
  iVar2 = piVar1[2];
  param_1[0x11] = iVar2;
  param_1[0x12] = iVar2 + 0x300;
  puVar3 = (undefined1 *)param_1[0x11];
  param_1[0x11] = puVar3 + 0x18;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[0x13] = puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(param_1[0x13] + 8) = param_1[0x13];
  *(undefined4 *)(param_1[0x13] + 0xc) = param_1[0x13];
  param_1[0x16] = 1;
  param_1[0x17] = 0;
  return param_1;
}



uint fn_0048a82c(int param_1,undefined4 param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  char *local_34;
  char *local_30;
  uint local_28;
  undefined4 local_24;
  
  uVar4 = *(uint *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = uVar4 + 1;
  if (uVar4 + 1 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 1;
  }
  local_24 = 0;
  pcVar3 = *(char **)(param_1 + 0x30);
  bVar5 = true;
  pcVar1 = pcVar3;
  pcVar2 = *(char **)(pcVar3 + 4);
  while (pcVar2 != (char *)0x0) {
    bVar5 = uVar4 < *(uint *)(pcVar2 + 0x10);
    pcVar1 = pcVar2;
    if (bVar5) {
      pcVar2 = *(char **)(pcVar2 + 8);
    }
    else {
      pcVar2 = *(char **)(pcVar2 + 0xc);
    }
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    local_30 = pcVar1;
    if (bVar5) {
      if (pcVar1 == *(char **)(pcVar3 + 8)) goto LAB_0048a94c;
      if ((*pcVar1 == '\0') && (*(char **)(*(int *)(pcVar1 + 4) + 4) == pcVar1)) {
        local_30 = *(char **)(pcVar1 + 0xc);
      }
      else {
        local_30 = *(char **)(pcVar1 + 8);
        if (local_30 == (char *)0x0) {
          local_30 = *(char **)(pcVar1 + 4);
          pcVar2 = local_30;
          if (pcVar1 == *(char **)(local_30 + 8)) {
            do {
              local_30 = *(char **)(pcVar2 + 4);
              bVar5 = pcVar2 == *(char **)(local_30 + 8);
              pcVar2 = local_30;
            } while (bVar5);
          }
        }
        else {
          for (pcVar1 = *(char **)(local_30 + 0xc); pcVar1 != (char *)0x0;
              pcVar1 = *(char **)(pcVar1 + 0xc)) {
            local_30 = pcVar1;
          }
        }
      }
    }
    if (uVar4 <= *(uint *)(local_30 + 0x10)) goto LAB_0048a974;
  }
LAB_0048a94c:
  local_28 = uVar4;
  fn_007776a8(&local_34);
  local_30 = local_34;
LAB_0048a974:
  *(undefined4 *)(local_30 + 0x14) = param_2;
  return uVar4;
}



void fn_0048a714(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 unaff_r5;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *local_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [20];
  
  iVar2 = fn_0015ece0(0x50);
  if (iVar2 == 0) {
    unaff_r5 = 0;
  }
  uVar5 = 0;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x5c) = unaff_r5;
  }
  else {
    local_30 = &DAT_00855a94;
    fn_0015e6f0(auStack_2c,L"CallContextRegister::CheckExpiredCalls");
    puVar6 = &DAT_0048a4b0;
    uVar7 = 0;
    puVar3 = (undefined4 *)fn_004b3044(iVar2,0,auStack_28);
    *puVar3 = &DAT_008529f8;
    puVar3[0xf] = 0;
    uVar8 = puVar3[9];
    fn_004b301c(puVar3,1);
    puVar3[9] = uVar8;
    *puVar3 = &DAT_00852d7c;
    puVar3[0x12] = param_1;
    puVar3[0x10] = puVar6;
    puVar3[0x11] = uVar7;
    puVar3[0x13] = 0;
    *(undefined4 **)(param_1 + 0x5c) = puVar3;
    fn_00170f54(&local_30);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = DAT_008e92f4;
  piVar4 = (int *)(*(int *)(param_1 + 0x5c) + 4);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = *piVar4 + 1;
  iVar2 = fn_001249d0();
  if (iVar2 != 0) {
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
  }
  fn_004bdba4(uVar5,*(undefined4 *)(param_1 + 0x5c),0);
  return;
}


