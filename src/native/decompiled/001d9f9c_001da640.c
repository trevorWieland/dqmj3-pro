#include "001d9f9c_001da640.h"



void fn_001da640(int param_1)

{
  undefined4 in_s0;
  
  *(undefined4 *)(param_1 + 0x144) = in_s0;
  if (*(int *)(param_1 + 0xe4) == 0) {
    return;
  }
  fn_001747e8(*(int *)(param_1 + 0xe4));
  return;
}



void fn_001da5e4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0xe4));
  iVar2 = fn_006ebf84(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar1);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0xe4));
  fn_00162d54(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar1);
  return;
}



void fn_001da54c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  
  fn_0017fde4(param_2);
  piVar2 = (int *)fn_005ea4fc();
  fn_0017fde4(param_2);
  iVar3 = fn_006ebe58();
  if (*(short *)(iVar3 + 0x88) == 0) {
    uVar4 = 0xffff;
  }
  else {
    uVar5 = fn_002febd8(param_3);
    uVar4 = fn_00190fe0(iVar3 + 0x88,param_3,uVar5);
  }
  bVar1 = *(byte *)(*piVar2 + (uVar4 >> 3));
  bVar6 = (byte)(1 << (uVar4 & 7));
  if (param_4 == 0) {
    bVar6 = bVar1 & ~bVar6;
  }
  else {
    bVar6 = bVar6 | bVar1;
  }
  *(byte *)(*piVar2 + (uVar4 >> 3)) = bVar6;
  return;
}



void fn_001da4dc(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 0x100);
  uVar3 = *(uint *)(param_1 + 0x104);
  uVar1 = uVar4;
  if (uVar4 < uVar3) {
    iVar5 = ((int)(uVar3 - uVar4) >> 4) + 1;
    if (1 < iVar5) {
      uVar1 = uVar3 - uVar4;
    }
    iVar2 = 1;
    if (1 < iVar5) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < ((int)uVar1 >> 4) + 1);
    }
  }
  else {
    for (; uVar1 != uVar3; uVar1 = uVar1 + 0x10) {
    }
  }
  *(uint *)(param_1 + 0x104) = uVar4;
  fn_007566dc(param_1 + 0xfc,1);
  return;
}



void fn_001da490(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (-1 < param_3) {
    *(int *)(*(int *)(param_1 + 0x14c) + param_2 * 0xc) = param_3;
  }
  if (-1 < param_4) {
    *(int *)(*(int *)(param_1 + 0x14c) + param_2 * 0xc + 4) = param_4;
  }
  if (-1 < param_5) {
    *(int *)(*(int *)(param_1 + 0x14c) + param_2 * 0xc + 8) = param_5;
  }
  return;
}



void fn_001da428(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x110))(param_1);
  if (iVar1 != -1) {
    iVar2 = (**(code **)(*param_1 + 0x114))(param_1);
    for (; iVar1 <= iVar2; iVar1 = iVar1 + 1) {
      puVar3 = (undefined4 *)(param_1[0x53] + iVar1 * 0xc);
      *puVar3 = 0xffffffff;
      puVar3[1] = 0xffffffff;
      puVar3[2] = 0xffffffff;
    }
  }
  return;
}



void fn_001da39c(int param_1)

{
  if (*(int *)(param_1 + 0xe8) == -1) {
    return;
  }
  (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  return;
}



void fn_001da100(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (*(int *)(param_1 + 0xe4) != 0) {
    iVar1 = fn_0017fde4();
    fVar10 = *(float *)(param_1 + 0x2c) * 40.743664;
    fVar8 = *(float *)(param_1 + 0x30) * 40.743664;
    fVar6 = *(float *)(param_1 + 0x34) * 40.743664;
    in_fpscr = in_fpscr & 0xfffffff;
    fVar9 = ABS(fVar8);
    fVar7 = ABS(fVar6);
    for (fVar11 = ABS(fVar10); 0x477fffff < (int)fVar11; fVar11 = fVar11 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
    }
    uVar12 = VectorFloatToUnsigned(fVar11,3);
    uVar13 = VectorFloatToUnsigned(fVar9,3);
    uVar14 = VectorFloatToUnsigned(fVar7,3);
    uVar2 = uVar12 & 0xff;
    uVar5 = uVar14 & 0xff;
    fVar17 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar12 = uVar13 & 0xff;
    fVar18 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar19 = (float)VectorUnsignedToFloat(uVar14 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar16 = (float)(&DAT_007d6f20)[uVar2 * 4] +
             (fVar11 - fVar17) * (float)(&DAT_007d6f28)[uVar2 * 4];
    fVar15 = (float)(&DAT_007d6f24)[uVar2 * 4] +
             (fVar11 - fVar17) * (float)(&DAT_007d6f2c)[uVar2 * 4];
    fVar17 = (float)(&DAT_007d6f24)[uVar12 * 4] +
             (fVar9 - fVar18) * (float)(&DAT_007d6f2c)[uVar12 * 4];
    fVar11 = (float)(&DAT_007d6f20)[uVar12 * 4] +
             (fVar9 - fVar18) * (float)(&DAT_007d6f28)[uVar12 * 4];
    if (fVar10 < 0.0) {
      fVar16 = -fVar16;
    }
    fVar9 = (float)(&DAT_007d6f20)[uVar5 * 4] + (fVar7 - fVar19) * (float)(&DAT_007d6f28)[uVar5 * 4]
    ;
    fVar7 = (float)(&DAT_007d6f24)[uVar5 * 4] + (fVar7 - fVar19) * (float)(&DAT_007d6f2c)[uVar5 * 4]
    ;
    if (fVar8 < 0.0) {
      fVar11 = -fVar11;
    }
    if (fVar6 < 0.0) {
      fVar9 = -fVar9;
    }
    *(float *)(iVar1 + 0x4c) = fVar7 * fVar17;
    *(float *)(iVar1 + 0x5c) = fVar9 * fVar17;
    *(float *)(iVar1 + 0x70) = fVar16 * fVar17;
    *(float *)(iVar1 + 0x74) = fVar15 * fVar17;
    *(float *)(iVar1 + 0x50) = fVar16 * fVar7 * fVar11 - fVar15 * fVar9;
    *(float *)(iVar1 + 100) = fVar15 * fVar9 * fVar11 - fVar16 * fVar7;
    *(float *)(iVar1 + 0x54) = fVar16 * fVar9 + fVar15 * fVar7 * fVar11;
    *(float *)(iVar1 + 0x60) = fVar15 * fVar7 + fVar16 * fVar9 * fVar11;
    *(float *)(iVar1 + 0x6c) = -fVar11;
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x78) = 0;
    uVar3 = *(undefined4 *)(param_1 + 0x24);
    uVar4 = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar1 + 0x68) = uVar3;
    *(undefined4 *)(iVar1 + 0x78) = uVar4;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    uVar4 = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(iVar1 + 0x80) = uVar3;
    *(undefined4 *)(iVar1 + 0x84) = uVar4;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
    (**(code **)(**(int **)(param_1 + 0xe4) + 0x10))();
  }
  if (*(int *)(param_1 + 0xe8) == -1) {
    return;
  }
  fn_0023e574(*(undefined4 *)(DAT_008977e0 + 0x2c));
  return;
}



void fn_001da0e4(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 in_s0;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x100) + param_2 * 0x10);
  puVar1[3] = in_s0;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  fn_006a9eb4(param_1,param_1 + 0x20);
  return;
}



void fn_001da0b0(int param_1,int param_2)

{
  if ((param_2 == 0) || (*(float *)(param_1 + 0xf8) == 0.0)) {
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) & 0xffffffef | param_2 << 4;
  }
  return;
}



void fn_001da084(int param_1)

{
  int iVar1;
  undefined4 in_s0;
  
  if (*(int *)(param_1 + 0xe4) != 0) {
    iVar1 = fn_0018367c();
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 4) = in_s0;
    }
  }
  return;
}



void fn_001da030(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2 * 8 + 4;
  if (-1 < *(int *)(*(int *)(param_1 + 0x158) + iVar2)) {
    uVar1 = fn_006f7388(DAT_008977e0);
    fn_00257ef4(uVar1,param_2 & 0xff,*(undefined4 *)(*(int *)(param_1 + 0x158) + iVar2));
    *(undefined4 *)(*(int *)(param_1 + 0x158) + iVar2) = 0xffffffff;
  }
  return;
}



void fn_001d9fcc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xe4) != 0) {
    uVar1 = fn_0017fde4();
    fn_006ebf84(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar1);
    if (*(int **)(param_1 + 0xe4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xe4) + 4))();
    }
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  return;
}



void fn_001d9f9c(int *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_001d9610(param_1);
  if (param_1[0x39] != 0) {
    uVar1 = fn_0017fde4();
    fn_006ebf84(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar1);
    if ((int *)param_1[0x39] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x39] + 4))();
    }
    param_1[0x39] = 0;
  }
  param_1[0x38] = -1;
  return;
}


