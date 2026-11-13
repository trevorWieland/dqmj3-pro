#include "005ba1c4_005bb804aa.h"



void fn_005ba1f8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_0066e158(DAT_00898840);
  if ((iVar1 != 0) || (*(char *)(DAT_00898840 + 0x60) != '\0')) {
    return;
  }
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xf3);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008990b0) goto LAB_005ba268;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005ba268:
  puVar2[5] = 1;
  fn_006899f4(param_1,0xf3,1,1);
                    /* WARNING: Could not recover jumptable at 0x005ba294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1);
  return;
}



void fn_005ba1c4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x1a8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005ba2a4(iVar1,param_1);
  return;
}


