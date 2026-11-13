#include "006b5fa4_006b66e4.h"



bool fn_006b66e4(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x58))();
  return iVar1 - 0xbU < 5;
}



bool fn_006b6668(int param_1,float *param_2,float *param_3)

{
  float in_s0;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = ((*(float *)(param_1 + 8) + *param_2) - 0.0) - *param_3;
  fVar1 = ((*(float *)(param_1 + 0xc) + param_2[1]) - in_s0) - param_3[1];
  fVar2 = ((*(float *)(param_1 + 0x10) + param_2[2]) - 0.0) - param_3[2];
  return SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) < param_2[3] + in_s0;
}



void fn_006b658c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar2 = 0;
  local_20 = 0;
  local_1c = 0x3f800000;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
    DAT_008f9e2c = uVar2;
    DAT_008f9e30 = uVar2;
    DAT_008f9e34 = uVar2;
  }
  fn_005f2d30(&local_20);
  local_20 = uVar2;
  fn_005f2d30(&local_20);
  return;
}



bool fn_006b6574(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}



undefined4 fn_006b6530(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1[1] + 0x11) != '\0') {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_3);
    if (iVar1 == param_2) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



undefined4 fn_006b64f8(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((int)param_2 < 0) ||
     ((uint)(*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 2) <= param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x80) + param_2 * 4);
  }
  return uVar1;
}



int fn_006b64a4(int param_1)

{
  return *(int *)(param_1 + 4) + 0x26c;
}



undefined2 fn_006b6494(int param_1)

{
  return *(undefined2 *)(*(int *)(param_1 + 4) + 0x26a);
}



undefined2 fn_006b6474(int param_1)

{
  return *(undefined2 *)(*(int *)(param_1 + 4) + 0x276);
}



undefined2 fn_006b6464(int param_1)

{
  return *(undefined2 *)(*(int *)(param_1 + 4) + 0x266);
}



void fn_006b6434(void)

{
  return;
}



undefined2 fn_006b63ec(int param_1)

{
  return *(undefined2 *)(*(int *)(param_1 + 4) + 0x264);
}



void fn_006b63c4(void)

{
  return;
}



void fn_006b6334(int param_1,int param_2)

{
  int *piVar1;
  int local_c [2];
  
  local_c[0] = param_2 + (uint)*(byte *)(*(int *)(param_1 + 4) + 700);
  piVar1 = local_c + 1;
  if (local_c[0] < 100) {
    piVar1 = local_c;
  }
  local_c[1] = 99;
  *(char *)(*(int *)(param_1 + 4) + 700) = (char)*piVar1;
  return;
}



void fn_006b6328(void)

{
  return;
}



int fn_006b62fc(int param_1)

{
  return (int)*(short *)(*(int *)(param_1 + 4) + 0x274);
}



undefined2 fn_006b62ec(int param_1)

{
  return *(undefined2 *)(*(int *)(param_1 + 4) + 0x268);
}



undefined8 fn_006b6228(int param_1)

{
  return *(undefined8 *)(*(int *)(param_1 + 4) + 0x278);
}



int fn_006b621c(int param_1)

{
  return *(int *)(param_1 + 4) + 100;
}



int fn_006b6204(int param_1)

{
  return *(int *)(param_1 + 4) + 0x34;
}



bool fn_006b61ec(int param_1)

{
  return *(char *)(*(int *)(param_1 + 0xe88) + 0x14) != '\0';
}



undefined4 fn_006b6178(float *param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (param_1[1] <= param_2[1]) {
    fVar3 = *param_2;
    fVar4 = *param_1 - param_1[3];
    bVar1 = fVar3 < fVar4;
    bVar2 = NAN(fVar3) || NAN(fVar4);
    if (!bVar1) {
      fVar4 = *param_1 + param_1[3];
      bVar1 = fVar4 < fVar3;
      bVar2 = NAN(fVar4) || NAN(fVar3);
    }
    if (bVar1 == bVar2) {
      if ((param_1[2] - param_1[4] <= param_2[2]) && (param_2[2] <= param_1[2] + param_1[4])) {
        return 1;
      }
    }
  }
  return 0;
}



int fn_006b6164(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006c7290(*(undefined4 *)(param_1 + 0xc));
  return iVar1 + 4;
}



void fn_006b6088(int param_1)

{
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  fn_006cdaec();
  return;
}



bool fn_006b6074(int param_1,uint param_2)

{
  return ((uint)*(byte *)(param_1 + 0xc) & 1 << (param_2 & 0xff)) != 0;
}



void fn_006b5fa4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_s0;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = *(undefined4 *)(DAT_008977e0 + 0x1c);
  uVar3 = *(undefined4 *)(DAT_008977e0 + 0xa8);
  iVar1 = fn_006f7a0c();
  if ((*(int *)(iVar1 + 0x30) == 0) || (iVar1 = fn_006c3a70(), iVar1 == 0)) {
    fn_006afb6c(uVar2,uVar3);
    uVar5 = in_s0;
    fn_006afb54(uVar2,uVar3);
    uVar4 = in_s0;
    fn_006afb3c(uVar2,uVar3);
    *param_2 = uVar5;
    param_2[1] = in_s0;
    param_2[2] = uVar4;
    return;
  }
  fn_006afbd4(uVar2,uVar3);
  uVar5 = in_s0;
  fn_006afbbc(uVar2,uVar3);
  uVar4 = in_s0;
  fn_006afba4(uVar2,uVar3);
  *param_2 = uVar5;
  param_2[1] = in_s0;
  param_2[2] = uVar4;
  return;
}


