#include "0065ccd0_0065d440a.h"



void fn_0065d098(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  *param_1 = (int)&DAT_008f9cf4;
  if (DAT_008f9cec < 0x80) {
    uVar7 = 0x80;
    if (DAT_008f9cf0 < 0x81) {
      uVar7 = DAT_008f9cf0;
    }
    if (0x80 < uVar7) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0x80);
    }
    puVar1 = (undefined4 *)fn_00100fc6(0x110,0);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    puVar1[2] = uVar7;
    puVar5 = (undefined2 *)((int)puVar1 + uVar7 * 2 + 0xc);
    puVar1[1] = 0x80;
    *puVar1 = 0;
    if (puVar5 != (undefined2 *)0x0) {
      *puVar5 = 0;
    }
    fn_00301a9c(puVar1 + 3,*param_1,*(int *)(*param_1 + -4) << 1);
    if ((undefined4 *)*param_1 != &DAT_008f9cf4) {
      piVar2 = (undefined4 *)*param_1 + -3;
      iVar6 = *piVar2;
      if ((iVar6 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar6 + -1, iVar6 == 0)))) {
        fn_001008c4(*param_1 + -0xc,*(int *)(*param_1 + -8) + 8,0);
      }
    }
    *param_1 = (int)(puVar1 + 3);
  }
  for (; param_2 <= param_3; param_2 = param_2 + 1) {
    fn_0015b0f8(param_2);
    fn_002f7420(param_2);
    fn_0015b0dc();
    uVar3 = fn_0022f584((char *)&DAT_0065d294,0);
    uVar8 = *(undefined4 *)(*param_1 + -4);
    uVar4 = fn_00100b58(uVar3);
    fn_00177c88(param_1,uVar8,0,uVar3,uVar4,0,uVar4);
    uVar4 = *(undefined4 *)(*param_1 + -4);
    uVar3 = fn_00100b58(&DAT_0065d2ac);
    fn_00177c88(param_1,uVar4,0,&DAT_0065d2ac,uVar3,0,uVar3);
  }
  uVar3 = fn_0022f584((char *)&DAT_0065d2b0,0);
  uVar8 = *(undefined4 *)(*param_1 + -4);
  uVar4 = fn_00100b58(uVar3);
  fn_00177c88(param_1,uVar8,0,uVar3,uVar4,0,uVar4);
  return;
}



int fn_0065d028(int *param_1,int *param_2,code *UNRECOVERED_JUMPTABLE_00,
                code *UNRECOVERED_JUMPTABLE)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar3 = *param_2;
  iVar2 = iVar1;
  if (iVar1 < iVar3) {
    iVar2 = 1;
  }
  if (iVar1 != iVar3 && iVar3 <= iVar1) {
    iVar2 = 0;
  }
  if (iVar1 == iVar3) {
    iVar2 = fn_006b4ed4(param_1);
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0065d090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*UNRECOVERED_JUMPTABLE)((int)(short)param_1[0xb],(int)(short)param_2[0xb]);
      return iVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x0065d07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*UNRECOVERED_JUMPTABLE_00)((int)(short)param_1[1],(int)(short)param_2[1]);
    return iVar2;
  }
  return iVar2;
}



bool fn_0065cff0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00661414();
  iVar2 = fn_00661414(param_2);
  return iVar1 < iVar2;
}



bool fn_0065cfc8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00660ff8();
  iVar2 = fn_00660ff8(param_2);
  return iVar1 < iVar2;
}



bool fn_0065cfa0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00661058();
  iVar2 = fn_00661058(param_2);
  return iVar1 < iVar2;
}



void fn_0065ccd0(int param_1)

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
  
  fn_003192c4();
  if (*(int *)(param_1 + 0xe4) == 0) {
    return;
  }
  iVar1 = fn_0017fde4();
  fVar11 = *(float *)(param_1 + 0x34) * 40.743664;
  fVar6 = *(float *)(param_1 + 0x2c) * 40.743664;
  fVar8 = *(float *)(param_1 + 0x30) * 40.743664;
  in_fpscr = in_fpscr & 0xfffffff;
  fVar9 = ABS(fVar8);
  fVar7 = ABS(fVar11);
  for (fVar10 = ABS(fVar6); 0x477fffff < (int)fVar10; fVar10 = fVar10 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
  }
  uVar12 = VectorFloatToUnsigned(fVar10,3);
  uVar13 = VectorFloatToUnsigned(fVar9,3);
  uVar14 = VectorFloatToUnsigned(fVar7,3);
  uVar2 = uVar12 & 0xff;
  uVar5 = uVar14 & 0xff;
  fVar16 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar12 = uVar13 & 0xff;
  fVar17 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar18 = (float)VectorUnsignedToFloat(uVar14 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar15 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar10 - fVar16) * (float)(&DAT_007d6f28)[uVar2 * 4]
  ;
  fVar16 = (float)(&DAT_007d6f24)[uVar2 * 4] + (fVar10 - fVar16) * (float)(&DAT_007d6f2c)[uVar2 * 4]
  ;
  fVar10 = (float)(&DAT_007d6f20)[uVar12 * 4] +
           (fVar9 - fVar17) * (float)(&DAT_007d6f28)[uVar12 * 4];
  if (fVar6 < 0.0) {
    fVar15 = -fVar15;
  }
  fVar6 = (float)(&DAT_007d6f24)[uVar12 * 4] + (fVar9 - fVar17) * (float)(&DAT_007d6f2c)[uVar12 * 4]
  ;
  fVar17 = (float)(&DAT_007d6f20)[uVar5 * 4] + (fVar7 - fVar18) * (float)(&DAT_007d6f28)[uVar5 * 4];
  fVar9 = (float)(&DAT_007d6f24)[uVar5 * 4] + (fVar7 - fVar18) * (float)(&DAT_007d6f2c)[uVar5 * 4];
  if (fVar8 < 0.0) {
    fVar10 = -fVar10;
  }
  if (fVar11 < 0.0) {
    fVar17 = -fVar17;
  }
  *(float *)(iVar1 + 0x4c) = fVar9 * fVar6;
  *(float *)(iVar1 + 0x5c) = fVar17 * fVar6;
  *(float *)(iVar1 + 0x70) = fVar15 * fVar6;
  *(float *)(iVar1 + 0x74) = fVar16 * fVar6;
  *(float *)(iVar1 + 0x50) = fVar15 * fVar9 * fVar10 - fVar16 * fVar17;
  *(float *)(iVar1 + 100) = fVar16 * fVar17 * fVar10 - fVar15 * fVar9;
  *(float *)(iVar1 + 0x54) = fVar15 * fVar17 + fVar16 * fVar9 * fVar10;
  *(float *)(iVar1 + 0x60) = fVar16 * fVar9 + fVar15 * fVar17 * fVar10;
  *(float *)(iVar1 + 0x6c) = -fVar10;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 + 0x68) = uVar3;
  *(undefined4 *)(iVar1 + 0x78) = uVar4;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  fn_002cd59c(1);
  *(float *)(iVar1 + 0x7c) = fVar10;
  *(float *)(iVar1 + 0x80) = fVar10;
  *(float *)(iVar1 + 0x84) = fVar10;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
                    /* WARNING: Could not recover jumptable at 0x0065cf2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xe4) + 0x10))();
  return;
}


