#include "001801a4_001804b4aa.h"



void fn_001801a4(int param_1,undefined4 param_2)

{
  int iVar1;
  short *psVar2;
  undefined4 local_18;
  short local_14 [2];
  short local_10 [2];
  
  local_18 = param_2;
  fn_00180350(param_1 + 0x5b,0xc,1,0);
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined1 *)(param_1 + 0x10a) = 0;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  *(undefined1 *)(param_1 + 0x10b) = 0;
  *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x28);
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  *(undefined2 *)(param_1 + 0x3e) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  local_14[0] = 0;
  local_18 = CONCAT22(((unsigned int)(local_18) >> 16) & 0xffff,*(undefined2 *)(param_1 + 0x1e));
  iVar1 = fn_00176e70(param_1);
  local_10[0] = (short)iVar1;
  if (iVar1 < local_14[0]) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  psVar2 = local_14;
  if ((int)local_14[0] <= (int)(short)local_18) {
    psVar2 = (short *)&local_18;
  }
  if (iVar1 < *psVar2) {
    psVar2 = local_10;
  }
  *(short *)(param_1 + 0x1e) = *psVar2;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x280) = 0;
  return;
}


