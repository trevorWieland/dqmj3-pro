#include "003fc554_003fd1b4bbb.h"



undefined4 * fn_003fd1b4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002e6a94();
  *puVar1 = &DAT_00836638;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  fn_00121838(DAT_00897800,DAT_00898788,1);
  return puVar1;
}



void fn_003fd040(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = fn_0059e448(*(undefined4 *)(param_1 + 0x9c));
  if (iVar1 == 0) {
    puVar2 = &LAB_003fd0c8;
  }
  else {
    puVar2 = (undefined1 *)fn_0016ba34(DAT_00897800,DAT_00898788,iVar1,0);
  }
  fn_002e6978(param_1,puVar2);
  iVar1 = fn_0059e438(*(undefined4 *)(param_1 + 0x9c),param_2);
  if (iVar1 == 0) {
    puVar2 = &LAB_003fd0c8;
  }
  else {
    puVar2 = (undefined1 *)fn_0016ba34(DAT_00897800,DAT_00898788,iVar1,0);
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0xa0),puVar2);
  return;
}


