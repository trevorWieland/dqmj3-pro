#include "005b6204_005b73e8bb.h"



void fn_005b73e8(int param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0x66) = *param_3;
  return;
}



void fn_005b73b4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_00848a18;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  return;
}



void fn_005b735c(int param_1)

{
  if (*(int *)(param_1 + 0x78) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  }
  fn_0016a43c(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x74));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
}


