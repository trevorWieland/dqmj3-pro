#include "005b1ec4_005b3260aba.h"



void fn_005b2f00(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_00748c18();
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_005b2f54;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005b2f54:
  if (param_2 == 7) {
    puVar1[6] = 0;
  }
  else {
    puVar1[6] = param_2 & 0xff;
  }
  return;
}



void fn_005b2ed0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x114,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b2f70(iVar1,param_1);
  return;
}


