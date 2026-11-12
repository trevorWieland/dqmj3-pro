#include "00560638_00560c1c.h"



void fn_00560c1c(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_3 & 0xff000000;
  uVar2 = param_4 & 0xff000000;
  uVar4 = param_4 ^ param_4 & 0xff000000;
  if (uVar5 < uVar2) {
    bVar1 = true;
    uVar3 = uVar2 - uVar5;
    if (uVar2 < 0x8000000) {
      param_4 = uVar4 | 0x8000000;
    }
  }
  else {
    bVar1 = false;
    uVar3 = uVar5 - uVar2;
    if ((0xf7000000 < uVar2) && (uVar2 != 0xff000000)) {
      param_4 = uVar4 | 0xf7000000;
    }
  }
  uVar2 = fn_00169f1c(0xff00,(uVar3 >> 0x18) + 1);
  if (uVar2 < 0x1fe1) {
    if (uVar2 < 0xff1) {
      if (uVar2 < 0x3fd) {
        uVar4 = 2;
        uVar2 = uVar2 >> 2;
      }
      else {
        uVar2 = uVar2 >> 4;
        uVar4 = 3;
      }
    }
    else {
      uVar4 = 4;
      uVar2 = uVar2 >> 5;
    }
    param_3 = param_3 ^ uVar5 | uVar2 << 0x18;
  }
  else {
    uVar4 = 4;
    param_3 = param_3 | 0xff000000;
  }
  if (bVar1) {
    uVar4 = uVar4 | 0x40;
  }
  param_1[2] = uVar4;
  *param_1 = param_3;
  param_1[1] = param_4;
  return;
}



int fn_00560bf4(undefined4 param_1,int param_2)

{
  fn_0017821c(param_2,&DAT_007d80cc,0x30);
  return param_2 + 0x30;
}



int fn_00560bcc(undefined4 param_1,int param_2)

{
  fn_0017821c(param_2,&DAT_007d812c,0x18);
  return param_2 + 0x18;
}



undefined4 * fn_00560b7c(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x2006f;
  param_1[2] = 0;
  param_1[3] = &DAT_00200080;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x1000;
  param_1[7] = 0xb0080;
  return param_1 + 8;
}



void fn_00560ac4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar7 = param_3[1];
  uVar3 = param_3[2];
  uVar1 = param_3[3];
  uVar2 = param_3[4];
  uVar4 = param_3[5];
  uVar5 = param_3[6];
  *(undefined4 *)(param_1 + 0x38) = *param_3;
  uVar6 = param_3[7];
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  uVar7 = param_3[8];
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  uVar3 = param_3[9];
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = param_3[10];
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  uVar8 = param_3[0xb];
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  uVar2 = param_3[0xc];
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  uVar4 = param_3[0xd];
  *(undefined4 *)(param_1 + 0x54) = uVar6;
  uVar5 = param_3[0xe];
  uVar6 = param_3[0xf];
  *(undefined4 *)(param_1 + 0x58) = uVar7;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar8;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  *(undefined4 *)(param_1 + 0x70) = uVar5;
  *(undefined4 *)(param_1 + 0x74) = uVar6;
  fn_00560750(param_1,param_2,param_1 + 0x38,0,5);
  return;
}



void fn_00560a88(int param_1,undefined4 param_2,undefined1 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x34);
  fn_00560750(param_1,param_2,param_1 + uVar1 * 0x10 + 0x3f8,uVar1 + 0x40,
               *(byte *)(param_1 + 0x33) - uVar1);
  *(undefined1 *)(param_1 + 0x33) = param_3;
  *(undefined1 *)(param_1 + 0x34) = param_3;
  return;
}



void fn_00560a5c(int param_1,undefined4 param_2)

{
  fn_00560750(param_1,param_2,param_1 + 0x88,9,*(undefined1 *)(param_1 + 0x30));
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



void fn_00560974(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint in_fpscr;
  
  fVar5 = *(float *)(param_1 + 0x608);
  fVar3 = *(float *)(param_1 + 0x5fc);
  fVar4 = *(float *)(param_1 + 0x600);
  fVar6 = *(float *)(param_1 + 0x604);
  iVar1 = param_1 + (uint)*(byte *)(param_1 + 0x30) * 0x10;
  pfVar2 = (float *)(iVar1 + 0x88);
  *(float *)(iVar1 + 0x94) = fVar5;
  *pfVar2 = fVar3;
  *(float *)(iVar1 + 0x8c) = fVar4;
  *(float *)(iVar1 + 0x90) = fVar6;
  if (*(byte *)(param_1 + 0x5f8) != 0) {
    fVar3 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x5f8),(byte)(in_fpscr >> 0x16) & 3);
    *pfVar2 = *pfVar2 + fVar3 * 0.00390625;
  }
  if (*(byte *)(param_1 + 0x5f9) != 0) {
    fVar3 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x5f9),(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(iVar1 + 0x8c) = fVar4 + fVar3 * 0.0625;
  }
  if (*(byte *)(param_1 + 0x5fa) != 0) {
    fVar3 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x5fa),(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(iVar1 + 0x90) = fVar6 + fVar3 * 0.015625;
  }
  if ((0x3f800000 < (int)fVar5) && (*(byte *)(param_1 + 0x5fb) != 0)) {
    fVar3 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x5fb),(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(iVar1 + 0x94) = fVar5 + fVar3 * 0.25;
  }
  *(char *)(param_1 + 0x30) = *(char *)(param_1 + 0x30) + '\x01';
  return;
}



void fn_00560938(int param_1,undefined4 param_2,undefined1 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x32);
  fn_00560750(param_1,param_2,param_1 + uVar1 * 0x10 + 0x1f8,uVar1 + 0x20,
               *(byte *)(param_1 + 0x31) - uVar1);
  *(undefined1 *)(param_1 + 0x31) = param_3;
  *(undefined1 *)(param_1 + 0x32) = param_3;
  return;
}



uint * fn_005608dc(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((uint)(param_3 * 6) < 0x11) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_3 * 0xc + -0x20;
  }
  if ((*(int *)(param_1 + 0x28) + iVar2 & 0xfffU) < 0xfe0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x20;
  }
  *param_2 = uVar1 | 0x80000000;
  param_2[1] = 0xf0227;
  param_2[3] = 0xf0228;
  param_2[2] = param_3 * 6;
  return param_2 + 4;
}



uint * fn_005607cc(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x30);
  puVar1 = (uint *)fn_00560750(param_1,param_2,param_1 + 0x88,9,uVar4);
  *(undefined1 *)(param_1 + 0x30) = 0;
  uVar3 = (uint)*(byte *)(param_1 + 0x32);
  if (uVar3 < *(byte *)(param_1 + 0x31)) {
    puVar1 = (uint *)fn_00560750(param_1,puVar1,param_1 + uVar3 * 0x10 + 0x1f8,uVar3 + 0x20,
                                  *(byte *)(param_1 + 0x31) - uVar3);
    *(undefined1 *)(param_1 + 0x31) = 7;
    *(undefined1 *)(param_1 + 0x32) = 7;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x34);
  if (uVar3 < *(byte *)(param_1 + 0x33)) {
    puVar1 = (uint *)fn_00560750(param_1,puVar1,param_1 + uVar3 * 0x10 + 0x3f8,uVar3 + 0x40,
                                  *(byte *)(param_1 + 0x33) - uVar3);
    *(undefined1 *)(param_1 + 0x33) = 0;
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  if (uVar4 * 6 < 0x11) {
    iVar2 = 0;
  }
  else {
    iVar2 = uVar4 * 0xc + -0x20;
  }
  if ((iVar2 + *(int *)(param_1 + 0x28) & 0xfffU) < 0xfe0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x20;
  }
  *puVar1 = uVar3 | 0x80000000;
  puVar1[1] = 0xf0227;
  puVar1[3] = 0xf0228;
  puVar1[2] = uVar4 * 6;
  fn_0017821c(puVar1 + 4,&DAT_007d816c,0x40);
  return puVar1 + 0x14;
}



uint * fn_00560750(undefined4 param_1,uint *param_2,uint *param_3,uint param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  
  *param_2 = param_4 & 0xff | 0x80000000;
  param_2[1] = 0xf02c0;
  uVar2 = *param_3;
  param_2[3] = param_5 * 0x400000 - 0x100000U | 0xf02c1;
  puVar1 = param_2 + 4;
  param_2[2] = uVar2;
  fn_0017821c(puVar1,param_3 + 1,param_5 * 0x10 + -4);
  puVar1[param_5 * 4 + -1] = 0;
  return puVar1 + param_5 * 4 + -1 + 1;
}



void fn_00560638(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  if (param_2 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x18))
            (param_1,*(undefined4 *)(param_2 + 0x28),param_3,param_4,param_5,param_6);
  return;
}


