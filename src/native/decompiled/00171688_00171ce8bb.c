#include "00171688_00171ce8bb.h"



void fn_00171ce8(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



void fn_00171bd8(int *param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pfVar2 = (float *)(**(code **)(*param_1 + 8))(param_1,0x200,0x80);
  fVar8 = 0.0078125;
  fVar9 = 5.9604645e-08;
  fVar10 = 2.0;
  fVar11 = 3.14159;
  fVar12 = 6.8356525e+08;
  fVar7 = 0.5;
  iVar4 = 0;
  iVar5 = 0x80;
  DAT_008c3568 = pfVar2;
  do {
    fVar6 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
    uVar3 = fn_00191e2c(fVar6 * fVar8 * fVar10 * fVar11 * fVar12);
    iVar5 = iVar5 + -1;
    iVar1 = (uVar3 >> 0x18) * 0x10;
    iVar4 = iVar4 + 1;
    fVar6 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
    *pfVar2 = fVar7 + (*(float *)(&DAT_007f36f4 + iVar1) +
                      *(float *)(&DAT_007f36f8 + iVar1) * fVar6 * fVar9) * fVar7;
    pfVar2 = pfVar2 + 1;
  } while (iVar5 != 0);
  return;
}



void fn_00171a14(int *param_1)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar6 = 0x178eab2c;
  uVar7 = 0xe318145e;
  uVar8 = 0x45f0cdb4;
  uVar5 = 0x720a056d;
  DAT_008c356c = (**(code **)(*param_1 + 8))(param_1,0x1800,0x80);
  DAT_008c3570 = (**(code **)(*param_1 + 8))(param_1,0x1800,0x80);
  iVar4 = 0;
  do {
    uVar6 = uVar6 ^ uVar6 << 0xb;
    uVar7 = uVar7 ^ uVar7 << 0xb;
    uVar8 = uVar8 ^ uVar8 << 0xb;
    uVar1 = uVar6 ^ uVar6 >> 8 ^ uVar5 ^ uVar5 >> 0x13;
    uVar2 = uVar1 ^ uVar1 >> 0x13 ^ uVar7 ^ uVar7 >> 8;
    uVar5 = uVar5 ^ uVar5 << 0xb;
    uVar6 = uVar2 ^ uVar2 >> 0x13 ^ uVar8 ^ uVar8 >> 8;
    uVar7 = uVar6 ^ uVar6 >> 0x13 ^ uVar5 ^ uVar5 >> 8;
    fVar9 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar11 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    fVar10 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = uVar1 ^ uVar1 << 0xb;
    uVar2 = uVar2 ^ uVar2 << 0xb;
    uVar8 = uVar7 ^ uVar7 >> 0x13 ^ uVar1 ^ uVar1 >> 8;
    uVar5 = uVar8 ^ uVar8 >> 0x13 ^ uVar2 ^ uVar2 >> 8;
    fVar13 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = (float)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
    pfVar3 = (float *)(DAT_008c356c + iVar4 * 0xc);
    fVar14 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
    *pfVar3 = fVar9 * 2.3283064e-10 * 2.0 - 1.0;
    fVar12 = fVar12 * 2.3283064e-10 * 2.0 - 1.0;
    pfVar3[1] = fVar10 * 2.3283064e-10 * 2.0 - 1.0;
    pfVar3[2] = fVar11 * 2.3283064e-10 * 2.0 - 1.0;
    pfVar3 = (float *)(DAT_008c3570 + iVar4 * 0xc);
    fVar10 = fVar13 * 2.3283064e-10 * 2.0 - 1.0;
    fVar9 = fVar14 * 2.3283064e-10 * 2.0 - 1.0;
    pfVar3[2] = fVar9;
    *pfVar3 = fVar10;
    pfVar3[1] = fVar12;
    fVar11 = 1.0 / SQRT(fVar10 * fVar10 + fVar12 * fVar12 + fVar9 * fVar9);
    *pfVar3 = fVar10 * fVar11;
    pfVar3[1] = fVar12 * fVar11;
    iVar4 = iVar4 + 1;
    pfVar3[2] = fVar9 * fVar11;
  } while (iVar4 < 0x200);
  return;
}


