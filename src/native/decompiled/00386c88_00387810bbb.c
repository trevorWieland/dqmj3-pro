#include "00386c88_00387810bbb.h"



void fn_00387810(undefined4 *param_1)

{
  *param_1 = &DAT_0082a448;
  fn_00100414(param_1 + 0x3b,fn_0079ed94,4,6);
  fn_00397a78(param_1);
  fn_002feef8();
  return;
}



int fn_003877d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  *puVar1 = &DAT_0082a448;
  puVar1[0x3a] = 0;
  iVar2 = fn_00101a1c(puVar1 + 0x3b,&LAB_001ad830,4,6);
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined1 *)(iVar2 + 0x1c) = 0;
  return iVar2 + -0xec;
}


