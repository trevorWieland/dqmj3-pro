#include "0042ed0c_0042f848abb.h"



undefined4 * fn_0042f214(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint local_2c [2];
  
  puVar1 = (undefined4 *)fn_003492e4();
  *puVar1 = &DAT_0083bd9c;
  fn_00301f50(puVar1 + 7,0x8d8);
  *(undefined1 *)(puVar1 + 0x23d) = 0;
  *(undefined1 *)((int)puVar1 + 0x8f5) = 0;
  *(undefined1 *)((int)puVar1 + 0x8f6) = 0;
  *(undefined1 *)((int)puVar1 + 0x8f7) = 0;
  uVar2 = fn_00100b58(&DAT_0042f37c);
  puVar6 = &DAT_008f9cf4;
  if (uVar2 != 0) {
    puVar3 = local_2c + 1;
    if (0x20 < uVar2) {
      puVar3 = local_2c;
    }
    local_2c[0] = uVar2;
    local_2c[1] = 0x20;
    uVar5 = *puVar3;
    if (0xfffffff1 < uVar5) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
    }
    if (uVar5 < uVar2) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar5);
    }
    if (uVar5 == 0) {
      puVar6 = &DAT_008f9ce8;
    }
    else {
      puVar6 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
      }
      puVar6[2] = uVar2;
      puVar4 = (undefined2 *)((int)puVar6 + uVar2 * 2 + 0xc);
      *puVar6 = 0;
      puVar6[1] = uVar5;
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    puVar6 = puVar6 + 3;
  }
  puVar1[0x23e] = puVar6;
  fn_00301a9c(puVar6,&DAT_0042f37c,uVar2 << 1);
  puVar1[0x23f] = &DAT_008f9cf4;
  *(undefined1 *)(puVar1 + 0x240) = 0;
  *(undefined1 *)((int)puVar1 + 0x901) = 0;
  *(undefined1 *)((int)puVar1 + 0x902) = 1;
  *(undefined1 *)((int)puVar1 + 0x903) = 0;
  *(undefined1 *)(puVar1 + 0x241) = 1;
  *(undefined1 *)((int)puVar1 + 0x905) = 0;
  fn_00301f50(puVar1 + 7,0x8d8);
  return puVar1;
}


