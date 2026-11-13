#include "0034c044_0034d0a8aab.h"



undefined4 * fn_0034c0ec(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint local_24 [2];
  
  puVar1 = (undefined4 *)fn_0039ba54();
  *puVar1 = &PTR_LAB_00825950;
  uVar2 = fn_00100b58(&DAT_0034c20c);
  if (uVar2 == 0) {
    puVar3 = &DAT_008f9cf4;
  }
  else {
    puVar4 = local_24 + 1;
    if (0x20 < uVar2) {
      puVar4 = local_24;
    }
    local_24[0] = uVar2;
    local_24[1] = 0x20;
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
      puVar5 = (undefined2 *)((int)puVar3 + uVar2 * 2 + 0xc);
      *puVar3 = 0;
      puVar3[1] = uVar6;
      puVar3[2] = uVar2;
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
      }
    }
    puVar3 = puVar3 + 3;
  }
  puVar1[0x2d] = puVar3;
  fn_00301a9c(puVar3,&DAT_0034c20c,uVar2 << 1);
  fn_00301f50(puVar1 + 0x2e,0x3c0);
  fn_00301f50(puVar1 + 0x2e,0x3c0);
  return puVar1;
}



/* WARNING: Removing unreachable block (ram,0x0039b9d8) */
/* WARNING: Removing unreachable block (ram,0x0039ba1c) */

void fn_0034c078(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_0022cdf0();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x128))(param_1);
  if (iVar1 < 1) {
    fn_0022cdb4(param_1,0);
    fn_0034b73c(param_1);
  }
  else {
    fn_0022cdb4(param_1,1);
    fn_0034b73c(param_1);
    fn_0034ba38(param_1);
  }
  iVar1 = fn_0022cdf0();
  if (iVar1 == 0) {
    return;
  }
  fn_0022cf0c(param_1);
  puVar3 = (undefined4 *)param_1[0x28];
  for (puVar2 = (undefined4 *)param_1[0x27]; puVar2 != puVar3; puVar2 = puVar2 + 1) {
    (**(code **)(*(int *)*puVar2 + 0x14))((int *)*puVar2);
  }
  puVar3 = (undefined4 *)param_1[0x2b];
  for (puVar2 = (undefined4 *)param_1[0x2a]; puVar2 != puVar3; puVar2 = puVar2 + 1) {
    (**(code **)(*(int *)*puVar2 + 0x14))((int *)*puVar2);
  }
  fn_0039b7f4(param_1);
  return;
}


