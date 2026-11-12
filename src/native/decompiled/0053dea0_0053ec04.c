#include "0053dea0_0053ec04.h"



int fn_0053ec04(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = *(int *)(param_1 + 0x440) + 1U & *(uint *)(param_1 + 0x1c);
    *(uint *)(param_1 + 0x440) = uVar1;
    if (*(int *)(*(int *)(param_1 + 0x14) + uVar1 * 0x28c + 4) == 0) {
      iVar2 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x440) * 0x28c;
      *param_2 = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(param_1 + 0x18));
  *param_2 = 0;
  return 0;
}



void fn_0053eac8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 4) < 1) {
    return;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    do {
      iVar4 = *(int *)(param_2 + iVar3 * 4 + 0x10);
      if ((*(int *)(iVar4 + 0x24) == *(int *)(param_2 + 0xc)) && (*(int *)(iVar4 + 0xd8) != 0)) {
        iVar1 = *(int *)(iVar4 + 0xe0);
        while (iVar1 != 0) {
          iVar1 = fn_00531388();
        }
        iVar1 = *(int *)(iVar4 + 0xe4);
        while (iVar1 != 0) {
          iVar1 = fn_00531388();
        }
        fn_0053a474(iVar4 + 0x240);
        *(undefined4 *)(iVar4 + 0xd8) = 0;
        *(int *)(*(int *)(iVar4 + 0x1c) + 4) = *(int *)(*(int *)(iVar4 + 0x1c) + 4) + -1;
        *(undefined4 *)(iVar4 + 0x24) = 0xffffffff;
        if (*(int *)(*(int *)(iVar4 + 0x1c) + 4) == 0) {
          *(int *)(param_1 + 0x474) = *(int *)(param_1 + 0x474) + -1;
        }
        *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
        iVar2 = param_1 + *(int *)(iVar4 + 0x18) * 4;
        iVar1 = *(int *)(iVar4 + 0xd4);
        if (*(int *)(iVar2 + 0x20) == iVar4) {
          *(int *)(iVar2 + 0x20) = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(iVar1 + 0xd0) = 0;
          }
        }
        else {
          if (iVar1 != 0) {
            *(undefined4 *)(iVar1 + 0xd0) = *(undefined4 *)(iVar4 + 0xd0);
          }
          *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0xd4) = *(undefined4 *)(iVar4 + 0xd4);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_2 + 8));
  }
  fn_0053fa7c(param_1,param_2);
  return;
}



void fn_0053e98c(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_2 + 0x5814) = 0;
  param_1 = param_1 + *(int *)(param_2 + 0x5810) * 4;
  iVar1 = *(int *)(param_2 + 0x5874);
  if (*(int *)(param_1 + 0x340) == param_2) {
    *(int *)(param_1 + 0x340) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x5870) = 0;
    }
    return;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x5870) = *(int *)(param_2 + 0x5870);
  }
  *(int *)(*(int *)(param_2 + 0x5870) + 0x5874) = *(int *)(param_2 + 0x5874);
  return;
}



int fn_0053e8d8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  do {
    uVar3 = *(int *)(param_1 + 0x324) + 1U & *(uint *)(param_1 + 0x454);
    *(uint *)(param_1 + 0x324) = uVar3;
    if (*(int *)(*(int *)(param_1 + 800) + uVar3 * 0x298 + 0xd8) == 0) {
      iVar2 = *(int *)(param_1 + 800) + *(int *)(param_1 + 0x324) * 0x298;
      if (iVar2 == 0) {
        return 0;
      }
      iVar1 = param_1 + param_2 * 4;
      if (*(int *)(iVar1 + 0x20) == 0) {
        *(int *)(iVar1 + 0x20) = iVar2;
        *(undefined4 *)(iVar2 + 0xd4) = 0;
      }
      else {
        *(int *)(*(int *)(iVar1 + 0x20) + 0xd0) = iVar2;
        *(undefined4 *)(iVar2 + 0xd4) = *(undefined4 *)(iVar1 + 0x20);
        *(int *)(iVar1 + 0x20) = iVar2;
      }
      *(undefined4 *)(iVar2 + 0xd0) = 0;
      *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + -1;
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(param_1 + 0x448));
  return 0;
}



void fn_0053e7fc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xe0);
  while (iVar1 != 0) {
    iVar1 = fn_00531388();
  }
  iVar1 = *(int *)(param_2 + 0xe4);
  while (iVar1 != 0) {
    iVar1 = fn_00531388();
  }
  fn_0053a474(param_2 + 0x240);
  *(undefined4 *)(param_2 + 0xd8) = 0;
  *(int *)(*(int *)(param_2 + 0x1c) + 4) = *(int *)(*(int *)(param_2 + 0x1c) + 4) + -1;
  *(undefined4 *)(param_2 + 0x24) = 0xffffffff;
  if (*(int *)(*(int *)(param_2 + 0x1c) + 4) == 0) {
    *(int *)(param_1 + 0x474) = *(int *)(param_1 + 0x474) + -1;
  }
  *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
  param_1 = param_1 + *(int *)(param_2 + 0x18) * 4;
  iVar1 = *(int *)(param_2 + 0xd4);
  if (*(int *)(param_1 + 0x20) == param_2) {
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xd0) = 0;
    }
    return;
  }
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  }
  *(undefined4 *)(*(int *)(param_2 + 0xd0) + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  return;
}



int fn_0053e3f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = param_1;
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 8);
  }
  if (iVar2 != 0 && iVar1 != 0) {
    fn_001694e4(param_2,iVar2,iVar1 << 2);
    param_2 = param_2 + *(int *)(param_1 + 8) * 4;
  }
  return param_2;
}



void fn_0053e260(int param_1)

{
  int iVar1;
  int iVar2;
  
  DAT_008c3454 = 0;
  if (DAT_008c3468 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x150) + 0xf8);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x150) + 0xfc);
  }
  iVar2 = *(int *)(iVar1 + 0x814);
  if (iVar2 != 0 && *(int *)(iVar1 + 0x810) != 0) {
    fn_001694e4(DAT_008c3450,*(int *)(iVar1 + 0x810),iVar2 << 2);
    DAT_008c3450 = DAT_008c3450 + iVar2 * 4;
  }
  DAT_008c3458 = DAT_008c3458 + 1;
  return;
}



void fn_0053e248(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r4;
  int iVar2;
  
  fn_0053dea0();
  DAT_008c3454 = 0;
  if (DAT_008c3468 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x150) + 0xf8);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x150) + 0xfc);
  }
  iVar2 = *(int *)(iVar1 + 0x814);
  if (iVar2 != 0 && *(int *)(iVar1 + 0x810) != 0) {
    fn_001694e4(DAT_008c3450,*(int *)(iVar1 + 0x810),iVar2 << 2,param_4,unaff_r4);
    DAT_008c3450 = DAT_008c3450 + iVar2 * 4;
  }
  DAT_008c3458 = DAT_008c3458 + 1;
  return;
}



void fn_0053df84(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  iVar6 = *(int *)(param_1 + 0x144);
  iVar7 = *(int *)(param_1 + 8);
  iVar2 = fn_00300f74(iVar7,*(undefined4 *)(iVar6 + param_2 * 4 + 0x4a8));
  if (iVar2 == 0) {
    iVar2 = iVar7;
  }
  iVar7 = *(int *)(param_1 + 4);
  if (*(int *)(iVar6 + param_2 * 4 + 0x4b0) != 0) {
    iVar7 = iVar7 + (*(uint *)(param_1 + 0x15c) >> 6);
  }
  fn_00300f74(iVar7,iVar2);
  iVar9 = param_2 * 0x30 + 0x434;
  iVar5 = param_2 * 0x30 + 0x438;
  iVar4 = param_2 * 0x30 + 0x430;
  iVar3 = param_1 + param_2 * 0x10;
  iVar7 = (*(int *)(iVar6 + param_2 * 4 + 0x490) * iVar2) / 100;
  if (extraout_r1 < iVar7) {
    *(undefined4 *)(iVar3 + 0xbc) = *(undefined4 *)(iVar6 + iVar4);
    *(undefined4 *)(iVar3 + 0xc0) = *(undefined4 *)(*(int *)(param_1 + 0x144) + iVar9);
    *(undefined4 *)(iVar3 + 0xc4) = *(undefined4 *)(*(int *)(param_1 + 0x144) + iVar5);
    return;
  }
  iVar11 = param_2 * 0x30 + 0x448;
  iVar8 = param_2 * 0x30 + 0x444;
  iVar10 = param_2 * 0x30 + 0x440;
  iVar1 = (*(int *)(iVar6 + param_2 * 4 + 0x498) * iVar2) / 100;
  if (extraout_r1 < iVar1) {
    fVar13 = (float)VectorSignedToFloat(extraout_r1 - iVar7,(byte)(in_fpscr >> 0x16) & 3);
    fVar15 = (float)VectorSignedToFloat(iVar1 - iVar7,(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = *(float *)(iVar6 + iVar4);
    fVar17 = *(float *)(iVar6 + iVar8);
    fVar16 = *(float *)(iVar9 + iVar6);
    fVar14 = *(float *)(iVar11 + iVar6);
    fVar13 = fVar13 / fVar15;
    fVar15 = *(float *)(iVar6 + iVar5);
    *(float *)(iVar3 + 0xbc) = fVar12 + (*(float *)(iVar6 + iVar10) - fVar12) * fVar13;
    *(float *)(iVar3 + 0xc0) =
         *(float *)(iVar9 + *(int *)(param_1 + 0x144)) + (fVar17 - fVar16) * fVar13;
    fVar13 = *(float *)(*(int *)(param_1 + 0x144) + iVar5) + (fVar14 - fVar15) * fVar13;
  }
  else {
    iVar4 = param_2 * 0x30 + 0x450;
    iVar5 = param_2 * 0x30 + 0x454;
    iVar7 = param_2 * 0x30 + 0x458;
    iVar2 = (*(int *)(iVar6 + param_2 * 4 + 0x4a0) * iVar2) / 100;
    if (iVar2 <= extraout_r1) {
      *(undefined4 *)(iVar3 + 0xbc) = *(undefined4 *)(iVar6 + iVar4);
      *(undefined4 *)(iVar3 + 0xc0) = *(undefined4 *)(*(int *)(param_1 + 0x144) + iVar5);
      *(undefined4 *)(iVar3 + 0xc4) = *(undefined4 *)(*(int *)(param_1 + 0x144) + iVar7);
      return;
    }
    fVar13 = (float)VectorSignedToFloat(extraout_r1 - iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = *(float *)(iVar10 + iVar6);
    fVar16 = *(float *)(iVar6 + iVar5);
    fVar15 = (float)VectorSignedToFloat(iVar2 - iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar17 = *(float *)(iVar6 + iVar8);
    fVar14 = *(float *)(iVar7 + iVar6);
    fVar13 = fVar13 / fVar15;
    fVar15 = *(float *)(iVar6 + iVar11);
    *(float *)(iVar3 + 0xbc) = fVar12 + (*(float *)(iVar6 + iVar4) - fVar12) * fVar13;
    *(float *)(iVar3 + 0xc0) =
         *(float *)(*(int *)(param_1 + 0x144) + iVar8) + (fVar16 - fVar17) * fVar13;
    fVar13 = *(float *)(*(int *)(param_1 + 0x144) + iVar11) + (fVar14 - fVar15) * fVar13;
  }
  *(float *)(iVar3 + 0xc4) = fVar13;
  return;
}



void fn_0053dea0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 0x13c);
  fVar4 = (float)puVar2[9];
  if ((*(float *)(param_1 + 0x24) == (float)puVar2[1]) && (*(float *)(param_1 + 0x2c) == fVar4)) {
    fVar4 = fVar4 + 0.0001;
  }
  *(undefined4 *)(DAT_008c3450 + 0x7c) = puVar2[3];
  iVar3 = *(int *)(param_1 + 0x13c);
  *(undefined4 *)(DAT_008c3450 + 0x80) = puVar2[2];
  *(undefined4 *)(DAT_008c3450 + 0x84) = puVar2[1];
  iVar1 = *(int *)(param_1 + 0x13c);
  *(undefined4 *)(DAT_008c3450 + 0x88) = *puVar2;
  *(undefined4 *)(DAT_008c3450 + 0x8c) = puVar2[7];
  *(undefined4 *)(DAT_008c3450 + 0x90) = puVar2[6];
  *(undefined4 *)(DAT_008c3450 + 0x94) = puVar2[5];
  *(undefined4 *)(DAT_008c3450 + 0x98) = *(undefined4 *)(iVar3 + 0x10);
  *(undefined4 *)(DAT_008c3450 + 0x9c) = *(undefined4 *)(iVar3 + 0x2c);
  *(undefined4 *)(DAT_008c3450 + 0xa0) = *(undefined4 *)(iVar3 + 0x28);
  *(float *)(DAT_008c3450 + 0xa4) = fVar4;
  *(undefined4 *)(DAT_008c3450 + 0xa8) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(DAT_008c3450 + 0xac) = 0;
  DAT_008c3450 = DAT_008c3450 + 0xb0;
  return;
}


