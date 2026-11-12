#include "005335a0_00533a98b.h"



int * fn_00533a98(int param_1,int param_2,int *param_3)

{
  float in_s0;
  float fVar1;
  float fVar2;
  float fVar3;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [60];
  
  if (*param_3 == 0) {
    fVar2 = (float)param_3[4];
    fVar3 = (float)param_3[2];
    fVar1 = *(float *)(param_2 + 0x14) +
            fVar2 * ((float)param_3[3] - *(float *)(param_2 + 0x14)) * in_s0;
    *(float *)(param_2 + 0xc) =
         *(float *)(param_2 + 0xc) + fVar2 * ((float)param_3[1] - *(float *)(param_2 + 0xc)) * in_s0
    ;
    *(float *)(param_2 + 0x10) =
         *(float *)(param_2 + 0x10) + fVar2 * (fVar3 - *(float *)(param_2 + 0x10)) * in_s0;
  }
  else {
    local_5c = *(undefined4 *)(param_1 + 0x34);
    local_58 = *(undefined4 *)(param_1 + 0x44);
    local_54 = *(undefined4 *)(param_1 + 0x54);
    if (*(int *)(param_1 + 0xcc) == 0) {
      fn_001ad184(auStack_50,param_1 + 0x58);
    }
    else {
      fn_001ad184(auStack_50,param_2 + 0x10c);
    }
    fn_0016947c(&local_68,auStack_50,&local_5c);
    fVar2 = (float)param_3[4];
    fVar3 = (float)param_3[2];
    fVar1 = (float)param_3[3];
    *(float *)(param_2 + 0xc) =
         *(float *)(param_2 + 0xc) +
         fVar2 * ((local_68 + (float)param_3[1]) - *(float *)(param_2 + 0xc)) * in_s0;
    *(float *)(param_2 + 0x10) =
         *(float *)(param_2 + 0x10) +
         fVar2 * ((local_64 + fVar3) - *(float *)(param_2 + 0x10)) * in_s0;
    fVar1 = *(float *)(param_2 + 0x14) +
            fVar2 * ((local_60 + fVar1) - *(float *)(param_2 + 0x14)) * in_s0;
  }
  *(float *)(param_2 + 0x14) = fVar1;
  return param_3 + 5;
}


