#include "0069cc2c_0069d474.h"



void fn_0069d474(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    *(char *)(param_1 + 0xd5) = (char)param_2;
    *(undefined1 *)(param_1 + 0xd4) = 1;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x4d);
    if (param_2 == 0) {
      if (cVar1 != '\0') {
        uVar2 = fn_0017fde4();
        fn_00162d54(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x24),uVar2);
        *(undefined1 *)(param_1 + 0x4d) = 0;
      }
    }
    else {
      uVar2 = fn_0017fde4();
      fn_001969a4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x24),uVar2);
      *(undefined1 *)(param_1 + 0x4d) = 1;
    }
    if (*(char *)(param_1 + 0x54) != '\0') {
      uVar2 = fn_00156f24(DAT_008987bc,*(undefined4 *)(param_1 + 0x58));
      fn_00154a48(uVar2,(int)*(char *)(param_1 + 0x4d));
    }
    if (*(char *)(param_1 + 0x4d) != cVar1) {
      fn_00162d44(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x24));
      return;
    }
  }
  return;
}



void fn_0069d394(int param_1)

{
  *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_1 + 0x20);
  return;
}



void fn_0069d0b0(void)

{
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



void fn_0069cfec(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined1 *)(iVar2 + 0x20) = 0;
  *(undefined1 *)(iVar2 + 0x21) = 0;
  *(undefined1 *)(iVar2 + 0x22) = 0;
  *(undefined1 *)(iVar2 + 0x23) = 0;
  *(undefined1 *)(iVar2 + 0x24) = 0;
  *(undefined1 *)(iVar2 + 0x25) = 0;
  *(undefined1 *)(iVar2 + 0x26) = 0;
  *(undefined1 *)(iVar2 + 0x27) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(undefined4 *)(iVar2 + 0x54) = 0;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(undefined1 *)(iVar2 + 100) = 0;
  *(undefined1 *)(iVar2 + 0x76) = 0;
  *(int *)(iVar2 + 0x78) = *(int *)(iVar2 + 0x78) + 1;
  cVar1 = *(char *)(iVar2 + 0x74);
  *(char *)(iVar2 + 0x75) = cVar1;
  *(undefined1 *)(iVar2 + 0x74) = 0;
  if (cVar1 == '\0') {
    *(int *)(iVar2 + 0x7c) = *(int *)(iVar2 + 0x7c) + 1;
  }
  else {
    *(undefined4 *)(iVar2 + 0x7c) = 0;
  }
  return;
}



void fn_0069cd24(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  int extraout_r1;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float in_s1;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  
  iVar6 = 0;
  iVar8 = 0;
  iVar9 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    piVar7 = *(int **)(*(int *)(param_1 + 4) + 0x10);
    piVar5 = (int *)*piVar7;
    if (piVar5 != piVar7) {
      uVar21 = 0x3f000000;
      do {
        bVar11 = *(char *)((int)piVar5 + 0xd) != '\x01';
        cVar3 = '\x01';
        if (bVar11) {
          cVar3 = (char)piVar5[3];
        }
        if ((bVar11 && cVar3 != '\0') && (piVar5[2] != param_3)) {
          fVar12 = (float)((ulonglong)uVar21 >> 0x20);
          iVar10 = piVar5[2];
          fVar16 = fVar12;
          fVar17 = fVar12;
          fVar18 = fVar12;
          fVar19 = fVar12;
          fn_00688ff8(iVar10);
          fVar15 = *(float *)(iVar10 + 0x3c);
          fVar14 = *(float *)(iVar10 + 0x40);
          bVar4 = *(byte *)(iVar10 + 0x47) & 3;
          fVar20 = (float)uVar21;
          if ((*(byte *)(iVar10 + 0x47) & 3) == 0) {
            fVar16 = fVar15 * fVar20;
            fVar15 = fVar15 * fVar20;
            fVar13 = fVar12 + fVar16;
LAB_0069cdfc:
            fVar16 = fVar12 - fVar15;
            fVar17 = fVar13;
          }
          else if (bVar4 == 1) {
            fVar16 = fVar12;
            fVar17 = fVar12 + fVar15;
          }
          else {
            fVar13 = fVar12;
            if (bVar4 == 2) goto LAB_0069cdfc;
          }
          uVar1 = (*(byte *)(iVar10 + 0x47) & 0xf) >> 2;
          if (uVar1 == 0) {
            fVar15 = fVar14 * fVar20;
            fVar14 = fVar14 * fVar20;
            fVar15 = in_s1 - fVar15;
LAB_0069ce3c:
            fVar18 = in_s1 + fVar14;
            fVar19 = fVar15;
          }
          else if (uVar1 == 1) {
            fVar18 = in_s1;
            fVar19 = in_s1 - fVar14;
          }
          else {
            fVar15 = in_s1;
            if (uVar1 == 2) goto LAB_0069ce3c;
          }
          in_s1 = *(float *)(param_1 + 0x2c);
          fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x28),
                                              (byte)(in_fpscr >> 0x16) & 3);
          uVar1 = in_fpscr & 0xfffffff;
          uVar2 = uVar1 | (uint)(fVar16 < fVar14) << 0x1f | (uint)(fVar16 == fVar14) << 0x1e;
          in_fpscr = uVar2 | (uint)(NAN(fVar16) || NAN(fVar14)) << 0x1c;
          bVar4 = (byte)(uVar2 >> 0x18);
          if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x28),
                                                (byte)(in_fpscr >> 0x16) & 3);
            bVar11 = false;
            in_fpscr = uVar1;
            if (fVar14 <= fVar17) {
              fVar14 = (float)VectorSignedToFloat(in_s1,(byte)(uVar1 >> 0x16) & 3);
              in_fpscr = uVar1 | (uint)(fVar14 <= fVar18) << 0x1d;
              bVar11 = SUB41(in_fpscr >> 0x1d,0);
            }
            if (bVar11) {
              fVar14 = (float)VectorSignedToFloat(in_s1,(byte)(in_fpscr >> 0x16) & 3);
              uVar1 = in_fpscr & 0xfffffff | (uint)(fVar19 < fVar14) << 0x1f |
                      (uint)(fVar19 == fVar14) << 0x1e;
              in_fpscr = uVar1 | (uint)(NAN(fVar19) || NAN(fVar14)) << 0x1c;
              bVar4 = (byte)(uVar1 >> 0x18);
              if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
                iVar6 = piVar5[2];
                if (iVar6 != 0) {
                  if ((*param_2 != iVar6) &&
                     (param_2[5] = iVar6, local_4c = iVar6, *(char *)(param_1 + 0x21) != '\0')) {
                    param_2[6] = iVar6;
                  }
                  goto LAB_0069cef8;
                }
                break;
              }
            }
          }
        }
        piVar5 = (int *)*piVar5;
      } while (piVar5 != piVar7);
    }
  }
  if (*param_2 != iVar6) {
    local_50 = param_2[5];
    param_2[5] = 0;
    if ((*(char *)(param_1 + 0x23) != '\0') && (iVar10 = param_2[6], iVar10 == *param_2)) {
      param_2[6] = 0;
      local_54 = iVar10;
    }
  }
LAB_0069cef8:
  if (param_2[8] == 0) {
    if ((iVar6 == 0) || (*param_2 != iVar6)) {
      param_2[0xc] = 0;
    }
    else {
      iVar10 = param_2[0xc];
      param_2[0xc] = iVar10 + 1;
      if (3 < iVar10 + 1) {
        param_2[0xb] = iVar6;
        param_2[0xc] = 0;
        iVar8 = iVar6;
        iVar9 = iVar6;
      }
    }
  }
  else if (*(char *)(param_1 + 0x20) == '\0') {
    local_58 = param_2[0xb];
  }
  else {
    iVar8 = param_2[0xb];
  }
  param_2[3] = local_50;
  param_2[4] = local_54;
  param_2[8] = iVar8;
  param_2[9] = iVar9;
  param_2[2] = 0;
  param_2[10] = local_58;
  *param_2 = iVar6;
  param_2[1] = local_4c;
  if (iVar6 == 0) {
    param_2[7] = 0;
  }
  else {
    iVar8 = param_2[7];
    if (iVar8 < *(int *)(param_1 + 0x68)) {
      param_2[2] = local_4c;
    }
    else {
      fn_00300f74(iVar8 - *(int *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
      if (extraout_r1 == 0) {
        param_2[2] = iVar6;
      }
    }
    param_2[7] = iVar8 + 1;
  }
  return;
}



int fn_0069cd0c(int param_1)

{
  return param_1 * 0x4c + 0x8994cc;
}



int fn_0069ccdc(int param_1)

{
  return param_1 * 0x4c + 0x8994d6;
}



undefined4 fn_0069ccc0(int param_1)

{
  return *(undefined4 *)(&DAT_00899514 + param_1 * 0x4c);
}



bool fn_0069ccac(int param_1)

{
  return param_1 == 0x1d || param_1 == 0x1e;
}



int fn_0069cc2c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined ***pppuStack_1c;
  undefined **ppuStack_18;
  int local_14;
  int iStack_10;
  int local_c;
  
  bVar2 = param_2 == 0;
  iVar1 = param_4;
  if (!bVar2) {
    iVar1 = *(int *)(param_4 + 0xc0);
  }
  bVar3 = iVar1 == 0;
  if (!bVar2 && !bVar3) {
    iVar1 = *(int *)(param_3 + 0x10);
  }
  local_14 = param_1;
  if ((bVar2 || bVar3) || iVar1 == 0) {
    local_14 = param_2;
  }
  if ((!bVar2 && !bVar3) && iVar1 != 0) {
    *(int *)(param_4 + 0xb0) = param_3;
    pppuStack_1c = &ppuStack_18;
    ppuStack_18 = &PTR_LAB_007ce718;
    local_c = local_14;
    local_14 = param_2;
    iStack_10 = param_4;
    fn_0075eb28(&pppuStack_1c,*(undefined4 *)(param_3 + 0x10));
    *(undefined4 *)(param_4 + 0xb0) = 0;
  }
  return local_14;
}


