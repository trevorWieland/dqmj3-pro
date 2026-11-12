#include "single_001c48f8_r.h"


extern undefined4 register0x00000054;

void fn_001c48f8(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_c;
  
  (**(code **)(*param_1 + 300))();
  iVar2 = *(int *)(*(int *)(DAT_00897804 + 8) + 4);
  local_c = *(ushort *)(iVar2 + 0x268) + 1;
  puVar1 = (undefined4 *)((int)register0x00000054 + -8);
  if (local_c < 10000) {
    puVar1 = &local_c;
  }
  *(undefined2 *)(iVar2 + 0x268) = *(undefined2 *)puVar1;
  return;
}


