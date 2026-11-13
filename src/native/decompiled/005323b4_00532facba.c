#include "005323b4_00532facba.h"



undefined4 * fn_00532c58(int param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  float *pfVar3;
  int extraout_r1;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fn_00300f74(*(undefined4 *)(param_2 + 4),*param_3);
  iVar2 = DAT_008c356c;
  if (extraout_r1 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x88);
    *(ushort *)(param_1 + 0x88) = uVar1 + 1;
    pfVar3 = (float *)(iVar2 + (uVar1 & 0xffff01ff) * 0xc);
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2];
    fVar4 = (float)param_3[2];
    fVar5 = (float)param_3[3];
    *(float *)(param_2 + 0x24) = *(float *)(param_2 + 0x24) + *pfVar3 * (float)param_3[1];
    *(float *)(param_2 + 0x28) = *(float *)(param_2 + 0x28) + fVar6 * fVar4;
    *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) + fVar7 * fVar5;
  }
  return param_3 + 4;
}


