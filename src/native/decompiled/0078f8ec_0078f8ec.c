#include "0078f8ec_0078f8ec.h"



undefined4 * fn_0078f8ec(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  puVar4 = (undefined4 *)param_1[1];
  if ((undefined4 *)*param_1 != puVar4) {
    puVar2 = param_3;
    puVar5 = param_2;
    if (param_3 < puVar4) {
      if (0 < (int)puVar4 - (int)param_3) {
        uVar1 = ((int)puVar4 - (int)param_3) / 0x34;
        puVar4 = param_3 + -0xd;
        puVar2 = param_2 + -0xd;
        if ((uVar1 & 1) != 0) {
          uVar6 = param_3[1];
          uVar7 = param_3[2];
          uVar8 = param_3[3];
          uVar9 = param_3[4];
          uVar10 = param_3[5];
          uVar11 = param_3[6];
          uVar12 = param_3[7];
          *param_2 = *param_3;
          param_2[1] = uVar6;
          param_2[2] = uVar7;
          param_2[3] = uVar8;
          param_2[4] = uVar9;
          param_2[5] = uVar10;
          param_2[6] = uVar11;
          param_2[7] = uVar12;
          uVar6 = param_3[9];
          uVar7 = param_3[10];
          uVar8 = param_3[0xb];
          uVar9 = param_3[0xc];
          param_2[8] = param_3[8];
          param_2[9] = uVar6;
          param_2[10] = uVar7;
          param_2[0xb] = uVar8;
          param_2[0xc] = uVar9;
          puVar4 = param_3;
          puVar2 = param_2;
        }
        for (iVar3 = (int)uVar1 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
          uVar6 = puVar4[0xe];
          uVar7 = puVar4[0xf];
          uVar8 = puVar4[0x10];
          uVar9 = puVar4[0x11];
          uVar10 = puVar4[0x12];
          uVar11 = puVar4[0x13];
          uVar12 = puVar4[0x14];
          puVar2[0xd] = puVar4[0xd];
          puVar2[0xe] = uVar6;
          puVar2[0xf] = uVar7;
          puVar2[0x10] = uVar8;
          puVar2[0x11] = uVar9;
          puVar2[0x12] = uVar10;
          puVar2[0x13] = uVar11;
          puVar2[0x14] = uVar12;
          uVar6 = puVar4[0x16];
          uVar7 = puVar4[0x17];
          uVar8 = puVar4[0x18];
          uVar9 = puVar4[0x19];
          puVar2[0x15] = puVar4[0x15];
          puVar2[0x16] = uVar6;
          puVar2[0x17] = uVar7;
          puVar2[0x18] = uVar8;
          puVar2[0x19] = uVar9;
          uVar6 = puVar4[0x1b];
          uVar7 = puVar4[0x1c];
          uVar8 = puVar4[0x1d];
          uVar9 = puVar4[0x1e];
          uVar10 = puVar4[0x1f];
          uVar11 = puVar4[0x20];
          uVar12 = puVar4[0x21];
          puVar5 = puVar4 + 0x22;
          puVar2[0x1a] = puVar4[0x1a];
          puVar2[0x1b] = uVar6;
          puVar2[0x1c] = uVar7;
          puVar2[0x1d] = uVar8;
          puVar2[0x1e] = uVar9;
          puVar2[0x1f] = uVar10;
          puVar2[0x20] = uVar11;
          puVar2[0x21] = uVar12;
          uVar6 = puVar4[0x23];
          uVar7 = puVar4[0x24];
          uVar8 = puVar4[0x25];
          uVar9 = puVar4[0x26];
          puVar4 = puVar4 + 0x1a;
          puVar2[0x22] = *puVar5;
          puVar2[0x23] = uVar6;
          puVar2[0x24] = uVar7;
          puVar2[0x25] = uVar8;
          puVar2[0x26] = uVar9;
          puVar2 = puVar2 + 0x1a;
        }
        puVar5 = param_2 + uVar1 * 0xd;
      }
    }
    else {
      for (; puVar2 != puVar4; puVar2 = puVar2 + 0xd) {
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        uVar9 = puVar2[4];
        uVar10 = puVar2[5];
        uVar11 = puVar2[6];
        uVar12 = puVar2[7];
        *puVar5 = *puVar2;
        puVar5[1] = uVar6;
        puVar5[2] = uVar7;
        puVar5[3] = uVar8;
        puVar5[4] = uVar9;
        puVar5[5] = uVar10;
        puVar5[6] = uVar11;
        puVar5[7] = uVar12;
        uVar6 = puVar2[9];
        uVar7 = puVar2[10];
        uVar8 = puVar2[0xb];
        uVar9 = puVar2[0xc];
        puVar5[8] = puVar2[8];
        puVar5[9] = uVar6;
        puVar5[10] = uVar7;
        puVar5[0xb] = uVar8;
        puVar5[0xc] = uVar9;
        puVar5 = puVar5 + 0xd;
      }
    }
    puVar4 = (undefined4 *)param_1[1];
    if (puVar4 < puVar5) {
      do {
        puVar5 = puVar5 + 0xd;
      } while (puVar5 != puVar4);
    }
    param_1[1] = (uint)(puVar4 + (((int)param_3 - (int)param_2) / 0x34) * -0xd);
  }
  return param_2;
}


