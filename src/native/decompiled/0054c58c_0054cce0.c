#include "0054c58c_0054cce0.h"



int fn_0054cce0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  do {
    cVar1 = *(char *)(param_1 + 0x80 + iVar2);
    if (cVar1 != *(char *)(param_2 + iVar2)) {
      piVar3 = *(int **)(param_1 + 0x14);
      while( true ) {
        if (piVar3 == (int *)(param_1 + 0x14)) {
          return 0;
        }
        iVar2 = (**(code **)(piVar3[-1] + 0x4c))(piVar3 + -1,param_2);
        if (iVar2 != 0) break;
        piVar3 = (int *)*piVar3;
      }
      return iVar2;
    }
    if (cVar1 == '\0') {
      return param_1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x18);
  return param_1;
}



void fn_0054cc7c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *param_1 = *(undefined4 *)(param_2 + 0xc0);
  param_1[1] = param_2 + 0x44;
  uVar1 = *(undefined4 *)(param_2 + 0xa8);
  param_1[2] = *(undefined4 *)(param_2 + 0xa4);
  param_1[3] = uVar1;
  param_1[4] = 0x3f800000;
  *(byte *)(param_1 + 5) = *(byte *)(param_2 + 0xc4) & 1;
  *(char *)((int)param_1 + 0x15) = (char)((*(byte *)(param_2 + 0xc4) & 2) >> 1);
  *(char *)((int)param_1 + 0x16) = (char)((*(byte *)(param_2 + 0xc4) & 4) >> 2);
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  param_1[6] = param_3;
  return;
}



int fn_0054cba8(int *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  uVar2 = (**(code **)(*param_1 + 0x24))(param_1);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = (**(code **)(*param_1 + 0x28))(param_1,uVar5);
      if (iVar3 != 0) {
        iVar4 = 0;
        while (cVar1 = *(char *)(*(int *)(iVar3 + 0x80) + iVar4),
              cVar1 == *(char *)(param_2 + iVar4)) {
          if ((cVar1 == '\0') || (iVar4 = iVar4 + 1, 0x1b < iVar4)) {
            return iVar3;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  if (param_3 != 0) {
    for (piVar6 = (int *)param_1[5]; piVar6 != param_1 + 5; piVar6 = (int *)*piVar6) {
      iVar3 = (**(code **)(piVar6[-1] + 0x50))(piVar6 + -1,param_2);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
  return 0;
}



int fn_0054cb08(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  do {
    cVar1 = *(char *)(param_1 + 0x80 + iVar2);
    if (cVar1 != *(char *)(param_2 + iVar2)) {
      if (param_3 != 0) {
        for (piVar3 = *(int **)(param_1 + 0x14); piVar3 != (int *)(param_1 + 0x14);
            piVar3 = (int *)*piVar3) {
          iVar2 = (**(code **)(piVar3[-1] + 0x4c))(piVar3 + -1,param_2);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
      }
      return 0;
    }
    if (cVar1 == '\0') {
      return param_1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x18);
  return param_1;
}



void fn_0054cab4(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*param_2 + 0x28))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x0054caec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,param_4);
  return;
}



void fn_0054ca5c(int param_1,int param_2)

{
  fn_0017d948(param_1 + 0x10,*(undefined4 *)(param_1 + 0x14),param_2 + 4);
  *(int *)(param_2 + 0xc) = param_1;
  *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) & 0xef | 0x10;
  return;
}



void fn_0054c58c(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  uint uVar9;
  byte bVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float in_s1;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_44 [10];
  
  bVar1 = *(byte *)(param_1 + 0x44);
  bVar8 = (bVar1 & 1) == 0;
  uVar3 = param_2;
  if (bVar8) {
    uVar3 = (uint)*(byte *)(param_2 + 0x15);
  }
  if (!bVar8 || uVar3 != 0) {
    bVar8 = *(char *)(param_2 + 0x17) != '\0';
    iVar4 = 0;
    if (bVar8) {
      iVar4 = *(int *)(param_1 + 0xc);
    }
    bVar10 = *(byte *)(param_1 + 0x45);
    if (bVar8 && iVar4 != 0) {
      in_s1 = *(float *)(param_2 + 0x10);
      fVar11 = (float)VectorUnsignedToFloat((uint)bVar10,(byte)(in_fpscr >> 0x16) & 3);
      uVar12 = VectorFloatToUnsigned(fVar11 * in_s1,3);
      bVar10 = (byte)uVar12;
    }
    *(byte *)(param_1 + 0x46) = bVar10;
    if (((*(char *)(param_1 + 0x45) != '\0') || ((bVar1 & 2) == 0)) ||
       (*(char *)(param_2 + 0x16) != '\0')) {
      uVar3 = bVar1 & 0x10;
      if ((bVar1 & 0x10) != 0) {
        uVar3 = 1;
      }
      uVar3 = uVar3 | param_3;
      if ((bVar1 & 0x40) == 0) {
        if (*(int *)(param_1 + 0xc) == 0) {
          pfVar6 = *(float **)(param_2 + 4);
        }
        else {
          pfVar6 = (float *)(*(int *)(param_1 + 0xc) + 0x48);
        }
        if ((bVar1 & 0x20) == 0) {
          if (uVar3 != 0) {
            *(byte *)(param_1 + 0x44) = bVar1 & 0xef;
            fVar11 = *(float *)(param_1 + 0x34);
            fVar13 = *(float *)(param_1 + 0x38);
            if (*(char *)(param_2 + 0x14) != '\0' && (bVar1 & 4) != 0) {
              in_s1 = *(float *)(param_2 + 0xc);
              fVar11 = fVar11 * *(float *)(param_2 + 8);
              fVar13 = fVar13 * in_s1;
            }
            fVar26 = *(float *)(param_1 + 0x1c);
            fVar27 = *(float *)(param_1 + 0x20);
            fVar28 = *(float *)(param_1 + 0x24);
            uVar9 = (*(byte *)(param_1 + 0x47) & 0x3f) >> 4;
            if (uVar9 == 1) {
              in_s1 = *(float *)(*(int *)(param_1 + 0xc) + 0x3c);
              fVar26 = fVar26 - in_s1 * 0.5;
            }
            else if (uVar9 == 2) {
              in_s1 = *(float *)(*(int *)(param_1 + 0xc) + 0x3c);
              fVar26 = fVar26 + in_s1 * 0.5;
            }
            bVar1 = *(byte *)(param_1 + 0x47) >> 6;
            if (bVar1 == 1) {
              in_s1 = *(float *)(*(int *)(param_1 + 0xc) + 0x40);
              fVar27 = fVar27 + in_s1 * 0.5;
            }
            else if (bVar1 == 2) {
              in_s1 = *(float *)(*(int *)(param_1 + 0xc) + 0x40);
              fVar27 = fVar27 - in_s1 * 0.5;
            }
            fVar29 = 0.0;
            bVar8 = *(float *)(param_1 + 0x28) == 0.0;
            in_fpscr = in_fpscr & 0xfffffff;
            if (bVar8) {
              in_s1 = *(float *)(param_1 + 0x2c);
            }
            uVar9 = in_fpscr | (uint)(bVar8 && in_s1 == 0.0) << 0x1e;
            bVar7 = false;
            if (bVar8) {
              bVar7 = SUB41(uVar9 >> 0x1e,0);
            }
            if (bVar7) {
              if (*(float *)(param_1 + 0x30) == 0.0) {
                fVar29 = pfVar6[6];
                fVar14 = pfVar6[10];
                fVar17 = pfVar6[5];
                fVar15 = pfVar6[1];
                fVar16 = pfVar6[2];
                fVar18 = pfVar6[9];
                fVar19 = *pfVar6;
                fVar20 = pfVar6[4];
                fVar21 = pfVar6[8];
                fVar22 = pfVar6[3];
                fVar23 = pfVar6[7];
                fVar24 = pfVar6[0xb];
                *(float *)(param_1 + 0x50) = fVar16;
                *(float *)(param_1 + 0x54) =
                     fVar16 * fVar28 + fVar15 * fVar27 + fVar19 * fVar26 + fVar22;
                *(float *)(param_1 + 0x58) = fVar20 * fVar11;
                *(float *)(param_1 + 0x5c) = fVar17 * fVar13;
                *(float *)(param_1 + 0x60) = fVar29;
                *(float *)(param_1 + 100) =
                     fVar29 * fVar28 + fVar17 * fVar27 + fVar20 * fVar26 + fVar23;
                *(float *)(param_1 + 0x70) = fVar14;
                *(float *)(param_1 + 0x74) =
                     fVar14 * fVar28 + fVar18 * fVar27 + fVar21 * fVar26 + fVar24;
                *(float *)(param_1 + 0x68) = fVar21 * fVar11;
                *(float *)(param_1 + 0x6c) = fVar18 * fVar13;
                *(float *)(param_1 + 0x48) = fVar19 * fVar11;
                *(float *)(param_1 + 0x4c) = fVar15 * fVar13;
              }
              else {
                fn_0052534c(&local_58,&local_54);
                local_88 = fVar11 * local_54;
                local_84 = -(fVar13 * local_58);
                local_78 = fVar11 * local_58;
                local_74 = fVar13 * local_54;
                local_60 = 1.0;
                local_80 = fVar29;
                local_7c = fVar26;
                local_70 = fVar29;
                local_6c = fVar27;
                local_68 = fVar29;
                local_64 = fVar29;
                local_5c = fVar28;
                fn_001ad06c(param_1 + 0x48,pfVar6,&local_88);
              }
            }
            else {
              fn_0052534c(&local_58,&local_54);
              fn_0052534c(&local_50,&local_4c);
              fn_0052534c(&fStack_48,local_44);
              local_68 = -(fVar11 * local_50);
              local_60 = local_54 * local_4c;
              local_88 = fVar11 * local_4c * local_44[0];
              local_78 = fVar11 * local_4c * fStack_48;
              local_64 = fVar13 * local_58 * local_4c;
              local_80 = local_54 * local_44[0] * local_50 + local_58 * fStack_48;
              local_70 = local_54 * fStack_48 * local_50 - local_58 * local_44[0];
              local_84 = fVar13 * (local_58 * local_50 * local_44[0] - local_54 * fStack_48);
              local_74 = fVar13 * (local_54 * local_44[0] + local_58 * local_50 * fStack_48);
              local_7c = fVar26;
              local_6c = fVar27;
              local_5c = fVar28;
              fn_001ad06c(param_1 + 0x48,pfVar6,&local_88);
              in_fpscr = uVar9;
            }
          }
        }
        else {
          uVar3 = 1;
          fn_001ad06c(param_1 + 0x48,pfVar6,*(undefined4 *)(param_1 + 0x78));
        }
      }
      else {
        uVar3 = 1;
      }
      bVar1 = *(byte *)(param_1 + 0x44);
      bVar8 = (bVar1 & 2) != 0;
      if (bVar8) {
        bVar1 = *(byte *)(param_1 + 0x45);
      }
      if (bVar8 && bVar1 != 0xff) {
        fVar11 = *(float *)(param_2 + 0x10);
        uVar25 = (ulonglong)(uint)fVar11;
        uVar2 = *(undefined1 *)(param_2 + 0x17);
        fVar13 = (float)VectorUnsignedToFloat((uint)bVar1,(byte)(in_fpscr >> 0x16) & 3);
        *(float *)(param_2 + 0x10) = fVar13 * fVar11 * 0.003921569;
        *(undefined1 *)(param_2 + 0x17) = 1;
        for (piVar5 = *(int **)(param_1 + 0x14); piVar5 != (int *)(param_1 + 0x14);
            piVar5 = (int *)*piVar5) {
          (**(code **)(piVar5[-1] + 0x40))(piVar5 + -1,param_2,uVar3);
          fVar11 = (float)uVar25;
        }
        *(float *)(param_2 + 0x10) = fVar11;
        *(undefined1 *)(param_2 + 0x17) = uVar2;
        return;
      }
      piVar5 = *(int **)(param_1 + 0x14);
      if (piVar5 == (int *)(param_1 + 0x14)) {
        return;
      }
      do {
        (**(code **)(piVar5[-1] + 0x40))(piVar5 + -1,param_2,uVar3);
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)(param_1 + 0x14));
      return;
    }
  }
  if (param_3 == 0) {
    return;
  }
  *(byte *)(param_1 + 0x44) = bVar1 & 0xef | 0x10;
  return;
}


