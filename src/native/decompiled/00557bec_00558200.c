#include "00557bec_00558200.h"



void fn_00558200(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;
  
  if (param_2 == 0x7f) {
    fVar1 = 65535.0;
  }
  else if (param_2 == 0x7e) {
    fVar1 = 24.0;
  }
  else if (param_2 < 0x32) {
    fVar1 = (float)VectorSignedToFloat(param_2 * 2 + 1,(byte)(in_fpscr >> 0x16) & 3);
    fVar1 = fVar1 * 0.0078125 * 0.2;
  }
  else {
    fVar1 = (float)VectorSignedToFloat(0x7e - param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar1 = (60.0 / fVar1) * 0.2;
  }
  *(float *)(param_1 + 8) = fVar1;
  return;
}



void fn_005581e0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_2 + 1) * (param_2 + 1);
  *(short *)(param_1 + 0x14) = (short)((iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1e) & 0x3ffff) >> 2);
  return;
}



void fn_005581c4(undefined1 *param_1)

{
  float in_s0;
  
  *param_1 = 0;
  *(float *)(param_1 + 4) = in_s0 * 10.0;
  return;
}



void fn_0055814c(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;
  
  if (param_2 == 0x7f) {
    fVar1 = 65535.0;
  }
  else if (param_2 == 0x7e) {
    fVar1 = 24.0;
  }
  else if (param_2 < 0x32) {
    fVar1 = (float)VectorSignedToFloat(param_2 * 2 + 1,(byte)(in_fpscr >> 0x16) & 3);
    fVar1 = fVar1 * 0.0078125 * 0.2;
  }
  else {
    fVar1 = (float)VectorSignedToFloat(0x7e - param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar1 = (60.0 / fVar1) * 0.2;
  }
  *(float *)(param_1 + 0xc) = fVar1;
  return;
}



void fn_00558104(undefined1 *param_1)

{
  float in_s0;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = 0x477fff00;
  param_1[0x18] = 0x7f;
  *(undefined4 *)(param_1 + 0xc) = 0x477fff00;
  *param_1 = 0;
  *(float *)(param_1 + 4) = in_s0 * 10.0;
  return;
}



void fn_00557f84(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(byte *)((int)param_1 + 0x9f) != 0) && (*(byte *)((int)param_1 + 0x9f) < 2)) {
    param_1[0x2c] = -1;
    if (param_1[2] != 0) {
      fn_0011611c();
    }
    if (param_1[3] != 0) {
      fn_0011611c();
    }
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x1c))(param_1);
    }
    if (param_1[4] != 0) {
      fn_00557ea8(param_1[4],param_1);
    }
    if (param_1[6] != 0) {
      fn_00557f54(param_1[6],param_1);
    }
    piVar2 = (int *)param_1[9];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(piVar2,param_1[10],param_1);
      param_1[10] = 0;
    }
    if (*(char *)((int)param_1 + 0x99) != '\0') {
      iVar1 = fn_00141104();
      iVar3 = fn_00140e98(iVar1,6);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
      *(undefined1 *)(iVar3 + 4) = 6;
      uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
      *(undefined4 *)(iVar3 + 0x10) = uVar4;
      *(undefined1 *)(iVar3 + 0x14) = *(undefined1 *)((int)param_1 + 0x9b);
      fn_001411b8(iVar1,iVar3);
      *(undefined1 *)((int)param_1 + 0x99) = 0;
    }
    *(undefined1 *)(param_1 + 0x27) = 0;
    *(undefined1 *)(param_1 + 0x28) = 2;
    iVar1 = fn_00141104();
    iVar3 = fn_00140e98(iVar1,6);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
    *(undefined1 *)(iVar3 + 4) = 4;
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
    *(undefined4 *)(iVar3 + 0x10) = uVar4;
    fn_001411b8(iVar1,iVar3);
    if ((code *)param_1[0x3d] != (code *)0x0) {
      (*(code *)param_1[0x3d])();
      param_1[0x3d] = 0;
    }
    *(undefined1 *)((int)param_1 + 0x9b) = 0;
    *(undefined1 *)((int)param_1 + 0x9f) = 2;
  }
  return;
}



void fn_00557f54(undefined4 param_1,int param_2)

{
  fn_0017d90c(param_1,param_2 + 0x110);
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}



void fn_00557f18(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00557f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1,param_1[3],param_2);
  return;
}



void fn_00557ee8(int *param_1,undefined1 param_2)

{
  *(undefined1 *)((int)param_1 + 0x9d) = param_2;
  if (param_1[4] != 0) {
    fn_0017de8c(param_1[4],param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00557f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x24))(param_1);
  return;
}



void fn_00557ea8(int param_1,int param_2)

{
  fn_0017d90c(param_1 + 0xc,param_2 + 0x108);
  fn_0017d90c(param_1,param_2 + 0x100);
  *(undefined4 *)(param_2 + 0x10) = 0;
  return;
}



void fn_00557e8c(int param_1)

{
  float in_s0;
  
  if (in_s0 < 0.0) {
    in_s0 = 0.0;
  }
  *(float *)(param_1 + 200) = in_s0;
  return;
}



void fn_00557e4c(int param_1)

{
  if (*(int *)(param_1 + 0x74) < *(int *)(param_1 + 0x70)) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  }
  if (*(int *)(param_1 + 0x94) < *(int *)(param_1 + 0x90)) {
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  }
  if (*(int *)(param_1 + 0xc4) < *(int *)(param_1 + 0xc0)) {
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
  }
  return;
}



void fn_00557df0(int *param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00141104();
  iVar2 = fn_00140e98(iVar1,6);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0xb;
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  *(undefined1 *)(iVar2 + 0x14) = param_2;
  fn_001411b8(iVar1,iVar2);
  return;
}



void fn_00557da4(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = (**(code **)(*(int *)param_2[2] + 8))((int *)param_2[2],param_2[4]);
  if (iVar1 != 0) {
    fn_00301a9c(iVar1,param_2[3],param_2[4]);
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    *(undefined4 *)(param_1 + 0x2c) = param_2[4];
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    *(int *)(param_1 + 0x28) = iVar1;
  }
  return;
}



void fn_00557bec(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  
  (**(code **)(*param_1 + 0x2c))(param_1);
  fVar7 = 0.0;
  fVar5 = fVar7;
  if (*(char *)((int)param_1 + 0xa2) != '\x02') {
    fVar5 = (float)param_1[0x32] * 1.0;
    fVar6 = *(float *)(param_1[4] + 0x3c) * fVar5;
    fn_00168948(param_1 + 0x2e);
    fVar6 = fVar5 * fVar6;
    fn_00168948(param_1 + 0x1a);
    fVar6 = fVar5 * fVar6;
    fn_00168948(param_1 + 0x1e);
    fVar6 = fVar5 * fVar6;
    fn_00168948(param_1 + 0x22);
    fVar5 = (float)param_1[0x16] * (float)param_1[0xc] * fVar5 * fVar6;
  }
  iVar1 = param_1[4];
  fVar9 = (float)param_1[0xf] + (float)param_1[0x3a];
  iVar4 = (int)*(char *)((int)param_1 + 0x9e);
  iVar13 = param_1[0x36];
  fVar10 = (float)param_1[0x17] * (float)param_1[0xd] * (float)param_1[0x34];
  fVar6 = (float)param_1[0x18] + (float)param_1[0xe] + (float)param_1[0x33];
  fVar12 = (float)param_1[0x19] +
           *(float *)(iVar1 + 0x40) + (float)param_1[0x11] + (float)param_1[0x35];
  if (iVar4 == -1) {
    iVar4 = *(int *)(iVar1 + 0x44);
    iVar13 = *(int *)(iVar1 + 0x48);
    if (iVar4 == -1) {
      iVar4 = param_1[0x13];
      iVar13 = param_1[0x12];
    }
  }
  fVar11 = *(float *)(iVar1 + 0x4c) + (float)param_1[0x37];
  fVar8 = fVar7 + (float)param_1[0x39] + *(float *)(iVar1 + 0x54);
  fVar7 = fVar7 + (float)param_1[0x38] + *(float *)(iVar1 + 0x50) + (float)param_1[0x10];
  iVar1 = fn_00141104();
  iVar2 = fn_00140e98(iVar1,0xf);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 8;
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  *(float *)(iVar2 + 0x14) = fVar5;
  *(float *)(iVar2 + 0x18) = fVar10;
  *(float *)(iVar2 + 0x24) = fVar12;
  *(float *)(iVar2 + 0x1c) = fVar6;
  *(float *)(iVar2 + 0x20) = fVar9;
  *(int *)(iVar2 + 0x28) = iVar4;
  *(int *)(iVar2 + 0x2c) = iVar13;
  *(float *)(iVar2 + 0x30) = fVar11;
  *(float *)(iVar2 + 0x34) = fVar7;
  *(float *)(iVar2 + 0x38) = fVar8;
  fn_001411b8(iVar1,iVar2);
  return;
}


