#include "005d151c_005d2154bbb.h"



undefined4 fn_005d2154(int *param_1)

{
  int iVar1;
  
  fn_004484ac();
  fn_005d2254(param_1);
  iVar1 = (**(code **)(*param_1 + 0x11c))(param_1);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1[0x26] + 0x25) = 0;
  }
  fn_0022cdb4(param_1,1);
  return 1;
}



void fn_005d212c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003492e4();
  *puVar1 = &DAT_0084c334;
  return;
}


