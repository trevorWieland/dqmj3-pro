#include "0038f910_00390174aa.h"



void fn_0038fc8c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xbc,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0038feb4(iVar1,param_1);
  return;
}



void fn_0038fb9c(int param_1)

{
  int iVar1;
  
  fn_0068ab44(param_1,0x100094c);
  *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x1d) = 1;
  fn_00689824(param_1,0);
  if (*(char *)(*(int *)(param_1 + 0xb0) + 0x1e) != '\0') {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xb0) + 8);
  if (iVar1 == 0) {
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    fn_00689878(param_1,0);
  }
  else {
    fn_006899f4(param_1,iVar1,0,1);
  }
                    /* WARNING: Could not recover jumptable at 0x0038fc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))();
  return;
}



void fn_0038f910(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint local_4c;
  uint local_48;
  undefined4 *local_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  local_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  uVar1 = fn_00100b58(&DAT_0038fb84);
  if (uVar1 == 0) {
    local_44 = &DAT_008f9cf4;
  }
  else {
    puVar3 = &local_48;
    if (0x20 < uVar1) {
      puVar3 = &local_4c;
    }
    local_4c = uVar1;
    local_48 = 0x20;
    uVar5 = *puVar3;
    if (0xfffffff1 < uVar5) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
    }
    if (uVar5 < uVar1) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar5);
    }
    if (uVar5 == 0) {
      local_44 = &DAT_008f9ce8;
    }
    else {
      local_44 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
      if (local_44 != (undefined4 *)0x0) {
        *local_44 = 0;
        local_44[1] = 0;
        local_44[2] = 0;
      }
      local_44[2] = uVar1;
      puVar4 = (undefined2 *)((int)local_44 + uVar1 * 2 + 0xc);
      local_44[1] = uVar5;
      *local_44 = 0;
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    local_44 = local_44 + 3;
  }
  fn_00301a9c(local_44,&DAT_0038fb84,uVar1 << 1);
  if (param_4 == 0) {
    uVar2 = fn_00230a84(0);
    fn_00147974(&local_44,uVar2);
  }
  else if (param_4 == 1) {
    uVar2 = fn_00230a84(1,0);
    fn_00147974(&local_44,uVar2);
  }
  uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_3);
  fn_0020bbc4(auStack_40,uVar2);
  fn_00231074(&local_38,uVar2,0);
  uVar1 = local_44[-1];
  uVar5 = *(uint *)(local_38 + -4);
  if (((uint)local_44[-2] < uVar1 + uVar5) || (1 < local_44[-3] + 1)) {
    if (-uVar5 - 0xf < uVar1) {
      fn_002ff628(8,&DAT_008c760f,&DAT_008c760f,uVar1,-uVar5 - 0xf);
    }
    local_4c = 0;
    local_48 = uVar5;
    fn_00177c88(&local_44,local_44[-1],0,local_38,*(undefined4 *)(local_38 + -4));
  }
  else {
    fn_00301a9c((int)local_44 + uVar1 * 2,local_38,(uVar5 + 1) * 2);
    local_44[-1] = uVar1 + uVar5;
  }
  fn_001588d4(&local_38);
  fn_0031b78c(local_34,uStack_30,0,local_44);
  uVar2 = fn_006bf240(auStack_3c);
  fn_002c3df8(local_34,uStack_30,4,uVar2);
  fn_001588d4(&local_44);
  return;
}


