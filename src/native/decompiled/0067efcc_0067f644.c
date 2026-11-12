#include "0067efcc_0067f644.h"



int fn_0067f2d4(int param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint in_fpscr;
  float in_s0;
  float fVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  
  fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
  fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
  iVar7 = (int)((((*param_4 + *(float *)(param_1 + 0x1c)) - *(float *)(param_1 + 0x24)) * fVar10) /
               (*(float *)(param_1 + 0x1c) * 2.0));
  iVar6 = (int)((((param_4[2] + *(float *)(param_1 + 0x20)) - *(float *)(param_1 + 0x28)) * fVar5) /
               (*(float *)(param_1 + 0x20) * 2.0));
  iVar3 = param_3;
  iVar1 = fn_0067f644();
  fVar5 = *(float *)(param_1 + 0x1c);
  fVar10 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
  uVar13 = CONCAT44(*param_4,in_s0);
  iVar2 = *(int *)(param_1 + 0x18) / 2;
  fVar14 = param_4[2];
  fVar8 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = (*(float *)(param_1 + 0x24) + fVar5 * fVar10) - fVar5 * fVar8;
  fVar8 = *(float *)(param_1 + 0x20);
  fVar9 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
  fVar10 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar10 = (*(float *)(param_1 + 0x28) + fVar8 * fVar9) - fVar8 * fVar10;
  uVar12 = CONCAT44(fVar5 + fVar11,fVar8 + fVar10);
  fVar5 = *param_4 - fVar11;
  if (SQRT(fVar5 * fVar5 + (fVar14 - fVar10) * (fVar14 - fVar10)) < in_s0) {
    bVar4 = iVar7 + -1 < 0;
    if (!bVar4) {
      iVar2 = iVar6 + -1;
      bVar4 = iVar2 < 0;
    }
    if (!bVar4) {
      iVar3 = param_3 - iVar1;
      iVar2 = fn_0067f644(param_1,param_2 + iVar1 * 4,iVar3,param_4,iVar7 + -1,iVar2);
      iVar1 = iVar1 + iVar2;
    }
  }
  if ((fVar10 + (float)uVar13 < param_4[2]) && (-1 < iVar6 + -1)) {
    iVar3 = param_3 - iVar1;
    iVar2 = fn_0067f644(param_1,param_2 + iVar1 * 4,iVar3,param_4,iVar7,iVar6 + -1);
    iVar1 = iVar1 + iVar2;
  }
  fVar5 = (float)((ulonglong)uVar13 >> 0x20) - (float)((ulonglong)uVar12 >> 0x20);
  if (((SQRT(fVar5 * fVar5 + (fVar14 - fVar10) * (fVar14 - fVar10)) < (float)uVar13) &&
      (iVar7 + 1 < *(int *)(param_1 + 0x18))) && (-1 < iVar6 + -1)) {
    iVar3 = param_3 - iVar1;
    iVar2 = fn_0067f644(param_1,param_2 + iVar1 * 4,iVar3,param_4,iVar7 + 1,iVar6 + -1);
    iVar1 = iVar1 + iVar2;
  }
  if ((fVar11 + (float)uVar13 < *param_4) && (-1 < iVar7 + -1)) {
    iVar3 = param_3 - iVar1;
    iVar2 = fn_0067f644(param_1,param_2 + iVar1 * 4,iVar3,param_4,iVar7 + -1,iVar6);
    iVar1 = iVar1 + iVar2;
  }
  if ((*param_4 < (float)((ulonglong)uVar12 >> 0x20) - (float)uVar13) &&
     (iVar7 + 1 < *(int *)(param_1 + 0x18))) {
    iVar3 = param_3 - iVar1;
    iVar2 = fn_0067f644(param_1,param_2 + iVar1 * 4,iVar3,param_4,iVar7 + 1,iVar6);
    iVar1 = iVar1 + iVar2;
  }
  fVar11 = (float)((ulonglong)uVar13 >> 0x20) - fVar11;
  fVar5 = fVar14 - (float)uVar12;
  if (((SQRT(fVar11 * fVar11 + fVar5 * fVar5) < (float)uVar13) && (-1 < iVar7 + -1)) &&
     (iVar6 + 1 < *(int *)(param_1 + 0x18))) {
    iVar3 = param_3 - iVar1;
    iVar2 = fn_0067f644(param_1,param_2 + iVar1 * 4,iVar3,param_4,iVar7 + -1,iVar6 + 1);
    iVar1 = iVar1 + iVar2;
  }
  if ((param_4[2] < (float)uVar12 - (float)uVar13) && (iVar6 + 1 < *(int *)(param_1 + 0x18))) {
    iVar3 = param_3 - iVar1;
    iVar2 = fn_0067f644(param_1,param_2 + iVar1 * 4,iVar3,param_4,iVar7,iVar6 + 1);
    iVar1 = iVar1 + iVar2;
  }
  fVar5 = (float)((ulonglong)uVar13 >> 0x20) - (float)((ulonglong)uVar12 >> 0x20);
  fVar14 = fVar14 - (float)uVar12;
  if (SQRT(fVar5 * fVar5 + fVar14 * fVar14) < (float)uVar13) {
    iVar7 = iVar7 + 1;
    iVar2 = iVar7;
    if (iVar7 < *(int *)(param_1 + 0x18)) {
      iVar2 = iVar6 + 1;
      iVar3 = iVar2;
    }
    if (iVar2 < *(int *)(param_1 + 0x18)) {
      iVar2 = fn_0067f644(param_1,param_2 + iVar1 * 4,param_3 - iVar1,param_4,iVar7,iVar3);
      iVar1 = iVar1 + iVar2;
    }
  }
  return iVar1;
}



int fn_0067f644(int *param_1,int param_2,int param_3,float *param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float in_s0;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar4 = 0;
  piVar5 = (int *)(param_1[0xb] + (param_6 * param_1[6] + param_5) * 0xc);
  piVar3 = (int *)*piVar5;
  piVar5 = (int *)piVar5[1];
  do {
    if (piVar3 == piVar5) {
      return iVar4;
    }
    iVar2 = *param_1 + *piVar3 * 0x94;
    iVar1 = 0;
    do {
      iVar6 = iVar2 + iVar1 * 0xc;
      fVar12 = *(float *)(iVar6 + 0xc);
      fVar11 = *(float *)(iVar6 + 0x14);
      iVar6 = iVar2 + ((iVar1 + 1) % 3) * 0xc;
      fVar9 = *(float *)(iVar6 + 0xc);
      fVar7 = *(float *)(iVar6 + 0x14);
      fVar8 = param_4[2] - fVar11;
      fVar10 = fVar9 - fVar12;
      fVar11 = fVar7 - fVar11;
      fVar12 = *param_4 - fVar12;
      fVar9 = *param_4 - fVar9;
      fVar7 = param_4[2] - fVar7;
      if ((ABS(fVar10 * fVar8 - fVar11 * fVar12) / SQRT(fVar10 * fVar10 + fVar11 * fVar11) <= in_s0)
         && ((((fVar12 * fVar10 + fVar8 * fVar11) * (fVar9 * fVar10 + fVar7 * fVar11) <= 0.0 ||
              (SQRT(fVar12 * fVar12 + fVar8 * fVar8) < in_s0)) ||
             (SQRT(fVar9 * fVar9 + fVar7 * fVar7) < in_s0)))) {
        if (iVar4 < param_3) {
          *(undefined4 *)(param_2 + iVar4 * 4) = *(undefined4 *)(iVar2 + 0x78);
          iVar4 = iVar4 + 1;
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    piVar3 = piVar3 + 1;
  } while( true );
}



int fn_0067efcc(int *param_1,float *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  undefined8 uVar19;
  undefined8 uVar21;
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float local_88;
  float fStack_84;
  undefined1 *local_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [48];
  
  iVar9 = -1;
  iVar10 = -1;
  fVar17 = *param_2;
  iVar1 = param_1[6];
  fVar18 = param_2[2];
  fVar20 = 1e+06;
  fVar16 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  puVar2 = (undefined4 *)
           (param_1[0xb] +
           ((int)((((fVar18 + (float)param_1[8]) - (float)param_1[10]) * fVar12) /
                 ((float)param_1[8] * 2.0)) * iVar1 +
           (int)((((fVar17 + (float)param_1[7]) - (float)param_1[9]) * fVar16) /
                ((float)param_1[7] * 2.0))) * 0xc);
  piVar7 = (int *)*puVar2;
  piVar8 = (int *)puVar2[1];
  if (piVar7 != piVar8) {
    uVar19 = 0x497424003f800000;
    uVar21 = 0xbf800000;
    fVar12 = 0.0;
    do {
      fVar16 = (float)uVar21;
      iVar4 = 0;
      iVar1 = 0;
      iVar6 = *param_1 + *piVar7 * 0x94;
      do {
        iVar5 = iVar6 + iVar1 * 0xc;
        fVar13 = fVar17 - *(float *)(iVar5 + 0xc);
        fVar14 = fVar18 - *(float *)(iVar5 + 0x14);
        fVar15 = SQRT(fVar13 * fVar13 + fVar14 * fVar14);
        if ((fVar15 == fVar12) ||
           (fVar15 = (float)uVar19 / fVar15, iVar5 = iVar6 + iVar1 * 8,
           fVar12 <= *(float *)(iVar5 + 0x30) * fVar13 * fVar15 +
                     *(float *)(iVar5 + 0x34) * fVar14 * fVar15)) {
          iVar4 = iVar4 + 1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 3);
      if (iVar4 == 3) {
        if (param_3 == 0) {
          return *(int *)(iVar6 + 0x78);
        }
        if (param_3 == 1) {
          local_74 = auStack_60;
          uVar3 = *(uint *)(iVar6 + 0x78);
          iVar1 = *param_1;
          uVar11 = param_1[1] - iVar1;
          iVar4 = (int)((longlong)(int)uVar11 * -0x22983759 + ((ulonglong)uVar11 << 0x20) >> 0x20);
          if ((((uint)((iVar4 >> 7) - (iVar4 >> 0x1f)) <= uVar3) ||
              (iVar4 = (int)((longlong)(int)uVar11 * -0x22983759 + ((ulonglong)uVar11 << 0x20) >>
                            0x20), (uint)((iVar4 >> 7) - (iVar4 >> 0x1f)) <= uVar3)) ||
             (iVar1 == param_1[1])) {
code_r0x0067f1f0:
                    /* WARNING: Subroutine does not return */
            fn_00146590();
          }
          iVar1 = iVar1 + uVar3 * 0x94;
          fn_00561c48(auStack_70,iVar1 + 0xc,iVar1 + 0x18,iVar1 + 0x24);
          local_98 = *param_2;
          fStack_94 = param_2[1];
          fStack_90 = param_2[2];
          uVar21 = CONCAT44(fVar12,fVar16);
          local_88 = (float)uVar19 / SQRT(fVar12 * fVar12 + fVar16 * fVar16 + fVar12 * fVar12);
          local_8c = fVar12 * local_88;
          fStack_84 = fVar12 * local_88;
          local_88 = fVar16 * local_88;
          fVar16 = local_88;
          iVar1 = fn_006805b4(&local_98,auStack_70,local_74);
          if (iVar1 == 0) {
            fVar16 = (float)uVar21;
          }
          else {
            fn_0067d3a0(&local_98,auStack_54);
          }
          if (fVar16 == (float)((ulonglong)uVar21 >> 0x20)) goto code_r0x0067f1f0;
          if (fVar16 < (float)((ulonglong)uVar19 >> 0x20)) {
            uVar19 = CONCAT44(fVar16,(int)uVar19);
            iVar9 = *(int *)(iVar6 + 0x78);
          }
        }
      }
      else {
        fVar13 = *(float *)(iVar6 + 0x6c) - *param_2;
        fVar16 = *(float *)(iVar6 + 0x74) - param_2[2];
        fVar16 = SQRT(fVar13 * fVar13 + fVar16 * fVar16);
        if (fVar16 < fVar20) {
          iVar10 = *(int *)(iVar6 + 0x78);
          fVar20 = fVar16;
        }
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar8);
    if (iVar9 != -1) {
      return iVar9;
    }
  }
  return iVar10;
}


