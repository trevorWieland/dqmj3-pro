#include "00471c5c_00472008b.h"



undefined4 fn_00472008(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  uVar5 = *(uint *)(param_2[0x46] + 8);
  uVar6 = *(uint *)(param_2[0x46] + 0xc);
  local_38 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 4);
  while (iVar2 != 0) {
    if (uVar6 < *(uint *)(iVar2 + 0x14) ||
        *(uint *)(iVar2 + 0x14) - uVar6 < (uint)(uVar5 <= *(uint *)(iVar2 + 0x10))) {
      local_38 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  }
  local_34 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 4);
  while (local_3c = local_38, iVar2 != 0) {
    if (*(uint *)(iVar2 + 0x14) < uVar6 ||
        uVar6 - *(uint *)(iVar2 + 0x14) < (uint)(*(uint *)(iVar2 + 0x10) <= uVar5)) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      local_34 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  while( true ) {
    if (local_3c == local_34) {
      (**(code **)(*piVar3 + 0xc))(piVar3);
      return 0;
    }
    if (*(int **)(local_3c + 0x18) == param_2) break;
    iVar2 = *(int *)(local_3c + 0xc);
    if (*(int *)(local_3c + 0xc) == 0) {
      iVar2 = *(int *)(local_3c + 4);
      if (local_3c == *(int *)(iVar2 + 0xc)) {
        do {
          local_3c = iVar2;
          iVar2 = *(int *)(local_3c + 4);
        } while (local_3c == *(int *)(iVar2 + 0xc));
      }
      if (*(int *)(local_3c + 0xc) != iVar2) {
        local_3c = iVar2;
      }
    }
    else {
      do {
        local_3c = iVar2;
        iVar2 = *(int *)(local_3c + 8);
      } while (*(int *)(local_3c + 8) != 0);
    }
  }
  fn_00769544(auStack_2c,param_1 + 0x20,&local_3c);
  local_30 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  while (iVar2 != 0) {
    if (*(int **)(iVar2 + 0x10) < param_2) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      local_30 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  local_40 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  while (iVar1 = local_30, iVar2 != 0) {
    if (param_2 < *(int **)(iVar2 + 0x10)) {
      local_40 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  }
  while (iVar1 != local_40) {
    iVar2 = *(int *)(iVar1 + 0xc);
    if (*(int *)(iVar1 + 0xc) == 0) {
      iVar2 = *(int *)(iVar1 + 4);
      if (iVar1 == *(int *)(iVar2 + 0xc)) {
        do {
          iVar1 = iVar2;
          iVar2 = *(int *)(iVar1 + 4);
        } while (iVar1 == *(int *)(iVar2 + 0xc));
      }
      if (*(int *)(iVar1 + 0xc) != iVar2) {
        iVar1 = iVar2;
      }
    }
    else {
      do {
        iVar1 = iVar2;
        iVar2 = *(int *)(iVar1 + 8);
      } while (*(int *)(iVar1 + 8) != 0);
    }
  }
  fn_0076ea8c(auStack_28,param_1 + 4,&local_30,&local_40);
  puVar4 = (uint *)(param_2 + 1);
  do {
    uVar5 = *puVar4 - 1;
    bVar7 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar7);
  *puVar4 = uVar5;
  bVar7 = uVar5 == 0;
  if (bVar7) {
    uVar5 = (uint)*(byte *)(param_2 + 2);
  }
  if (bVar7 && uVar5 == 0) {
    *(undefined1 *)(param_2 + 2) = 1;
    (**(code **)(*param_2 + 4))(param_2);
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}



void fn_00471eb0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00853314;
  param_1[6] = &DAT_00853304;
  param_1[10] = 0;
  param_1[0xb] = 0;
  iVar1 = fn_004745d8(param_1 + 0xd,0x20000000);
  *(undefined1 *)(iVar1 + -0x18) = 0;
  *(undefined4 *)(iVar1 + -0x14) = 0;
  *(undefined4 *)(iVar1 + -0xc) = 0;
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined2 *)(iVar1 + -4) = 0xffff;
  *(undefined2 *)(iVar1 + -2) = 0xffff;
  *(undefined4 *)(iVar1 + -0x30) = 0xffffffff;
  *(undefined **)(iVar1 + 0x70) = &DAT_00852780;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined1 *)(iVar1 + -0x2c) = 0;
  *(undefined4 *)(iVar1 + -0x28) = 0;
  *(undefined4 *)(iVar1 + -0x24) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0x14;
  *(undefined4 *)(iVar1 + 0x30) = 1000;
  *(undefined4 *)(iVar1 + -0x20) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 10000;
  *(undefined4 *)(iVar1 + 0x44) = 0x3fa00000;
  *(undefined4 *)(iVar1 + 0x48) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x4c) = 0x32;
  *(undefined4 *)(iVar1 + 0x5c) = 2000;
  *(undefined4 *)(iVar1 + 0x58) = 2;
  *(undefined4 *)(iVar1 + 0x3c) = 0x20;
  *(undefined4 *)(iVar1 + 0x50) = 0x2ee;
  *(undefined4 *)(iVar1 + 0x54) = 0xfa;
  *(undefined1 *)(iVar1 + 0x61) = 1;
  *(undefined1 *)(iVar1 + 0x62) = 0;
  *(undefined1 *)(iVar1 + 99) = 1;
  *(undefined1 *)(iVar1 + 0x34) = 1;
  *(undefined1 *)(iVar1 + 100) = 0;
  *(undefined1 *)(iVar1 + 0x65) = 2;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0x80;
  *(undefined1 *)(iVar1 + 0x6c) = 0;
  return;
}


