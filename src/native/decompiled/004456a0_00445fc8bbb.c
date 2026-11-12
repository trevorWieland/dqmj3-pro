#include "004456a0_00445fc8bbb.h"



void fn_00445fc8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00445ff8(iVar1,param_1);
  return;
}



int fn_00445f18(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = (undefined4 *)fn_003492e4();
  *puVar1 = &DAT_0083e650;
  iVar2 = fn_00101a1c(puVar1 + 7,&LAB_00445e58,8,2);
  uVar4 = 0;
  do {
    iVar3 = iVar2 + -0x1c + uVar4 * 8;
    *(undefined1 *)(iVar3 + 0x1c) = 0;
    fn_00147974(iVar3 + 0x20,&LAB_00445f78);
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 2);
  return iVar2 + -0x1c;
}


