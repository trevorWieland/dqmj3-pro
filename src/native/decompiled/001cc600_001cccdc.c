#include "001cc600_001cccdc.h"



undefined4 * fn_001cccdc(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0081bce8;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}



void fn_001ccca4(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0081bce8;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  fn_002feef8(param_1);
  return;
}



void fn_001ccc2c(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0081bce8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  *(undefined1 *)((int)param_1 + 0x52) = 1;
  return;
}



void fn_001ccb7c(void)

{
  fn_006fa358();
  fn_006fa358();
  fn_006fa358();
  return;
}



void fn_001ccb38(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x1c))(param_1);
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  param_1[5] = *param_2;
  param_1[6] = iVar1;
  param_1[7] = iVar2;
  return;
}



void fn_001cc890(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = fn_0017fde4();
    fVar10 = *(float *)(param_1 + 0x28) * 40.743664;
    fVar5 = *(float *)(param_1 + 0x20) * 40.743664;
    fVar7 = *(float *)(param_1 + 0x24) * 40.743664;
    in_fpscr = in_fpscr & 0xfffffff;
    fVar8 = ABS(fVar7);
    fVar6 = ABS(fVar10);
    for (fVar9 = ABS(fVar5); 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
    }
    uVar11 = VectorFloatToUnsigned(fVar9,3);
    uVar12 = VectorFloatToUnsigned(fVar8,3);
    uVar13 = VectorFloatToUnsigned(fVar6,3);
    uVar2 = uVar11 & 0xff;
    fVar15 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar11 = uVar12 & 0xff;
    fVar17 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar12 = uVar13 & 0xff;
    fVar18 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar14 = (float)(&DAT_007d6f20)[uVar2 * 4] +
             (fVar9 - fVar15) * (float)(&DAT_007d6f28)[uVar2 * 4];
    fVar16 = (float)(&DAT_007d6f24)[uVar2 * 4] +
             (fVar9 - fVar15) * (float)(&DAT_007d6f2c)[uVar2 * 4];
    fVar15 = (float)(&DAT_007d6f24)[uVar11 * 4] +
             (fVar8 - fVar17) * (float)(&DAT_007d6f2c)[uVar11 * 4];
    fVar9 = (float)(&DAT_007d6f20)[uVar11 * 4] +
            (fVar8 - fVar17) * (float)(&DAT_007d6f28)[uVar11 * 4];
    if (fVar5 < 0.0) {
      fVar14 = -fVar14;
    }
    fVar8 = (float)(&DAT_007d6f20)[uVar12 * 4] +
            (fVar6 - fVar18) * (float)(&DAT_007d6f28)[uVar12 * 4];
    fVar6 = (float)(&DAT_007d6f24)[uVar12 * 4] +
            (fVar6 - fVar18) * (float)(&DAT_007d6f2c)[uVar12 * 4];
    if (fVar7 < 0.0) {
      fVar9 = -fVar9;
    }
    if (fVar10 < 0.0) {
      fVar8 = -fVar8;
    }
    *(float *)(iVar1 + 0x4c) = fVar6 * fVar15;
    *(float *)(iVar1 + 0x5c) = fVar8 * fVar15;
    *(float *)(iVar1 + 0x70) = fVar14 * fVar15;
    *(float *)(iVar1 + 0x74) = fVar16 * fVar15;
    *(float *)(iVar1 + 0x50) = fVar14 * fVar6 * fVar9 - fVar16 * fVar8;
    *(float *)(iVar1 + 0x54) = fVar14 * fVar8 + fVar16 * fVar6 * fVar9;
    *(float *)(iVar1 + 0x6c) = -fVar9;
    *(float *)(iVar1 + 0x60) = fVar16 * fVar6 + fVar14 * fVar8 * fVar9;
    *(float *)(iVar1 + 100) = fVar16 * fVar8 * fVar9 - fVar14 * fVar6;
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x78) = 0;
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(iVar1 + 0x68) = uVar3;
    *(undefined4 *)(iVar1 + 0x78) = uVar4;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    uVar4 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar1 + 0x80) = uVar3;
    *(undefined4 *)(iVar1 + 0x84) = uVar4;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
    fn_0017fde4(*(undefined4 *)(param_1 + 4));
    fn_0017fc3c();
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    if (*(char *)(param_1 + 0x52) == '\0') {
      uVar3 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
      fn_0017fcfc(uVar3,4);
    }
    *(undefined1 *)(param_1 + 0x52) = 1;
  }
  return;
}



void fn_001cc7f8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = fn_0017fde4();
    iVar2 = fn_0068c694(DAT_008977e8);
    iVar2 = fn_006ebf84(*(undefined4 *)(iVar2 + 0x24),uVar1);
    if (iVar2 != 0) {
      uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
      iVar2 = fn_0068c694(DAT_008977e8);
      fn_00162d54(*(undefined4 *)(iVar2 + 0x24),uVar1);
      iVar2 = fn_0068c694(DAT_008977e8);
      fn_00162d44(*(undefined4 *)(iVar2 + 0x24));
      return;
    }
  }
  return;
}



undefined4 fn_001cc79c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = fn_0068c7e8(DAT_008977e8);
  iVar2 = fn_00175978(uVar1,param_2);
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  uVar1 = fn_0017fde4(param_3);
  uVar3 = fn_0068c7e8(DAT_008977e8);
  uVar1 = fn_0016a9b0(uVar3,param_2,uVar1,iVar2);
  return uVar1;
}



void fn_001cc73c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_18;
  
  local_18 = param_4;
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
  puVar2 = (undefined4 *)fn_006ebf14(uVar1,0);
  uVar5 = *puVar2;
  iVar4 = 0;
  iVar3 = fn_006ebee0(uVar1);
  if (0 < iVar3) {
    do {
      local_18 = uVar5;
      fn_005ea608(uVar1,iVar4,&local_18);
      iVar4 = iVar4 + 1;
      iVar3 = fn_006ebee0(uVar1);
    } while (iVar4 < iVar3);
  }
  return;
}



void fn_001cc6e4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
  iVar3 = 0;
  iVar2 = fn_006ebee0();
  if (0 < iVar2) {
    do {
      fn_005ea624(uVar1,iVar3);
      iVar3 = iVar3 + 1;
      iVar2 = fn_006ebee0(uVar1);
    } while (iVar3 < iVar2);
  }
  return;
}



void fn_001cc68c(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
  iVar3 = 0;
  iVar2 = fn_006ebee0();
  if (0 < iVar2) {
    do {
      local_18 = *param_2;
      fn_005ea608(uVar1,iVar3,&local_18);
      iVar3 = iVar3 + 1;
      iVar2 = fn_006ebee0(uVar1);
    } while (iVar3 < iVar2);
  }
  return;
}



int fn_001cc600(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar1 = fn_0068c7e8(DAT_008977e8);
  iVar2 = fn_00175978(uVar1,param_2);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  else {
    uVar1 = fn_0017fde4(uVar3);
    uVar3 = fn_0068c7e8(DAT_008977e8);
    iVar2 = fn_0016a9b0(uVar3,param_2,uVar1,iVar2);
    if (iVar2 != -1 && param_3 != 0) {
      uVar1 = fn_0068c7e8(DAT_008977e8);
      fn_002ee5ac(uVar1,iVar2);
    }
  }
  return iVar2;
}


