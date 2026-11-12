#include "003d7754_003d8360.h"



void fn_003d8360(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94();
  *puVar1 = &PTR_LAB_0083199c;
  return;
}



void fn_003d82ec(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(int *)(param_1 + 0x18) + 1;
  *(uint *)(param_1 + 0x18) = uVar1;
  if ((0x96 < uVar1) && (*(char *)(*(int *)(param_1 + 4) + 4) == '\0')) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = 1;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),0,4);
  iVar2 = fn_006f7a84(DAT_008977e0);
  fn_001c72c0(*(undefined4 *)(param_1 + 0x14),iVar2 + 0x20);
  return;
}



void fn_003d80f0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 100) == 0) && (iVar1 = fn_001296d0(DAT_00897850), iVar1 == 0)) {
    fn_0036c340(*(undefined4 *)(param_1 + 0x5c));
    if (*(char *)(*(int *)(param_1 + 0x78) + 8) != '\0') {
      fn_00699094(DAT_008977e0);
    }
    fn_002a8244(*(undefined4 *)(param_1 + 0x74),(int)*(char *)(*(int *)(param_1 + 0x78) + 0xc),
                 0x1000003,8,0);
    *(undefined4 *)(param_1 + 100) = 1;
  }
  return;
}



void fn_003d7e90(undefined4 *param_1)

{
  *param_1 = &DAT_00831724;
  if (param_1[0x6a] != -1) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    param_1[0x6a] = 0xffffffff;
  }
  if (param_1[0x6b] != -1) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    param_1[0x6b] = 0xffffffff;
  }
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),0xc74a);
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),0xc749);
  if ((int *)param_1[0x68] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x68] + 4))();
  }
  fn_001dc088(param_1);
  fn_002feef8();
  return;
}



void fn_003d7d94(int param_1)

{
  int iVar1;
  
  fn_001db0c0();
  fn_005eeda8(*(undefined4 *)(param_1 + 0xe4));
  if ((DAT_00897850 == 0) || (iVar1 = fn_0066eb04(), iVar1 == 0)) {
    if (*(int *)(param_1 + 0x19c) == 0) {
      fn_003d7bb8(param_1,1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x19c) == 1) {
    fn_003d7bb8(param_1,0);
    return;
  }
  return;
}



undefined4 fn_003d7cd8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = fn_002113c8();
  param_1[0x69] = param_1[0x51];
  fn_003d7bb8(param_1,0);
  (**(code **)(*param_1 + 0x58))(param_1,1);
  (**(code **)(*param_1 + 0x54))(param_1,1);
  (**(code **)(*param_1 + 0xe0))(param_1,0);
  iVar2 = fn_00145b00(0xfc,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_0065fdf0();
  }
  piVar4 = (int *)param_1[0x68];
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[0x68] = (int)piVar3;
  }
  param_1[0x4e] = param_1[0x4e] | 2;
  return uVar1;
}



void fn_003d7bb8(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x67] != param_2) {
    (**(code **)(*param_1 + 0xd8))(param_1);
    fn_001da640(param_1);
    if (param_2 == 1) {
      if (param_1[0x6a] != -1) {
        (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
        param_1[0x6a] = -1;
      }
      if (param_1[0x6b] != -1) {
        (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
        param_1[0x6b] = -1;
      }
    }
    else {
      uVar1 = fn_0017fde4(param_1[0x39]);
      iVar2 = fn_0016a9b0(*(undefined4 *)(DAT_008977e0 + 0x2c),0xc749,uVar1,1);
      param_1[0x6a] = iVar2;
      uVar1 = fn_0017fde4(param_1[0x39]);
      iVar2 = fn_0016a9b0(*(undefined4 *)(DAT_008977e0 + 0x2c),0xc74a,uVar1,0);
      param_1[0x6b] = iVar2;
    }
    param_1[0x67] = param_2;
  }
  return;
}



void fn_003d7ba8(void)

{
  fn_001dc088();
  fn_002feef8();
  return;
}



/* WARNING: Removing unreachable block (ram,0x003d79d0) */
/* WARNING: Removing unreachable block (ram,0x003d78f8) */

undefined4 fn_003d7754(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint in_fpscr;
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
  float fVar19;
  float local_88;
  float local_84;
  float local_80;
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
  float fStack_50;
  undefined4 local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float local_3c;
  float local_38;
  float local_34;
  
  iVar2 = (**(code **)(*param_1 + 0x50))(param_1);
  cVar1 = '\x01';
  if (iVar2 != 1) {
    cVar1 = (char)param_1[0x16];
  }
  if ((iVar2 != 1 && cVar1 != '\0') &&
     (iVar2 = (**(code **)(*param_1 + 0x134))(param_1,param_2), iVar2 != 0)) {
    fVar7 = (float)param_1[0x67];
    if (((char)param_1[0x5f] == '\x03') && (iVar2 = fn_006aa190(param_1,param_2), iVar2 != 0)) {
      fVar18 = -(float)param_1[0xb];
      fVar8 = (float)param_1[0xc] + 3.1415927;
      fn_005df8f8();
    }
    else {
      fVar18 = (float)param_1[0xb];
      fVar8 = (float)param_1[0xc];
    }
    pfVar3 = (float *)param_2[0x40];
    local_48 = ((float)param_1[8] + (float)param_1[0x5b]) - *pfVar3;
    fStack_40 = ((float)param_1[10] + (float)param_1[0x5d]) - pfVar3[2];
    fStack_44 = ((float)param_1[9] + (float)param_1[0x5c]) - pfVar3[1];
    (**(code **)(*param_2 + 0x10))(param_2,&local_48);
    fVar19 = 1.0;
    local_88 = 0.0;
    local_84 = 0.0;
    local_80 = 1.0;
    in_fpscr = in_fpscr & 0xfffffff;
    fVar12 = ABS(fVar8 * 40.743664);
    for (fVar13 = ABS(fVar18 * 40.743664); 0x477fffff < (int)fVar13; fVar13 = fVar13 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar12; fVar12 = fVar12 - 65536.0) {
    }
    uVar9 = VectorFloatToUnsigned(fVar13,3);
    uVar10 = VectorFloatToUnsigned(fVar12,3);
    uVar6 = uVar9 & 0xff;
    uVar11 = VectorFloatToUnsigned(0,3);
    uVar5 = uVar11 & 0xff;
    fVar16 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar9 = uVar10 & 0xff;
    fVar17 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar15 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar14 = (float)(&DAT_007d6f20)[uVar6 * 4] +
             (fVar13 - fVar16) * (float)(&DAT_007d6f28)[uVar6 * 4];
    fVar13 = (float)(&DAT_007d6f24)[uVar6 * 4] +
             (fVar13 - fVar16) * (float)(&DAT_007d6f2c)[uVar6 * 4];
    fVar16 = (float)(&DAT_007d6f20)[uVar9 * 4] +
             (fVar12 - fVar17) * (float)(&DAT_007d6f28)[uVar9 * 4];
    if (fVar18 * 40.743664 < 0.0) {
      fVar14 = -fVar14;
    }
    fStack_50 = (float)(&DAT_007d6f24)[uVar9 * 4] +
                (fVar12 - fVar17) * (float)(&DAT_007d6f2c)[uVar9 * 4];
    fVar12 = (float)(&DAT_007d6f20)[uVar5 * 4] + (0.0 - fVar15) * (float)(&DAT_007d6f28)[uVar5 * 4];
    fVar18 = (float)(&DAT_007d6f24)[uVar5 * 4] + (0.0 - fVar15) * (float)(&DAT_007d6f2c)[uVar5 * 4];
    if (fVar8 * 40.743664 < 0.0) {
      fVar16 = -fVar16;
    }
    local_78 = fVar18 * fStack_50;
    local_58 = -fVar16;
    local_68 = fVar12 * fStack_50;
    local_54 = fVar14 * fStack_50;
    fStack_50 = fVar13 * fStack_50;
    local_74 = fVar14 * fVar18 * fVar16 - fVar13 * fVar12;
    local_60 = fVar13 * fVar12 * fVar16 - fVar14 * fVar18;
    local_70 = fVar14 * fVar12 + fVar13 * fVar18 * fVar16;
    local_64 = fVar13 * fVar18 + fVar14 * fVar12 * fVar16;
    local_6c = 0;
    local_5c = 0;
    local_4c = 0;
    fn_0016947c(&local_88,&local_78);
    fVar19 = fVar19 / SQRT(local_88 * local_88 + local_84 * local_84 + local_80 * local_80);
    local_88 = local_88 * fVar19;
    local_84 = local_84 * fVar19;
    local_80 = local_80 * fVar19;
    local_3c = local_88;
    local_38 = local_84;
    local_34 = local_80;
    fn_001e6178(param_2,(int)(fVar7 * 0.083333336),&local_3c);
    param_2[0xc] = (int)fVar8;
    (**(code **)(*param_2 + 0x44))(param_2,2,4,0);
    fVar7 = (float)VectorSignedToFloat((int)(fVar7 * 0.083333336),(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = fVar7 * 0.66;
    fn_006fa358();
    uVar4 = fn_006f7a5c(DAT_008977e0);
    fn_001d6210(uVar4,(int)fVar7);
    uVar4 = fn_006f7a5c(DAT_008977e0);
    fn_001d6988(uVar4,(int)fVar7);
    (**(code **)(*param_1 + 0x44))(param_1,1,4,0);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return 0;
}


