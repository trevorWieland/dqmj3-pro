#include "0024b640_0024bdc8bb.h"



void fn_0024bdc8(uint param_1,undefined1 param_2)

{
  if (param_1 == 0xffffffff) {
    return;
  }
  if ((uint)(DAT_008cd574 - DAT_008cd570) <= param_1) {
    fn_002ff628(9,&DAT_008c766f,&DAT_008c766f,param_1,DAT_008cd574 - DAT_008cd570);
  }
  *(undefined1 *)(DAT_008cd570 + param_1) = param_2;
  return;
}



void fn_0024bdbc(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(char *)(param_1 + 100);
  if (uVar1 == 0xffffffff) {
    return;
  }
  if ((uint)(DAT_008cd574 - DAT_008cd570) <= uVar1) {
    fn_002ff628(9,&DAT_008c766f,&DAT_008c766f,uVar1,DAT_008cd574 - DAT_008cd570);
  }
  *(undefined1 *)(DAT_008cd570 + uVar1) = 0;
  return;
}


