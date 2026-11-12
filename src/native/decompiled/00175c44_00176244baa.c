#include "00175c44_00176244baa.h"



uint * fn_00175e10(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar1 = (uint *)fn_0016faa8(param_2,(param_1[1] >> 0x1f) + 1,(char)param_1[0x28],param_4,param_4
                               );
  if (-1 < param_1[1]) {
    *puVar1 = 0;
    puVar1[1] = 0xf029b;
    puVar2 = (undefined4 *)fn_0017603c(param_1,puVar1 + 2,0x29c,param_1[0x24],param_1[0x25]);
    *puVar2 = 1;
    puVar2[1] = 0xf028f;
    puVar2[2] = 0;
    puVar2[3] = 0xf02a5;
    iVar3 = fn_0017603c(param_1,puVar2 + 4,0x2a6,param_1[0x26],param_1[0x27]);
    fn_0017821c(iVar3,param_1[0x2d] + *(int *)(param_1[0x30] + param_1[1] * 4) * 4,
                 *(int *)(param_1[0x2e] + param_1[1] * 4) << 2);
    puVar4 = (uint *)(iVar3 + *(int *)(param_1[0x2e] + param_1[1] * 4) * 4);
    *puVar4 = param_1[0x2a] | 0x7fff0000;
    puVar1 = puVar4 + 2;
    puVar4[1] = 0xf0280;
  }
  *puVar1 = 0;
  puVar1[1] = 0xf02cb;
  uVar5 = param_1[0x25];
  if (0x1ff < uVar5) {
    uVar5 = 0x200;
  }
  puVar2 = (undefined4 *)fn_0017603c(param_1,puVar1 + 2,0x2cc,param_1[0x24],uVar5);
  *puVar2 = 1;
  puVar2[1] = 0xf02bf;
  puVar2[2] = 0;
  puVar2[3] = 0xf02d5;
  iVar3 = fn_0017603c(param_1,puVar2 + 4,0x2d6,param_1[0x26],param_1[0x27]);
  fn_0017821c(iVar3,param_1[0x2d] + *(int *)(param_1[0x30] + *param_1 * 4) * 4,
               *(int *)(param_1[0x2e] + *param_1 * 4) << 2);
  puVar1 = (uint *)(iVar3 + *(int *)(param_1[0x2e] + *param_1 * 4) * 4);
  *puVar1 = param_1[0x29] | 0x7fff0000;
  puVar1[1] = 0xf02b0;
  uVar5 = 0x100;
  if ((char)param_1[0x28] != '\x03') {
    uVar5 = 0;
  }
  puVar1[2] = uVar5;
  uVar5 = 0x100;
  puVar1[3] = 0x20229;
  if ((char)param_1[0x28] != '\x03') {
    uVar5 = 0;
  }
  puVar1[4] = uVar5;
  puVar1[5] = 0x20253;
  fn_0017821c(puVar1 + 6,param_1[0x2b] + *(int *)(param_1[0x32] + param_1[2] * 4) * 4,
               *(int *)(param_1[0x2c] + param_1[2] * 4) << 2);
  return puVar1 + 6 + *(int *)(param_1[0x2c] + param_1[2] * 4);
}


