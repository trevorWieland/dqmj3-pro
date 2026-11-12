#include "0040cea8_004133ecaa.h"



void fn_0040d138(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0xe);
  *puVar1 = &DAT_008380c0;
  return;
}



void fn_0040cfcc(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,7);
  *puVar1 = &DAT_00838098;
  if (param_3 == (byte *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*param_3;
  }
  puVar1[0x16] = uVar2;
  return;
}



void fn_0040cea8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x15);
  *puVar1 = &DAT_00838054;
  puVar1[0x20] = param_3;
  return;
}


