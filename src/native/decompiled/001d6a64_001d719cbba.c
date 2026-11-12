#include "001d6a64_001d719cbba.h"



void fn_001d7128(int param_1,float *param_2,undefined4 param_3)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined1 *)(param_1 + 0xc) = 2;
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  fVar3 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = 1.0 / fVar3;
  *(float *)(param_1 + 0x80) = (*param_2 - *(float *)(param_1 + 0x1c)) * fVar3;
  *(float *)(param_1 + 0x84) = (fVar2 - *(float *)(param_1 + 0x20)) * fVar3;
  *(float *)(param_1 + 0x88) = (fVar1 - *(float *)(param_1 + 0x24)) * fVar3;
  *(undefined4 *)(param_1 + 0x8c) = param_3;
  fVar1 = param_2[1];
  fVar3 = param_2[2];
  *(float *)(param_1 + 0x1c) = *param_2;
  *(float *)(param_1 + 0x20) = fVar1;
  *(float *)(param_1 + 0x24) = fVar3;
  return;
}


