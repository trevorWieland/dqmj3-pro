#include "006ce7f8_006cf3fcbab.h"



void fn_006cf208(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + uVar1 + 0x164) != '\0') {
      param_2 = fn_006cf250(param_1 + uVar1 * 0x2c + 4,param_2);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  return;
}



uint * fn_006cef98(byte *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  pbVar6 = param_1 + 0x17c;
  uVar9 = 0;
  iVar10 = 8;
  if (param_1[0x191] == 0) {
    iVar11 = 7;
  }
  else {
    iVar11 = 0;
  }
  uVar2 = (uint)(param_1[399] == 0) << 0x10 | (uint)(param_1[400] == 0) << 0x11 |
          (uint)(param_1[0x185] == 0) << 0x13 | iVar11 << 0x14 | 0xff04ffff;
  uVar12 = 0;
  pbVar7 = param_1 + 0x16c;
  pbVar8 = param_1 + 0x174;
  uVar5 = 0;
  pbVar4 = param_1 + 0x164;
  do {
    uVar3 = uVar5;
    if (*pbVar4 != 0) {
      if (*pbVar6 != 0) {
        uVar2 = uVar2 & ~(1 << (uVar12 & 0xff));
      }
      if (*pbVar7 != 0) {
        uVar2 = uVar2 & ~(1 << (uVar12 + 8 & 0xff));
      }
      if (*pbVar8 != 0) {
        uVar2 = uVar2 & ~(1 << (uVar12 + 0x18 & 0xff));
      }
      uVar3 = uVar5 + 1;
      uVar9 = uVar9 | uVar12 << ((uVar5 & 0x3f) << 2);
    }
    iVar10 = iVar10 + -1;
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
    pbVar8 = pbVar8 + 1;
    uVar12 = uVar12 + 1;
    uVar5 = uVar3;
    pbVar4 = pbVar4 + 1;
  } while (iVar10 != 0);
  if (param_3 != 0) {
    *param_2 = 0;
    param_2[1] = (uint)&DAT_00200080;
    puVar1 = param_2 + 3;
    param_2[2] = 0;
    param_2 = param_2 + 4;
    *puVar1 = 0;
  }
  *param_2 = (uint)(uVar3 != 0);
  param_2[1] = 0xf008f;
  param_2[2] = (uint)param_1[1] << 10 | (uint)*param_1 << 0x14 | (uint)param_1[2];
  param_2[3] = 0xf01c0;
  if ((int)uVar3 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar3 - 1;
  }
  param_2[4] = uVar5;
  param_2[5] = 0xf01c2;
  param_2[6] = (uint)((param_1[0x189] != 0 || param_1[0x18a] != 0) || param_1[0x18b] != 0) |
               (uint)param_1[0x185] << 2 | (uint)param_1[0x184] << 4 |
               (uint)(param_1[0x189] != 0) << 0x10 | (uint)(param_1[0x18a] != 0) << 0x11 |
               (uint)(param_1[0x18c] != 0) << 0x12 | (uint)(param_1[0x18b] != 0) << 0x13 |
               (uint)param_1[0x188] << 0x16 | (uint)param_1[0x186] << 0x18 |
               (uint)(param_1[0x18e] != 0) << 0x1b | (uint)param_1[0x187] << 0x1c |
               (uint)(param_1[0x187] != 0 && param_1[0x18d] == 0) << 0x1e | 0x80000400;
  param_2[7] = 0xf01c3;
  param_2[8] = uVar2;
  param_2[9] = 0xf01c4;
  param_2[10] = (uint)(uVar3 == 0);
  param_2[0xb] = 0xf01c6;
  param_2[0xc] = uVar9;
  param_2[0xd] = 0xf01d9;
  return param_2 + 0xe;
}


