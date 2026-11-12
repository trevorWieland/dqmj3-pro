#include "0041e078_0041f0f4aa.h"



void fn_0041e138(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  fn_002c3e78();
  iVar1 = fn_006b87ac(*(undefined4 *)(DAT_00897804 + 0x38),
                       *(undefined4 *)(*(int *)(param_1 + 0xe4) + 8));
  iVar3 = 0;
  do {
    iVar4 = iVar1 + iVar3 * 0xf0;
    iVar2 = fn_00100b58(iVar4 + 0x158);
    if (iVar2 != 0) {
      fn_0031b78c(param_1,iVar3,0,iVar4 + 0x158);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}



void fn_0041e108(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xec,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0041e1ec(iVar1,param_1);
  return;
}



void fn_0041e078(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}


