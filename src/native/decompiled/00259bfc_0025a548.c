#include "00259bfc_0025a548.h"



void fn_0025a548(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xe88);
  if (*(int *)(iVar1 + 0x10) != -1) {
    fn_00159f34(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
  }
  if (*(int *)(iVar1 + 0xc) != -1) {
    fn_0016a43c(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  }
  if (*(int *)(iVar1 + 8) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(iVar1 + 4));
  }
  *(undefined1 *)(iVar1 + 0x14) = 0xff;
  *(undefined1 *)(iVar1 + 0x15) = 0;
  fn_001c93c8(*(undefined4 *)(iVar1 + 4));
  fn_001c93c8(*(undefined4 *)(iVar1 + 4));
  return;
}



void fn_0025a4e4(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    fn_001088e0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
    iVar1 = fn_00154a6c();
    if ((iVar1 != 0) && (*(char *)(param_1 + 0x15) == '\0')) {
      *(undefined1 *)(param_1 + 0x14) = 0xff;
      if (*(int *)(param_1 + 0x10) != -1) {
        fn_00159f34(*(undefined4 *)(param_1 + 4));
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      }
    }
  }
  return;
}



void fn_0025a42c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_d0 [128];
  undefined1 auStack_50 [64];
  
  iVar1 = *(int *)(param_1 + 0xe88);
  fn_0025a550();
  fn_00101a50(auStack_d0,0x40,L"rom:/data/Layout/%s/%s.arc",param_2,param_3);
  uVar2 = fn_001481c8(*(undefined4 *)(iVar1 + 4),auStack_d0,&DAT_0025a4d8,1,1);
  *(undefined4 *)(iVar1 + 8) = uVar2;
  fn_001028d4(auStack_50,(char *)&DAT_007c3234,param_3);
  uVar2 = fn_001480d0(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),auStack_50,
                       &DAT_0025a4e0,0,1,0xd);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  fn_001782b8(iVar1 + 0x16,param_3,0x30);
  return;
}



void fn_0025a37c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_d0 [128];
  undefined1 auStack_50 [64];
  
  iVar1 = *(int *)(param_1 + 0xe88);
  fn_0025a550();
  fn_00101a50(auStack_d0,0x40,L"rom:/data/Layout/event/%s.arc",param_2);
  uVar2 = fn_001481c8(*(undefined4 *)(iVar1 + 4),auStack_d0,&DAT_0025a420,1,1);
  *(undefined4 *)(iVar1 + 8) = uVar2;
  fn_001028d4(auStack_50,(char *)&DAT_007c31f4,param_2);
  uVar2 = fn_001480d0(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),auStack_50,
                       &DAT_0025a428,0,1,0xd);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  fn_001782b8(iVar1 + 0x16,param_2,0x30);
  return;
}



void fn_0025a360(int param_1)

{
  fn_0011050c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(DAT_008977e0 + 0x10),
               *(undefined4 *)(DAT_008977e0 + 0x14));
  return;
}



void fn_0025a35c(int param_1)

{
  if (*(int *)(param_1 + 0x10) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xc) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  }
  if (*(int *)(param_1 + 8) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 4));
  }
  *(undefined1 *)(param_1 + 0x14) = 0xff;
  *(undefined1 *)(param_1 + 0x15) = 0;
  fn_001c93c8(*(undefined4 *)(param_1 + 4));
  fn_001c93c8(*(undefined4 *)(param_1 + 4));
  return;
}



void fn_0025a2b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_90 [128];
  
  iVar1 = *(int *)(param_1 + 0xe88);
  fn_0025a550();
  fn_00101a50(auStack_90,0x40,L"rom:/data/Script/Field/ScreenShot/%s.arc",param_2);
  uVar2 = fn_001481c8(*(undefined4 *)(iVar1 + 4),auStack_90,&DAT_0025a344,1,1);
  *(undefined4 *)(iVar1 + 8) = uVar2;
  uVar2 = fn_001480d0(*(undefined4 *)(iVar1 + 4),uVar2,(char *)&DAT_0025a34c,&DAT_0025a348,0,1,0xd);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  fn_001782b8(iVar1 + 0x16,param_2,0x30);
  return;
}



void fn_0025a2ac(void)

{
  return;
}



void fn_0025a268(undefined4 param_1)

{
  undefined4 uVar1;
  
  fn_0058c9a8(param_1,*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4));
  uVar1 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  fn_0058c9a0(param_1,uVar1);
  return;
}



undefined4 fn_0025a258(void)

{
  int iVar1;
  
  iVar1 = fn_00607c4c();
  return *(undefined4 *)(iVar1 + 4);
}



undefined1 fn_00259f6c(void)

{
  int iVar1;
  
  iVar1 = fn_00607c4c();
  return *(undefined1 *)(iVar1 + 10);
}



int fn_00259f5c(void)

{
  int iVar1;
  
  iVar1 = fn_00607c4c();
  return (int)*(short *)(iVar1 + 8);
}



void fn_00259f24(undefined4 *param_1)

{
  *param_1 = &DAT_0081d800;
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 4))();
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_00259eac(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_0081d800;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = &DAT_00859020;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar1 = fn_00145b00(0x34,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_003b675c();
  }
  param_1[0xb] = uVar2;
  param_1[0xc] = 0;
  return param_1;
}



void fn_00259e58(int param_1)

{
  fn_00699014(DAT_008977e0,0);
  *(undefined1 *)(param_1 + 4) = 2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



bool fn_00259d70(int param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x20);
  *(int *)(param_1 + 0x14) = iVar4;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x18) = uVar3;
  *(uint *)(param_1 + 0x10) = uVar1;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  if ((iVar4 == *(int *)(param_1 + 0x1c)) &&
     (((iVar4 == 0 && (((*(byte *)(param_1 + 0x18) | uVar1) & 1) == 0)) || (uVar3 == uVar1)))) {
    iVar4 = *(int *)(param_1 + 0x28) + 1;
  }
  else {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x28) = iVar4;
  if ((*(int *)(param_1 + 0xc) != 0) ||
     ((*(uint *)(param_1 + 0x10) & 1) != 0 && *(uint *)(param_1 + 0x10) != 0)) {
    pcVar2 = *(code **)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 0x10) & 1) != 0) {
      pcVar2 = *(code **)(pcVar2 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0x10) >> 1)));
    }
    (*pcVar2)();
  }
  fn_003b6608(*(undefined4 *)(param_1 + 0x2c));
  fn_003b6738(*(undefined4 *)(param_1 + 0x2c));
  return *(char *)(param_1 + 4) == '\x02';
}



void fn_00259cf4(int param_1)

{
  int iVar1;
  
  if ((*(int **)(DAT_008977e0 + 0x28) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(DAT_008977e0 + 0x28) + 0x2c))(), iVar1 == 0)) {
    *(code **)(param_1 + 0x1c) = fn_00259b30;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



void fn_00259bfc(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x30) = 0x1e;
    fn_00683224(*(undefined4 *)(DAT_008977e0 + 0x3c),0x1e);
    iVar1 = fn_006f7a0c(DAT_008977e0);
    piVar3 = *(int **)(*(int *)(iVar1 + 0x30) + 0x24);
    *(uint *)(param_1 + 0x30) = (uint)((char)piVar3[1] == '\0');
    iVar1 = fn_006f7a0c(DAT_008977e0);
    if (*(char *)(*(int *)(*(int *)(iVar1 + 0x30) + 0x24) + 4) == '\0') {
      uVar4 = 2;
    }
    else {
      uVar4 = 1;
    }
    iVar1 = fn_006f7a0c(DAT_008977e0);
    piVar2 = *(int **)(*(int *)(iVar1 + 0x30) + 0x24);
    (**(code **)(*piVar2 + 0x2c))(piVar2,uVar4);
    (**(code **)(*piVar3 + 0x1c))(piVar3);
    (**(code **)(*piVar3 + 0x30))(piVar3,1);
  }
  iVar1 = fn_006c76e4(*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    *(code **)(param_1 + 0x1c) = fn_00259a80;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


