#include "002f09a4_002f1d48ab.h"



int fn_002f1ae4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar5 = 0;
  iVar4 = 0;
  fVar9 = 10000.0;
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_006b6740();
  if (0 < iVar1) {
    do {
      uVar2 = fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b7068(uVar2,iVar4);
      iVar3 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
      fVar8 = *(float *)(iVar1 + 8) - *(float *)(iVar3 + 8);
      fVar7 = *(float *)(iVar1 + 0xc) - *(float *)(iVar3 + 0xc);
      fVar6 = *(float *)(iVar1 + 0x10) - *(float *)(iVar3 + 0x10);
      fVar6 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
      if ((*(byte *)(iVar1 + 0x53) == param_2) &&
         (iVar3 = fn_0068c570(iVar1), iVar3 != 0 && fVar6 < fVar9)) {
        iVar5 = iVar1;
        fVar9 = fVar6;
      }
      iVar4 = iVar4 + 1;
      fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b6740();
    } while (iVar4 < iVar1);
  }
  return iVar5;
}


