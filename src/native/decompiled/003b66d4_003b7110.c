#include "003b66d4_003b7110.h"



int fn_003b7110(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0025fb98(param_1,param_2,8);
  *puVar1 = &DAT_0082ec3c;
  puVar1 = (undefined4 *)fn_0025fb7c(puVar1 + 4);
  *puVar1 = &DAT_0085228c;
  iVar2 = fn_00101a1c(puVar1 + 0xf3,&LAB_003b6ffc,0x3cc,8);
  return iVar2 + -0x3dc;
}



void fn_003b70e8(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0017821c(param_1 + 0x1c,param_2,0x3c0);
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 3;
  return;
}



void fn_003b70d0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 4;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



void fn_003b70a4(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



void fn_003b703c(int param_1,undefined1 *param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



void fn_003b7014(int param_1)

{
  fn_00301f50(param_1 + 0x10,0x3cc);
  fn_00301f50(param_1 + 0x3dc,0x1e60);
  return;
}



undefined4 fn_003b6b70(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_003b6bb4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003b6bb4:
  return puVar1[8];
}



void fn_003b6aac(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_0043c608();
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008963ac) goto LAB_003b6b00;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003b6b00:
  fn_003c1ef0(puVar1);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



int * fn_003b6a3c(int *param_1)

{
  if (param_1[3] != -1) {
    fn_00159f34(*param_1);
  }
  if (param_1[2] != -1) {
    fn_0016a43c(*param_1);
  }
  if (param_1[1] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*param_1);
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
  }
  return param_1;
}



undefined4 * fn_003b692c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00110518();
  }
  *param_1 = uVar2;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_0011050c(*param_1,*(undefined4 *)(DAT_008977e0 + 0x10),*(undefined4 *)(DAT_008977e0 + 0x14));
  uVar2 = fn_001481c8(*param_1,L"rom:/data/Layout/common/item_window.arc",&DAT_003b6a0c,1,1);
  param_1[1] = uVar2;
  uVar2 = fn_001480d0(*param_1,uVar2,(char *)&DAT_007bebf4,&DAT_003b6a14,0,1,8);
  param_1[2] = uVar2;
  uVar2 = fn_00178f9c(*param_1,uVar2);
  uVar2 = fn_001828f0(uVar2,(char *)&DAT_003b6a1c);
  param_1[4] = uVar2;
  uVar2 = fn_00178f9c(*param_1,param_1[2]);
  uVar2 = fn_001827b0(uVar2,(char *)&DAT_003b6a2c);
  param_1[5] = uVar2;
  return param_1;
}



void fn_003b68c8(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  
  fn_001c93c8(*param_1);
  if (param_1[3] != -1) {
    fn_001088e0(*param_1);
    uVar3 = fn_00154a6c();
    iVar1 = (int)((ulonglong)uVar3 >> 0x20);
    bVar2 = (int)uVar3 != 0;
    if (bVar2) {
      iVar1 = param_1[3];
    }
    if (bVar2 && iVar1 != -1) {
      fn_00159f34(*param_1);
      param_1[3] = 0xffffffff;
      *(byte *)(param_1[4] + 0x44) = *(byte *)(param_1[4] + 0x44) & 0xfe;
    }
  }
  return;
}



void fn_003b6890(undefined4 *param_1)

{
  if (param_1[3] == -1) {
    return;
  }
  fn_00159f34(*param_1);
  param_1[3] = 0xffffffff;
  *(byte *)(param_1[4] + 0x44) = *(byte *)(param_1[4] + 0x44) & 0xfe;
  return;
}



void fn_003b682c(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  fn_0039006c(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x8c) * 4));
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x88) * 4) + 0x5c
              ))();
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x88) * 4);
  (**(code **)(*piVar1 + 0x40))(piVar1,0);
  puVar2 = *(undefined4 **)(param_1 + 0x54);
  if (puVar2[3] == -1) {
    return;
  }
  fn_00159f34(*puVar2);
  puVar2[3] = 0xffffffff;
  *(byte *)(puVar2[4] + 0x44) = *(byte *)(puVar2[4] + 0x44) & 0xfe;
  return;
}



void fn_003b679c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006f75ac(DAT_008977e0);
  iVar1 = fn_001759d0(*(undefined4 *)(iVar1 + 8));
  if (iVar1 == 0) {
    if (param_1[3] != -1) {
      fn_00159f34(*param_1);
      param_1[3] = 0xffffffff;
      *(byte *)(param_1[4] + 0x44) = *(byte *)(param_1[4] + 0x44) & 0xfe;
    }
    uVar2 = fn_0010887c(*param_1,param_1[1],(char *)&DAT_007bec06,param_1[2]);
    param_1[3] = uVar2;
    fn_00190d50(param_1[5],param_2);
    *(byte *)(param_1[4] + 0x44) = *(byte *)(param_1[4] + 0x44) & 0xfe | 1;
  }
  return;
}



void fn_003b674c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



void fn_003b6738(int param_1)

{
  if (0 < *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  }
  return;
}



void fn_003b66d4(int param_1,int param_2)

{
  if (*(int *)(param_1 + 8) < 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (param_2 == 0) {
      param_2 = 1;
    }
    *(int *)(param_1 + 0x20) = param_2;
    *(undefined1 *)(param_1 + 0x24) = 1;
    *(bool *)(param_1 + 0x2c) = param_2 < 1;
  }
  return;
}


