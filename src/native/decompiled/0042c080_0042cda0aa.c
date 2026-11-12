#include "0042c080_0042cda0aa.h"



void fn_0042c214(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002e42dc();
  *puVar1 = &PTR_FUN_0083ba94;
  puVar1[10] = 0;
  return;
}



void fn_0042c080(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *local_30;
  undefined1 *local_2c;
  int local_28;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  local_30 = (undefined1 *)0x0;
  local_2c = (undefined1 *)0x0;
  local_28 = 0;
  fn_0078cb6c(&local_30,1,0,0);
  if (**(int **)(param_1 + 4) == 0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*(int **)(param_1 + 0x28),0);
    fn_002b427c(*(undefined4 *)(param_1 + 0x28),0);
    fn_002b4348(*(undefined4 *)(param_1 + 0x28),0);
    *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x3d) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x3f) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x43) = 0;
  }
  else {
    iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
    fn_0020bbc4(auStack_20,iVar2);
    (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*(int **)(param_1 + 0x28),1);
    uVar3 = fn_006bfda8(auStack_1c);
    fn_002b427c(*(undefined4 *)(param_1 + 0x28),uVar3);
    uVar3 = fn_006bfe90(auStack_1c);
    fn_002b4348(*(undefined4 *)(param_1 + 0x28),uVar3);
    iVar5 = *(int *)(param_1 + 0x28);
    uVar1 = fn_006bf34c(auStack_1c);
    *(undefined1 *)(iVar5 + 0x3d) = uVar1;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar1 = fn_001f84ac(iVar2 + 0x72);
    *(undefined1 *)(iVar5 + 0x3f) = uVar1;
    iVar2 = *(int *)(param_1 + 0x28);
    uVar1 = fn_006bf184(auStack_1c);
    *(undefined1 *)(iVar2 + 0x43) = uVar1;
  }
  *(undefined4 *)(local_30 + 4) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x4c);
  *local_30 = 0;
  fn_002e4118(param_1,&local_30);
  puVar4 = local_30;
  if (local_2c < local_30) {
    do {
      puVar4 = puVar4 + 8;
    } while (puVar4 != local_2c);
  }
  fn_001008c4(local_30,local_28 - (int)local_30 >> 3,0);
  return;
}


