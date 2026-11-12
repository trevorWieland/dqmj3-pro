#include "002334f0_00234390bbb.h"



void fn_00234390(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = *(float *)(param_1 + 0x18);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar3 = 1.0 / SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar2 * fVar2);
  fVar7 = *(float *)(param_1 + 8);
  fVar8 = *(float *)(param_1 + 0xc);
  iVar1 = *(int *)(param_2 + 4);
  fVar4 = *(float *)(param_1 + 0x28);
  *(float *)(iVar1 + 0x98) = *(float *)(param_1 + 4) - fVar5 * fVar3 * fVar4;
  *(float *)(iVar1 + 0xa8) = fVar7 - fVar6 * fVar3 * fVar4;
  *(float *)(iVar1 + 0xb8) = fVar8 - fVar2 * fVar3 * fVar4;
  fn_005456f4(*(undefined4 *)(param_2 + 4),param_1 + 4);
  fn_005455e4(*(undefined4 *)(param_2 + 4),param_1 + 0x1c);
  return;
}


