#include "0058c9a8_0058d718ab.h"



void fn_0058ce98(int param_1,int param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  if (param_2 == -1) {
    param_2 = fn_0034514c(*(undefined1 *)(*(int *)(param_1 + 0xd0) + 0xb));
  }
  fn_0018a618(&local_20,0x18,0x17,&DAT_0058cf84,param_2);
  fn_005d27ac(param_1 + 0xc0,0,1,&local_20);
  return;
}



void fn_0058ce18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  (**(code **)(**(int **)(param_1 + 0xec) + 0x14))();
  if (*(int **)(param_1 + 0xec) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xec) + 4))();
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  fn_00397db0(param_1);
  local_10 = 0x8c000000;
  fn_00163988(DAT_00897810,&local_10,1);
  fn_001218d4(DAT_00897800,DAT_0089878c);
  return;
}



undefined4 * fn_0058cc04(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint local_2c [3];
  
  puVar1 = (undefined4 *)fn_003492e4();
  *puVar1 = &DAT_00843e54;
  uVar2 = fn_00100b58(&DAT_0058cd14);
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
      puVar3[2] = uVar2;
      puVar5 = (undefined2 *)((int)puVar3 + uVar2 * 2 + 0xc);
      puVar3[1] = uVar6;
      *puVar3 = 0;
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
      }
    }
    puVar3 = puVar3 + 3;
  }
  puVar1[7] = puVar3;
  fn_00301a9c(puVar3,&DAT_0058cd14,uVar2 << 1);
  puVar1[8] = 0;
  return puVar1;
}


