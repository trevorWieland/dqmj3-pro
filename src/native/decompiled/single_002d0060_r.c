#include "single_002d0060_r.h"


extern undefined4 NAN;

/* WARNING: Removing unreachable block (ram,0x002d00ec) */

void fn_002d0060(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_18 [4];
  
  iVar1 = fn_0068eb0c(DAT_008977e8);
  fVar4 = *(float *)(iVar1 + 8) - (float)param_1[2];
  fVar2 = *(float *)(iVar1 + 0xc) - (float)param_1[3];
  fVar3 = *(float *)(iVar1 + 0x10) - (float)param_1[4];
  local_18[0] = (DAT_00896ce4 - SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3)) /
                (DAT_00896ce4 - DAT_00896ce0);
  local_18[1] = 0.0;
  local_18[2] = 1.0;
  (**(code **)(*param_1 + 0x54))(param_1);
  iVar1 = (**(code **)(*(int *)param_1[0x1d] + 0xc))();
  if (iVar1 == 0) {
    local_18[0] = -NAN;
    (**(code **)(*param_1 + 0x4c))(param_1,local_18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002d0164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}


