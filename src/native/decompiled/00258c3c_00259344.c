#include "00258c3c_00259344.h"



undefined4 * fn_00259344(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar4;
    DAT_008f9e30 = uVar4;
    DAT_008f9e34 = uVar4;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  *param_1 = DAT_008f9e2c;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  if ((((byte)DAT_008c62ec & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62ec), iVar3 != 0)) {
    DAT_008c62f0 = uVar4;
    DAT_008c62f4 = uVar4;
  }
  uVar4 = DAT_008c62f4;
  param_1[3] = DAT_008c62f0;
  param_1[4] = uVar4;
  return param_1;
}



void fn_00259330(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar1 = param_3[1];
  param_1[3] = *param_3;
  param_1[4] = uVar1;
  return;
}



void fn_00259210(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_0081d7f0;
  param_1[1] = 0;
  iVar1 = fn_00145b00(0x50,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_003d7564();
  }
  param_1[2] = uVar2;
  iVar1 = fn_00145b00(0x28,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_003adf34();
  }
  param_1[3] = uVar2;
  param_1[4] = &DAT_00859010;
  param_1[5] = &DAT_00258904;
  param_1[6] = 0;
  param_1[7] = &DAT_00258904;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = &DAT_00258904;
  param_1[10] = 0;
  param_1[0xd] = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined1 *)((int)param_1 + 0x62) = 0;
  return;
}



undefined4 fn_0025902c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_28;
  int *local_24;
  int local_20;
  
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  local_20 = 0;
  iVar1 = fn_006f7a0c(DAT_008977e0);
  (**(code **)(**(int **)(iVar1 + 0x50) + 0x10))(*(int **)(iVar1 + 0x50),&local_28);
  fn_003d7048(*(undefined4 *)(param_1 + 8),&local_28);
  fn_003adc04(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),param_2);
  *(undefined4 *)(param_1 + 0x38) = param_2;
  uVar2 = fn_006b609c(param_1,param_2,1);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  do {
    uVar2 = fn_006f7a9c(DAT_008977e0);
    iVar1 = fn_00279bbc(uVar2,*(undefined4 *)(param_1 + 0x34));
  } while (iVar1 == 0);
  uVar2 = fn_002585c8(param_1,*(undefined4 *)(param_1 + 0x34));
  fn_00258908(param_1,1);
  fn_006c7290(*(undefined4 *)(param_1 + 0xc));
  *(code **)(param_1 + 0x24) = fn_00258c3c;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(code **)(param_1 + 0x1c) = fn_00258c3c;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(code **)(param_1 + 0x14) = fn_00258c3c;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar1 = fn_00145b00(0x28,&DAT_00812c8c);
  if (iVar1 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)fn_00423bd0();
  }
  piVar3 = *(int **)(param_1 + 0x3c);
  if (piVar3 != piVar4) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(int **)(param_1 + 0x3c) = piVar4;
  }
  fn_00423820(*(undefined4 *)(param_1 + 0x3c));
  fn_00258998(param_1);
  piVar3 = local_24;
  for (piVar4 = local_28; piVar4 != piVar3; piVar4 = piVar4 + 10) {
    if ((undefined1 *)*piVar4 != &DAT_008f9d04) {
      piVar5 = (int *)((undefined1 *)*piVar4 + -0xc);
      iVar1 = *piVar5;
      if ((iVar1 == -1) || ((piVar5 != &DAT_008f9cf8 && (*piVar5 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(*piVar4 + -0xc,*(int *)(*piVar4 + -8) + 0xe,0);
      }
    }
  }
  fn_001008c4(local_28,(local_20 - (int)local_28) / 0x28,0);
  return uVar2;
}



void fn_00258f10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = fn_006f7a70(DAT_008977e0);
    if (iVar3 < *(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x18) >> 2) {
      uVar2 = fn_006f7a70(DAT_008977e0);
      fn_0030019c(uVar2,*(undefined1 *)(param_1 + iVar3 + 0x44));
    }
    iVar1 = param_1 + iVar3;
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar1 + 0x44) = 0;
  } while (iVar3 < 0x1e);
  fn_006f7a9c(DAT_008977e0);
  fn_00279524();
  if (*(int *)(param_1 + 0x3c) != 0) {
    fn_004237c8();
  }
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 4))();
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  fn_00258908(param_1,0);
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 0x34) != -1) {
    uVar2 = fn_006f7a9c(DAT_008977e0);
    iVar3 = fn_00279bbc(uVar2,*(undefined4 *)(param_1 + 0x34));
    if (iVar3 != 0) {
      uVar2 = fn_006f7a9c(DAT_008977e0);
      fn_00279ae4(uVar2,*(undefined4 *)(param_1 + 0x34));
      *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    }
  }
  return;
}



void fn_00258c3c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    fn_00258908(param_1,1);
  }
  iVar1 = fn_006c7290(*(undefined4 *)(param_1 + 0xc));
  iVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
  fVar9 = *(float *)(iVar1 + 0x10) * 40.743664;
  fVar7 = *(float *)(iVar1 + 0x14) * 40.743664;
  fVar12 = *(float *)(iVar1 + 0x18) * 40.743664;
  in_fpscr = in_fpscr & 0xfffffff;
  fVar10 = ABS(fVar7);
  fVar8 = ABS(fVar12);
  for (fVar11 = ABS(fVar9); 0x477fffff < (int)fVar11; fVar11 = fVar11 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar10; fVar10 = fVar10 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0) {
  }
  uVar13 = VectorFloatToUnsigned(fVar11,3);
  uVar14 = VectorFloatToUnsigned(fVar10,3);
  uVar15 = VectorFloatToUnsigned(fVar8,3);
  uVar6 = uVar14 & 0xff;
  uVar3 = uVar13 & 0xff;
  fVar19 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar18 = (float)VectorUnsignedToFloat(uVar14 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar13 = uVar15 & 0xff;
  fVar17 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar16 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar11 - fVar19) * (float)(&DAT_007d6f28)[uVar3 * 4]
  ;
  fVar20 = (float)(&DAT_007d6f24)[uVar3 * 4] + (fVar11 - fVar19) * (float)(&DAT_007d6f2c)[uVar3 * 4]
  ;
  fVar19 = (float)(&DAT_007d6f20)[uVar6 * 4] + (fVar10 - fVar18) * (float)(&DAT_007d6f28)[uVar6 * 4]
  ;
  fVar11 = (float)(&DAT_007d6f24)[uVar6 * 4] + (fVar10 - fVar18) * (float)(&DAT_007d6f2c)[uVar6 * 4]
  ;
  if (fVar9 < 0.0) {
    fVar16 = -fVar16;
  }
  fVar10 = (float)(&DAT_007d6f20)[uVar13 * 4] +
           (fVar8 - fVar17) * (float)(&DAT_007d6f28)[uVar13 * 4];
  fVar8 = (float)(&DAT_007d6f24)[uVar13 * 4] + (fVar8 - fVar17) * (float)(&DAT_007d6f2c)[uVar13 * 4]
  ;
  if (fVar7 < 0.0) {
    fVar19 = -fVar19;
  }
  if (fVar12 < 0.0) {
    fVar10 = -fVar10;
  }
  *(float *)(iVar2 + 0x4c) = fVar8 * fVar11;
  *(float *)(iVar2 + 0x5c) = fVar10 * fVar11;
  *(float *)(iVar2 + 0x70) = fVar16 * fVar11;
  *(float *)(iVar2 + 0x74) = fVar20 * fVar11;
  *(float *)(iVar2 + 0x50) = fVar16 * fVar8 * fVar19 - fVar20 * fVar10;
  *(float *)(iVar2 + 100) = fVar20 * fVar10 * fVar19 - fVar16 * fVar8;
  *(float *)(iVar2 + 0x54) = fVar16 * fVar10 + fVar20 * fVar8 * fVar19;
  *(float *)(iVar2 + 0x60) = fVar20 * fVar8 + fVar16 * fVar10 * fVar19;
  *(float *)(iVar2 + 0x6c) = -fVar19;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  uVar4 = *(undefined4 *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar2 + 0x68) = uVar4;
  *(undefined4 *)(iVar2 + 0x78) = uVar5;
  *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x800;
  uVar4 = *(undefined4 *)(iVar1 + 0x20);
  uVar5 = *(undefined4 *)(iVar1 + 0x24);
  *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(iVar2 + 0x80) = uVar4;
  *(undefined4 *)(iVar2 + 0x84) = uVar5;
  *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x800;
  (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  iVar1 = fn_006f7a84(DAT_008977e0);
  fn_003adeac(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x38),iVar1 + 0x20);
  if (*(char *)(*(int *)(param_1 + 0xc) + 0x24) != '\0') {
    *(code **)(param_1 + 0x24) = fn_00258b2c;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}


