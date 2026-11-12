#include "003f8308_003f9b94bab.h"



void fn_003f9008(int param_1)

{
  if (*(char *)(param_1 + 0xf4) == '\x01') {
    fn_003f860c(param_1,0);
    fn_00689828(param_1,1);
    fn_00327a7c(*(undefined4 *)(param_1 + 0xd8));
    *(undefined1 *)(param_1 + 0xf4) = 0;
    fn_0068ab44(param_1,0x100094c);
    return;
  }
  return;
}



void fn_003f85b8(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xd8) + 0x14))();
  fn_00397db0(param_1);
  fn_001218d4(DAT_00897800,DAT_00898794);
  fn_001218d4(DAT_00897800,DAT_0089878c);
  return;
}


