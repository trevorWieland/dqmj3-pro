#include "007b867c_007b8910.h"



undefined4 * fn_007b8910(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1 < param_2) {
    if (0 < (int)param_2 - (int)param_1) {
      uVar1 = ((int)param_2 - (int)param_1) / 0xc;
      puVar2 = param_3 + -3;
      puVar3 = param_1 + -3;
      if ((uVar1 & 1) != 0) {
        uVar5 = param_1[1];
        uVar6 = param_1[2];
        *param_3 = *param_1;
        param_3[1] = uVar5;
        param_3[2] = uVar6;
        puVar2 = param_3;
        puVar3 = param_1;
      }
      for (iVar4 = (int)uVar1 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar5 = puVar3[4];
        uVar6 = puVar3[5];
        puVar2[3] = puVar3[3];
        puVar2[4] = uVar5;
        puVar2[5] = uVar6;
        uVar5 = puVar3[7];
        uVar6 = puVar3[8];
        puVar2[6] = puVar3[6];
        puVar2[7] = uVar5;
        puVar2[8] = uVar6;
        puVar2 = puVar2 + 6;
        puVar3 = puVar3 + 6;
      }
      param_3 = param_3 + uVar1 * 3;
    }
  }
  else {
    for (; param_1 != param_2; param_1 = param_1 + 3) {
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      *param_3 = *param_1;
      param_3[1] = uVar5;
      param_3[2] = uVar6;
      param_3 = param_3 + 3;
    }
  }
  return param_3;
}



undefined4 * fn_007b8834(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if (param_1 < param_2) {
    if (0 < (int)param_2 - (int)param_1) {
      uVar1 = ((int)param_2 - (int)param_1) / 0x34;
      puVar2 = param_1 + -0xd;
      puVar4 = param_3 + -0xd;
      if ((uVar1 & 1) != 0) {
        uVar6 = param_1[1];
        uVar7 = param_1[2];
        uVar8 = param_1[3];
        uVar9 = param_1[4];
        uVar10 = param_1[5];
        uVar11 = param_1[6];
        uVar12 = param_1[7];
        *param_3 = *param_1;
        param_3[1] = uVar6;
        param_3[2] = uVar7;
        param_3[3] = uVar8;
        param_3[4] = uVar9;
        param_3[5] = uVar10;
        param_3[6] = uVar11;
        param_3[7] = uVar12;
        uVar6 = param_1[9];
        uVar7 = param_1[10];
        uVar8 = param_1[0xb];
        uVar9 = param_1[0xc];
        param_3[8] = param_1[8];
        param_3[9] = uVar6;
        param_3[10] = uVar7;
        param_3[0xb] = uVar8;
        param_3[0xc] = uVar9;
        puVar2 = param_1;
        puVar4 = param_3;
      }
      for (iVar5 = (int)uVar1 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar6 = puVar2[0xe];
        uVar7 = puVar2[0xf];
        uVar8 = puVar2[0x10];
        uVar9 = puVar2[0x11];
        uVar10 = puVar2[0x12];
        uVar11 = puVar2[0x13];
        uVar12 = puVar2[0x14];
        puVar4[0xd] = puVar2[0xd];
        puVar4[0xe] = uVar6;
        puVar4[0xf] = uVar7;
        puVar4[0x10] = uVar8;
        puVar4[0x11] = uVar9;
        puVar4[0x12] = uVar10;
        puVar4[0x13] = uVar11;
        puVar4[0x14] = uVar12;
        uVar6 = puVar2[0x16];
        uVar7 = puVar2[0x17];
        uVar8 = puVar2[0x18];
        uVar9 = puVar2[0x19];
        puVar4[0x15] = puVar2[0x15];
        puVar4[0x16] = uVar6;
        puVar4[0x17] = uVar7;
        puVar4[0x18] = uVar8;
        puVar4[0x19] = uVar9;
        uVar6 = puVar2[0x1b];
        uVar7 = puVar2[0x1c];
        uVar8 = puVar2[0x1d];
        uVar9 = puVar2[0x1e];
        uVar10 = puVar2[0x1f];
        uVar11 = puVar2[0x20];
        uVar12 = puVar2[0x21];
        puVar3 = puVar2 + 0x22;
        puVar4[0x1a] = puVar2[0x1a];
        puVar4[0x1b] = uVar6;
        puVar4[0x1c] = uVar7;
        puVar4[0x1d] = uVar8;
        puVar4[0x1e] = uVar9;
        puVar4[0x1f] = uVar10;
        puVar4[0x20] = uVar11;
        puVar4[0x21] = uVar12;
        uVar6 = puVar2[0x23];
        uVar7 = puVar2[0x24];
        uVar8 = puVar2[0x25];
        uVar9 = puVar2[0x26];
        puVar2 = puVar2 + 0x1a;
        puVar4[0x22] = *puVar3;
        puVar4[0x23] = uVar6;
        puVar4[0x24] = uVar7;
        puVar4[0x25] = uVar8;
        puVar4[0x26] = uVar9;
        puVar4 = puVar4 + 0x1a;
      }
      param_3 = param_3 + uVar1 * 0xd;
    }
  }
  else {
    for (; param_1 != param_2; param_1 = param_1 + 0xd) {
      uVar6 = param_1[1];
      uVar7 = param_1[2];
      uVar8 = param_1[3];
      uVar9 = param_1[4];
      uVar10 = param_1[5];
      uVar11 = param_1[6];
      uVar12 = param_1[7];
      *param_3 = *param_1;
      param_3[1] = uVar6;
      param_3[2] = uVar7;
      param_3[3] = uVar8;
      param_3[4] = uVar9;
      param_3[5] = uVar10;
      param_3[6] = uVar11;
      param_3[7] = uVar12;
      uVar6 = param_1[9];
      uVar7 = param_1[10];
      uVar8 = param_1[0xb];
      uVar9 = param_1[0xc];
      param_3[8] = param_1[8];
      param_3[9] = uVar6;
      param_3[10] = uVar7;
      param_3[0xb] = uVar8;
      param_3[0xc] = uVar9;
      param_3 = param_3 + 0xd;
    }
  }
  return param_3;
}



undefined4 * fn_007b8758(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (param_1 < param_2) {
    if (0 < (int)param_2 - (int)param_1) {
      uVar1 = ((int)param_2 - (int)param_1) / 0x24;
      puVar2 = param_3 + -9;
      puVar3 = param_1 + -9;
      if ((uVar1 & 1) != 0) {
        uVar5 = param_1[1];
        uVar6 = param_1[2];
        uVar7 = param_1[3];
        uVar8 = param_1[4];
        uVar9 = param_1[5];
        uVar10 = param_1[6];
        uVar11 = param_1[7];
        *param_3 = *param_1;
        param_3[1] = uVar5;
        param_3[2] = uVar6;
        param_3[3] = uVar7;
        param_3[4] = uVar8;
        param_3[5] = uVar9;
        param_3[6] = uVar10;
        param_3[7] = uVar11;
        param_3[8] = param_1[8];
        puVar2 = param_3;
        puVar3 = param_1;
      }
      for (iVar4 = (int)uVar1 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar5 = puVar3[10];
        uVar6 = puVar3[0xb];
        uVar7 = puVar3[0xc];
        uVar8 = puVar3[0xd];
        uVar9 = puVar3[0xe];
        uVar10 = puVar3[0xf];
        uVar11 = puVar3[0x10];
        puVar2[9] = puVar3[9];
        puVar2[10] = uVar5;
        puVar2[0xb] = uVar6;
        puVar2[0xc] = uVar7;
        puVar2[0xd] = uVar8;
        puVar2[0xe] = uVar9;
        puVar2[0xf] = uVar10;
        puVar2[0x10] = uVar11;
        puVar2[0x11] = puVar3[0x11];
        uVar5 = puVar3[0x13];
        uVar6 = puVar3[0x14];
        uVar7 = puVar3[0x15];
        uVar8 = puVar3[0x16];
        uVar9 = puVar3[0x17];
        uVar10 = puVar3[0x18];
        uVar11 = puVar3[0x19];
        puVar2[0x12] = puVar3[0x12];
        puVar2[0x13] = uVar5;
        puVar2[0x14] = uVar6;
        puVar2[0x15] = uVar7;
        puVar2[0x16] = uVar8;
        puVar2[0x17] = uVar9;
        puVar2[0x18] = uVar10;
        puVar2[0x19] = uVar11;
        puVar2[0x1a] = puVar3[0x1a];
        puVar2 = puVar2 + 0x12;
        puVar3 = puVar3 + 0x12;
      }
      param_3 = param_3 + uVar1 * 9;
    }
  }
  else {
    for (; param_1 != param_2; param_1 = param_1 + 9) {
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      uVar8 = param_1[4];
      uVar9 = param_1[5];
      uVar10 = param_1[6];
      uVar11 = param_1[7];
      *param_3 = *param_1;
      param_3[1] = uVar5;
      param_3[2] = uVar6;
      param_3[3] = uVar7;
      param_3[4] = uVar8;
      param_3[5] = uVar9;
      param_3[6] = uVar10;
      param_3[7] = uVar11;
      param_3[8] = param_1[8];
      param_3 = param_3 + 9;
    }
  }
  return param_3;
}



undefined4 * fn_007b867c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (param_1 < param_2) {
    if (0 < (int)param_2 - (int)param_1) {
      uVar1 = ((int)param_2 - (int)param_1) / 0x24;
      puVar2 = param_3 + -9;
      puVar3 = param_1 + -9;
      if ((uVar1 & 1) != 0) {
        uVar5 = param_1[1];
        uVar6 = param_1[2];
        uVar7 = param_1[3];
        uVar8 = param_1[4];
        uVar9 = param_1[5];
        uVar10 = param_1[6];
        uVar11 = param_1[7];
        *param_3 = *param_1;
        param_3[1] = uVar5;
        param_3[2] = uVar6;
        param_3[3] = uVar7;
        param_3[4] = uVar8;
        param_3[5] = uVar9;
        param_3[6] = uVar10;
        param_3[7] = uVar11;
        param_3[8] = param_1[8];
        puVar2 = param_3;
        puVar3 = param_1;
      }
      for (iVar4 = (int)uVar1 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar5 = puVar3[10];
        uVar6 = puVar3[0xb];
        uVar7 = puVar3[0xc];
        uVar8 = puVar3[0xd];
        uVar9 = puVar3[0xe];
        uVar10 = puVar3[0xf];
        uVar11 = puVar3[0x10];
        puVar2[9] = puVar3[9];
        puVar2[10] = uVar5;
        puVar2[0xb] = uVar6;
        puVar2[0xc] = uVar7;
        puVar2[0xd] = uVar8;
        puVar2[0xe] = uVar9;
        puVar2[0xf] = uVar10;
        puVar2[0x10] = uVar11;
        puVar2[0x11] = puVar3[0x11];
        uVar5 = puVar3[0x13];
        uVar6 = puVar3[0x14];
        uVar7 = puVar3[0x15];
        uVar8 = puVar3[0x16];
        uVar9 = puVar3[0x17];
        uVar10 = puVar3[0x18];
        uVar11 = puVar3[0x19];
        puVar2[0x12] = puVar3[0x12];
        puVar2[0x13] = uVar5;
        puVar2[0x14] = uVar6;
        puVar2[0x15] = uVar7;
        puVar2[0x16] = uVar8;
        puVar2[0x17] = uVar9;
        puVar2[0x18] = uVar10;
        puVar2[0x19] = uVar11;
        puVar2[0x1a] = puVar3[0x1a];
        puVar2 = puVar2 + 0x12;
        puVar3 = puVar3 + 0x12;
      }
      param_3 = param_3 + uVar1 * 9;
    }
  }
  else {
    for (; param_1 != param_2; param_1 = param_1 + 9) {
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      uVar8 = param_1[4];
      uVar9 = param_1[5];
      uVar10 = param_1[6];
      uVar11 = param_1[7];
      *param_3 = *param_1;
      param_3[1] = uVar5;
      param_3[2] = uVar6;
      param_3[3] = uVar7;
      param_3[4] = uVar8;
      param_3[5] = uVar9;
      param_3[6] = uVar10;
      param_3[7] = uVar11;
      param_3[8] = param_1[8];
      param_3 = param_3 + 9;
    }
  }
  return param_3;
}


