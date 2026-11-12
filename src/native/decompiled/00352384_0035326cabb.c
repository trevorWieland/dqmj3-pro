#include "00352384_0035326cabb.h"



void fn_00352e48(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_008267d4;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  return;
}



void fn_00352df0(int param_1)

{
  if (*(int *)(param_1 + 0x74) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  }
  fn_0016a43c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
}


