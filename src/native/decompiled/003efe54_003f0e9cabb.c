#include "003efe54_003f0e9cabb.h"



void fn_003f021c(int param_1)

{
  if (*(int *)(param_1 + 0x70) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  }
  fn_0016a43c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
}



void fn_003f01e4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = &DAT_008347cc;
  *(undefined1 *)(puVar1 + 3) = 0xff;
  return;
}


