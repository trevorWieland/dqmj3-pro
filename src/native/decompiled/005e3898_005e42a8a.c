#include "005e3898_005e42a8a.h"



void fn_005e3b8c(int *param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar1 = (**(code **)(**(int **)(param_2 + 600) + 0x18))();
  if ((iVar1 == 0) || (iVar1 = (**(code **)(**(int **)(param_2 + 600) + 0x18))(), iVar1 == 1)) {
    fVar12 = *(float *)(param_2 + 0x58);
    fVar18 = *(float *)(param_2 + 0x68);
    fVar17 = *(float *)(param_2 + 0x78);
    pfVar2 = (float *)fn_006dcd40(param_2);
    fVar8 = *pfVar2;
    fVar7 = pfVar2[1];
    fVar6 = pfVar2[2];
    iVar1 = *param_1;
    *(float *)(iVar1 + 0x40) = fVar12;
    *(float *)(iVar1 + 0x44) = fVar18;
    *(float *)(iVar1 + 0x48) = fVar17;
    iVar1 = *param_1;
    *(float *)(iVar1 + 0x4c) = fVar8 - fVar12;
    *(float *)(iVar1 + 0x50) = fVar7 - fVar18;
    *(float *)(iVar1 + 0x54) = fVar6 - fVar17;
    return;
  }
  fVar18 = 0.0;
  fVar17 = 1.0;
  pfVar2 = (float *)fn_006dcc74(param_2);
  in_fpscr = in_fpscr & 0xfffffff;
  fVar7 = ABS(pfVar2[1] * 40.743664);
  fVar6 = ABS(pfVar2[2] * 40.743664);
  for (fVar8 = ABS(*pfVar2 * 40.743664); 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
  }
  uVar9 = VectorFloatToUnsigned(fVar8,3);
  uVar10 = VectorFloatToUnsigned(fVar7,3);
  uVar11 = VectorFloatToUnsigned(fVar6,3);
  uVar3 = uVar9 & 0xff;
  fVar15 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar9 = uVar10 & 0xff;
  fVar13 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar10 = uVar11 & 0xff;
  fVar16 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar8 - fVar15) * (float)(&DAT_007d6f28)[uVar3 * 4];
  fVar15 = (float)(&DAT_007d6f24)[uVar3 * 4] + (fVar8 - fVar15) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  uVar4 = *(undefined4 *)(param_2 + 0x68);
  fVar14 = (float)(&DAT_007d6f24)[uVar9 * 4] + (fVar7 - fVar13) * (float)(&DAT_007d6f2c)[uVar9 * 4];
  fVar8 = (float)(&DAT_007d6f20)[uVar9 * 4] + (fVar7 - fVar13) * (float)(&DAT_007d6f28)[uVar9 * 4];
  if (*pfVar2 * 40.743664 < fVar18) {
    fVar12 = -fVar12;
  }
  fVar13 = (float)(&DAT_007d6f20)[uVar10 * 4] +
           (fVar6 - fVar16) * (float)(&DAT_007d6f28)[uVar10 * 4];
  fVar7 = (float)(&DAT_007d6f24)[uVar10 * 4] + (fVar6 - fVar16) * (float)(&DAT_007d6f2c)[uVar10 * 4]
  ;
  if (pfVar2[1] * 40.743664 < fVar18) {
    fVar8 = -fVar8;
  }
  if (pfVar2[2] * 40.743664 < fVar18) {
    fVar13 = -fVar13;
  }
  iVar1 = *param_1;
  uVar5 = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(iVar1 + 0x44) = uVar4;
  *(undefined4 *)(iVar1 + 0x48) = uVar5;
  iVar1 = *param_1;
  *(float *)(iVar1 + 0x4c) =
       fVar7 * fVar14 * fVar18 + (fVar12 * fVar7 * fVar8 - fVar15 * fVar13) * fVar18 +
       (fVar12 * fVar13 + fVar15 * fVar7 * fVar8) * fVar17;
  *(float *)(iVar1 + 0x50) =
       fVar13 * fVar14 * fVar18 + (fVar15 * fVar7 + fVar12 * fVar13 * fVar8) * fVar18 +
       (fVar15 * fVar13 * fVar8 - fVar12 * fVar7) * fVar17;
  *(float *)(iVar1 + 0x54) = -fVar8 * fVar18 + fVar12 * fVar14 * fVar18 + fVar15 * fVar14 * fVar17;
  return;
}



void fn_005e3af4(int *param_1)

{
  undefined4 *puVar1;
  
  (**(code **)**(undefined4 **)(*param_1 + 0x30))();
  puVar1 = *(undefined4 **)(*param_1 + 0x34);
  (**(code **)*puVar1)(puVar1,*param_1 + 0xc);
  puVar1 = *(undefined4 **)(*param_1 + 0x38);
  (**(code **)*puVar1)(puVar1,*param_1 + 0x18);
  puVar1 = *(undefined4 **)(*param_1 + 0x3c);
                    /* WARNING: Could not recover jumptable at 0x005e3b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,*param_1 + 0x24);
  return;
}



void fn_005e3abc(int *param_1)

{
  fn_00795c94(*param_1);
  fn_00795c94(*param_1 + 0xc);
  fn_00795c94(*param_1 + 0x18);
  fn_00795c94(*param_1 + 0x24);
  return;
}



void fn_005e3898(int *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  puVar2 = (undefined4 *)(iVar3 + 0x34);
  puVar1 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = iVar3 + 0x40;
    *puVar1 = &DAT_008589c0;
    puVar1[2] = param_2;
    *(undefined1 *)(puVar1 + 3) = param_3;
    *(undefined1 *)((int)puVar1 + 0xd) = param_4;
  }
  if ((undefined4 *)*puVar2 != puVar1) {
    fn_002feef8();
    *puVar2 = puVar1;
  }
  return;
}


