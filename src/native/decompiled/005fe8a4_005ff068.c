#include "005fe8a4_005ff068.h"



void fn_005ff068(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  *(undefined4 *)(param_1 + 4) = DAT_008f9e2c;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  iVar3 = fn_006f7a0c(DAT_008977e0);
                    /* WARNING: Could not recover jumptable at 0x005ff0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(iVar3 + 0x50) + 0x1c))(*(int **)(iVar3 + 0x50),param_1 + 0x1c);
  return;
}



void fn_005fefa4(void)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fn_00698fb8(DAT_008977e0,1);
  uVar1 = fn_006f7a48(DAT_008977e0);
  fn_00128744(uVar1,0xffffffff);
  fVar6 = 0.0;
  fVar7 = 40.0;
  iVar2 = fn_006f7a5c(DAT_008977e0);
  fn_006f7a5c(DAT_008977e0);
  pfVar3 = (float *)fn_006a9660();
  fVar4 = pfVar3[1];
  fVar5 = pfVar3[2];
  *(float *)(iVar2 + 0x34) = *pfVar3 + fVar6;
  *(float *)(iVar2 + 0x38) = fVar4 + fVar7;
  *(float *)(iVar2 + 0x3c) = fVar5 + fVar6;
  fn_00699648(DAT_008977e0,0xff,1,1,0x14);
  return;
}



undefined4 fn_005feebc(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_608 [1440];
  undefined1 auStack_68 [68];
  int local_24;
  
  fn_00101a1c(auStack_608,&DAT_005f4c78,0x48,0x14);
  iVar1 = fn_006f7a5c(DAT_008977e0);
  piVar2 = (int *)fn_006f7388(DAT_008977e0);
  iVar1 = (**(code **)(*piVar2 + 0x10))(piVar2,3,auStack_608,0x14,iVar1 + 0x1c,param_1,0);
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      fn_0017821c(auStack_68,auStack_608 + iVar5 * 0x48,0x48);
      if (local_24 != 0) {
        uVar3 = fn_006f7388(DAT_008977e0);
        iVar4 = fn_006b4240(uVar3,local_24);
        if ((iVar4 != 0) && (iVar4 = fn_006bab90(iVar4,(int)((*(unsigned int *)((unsigned char *)auStack_68 + 4)) & 0xffff)), iVar4 == 0)) {
          return 0;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return 1;
}



undefined4 fn_005fed94(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = fn_006f7498(DAT_008977e0);
  if ((iVar2 == 0) ||
     (cVar1 = *(char *)(*(int *)(DAT_008977e0 + 0x58) + 8), cVar1 != '\x02' && cVar1 != '\a')) {
    piVar3 = (int *)fn_006f72e0(DAT_008977e0);
    (**(code **)(*piVar3 + 0x70))();
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  iVar4 = *(int *)(DAT_008977e0 + 0x40);
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0x10);
  }
  if (((iVar4 != 0 && iVar2 != 0) && (iVar2 = fn_006f7a5c(), iVar2 != 0)) &&
     (iVar2 = fn_006f6fc4(*(undefined4 *)(DAT_008977e0 + 0x40)), iVar2 != 0)) {
    fn_006f7a5c(DAT_008977e0);
    fn_001d8a20();
    fn_006f7a5c(DAT_008977e0);
    fn_001d5f80();
  }
  return 1;
}



bool fn_005fed78(int param_1,int param_2)

{
  return *(float *)(param_1 + 0x18) < *(float *)(param_2 + 0x18);
}



void fn_005fecfc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006f75ac(DAT_008977e0);
  fn_0038ff40(iVar1,0,0,1,0);
  fn_0038fee8(iVar1,param_1);
  uVar2 = fn_0025f988(DAT_00897800,(char *)&DAT_002acfd8);
  fn_0016b4ec(iVar1,uVar2);
  *(undefined1 *)(*(int *)(*(int *)(iVar1 + 8) + 0x80) + 0x1f) = 4;
  return;
}



/* WARNING: Removing unreachable block (ram,0x005febb0) */
/* WARNING: Removing unreachable block (ram,0x005fea30) */
/* WARNING: Removing unreachable block (ram,0x005febcc) */
/* WARNING: Removing unreachable block (ram,0x005fe948) */
/* WARNING: Removing unreachable block (ram,0x005feafc) */

void fn_005fe8a4(int *param_1,undefined4 *param_2,float *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  undefined4 local_2c;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = fn_0017fde4();
  in_fpscr = in_fpscr & 0xfffffff;
  fVar7 = ABS(param_3[2] * 40.743664);
  for (fVar9 = ABS(*param_3 * 40.743664); 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
  }
  uVar10 = VectorFloatToUnsigned(fVar9,3);
  uVar11 = VectorFloatToUnsigned(0,3);
  uVar12 = VectorFloatToUnsigned(fVar7,3);
  uVar3 = uVar10 & 0xff;
  uVar6 = uVar12 & 0xff;
  fVar14 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar10 = uVar11 & 0xff;
  fVar15 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar13 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar16 = (float)(&DAT_007d6f20)[uVar10 * 4] + (0.0 - fVar15) * (float)(&DAT_007d6f28)[uVar10 * 4];
  fVar8 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar9 - fVar14) * (float)(&DAT_007d6f28)[uVar3 * 4];
  fVar14 = (float)(&DAT_007d6f24)[uVar3 * 4] + (fVar9 - fVar14) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  local_60 = (float)(&DAT_007d6f24)[uVar10 * 4] +
             (0.0 - fVar15) * (float)(&DAT_007d6f2c)[uVar10 * 4];
  fVar15 = (float)(&DAT_007d6f20)[uVar6 * 4] + (fVar7 - fVar13) * (float)(&DAT_007d6f28)[uVar6 * 4];
  fVar9 = (float)(&DAT_007d6f24)[uVar6 * 4] + (fVar7 - fVar13) * (float)(&DAT_007d6f2c)[uVar6 * 4];
  if (*param_3 * 40.743664 < 0.0) {
    fVar8 = -fVar8;
  }
  if (param_3[2] * 40.743664 < 0.0) {
    fVar15 = -fVar15;
  }
  local_88 = fVar9 * local_60;
  local_78 = fVar15 * local_60;
  local_64 = fVar8 * local_60;
  local_60 = fVar14 * local_60;
  local_68 = -fVar16;
  local_84 = fVar8 * fVar9 * fVar16 - fVar14 * fVar15;
  local_70 = fVar14 * fVar15 * fVar16 - fVar8 * fVar9;
  local_80 = fVar8 * fVar15 + fVar14 * fVar9 * fVar16;
  local_74 = fVar14 * fVar9 + fVar8 * fVar15 * fVar16;
  local_7c = 0;
  local_6c = 0;
  local_5c = 0;
  for (fVar9 = ABS(param_3[1] * 40.743664); 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
  }
  uVar10 = VectorFloatToUnsigned(0,3);
  uVar11 = VectorFloatToUnsigned(fVar9,3);
  uVar12 = VectorFloatToUnsigned(0,3);
  uVar6 = uVar10 & 0xff;
  uVar3 = uVar12 & 0xff;
  fVar14 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar10 = uVar11 & 0xff;
  fVar8 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar13 = (float)(&DAT_007d6f20)[uVar6 * 4] + (0.0 - fVar14) * (float)(&DAT_007d6f28)[uVar6 * 4];
  fVar14 = (float)(&DAT_007d6f24)[uVar6 * 4] + (0.0 - fVar14) * (float)(&DAT_007d6f2c)[uVar6 * 4];
  local_34 = (float)(&DAT_007d6f24)[uVar10 * 4] +
             (fVar9 - fVar8) * (float)(&DAT_007d6f2c)[uVar10 * 4];
  fVar9 = (float)(&DAT_007d6f20)[uVar10 * 4] + (fVar9 - fVar8) * (float)(&DAT_007d6f28)[uVar10 * 4];
  fVar8 = (float)(&DAT_007d6f20)[uVar3 * 4] + (0.0 - fVar7) * (float)(&DAT_007d6f28)[uVar3 * 4];
  fVar7 = (float)(&DAT_007d6f24)[uVar3 * 4] + (0.0 - fVar7) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  if (param_3[1] * 40.743664 < 0.0) {
    fVar9 = -fVar9;
  }
  local_58 = fVar7 * local_34;
  local_48 = fVar8 * local_34;
  fStack_30 = fVar14 * local_34;
  local_34 = fVar13 * local_34;
  local_38 = -fVar9;
  local_50 = fVar13 * fVar8 + fVar14 * fVar7 * fVar9;
  local_44 = fVar14 * fVar7 + fVar13 * fVar8 * fVar9;
  local_54 = fVar13 * fVar7 * fVar9 - fVar14 * fVar8;
  local_40 = fVar14 * fVar8 * fVar9 - fVar13 * fVar7;
  local_4c = 0;
  local_3c = 0;
  local_2c = 0;
  fn_001ad06c(&local_b8,&local_58,&local_88);
  *(undefined4 *)(iVar1 + 0x4c) = local_b8;
  *(undefined4 *)(iVar1 + 0x5c) = local_a8;
  *(undefined4 *)(iVar1 + 0x6c) = local_98;
  *(undefined4 *)(iVar1 + 0x50) = local_b4;
  *(undefined4 *)(iVar1 + 0x60) = local_a4;
  *(undefined4 *)(iVar1 + 0x70) = local_94;
  *(undefined4 *)(iVar1 + 0x54) = local_b0;
  *(undefined4 *)(iVar1 + 100) = local_a0;
  *(undefined4 *)(iVar1 + 0x74) = local_90;
  uVar10 = *(uint *)(iVar1 + 0x88);
  *(uint *)(iVar1 + 0x88) = uVar10 | 0x800;
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  *(uint *)(iVar1 + 0x88) = uVar10 | 0x800;
  *(undefined4 *)(iVar1 + 0x58) = uVar2;
  *(undefined4 *)(iVar1 + 0x68) = uVar4;
  *(undefined4 *)(iVar1 + 0x78) = uVar5;
  uVar2 = param_4[1];
  uVar4 = param_4[2];
  *(undefined4 *)(iVar1 + 0x7c) = *param_4;
  *(undefined4 *)(iVar1 + 0x80) = uVar2;
  *(undefined4 *)(iVar1 + 0x84) = uVar4;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}


