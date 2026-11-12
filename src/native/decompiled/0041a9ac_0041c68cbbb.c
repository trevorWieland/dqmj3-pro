#include "0041a9ac_0041c68cbbb.h"



void fn_0041c68c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = &DAT_00839e20;
  *(undefined1 *)(puVar1 + 0x3a) = 0;
  puVar1[0x3b] = 0;
  return;
}



void fn_0041c468(int param_1,int param_2)

{
  *(int *)(*(int *)(param_1 + 0xe4) + 0x18) = param_2;
  fn_0068ab44(param_1,0x100094b);
  if (param_2 == 0) {
    fn_006899f4(param_1,0xa4,0);
    return;
  }
  if (param_2 == 1) {
    fn_006899f4(param_1,0xa5,0);
    return;
  }
  return;
}


