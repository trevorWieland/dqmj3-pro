#include "004deec4_004df554ba.h"



void fn_004df3c4(void)

{
  undefined4 *puVar1;
  undefined1 in_r3;
  undefined4 in_stack_00000000;
  
  puVar1 = (undefined4 *)fn_004dbe24();
  puVar1[5] = in_stack_00000000;
  *puVar1 = &DAT_00856410;
  *(undefined2 *)((int)puVar1 + 0xe) = 0x14;
  *(undefined1 *)(puVar1 + 3) = in_r3;
  return;
}



void fn_004df370(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(param_1 + 4);
  *puVar3 = 1;
  puVar3[1] = *(undefined1 *)(param_1 + 0xc);
  *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(param_1 + 0x10);
  fn_006f94d0(puVar3 + 4);
  uVar1 = fn_00658e84(*(undefined4 *)(param_1 + 4),10);
  *(undefined2 *)(puVar3 + 10) = uVar1;
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  return;
}



bool fn_004df324(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = fn_00658e84(iVar2,10);
  bVar3 = *(ushort *)(iVar2 + 10) == uVar1;
  if (bVar3) {
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(iVar2 + 1);
    *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(iVar2 + 2);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 4) + 0xc);
  }
  return bVar3;
}


