#include "004456a0_00445fc8bba.h"



void fn_00445ed0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00445f18(iVar1,param_1);
  return;
}



undefined4 * fn_00445b90(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint local_2c [4];
  
  iVar1 = fn_00145b00(0x7b8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0058cc04(iVar1,param_1);
  *puVar2 = &DAT_0083e628;
  puVar2[9] = 0xffffffff;
  puVar2[10] = 0xffffffff;
  uVar3 = fn_00100b58(&DAT_00445d4c);
  if (uVar3 == 0) {
    puVar4 = &DAT_008f9cf4;
  }
  else {
    puVar5 = local_2c + 1;
    if (0x20 < uVar3) {
      puVar5 = local_2c;
    }
    local_2c[0] = uVar3;
    local_2c[1] = 0x20;
    uVar7 = *puVar5;
    if (0xfffffff1 < uVar7) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0xfffffff1);
    }
    if (uVar7 < uVar3) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3,uVar7);
    }
    if (uVar7 == 0) {
      puVar4 = &DAT_008f9ce8;
    }
    else {
      puVar4 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
      }
      puVar4[2] = uVar3;
      puVar6 = (undefined2 *)((int)puVar4 + uVar3 * 2 + 0xc);
      puVar4[1] = uVar7;
      *puVar4 = 0;
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
      }
    }
    puVar4 = puVar4 + 3;
  }
  puVar2[0xb] = puVar4;
  fn_00301a9c(puVar4,&DAT_00445d4c,uVar3 << 1);
  fn_00301f50(puVar2 + 0xc,0x3c0);
  puVar2[0xfc] = 0xffffffff;
  puVar2[0xfd] = 0xffffffff;
  fn_00301f50(puVar2 + 0xfe,0x3c0);
  iVar1 = 0;
  do {
    fn_00301f50(puVar2 + iVar1 * 0x3c + 0xc,0xf0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  iVar1 = 0;
  do {
    fn_00301f50(puVar2 + iVar1 * 0x3c + 0xfe,0xf0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return puVar2;
}


