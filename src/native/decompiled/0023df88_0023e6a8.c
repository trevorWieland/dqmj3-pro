#include "0023df88_0023e6a8.h"



void fn_0023e6a8(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0023e6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 8))();
  return;
}



void fn_0023e640(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = *(int *)(*(int *)(param_1 + 0xc) + param_2 * 4);
  if (iVar9 != 0) {
    iVar10 = *(int *)(param_1 + 8);
    iVar8 = fn_00182d34(iVar10,*(undefined4 *)(iVar9 + 8));
    if (((-1 < iVar8) && (*(char *)(*(int *)(iVar10 + 0x1c) + iVar8 * 0x28 + 0x24) != '\0')) &&
       (fn_0034e5e0(iVar9), param_3 != 0)) {
      *(undefined4 *)(iVar9 + 0x2c) = 0;
      *(undefined4 *)(iVar9 + 0x7c) = 0xffffffff;
      if ((((byte)DAT_008c6300 & 1) == 0) && (iVar8 = fn_00303afc(&DAT_008c6300), iVar8 != 0)) {
        DAT_008f9e38 = 0x3f800000;
        DAT_008f9e3c = 0;
        DAT_008f9e40 = 0;
        DAT_008f9e44 = 0;
        DAT_008f9e48 = 0;
        DAT_008f9e4c = 0x3f800000;
        DAT_008f9e50 = 0;
        DAT_008f9e54 = 0;
        DAT_008f9e58 = 0;
        DAT_008f9e5c = 0;
        DAT_008f9e60 = 0x3f800000;
        DAT_008f9e64 = 0;
      }
      uVar7 = DAT_008f9e54;
      uVar6 = DAT_008f9e50;
      uVar5 = DAT_008f9e4c;
      uVar4 = DAT_008f9e48;
      uVar3 = DAT_008f9e44;
      uVar2 = DAT_008f9e40;
      uVar1 = DAT_008f9e3c;
      *(undefined4 *)(iVar9 + 0x30) = DAT_008f9e38;
      *(undefined4 *)(iVar9 + 0x34) = uVar1;
      *(undefined4 *)(iVar9 + 0x38) = uVar2;
      *(undefined4 *)(iVar9 + 0x3c) = uVar3;
      *(undefined4 *)(iVar9 + 0x40) = uVar4;
      *(undefined4 *)(iVar9 + 0x44) = uVar5;
      *(undefined4 *)(iVar9 + 0x48) = uVar6;
      *(undefined4 *)(iVar9 + 0x4c) = uVar7;
      uVar3 = DAT_008f9e64;
      uVar2 = DAT_008f9e60;
      uVar1 = DAT_008f9e5c;
      *(undefined4 *)(iVar9 + 0x50) = DAT_008f9e58;
      *(undefined4 *)(iVar9 + 0x54) = uVar1;
      *(undefined4 *)(iVar9 + 0x58) = uVar2;
      *(undefined4 *)(iVar9 + 0x5c) = uVar3;
      return;
    }
  }
  return;
}



void fn_0023e574(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined1 local_30 [28];
  
  piVar2 = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
  if (piVar2 != (int *)0x0) {
    iVar3 = *(int *)(param_1 + 8);
    iVar1 = fn_00182d34(iVar3,piVar2[2]);
    if ((iVar1 < 0) || (*(char *)(*(int *)(iVar3 + 0x1c) + iVar1 * 0x28 + 0x24) == '\0')) {
      iVar1 = (**(code **)(*piVar2 + 0x48))(piVar2);
      *(undefined4 *)(iVar1 + 0x58) = in_s0;
      *(undefined4 *)(iVar1 + 0x68) = in_s1;
      *(undefined4 *)(iVar1 + 0x78) = in_s2;
      *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
      return;
    }
    piVar2 = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(piVar2,local_30);
    }
  }
  return;
}



void fn_0023e554(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0023e56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x2c))();
  return;
}



void fn_0023e52c(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0023e548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x24))();
  return;
}



/* WARNING: Removing unreachable block (ram,0x0023e450) */
/* WARNING: Removing unreachable block (ram,0x0023e46c) */
/* WARNING: Removing unreachable block (ram,0x0023e394) */

void fn_0023e2ac(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint in_fpscr;
  float in_s0;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  piVar3 = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
  if (piVar3 != (int *)0x0) {
    iVar4 = *(int *)(param_1 + 8);
    iVar1 = fn_00182d34(iVar4,piVar3[2]);
    if ((-1 < iVar1) && (*(char *)(*(int *)(iVar4 + 0x1c) + iVar1 * 0x28 + 0x24) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0023e314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar3 + 8))(piVar3);
      return;
    }
    iVar1 = (**(code **)(*piVar3 + 0x48))(piVar3);
    uVar14 = *(undefined4 *)(iVar1 + 0x58);
    uVar13 = *(undefined4 *)(iVar1 + 0x68);
    uVar12 = *(undefined4 *)(iVar1 + 0x78);
    in_fpscr = in_fpscr & 0xfffffff;
    for (fVar6 = ABS(in_s0 * 40.743664); 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
    }
    uVar7 = VectorFloatToUnsigned(0,3);
    uVar8 = VectorFloatToUnsigned(fVar6,3);
    uVar5 = uVar7 & 0xff;
    uVar9 = VectorFloatToUnsigned(0,3);
    uVar2 = uVar8 & 0xff;
    fVar11 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar15 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar7 = uVar9 & 0xff;
    fVar16 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar10 = (float)(&DAT_007d6f20)[uVar5 * 4] + (0.0 - fVar11) * (float)(&DAT_007d6f28)[uVar5 * 4];
    fVar17 = (float)(&DAT_007d6f24)[uVar5 * 4] + (0.0 - fVar11) * (float)(&DAT_007d6f2c)[uVar5 * 4];
    fVar11 = (float)(&DAT_007d6f20)[uVar2 * 4] +
             (fVar6 - fVar15) * (float)(&DAT_007d6f28)[uVar2 * 4];
    fVar15 = (float)(&DAT_007d6f24)[uVar2 * 4] +
             (fVar6 - fVar15) * (float)(&DAT_007d6f2c)[uVar2 * 4];
    fVar6 = (float)(&DAT_007d6f20)[uVar7 * 4] + (0.0 - fVar16) * (float)(&DAT_007d6f28)[uVar7 * 4];
    fVar16 = (float)(&DAT_007d6f24)[uVar7 * 4] + (0.0 - fVar16) * (float)(&DAT_007d6f2c)[uVar7 * 4];
    if (in_s0 * 40.743664 < 0.0) {
      fVar11 = -fVar11;
    }
    *(float *)(iVar1 + 0x4c) = fVar16 * fVar15;
    *(float *)(iVar1 + 0x5c) = fVar6 * fVar15;
    *(float *)(iVar1 + 0x50) = fVar10 * fVar16 * fVar11 - fVar17 * fVar6;
    *(float *)(iVar1 + 100) = fVar17 * fVar6 * fVar11 - fVar10 * fVar16;
    *(float *)(iVar1 + 0x54) = fVar10 * fVar6 + fVar17 * fVar16 * fVar11;
    *(float *)(iVar1 + 0x60) = fVar17 * fVar16 + fVar10 * fVar6 * fVar11;
    *(float *)(iVar1 + 0x6c) = -fVar11;
    *(float *)(iVar1 + 0x70) = fVar10 * fVar15;
    *(float *)(iVar1 + 0x74) = fVar17 * fVar15;
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x78) = 0;
    *(undefined4 *)(iVar1 + 0x58) = uVar14;
    *(undefined4 *)(iVar1 + 0x68) = uVar13;
    *(undefined4 *)(iVar1 + 0x78) = uVar12;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  }
  return;
}



int fn_0023e194(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1);
  if (-1 < iVar1) {
    uVar4 = 0;
    uVar5 = 1;
    if (param_3 == 0) {
      iVar2 = fn_00182d34(param_1[2],param_2);
      uVar5 = 0;
      if ((iVar2 < 0) || (iVar2 = fn_001793c4(param_2), iVar2 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)*(ushort *)(iVar2 + 4);
      }
      uVar4 = (uVar4 & 4) >> 2;
      iVar2 = fn_00182d34(param_1[2],param_2);
      if ((-1 < iVar2) && (iVar2 = fn_001793c4(param_2), iVar2 != 0)) {
        uVar5 = (uint)*(ushort *)(iVar2 + 4);
      }
      uVar5 = (uVar5 & 8) >> 3;
    }
    piVar3 = *(int **)(param_1[3] + iVar1 * 4);
    (**(code **)(*piVar3 + 0x58))(piVar3,1);
    (**(code **)(*piVar3 + 0x4c))(piVar3,uVar4);
    (**(code **)(*piVar3 + 0x50))(piVar3,uVar5);
  }
  return iVar1;
}



void fn_0023df88(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  
  puVar9 = (uint *)(param_1 + 0x24);
  param_2 = param_3 & 0xffff0000 | param_2;
  puVar1 = *(uint **)(param_1 + 0x28);
  if (puVar1 != *(uint **)(param_1 + 0x2c)) {
    *(uint **)(param_1 + 0x28) = puVar1 + 2;
    if (puVar1 != (uint *)0x0) {
      puVar1[1] = param_3;
      *puVar1 = param_2;
    }
    return;
  }
  uVar11 = (int)((int)puVar1 - *puVar9) >> 3;
  if (uVar11 < (uint)((int)((int)*(uint **)(param_1 + 0x2c) - *puVar9) >> 3)) {
    *(uint **)(param_1 + 0x28) = puVar1 + 2;
    if (puVar1 != (uint *)0x0) {
      *puVar1 = puVar1[-2];
      puVar1[1] = puVar1[-1];
    }
    puVar9 = puVar1 + -2;
    puVar5 = puVar1;
    if (puVar1 < puVar9) {
      iVar8 = (int)puVar9 - (int)puVar1;
      if (0 < iVar8) {
        if (iVar8 * 0x10000000 < 0) {
          puVar9 = puVar1 + -4;
          puVar5 = puVar1 + -2;
          *puVar5 = *puVar9;
          puVar1[-1] = puVar1[-3];
        }
        for (iVar8 = iVar8 >> 4; iVar8 != 0; iVar8 = iVar8 + -1) {
          uVar11 = puVar9[-1];
          puVar5[-2] = puVar9[-2];
          puVar5[-1] = uVar11;
          uVar11 = puVar9[-3];
          puVar5[-4] = puVar9[-4];
          puVar5[-3] = uVar11;
          puVar5 = puVar5 + -4;
          puVar9 = puVar9 + -4;
        }
      }
    }
    else {
      while (puVar1 != puVar9) {
        uVar11 = puVar9[-1];
        puVar5[-2] = puVar9[-2];
        puVar5[-1] = uVar11;
        puVar5 = puVar5 + -2;
        puVar9 = puVar9 + -2;
      }
    }
    puVar1[1] = param_3;
    *puVar1 = param_2;
    return;
  }
  uVar4 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
  uVar10 = uVar11 + 0x20;
  if (uVar11 + 0x20 <= uVar4) {
    uVar10 = uVar4;
  }
  puVar2 = (uint *)fn_00100fc6(uVar10 << 3,0);
  puVar6 = puVar2;
  for (puVar5 = (uint *)*puVar9; puVar5 != puVar1; puVar5 = puVar5 + 2) {
    if (puVar6 != (uint *)0x0) {
      uVar11 = puVar5[1];
      *puVar6 = *puVar5;
      puVar6[1] = uVar11;
    }
    puVar6 = puVar6 + 2;
  }
  puVar5 = (uint *)(((int)puVar1 - *puVar9 & 0xfffffff8) + (int)puVar2);
  if (puVar5 != (uint *)0x0) {
    puVar5[1] = param_3;
    *puVar5 = param_2;
  }
  puVar6 = *(uint **)(param_1 + 0x28);
  puVar5 = (uint *)(((int)puVar1 - *puVar9 & 0xfffffff8) + (int)puVar2);
  for (; puVar1 != puVar6; puVar1 = puVar1 + 2) {
    puVar3 = puVar5 + 2;
    if (puVar3 != (uint *)0x0) {
      uVar11 = puVar1[1];
      *puVar3 = *puVar1;
      puVar5[3] = uVar11;
    }
    puVar5 = puVar3;
  }
  uVar4 = *puVar9;
  uVar7 = *(uint *)(param_1 + 0x28);
  uVar11 = uVar4;
  if (uVar7 < uVar4) {
    do {
      uVar11 = uVar11 + 8;
    } while (uVar11 != uVar7);
  }
  fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0x2c) - uVar4) >> 3,0);
  *(uint **)(param_1 + 0x2c) = puVar2 + uVar10 * 2;
  *(uint **)(param_1 + 0x28) = puVar2 + ((int)(uVar7 - uVar4) >> 3) * 2 + 2;
  *puVar9 = (uint)puVar2;
  return;
}


