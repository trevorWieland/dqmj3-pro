#include "0057040c_0057140caa.h"



void fn_00570520(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043d370(param_1,param_2,0,0,0);
  *puVar1 = &DAT_00840904;
  puVar1[0x41] = 0;
  puVar1[0x42] = 0;
  return;
}



void fn_005704b4(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_00748e14();
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008963ac) goto LAB_00570508;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00570508:
  fn_005f6270(puVar1[0x11]);
  fn_005f6270(puVar1[0x12]);
  return;
}



void fn_0057040c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 == 1) && (iVar1 = fn_00154ac8(0x93), iVar1 == 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
    uVar2 = fn_0022f584((char *)&DAT_00570490);
    fn_00748808(param_1,uVar2,0,1,1,0);
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  fn_00748c18(param_1,param_2);
  return;
}


