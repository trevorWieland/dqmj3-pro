#include "006ce7f8_006cf3fcbb.h"



uint * fn_006cf3fc(int param_1,uint *param_2,uint *param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  
  *param_2 = *(byte *)(param_1 + 2) | 0x80000000;
  param_2[1] = 0xf02c0;
  param_2[2] = param_3[3];
  param_2[3] = param_4 * 0x400000 - 0x100000U | 0xf02c1;
  param_2[4] = param_3[2];
  param_2[5] = param_3[1];
  iVar5 = param_4 + -1;
  puVar1 = param_2 + 7;
  param_2[6] = *param_3;
  if (0 < iVar5) {
    puVar4 = param_3 + 7;
    puVar3 = param_3 + 6;
    puVar2 = param_3 + 5;
    puVar6 = puVar1;
    do {
      param_3 = param_3 + 4;
      iVar5 = iVar5 + -1;
      *puVar6 = *puVar4;
      uVar7 = *puVar3;
      puVar3 = puVar3 + 4;
      puVar6[1] = uVar7;
      uVar7 = *puVar2;
      puVar2 = puVar2 + 4;
      puVar6[2] = uVar7;
      puVar6[3] = *param_3;
      puVar4 = puVar4 + 4;
      puVar6 = puVar6 + 4;
    } while (iVar5 != 0);
    puVar1 = puVar1 + param_4 * 4 + -4;
  }
  *puVar1 = 0;
  return puVar1 + 1;
}



uint * fn_006cf360(byte *param_1,uint *param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  *param_2 = (uint)param_1[0xc] | (uint)param_1[0xb] << 10 | (uint)param_1[10] << 0x14;
  param_2[1] = (uint)bVar1 * 0x10 + 0x140 | 0x803f0000;
  param_2[2] = (uint)param_1[0xe] << 10 | (uint)param_1[0xd] << 0x14 | (uint)param_1[0xf];
  param_2[3] = (uint)param_1[5] << 10 | (uint)param_1[4] << 0x14 | (uint)param_1[6];
  param_2[4] = (uint)param_1[9] | (uint)param_1[8] << 10 | (uint)param_1[7] << 0x14;
  param_2[5] = 0;
  return param_2 + 6;
}



uint * fn_006cf250(byte *param_1,uint *param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  *param_2 = (uint)param_1[0xb] << 10 | (uint)param_1[10] << 0x14 | (uint)param_1[0xc];
  param_2[1] = (uint)bVar1 * 0x10 + 0x140 | 0x80bf0000;
  param_2[2] = (uint)param_1[0xf] | (uint)param_1[0xe] << 10 | (uint)param_1[0xd] << 0x14;
  param_2[3] = (uint)param_1[6] | (uint)param_1[5] << 10 | (uint)param_1[4] << 0x14;
  param_2[4] = (uint)param_1[9] | (uint)param_1[8] << 10 | (uint)param_1[7] << 0x14;
  param_2[5] = *(uint *)(param_1 + 0x10);
  param_2[6] = *(uint *)(param_1 + 0x14);
  param_2[7] = *(uint *)(param_1 + 0x24);
  param_2[8] = *(uint *)(param_1 + 0x28);
  param_2[9] = 0;
  param_2[10] = (uint)param_1[0x18] | (uint)(param_1[1] != 0) << 1 |
                (uint)(param_1[2] != 0) << 2 | (uint)(param_1[3] != 0) << 3;
  param_2[0xb] = *(uint *)(param_1 + 0x1c);
  param_2[0xc] = *(uint *)(param_1 + 0x20);
  param_2[0xd] = 0;
  return param_2 + 0xe;
}


