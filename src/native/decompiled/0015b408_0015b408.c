#include "0015b408_0015b408.h"



/* WARNING: Type propagation algorithm not settling */

undefined4 fn_0015b408(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  char *pcVar15;
  code *pcVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  float in_s0;
  float in_s1;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  uint uStack_64;
  
  uVar24 = 0;
  fn_00182994(DAT_008977e4);
  iVar14 = (int)(char)param_2;
  uVar2 = fn_001659c0();
  uVar3 = fn_00182994(DAT_008977e4);
  iVar4 = fn_0017591c(uVar3,param_2,param_3);
  uVar3 = fn_00182994(DAT_008977e4);
  iVar5 = fn_001754f0(uVar3,param_2,param_3);
  if (iVar5 == 0) {
    uVar20 = 0x4080000000000000;
    uVar21 = 0x3f80000041700000;
    fVar22 = 30.0;
    uStack_64 = 1;
LAB_0015b4c4:
    do {
      uVar3 = fn_00182994(DAT_008977e4);
      iVar5 = fn_00174b40(uVar3,uStack_64,param_2,param_3);
      uVar3 = fn_00182994(DAT_008977e4);
      iVar6 = fn_00174d30(uVar3,uStack_64,param_2,param_3);
      uVar3 = fn_00182994(DAT_008977e4);
      uVar23 = fn_00174c34(uVar3,uStack_64,param_2,param_3);
      uVar13 = (uint)((ulonglong)uVar23 >> 0x20);
      iVar7 = (int)uVar23;
      if (iVar7 == 0) {
        if (iVar6 != 0) {
          if (uStack_64 == 4) {
LAB_0015b864:
            uVar3 = fn_00182994(DAT_008977e4);
            uVar23 = fn_00164258(uVar3,param_2);
            uVar13 = (uint)((ulonglong)uVar23 >> 0x20);
            if ((int)uVar23 == 0) {
              uVar3 = fn_00182994(DAT_008977e4);
              uVar23 = fn_00164610(uVar3,param_2);
              uVar13 = (uint)((ulonglong)uVar23 >> 0x20);
              if ((int)uVar23 == 0) {
                uVar3 = fn_00182994(DAT_008977e4);
                fn_00164c80(uVar3,uStack_64 + 500,2);
                uVar13 = extraout_r1_02;
                switch(uStack_64) {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  goto switchD_0015b88c_caseD_1;
                }
              }
              else {
                switch(uStack_64) {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
switchD_0015b88c_caseD_1:
                  uVar24 = 0x2d;
                  goto LAB_0015b8bc;
                }
              }
            }
            else {
              switch(uStack_64) {
              case 1:
              case 2:
              case 3:
              case 4:
              case 5:
                goto switchD_0015b88c_caseD_1;
              }
            }
            uVar24 = 0;
          }
          else if ((int)uStack_64 < 5) {
            if (uStack_64 == 2 || uStack_64 == 3) goto LAB_0015b864;
          }
          else if (uStack_64 == 5 || uStack_64 == 0x42) goto LAB_0015b864;
        }
      }
      else if (param_3 == 0) {
        if (iVar7 < 1) {
          if ((uStack_64 != 2 && uStack_64 != 3) && (uStack_64 != 4 && uStack_64 != 5)) {
            uVar3 = fn_00182994(DAT_008977e4);
            uVar23 = fn_00175324(uVar3,iVar14);
            uVar13 = (uint)((ulonglong)uVar23 >> 0x20);
            if ((int)uVar23 == 0) goto LAB_0015b8bc;
          }
          fn_00182994(DAT_008977e4);
          iVar8 = fn_00165248();
          if (iVar8 == 1) {
LAB_0015b7f0:
            uVar3 = fn_00182994(DAT_008977e4);
            fn_00164c80(uVar3,uStack_64 + 300,2);
            uVar13 = extraout_r1_01;
          }
          else {
            bVar18 = false;
            iVar8 = 0;
            uVar3 = param_2;
            uVar9 = fn_00182994(DAT_008977e4);
            uVar23 = fn_0016561c(uVar9,iVar14);
            uVar13 = (uint)((ulonglong)uVar23 >> 0x20);
            if (0 < (int)uVar23) {
              do {
                iVar17 = 1;
                do {
                  uVar9 = fn_00182994(DAT_008977e4);
                  iVar10 = fn_00174b40(uVar9,iVar17,uVar3,iVar8);
                  uVar9 = fn_00182994(DAT_008977e4);
                  iVar11 = fn_00174c34(uVar9,iVar17,uVar3,iVar8);
                  if (iVar10 != 0 && iVar11 != 0) {
                    bVar18 = true;
                  }
                  iVar17 = iVar17 + 1;
                } while (iVar17 < 0x61);
                iVar8 = iVar8 + 1;
                uVar9 = fn_00182994(DAT_008977e4);
                uVar23 = fn_0016561c(uVar9,iVar14);
                uVar13 = (uint)((ulonglong)uVar23 >> 0x20);
              } while (iVar8 < (int)uVar23);
              if (bVar18) goto LAB_0015b7f0;
            }
          }
        }
        else {
          if (uStack_64 != 7) {
            if ((int)uStack_64 < 8) {
              if (4 < uStack_64 - 2) goto LAB_0015b544;
            }
            else if (uStack_64 != 10) {
              if ((int)uStack_64 < 0xb) {
                if (uStack_64 != 8 && uStack_64 != 9) goto LAB_0015b544;
              }
              else if (uStack_64 != 0xb && uStack_64 != 0x52) {
LAB_0015b544:
                uVar3 = fn_00182994(DAT_008977e4);
                uVar23 = fn_00175324(uVar3,iVar14);
                uVar13 = (uint)((ulonglong)uVar23 >> 0x20);
                if ((int)uVar23 == 0) {
                  if (uStack_64 == 0xc) {
                    uVar3 = fn_00182994(DAT_008977e4);
                    iVar8 = fn_00163a1c(uVar3,param_2);
                    uVar3 = fn_00182994(DAT_008977e4);
                    uVar23 = fn_00174aec(uVar3,param_2,0);
                    uVar13 = (uint)((ulonglong)uVar23 >> 0x20);
                    if (iVar8 == 1 && (int)uVar23 == 3) {
                      uVar3 = fn_00182994(DAT_008977e4);
                      fn_00164c80(uVar3,0x70,2);
                      uVar13 = extraout_r1_00;
                    }
                  }
                  goto LAB_0015b8bc;
                }
              }
            }
          }
          fn_00182994(DAT_008977e4);
          iVar8 = fn_00165248();
          if (iVar8 == 1) {
LAB_0015b630:
            uVar3 = fn_00182994(DAT_008977e4);
            fn_00164c80(uVar3,uStack_64 + 100,2);
            uVar13 = extraout_r1;
          }
          else {
            bVar18 = false;
            iVar8 = 0;
            uVar3 = param_2;
            uVar9 = fn_00182994(DAT_008977e4);
            uVar23 = fn_0016561c(uVar9,iVar14);
            uVar13 = (uint)((ulonglong)uVar23 >> 0x20);
            if (0 < (int)uVar23) {
              do {
                iVar17 = 1;
                do {
                  uVar9 = fn_00182994(DAT_008977e4);
                  iVar10 = fn_00174b40(uVar9,iVar17,uVar3,iVar8);
                  uVar9 = fn_00182994(DAT_008977e4);
                  iVar11 = fn_00174c34(uVar9,iVar17,uVar3,iVar8);
                  if (iVar10 != 0 && iVar11 != 0) {
                    bVar18 = true;
                  }
                  iVar17 = iVar17 + 1;
                } while (iVar17 < 0x61);
                iVar8 = iVar8 + 1;
                uVar9 = fn_00182994(DAT_008977e4);
                uVar23 = fn_0016561c(uVar9,iVar14);
                uVar13 = (uint)((ulonglong)uVar23 >> 0x20);
              } while (iVar8 < (int)uVar23);
              if (bVar18) goto LAB_0015b630;
            }
          }
        }
      }
LAB_0015b8bc:
      if (iVar5 == 0) {
        if (iVar7 == 0) goto LAB_0015badc;
        if (iVar4 == 0) {
          if (iVar7 < 1) {
            if (uStack_64 - 1 < 5) {
LAB_0015bd70:
              uVar3 = fn_00182994(DAT_008977e4);
              uVar3 = fn_00174bac(uVar3,uVar2 & 0xff);
              fn_0017a7fc(uVar3,0);
              uVar3 = fn_00182994(DAT_008977e4);
              in_s1 = (float)(int)in_s1;
              iVar5 = (int)in_s0;
              in_s0 = (float)((ulonglong)uVar21 >> 0x20);
              fn_001755cc(uVar3,uVar2 & 0xff,7,0,1,iVar5,in_s1);
              piVar12 = (int *)fn_00182994(DAT_008977e4);
              (**(code **)(*piVar12 + 0x14))(piVar12,"SE_BTL_022");
            }
            else {
              bVar18 = 8 < uStack_64;
              if (uStack_64 != 9) {
                uVar13 = uStack_64 - 0x10;
                bVar18 = 1 < uVar13;
              }
              if ((!bVar18 || (uStack_64 == 9 || uVar13 == 2)) || (uStack_64 == 0x14))
              goto LAB_0015bd70;
            }
            if (10 < uStack_64 - 1) {
              uVar13 = uStack_64 - 0x10;
              bVar19 = 0xc < uVar13;
              bVar18 = uVar13 == 0xd;
              if (0xd < uVar13) {
                bVar19 = 2 < uStack_64 - 0x3a;
                bVar18 = uStack_64 - 0x3a == 3;
              }
              if (!(bVar19 && !bVar18)) goto LAB_0015bacc;
              goto LAB_0015bad4;
            }
            goto LAB_0015bab8;
          }
          bVar18 = 2 < uStack_64;
          if (uStack_64 != 3) {
            uVar13 = uStack_64 - 6;
            bVar18 = 6 < uVar13;
          }
          if (!bVar18 || (uStack_64 == 3 || uVar13 == 7)) {
LAB_0015bc68:
            uVar3 = fn_00182994(DAT_008977e4);
            uVar3 = fn_00174bac(uVar3,uVar2 & 0xff);
            fn_0017a7fc(uVar3,0);
            uVar3 = fn_00182994(DAT_008977e4);
            in_s1 = (float)(int)in_s1;
            iVar5 = (int)in_s0;
            in_s0 = (float)((ulonglong)uVar21 >> 0x20);
            fn_001755cc(uVar3,uVar2 & 0xff,7,0,1,iVar5,in_s1);
            piVar12 = (int *)fn_00182994(DAT_008977e4);
            (**(code **)(*piVar12 + 0x14))(piVar12,"SE_BTL_022");
          }
          else {
            bVar19 = uStack_64 != 0x10;
            bVar18 = uStack_64 - 0x10 == 1;
            if (1 < uStack_64 - 0x10) {
              bVar19 = 5 < uStack_64 - 0x54;
              bVar18 = uStack_64 - 0x54 == 6;
            }
            if ((!bVar19 || bVar18) || (uStack_64 == 0x19)) goto LAB_0015bc68;
            if ((int)uStack_64 < 0x1a) {
              if ((uStack_64 == 0x15 || uStack_64 == 0x16) ||
                 (uStack_64 == 0x17 || uStack_64 == 0x18)) goto LAB_0015bc68;
            }
            else if ((uStack_64 == 0x52 || uStack_64 == 0x5b) || uStack_64 == 0x5f)
            goto LAB_0015bc68;
          }
          if (uStack_64 - 1 < 0xd) goto LAB_0015bab8;
          if (uStack_64 - 0x12 < 0x41) goto LAB_0015bacc;
LAB_0015bad4:
          uVar24 = 0;
          goto LAB_0015badc;
        }
        if (iVar7 < 1) {
          if (uStack_64 == 0xe) goto LAB_0015be58;
          if (uStack_64 != 0xf) {
            fn_0016c1f4(uVar2,"EF000_13_COUNTER");
            if (10 < uStack_64 - 1) {
              uVar13 = uStack_64 - 0x10;
              bVar19 = 0xc < uVar13;
              bVar18 = uVar13 == 0xd;
              if (0xd < uVar13) {
                bVar19 = 2 < uStack_64 - 0x3a;
                bVar18 = uStack_64 - 0x3a == 3;
              }
              if (!(bVar19 && !bVar18)) goto LAB_0015bacc;
              goto LAB_0015bad4;
            }
            goto LAB_0015bab8;
          }
        }
        else {
          if (uStack_64 == 0xe) {
LAB_0015be58:
            uStack_64 = 0xf;
            goto LAB_0015b4c4;
          }
          if (uStack_64 != 0xf) {
            fn_0016c1f4(uVar2,"EF000_13_COUNTER");
            goto joined_r0x0015bab4;
          }
        }
      }
      else {
        if (iVar7 == 0) goto LAB_0015badc;
        if (iVar7 < 1) {
          bVar18 = 0xf < uStack_64;
          uVar13 = uStack_64;
          if (uStack_64 != 0x10) {
            uVar13 = uStack_64 - 0x12;
            bVar18 = 0x3a < uVar13;
          }
          if (!bVar18 || (uStack_64 == 0x10 || uVar13 == 0x3b)) {
            uVar3 = fn_00182994(DAT_008977e4);
            fn_00182c40(uVar3,uVar2 & 0xff,7,4);
            uVar3 = fn_00182994(DAT_008977e4);
            in_s0 = (float)((ulonglong)uVar20 >> 0x20);
            fn_0016a6d0(uVar3,uVar2 & 0xff,0);
          }
          if (uStack_64 == 1) {
            fn_0016ccc8(param_2,param_3);
            uVar24 = 0x1e;
            uStack_64 = 2;
            goto LAB_0015b4c4;
          }
          if (uStack_64 == 0x17) {
            uVar3 = fn_00182994(DAT_008977e4);
            in_s0 = (float)uVar21;
            fn_0015ad60(uVar3,uVar2 & 0xff);
          }
          if (10 < uStack_64 - 1) {
            uVar13 = uStack_64 - 0x10;
            bVar19 = 0xc < uVar13;
            bVar18 = uVar13 == 0xd;
            if (0xd < uVar13) {
              bVar19 = 2 < uStack_64 - 0x3a;
              bVar18 = uStack_64 - 0x3a == 3;
            }
            if (!(bVar19 && !bVar18)) goto LAB_0015bacc;
            goto LAB_0015bad4;
          }
        }
        else {
          if (uStack_64 - 6 < 8) {
            uVar3 = fn_00182994(DAT_008977e4);
            fn_00182c40(uVar3,uVar2 & 0xff,7,0);
            uVar3 = fn_00182994(DAT_008977e4);
            in_s0 = (float)uVar20;
            fn_0016a6d0(uVar3,uVar2 & 0xff,0);
          }
          if (uStack_64 == 10) {
            piVar12 = (int *)fn_00182994(DAT_008977e4);
            (**(code **)(*piVar12 + 0x14))(piVar12,"SE_BTL_010");
            uVar24 = 0x1e;
            uStack_64 = 0xb;
            goto LAB_0015b4c4;
          }
          if ((int)uStack_64 < 0xb) {
            if (uStack_64 == 1) {
              fn_0016ccc8(param_2,param_3);
            }
            else {
              if (uStack_64 == 7) {
                piVar12 = (int *)fn_00182994(DAT_008977e4);
                pcVar16 = *(code **)(*piVar12 + 0x14);
                pcVar15 = "SE_BTL_011";
              }
              else {
                if (uStack_64 != 8) goto joined_r0x0015bab4;
                piVar12 = (int *)fn_00182994(DAT_008977e4);
                pcVar16 = *(code **)(*piVar12 + 0x14);
                pcVar15 = "SE_BTL_012";
              }
              (*pcVar16)(piVar12,pcVar15);
            }
          }
          else if (uStack_64 == 0xc) {
            uVar3 = fn_00182994(DAT_008977e4);
            uVar3 = fn_001645e0(uVar3,uVar2);
            uVar24 = fn_00182994(DAT_008977e4);
            fn_0016427c(uVar24,uVar2 & 0xff,uVar3);
          }
          else if (uStack_64 == 0x17) {
            uVar3 = fn_00182994(DAT_008977e4);
            in_s0 = (float)uVar21;
            fn_00179a14(uVar3,uVar2 & 0xff);
          }
joined_r0x0015bab4:
          if (0xc < uStack_64 - 1) {
            if (0x40 < uStack_64 - 0x12) goto LAB_0015bad4;
LAB_0015bacc:
            uVar24 = 0x2d;
            goto LAB_0015badc;
          }
        }
LAB_0015bab8:
        uVar24 = 0x1e;
LAB_0015badc:
        if (uStack_64 == 0x45) {
          if (iVar6 == 0) {
            uStack_64 = 0x46;
          }
          else {
            in_s0 = fVar22;
            uVar3 = fn_00182994(DAT_008977e4);
            fVar22 = in_s0;
            fn_0015ad60(uVar3,uVar2 & 0xff);
            uStack_64 = 0x46;
          }
          goto LAB_0015b4c4;
        }
      }
      uStack_64 = uStack_64 + 1;
    } while ((int)uStack_64 < 0x61);
  }
  else {
    uVar24 = fn_0016cf2c(param_2,param_3,1);
  }
  uVar3 = fn_00182994(DAT_008977e4);
  fn_0016498c(uVar3,param_2,param_3);
  uVar3 = fn_00182994(DAT_008977e4);
  iVar4 = fn_00164230(uVar3,param_2,param_3);
  if (iVar4 == 0) {
    uVar3 = fn_00182994(DAT_008977e4);
    iVar4 = fn_00164208(uVar3,param_2,param_3);
    if (iVar4 == 0) goto LAB_0015bf30;
  }
  uVar3 = fn_00182994(DAT_008977e4);
  sVar1 = fn_001645e0(uVar3,uVar2);
  uVar3 = fn_00182994(DAT_008977e4);
  fn_0016427c(uVar3,uVar2 & 0xff,(int)(short)(sVar1 + -1));
LAB_0015bf30:
  uVar3 = fn_00182994(DAT_008977e4);
  fn_001649ec(uVar3,iVar14,(int)(char)param_3);
  return uVar24;
}


