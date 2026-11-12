#include "0016d9bc_0016e2f8.h"



void fn_0016e2f8(int param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 local_20;
  
  local_20 = param_4;
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0x14));
  fn_00183638(uVar1,0);
  local_20 = CONCAT13(param_5,CONCAT12((char)param_4,CONCAT11(param_3,param_2)));
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0x14));
  fn_0017fc08(uVar1,0,&local_20);
  return;
}



void fn_0016e2b8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar1 + 0x18) == '\x01') {
    fn_001594e4(DAT_008977e4,*(undefined4 *)(iVar1 + 0x14),1);
    *(undefined1 *)(iVar1 + 0x18) = 0;
  }
  return;
}



void fn_0016e278(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar1 + 0x18) == '\0') {
    fn_0017894c(DAT_008977e4,*(undefined4 *)(iVar1 + 0x14),1);
    *(undefined1 *)(iVar1 + 0x18) = 1;
  }
  return;
}



void fn_0016e1bc(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  
  fn_0017b99c(*(undefined4 *)(param_1 + (char)(*param_2 + -0x10) * 4 + 4),param_3);
  iVar1 = *(int *)(param_1 + (char)(*param_2 + -0x10) * 4 + 4);
  if (*(short *)(iVar1 + 0x1fe) < *(short *)(iVar1 + 0x8c)) {
    *(short *)(iVar1 + 0x8c) = *(short *)(iVar1 + 0x1fe);
    return;
  }
  return;
}



void fn_0016de70(int param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  iVar1 = fn_00174828(DAT_008977e4);
  iVar2 = *(int *)(param_1 + (char)(*param_2 + -0x10) * 4 + 4);
  sVar3 = *(short *)(iVar2 + 0x8c) - (short)param_3;
  if (-1 < param_3) {
    if (sVar3 < 1) {
      sVar3 = 0;
    }
    *(short *)(iVar2 + 0x8c) = sVar3;
    fn_0017b830(*(undefined4 *)(param_1 + (char)(*param_2 + -0x10) * 4 + 4));
    return;
  }
  if (*(char *)(iVar1 + *param_2 * 0x418 + -0x4019) != '\0') {
    *(undefined1 *)(iVar2 + 0x55) = 1;
  }
  if (*(short *)(iVar2 + 0x1fe) < sVar3) {
    sVar3 = *(short *)(iVar2 + 0x1fe);
  }
  *(short *)(*(int *)(param_1 + (char)(*param_2 + -0x10) * 4 + 4) + 0x8c) = sVar3;
  return;
}



void fn_0016ddf0(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  uint in_fpscr;
  float in_s0;
  float fVar2;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_2 == -1) {
    *(undefined4 *)(param_1 + 4) = param_3;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    *(int *)(param_1 + 4) = param_2;
  }
  *(undefined1 *)(param_1 + 0x19) = param_4;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(float *)(param_1 + 0xc) = in_s0;
  uVar1 = fn_00300f74(*(undefined4 *)(param_1 + 4),param_3);
  fVar2 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  *(float *)(param_1 + 0x1c) = in_s0 / fVar2;
  return;
}



void fn_0016ddb4(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



int fn_0016dd44(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = &PTR_LAB_008247a8;
  param_1[1] = 0xc1a00000;
  param_1[2] = 0x42200000;
  param_1[3] = 0xc3480000;
  param_1[4] = 0;
  param_1[5] = 0x41f00000;
  param_1[6] = 0;
  param_1[7] = param_4;
  iVar1 = fn_00183dcc(param_1 + 8);
  iVar1 = fn_00183dcc(iVar1 + 0xc,param_3);
  return iVar1 + -0x2c;
}



void fn_0016dc9c(int *param_1)

{
  if (*param_1 + param_1[2] < 1) {
    param_1[2] = 0;
  }
  else {
    param_1[2] = *param_1 + param_1[2];
  }
  *param_1 = 0;
  if (param_1[3] + param_1[1] < 1) {
    param_1[3] = 0;
  }
  else {
    param_1[3] = param_1[3] + param_1[1];
  }
  param_1[1] = 0;
  return;
}



void fn_0016dc88(int param_1,uint param_2,int param_3)

{
  *(int *)(param_1 + (param_2 ^ 1) * 4) = param_3 + *(int *)(param_1 + (param_2 ^ 1) * 4);
  return;
}



void fn_0016dc6c(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_0081ff58;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



uint fn_0016dc08(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = (char *)fn_001880b0();
  uVar2 = 0;
  switch(param_2) {
  case 0:
    uVar2 = (uint)*pcVar1;
    break;
  case 1:
    uVar2 = (uint)pcVar1[1];
    break;
  case 2:
    uVar2 = (uint)pcVar1[2];
    break;
  case 3:
    uVar2 = (uint)pcVar1[3];
    break;
  case 4:
    uVar2 = (uint)pcVar1[4];
    break;
  default:
    goto switchD_0016dc1c_default;
  }
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
switchD_0016dc1c_default:
  return uVar2 & 0xff;
}



void fn_0016db28(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar5;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x108);
  uVar3 = uVar1;
  if (uVar1 == 5) {
    uVar3 = 1;
  }
  piVar4 = *(int **)(param_1 + uVar3 * 4 + 0xf8);
  if (uVar1 == param_2) {
    if (piVar4 != (int *)0x0) {
      piVar4[4] = 0;
    }
  }
  else {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x10))(piVar4,0);
    }
    *(char *)(param_1 + 0x108) = (char)param_2;
    if (param_2 != 0) {
      if (param_2 == 5) {
        param_2 = 1;
      }
      piVar4 = *(int **)(param_1 + param_2 * 4 + 0xf8);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x10))(piVar4,1);
        *(undefined4 *)(param_1 + 0x10c) = in_s0;
        if (*(char *)(param_1 + 0x108) == '\x05') {
          uVar2 = fn_00176970(piVar4);
          fVar5 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
          *(float *)(param_1 + 0x124) = (fVar5 - (float)piVar4[4]) * 0.5;
          return;
        }
      }
    }
  }
  return;
}



void fn_0016da8c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar1 = 0;
  *(byte *)(*(int *)(param_1 + 0x10) + 0x44) = *(byte *)(*(int *)(param_1 + 0x10) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xc) + 0x44) = *(byte *)(*(int *)(param_1 + 0xc) + 0x44) & 0xfe | 1;
  *(byte *)(*(int *)(param_1 + 0xf4) + 0x44) = *(byte *)(*(int *)(param_1 + 0xf4) + 0x44) & 0xfe | 1
  ;
  do {
    iVar2 = param_1 + iVar1 * 4;
    local_18 = 0xff3250ff;
    fn_0017a8a4(param_1,*(undefined4 *)(iVar2 + 0x94),&local_18);
    local_18 = 0xff3250ff;
    fn_0017a8a4(param_1,*(undefined4 *)(param_1 + 0xc),&local_18);
    iVar2 = *(int *)(iVar2 + 0x94);
    iVar1 = iVar1 + 1;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
  } while (iVar1 < 0x18);
  return;
}



void fn_0016d9bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uStack_28;
  
  if (*(uint *)(param_1 + 0x110) != 1000) {
    uVar4 = 0;
    uVar1 = *(uint *)(param_1 + 0x110);
    uStack_28 = param_4;
    do {
      uVar3 = 0;
      do {
        iVar5 = param_1 + uVar4 * 0x28 + uVar3 * 4;
        iVar2 = *(int *)(iVar5 + 0x14);
        *(byte *)(iVar2 + 0x44) = uVar3 == uVar1 % 10 | *(byte *)(iVar2 + 0x44) & 0xfe;
        fn_0017aaf0(&uStack_28,param_1);
        fn_0017a8a4(param_1,*(undefined4 *)(iVar5 + 0x14),&uStack_28);
        uVar3 = uVar3 + 1;
      } while (uVar3 < 10);
      uVar4 = uVar4 + 1;
      uVar1 = uVar1 / 10;
    } while (uVar4 < 3);
    if (*(uint *)(param_1 + 0x110) < 100) {
      uVar1 = 0;
      do {
        iVar2 = uVar1 * 4;
        uVar1 = uVar1 + 1;
        iVar2 = *(int *)(param_1 + iVar2 + 100);
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
      } while (uVar1 < 10);
    }
  }
  return;
}


