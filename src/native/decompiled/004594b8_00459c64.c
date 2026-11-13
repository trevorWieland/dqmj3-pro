#include "004594b8_00459c64.h"



void fn_00459c64(int *param_1)

{
  int local_18;
  int local_14 [2];
  
  local_18 = param_1[2];
  while (local_18 != param_1[4]) {
    (**(code **)(*param_1 + 0x14))(local_14,param_1,&local_18);
    local_18 = local_14[0];
  }
  return;
}



void fn_00459ba0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_14;
  int local_10;
  int iStack_c;
  
  if (((*(int *)(param_2 + 0x10) == 0) && (*(int *)(param_2 + 0xc) == 0)) &&
     (*(int *)(param_1 + 8) != param_2)) {
    piVar2 = (int *)(param_2 + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + 1;
    if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x10)) {
      *(int *)(param_1 + 8) = param_2;
      *(int *)(param_1 + 0xc) = param_2;
    }
    else {
      *(int *)(param_2 + 0xc) = *(int *)(param_1 + 8);
      *(int *)(*(int *)(param_1 + 8) + 0x10) = param_2;
      *(int *)(param_1 + 8) = param_2;
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if (param_3 != 0) {
      iStack_14 = param_1;
      local_10 = param_2;
      iStack_c = param_3;
      fn_0013d0fc(&local_20);
      *(undefined4 *)(param_2 + 0x108) = local_20;
      *(undefined4 *)(param_2 + 0x10c) = uStack_1c;
    }
  }
  return;
}



void fn_004597b8(void)

{
  int iVar1;
  
  iVar1 = fn_004597e8();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004597d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



int fn_004597e8(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int local_28;
  undefined1 auStack_24 [8];
  
  *param_1 = &PTR_FUN_00852944;
  iVar2 = fn_001249d0();
  piVar3 = (int *)(iVar2 + 0x4c);
  (**(code **)(*piVar3 + 8))();
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  (**(code **)(*piVar3 + 0xc))(piVar3);
  if (*(char *)(param_1 + 4) != '\0') {
    fn_00457a2c(param_1);
  }
  *(undefined1 *)(param_1 + 0x24) = 1;
  iVar2 = fn_001249d0();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  if (DAT_008b637c == '\0') {
    fn_00170704(param_1 + 0x40);
  }
  iVar2 = *(int *)(param_1[0x19] + 8);
  if (iVar2 != param_1[0x19]) {
    do {
      if (*(int **)(iVar2 + 0x34) != (int *)0x0) {
        (**(code **)(**(int **)(iVar2 + 0x34) + 4))();
      }
      iVar10 = *(int *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar10 = *(int *)(iVar2 + 4);
        if (iVar2 == *(int *)(iVar10 + 0xc)) {
          do {
            iVar2 = iVar10;
            iVar10 = *(int *)(iVar2 + 4);
          } while (iVar2 == *(int *)(iVar10 + 0xc));
        }
        if (*(int *)(iVar2 + 0xc) != iVar10) {
          iVar2 = iVar10;
        }
      }
      else {
        do {
          iVar2 = iVar10;
          iVar10 = *(int *)(iVar2 + 8);
        } while (*(int *)(iVar2 + 8) != 0);
      }
    } while (iVar2 != param_1[0x19]);
  }
  if (DAT_008b637c == '\0') {
    fn_001707b4(param_1 + 0x40);
  }
  fn_00458500(param_1,1);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  param_1[0x3e] = &PTR_LAB_008533fc;
  param_1[0x3f] = &DAT_0085319c;
  if (param_1[0x39] != 0) {
    pcVar8 = *(code **)(param_1[0x39] + -8);
    if (pcVar8 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar8)();
    }
  }
  iVar2 = fn_004be680(param_1 + 0x32);
  iVar2 = fn_004be680(iVar2 + -0x1c);
  if (*(int **)(iVar2 + -0xc) != (int *)0x0) {
    (**(code **)(**(int **)(iVar2 + -0xc) + 4))();
  }
  iVar2 = fn_00787250(iVar2 + -0x3c);
  iVar10 = *(int *)(iVar2 + -0xc);
  piVar3 = (int *)(iVar2 + -0x1c);
  if (iVar10 != 0) {
    iVar4 = *(int *)(iVar10 + 8);
    if (*(int *)(iVar2 + -8) == 0) {
      while (iVar4 != iVar10) {
        iVar5 = *(int *)(iVar4 + 0xc);
        if (*(int *)(iVar4 + 0xc) == 0) {
          iVar5 = *(int *)(iVar4 + 4);
          iVar9 = iVar4;
          if (iVar4 == *(int *)(iVar5 + 0xc)) {
            do {
              iVar9 = iVar5;
              iVar5 = *(int *)(iVar9 + 4);
            } while (iVar9 == *(int *)(iVar5 + 0xc));
          }
          if (*(int *)(iVar9 + 0xc) != iVar5) {
            iVar9 = iVar5;
          }
        }
        else {
          do {
            iVar9 = iVar5;
            iVar5 = *(int *)(iVar9 + 8);
          } while (*(int *)(iVar9 + 8) != 0);
        }
        local_28 = iVar4;
        fn_007669a4(auStack_24,piVar3,&local_28);
        iVar4 = iVar9;
      }
    }
    else {
      iVar10 = *(int *)(iVar10 + 4);
      while (iVar10 != 0) {
        fn_00767004(piVar3,*(undefined4 *)(iVar10 + 0xc));
        iVar4 = *(int *)(iVar10 + 8);
        *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(iVar2 + -0x18);
        *(int *)(iVar2 + -0x18) = iVar10;
        iVar10 = iVar4;
      }
      *(int *)(*(int *)(iVar2 + -0xc) + 8) = *(int *)(iVar2 + -0xc);
      *(undefined4 *)(*(int *)(iVar2 + -0xc) + 4) = 0;
      *(int *)(*(int *)(iVar2 + -0xc) + 0xc) = *(int *)(iVar2 + -0xc);
      *(undefined4 *)(iVar2 + -8) = 0;
    }
    iVar10 = *(int *)(iVar2 + -0xc);
    *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(iVar2 + -0x18);
    *(int *)(iVar2 + -0x18) = iVar10;
    piVar6 = (int *)*piVar3;
    while (piVar6 != (int *)0x0) {
      *piVar3 = *piVar6;
      if (piVar6[2] != 0) {
        pcVar8 = *(code **)(piVar6[2] + -8);
        if (pcVar8 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar8)();
        }
      }
      if (piVar6 != (int *)0x0) {
        if ((code *)piVar6[-2] == (code *)0x0) {
          fn_0030233c(piVar6 + -2);
        }
        else {
          (*(code *)piVar6[-2])();
        }
      }
      piVar6 = (int *)*piVar3;
    }
  }
  iVar2 = fn_00472f44(iVar2 + -0x5c);
  *(undefined ***)(iVar2 + -0x14) = &PTR_FUN_00854940;
  piVar3 = (int *)fn_004b7748();
  uVar7 = 0xffffffff;
  piVar6 = piVar3 + 1;
  do {
    iVar10 = *piVar6 + -1;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar10;
  if (iVar10 == 0) {
    uVar7 = (uint)*(byte *)(piVar3 + 2);
  }
  if (iVar10 == 0 && uVar7 == 0) {
    *(undefined1 *)(piVar3 + 2) = 1;
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  return iVar2 + -0x14;
}



int fn_004594b8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  short local_28 [4];
  
  *param_1 = &DAT_00855a78;
  *(char *)(param_1 + 1) = (char)param_2;
  iVar3 = fn_004b616c(param_2);
  *(uint *)(iVar3 + 4) = (uint)*(byte *)(param_1 + 1);
  *param_1 = &PTR_FUN_00854940;
  iVar3 = fn_004b7748();
  if (iVar3 == 0) {
    iVar3 = fn_0015ece0(0x3e4);
    if (iVar3 != 0) {
      fn_004b7d34();
    }
  }
  else {
    iVar3 = fn_004b7748();
    piVar4 = (int *)(iVar3 + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = *piVar4 + 1;
  }
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_00852944;
  param_1[3] = param_3;
  iVar3 = fn_00472e20(param_1 + 5);
  *(undefined4 *)(iVar3 + 0x40) = 0;
  *(undefined4 *)(iVar3 + 0x50) = 0;
  *(undefined4 *)(iVar3 + 0x54) = 0;
  *(undefined1 *)(iVar3 + 0x58) = 0;
  *(char *)(iVar3 + 0x59) = (char)iVar3;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  *(undefined4 *)(iVar3 + 0x48) = 0;
  *(undefined4 *)(iVar3 + 0x44) = 0;
  piVar4 = (int *)fn_0015ece0(0xc);
  iVar5 = fn_0015ece0(0x700);
  piVar4[2] = iVar5;
  *piVar4 = *(int *)(iVar3 + 0x40);
  piVar4[1] = 0x20;
  *(int *)(iVar3 + 0x40) = (int)piVar4;
  iVar5 = piVar4[2];
  *(int *)(iVar3 + 0x48) = iVar5;
  *(int *)(iVar3 + 0x4c) = iVar5 + 0x700;
  puVar6 = *(undefined1 **)(iVar3 + 0x48);
  *(undefined1 **)(iVar3 + 0x48) = puVar6 + 0x38;
  *(undefined4 *)(puVar6 + 8) = 0;
  *(undefined4 *)(puVar6 + 0xc) = 0;
  *puVar6 = 0;
  *(undefined1 **)(iVar3 + 0x50) = puVar6;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(int *)(*(int *)(iVar3 + 0x50) + 8) = *(int *)(iVar3 + 0x50);
  *(int *)(*(int *)(iVar3 + 0x50) + 0xc) = *(int *)(iVar3 + 0x50);
  piVar9 = (int *)(iVar3 + 0x5c);
  *piVar9 = 0;
  *(undefined4 *)(iVar3 + 0x60) = 0;
  *(undefined4 *)(iVar3 + 100) = 0;
  *(undefined4 *)(iVar3 + 0x68) = 0;
  *(undefined4 *)(iVar3 + 0x6c) = 0;
  *(undefined4 *)(iVar3 + 0x70) = 0;
  piVar4 = (int *)fn_0015ece0(0xc);
  iVar5 = fn_0015ece0(0xc);
  piVar4[2] = iVar5;
  *piVar4 = *piVar9;
  piVar4[1] = 1;
  *piVar9 = (int)piVar4;
  iVar5 = piVar4[2];
  *(int *)(iVar3 + 100) = iVar5;
  *(int *)(iVar3 + 0x68) = iVar5 + 0xc;
  *(int *)(iVar3 + 0x6c) = iVar5;
  *(int *)(iVar3 + 100) = iVar5 + 0xc;
  *(int *)iVar5 = iVar5;
  *(int *)(*(int *)(iVar3 + 0x6c) + 4) = *(int *)(iVar3 + 0x6c);
  *(undefined4 *)(iVar3 + 0x74) = 0;
  *(undefined4 *)(iVar3 + 0x78) = 0;
  iVar3 = fn_004a6be4(iVar3 + 0x88);
  *(undefined **)(iVar3 + 8) = &DAT_00853688;
  *(undefined2 *)(iVar3 + 0xc) = 0;
  iVar3 = fn_004be5e0(iVar3 + 0x10);
  iVar3 = fn_004be5e0(iVar3 + 0x1c);
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  iVar3 = fn_004745d8(iVar3 + 0x30,0x4000);
  *(undefined1 *)(iVar3 + -0x68) = 0;
  *(undefined4 *)(iVar3 + -0x70) = 0;
  *(undefined4 *)(iVar3 + -0x6c) = 0;
  uVar8 = 0;
  if (DAT_008b637e != '\0') {
    puVar7 = (undefined4 *)fn_001775e8(DAT_008b63d8);
    uVar8 = *puVar7;
  }
  *(undefined4 *)(iVar3 + -100) = uVar8;
  *(undefined4 *)(iVar3 + -0xec) = param_3;
  *(undefined2 *)(iVar3 + -0x60) = 0;
  fn_0013d0fc(local_28);
  sVar2 = fn_004ba724(0xffff);
  *(short *)(iVar3 + -0x50) = sVar2 + local_28[0];
  iVar5 = fn_001249d0();
  piVar4 = (int *)(iVar5 + 0x4c);
  (**(code **)(*(int *)(iVar5 + 0x4c) + 8))(piVar4);
  *(code **)(iVar5 + 0x40) = fn_001c129c;
  *(int *)(iVar5 + 0x44) = iVar3 + -0xf8;
  (**(code **)(*piVar4 + 0xc))(piVar4);
  iVar5 = fn_004b7748();
  *(int *)(iVar3 + -8) = iVar5 + 0x104;
  switch(param_2) {
  default:
    *(undefined1 *)(iVar3 + -4) = 0;
    break;
  case 1:
  case 2:
  case 4:
  case 6:
  case 9:
  case 10:
    *(undefined1 *)(iVar3 + -4) = DAT_008b639d;
  }
  return iVar3 + -0xf8;
}


