#include "0036254c_00362d90bb.h"



void fn_00362d90(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0036c648(*(undefined4 *)(param_1 + 0x5c),param_3);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 10) = 1;
  fn_0036c140(*(undefined4 *)(param_1 + 0x5c),param_2);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 8) = 0;
  fn_00689bd0(param_1,0x48,0,0);
  return;
}



void fn_00362d64(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_008272d4;
  return;
}



void fn_00362cfc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    local_10 = param_4;
    uVar1 = fn_0010d9c4();
    fn_005f5708(uVar1,1);
    local_10 = 0xffffffff;
    uVar1 = fn_0010d9c4();
    fn_005f56e4(uVar1,&local_10);
    uVar1 = fn_0010d9c4();
    fn_005f4d9c(uVar1,8);
    uVar1 = fn_0010d9c4();
    fn_005f55ec(uVar1,&DAT_00362d50);
  }
  return;
}


