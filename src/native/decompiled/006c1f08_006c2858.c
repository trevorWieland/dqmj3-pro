#include "006c1f08_006c2858.h"



void fn_006c2858(int param_1)

{
  fn_0066173c((int)*(short *)(param_1 + 0x10));
  fn_002cd59c();
  return;
}



int fn_006c27b8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*(int *)(param_1 + iVar2 * 4 + 4) == 0 || (iVar1 = fn_00309afc(), iVar1 == 0))) {
    iVar2 = (int)(char)((char)iVar2 + '\x01');
    if (3 < iVar2) {
      return 0;
    }
  }
  return (int)(char)((char)iVar2 + '\x10');
}



int fn_006c2768(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*(int *)(param_1 + iVar2 * 4 + 4) == 0 || (iVar1 = fn_003096a4(), iVar1 == 0))) {
    iVar2 = (int)(char)((char)iVar2 + '\x01');
    if (3 < iVar2) {
      return 0;
    }
  }
  return (int)(char)((char)iVar2 + '\x10');
}



int fn_006c2734(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = '\x14';
  iVar1 = 0;
  do {
    iVar3 = (int)cVar2;
    cVar2 = cVar2 + '\x01';
    if (*(int *)(param_1 + iVar3 * 4 + -0x3c) != 0) {
      iVar1 = iVar1 + 1;
    }
  } while (cVar2 < '\x18');
  return iVar1;
}



int fn_006c2700(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = '\x10';
  iVar1 = 0;
  do {
    iVar3 = (int)cVar2;
    cVar2 = cVar2 + '\x01';
    if (*(int *)(param_1 + iVar3 * 4 + -0x3c) != 0) {
      iVar1 = iVar1 + 1;
    }
  } while (cVar2 < '\x14');
  return iVar1;
}



int fn_006c26b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*(int *)(param_1 + iVar2 * 4 + 4) == 0 || (iVar1 = fn_00308f5c(), iVar1 == 0))) {
    iVar2 = (int)(char)((char)iVar2 + '\x01');
    if (3 < iVar2) {
      return 0;
    }
  }
  return (int)(char)((char)iVar2 + '\x10');
}



int fn_006c2660(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*(int *)(param_1 + iVar2 * 4 + 4) == 0 || (iVar1 = fn_0030aec0(), iVar1 == 0))) {
    iVar2 = (int)(char)((char)iVar2 + '\x01');
    if (3 < iVar2) {
      return 0;
    }
  }
  return (int)(char)((char)iVar2 + '\x10');
}



int fn_006c2578(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) + param_2 * 0x54;
}



/* WARNING: Removing unreachable block (ram,0x006c24a4) */
/* WARNING: Removing unreachable block (ram,0x006c24bc) */
/* WARNING: Removing unreachable block (ram,0x006c23e8) */

void fn_006c236c(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  local_50 = *(undefined4 *)(param_1 + 0x8c);
  uStack_4c = *(undefined4 *)(param_1 + 0x90);
  uStack_48 = *(undefined4 *)(param_1 + 0x94);
  fVar3 = *(float *)(param_1 + 0x7c) * 40.743664;
  uVar1 = in_fpscr & 0xfffffff;
  for (fVar4 = ABS(fVar3); 0x477fffff < (int)fVar4; fVar4 = fVar4 - 65536.0) {
  }
  uVar5 = VectorFloatToUnsigned(0,3);
  uVar6 = VectorFloatToUnsigned(fVar4,3);
  uVar7 = VectorFloatToUnsigned(0,3);
  uVar2 = uVar5 & 0xff;
  fVar11 = (float)VectorUnsignedToFloat(uVar5 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar5 = uVar6 & 0xff;
  fVar12 = (float)VectorUnsignedToFloat(uVar6 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar6 = uVar7 & 0xff;
  fVar10 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar8 = (float)(&DAT_007d6f20)[uVar2 * 4] + (0.0 - fVar11) * (float)(&DAT_007d6f28)[uVar2 * 4];
  fVar9 = (float)(&DAT_007d6f24)[uVar2 * 4] + (0.0 - fVar11) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  fVar11 = (float)(&DAT_007d6f20)[uVar5 * 4] + (fVar4 - fVar12) * (float)(&DAT_007d6f28)[uVar5 * 4];
  local_18 = (float)(&DAT_007d6f24)[uVar5 * 4] +
             (fVar4 - fVar12) * (float)(&DAT_007d6f2c)[uVar5 * 4];
  fVar4 = (float)(&DAT_007d6f20)[uVar6 * 4] + (0.0 - fVar10) * (float)(&DAT_007d6f28)[uVar6 * 4];
  fVar10 = (float)(&DAT_007d6f24)[uVar6 * 4] + (0.0 - fVar10) * (float)(&DAT_007d6f2c)[uVar6 * 4];
  if (fVar3 < 0.0) {
    fVar11 = -fVar11;
  }
  local_40 = fVar10 * local_18;
  local_30 = fVar4 * local_18;
  local_1c = fVar8 * local_18;
  local_18 = fVar9 * local_18;
  local_20 = -fVar11;
  local_3c = fVar8 * fVar10 * fVar11 - fVar9 * fVar4;
  local_38 = fVar8 * fVar4 + fVar9 * fVar10 * fVar11;
  fStack_28 = fVar9 * fVar4 * fVar11 - fVar8 * fVar10;
  local_2c = fVar9 * fVar10 + fVar8 * fVar4 * fVar11;
  local_34 = 0;
  local_24 = 0;
  local_14 = 0;
  fn_0016947c(&local_50,&local_40);
  return;
}



undefined4 fn_006c234c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(char *)(param_1 + 0x88) != '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x84);
  }
  return uVar1;
}



int fn_006c2278(int param_1)

{
  return *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3;
}



int fn_006c226c(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x10) + param_2 * 8;
}



void fn_006c21f0(undefined4 param_1,undefined4 param_2)

{
  uint in_fpscr;
  
  VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  return;
}



void fn_006c219c(void)

{
  fn_00525bd0();
  return;
}



/* WARNING: Removing unreachable block (ram,0x006c20e8) */
/* WARNING: Removing unreachable block (ram,0x006c20f8) */
/* WARNING: Removing unreachable block (ram,0x006c202c) */

void fn_006c1f94(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x30),(byte)(in_fpscr >> 0x16) & 3);
  local_48 = *(undefined4 *)(param_1 + 0x34);
  fVar10 = (float)VectorSignedToFloat(param_2 + 1,(byte)(in_fpscr >> 0x16) & 3);
  local_50 = 0;
  local_4c = 0;
  fVar10 = (6.2831855 / fVar4) * fVar10 * 40.743664;
  uVar1 = in_fpscr & 0xfffffff;
  for (fVar4 = ABS(fVar10); 0x477fffff < (int)fVar4; fVar4 = fVar4 - 65536.0) {
  }
  uVar6 = VectorFloatToUnsigned(0,3);
  uVar7 = VectorFloatToUnsigned(fVar4,3);
  uVar3 = uVar6 & 0xff;
  uVar8 = VectorFloatToUnsigned(0,3);
  uVar2 = uVar7 & 0xff;
  fVar11 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar7 = uVar8 & 0xff;
  fVar12 = (float)VectorUnsignedToFloat(uVar6 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar13 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar9 = (float)(&DAT_007d6f20)[uVar3 * 4] + (0.0 - fVar12) * (float)(&DAT_007d6f28)[uVar3 * 4];
  fVar5 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar4 - fVar11) * (float)(&DAT_007d6f28)[uVar2 * 4];
  fVar12 = (float)(&DAT_007d6f24)[uVar3 * 4] + (0.0 - fVar12) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  local_18 = (float)(&DAT_007d6f24)[uVar2 * 4] +
             (fVar4 - fVar11) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  fVar4 = (float)(&DAT_007d6f20)[uVar7 * 4] + (0.0 - fVar13) * (float)(&DAT_007d6f28)[uVar7 * 4];
  fVar11 = (float)(&DAT_007d6f24)[uVar7 * 4] + (0.0 - fVar13) * (float)(&DAT_007d6f2c)[uVar7 * 4];
  if (fVar10 < 0.0) {
    fVar5 = -fVar5;
  }
  local_40 = fVar11 * local_18;
  local_20 = -fVar5;
  local_30 = fVar4 * local_18;
  local_1c = fVar9 * local_18;
  local_18 = fVar12 * local_18;
  local_3c = fVar9 * fVar11 * fVar5 - fVar12 * fVar4;
  local_28 = fVar12 * fVar4 * fVar5 - fVar9 * fVar11;
  local_38 = fVar9 * fVar4 + fVar12 * fVar11 * fVar5;
  local_2c = fVar12 * fVar11 + fVar9 * fVar4 * fVar5;
  local_34 = 0;
  local_24 = 0;
  local_14 = 0;
  fn_0016947c(&local_50,&local_40);
  return;
}



void fn_006c1f08(int *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}


