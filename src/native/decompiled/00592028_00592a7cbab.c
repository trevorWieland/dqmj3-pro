#include "00592028_00592a7cbab.h"



void fn_00592788(int param_1)

{
  if (*(int *)(param_1 + 0x10c) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x10c) + 0xc) = 1;
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    fn_005b8364();
  }
  fn_0074876c(param_1);
  return;
}



void fn_00592754(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = &DAT_00844c98;
  *(undefined1 *)(puVar1 + 0x3a) = 0;
  return;
}


