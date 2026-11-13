#include "006d0c14_006d12e8.h"



undefined4 fn_006d12e8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((((*(int *)(param_1 + 8) == 0) || (*(char *)(param_1 + 0xc) != '\0')) ||
      (piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x2c), piVar1 == (int *)0x0)) ||
     (iVar2 = (**(code **)(*piVar1 + 0x28))(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 fn_006d12d8(void)

{
  int iVar1;
  
  iVar1 = fn_0045c8f4();
  return *(undefined4 *)(iVar1 + 0xc);
}



undefined4 fn_006d12a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(char *)(param_1 + 0xc) != '\0') || (iVar1 = *(int *)(param_1 + 8), iVar1 == 0)) ||
     (param_2 == 0)) {
    return 0;
  }
  if (param_2 == 10) {
    uVar2 = *(undefined4 *)(iVar1 + 0x28);
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x2c);
  }
  return uVar2;
}



undefined4 fn_006d1204(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  if (*(int *)(param_1 + 8) == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 0;
  }
  if (((*(char *)(param_1 + 0xc) == '\0') &&
      (piVar4 = *(int **)(*(int *)(param_1 + 8) + 0x2c), piVar4 != (int *)0x0)) &&
     (iVar2 = (**(code **)(*piVar4 + 0x2c))(), iVar2 != 0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return uVar5;
}



void fn_006d1198(undefined4 *param_1,int param_2)

{
  *param_1 = &DAT_00852db4;
  param_1[1] = &DAT_00855a94;
  fn_0015e6f0(param_1 + 2,*(undefined4 *)(param_2 + 0xd4));
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0xd8);
  param_1[4] = &DAT_00855a94;
  fn_0015e6f0(param_1 + 5,*(undefined4 *)(param_2 + 0xe0));
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 0xe4);
  *(undefined1 *)((int)param_1 + 0x1a) = *(undefined1 *)(param_2 + 0xe6);
  *(undefined1 *)((int)param_1 + 0x1b) = *(undefined1 *)(param_2 + 0xe7);
  param_1[7] = *(undefined4 *)(param_2 + 0xe8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0xec);
  return;
}



undefined1 fn_006d1154(int param_1)

{
  undefined1 uVar1;
  
  if (DAT_008b6490 == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x1b);
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}



undefined1 fn_006d1138(int param_1)

{
  undefined1 uVar1;
  
  if (DAT_008b6490 == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x1a);
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}



int fn_006d1124(int param_1)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 1;
}



bool fn_006d1068(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  
  iVar4 = *(int *)(param_1 + 0x14);
  iVar6 = iVar4;
  if (*(int *)(iVar4 + 4) != 0) {
    iVar9 = *(int *)(param_2 + 8);
    iVar2 = *(int *)(iVar4 + 4);
    do {
      iVar10 = *(int *)(iVar2 + 0x18);
      bVar12 = *(ushort *)(iVar2 + 0x16) < *(ushort *)(param_2 + 6);
      if ((int)(iVar10 - (iVar9 + (uint)bVar12)) < 0 ==
          (SBORROW4(iVar10,iVar9) != SBORROW4(iVar10 - iVar9,(uint)bVar12))) {
        iVar10 = *(int *)(iVar2 + 8);
        iVar6 = iVar2;
      }
      else {
        iVar10 = *(int *)(iVar2 + 0xc);
      }
      iVar2 = iVar10;
    } while (iVar10 != 0);
  }
  if (iVar6 != iVar4) {
    iVar9 = *(int *)(param_2 + 8);
    iVar2 = *(int *)(iVar6 + 0x18);
    bVar12 = *(ushort *)(param_2 + 6) < *(ushort *)(iVar6 + 0x16);
    if ((int)(iVar9 - (iVar2 + (uint)bVar12)) < 0 ==
        (SBORROW4(iVar9,iVar2) != SBORROW4(iVar9 - iVar2,(uint)bVar12))) {
      iVar4 = iVar6;
    }
  }
  bVar12 = iVar4 != *(int *)(param_1 + 0x14);
  if (bVar12) {
    *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(iVar4 + 0x34);
    uVar3 = *(undefined4 *)(iVar4 + 0x38);
    uVar11 = *(undefined4 *)(iVar4 + 0x3c);
    uVar5 = *(undefined4 *)(iVar4 + 0x40);
    uVar7 = *(undefined4 *)(iVar4 + 0x44);
    uVar8 = *(undefined4 *)(iVar4 + 0x48);
    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(iVar4 + 0x4c);
    *(undefined4 *)(param_3 + 4) = uVar1;
    *(undefined4 *)(param_3 + 8) = uVar3;
    *(undefined4 *)(param_3 + 0xc) = uVar11;
    *(undefined4 *)(param_3 + 0x10) = uVar5;
    *(undefined4 *)(param_3 + 0x14) = uVar7;
    *(undefined4 *)(param_3 + 0x18) = uVar8;
  }
  return bVar12;
}



uint fn_006d0df8(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(param_1 + 4);
  (**(code **)(*piVar1 + 8))();
  for (uVar2 = 0;
      (uVar2 < *(ushort *)(param_1 + 0x38) &&
      (*(int *)(*(int *)(param_1 + 0x30) + uVar2 * 4) != param_2)); uVar2 = uVar2 + 1 & 0xffff) {
  }
  if (*(ushort *)(param_1 + 0x38) == uVar2) {
    (**(code **)(*piVar1 + 0xc))();
    return 0;
  }
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return uVar2;
}



void fn_006d0cec(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *local_380;
  undefined2 *local_37c;
  undefined4 local_378;
  undefined2 *puStack_374;
  undefined2 local_370 [256];
  undefined1 local_170;
  undefined1 local_16f;
  undefined1 local_16e;
  undefined1 auStack_168 [256];
  undefined *local_68;
  undefined4 local_64;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [36];
  undefined1 auStack_38 [36];
  
  fn_0017d82c(2,param_1 + 8,auStack_5c,0x14);
  fn_0017fe44(auStack_5c,auStack_168,0x80);
  fn_00101a50(auStack_38,0x10,&DAT_007dcf30,
               *(ushort *)(param_1 + 6) << 8 | *(ushort *)(param_1 + 6) >> 8);
  local_37c = local_370;
  local_378 = 0x100;
  local_170 = 0;
  local_16f = 1;
  local_370[0] = 0;
  local_16e = 1;
  local_380 = &DAT_00852ce0;
  puStack_374 = local_37c;
  uVar1 = fn_0045f3dc(&local_380,auStack_168);
  uVar1 = fn_0045f3dc(uVar1,&DAT_006d0df0);
  fn_00101a50(auStack_60,0x10,&DAT_007dcf30,
               *(ushort *)(param_1 + 6) << 8 | *(ushort *)(param_1 + 6) >> 8);
  local_68 = &DAT_00855a94;
  fn_0015e6f0(&local_64,auStack_60);
  fn_0045f3dc(uVar1,local_64);
  fn_00170f54(&local_68);
  fn_001003e0(param_2,local_37c);
  fn_0045f2ec(&local_380);
  return;
}



ushort fn_006d0ce0(int param_1)

{
  return *(ushort *)(param_1 + 6) << 8 | *(ushort *)(param_1 + 6) >> 8;
}



void fn_006d0c88(undefined4 *param_1,int param_2)

{
  undefined1 auStack_128 [256];
  undefined1 auStack_28 [24];
  
  fn_0017d82c(2,param_2 + 8,auStack_28,0x14);
  fn_0017fe44(auStack_28,auStack_128,0x80);
  *param_1 = &DAT_00855a94;
  fn_0015e6f0(param_1 + 1,auStack_128);
  return;
}



uint fn_006d0c7c(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  return uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
}



undefined4 fn_006d0c60(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else if (param_2 == 10) {
    uVar1 = *(undefined4 *)(param_1 + 0x28);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
  }
  return uVar1;
}



bool fn_006d0c14(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_2 + 0x65) == '\0') {
    fn_00455590(param_2);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x60);
  if (*(char *)(param_1 + 0x65) == '\0') {
    fn_00455590(param_1);
  }
  iVar1 = fn_00101d80(*(undefined4 *)(param_1 + 0x60),uVar2);
  return iVar1 != 0;
}


