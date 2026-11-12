#include "0036c934_0036d578aab.h"



void fn_0036cbc8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025d744();
  *puVar1 = &DAT_0082799c;
  *(undefined1 *)(puVar1 + 0x35) = 1;
  return;
}



undefined4 * fn_0036c968(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint local_2c [3];
  
  puVar1 = (undefined4 *)fn_0042ed0c();
  *puVar1 = &DAT_00827988;
  *(undefined2 *)(puVar1 + 0x152) = 0;
  *(undefined2 *)((int)puVar1 + 0x54a) = 0;
  *(undefined2 *)(puVar1 + 0x153) = 0;
  *(undefined2 *)((int)puVar1 + 0x54e) = 0;
  uVar2 = fn_00100b58(&DAT_0036ca90);
  if (uVar2 == 0) {
    puVar3 = &DAT_008f9cf4;
  }
  else {
    puVar4 = local_2c + 1;
    if (0x20 < uVar2) {
      puVar4 = local_2c;
    }
    local_2c[0] = uVar2;
    local_2c[1] = 0x20;
    uVar6 = *puVar4;
    if (0xfffffff1 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1);
    }
    if (uVar6 < uVar2) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar6);
    }
    if (uVar6 == 0) {
      puVar3 = &DAT_008f9ce8;
    }
    else {
      puVar3 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      *puVar3 = 0;
      puVar3[1] = uVar6;
      puVar5 = (undefined2 *)((int)puVar3 + uVar2 * 2 + 0xc);
      puVar3[2] = uVar2;
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
      }
    }
    puVar3 = puVar3 + 3;
  }
  puVar1[0x154] = puVar3;
  fn_00301a9c(puVar3,&DAT_0036ca90,uVar2 << 1);
  puVar1[0x155] = 0;
  *(undefined2 *)(puVar1 + 0x151) = 0;
  *(undefined2 *)((int)puVar1 + 0x546) = 0;
  return puVar1;
}


