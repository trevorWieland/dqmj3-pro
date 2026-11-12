#include "005e6fa0_005e7a58abbb.h"



undefined4 * fn_005e762c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,8,4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_00858bf0;
    puVar1[1] = 0;
    iVar2 = fn_00145b00(8,&DAT_00812c8c);
    if (iVar2 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)fn_005e7328(iVar2,param_1);
    }
    puVar3 = (undefined4 *)puVar1[1];
    if (puVar3 != puVar5) {
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)*puVar3;
        if ((puVar4 != (undefined4 *)0x0) && (*(char *)(puVar3 + 1) != '\0')) {
          (**(code **)*puVar4)(puVar4);
          (**(code **)(*(int *)puVar4[1] + 0xc))((int *)puVar4[1],puVar4);
        }
        *puVar3 = 0;
        fn_002feef8(puVar3);
      }
      puVar1[1] = puVar5;
    }
  }
  return puVar1;
}


