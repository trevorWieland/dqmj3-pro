#include "001ad2a0_001ad578.h"



void fn_001ad578(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  param_1[1] = param_3;
  param_1[4] = uVar1;
  param_1[3] = uVar2;
  param_1[2] = uVar3;
  *param_1 = uVar4;
  param_1[8] = uVar5;
  param_1[7] = uVar6;
  param_1[6] = uVar7;
  param_1[5] = uVar8;
  param_1[0xc] = uVar9;
  param_1[0xb] = uVar10;
  param_1[10] = uVar11;
  param_1[9] = uVar12;
  return;
}



void fn_001ad440(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint local_128 [64];
  uint *local_28;
  
  local_28 = param_1;
  iVar1 = 0x10;
  puVar2 = local_128;
  puVar4 = param_1;
  do {
    puVar4 = puVar4 + 1;
    uVar5 = *puVar4;
    iVar1 = iVar1 + -1;
    puVar3 = puVar2 + 1;
    *puVar2 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
              uVar5 >> 0x18;
    puVar2 = puVar3;
  } while (iVar1 != 0);
  iVar1 = 0x30;
  do {
    iVar1 = iVar1 + -1;
    uVar10 = puVar3[-0xf];
    uVar5 = puVar3[-2];
    *puVar3 = puVar3[-7] +
              ((uVar5 >> 0x11 | uVar5 << 0xf) ^ (uVar5 >> 0x13 | uVar5 << 0xd) ^ uVar5 >> 10) +
              puVar3[-0x10] +
              ((uVar10 >> 7 | uVar10 << 0x19) ^ (uVar10 >> 0x12 | uVar10 << 0xe) ^ uVar10 >> 3);
    puVar3 = puVar3 + 1;
  } while (iVar1 != 0);
  iVar1 = 0;
  uVar5 = param_1[0x14];
  uVar10 = param_1[0x15];
  uVar7 = param_1[0x16];
  uVar9 = param_1[0x17];
  uVar12 = param_1[0x18];
  uVar11 = param_1[0x19];
  uVar13 = param_1[0x1a];
  uVar15 = param_1[0x1b];
  do {
    uVar14 = uVar13;
    uVar13 = uVar11;
    uVar11 = uVar12;
    uVar8 = uVar7;
    uVar7 = uVar10;
    uVar10 = uVar5;
    iVar6 = ((uVar11 >> 6 | uVar11 << 0x1a) ^ (uVar11 >> 0xb | uVar11 << 0x15) ^
            (uVar11 >> 0x19 | uVar11 << 7)) + (uVar11 & uVar13 ^ uVar14 & ~uVar11) +
            *(int *)(iVar1 * 4 + 0x8c7684) + uVar15 + local_128[iVar1];
    uVar12 = uVar9 + iVar6;
    iVar1 = iVar1 + 1;
    uVar5 = iVar6 + ((uVar10 >> 2 | uVar10 << 0x1e) ^ (uVar10 >> 0xd | uVar10 << 0x13) ^
                    (uVar10 >> 0x16 | uVar10 << 10)) + ((uVar7 ^ uVar8) & uVar10 ^ uVar7 & uVar8);
    uVar9 = uVar8;
    uVar15 = uVar14;
  } while (iVar1 < 0x40);
  local_28[0x14] = local_28[0x14] + uVar5;
  local_28[0x15] = local_28[0x15] + uVar10;
  local_28[0x16] = local_28[0x16] + uVar7;
  local_28[0x17] = local_28[0x17] + uVar8;
  local_28[0x18] = local_28[0x18] + uVar12;
  local_28[0x19] = local_28[0x19] + uVar11;
  local_28[0x1a] = local_28[0x1a] + uVar13;
  local_28[0x1b] = local_28[0x1b] + uVar14;
  return;
}



void fn_001ad428(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = param_2[6];
  uVar6 = param_2[8];
  uVar7 = param_2[9];
  uVar8 = param_2[10];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  return;
}



void fn_001ad3ec(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = param_2[4];
  uVar2 = param_2[8];
  uVar3 = param_2[1];
  uVar4 = param_2[5];
  uVar5 = param_2[9];
  uVar6 = param_2[2];
  uVar7 = param_2[6];
  uVar8 = param_2[10];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  param_1[7] = 0;
  param_1[8] = uVar6;
  param_1[9] = uVar7;
  param_1[10] = uVar8;
  param_1[0xb] = 0;
  return;
}



void fn_001ad3b8(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = param_2[7];
  fVar9 = param_2[8];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  fVar13 = *param_3;
  fVar14 = param_3[1];
  fVar15 = param_3[2];
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  param_1[3] = fVar4 + fVar1 * fVar13 + fVar2 * fVar14 + fVar3 * fVar15;
  param_1[4] = fVar5;
  param_1[5] = fVar6;
  param_1[6] = fVar7;
  param_1[7] = fVar8 + fVar5 * fVar13 + fVar6 * fVar14 + fVar7 * fVar15;
  param_1[8] = fVar9;
  param_1[9] = fVar10;
  param_1[10] = fVar11;
  param_1[0xb] = fVar12 + fVar9 * fVar13 + fVar10 * fVar14 + fVar11 * fVar15;
  return;
}



void fn_001ad39c(undefined4 *param_1,float *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  fVar3 = (float)param_3[3];
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  fVar7 = (float)param_3[7];
  uVar8 = param_3[8];
  uVar9 = param_3[9];
  uVar10 = param_3[10];
  fVar11 = (float)param_3[0xb];
  fVar12 = *param_2;
  fVar13 = param_2[1];
  fVar14 = param_2[2];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = fVar3 + fVar12;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = fVar7 + fVar13;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = fVar11 + fVar14;
  return;
}



undefined4 fn_001ad2a0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  fVar7 = param_2[8];
  fVar8 = param_2[9];
  fVar9 = param_2[10];
  fVar10 = (fVar1 * fVar5 * fVar9 - fVar7 * fVar5 * fVar3) +
           (fVar2 * fVar6 * fVar7 - fVar4 * fVar2 * fVar9) +
           (fVar3 * fVar4 * fVar8 - fVar1 * fVar8 * fVar6);
  if (fVar10 == -0.0 || fVar10 == 0.0) {
    return 0;
  }
  fVar10 = 1.0 / fVar10;
  *param_1 = (fVar5 * fVar9 - fVar8 * fVar6) * fVar10;
  param_1[1] = -((fVar4 * fVar9 - fVar7 * fVar6) * fVar10);
  param_1[2] = (fVar4 * fVar8 - fVar7 * fVar5) * fVar10;
  param_1[3] = 0.0;
  param_1[4] = -((fVar2 * fVar9 - fVar8 * fVar3) * fVar10);
  param_1[5] = (fVar1 * fVar9 - fVar7 * fVar3) * fVar10;
  param_1[6] = -((fVar1 * fVar8 - fVar7 * fVar2) * fVar10);
  param_1[7] = 0.0;
  param_1[8] = (fVar2 * fVar6 - fVar5 * fVar3) * fVar10;
  param_1[9] = -((fVar1 * fVar6 - fVar4 * fVar3) * fVar10);
  param_1[10] = (fVar1 * fVar5 - fVar4 * fVar2) * fVar10;
  param_1[0xb] = 0.0;
  return 1;
}


