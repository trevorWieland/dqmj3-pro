#include "0037df4c_0037e774bbb.h"



bool fn_0037e774(int param_1)

{
  bool bVar1;
  int iVar2;
  uint in_fpscr;
  undefined1 *local_10;
  undefined4 uStack_c;
  
  iVar2 = *(int *)(param_1 + 0xbc) + 1;
  *(int *)(param_1 + 0xbc) = iVar2;
  VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  fn_0069e2d0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x80));
  bVar1 = 9 < *(int *)(param_1 + 0xbc);
  if (bVar1) {
    local_10 = &LAB_0037f180;
    uStack_c = 0;
    fn_00789478(param_1 + 0xb0,&local_10);
  }
  return bVar1;
}



void fn_0037e720(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039571c();
  *puVar1 = &DAT_008292d8;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)((int)puVar1 + 0xd) = 1;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0x2c;
  *(undefined1 *)(puVar1 + 9) = 0;
  return;
}


