#include "005f12ec_005f12ec.h"



undefined4 fn_005f12ec(float *param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float in_s1;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  fVar12 = *param_3;
  fStack_5c = *param_1;
  bVar2 = fStack_5c <= fVar12;
  if (!bVar2) {
    in_s1 = *param_4;
  }
  if (bVar2 || (bVar2 || fStack_5c <= in_s1)) {
    fVar10 = *param_2;
    bVar2 = fVar12 < fVar10;
    bVar3 = fVar12 == fVar10;
    bVar4 = NAN(fVar12) || NAN(fVar10);
    if (!bVar3 && !bVar2) {
      in_s1 = *param_4;
      bVar2 = in_s1 < fVar10;
      bVar3 = in_s1 == fVar10;
      bVar4 = NAN(in_s1) || NAN(fVar10);
    }
    if (bVar3 || bVar2 != bVar4) {
      fVar11 = param_3[1];
      fVar9 = param_1[1];
      bVar2 = fVar9 <= fVar11;
      if (!bVar2) {
        in_s1 = param_4[1];
      }
      if (bVar2 || (bVar2 || fVar9 <= in_s1)) {
        fVar7 = param_2[1];
        bVar2 = fVar11 < fVar7;
        bVar3 = fVar11 == fVar7;
        bVar4 = NAN(fVar11) || NAN(fVar7);
        if (!bVar3 && !bVar2) {
          in_s1 = param_4[1];
          bVar2 = in_s1 < fVar7;
          bVar3 = in_s1 == fVar7;
          bVar4 = NAN(in_s1) || NAN(fVar7);
        }
        if (bVar3 || bVar2 != bVar4) {
          fVar8 = param_3[2];
          fVar6 = param_1[2];
          bVar2 = fVar6 <= fVar8;
          if (!bVar2) {
            in_s1 = param_4[2];
          }
          if (bVar2 || (bVar2 || fVar6 <= in_s1)) {
            fVar5 = param_2[2];
            bVar2 = fVar8 < fVar5;
            bVar3 = fVar8 == fVar5;
            bVar4 = NAN(fVar8) || NAN(fVar5);
            if (!bVar3 && !bVar2) {
              fVar13 = param_4[2];
              bVar2 = fVar13 < fVar5;
              bVar3 = fVar13 == fVar5;
              bVar4 = NAN(fVar13) || NAN(fVar5);
            }
            if (bVar3 || bVar2 != bVar4) {
              bVar2 = fStack_5c == fVar12;
              bVar3 = fVar12 <= fStack_5c;
              if (!bVar3 || bVar2) {
                bVar2 = fVar12 == fVar10;
                bVar3 = fVar10 <= fVar12;
              }
              if ((((!bVar3 || bVar2) && (fVar9 <= fVar11)) && (fVar11 <= fVar7)) &&
                 ((fVar6 <= fVar8 && (fVar8 <= fVar5)))) {
                return 1;
              }
              fVar12 = *param_4;
              bVar2 = fStack_5c == fVar12;
              bVar3 = fVar12 <= fStack_5c;
              if (!bVar3 || bVar2) {
                bVar2 = fVar12 == fVar10;
                bVar3 = fVar10 <= fVar12;
              }
              if (!bVar3 || bVar2) {
                fVar12 = param_4[1];
                bVar2 = fVar9 == fVar12;
                bVar3 = fVar12 <= fVar9;
                if (!bVar3 || bVar2) {
                  bVar2 = fVar12 == fVar7;
                  bVar3 = fVar7 <= fVar12;
                }
                if (!bVar3 || bVar2) {
                  fVar12 = param_4[2];
                  bVar2 = fVar6 == fVar12;
                  bVar3 = fVar12 <= fVar6;
                  if (!bVar3 || bVar2) {
                    bVar2 = fVar12 == fVar5;
                    bVar3 = fVar5 <= fVar12;
                  }
                  if (!bVar3 || bVar2) {
                    return 1;
                  }
                }
              }
              fStack_58 = param_2[1];
              fStack_54 = param_1[2];
              fStack_50 = *param_1;
              fStack_4c = param_1[1];
              fStack_48 = param_2[2];
              fStack_44 = *param_3;
              fStack_40 = param_3[1];
              fStack_3c = param_1[2];
              fStack_38 = *param_4;
              fStack_34 = param_4[1];
              fStack_30 = param_1[2];
              fStack_2c = *param_3;
              fStack_28 = param_1[1];
              fStack_24 = param_3[2];
              fStack_20 = *param_4;
              fStack_1c = param_1[1];
              fStack_18 = param_4[2];
              iVar1 = fn_005f19e0(param_1,&fStack_5c,&fStack_44,&fStack_38);
              if ((iVar1 == 0) ||
                 (iVar1 = fn_005f19e0(param_1,&fStack_50,&fStack_2c,&fStack_20), iVar1 == 0)) {
                fStack_5c = *param_2;
                fStack_58 = param_1[1];
                fStack_54 = param_1[2];
                fStack_50 = *param_1;
                fStack_4c = param_2[1];
                fStack_48 = param_1[2];
                fStack_44 = *param_3;
                fStack_40 = param_1[1];
                fStack_3c = param_3[2];
                fStack_38 = *param_4;
                fStack_34 = param_1[1];
                fStack_30 = param_4[2];
                fStack_2c = *param_1;
                fStack_28 = param_3[1];
                fStack_24 = param_3[2];
                fStack_20 = *param_1;
                fStack_1c = param_4[1];
                fStack_18 = param_4[2];
                iVar1 = fn_005f19e0(param_1,&fStack_5c,&fStack_44,&fStack_38);
                if ((iVar1 == 0) ||
                   (iVar1 = fn_005f19e0(param_1,&fStack_50,&fStack_2c,&fStack_20), iVar1 == 0)) {
                  fStack_5c = *param_2;
                  fStack_58 = param_1[1];
                  fStack_54 = param_1[2];
                  fStack_50 = *param_1;
                  fStack_4c = param_1[1];
                  fStack_48 = param_2[2];
                  fStack_44 = *param_3;
                  fStack_40 = param_3[1];
                  fStack_3c = param_1[2];
                  fStack_38 = *param_4;
                  fStack_34 = param_4[1];
                  fStack_30 = param_1[2];
                  fStack_2c = *param_1;
                  fStack_28 = param_3[1];
                  fStack_24 = param_3[2];
                  fStack_20 = *param_1;
                  fStack_1c = param_4[1];
                  fStack_18 = param_4[2];
                  iVar1 = fn_005f19e0(param_1,&fStack_5c,&fStack_44,&fStack_38);
                  if ((iVar1 == 0) ||
                     (iVar1 = fn_005f19e0(param_1,&fStack_50,&fStack_2c,&fStack_20), iVar1 == 0)) {
                    fStack_5c = *param_2;
                    fStack_58 = param_1[1];
                    fStack_54 = param_2[2];
                    fStack_50 = *param_2;
                    fStack_4c = param_2[1];
                    fStack_48 = param_1[2];
                    fStack_44 = *param_3;
                    fStack_40 = param_3[1];
                    fStack_3c = param_2[2];
                    fStack_38 = *param_4;
                    fStack_34 = param_4[1];
                    fStack_30 = param_2[2];
                    fStack_2c = *param_3;
                    fStack_28 = param_2[1];
                    fStack_24 = param_3[2];
                    fStack_20 = *param_4;
                    fStack_1c = param_2[1];
                    fStack_18 = param_4[2];
                    iVar1 = fn_005f19e0(param_2,&fStack_5c,&fStack_44,&fStack_38);
                    if ((iVar1 == 0) ||
                       (iVar1 = fn_005f19e0(param_2,&fStack_50,&fStack_2c,&fStack_20), iVar1 == 0))
                    {
                      fStack_5c = *param_1;
                      fStack_58 = param_2[1];
                      fStack_54 = param_2[2];
                      fStack_50 = *param_2;
                      fStack_4c = param_1[1];
                      fStack_48 = param_2[2];
                      fStack_44 = *param_3;
                      fStack_40 = param_2[1];
                      fStack_3c = param_3[2];
                      fStack_38 = *param_4;
                      fStack_34 = param_2[1];
                      fStack_30 = param_4[2];
                      fStack_2c = *param_2;
                      fStack_28 = param_3[1];
                      fStack_24 = param_3[2];
                      fStack_20 = *param_2;
                      fStack_1c = param_4[1];
                      fStack_18 = param_4[2];
                      iVar1 = fn_005f19e0(param_2,&fStack_5c,&fStack_44,&fStack_38);
                      if ((iVar1 == 0) ||
                         (iVar1 = fn_005f19e0(param_2,&fStack_50,&fStack_2c,&fStack_20), iVar1 == 0
                         )) {
                        fStack_5c = *param_1;
                        fStack_58 = param_2[1];
                        fStack_54 = param_2[2];
                        fStack_50 = *param_2;
                        fStack_4c = param_2[1];
                        fStack_48 = param_1[2];
                        fStack_44 = *param_3;
                        fStack_40 = param_3[1];
                        fStack_3c = param_2[2];
                        fStack_38 = *param_4;
                        fStack_34 = param_4[1];
                        fStack_30 = param_2[2];
                        fStack_2c = *param_2;
                        fStack_28 = param_3[1];
                        fStack_24 = param_3[2];
                        fStack_20 = *param_2;
                        fStack_1c = param_4[1];
                        fStack_18 = param_4[2];
                        iVar1 = fn_005f19e0(param_2,&fStack_5c,&fStack_44,&fStack_38);
                        if ((iVar1 == 0) ||
                           (iVar1 = fn_005f19e0(param_2,&fStack_50,&fStack_2c,&fStack_20),
                           iVar1 == 0)) {
                          return 0;
                        }
                      }
                    }
                  }
                }
              }
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


