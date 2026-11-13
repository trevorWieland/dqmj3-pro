#include "0057d8c8_0057fbd4bba.h"



void fn_0057eb34(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0057ec1c(iVar1,param_1);
  return;
}



undefined4 fn_0057e620(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_0057e670;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0057e670:
  fn_002358e4(*(undefined4 *)(DAT_00897828 + 0x70),puVar1);
  fn_005b8150(param_1);
  iVar3 = fn_006e7ab8(puVar1);
  if (iVar3 == 0) {
    fn_00747f28(param_1,DAT_00898214,(char *)&DAT_0057e734,1,1,1,0);
  }
  else {
    fn_00747f28(param_1,DAT_00898214,(char *)&DAT_0057e714,1,1,1,0);
  }
  fn_00689930(param_1,0xf5,0);
  return 1;
}


