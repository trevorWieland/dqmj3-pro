#include "0022d168_0022d8bcabb.h"



void fn_0022d3ac(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003e5bc0();
  *puVar1 = &DAT_0081ce34;
  return;
}



void fn_0022d270(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  fn_003e5aac();
  *(int *)(param_1[0x2c] + 0x18) = param_2;
  if (param_2 == 0) {
    fn_006899f4(param_1,0x8d,0);
    fn_0068ab44(param_1,0x100094b);
    return;
  }
  if (param_2 == 1) {
    if ((short)(*(int *)(param_1[0x2d] + 8) - *(int *)(param_1[0x2d] + 4) >> 1) == 0) {
      *(undefined4 *)(param_1[0x17] + 0x38) = 0x100094d;
      uVar1 = fn_0022f584((char *)&DAT_0022d394,0);
                    /* WARNING: Could not recover jumptable at 0x0022d384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x13c))(param_1,uVar1,0,3);
      return;
    }
    fn_0068ab44(param_1,0x100094b);
    fn_006899f4(param_1,0x8c,0);
    return;
  }
  if (param_2 == 2) {
    fn_0068ab44(param_1,0x100094c);
    *(undefined4 *)(param_1[0x2c] + 0x18) = 0;
    fn_006899f4(param_1,0,0,0);
    fn_00689d04(param_1,0);
    fn_00689878(param_1,0);
    return;
  }
  return;
}


