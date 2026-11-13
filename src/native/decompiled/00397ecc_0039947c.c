#include "00397ecc_0039947c.h"



void fn_0039947c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint auStack_20 [2];
  
  fn_00416e54();
  uVar4 = 0;
  auStack_20[0] = param_4;
  do {
    iVar2 = fn_006ba284(param_1);
    iVar2 = uVar4 + iVar2 * 10;
    if (iVar2 < 10) {
      uVar3 = fn_00416d40(param_1,(&DAT_007c7a88)[iVar2]);
      fn_0031b78c(param_1,uVar4,0,uVar3);
      if (*(int *)(param_1 + iVar2 * 4 + 0xdc) < 1) {
        auStack_20[0] = DAT_00895e04;
        fn_002c37e0(param_1,uVar4,auStack_20);
      }
      else {
        auStack_20[0] = DAT_00895dfc;
        fn_002c37e0(param_1,uVar4,auStack_20);
      }
    }
    else {
      uVar1 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
      if (uVar1 <= uVar4) {
        auStack_20[0] = uVar1;
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar4);
      }
      fn_0031b3c4(*(undefined4 *)(*(int *)(param_1 + 0x78) + uVar4 * 4),0xffffffff);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 10);
  return;
}



void fn_0039873c(int *param_1)

{
  int iVar1;
  
  fn_006899f4(param_1,param_1[0x3a],0);
  iVar1 = (**(code **)(*param_1 + 0x140))(param_1);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_0039850c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_0082c058;
  iVar1 = fn_005d2898(param_1 + 0x33);
  iVar1 = fn_0059e2ac(iVar1 + -0x1c);
  fn_002c471c(iVar1 + -0xb0);
  return;
}



int fn_003984a8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &PTR_FUN_0082c058;
  iVar2 = fn_0059e280(puVar1 + 0x2c);
  iVar2 = fn_005d2874(iVar2 + 0x1c);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  return iVar2 + -0xcc;
}



void fn_0039848c(int param_1)

{
  fn_0059e110(param_1 + 0xb0);
  fn_002c4304(param_1);
  return;
}



void fn_00398368(int param_1)

{
  if (*(char *)(param_1 + 0xc) != '\x03') goto switchD_00398388_default;
  switch(*(undefined1 *)(param_1 + 0x108)) {
  case 0:
                    /* WARNING: Subroutine does not return */
    fn_006ba250(param_1);
  case 1:
    fn_00425e78(param_1);
    break;
  case 2:
    if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) != '\x01') break;
    goto LAB_0039847c;
  case 3:
    fn_00425d94(param_1);
    break;
  case 4:
    if (*(char *)(*(int *)(param_1 + 0x58) + 0x18) != '\x01') break;
    if (-1 < *(int *)(param_1 + 0x10c)) {
      *(undefined1 *)(param_1 + 0x108) = 1;
      break;
    }
LAB_0039847c:
    *(undefined1 *)(param_1 + 0x108) = 0;
  }
switchD_00398388_default:
  fn_0059e110(param_1 + 0xb0);
  fn_002c4304(param_1);
  return;
}



void fn_0039834c(int param_1)

{
  fn_0059e16c(param_1 + 0xb0);
  fn_002c4100(param_1);
  return;
}



void fn_00398210(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int unaff_r4;
  undefined4 uVar4;
  undefined4 *unaff_r8;
  
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  iVar1 = fn_00689210(uVar4,(char *)&DAT_00398280);
  if (iVar1 != 0) {
    unaff_r8 = &DAT_00893b8c;
    unaff_r4 = 0;
  }
  *(int *)(param_1 + 0xe0) = iVar1;
  if (iVar1 != 0) {
    do {
      uVar2 = fn_0068897c(uVar4,unaff_r8[unaff_r4]);
      iVar1 = unaff_r4 * 4;
      unaff_r4 = unaff_r4 + 1;
      *(undefined4 *)(param_1 + iVar1 + 0xe4) = uVar2;
    } while (unaff_r4 < 3);
    bVar3 = *(byte *)(*(int *)(param_1 + 0xe0) + 0x44) & 0xfe;
    if (*(char *)(param_3 + 0x61) != '\0') {
      bVar3 = bVar3 | 1;
    }
    *(byte *)(*(int *)(param_1 + 0xe0) + 0x44) = bVar3;
  }
  return;
}



void fn_003981d4(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 local_8 [2];
  
  local_8[0] = *param_3;
  if (param_2 == 0) {
    fn_00580c88(*(undefined4 *)(param_1 + 0xd0),0,local_8);
    return;
  }
  fn_00688d44(*(undefined4 *)(param_1 + param_2 * 4 + 0xe0),local_8);
  return;
}



undefined4 fn_00397ff4(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 *unaff_r9;
  
  iVar5 = *(int *)(param_2 + 0x34) + -1;
  *(int *)(param_2 + 0x34) = iVar5;
  iVar2 = *(int *)(param_2 + 8);
  if (*(int *)(&DAT_007c6b24 + iVar5 * 4) < *(int *)(param_2 + 8)) {
    iVar2 = *(int *)(&DAT_007c6b24 + iVar5 * 4);
  }
  *(int *)(param_2 + 8) = iVar2;
  uVar1 = fn_002c29a0(param_1,param_2);
  iVar2 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  iVar5 = param_1[0x12];
  uVar3 = (**(code **)(*param_1 + 8))(param_1);
  fn_0059d948(param_1 + 0x2c,uVar3,iVar5,iVar2,*(undefined4 *)(param_2 + 0x34),param_2 + 0x38,2);
  iVar5 = param_1[0x12];
  uVar3 = (**(code **)(*param_1 + 8))(param_1);
  fn_005d24e4(param_1 + 0x33,uVar3,iVar5,iVar2,param_2 + 0x48);
  iVar5 = fn_001828f0(iVar2,DAT_00893b7c);
  param_1[0x37] = iVar5;
  param_1[0x3c] = *(int *)(param_2 + 0x34);
  fn_0059e040(param_1 + 0x2c,iVar5);
  fn_00398298(param_1);
  (**(code **)(*param_1 + 0x130))(param_1,*(undefined4 *)(param_2 + 0xc));
  uVar3 = *(undefined4 *)(iVar2 + 0x10);
  iVar5 = fn_00689210(uVar3,(char *)&DAT_00398280);
  if (iVar5 != 0) {
    unaff_r9 = &DAT_00893b8c;
    iVar2 = 0;
  }
  param_1[0x38] = iVar5;
  if (iVar5 != 0) {
    do {
      iVar5 = fn_0068897c(uVar3,unaff_r9[iVar2]);
      iVar6 = iVar2 + 1;
      param_1[iVar2 + 0x39] = iVar5;
      iVar2 = iVar6;
    } while (iVar6 < 3);
    bVar4 = *(byte *)(param_1[0x38] + 0x44) & 0xfe;
    if (*(char *)(param_2 + 0x61) != '\0') {
      bVar4 = bVar4 | 1;
    }
    *(byte *)(param_1[0x38] + 0x44) = bVar4;
  }
  if (*(char *)(param_2 + 0x60) != '\0') {
    fn_00580ca0(param_1[0x34]);
  }
  return uVar1;
}



void fn_00398298(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  
  iVar1 = *(int *)(param_1 + 0xf0);
  iVar2 = *(int *)(param_1 + 0xf4);
  if (iVar1 != iVar2) {
    iVar3 = 0;
    if (iVar2 < iVar1) {
      if (0 < iVar1 - iVar2) {
        iVar3 = (1 - (iVar1 - iVar2)) * 0x12 + -0x12;
      }
    }
    else if (0 < iVar2 - iVar1) {
      iVar3 = ((iVar2 - iVar1) + -1) * 0x12 + 0x12;
    }
    VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    fn_00307c38(*(undefined4 *)(param_1 + 0x90));
    iVar1 = (**(code **)(**(int **)(param_1 + 0x90) + 0x1c))();
    fVar4 = (float)VectorSignedToFloat(iVar3 / 2,(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) - fVar4;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xf0);
  }
  return;
}



void fn_00397fa0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0082bf18;
  iVar1 = fn_005d2898(param_1 + 0x30);
  if (*(int **)(iVar1 + -0xc) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -0xc) + 4))();
  }
  if (*(int **)(iVar1 + -0x10) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -0x10) + 4))();
  }
  fn_002c471c(iVar1 + -0xc0);
  return;
}



int fn_00397f10(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_0082bf18;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  iVar2 = fn_005d2874(puVar1 + 0x30);
  return iVar2 + -0xc0;
}



void fn_00397ecc(int param_1)

{
  if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb0) + 0x14))();
  }
  if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb4) + 0x14))();
  }
  fn_002c4304(param_1);
  return;
}


