#include "006c38d8_006c40c8.h"



char fn_006c40c8(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01' || cVar1 == '\x02') {
      return '\x01';
    }
    if (cVar1 != '\x03') {
      if (cVar1 == '\x04') {
        return '\x01';
      }
      if (cVar1 != '\x05') {
        return param_1[2];
      }
    }
  }
  return '\0';
}



byte fn_006c4094(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (((bVar1 < 2) || (bVar1 == 2 || bVar1 == 3)) || (bVar1 == 4 || bVar1 == 5)) {
    bVar1 = 1;
  }
  else {
    bVar1 = param_1[5];
  }
  return bVar1;
}



undefined4 fn_006c3fa0(int param_1,int param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = fn_006f7a20(DAT_008977e0);
  if (iVar1 == 0) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != 0 && iVar1 != param_2) {
      iVar2 = fn_006c3ebc(param_1,iVar1 + 0x20,param_2 + 0x20);
      if (iVar2 == 0) {
        return 0;
      }
      fVar3 = *(float *)(iVar1 + 0x24);
      if (fVar3 <= *(float *)(param_2 + 0x24)) {
        if (param_3 == 0) {
          fn_006c3e34(param_1,*(undefined4 *)(param_1 + 4));
          fVar4 = fVar3;
        }
        else {
          fVar4 = *(float *)(param_1 + 0xc);
        }
        fVar5 = 50.0;
        fn_006c3e34(param_1,param_2);
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 1;
        }
        if ((fVar4 + fVar5 < fVar3) && (iVar1 = fn_003415b0(), iVar1 == 0)) {
          return 0;
        }
      }
    }
  }
  return 1;
}



undefined4 fn_006c3ebc(undefined4 param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float local_24;
  float local_20;
  float local_1c [4];
  
  iVar1 = fn_002b0698(DAT_008977e0);
  if (iVar1 != 0) {
    fVar2 = 0.0;
    local_24 = 0.0;
    local_20 = 0.0;
    local_1c[0] = 0.0;
    fn_006dcdb8(*(undefined4 *)(iVar1 + 4),&local_24,&local_20,0,0,0,local_1c);
    if ((local_1c[0] < param_3[1] - param_2[1]) ||
       ((local_20 - local_24) * (local_20 - local_24) <
        (*param_3 - *param_2) * (*param_3 - *param_2) + fVar2 * fVar2 +
        (param_3[2] - param_2[2]) * (param_3[2] - param_2[2]))) {
      return 0;
    }
  }
  return 1;
}



void fn_006c3e34(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  float local_1c;
  float local_18;
  float local_14;
  
  local_1c = *(float *)(param_2 + 0x20) + 0.0;
  local_18 = *(float *)(param_2 + 0x24) + 8.0;
  local_14 = *(float *)(param_2 + 0x28) + 0.0;
  uVar1 = fn_006f7388(DAT_008977e0);
  fn_0023b858(uVar1,0,&local_1c,&local_1c,0);
  return;
}



bool fn_006c3cd4(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
  return (piVar1[1] - *piVar1) / 0xc != 0;
}



int fn_006c3c44(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x4c) == iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}



int fn_006c3c2c(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x20) + param_2 * 6 + 4;
}



int fn_006c3b4c(int *param_1)

{
  return *param_1 + 0x155c;
}



int fn_006c3b40(int *param_1)

{
  return *param_1 + 0x800;
}



void fn_006c3acc(int *param_1,int param_2,undefined4 param_3)

{
  fn_0017821c(param_3,param_2 * 0x3d8 + 0x50 + *param_1,0x3d8);
  return;
}



int fn_006c3ab0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x3d8 + 0x50;
}



bool fn_006c3a84(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x24))();
  return iVar1 != 0;
}



void fn_006c3a50(void)

{
  undefined4 uVar1;
  
  fn_00117984();
  fn_0010fa20();
  uVar1 = fn_006eb278();
  fn_005e29c4(uVar1,0);
  return;
}



void fn_006c3a30(void)

{
  undefined4 uVar1;
  
  fn_00117984();
  fn_0010fa20();
  uVar1 = fn_006eb278();
  fn_005e29c4(uVar1,0);
  return;
}



void fn_006c3a0c(int param_1)

{
  int iVar1;
  uint in_fpscr;
  
  iVar1 = (int)*(short *)(*(int *)(param_1 + 0x188) + *(int *)(*(int *)(param_1 + 0x188) + 8) * 0xe
                         + 0x28);
  VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  fn_0017fe34(iVar1);
  return;
}



void fn_006c39f4(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  
  iVar1 = (int)*(short *)(param_1 + param_2 * 0xe + 0x28);
  VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  fn_0017fe34(iVar1);
  return;
}



int fn_006c39d8(int param_1)

{
  return (int)*(char *)(*(int *)(param_1 + 0x188) + *(int *)(param_1 + 0xf0) + 0x14);
}



int fn_006c39bc(int param_1)

{
  return (int)*(short *)(*(int *)(param_1 + 0x188) + *(int *)(*(int *)(param_1 + 0x188) + 8) * 0xe +
                        0x26);
}



int fn_006c3994(int param_1)

{
  return (int)*(short *)(*(int *)(param_1 + 0x188) + *(int *)(*(int *)(param_1 + 0x188) + 8) * 0xe +
                         *(int *)(param_1 + 0xf0) * 4 + 0x2c);
}



int fn_006c3970(int param_1,int param_2,int param_3)

{
  return (int)*(short *)(param_1 + param_2 * 0xe + param_3 * 4 + 0x2c);
}



undefined4 fn_006c3954(int param_1)

{
  switch(*(undefined2 *)
          (*(int *)(param_1 + 0x188) + *(int *)(*(int *)(param_1 + 0x188) + 8) * 0xe + 0x24)) {
  default:
    return 1;
  case 2:
    return 2;
  case 3:
    return 3;
  case 4:
    return 4;
  case 5:
    return 5;
  }
}



void fn_006c38d8(int param_1,short param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)fn_006f7508(DAT_008977e0);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x94))();
  (**(code **)(*piVar1 + 0x48))(piVar1,param_3,(int)*(short *)(param_1 + 0x10),(int)param_2,0);
  return;
}


