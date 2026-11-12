#include "00214f00_00214f00.h"



void fn_00214f00(int param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  float in_s0;
  float in_s1;
  float fVar8;
  float in_s2;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar11 = *(float *)(param_1 + 0xf8);
  piVar1 = (int *)fn_006f72e0(DAT_008977e0);
  iVar2 = (**(code **)(*piVar1 + 0x3c))();
  fVar14 = 0.1;
  fVar12 = 1.0;
  fVar13 = 0.0;
  if (iVar2 == 0) {
    iVar2 = fn_006f7a5c(DAT_008977e0);
    pfVar3 = *(float **)(param_1 + 0x100);
    fVar10 = *(float *)(iVar2 + 0x1c) - (*(float *)(param_1 + 0x20) + *pfVar3);
    fVar8 = *(float *)(iVar2 + 0x24) - (*(float *)(param_1 + 0x28) + pfVar3[2]);
    fVar9 = *(float *)(iVar2 + 0x20) - (*(float *)(param_1 + 0x24) + pfVar3[1]);
    fVar8 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8) -
            *(float *)(*(int *)(param_1 + 0x100) + 0xc);
    cVar5 = NAN(*(float *)(param_1 + 0x11c)) || NAN(fVar8);
    if (fVar8 < *(float *)(param_1 + 0x11c)) {
      if (fVar8 <= *(float *)(param_1 + 0x118)) {
        return;
      }
      if ((DAT_008913ec & 1) != 0) {
        return;
      }
      iVar2 = fn_00303afc(&DAT_008913ec);
      if (iVar2 == 0) {
        return;
      }
      DAT_008913f0 = (fVar12 - *(float *)(param_1 + 0x120)) /
                     (*(float *)(param_1 + 0x11c) - *(float *)(param_1 + 0x118));
      return;
    }
  }
  else {
    iVar2 = fn_006f7a5c(DAT_008977e0);
    fn_006a99dc(param_1);
    in_s0 = *(float *)(iVar2 + 0x1c) - in_s0;
    in_s1 = *(float *)(iVar2 + 0x20) - in_s1;
    in_s2 = *(float *)(iVar2 + 0x24) - in_s2;
    fVar12 = SQRT(in_s0 * in_s0 + in_s1 * in_s1 + in_s2 * in_s2) -
             *(float *)(*(int *)(param_1 + 0x100) + 0xc);
    cVar5 = NAN(*(float *)(param_1 + 0x11c)) || NAN(fVar12);
    if (fVar12 < *(float *)(param_1 + 0x11c)) {
      if (fVar12 <= *(float *)(param_1 + 0x118)) {
        return;
      }
      if (fVar13 < fVar11) {
        if (fVar11 - fVar14 < fVar13) {
          return;
        }
        return;
      }
      return;
    }
  }
  pfVar3 = (float *)fn_006f7770(DAT_008977e0);
  fVar8 = *pfVar3 - *(float *)(param_1 + 0x20);
  fVar10 = pfVar3[1] - *(float *)(param_1 + 0x24);
  fVar12 = pfVar3[2] - *(float *)(param_1 + 0x28);
  bVar7 = (*(byte *)(param_1 + 0x138) & 8) == 0;
  bVar4 = false;
  fVar12 = SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar12 * fVar12);
  if (!bVar7) {
    fVar8 = *(float *)(param_1 + 0x124);
    bVar4 = fVar12 < fVar8;
    bVar7 = fVar12 == fVar8;
    cVar5 = NAN(fVar12) || NAN(fVar8);
  }
  if (bVar7 || bVar4 != (bool)cVar5) {
    if ((0x3f7fffff < (int)fVar11) || (0x3f800000 < (int)(fVar11 + fVar14))) {
      return;
    }
  }
  else {
    fVar8 = *(float *)(param_1 + 0x128);
    bVar4 = fVar8 < fVar12;
    bVar7 = fVar8 == fVar12;
    bVar6 = NAN(fVar8) || NAN(fVar12);
    if (!bVar7 && !bVar4) {
      bVar4 = fVar11 < fVar13;
      bVar7 = fVar11 == fVar13;
      bVar6 = NAN(fVar11) || NAN(fVar13);
      fVar8 = fVar13;
    }
    if (bVar7 || bVar4 != bVar6) {
      return;
    }
    if (fVar11 - fVar14 < fVar8) {
      return;
    }
  }
  return;
}


