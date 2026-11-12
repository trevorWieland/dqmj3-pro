#include "005356a8_00539064ab.h"



int fn_00535ec4(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 4) = DAT_008c3458;
  iVar1 = DAT_008c3474;
  iVar2 = DAT_008c3450;
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (DAT_008c3454 != 0) {
      *(int *)(*(int *)(DAT_008c3474 + 0x28) + 0x10) = DAT_008c3454 * 6;
      fn_001694e4(iVar2,*(undefined4 *)(iVar1 + 0x28),*(int *)(iVar1 + 0x2c) << 2);
      DAT_008c3450 = iVar2 + *(int *)(iVar1 + 0x2c) * 4;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + DAT_008c3454;
      DAT_008c3454 = 0;
    }
    iVar1 = DAT_008c3474;
    iVar2 = DAT_008c3450;
    fn_001694e4(DAT_008c3450,*(undefined4 *)(DAT_008c3474 + 0x10),
                 *(int *)(DAT_008c3474 + 0x14) << 2);
    iVar2 = iVar2 + *(int *)(iVar1 + 0x14) * 4;
  }
  return iVar2;
}



void fn_00535e10(int param_1)

{
  int iVar1;
  float *pfVar2;
  float in_s0;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar1 = *(int *)(param_1 + 0x144);
  fVar4 = *(float *)(iVar1 + 0x308);
  fVar5 = *(float *)(iVar1 + 0x30c);
  if (*(char *)(iVar1 + 0x17b) == '\0') {
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + *(float *)(iVar1 + 0x304) * in_s0;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar4 * in_s0;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar5 * in_s0;
    return;
  }
  pfVar2 = *(float **)(param_1 + 0x13c);
  fVar4 = fVar4 * in_s0;
  fVar5 = fVar5 * in_s0;
  fVar3 = *(float *)(iVar1 + 0x304) * in_s0;
  fVar6 = pfVar2[5];
  fVar11 = pfVar2[6];
  fVar9 = pfVar2[2];
  fVar7 = pfVar2[10];
  fVar10 = pfVar2[1];
  fVar8 = pfVar2[9];
  *(float *)(param_1 + 0x24) =
       *(float *)(param_1 + 0x24) + fVar3 * *pfVar2 + pfVar2[4] * fVar4 + fVar5 * pfVar2[8];
  *(float *)(param_1 + 0x28) =
       *(float *)(param_1 + 0x28) + fVar3 * fVar10 + fVar6 * fVar4 + fVar5 * fVar8;
  *(float *)(param_1 + 0x2c) =
       *(float *)(param_1 + 0x2c) + fVar3 * fVar9 + fVar11 * fVar4 + fVar5 * fVar7;
  return;
}


