#include "0060c4b4_0060cfa0.h"



void fn_0060cfa0(undefined4 param_1,float *param_2)

{
  float fVar1;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_48 = *param_2;
  local_40 = param_2[2];
  local_44 = 0.0;
  local_38 = 0;
  local_10 = 0;
  local_28 = 0;
  local_18 = 0xbf800000;
  local_30 = 0x3f800000;
  local_34 = 0;
  local_20 = 0;
  local_24 = 0x3f800000;
  local_2c = 0;
  local_1c = 0;
  local_c = 0;
  local_14 = local_28;
  fn_0016947c(&local_48,&local_38);
  fVar1 = 1.0 / SQRT(local_48 * local_48 + local_44 * local_44 + local_40 * local_40);
  local_48 = local_48 * fVar1;
  local_44 = local_44 * fVar1;
  local_40 = local_40 * fVar1;
  fn_0060cc78(param_1,&local_48);
  return;
}



void fn_0060cc78(float *param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined4 local_200 [2];
  float local_1f8 [89];
  float local_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_54;
  
  fn_00101a1c(local_1f8,&DAT_005f4c78,0x48,5);
  fVar8 = -1.0;
  local_88 = *param_1 + *param_2 * 300.0;
  local_84 = param_1[1] + param_2[1] * 300.0;
  local_80 = param_1[2] + param_2[2] * 300.0;
  piVar1 = (int *)fn_006f7388(DAT_008977e0);
  local_200[0] = 0;
  iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,3,local_1f8,5,param_1,&local_88);
  fVar9 = 10000.0;
  fVar6 = fVar9;
  fn_001a4a80();
  iVar4 = -1;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      fVar7 = (*param_1 - local_1f8[iVar3 * 0x12 + 2]) * (*param_1 - local_1f8[iVar3 * 0x12 + 2]) +
              (param_1[1] - local_1f8[iVar3 * 0x12 + 3]) *
              (param_1[1] - local_1f8[iVar3 * 0x12 + 3]) +
              (param_1[2] - local_1f8[iVar3 * 0x12 + 4]) *
              (param_1[2] - local_1f8[iVar3 * 0x12 + 4]);
      if (fVar7 < fVar9) {
        iVar4 = iVar3;
        fVar9 = fVar7;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
    if (iVar4 != -1) {
      fVar8 = SQRT(fVar9);
    }
  }
  local_54 = fVar8;
  fn_00101a1c(local_200,&DAT_005f4c78,0x48,5);
  fVar9 = *param_2 * 150.0;
  uVar10 = CONCAT44(param_2[1] * 150.0,param_2[2] * 150.0);
  fStack_8c = param_1[2] + param_2[2] * 150.0;
  local_94 = *param_1 + fVar9;
  fStack_90 = param_1[1] + param_2[1] * 150.0;
  uVar5 = 0x40a00000;
  fn_0017fe34();
  uVar12 = CONCAT44(fVar9,uVar5);
  piVar1 = (int *)fn_006f7388(DAT_008977e0);
  iVar4 = (**(code **)(*piVar1 + 8))(piVar1,3,local_200,5,&local_94);
  fn_001a4a80();
  iVar2 = 0;
  if (0 < iVar4) {
    do {
      fVar8 = local_1f8[iVar2 * 0x12 + 2] - param_1[2];
      fVar13 = (float)((ulonglong)uVar12 >> 0x20);
      fVar14 = local_1f8[iVar2 * 0x12] - *param_1;
      fVar7 = local_1f8[iVar2 * 0x12 + 1] - param_1[1];
      fVar11 = (float)((ulonglong)uVar10 >> 0x20);
      fVar9 = (float)uVar10;
      fVar9 = (fVar13 * fVar14 + fVar11 * fVar7 + fVar9 * fVar8) /
              (SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar9 * fVar9) *
              SQRT(fVar14 * fVar14 + fVar7 * fVar7 + fVar8 * fVar8));
      fn_006f9b80();
      if ((fVar9 <= (float)uVar12) &&
         (fVar9 = fVar14 * fVar14 + fVar7 * fVar7 + fVar8 * fVar8, fVar9 < fVar6)) {
        fVar6 = fVar9;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  return;
}



void fn_0060cbe8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(char *)(param_1 + 0x26) = (char)param_2;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x58) == -1) {
      return;
    }
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    uVar1 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x58) != -1) {
      return;
    }
    uVar1 = fn_0023e194(*(undefined4 *)(DAT_008977e0 + 0x2c),0x756f,0);
  }
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0060c700) */
/* WARNING: Removing unreachable block (ram,0x0060c974) */

int fn_0060c6d4(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  short local_d0 [76];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [28];
  
  iVar5 = fn_0020b2bc((int)*(short *)(param_1 + 0x1c));
  fn_002d7624(&local_e0,param_1);
  iVar2 = fn_006c6a38(&local_dc);
  iVar2 = *(int *)(&DAT_007c3418 + iVar2 * 4);
  fVar7 = 1.0;
  fVar10 = 0.75;
  fVar8 = 0.75;
  if (99 < *(byte *)(param_1 + 0x3c)) {
    fVar8 = 1.0;
  }
  fn_002d7624(auStack_38,param_1);
  local_e0 = 1;
  local_dc = 1;
  local_d8 = 1;
  local_d4 = 1;
  iVar3 = fn_006c61c4(auStack_34,local_d0,0x4c,1);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      switch(local_d0[iVar4]) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        fVar9 = 2.0;
        switch(local_d0[iVar4]) {
        case 0:
          goto switchD_0060c870_caseD_0;
        default:
          fVar9 = fVar7;
        case 2:
        case 3:
          goto switchD_0060c870_caseD_2;
        case 4:
          fVar9 = 3.0;
          goto switchD_0060c870_caseD_2;
        case 5:
          fVar9 = 3.5;
          goto switchD_0060c870_caseD_2;
        case 6:
          fVar9 = 3.75;
          goto switchD_0060c870_caseD_2;
        case 7:
          fVar9 = 4.0;
          goto switchD_0060c870_caseD_2;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
switchD_0060c870_caseD_0:
  fVar9 = 0.0;
switchD_0060c870_caseD_2:
  fn_002d7624(auStack_38,param_1);
  local_e0 = 1;
  local_dc = 1;
  local_d8 = 1;
  local_d4 = 1;
  iVar3 = fn_006c61c4(auStack_34,local_d0,0x4c,1);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      sVar1 = local_d0[iVar4];
      if ((sVar1 == 0x4c || sVar1 == 0x4d) || sVar1 == 0x4e) {
        fVar6 = (float)VectorSignedToFloat(iVar5 * iVar2,(byte)(in_fpscr >> 0x16) & 3);
        fVar8 = fVar6 * fVar8 * (fVar7 - fVar9 * 0.15);
        goto LAB_0060ca5c;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  fVar6 = (float)VectorSignedToFloat(iVar5 * iVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar8 = fVar6 * fVar8 * (fVar7 - fVar9 * 0.1);
LAB_0060ca5c:
  fn_002d7624(auStack_38,param_1);
  local_e0 = 1;
  local_dc = 1;
  local_d8 = 1;
  local_d4 = 1;
  iVar5 = fn_006c61c4(auStack_34,local_d0,0x4c,1);
  iVar2 = 0;
  if (0 < iVar5) {
    do {
      sVar1 = local_d0[iVar2];
      if (sVar1 == 0x4e) {
        fVar7 = fVar7 * 0.2;
      }
      else if (sVar1 < 0x4e) {
        if (sVar1 == 0x4b) {
          fVar7 = fVar7 * 0.5;
        }
        else if (sVar1 == 0x4c) {
          fVar7 = fVar7 * 0.33333334;
        }
        else if (sVar1 == 0x4d) {
          fVar7 = fVar7 * 0.25;
        }
      }
      else if (sVar1 == 0x9e) {
        fVar7 = fVar7 * 0.875;
      }
      else if (sVar1 == 0x9f) {
        fVar7 = fVar7 * fVar10;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar5);
  }
  iVar5 = (int)(fVar8 * fVar7);
  sVar1 = ((short)(iVar5 / 1000) + (short)(iVar5 >> 0x1f)) -
          (short)((longlong)iVar5 * 0x10624dd3 >> 0x3f);
  if (iVar5 % 1000 != 0) {
    sVar1 = sVar1 + 1;
  }
  return (int)sVar1;
}



int fn_0060c4b4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int unaff_r5;
  int iVar5;
  short local_4c [4];
  short local_44 [4];
  short local_3c [2];
  short local_38 [10];
  
  if (param_2 <= param_1) {
    unaff_r5 = param_1;
  }
  iVar5 = param_1;
  if (param_2 < param_1) {
    iVar5 = param_2;
  }
  if (param_1 < param_2) {
    unaff_r5 = param_2;
  }
  iVar2 = fn_003d2878();
  local_3c[0] = (short)iVar2;
  sVar1 = (short)iVar2 / 10;
  iVar4 = 0;
  if (param_3 == 0) {
    iVar5 = iVar5 % 10 + unaff_r5 % 10;
    local_4c[0] = ((short)unaff_r5 / 10 + 1) * 10;
    local_38[0] = sVar1 * 10;
    psVar3 = local_38;
    if (local_4c[0] <= local_38[0]) {
      psVar3 = local_4c;
    }
    sVar1 = *psVar3 + (short)iVar5 +
                      (((short)(iVar5 / 10) + (short)(iVar5 >> 0x1f)) -
                      (short)((longlong)iVar5 * 0x66666667 >> 0x3f)) * -10;
  }
  else {
    if (param_3 != 1) {
      if (param_3 == 2) {
        local_44[0] = (short)((unaff_r5 + iVar5) / 2);
        if (iVar2 < local_44[0]) {
          psVar3 = local_3c;
        }
        else {
          psVar3 = local_44;
        }
        iVar4 = (int)*psVar3;
      }
      goto LAB_0060c5c4;
    }
    iVar4 = iVar5 % 10 + unaff_r5 % 10 + 5;
    local_4c[0] = ((short)iVar5 / 10 + 1) * 10;
    local_38[0] = sVar1 * 10;
    psVar3 = local_38;
    if (local_4c[0] <= local_38[0]) {
      psVar3 = local_4c;
    }
    sVar1 = (short)iVar4 +
            (((short)(iVar4 / 10) + (short)(iVar4 >> 0x1f)) -
            (short)((longlong)iVar4 * 0x66666667 >> 0x3f)) * -10 + *psVar3;
  }
  iVar4 = (int)sVar1;
LAB_0060c5c4:
  iVar5 = 0;
  iVar2 = fn_003d28a0(iVar4);
  while( true ) {
    if (iVar2 != 0) {
      iVar5 = fn_003d2888(iVar4);
    }
    if ((iVar4 < 1) ||
       (iVar2 = fn_003d2850(iVar4), (iVar2 != 0 && iVar5 != param_4) && iVar5 != param_5)) break;
    iVar4 = (int)(short)((short)iVar4 + -1);
    iVar2 = fn_003d28a0(iVar4);
  }
  iVar4 = fn_003d28a0(iVar4);
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  return iVar5;
}


