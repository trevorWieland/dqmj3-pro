#include "00466b98_004670f8.h"



undefined4 fn_004670f8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  if (*(char *)(param_1[0x3c] + 4) == '\0') {
    uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
    return uVar2;
  }
  iVar1 = fn_00476a94(param_1 + 0x28,&local_10);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    fn_004b5540(param_2,local_10);
    fn_004769ac(param_1 + 0x28,local_10);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_00467068(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    cVar1 = *(char *)(param_2 + 0x1d);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x3c) + 0x28))(*(int **)(param_1 + 0x3c),cVar1);
    }
    uVar2 = fn_004b5f90(param_1,*(int *)(param_2 + 0x18) + *(int *)(param_2 + 0xc),
                         *(undefined4 *)(param_2 + 0x10),param_3);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x3c) + 0x28))(*(int **)(param_1 + 0x3c),0x40);
    }
    if (*(char *)(param_1 + 0x40) == '\0') {
      *(undefined1 *)(param_1 + 4) = 3;
    }
  }
  return uVar2;
}



void fn_00467018(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = fn_004b6080(param_1,*(int *)(param_2 + 0x18) + *(int *)(param_2 + 0xc),
                       *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18),local_10,param_3,1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x10) = local_10[0];
  }
  return;
}



int fn_00466f1c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r6;
  
  *param_1 = &DAT_00852e60;
  (**(code **)(DAT_008e774c + 8))();
  puVar1 = DAT_008e773c;
  puVar4 = DAT_008e7744;
  if (DAT_008e773c != DAT_008e7744) {
    do {
      while( true ) {
        if (puVar1 != puVar4) {
          unaff_r6 = puVar1;
        }
        if (puVar1 == puVar4 || puVar1 == param_1) break;
        puVar1 = (undefined4 *)unaff_r6[1];
      }
      puVar2 = puVar1;
      if (puVar1 != puVar4) {
        puVar2 = (undefined4 *)puVar1[1];
        puVar4 = (undefined4 *)puVar1[2];
        if (puVar4 != (undefined4 *)0x0) {
          puVar4[1] = puVar2;
        }
        puVar1[2] = 0;
        if (puVar2 != (undefined4 *)0x0) {
          puVar2[2] = puVar4;
        }
        puVar1[1] = 0;
        unaff_r6 = DAT_008e7740;
        if (DAT_008e773c == puVar1) {
          DAT_008e773c = puVar2;
        }
        if (DAT_008e7740 == puVar1) {
          DAT_008e7740 = puVar4;
        }
        DAT_008e7748 = DAT_008e7748 + -1;
      }
      puVar1 = puVar2;
      puVar4 = DAT_008e7744;
    } while (puVar2 != DAT_008e7744);
  }
  if (*(char *)(param_1 + 0x14) != '\0') {
    fn_00466b98(param_1);
  }
  (**(code **)(DAT_008e774c + 0xc))(&DAT_008e774c);
  iVar3 = fn_00170f54(param_1 + 0x1a);
  iVar3 = fn_00170f54(iVar3 + -8);
  iVar3 = fn_00170f54(iVar3 + -0x18);
  return iVar3 + -0x48;
}



undefined4 * fn_00466dcc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  
  *param_1 = &DAT_00852e60;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = &DAT_00855a94;
  fn_0015e6f0(param_1 + 0x13);
  param_1[0x18] = &DAT_00855a94;
  fn_0015e6f0(param_1 + 0x19,&DAT_007db524);
  param_1[0x1a] = &DAT_00855a94;
  fn_0015e6f0(param_1 + 0x1b,&DAT_007db524);
  fn_0013d0fc(&local_20);
  param_1[0x10] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x16] = 0;
  param_1[0xe] = local_20;
  param_1[0xf] = uStack_1c;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x11] = param_3;
  *(undefined2 *)((int)param_1 + 0x52) = 0;
  param_1[0x17] = 0;
  (**(code **)(DAT_008e774c + 8))();
  if (DAT_008e773c == DAT_008e7744) {
    DAT_008e773c = param_1;
  }
  else {
    *(undefined4 **)((int)DAT_008e7740 + 4) = param_1;
    param_1[2] = DAT_008e7740;
  }
  DAT_008e7748 = DAT_008e7748 + 1;
  DAT_008e7740 = param_1;
  param_1[0x15] = DAT_008b63e4;
  DAT_008b63e4 = DAT_008b63e4 + 1;
  (**(code **)(DAT_008e774c + 0xc))(&DAT_008e774c);
  return param_1;
}



undefined8 fn_00466b98(int param_1,undefined *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  undefined *local_18 [3];
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    fn_0013d0fc(local_18);
    iVar1 = *(int *)(param_1 + 0x38);
    iVar3 = (int)local_18[0] - iVar1;
    param_2 = local_18[0];
    if (0 < iVar3) {
      uVar2 = fn_00169c20(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),1000,0);
      VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0x40),(byte)(in_fpscr >> 0x16) & 3);
      fn_00169f1c(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x40),
                   *(undefined4 *)(param_1 + 0x28));
      param_2 = &UNK_00466d38;
      iVar1 = 2;
    }
  }
  return CONCAT44(param_2,iVar1);
}


