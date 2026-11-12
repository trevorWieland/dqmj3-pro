#include "00202b54_00203390.h"



int fn_00203390(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if (0x1f < iVar2 + 1) {
    *(undefined4 *)(param_1 + 0x18) = 0x18;
  }
  uVar1 = fn_0016678c(param_1,0xd);
  bVar3 = uVar1 == 0;
  if (bVar3) {
    uVar1 = (uint)*(byte *)(param_1 + 0x38);
  }
  if (bVar3 && uVar1 == 0) {
    fn_0015a394(param_1,iVar2,param_2);
  }
  return iVar2;
}



void fn_00203354(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0x10;
  do {
    fn_0016383c(param_1,iVar1,param_2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x14);
  *(undefined4 *)(param_1 + 0x10) = 0x10;
  return;
}



int fn_002032fc(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  if (0x13 < iVar2 + 1) {
    *(undefined4 *)(param_1 + 0x10) = 0x10;
  }
  uVar1 = fn_0016678c(param_1,0xd);
  bVar3 = uVar1 == 0;
  if (bVar3) {
    uVar1 = (uint)*(byte *)(param_1 + 0x38);
  }
  if (bVar3 && uVar1 == 0) {
    fn_0015a394(param_1,iVar2,param_2);
  }
  return iVar2;
}



undefined4 fn_002032b0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x28) != param_2) {
    if (*(char *)(param_1 + 0x38) == '\0') {
      fn_0015a394(param_1,0xf,param_2);
      *(int *)(param_1 + 0x28) = param_2;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      *(int *)(param_1 + 0x2c) = param_2;
    }
  }
  return 0xf;
}



int fn_00203280(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  }
  iVar1 = fn_0079ecd4(param_1 + 0x18);
  return iVar1 + -0x18;
}



void fn_00203268(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}



void fn_0020309c(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = *(int *)(*param_1 + 8);
  param_1[1] = iVar1;
  iVar1 = fn_001481c8(iVar1,DAT_00893b00,&DAT_00203210,1,1);
  param_1[3] = iVar1;
  iVar1 = fn_001480d0(param_1[1],iVar1,DAT_00893b04,&DAT_00203218,1,1,0);
  param_1[4] = iVar1;
  iVar1 = fn_00178f9c(param_1[1],iVar1);
  iVar2 = *(int *)(iVar1 + 0x10);
  param_1[2] = iVar2;
  iVar2 = fn_00689210(iVar2,(char *)&DAT_0020321c);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  iVar2 = fn_00689210(param_1[2],(char *)&DAT_00203230);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  iVar2 = fn_00689210(param_1[2],(char *)&DAT_00203240);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  uVar3 = fn_00172c98(iVar1,(char *)&DAT_00203254);
  iVar1 = fn_00145b00(0x88,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar1 != 0) {
    piVar4 = (int *)fn_0031fee0(iVar1,*param_1,uVar3,1,param_3);
  }
  piVar5 = (int *)param_1[7];
  if (piVar5 != piVar4) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[7] = (int)piVar4;
  }
  (**(code **)(*(int *)param_1[7] + 0x10))();
  fn_0031fe38(param_1[7],*param_2);
  fn_0031f8fc(param_1[7],0xffffffff,0,0,0xffffffff);
  return;
}



void fn_00203068(undefined4 *param_1)

{
  *param_1 = &DAT_0081c374;
  fn_001c19d8(DAT_008977e4);
  fn_005f6f1c(param_1);
  fn_002feef8();
  return;
}



uint * fn_00202f7c(uint *param_1)

{
  int iVar1;
  
  if (((*param_1 & 0x8000000) != 0) &&
     (iVar1 = *(int *)(param_1[1] + 4) + -1, *(int *)(param_1[1] + 4) = iVar1, iVar1 == 0)) {
    (**(code **)(*(int *)param_1[1] + 8))();
  }
  return param_1;
}



void fn_00202e68(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &DAT_0081c358;
  if ((param_1[1] & 0x80000000) == 0) {
    fn_0024d73c(param_1[5] + 0x44,param_1);
  }
  if (param_1[0x1c] != 0) {
    for (uVar1 = 0; uVar1 < (uint)param_1[0x1b]; uVar1 = uVar1 + 1) {
    }
    fn_0019d680(param_1[0x1a],param_1[0x1c] << 4);
  }
  if (((param_1[0x10] & 0x8000000) != 0) &&
     (iVar2 = *(int *)(param_1[0x11] + 4) + -1, *(int *)(param_1[0x11] + 4) = iVar2, iVar2 == 0)) {
    (**(code **)(*(int *)param_1[0x11] + 8))();
  }
  iVar2 = fn_0077f3f8(param_1 + 0xb);
  iVar2 = fn_0077f3f8(iVar2 + -0xc);
  if (((*(uint *)(iVar2 + -8) & 0x8000000) != 0) &&
     (iVar3 = *(int *)(*(int *)(iVar2 + -4) + 4) + -1, *(int *)(*(int *)(iVar2 + -4) + 4) = iVar3,
     iVar3 == 0)) {
    (**(code **)(**(int **)(iVar2 + -4) + 8))();
  }
  *(undefined **)(iVar2 + -0x20) = &DAT_0081d020;
  if (*(int *)(iVar2 + -0x18) != 0) {
    *(undefined4 *)(*(int *)(iVar2 + -0x18) + 0xc) = 0x1000001;
    *(undefined4 *)(*(int *)(iVar2 + -0x18) + 0x10) = 0;
  }
  return;
}



void fn_00202df4(int param_1)

{
  int iVar1;
  uint local_10;
  int *local_c;
  
  local_10 = 0x1000001;
  local_c = (int *)0x0;
  fn_0019d320(param_1 + 0x20,0,&local_10);
  if (((local_10 & 0x8000000) != 0) &&
     (iVar1 = local_c[1], local_c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_c + 8))();
  }
  fn_0019e864(param_1 + 0x18,&DAT_008c06e8);
  return;
}



void fn_00202dcc(undefined4 *param_1)

{
  (**(code **)*param_1)(param_1);
  fn_0019d680(param_1,0x78);
  return;
}



void fn_00202d1c(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 4) & 0x80000000) != 0) {
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
  uVar1 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    do {
      fn_0024d77c(*(int *)(param_1 + 0x20) + uVar1 * 8,param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x24));
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    do {
      fn_0024d77c(*(int *)(param_1 + 0x2c) + uVar1 * 8,param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x30));
  }
  fn_0024d77c(param_1 + 0x18,param_2);
  fn_0024d73c(*(int *)(param_1 + 0x14) + 0x44,param_1);
  fn_0019e8c4(param_2,param_1);
  return;
}



void fn_00202cc8(void)

{
  return;
}



void fn_00202cb0(void)

{
  return;
}



void fn_00202c98(void)

{
  return;
}



void fn_00202c80(void)

{
  return;
}



void fn_00202bc0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &DAT_0081c348;
  piVar1 = (int *)fn_001adcbc(param_1 + 3);
  if (param_1[2] != 0) {
    piVar1 = (int *)param_1[1];
  }
  if (param_1[2] != 0 && piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
    param_1[2] = 0;
  }
  iVar2 = fn_005e7b00(param_1 + 0x33);
  fn_002feef8(iVar2 + -0xcc);
  return;
}



int fn_00202b54(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0081c348;
  *(undefined1 *)(param_1 + 0x32) = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 0xc9) = 0xff;
  iVar1 = fn_005e7ab0(param_1 + 0x33);
  fn_005e7a74(iVar1,1,1,0xff,0,0xff,0,0,2);
  return iVar1 + -0xcc;
}


