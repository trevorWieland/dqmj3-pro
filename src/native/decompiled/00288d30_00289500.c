#include "00288d30_00289500.h"



void fn_00289500(undefined4 param_1)

{
  fn_002e2c10(*(undefined4 *)(DAT_00897804 + 0x2c),param_1);
  return;
}



void fn_002894f8(undefined4 param_1,undefined1 param_2)

{
  fn_002e2c10(*(undefined4 *)(DAT_00897804 + 0x2c),param_2);
  return;
}



void fn_0028945c(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_88 [128];
  
  fn_00102908(auStack_88,0x80,(char *)&DAT_002894e4,param_2);
  fn_0016ba34(param_1,DAT_00892360,auStack_88,0);
  return;
}



void fn_0028943c(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(DAT_00897804 + 0x2c) + 4);
  uVar1 = 1 << (param_1 & 0x1f);
  uVar2 = *(uint *)(iVar3 + (param_1 >> 5) * 4);
  if (param_2 == 0) {
    uVar2 = uVar2 & ~uVar1;
  }
  else {
    uVar2 = uVar2 | uVar1;
  }
  *(uint *)(iVar3 + (param_1 >> 5) * 4) = uVar2;
  return;
}



undefined4 * fn_002893f4(undefined4 *param_1)

{
  *param_1 = &DAT_0081e100;
  if (param_1[5] != 0) {
    fn_002feef8(param_1[5]);
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  return param_1;
}



undefined4 * fn_00289390(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_0081e100;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[4] = param_2;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_002a51f8(iVar1,0);
  }
  param_1[5] = uVar2;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  return param_1;
}



void fn_00289204(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  iVar1 = (int)*(char *)(param_1 + 0xc);
  bVar3 = iVar1 != param_2;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 4);
  }
  if (bVar3 && iVar1 != 0) {
    if (param_2 == 0) {
      uVar2 = fn_0017fde4();
      fn_00162d54(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar2);
    }
    else {
      uVar2 = fn_0017fde4();
      fn_001969a4(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar2);
    }
    fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
  }
  *(char *)(param_1 + 0xc) = (char)param_2;
  return;
}



void fn_002891d8(int param_1)

{
  undefined4 in_s0;
  
  fn_0017fde4(*(undefined4 *)(param_1 + 4));
  fn_0017fc3c();
  *(undefined4 *)(param_1 + 8) = in_s0;
  return;
}



void fn_00288f68(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
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
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  iVar1 = fn_0017fde4();
  fVar8 = *(float *)(param_1 + 0x1c) * 40.743664;
  fVar6 = *(float *)(param_1 + 0x20) * 40.743664;
  fVar11 = *(float *)(param_1 + 0x24) * 40.743664;
  in_fpscr = in_fpscr & 0xfffffff;
  fVar9 = ABS(fVar6);
  fVar7 = ABS(fVar11);
  for (fVar10 = ABS(fVar8); 0x477fffff < (int)fVar10; fVar10 = fVar10 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
  }
  uVar12 = VectorFloatToUnsigned(fVar10,3);
  uVar13 = VectorFloatToUnsigned(fVar9,3);
  uVar5 = uVar12 & 0xff;
  uVar14 = VectorFloatToUnsigned(fVar7,3);
  uVar4 = uVar14 & 0xff;
  fVar17 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar12 = uVar13 & 0xff;
  fVar18 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar16 = (float)VectorUnsignedToFloat(uVar14 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar15 = (float)(&DAT_007d6f20)[uVar5 * 4] + (fVar10 - fVar17) * (float)(&DAT_007d6f28)[uVar5 * 4]
  ;
  fVar17 = (float)(&DAT_007d6f24)[uVar5 * 4] + (fVar10 - fVar17) * (float)(&DAT_007d6f2c)[uVar5 * 4]
  ;
  fVar10 = (float)(&DAT_007d6f24)[uVar12 * 4] +
           (fVar9 - fVar18) * (float)(&DAT_007d6f2c)[uVar12 * 4];
  fVar9 = (float)(&DAT_007d6f20)[uVar12 * 4] + (fVar9 - fVar18) * (float)(&DAT_007d6f28)[uVar12 * 4]
  ;
  if (fVar8 < 0.0) {
    fVar15 = -fVar15;
  }
  fVar8 = (float)(&DAT_007d6f20)[uVar4 * 4] + (fVar7 - fVar16) * (float)(&DAT_007d6f28)[uVar4 * 4];
  fVar7 = (float)(&DAT_007d6f24)[uVar4 * 4] + (fVar7 - fVar16) * (float)(&DAT_007d6f2c)[uVar4 * 4];
  if (fVar6 < 0.0) {
    fVar9 = -fVar9;
  }
  if (fVar11 < 0.0) {
    fVar8 = -fVar8;
  }
  *(float *)(iVar1 + 0x4c) = fVar7 * fVar10;
  *(float *)(iVar1 + 0x5c) = fVar8 * fVar10;
  *(float *)(iVar1 + 0x70) = fVar15 * fVar10;
  *(float *)(iVar1 + 0x74) = fVar17 * fVar10;
  *(float *)(iVar1 + 0x50) = fVar15 * fVar7 * fVar9 - fVar17 * fVar8;
  *(float *)(iVar1 + 100) = fVar17 * fVar8 * fVar9 - fVar15 * fVar7;
  *(float *)(iVar1 + 0x54) = fVar15 * fVar8 + fVar17 * fVar7 * fVar9;
  *(float *)(iVar1 + 0x60) = fVar17 * fVar7 + fVar15 * fVar8 * fVar9;
  *(float *)(iVar1 + 0x6c) = -fVar9;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x68) = uVar2;
  *(undefined4 *)(iVar1 + 0x78) = uVar3;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar1 + 0x7c) = uVar2;
  *(undefined4 *)(iVar1 + 0x80) = uVar2;
  *(undefined4 *)(iVar1 + 0x84) = uVar2;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
                    /* WARNING: Could not recover jumptable at 0x002891bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  return;
}



void fn_00288eac(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005efdbc();
  }
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 4) = piVar2;
  }
  iVar1 = fn_006f7a9c(DAT_008977e0);
  if (((int)param_2 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= param_2))
  {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 4) + param_2 * 0x34;
  }
  fn_0069ee38(*(undefined4 *)(param_1 + 4),iVar1,0);
  return;
}



undefined4 * fn_00288d30(undefined4 param_1,int param_2,float *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  float in_s0;
  
  puVar1 = (undefined4 *)fn_00289284();
  *puVar1 = &DAT_00851a4c;
  uVar7 = *(uint *)(param_2 + 0xe0);
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_005efdbc();
  }
  piVar4 = (int *)puVar1[1];
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    puVar1[1] = piVar3;
  }
  iVar2 = fn_006f7a9c(DAT_008977e0);
  if (((int)uVar7 < 0) || ((uint)((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0x34) <= uVar7)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 4) + uVar7 * 0x34;
  }
  fn_0069ee38(puVar1[1],iVar2,0);
  puVar1[2] = *(undefined4 *)(param_2 + 0xf8);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  uVar6 = *(undefined4 *)(param_2 + 0x28);
  puVar1[4] = *(undefined4 *)(param_2 + 0x20);
  puVar1[5] = uVar5;
  puVar1[6] = uVar6;
  uVar5 = *(undefined4 *)(param_2 + 0x30);
  uVar6 = *(undefined4 *)(param_2 + 0x34);
  puVar1[7] = *(undefined4 *)(param_2 + 0x2c);
  puVar1[8] = uVar5;
  puVar1[9] = uVar6;
  puVar1[10] = *(undefined4 *)(param_2 + 0x3c);
  puVar1[4] = (float)puVar1[4] + *param_3;
  puVar1[5] = (float)puVar1[5] + param_3[1];
  puVar1[6] = (float)puVar1[6] + param_3[2];
  puVar1[10] = (float)puVar1[10] * in_s0;
  return puVar1;
}



undefined4 * fn_00289284(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  *param_1 = &DAT_00851a60;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar4;
    DAT_008f9e30 = uVar4;
    DAT_008f9e34 = uVar4;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  param_1[4] = DAT_008f9e2c;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar4;
    DAT_008f9e30 = uVar4;
    DAT_008f9e34 = uVar4;
  }
  uVar1 = DAT_008f9e34;
  uVar4 = DAT_008f9e30;
  param_1[7] = DAT_008f9e2c;
  param_1[8] = uVar4;
  param_1[9] = uVar1;
  param_1[10] = 0x3f800000;
  return param_1;
}


