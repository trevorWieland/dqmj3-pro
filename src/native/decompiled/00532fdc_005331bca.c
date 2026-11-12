#include "00532fdc_005331bca.h"



short * fn_00532fdc(int param_1,undefined4 *param_2,short *param_3)

{
  float *pfVar1;
  uint in_fpscr;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float local_60;
  float local_5c;
  float fStack_58;
  float local_50;
  float local_4c;
  float fStack_48;
  undefined1 auStack_30 [4];
  float local_2c;
  
  fVar5 = *(float *)(param_3 + 2);
  if (param_3[1] == 0) {
    if (*param_3 == 0) {
      if ((float)param_2[4] < fVar5) {
        param_2[4] = fVar5;
        param_2[1] = param_2[2];
        uVar2 = VectorSignedToFloat(param_2[2],(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
        *param_2 = uVar2;
      }
    }
    else if ((*param_3 == 1) && ((float)param_2[4] < fVar5)) {
      fVar3 = *(float *)(param_3 + 4);
      param_2[4] = fVar5;
      param_2[10] = -((float)param_2[10] * fVar3);
    }
  }
  else {
    if (*(int *)(param_1 + 0xcc) == 0) {
      pfVar1 = (float *)(param_1 + 0x58);
    }
    else {
      pfVar1 = (float *)(param_2 + 0x43);
    }
    fn_0016947c(auStack_30,pfVar1,param_2 + 3);
    if (*param_3 == 0) {
      if (local_2c < fVar5) {
        param_2[1] = param_2[2];
        uVar2 = VectorSignedToFloat(param_2[2],(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
        *param_2 = uVar2;
      }
    }
    else if ((*param_3 == 1) && (local_2c < fVar5)) {
      local_2c = fVar5 + 0.0001;
      fVar4 = (float)param_2[9];
      fVar3 = (float)param_2[10];
      fVar5 = (float)param_2[0xb];
      fVar6 = *pfVar1 * fVar4 + pfVar1[1] * fVar3 + pfVar1[2] * fVar5;
      fVar7 = pfVar1[8] * fVar4 + pfVar1[9] * fVar3 + pfVar1[10] * fVar5;
      fVar5 = -((pfVar1[4] * fVar4 + pfVar1[5] * fVar3 + pfVar1[6] * fVar5) *
               *(float *)(param_3 + 4));
      fn_001ad184(&local_70,pfVar1);
      fn_0016947c(param_2 + 3,&local_70,auStack_30);
      param_2[9] = local_70 * fVar6 + fStack_6c * fVar5 + fStack_68 * fVar7;
      param_2[10] = local_60 * fVar6 + local_5c * fVar5 + fStack_58 * fVar7;
      param_2[0xb] = local_50 * fVar6 + local_4c * fVar5 + fStack_48 * fVar7;
    }
  }
  return param_3 + 6;
}


