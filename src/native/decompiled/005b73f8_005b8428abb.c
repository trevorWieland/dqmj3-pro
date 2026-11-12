#include "005b73f8_005b8428abb.h"



undefined4 fn_005b8150(int param_1)

{
  int iVar1;
  
  fn_0043c608();
  iVar1 = fn_00689210(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_005b8188);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  fn_0025e31c(*(undefined4 *)(param_1 + 0x98),0);
  return 1;
}



void fn_005b8104(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,&DAT_007c4dbc,3);
  *puVar1 = &DAT_00848c14;
  return;
}



void fn_005b80ac(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_0025dbc4();
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00892b20) goto LAB_005b80f4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005b80f4:
  puVar2[0x154] = *(undefined4 *)(param_1 + 0x78);
  return;
}


