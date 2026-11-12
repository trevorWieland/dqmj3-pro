#include "00535200_00535618.h"



void fn_00535618(int param_1)

{
  int iVar1;
  float in_s0;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  fn_00535e10();
  fVar2 = *(float *)(*(int *)(param_1 + 0x144) + 0x300);
  fVar2 = fVar2 + (1.0 - fVar2) * (1.0 - in_s0);
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) * fVar2;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) * fVar2;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) * fVar2;
  iVar1 = *(int *)(param_1 + 0x150);
  uVar3 = *(undefined4 *)(iVar1 + 0x74);
  uVar4 = *(undefined4 *)(iVar1 + 0x84);
  uVar5 = *(undefined4 *)(iVar1 + 0x34);
  uVar6 = *(undefined4 *)(iVar1 + 0x44);
  uVar7 = *(undefined4 *)(iVar1 + 0x54);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(iVar1 + 100);
  *(undefined4 *)(param_1 + 0x128) = uVar3;
  *(undefined4 *)(param_1 + 0x138) = uVar4;
  *(undefined4 *)(param_1 + 0xe8) = uVar5;
  *(undefined4 *)(param_1 + 0xf8) = uVar6;
  *(undefined4 *)(param_1 + 0x108) = uVar7;
  return;
}



void fn_00535560(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  fn_00535e10();
  iVar1 = *(int *)(param_1 + 0x150);
  uVar2 = *(undefined4 *)(iVar1 + 0x74);
  uVar3 = *(undefined4 *)(iVar1 + 0x84);
  uVar4 = *(undefined4 *)(iVar1 + 0x34);
  uVar5 = *(undefined4 *)(iVar1 + 0x44);
  uVar6 = *(undefined4 *)(iVar1 + 0x54);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(iVar1 + 100);
  *(undefined4 *)(param_1 + 0x128) = uVar2;
  *(undefined4 *)(param_1 + 0x138) = uVar3;
  *(undefined4 *)(param_1 + 0xe8) = uVar4;
  *(undefined4 *)(param_1 + 0xf8) = uVar5;
  *(undefined4 *)(param_1 + 0x108) = uVar6;
  return;
}



void fn_00535464(int param_1)

{
  float in_s0;
  
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x5c) * in_s0;
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x54) * in_s0;
  *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x58) * in_s0;
  fn_0053db54(param_1,1);
  return;
}



void fn_00535424(int param_1)

{
  float in_s0;
  
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x5c) * in_s0;
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x54) * in_s0;
  *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x58) * in_s0;
  fn_0053db54(param_1,0);
  return;
}



void fn_00535404(undefined4 param_1)

{
  fn_0053db54(param_1,0);
  fn_0053db54(param_1,1);
  return;
}



void fn_00535300(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint in_fpscr;
  float in_s0;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  
  iVar4 = *(int *)(param_1 + 0x144);
  iVar1 = *(int *)(param_1 + 4);
  iVar6 = (int)*(short *)(iVar4 + 0x340);
  uVar5 = (uint)*(short *)(iVar4 + 0x342);
  if (iVar6 == 0) {
    iVar1 = iVar1 * uVar5;
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    iVar3 = iVar6;
  }
  uVar2 = fn_00300f74(iVar1,iVar3);
  if ((*(char *)(iVar4 + 0x33a) == '\0') || (uVar2 < uVar5)) {
    if ((iVar6 != 0) && ((*(char *)(iVar4 + 0x33a) == '\0' && (*(char *)(iVar4 + 0x339) != '\0'))))
    {
      uVar2 = uVar2 + *(int *)(param_1 + 0x15c);
    }
    fn_00169f1c(uVar2,uVar5);
    uVar11 = fn_00169f1c(*(undefined1 *)(extraout_r1 + iVar4 + 0x344),
                          *(undefined1 *)(iVar4 + 0x33b));
    fVar9 = *(float *)(iVar4 + 0x36c);
    fVar8 = (float)VectorSignedToFloat((int)uVar11,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = (float)VectorSignedToFloat((int)((ulonglong)uVar11 >> 0x20),(byte)(in_fpscr >> 0x16) & 3
                                      );
    *(float *)(param_1 + 0x78) = *(float *)(iVar4 + 0x368) * fVar7;
    *(float *)(param_1 + 0x7c) = fVar9 * fVar8;
  }
  fVar8 = *(float *)(iVar4 + 0x390);
  fVar7 = *(float *)(iVar4 + 0x3a4);
  fVar9 = *(float *)(iVar4 + 0x378);
  fVar10 = *(float *)(iVar4 + 0x374);
  *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) + *(float *)(iVar4 + 0x38c) * in_s0;
  *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x8c) + fVar8 * in_s0;
  *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x74) + fVar7 * in_s0;
  *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) + fVar10 * in_s0;
  *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) + fVar9 * in_s0;
  return;
}



void fn_00535200(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_r1;
  uint uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  
  iVar2 = *(int *)(param_1 + 0x144);
  iVar6 = (int)*(short *)(iVar2 + 0x340);
  iVar3 = *(int *)(param_1 + 4);
  uVar5 = (uint)*(short *)(*(int *)(param_1 + 0x144) + 0x342);
  iVar1 = iVar6;
  if (iVar6 == 0) {
    iVar3 = iVar3 * uVar5;
    iVar1 = *(int *)(param_1 + 8);
  }
  uVar4 = fn_00300f74(iVar3,iVar1);
  if ((*(char *)(iVar2 + 0x33a) == '\0') || (uVar4 < uVar5)) {
    if ((iVar6 != 0) && ((*(char *)(iVar2 + 0x33a) == '\0' && (*(char *)(iVar2 + 0x339) != '\0'))))
    {
      uVar4 = uVar4 + *(int *)(param_1 + 0x15c);
    }
    fn_00169f1c(uVar4,uVar5);
    uVar10 = fn_00169f1c(*(undefined1 *)(extraout_r1 + iVar2 + 0x344),
                          *(undefined1 *)(iVar2 + 0x33b));
    fVar9 = *(float *)(iVar2 + 0x36c);
    fVar8 = (float)VectorSignedToFloat((int)uVar10,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = (float)VectorSignedToFloat((int)((ulonglong)uVar10 >> 0x20),(byte)(in_fpscr >> 0x16) & 3
                                      );
    *(float *)(param_1 + 0x78) = *(float *)(iVar2 + 0x368) * fVar7;
    *(float *)(param_1 + 0x7c) = fVar9 * fVar8;
  }
  return;
}


