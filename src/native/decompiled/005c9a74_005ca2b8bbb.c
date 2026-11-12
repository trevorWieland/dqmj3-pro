#include "005c9a74_005ca2b8bbb.h"



int fn_005ca2b8(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = (undefined4 *)fn_003492e4();
  *puVar1 = &DAT_0084b278;
  iVar2 = fn_00101a1c(puVar1 + 7,&LAB_005ca1c8,8,2);
  uVar4 = 0;
  do {
    iVar3 = iVar2 + -0x1c + uVar4 * 8;
    *(undefined1 *)(iVar3 + 0x1c) = 0;
    fn_00147974(iVar3 + 0x20,&LAB_005ca318);
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 2);
  return iVar2 + -0x1c;
}



void fn_005ca27c(int param_1,int param_2,undefined *param_3)

{
  param_1 = param_1 + param_2 * 8;
  if (param_3 == (undefined *)0x0) {
    param_3 = &DAT_005ca2a8;
  }
  fn_00147974(param_1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return;
}


