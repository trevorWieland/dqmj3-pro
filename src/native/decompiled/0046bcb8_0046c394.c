#include "0046bcb8_0046c394.h"



void fn_0046c394(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  local_18 = param_4;
  fn_004815e4(*(undefined4 *)(param_1 + 0x18),param_2,0);
  local_18 = param_2;
  fn_004817d4(*(undefined4 *)(param_1 + 0x18),param_3,&local_18);
  return;
}



void fn_0046c37c(int param_1)

{
  fn_00101144(&DAT_008e9410,*(undefined4 *)(param_1 + 4),0x7f);
  return;
}



undefined4 fn_0046c180(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  code *pcVar2;
  undefined1 local_38 [8];
  undefined1 auStack_30 [16];
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    return 0;
  }
  if ((param_4 & 1) == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x50) = 0;
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x50) = 1;
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 0x4c))(auStack_30);
  local_38[0] = 0;
  iVar1 = fn_006d3b54(auStack_30,local_38);
  if (iVar1 != 0) {
    return 0;
  }
  if (DAT_008e9520 == 0) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0x20) + 0xc);
    if ((param_4 & 2) == 0) {
      iVar1 = (*pcVar2)(*(int **)(param_1 + 0x20),param_2,param_1 + 0x26,1,0,0);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))
                          (*(int **)(param_1 + 0x20),0,param_1 + 0x26,1,0,0);
        goto joined_r0x0046c2f8;
      }
    }
    else {
      iVar1 = (*pcVar2)();
joined_r0x0046c2f8:
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  else {
    pcVar2 = *(code **)(**(int **)(param_1 + 0x20) + 0xc);
    if ((param_4 & 2) == 0) {
      iVar1 = (*pcVar2)(*(int **)(param_1 + 0x20),param_2,param_1 + 0x26,0,2,0);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))
                          (*(int **)(param_1 + 0x20),0,param_1 + 0x26,0,2,0);
        goto joined_r0x0046c274;
      }
    }
    else {
      iVar1 = (*pcVar2)();
joined_r0x0046c274:
      if (iVar1 == 0) {
        return 0;
      }
    }
    *(undefined2 *)(*(int *)(param_1 + 0xc) + 0x98) = *(undefined2 *)(param_1 + 0x26);
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0xc) + 0x14);
  if ((param_4 & 2) == 0) {
    iVar1 = (*pcVar2)(*(int **)(param_1 + 0xc),param_3,0);
    if (iVar1 != 0) goto LAB_0046c358;
    iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(*(int **)(param_1 + 0xc),0);
  }
  else {
    iVar1 = (*pcVar2)();
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_0046c358:
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return 1;
}



int fn_0046bfa0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  int local_20;
  undefined1 auStack_1c [8];
  
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar7 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar7 + 8))(piVar7);
  fn_0046bcb8(param_1);
  (**(code **)(*piVar7 + 0xc))(piVar7);
  piVar7 = (int *)(param_1 + 4);
  *(undefined ***)(param_1 + 0x44) = &PTR_LAB_008533fc;
  *(undefined **)(param_1 + 0x48) = &DAT_0085319c;
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    if (*(int *)(param_1 + 0x18) == 0) {
      while (iVar2 != iVar1) {
        iVar3 = *(int *)(iVar2 + 0xc);
        if (*(int *)(iVar2 + 0xc) == 0) {
          iVar3 = *(int *)(iVar2 + 4);
          iVar6 = iVar2;
          if (iVar2 == *(int *)(iVar3 + 0xc)) {
            do {
              iVar6 = iVar3;
              iVar3 = *(int *)(iVar6 + 4);
            } while (iVar6 == *(int *)(iVar3 + 0xc));
          }
          if (*(int *)(iVar6 + 0xc) != iVar3) {
            iVar6 = iVar3;
          }
        }
        else {
          do {
            iVar6 = iVar3;
            iVar3 = *(int *)(iVar6 + 8);
          } while (*(int *)(iVar6 + 8) != 0);
        }
        local_20 = iVar2;
        fn_00767f88(auStack_1c,piVar7,&local_20);
        iVar2 = iVar6;
      }
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
      while (iVar1 != 0) {
        fn_007685e8(piVar7,*(undefined4 *)(iVar1 + 0xc));
        iVar2 = *(int *)(iVar1 + 8);
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 8);
        *(int *)(param_1 + 8) = iVar1;
        iVar1 = iVar2;
      }
      *(int *)(*(int *)(param_1 + 0x14) + 8) = *(int *)(param_1 + 0x14);
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      *(int *)(*(int *)(param_1 + 0x14) + 0xc) = *(int *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar1;
    piVar4 = (int *)*piVar7;
    while (piVar4 != (int *)0x0) {
      *piVar7 = *piVar4;
      if (piVar4[2] != 0) {
        pcVar5 = *(code **)(piVar4[2] + -8);
        if (pcVar5 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar5)();
        }
      }
      if (piVar4 != (int *)0x0) {
        if ((code *)piVar4[-2] == (code *)0x0) {
          fn_0030233c(piVar4 + -2);
        }
        else {
          (*(code *)piVar4[-2])();
        }
      }
      piVar4 = (int *)*piVar7;
    }
  }
  return param_1;
}



undefined4 fn_0046bde8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar2 = *(int *)(param_1 + 0x14);
  iVar1 = iVar2;
  if (*(int *)(iVar2 + 4) != 0) {
    iVar4 = *(int *)(iVar2 + 4);
    do {
      if ((short)(*(short *)(param_2 + 4) - *(short *)(iVar4 + 0x14)) < 1) {
        iVar5 = *(int *)(iVar4 + 8);
        iVar1 = iVar4;
      }
      else {
        iVar5 = *(int *)(iVar4 + 0xc);
      }
      iVar4 = iVar5;
    } while (iVar5 != 0);
  }
  if ((iVar1 != iVar2) && ((short)(*(short *)(iVar1 + 0x14) - *(short *)(param_2 + 4)) < 1)) {
    iVar2 = iVar1;
  }
  if (iVar2 == *(int *)(param_1 + 0x14)) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 0;
  }
  uVar6 = *(undefined4 *)(iVar2 + 0x18);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return uVar6;
}



void fn_0046bcb8(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  int local_20;
  undefined1 auStack_1c [4];
  
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  while (iVar1 != *(int *)(param_1 + 0x14)) {
    piVar6 = *(int **)(iVar1 + 0x18);
    puVar5 = (uint *)(piVar6 + 1);
    do {
      uVar3 = *puVar5 - 1;
      bVar8 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar8);
    *puVar5 = uVar3;
    bVar8 = uVar3 == 0;
    if (bVar8) {
      uVar3 = (uint)*(byte *)(piVar6 + 2);
    }
    if (bVar8 && uVar3 == 0) {
      *(undefined1 *)(piVar6 + 2) = 1;
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    if (*(int *)(iVar1 + 0xc) == 0) {
      iVar4 = *(int *)(iVar1 + 4);
      iVar7 = iVar1;
      if (iVar1 == *(int *)(iVar4 + 0xc)) {
        do {
          iVar7 = iVar4;
          iVar4 = *(int *)(iVar7 + 4);
        } while (iVar7 == *(int *)(iVar4 + 0xc));
      }
      if (*(int *)(iVar7 + 0xc) != iVar4) {
        iVar7 = iVar4;
      }
    }
    else {
      do {
        iVar7 = iVar4;
        iVar4 = *(int *)(iVar7 + 8);
      } while (*(int *)(iVar7 + 8) != 0);
    }
    local_20 = iVar1;
    fn_00767f88(auStack_1c,param_1 + 4,&local_20);
    iVar1 = iVar7;
  }
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_1 + 0x28);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return;
}


