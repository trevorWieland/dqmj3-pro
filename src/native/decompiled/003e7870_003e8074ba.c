#include "003e7870_003e8074ba.h"



void fn_003e7e38(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  fn_0068ab44(param_1,0x100094b);
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xdd);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089687c) goto LAB_003e7e90;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003e7e90:
  uVar3 = fn_006cea38(param_1,param_2);
  puVar1[5] = uVar3;
  fn_006899f4(param_1,0xdd,1);
  fn_0044a864(param_1,3);
  return;
}



void fn_003e7e08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x168,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003e8044(iVar1,param_1);
  return;
}


