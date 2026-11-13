#include "0055fa6c_0055fa84.h"



void fn_0055fa84(int param_1,byte *param_2)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar1 = param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10;
  uVar2 = VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x31),(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(param_1 + 0x608) = uVar2;
  fVar10 = (float)VectorUnsignedToFloat((uint)*param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = (float)VectorUnsignedToFloat((uint)param_2[1],(byte)(in_fpscr >> 0x16) & 3);
  fVar8 = (float)VectorUnsignedToFloat((uint)param_2[2],(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = (float)VectorUnsignedToFloat((uint)param_2[4],(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = (float)VectorUnsignedToFloat((uint)param_2[3],(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = (float)VectorUnsignedToFloat((uint)param_2[5],(byte)(in_fpscr >> 0x16) & 3);
  fVar5 = (float)VectorUnsignedToFloat((uint)param_2[6],(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = (float)VectorUnsignedToFloat((uint)param_2[7],(byte)(in_fpscr >> 0x16) & 3);
  *(float *)(iVar1 + 0x1f8) = fVar10 * 0.003921569;
  *(float *)(iVar1 + 0x1fc) = fVar9 * 0.003921569;
  *(float *)(iVar1 + 0x200) = fVar8 * 0.003921569;
  *(float *)(iVar1 + 0x204) = fVar7 * 0.003921569;
  *(float *)(iVar1 + 0x214) = fVar6 * 0.003921569;
  *(float *)(iVar1 + 0x208) = fVar3 * 0.003921569;
  *(float *)(iVar1 + 0x20c) = fVar4 * 0.003921569;
  *(float *)(iVar1 + 0x210) = fVar5 * 0.003921569;
  *(char *)(param_1 + 0x31) = *(char *)(param_1 + 0x31) + '\x02';
  return;
}



void fn_0055fa6c(int param_1)

{
  float in_s0;
  float in_s1;
  undefined4 in_s2;
  
  *(float *)(param_1 + 0x78) = in_s0;
  *(float *)(param_1 + 0x7c) = in_s1 * in_s0;
  *(undefined4 *)(param_1 + 0x80) = in_s2;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}


