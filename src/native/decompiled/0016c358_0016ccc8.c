#include "0016c358_0016ccc8.h"



void fn_0016ccc8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float in_s0;
  float in_s1;
  float fVar11;
  undefined8 uVar12;
  int local_50;
  int local_4c;
  int iStack_48;
  undefined4 local_44;
  undefined4 local_2c;
  int local_28;
  
  iVar8 = 0;
  iVar9 = -1;
  piVar5 = &local_50;
  local_44 = 7;
  local_2c = param_1;
  local_28 = param_2;
  uVar1 = fn_00182994(DAT_008977e4);
  iVar6 = (int)(char)local_2c;
  uVar2 = fn_001659c0(uVar1,iVar6,(int)(char)local_28);
  uVar1 = fn_00182994(DAT_008977e4);
  local_50 = fn_00174a8c(uVar1,uVar2 & 0xff);
  iVar7 = 0;
  iVar10 = local_28 + 1;
  if (0 < iVar10) {
    do {
      uVar1 = fn_00182994(DAT_008977e4);
      uVar3 = fn_001659c0(uVar1,iVar6,(int)(char)iVar7);
      if (uVar3 == uVar2) {
        uVar1 = fn_00182994(DAT_008977e4);
        iVar4 = fn_00174a8c(uVar1,uVar3 & 0xff);
        if (iVar4 != 2) {
          iVar9 = iVar9 + 1;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar10);
  }
  if (local_50 != 2) {
    uVar1 = fn_00182994(DAT_008977e4);
    iVar7 = fn_00174b40(uVar1,1,local_2c,local_28);
    uVar1 = fn_00182994(DAT_008977e4);
    uVar12 = fn_00174c34(uVar1,1,local_2c,local_28);
    uVar1 = (undefined4)((ulonglong)uVar12 >> 0x20);
    iVar10 = (int)uVar12;
    if (iVar10 < 0) {
      uVar1 = 4;
    }
    if (0 < iVar10) {
      uVar1 = 3;
    }
    if (iVar10 != 0) {
      local_44 = uVar1;
    }
    if (iVar7 != 0) {
      iVar8 = iVar10;
    }
    uVar1 = fn_00182994(DAT_008977e4);
    iVar7 = fn_001752ec(uVar1,1,uVar2);
    iVar8 = iVar8 + iVar7;
  }
  iVar10 = 1;
  uVar1 = fn_00182994(DAT_008977e4);
  iVar7 = fn_00174b40(uVar1,1,local_2c,local_28);
  if (iVar7 != 0) {
    local_50 = -4;
    local_4c = 4;
    iStack_48 = iVar8;
    if (-5 < iVar8) {
      piVar5 = &iStack_48;
    }
    iVar10 = 0;
    if (4 < *piVar5) {
      piVar5 = &local_4c;
    }
    iVar8 = *piVar5;
  }
  iVar7 = 0;
  if (iVar9 != 0) {
    iVar7 = iVar9 % 4;
  }
  uVar1 = fn_00182994(DAT_008977e4);
  uVar1 = fn_00174bac(uVar1,uVar2 & 0xff);
  fn_0017a7fc(uVar1,iVar7);
  fVar11 = 0.0;
  uVar1 = fn_00182994(DAT_008977e4);
  iVar6 = fn_00175044(uVar1,iVar6,0);
  if ((iVar6 != 0) && (iVar6 = fn_003035b0(iVar6,(char *)&DAT_0016cf0c), iVar6 == 0)) {
    fVar11 = 30.0;
  }
  uVar1 = fn_00182994(DAT_008977e4);
  iStack_48 = (int)(in_s1 + fVar11);
  local_4c = (int)(in_s0 + fVar11);
  local_50 = iVar10;
  fn_001755cc(uVar1,uVar2 & 0xff,local_44,iVar8);
  return;
}



void fn_0016c358(undefined4 param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint in_fpscr;
  double dVar12;
  double dVar13;
  double dVar14;
  
  uVar2 = fn_00182994(DAT_008977e4);
  iVar11 = (int)(char)param_1;
  iVar3 = fn_00175044(uVar2,iVar11,0);
  uVar2 = fn_00182994(DAT_008977e4);
  iVar4 = fn_00175108(uVar2,iVar11,0);
  uVar2 = fn_00182994(DAT_008977e4);
  iVar5 = fn_00175044(uVar2,iVar11,1);
  uVar2 = fn_00182994(DAT_008977e4);
  iVar6 = fn_00175108(uVar2,iVar11,1);
  uVar2 = fn_00182994(DAT_008977e4);
  iVar7 = fn_00174c80(uVar2,iVar11,0);
  uVar2 = fn_00182994(DAT_008977e4);
  iVar8 = fn_00174f10(uVar2,iVar11,0);
  uVar2 = fn_00182994(DAT_008977e4);
  iVar9 = fn_00174f10(uVar2,iVar11,1);
  iVar10 = 0;
  if (0 < iVar4) {
    iVar10 = iVar4;
  }
  if (iVar10 < iVar6) {
    iVar10 = iVar6;
  }
  if (iVar10 < iVar8) {
    iVar10 = iVar8;
  }
  if (iVar10 < iVar9) {
    iVar10 = iVar9;
  }
  if (iVar7 == 0 && (iVar5 == 0 && iVar3 == 0)) {
    uVar2 = fn_00182994(DAT_008977e4);
    iVar10 = fn_001657c8(uVar2,iVar11);
    if (iVar10 != 0) {
      uVar2 = fn_00182994(DAT_008977e4);
      uVar1 = fn_001657c8(uVar2,iVar11);
      uVar2 = fn_00182994(DAT_008977e4);
      iVar10 = fn_00174bac(uVar2,uVar1);
      if (iVar10 == 3 || iVar10 == 4) {
        uVar2 = fn_00182994(DAT_008977e4);
        iVar10 = fn_00164634(uVar2,param_1);
        if (iVar10 != 8) goto LAB_0016cc10;
        uVar2 = fn_00182994(DAT_008977e4);
        iVar10 = fn_00175724(uVar2,param_1);
        if (iVar10 != 0) goto LAB_0016cc10;
        uVar2 = fn_00182994(DAT_008977e4);
        iVar10 = fn_00174d68(uVar2,param_1);
        uVar2 = fn_00182994(DAT_008977e4);
        iVar3 = fn_00175778(uVar2,param_1);
        if (iVar3 != 0 || iVar10 != 1) goto LAB_0016cc10;
        iVar10 = 0x2d;
        goto LAB_0016c9e8;
      }
    }
    *param_2 = 10;
LAB_0016cc0c:
    *param_3 = 0x19;
  }
  else {
    dVar14 = 0.5;
    if (iVar7 == 0) {
LAB_0016c580:
      if (iVar3 != 0) {
        iVar4 = fn_003035b0(iVar3,(char *)&DAT_0016c894);
        if ((iVar4 == 0) || (iVar4 = fn_003035b0(iVar3,(char *)&DAT_0016c8a8), iVar4 == 0)) {
          *param_2 = 100;
LAB_0016ca28:
          *param_3 = 0x32;
          goto LAB_0016cc10;
        }
        iVar4 = fn_003035b0(iVar3,(char *)&DAT_0016c8bc);
        if (iVar4 != 0) {
          iVar4 = fn_003035b0(iVar3,(char *)&DAT_0016c8d0);
          if (((((iVar4 != 0) && (iVar4 = fn_003035b0(iVar3,(char *)&DAT_0016c8e4), iVar4 != 0)) &&
               (iVar4 = fn_003035b0(iVar3,(char *)&DAT_0016c8f8), iVar4 != 0)) &&
              ((((iVar4 = fn_003035b0(iVar3,(char *)&DAT_0016c90c), iVar4 != 0 &&
                 (iVar4 = fn_003035b0(iVar3,(char *)&DAT_0016c920), iVar4 != 0)) &&
                ((iVar4 = fn_003035b0(iVar3,(char *)&DAT_0016c934), iVar4 != 0 &&
                 ((iVar4 = fn_003035b0(iVar3,(char *)&DAT_0016c948), iVar4 != 0 &&
                  (iVar4 = fn_003035b0(iVar3,(char *)&DAT_0016c95c), iVar4 != 0)))))) &&
               (iVar4 = fn_003035b0(iVar3,(char *)&DAT_0016c974), iVar4 != 0)))) &&
             (iVar4 = fn_003035b0(iVar3,(char *)&DAT_0016c988), iVar4 != 0)) {
            iVar4 = fn_003035b0(iVar3,(char *)&DAT_0016c99c);
            if (iVar4 == 0) {
              *param_2 = 0xf;
              *param_3 = 0;
              goto LAB_0016cc10;
            }
            iVar4 = fn_003035b0(iVar3,(char *)&DAT_0016c9b8);
            if (iVar4 != 0) {
              iVar3 = fn_003035b0(iVar3,(char *)&DAT_0016c9d4);
              if (iVar3 == 0) {
                iVar10 = 0x1e;
                *param_2 = 100;
              }
              else {
                dVar13 = (double)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
                dVar12 = (double)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
                iVar10 = VectorFloatToSigned(dVar13 * dVar14,3);
                iVar3 = VectorFloatToSigned(dVar12 * dVar14,3);
                *param_2 = iVar10;
                *param_3 = iVar3;
                uVar2 = fn_00182994(DAT_008977e4);
                iVar10 = fn_00164634(uVar2,param_1);
                if (iVar10 == 10) goto LAB_0016cc10;
                uVar2 = fn_00182994(DAT_008977e4);
                iVar10 = fn_00164634(uVar2,param_1);
                if (iVar10 == 4) goto LAB_0016cc10;
                iVar10 = *param_3;
                if (iVar10 < 0x1a) {
                  iVar10 = 0x19;
                }
              }
              goto LAB_0016c9ec;
            }
            iVar10 = 5;
            goto LAB_0016c9e8;
          }
          iVar3 = 7;
          iVar10 = 4;
          goto LAB_0016ca38;
        }
        *param_2 = 0;
        goto LAB_0016cc0c;
      }
      uVar2 = fn_00182994(DAT_008977e4);
      iVar3 = fn_00164634(uVar2,param_1);
      dVar14 = 0.7;
      if (iVar3 == 10) {
LAB_0016cb1c:
        iVar3 = 0;
        dVar12 = (double)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
        uVar2 = VectorFloatToSigned(dVar12 * dVar14,3);
        *param_4 = uVar2;
        *param_2 = 5;
        *param_3 = 5;
        uVar2 = fn_00182994(DAT_008977e4);
        iVar10 = fn_0016561c(uVar2,iVar11);
        iVar4 = 0;
        if (iVar10 < 1) goto LAB_0016cc10;
        do {
          uVar2 = fn_00182994(DAT_008977e4);
          iVar5 = fn_00174a74(uVar2,param_1,iVar4);
          if (iVar3 < iVar5) {
            iVar3 = iVar5;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar10);
        if (iVar3 < 2) goto LAB_0016cc10;
        iVar10 = *param_3 + iVar3 * -0xf;
        *param_3 = iVar10;
      }
      else {
        uVar2 = fn_00182994(DAT_008977e4);
        iVar3 = fn_00164634(uVar2,param_1);
        if (iVar3 == 4) goto LAB_0016cb1c;
        iVar3 = 0;
        dVar13 = (double)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
        dVar12 = (double)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
        iVar10 = VectorFloatToSigned(dVar13 * dVar14,3);
        iVar4 = VectorFloatToSigned(dVar12 * 0.4,3);
        *param_2 = iVar10;
        *param_3 = iVar4;
        uVar2 = fn_00182994(DAT_008977e4);
        iVar10 = fn_0016561c(uVar2,iVar11);
        iVar4 = 0;
        if (iVar10 < 1) goto LAB_0016cc10;
        do {
          uVar2 = fn_00182994(DAT_008977e4);
          iVar5 = fn_00174a74(uVar2,param_1,iVar4);
          if (iVar3 < iVar5) {
            iVar3 = iVar5;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar10);
        if (iVar3 < 2) goto LAB_0016cc10;
        iVar10 = *param_3 + iVar3 * -0xf;
        *param_3 = iVar10;
      }
      if (0 < iVar10) goto LAB_0016cc10;
      iVar10 = 1;
    }
    else {
      iVar4 = fn_003035b0(iVar7,(char *)&DAT_0016c798);
      if (iVar4 != 0) {
        iVar4 = fn_003035b0(iVar7,(char *)&DAT_0016c7ac);
        if (iVar4 == 0) {
          iVar3 = 0x31;
          iVar10 = 0x2a;
LAB_0016ca38:
          *param_2 = iVar3;
          goto LAB_0016c9ec;
        }
        iVar4 = fn_003035b0(iVar7,(char *)&DAT_0016c7c0);
        if (iVar4 != 0) {
          iVar4 = fn_003035b0(iVar7,(char *)&DAT_0016c7d4);
          if (iVar4 == 0) {
            iVar10 = 0x3c;
          }
          else {
            iVar4 = fn_003035b0(iVar7,(char *)&DAT_0016c7e8);
            if (iVar4 != 0) {
              iVar4 = fn_003035b0(iVar7,(char *)&DAT_0016c808);
              if (iVar4 != 0) {
                iVar4 = fn_003035b0(iVar7,(char *)&DAT_0016c820);
                if ((((iVar4 == 0) ||
                     (iVar4 = fn_003035b0(iVar7,(char *)&DAT_0016c838), iVar4 == 0)) ||
                    (iVar4 = fn_003035b0(iVar7,(char *)&DAT_0016c850), iVar4 == 0)) ||
                   ((iVar4 = fn_003035b0(iVar7,(char *)&DAT_0016c868), iVar4 == 0 ||
                    (iVar4 = fn_003035b0(iVar7,(char *)&DAT_0016c880), iVar4 == 0)))) {
                  dVar13 = (double)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
                  dVar12 = (double)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
                  iVar10 = VectorFloatToSigned(dVar13 * dVar14,3);
                  iVar3 = VectorFloatToSigned(dVar12 * dVar14,3);
                  *param_2 = iVar10;
                  *param_3 = iVar3;
                  goto LAB_0016cc10;
                }
                goto LAB_0016c580;
              }
              iVar10 = 0x2d;
              *param_2 = 0x32;
              goto LAB_0016c9ec;
            }
            iVar10 = 0x172;
          }
          *param_2 = iVar10;
          goto LAB_0016ca28;
        }
      }
      iVar10 = 0x1e;
LAB_0016c9e8:
      *param_2 = 0xf;
    }
LAB_0016c9ec:
    *param_3 = iVar10;
  }
LAB_0016cc10:
  if (*param_2 == 0) {
    *param_2 = 0xf;
  }
  if (*param_3 == 0) {
    *param_3 = 0x19;
  }
  return;
}


