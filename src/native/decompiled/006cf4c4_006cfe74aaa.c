#include "006cf4c4_006cfe74aaa.h"



uint * fn_006cf4c4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar1 = (uint *)fn_0044f2c8(param_2,(param_1[1] >> 0x1f) + 1,(char)param_1[0xa6],param_4,param_4
                               );
  if (-1 < param_1[1]) {
    *puVar1 = 0;
    puVar1[1] = 0xf029b;
    puVar2 = (undefined4 *)fn_006cf6fc(param_1,puVar1 + 2,0x29c,param_1[0x23],param_1[0x24]);
    *puVar2 = 1;
    puVar2[1] = 0xf028f;
    puVar2[2] = 0;
    puVar2[3] = 0xf02a5;
    iVar3 = fn_006cf6fc(param_1,puVar2 + 4,0x2a6,param_1 + 0x25,param_1[0xa5]);
    fn_0017821c(iVar3,param_1 + param_1[1] * 0x24a + 0xda,param_1[param_1[1] + 0x4a1a] << 2);
    puVar4 = (uint *)(iVar3 + param_1[param_1[1] + 0x4a1a] * 4);
    *puVar4 = param_1[0xa8] | 0x7fff0000;
    puVar1 = puVar4 + 2;
    puVar4[1] = 0xf0280;
  }
  *puVar1 = 0;
  puVar1[1] = 0xf02cb;
  uVar5 = param_1[0x24];
  if (0x1ff < uVar5) {
    uVar5 = 0x200;
  }
  puVar2 = (undefined4 *)fn_006cf6fc(param_1,puVar1 + 2,0x2cc,param_1[0x23],uVar5);
  *puVar2 = 1;
  puVar2[1] = 0xf02bf;
  puVar2[2] = 0;
  puVar2[3] = 0xf02d5;
  iVar3 = fn_006cf6fc(param_1,puVar2 + 4,0x2d6,param_1 + 0x25,param_1[0xa5]);
  fn_0017821c(iVar3,param_1 + *param_1 * 0x24a + 0xda,param_1[*param_1 + 0x4a1a] << 2);
  puVar1 = (uint *)(iVar3 + param_1[*param_1 + 0x4a1a] * 4);
  *puVar1 = param_1[0xa7] | 0x7fff0000;
  puVar1[1] = 0xf02b0;
  uVar5 = 0x100;
  if ((char)param_1[0xa6] != '\x03') {
    uVar5 = 0;
  }
  puVar1[2] = uVar5;
  uVar5 = 0x100;
  puVar1[3] = 0x20229;
  if ((char)param_1[0xa6] != '\x03') {
    uVar5 = 0;
  }
  puVar1[4] = uVar5;
  puVar1[5] = 0x20253;
  fn_0017821c(puVar1 + 6,param_1 + 0xa9,param_1[0xd9] << 2);
  return puVar1 + 6 + param_1[0xd9];
}


