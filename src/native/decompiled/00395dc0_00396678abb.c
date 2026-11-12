#include "00395dc0_00396678abb.h"



void fn_003960cc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005c21cc();
  *puVar1 = &DAT_0082b890;
  return;
}



void fn_0039602c(int param_1,int param_2)

{
  fn_00411cb8();
  *(int *)(*(int *)(param_1 + 0xb0) + 0x18) = param_2;
  if (param_2 == 0) {
    fn_006899f4(param_1,0x94,0);
    fn_0068ab44(param_1,0x100094b);
    return;
  }
  if (param_2 == 1) {
    fn_0068ab44(param_1,0x100094c);
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x18) = 0;
    fn_006899f4(param_1,0,0,0);
    fn_00689d04(param_1,0);
    fn_00689878(param_1,0);
    return;
  }
  return;
}


