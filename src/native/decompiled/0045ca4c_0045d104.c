#include "0045ca4c_0045d104.h"



undefined4 fn_0045d104(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 0xb0) != -2 && *(int *)(param_2 + 0xb0) != -3) {
    iVar2 = fn_0011c134(DAT_008b6510 - *(uint *)(param_1 + 0x28),
                         DAT_008b6514 -
                         (*(int *)(param_1 + 0x2c) +
                         (uint)(DAT_008b6510 < *(uint *)(param_1 + 0x28))),1000,0);
    iVar2 = iVar2 + *(int *)(param_1 + 0x30);
    iVar3 = *(int *)(param_2 + 0xb8);
    iVar4 = iVar2 + -0x96;
    if (((iVar3 == iVar4) || (0 < iVar3 - iVar4)) &&
       ((iVar2 = iVar2 + 0x96, iVar2 == iVar3 || (0 < iVar2 - iVar3)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      return 0;
    }
  }
  return 1;
}



void fn_0045cfec(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,uint param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *local_88 [22];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  
  local_88[0] = &DAT_0085748c;
  local_20 = '\0';
  fn_00160094(local_88);
  if (local_20 == '\0') {
    fn_001600c4(local_88,param_3,param_4);
  }
  uVar2 = 0x1c;
  if (local_20 == '\0') {
    fn_001600c4(local_88,param_5);
  }
  if (param_6 != 0) {
    uVar2 = param_7;
  }
  if (param_6 != 0 && uVar2 != 0) {
    if (param_2 == 0) {
      puVar1 = &DAT_007d9c38;
      if (uVar2 < 0x32) {
        puVar1 = &param_7;
      }
      if (local_20 == '\0') {
        fn_001600c4(local_88,param_6,*puVar1);
      }
    }
    else if (local_20 == '\0') {
      fn_001600c4(local_88,param_6);
    }
  }
  if (local_20 == '\0') {
    fn_00160190(local_88,&local_30);
  }
  param_1[4] = 0x10;
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  return;
}



undefined4 fn_0045ceac(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined *local_28;
  undefined1 local_24;
  int local_20;
  uint local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = *(int *)(param_2 + 0xd8);
  if (*(uint *)(local_20 + 0x10) < 0xc) {
    return 0;
  }
  piVar3 = (int *)(local_20 + 4);
  local_28 = &DAT_00852740;
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = *piVar3 + 1;
  local_24 = 0;
  local_1c = 0;
  iVar2 = fn_0074a4c8(&local_28,local_18);
  if (iVar2 != 0) {
    *(undefined1 *)(param_2 + 0xbc) = local_18[0];
    iVar2 = fn_0074a4c8(&local_28,local_14);
    if (iVar2 != 0) {
      *(undefined1 *)(param_2 + 0xbd) = local_14[0];
      if ((local_1c + 2 <= *(uint *)(local_20 + 0x10)) &&
         (local_1c = local_1c + 2, iVar2 = fn_0074a528(&local_28,&local_10), iVar2 != 0)) {
        *(undefined4 *)(param_2 + 0xc0) = local_10;
        iVar2 = fn_0074a528(&local_28,&local_c);
        if (iVar2 != 0) {
          *(undefined4 *)(param_2 + 0xc4) = local_c;
          iVar2 = *(int *)(param_2 + 0xd8);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x18) + -0xc + *(int *)(iVar2 + 0x10);
          *(undefined4 *)(iVar2 + 0x18) = 0xc;
          fn_00454d0c(&local_28);
          return 1;
        }
      }
    }
  }
  fn_00454d0c(&local_28);
  return 0;
}



undefined4 * fn_0045ce00(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00853920;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = fn_0015ece0(0x100);
  param_1[2] = iVar1;
  param_1[3] = iVar1;
  param_1[4] = iVar1 + 0x100;
  *param_1 = &DAT_00852bec;
  return param_1;
}



void fn_0045cd80(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[3];
  *param_1 = &DAT_00852bdc;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  fn_004b3bb8();
  iVar1 = fn_004b446c(param_1 + 10);
  iVar1 = fn_00474f84(iVar1 + -0x18);
  fn_0047f3e8(iVar1 + -0x10);
  fn_00455018();
  return;
}



void fn_0045cd48(void)

{
  fn_001013b0();
  return;
}



int fn_0045cbd8(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 in_r3;
  int iVar7;
  
  puVar1 = (undefined4 *)fn_0014f1e0();
  *puVar1 = &DAT_00852bdc;
  iVar2 = fn_00477130(puVar1 + 4,0xc);
  iVar3 = fn_004b43d0(iVar2 + 0x18);
  iVar7 = iVar3 + -0x28;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  *(undefined4 *)(iVar3 + 0x34) = 0;
  fn_00474e4c(iVar3 + -0x18,iVar7,0,0,in_r3);
  fn_004b3b48();
  puVar1 = (undefined4 *)fn_0015ecdc(0x3c);
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_00853710;
    iVar2 = fn_004b45bc(puVar1 + 1);
    iVar2 = fn_004b45bc(iVar2 + 0x1c);
    iVar2 = iVar2 + -0x20;
  }
  *(int *)(iVar3 + -0x1c) = iVar2;
  iVar2 = fn_0015ecdc(0xa0);
  puVar1 = (undefined4 *)0x0;
  if (iVar2 != 0) {
    fn_00301f50(iVar2,0xa0);
    puVar1 = (undefined4 *)fn_004a1530(iVar2,0);
    piVar4 = puVar1 + 0x21;
    *puVar1 = &DAT_00855500;
    *piVar4 = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    *(undefined1 *)(puVar1 + 0x27) = 0;
    *(undefined1 *)((int)puVar1 + 0x9d) = 0;
    puVar1[0x24] = 0;
    puVar1[0x23] = 0;
    puVar1[0x22] = 0;
    piVar5 = (int *)fn_0015ece0(0xc);
    iVar2 = fn_0015ece0(0x280);
    piVar5[2] = iVar2;
    *piVar5 = *piVar4;
    piVar5[1] = 0x20;
    *piVar4 = (int)piVar5;
    puVar6 = (undefined1 *)piVar5[2];
    puVar1[0x23] = puVar6;
    puVar1[0x24] = puVar6 + 0x280;
    puVar1[0x23] = puVar6 + 0x14;
    *(undefined4 *)(puVar6 + 8) = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    *puVar6 = 0;
    puVar1[0x25] = puVar6;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)(puVar1[0x25] + 8) = puVar1[0x25];
    *(undefined4 *)(puVar1[0x25] + 0xc) = puVar1[0x25];
  }
  *(undefined4 **)(iVar3 + -4) = puVar1;
  fn_004bab84(puVar1,8);
  fn_0045cb0c(iVar7,0xe,*(undefined4 *)(iVar3 + -4));
  return iVar7;
}



undefined4 fn_0045cb0c(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint local_1c;
  undefined4 uStack_18;
  
  local_1c = param_2;
  uStack_18 = param_3;
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = iVar1;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar4 = *(int *)(iVar1 + 4);
    do {
      if ((uint)*(ushort *)(iVar4 + 0x10) < (local_1c & 0xffff)) {
        iVar5 = *(int *)(iVar4 + 0xc);
      }
      else {
        iVar5 = *(int *)(iVar4 + 8);
        iVar2 = iVar4;
      }
      iVar4 = iVar5;
    } while (iVar5 != 0);
  }
  if ((iVar2 == iVar1) || ((local_1c & 0xffff) < (uint)*(ushort *)(iVar2 + 0x10))) {
    iVar2 = iVar1;
  }
  if (iVar2 == iVar1) {
    puVar6 = (undefined4 *)fn_007861a0(param_1 + 0x28,&local_1c);
    *puVar6 = param_3;
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 1;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 0;
}



undefined4 fn_0045ca4c(int param_1,ushort param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar4 = *(int *)(param_1 + 0x38);
  iVar2 = iVar4;
  iVar1 = *(int *)(iVar4 + 4);
  while (iVar1 != 0) {
    if (*(ushort *)(iVar1 + 0x10) < param_2) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  if ((iVar2 == iVar4) || (param_2 < *(ushort *)(iVar2 + 0x10))) {
    iVar2 = iVar4;
  }
  else {
  }
  if (iVar2 == iVar4) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 0;
  }
  uVar5 = *(undefined4 *)(iVar2 + 0x14);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return uVar5;
}


