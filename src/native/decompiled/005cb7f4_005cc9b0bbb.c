#include "005cb7f4_005cc9b0bbb.h"



void fn_005cc92c(int *param_1)

{
  int iVar1;
  
  if (param_1[0x34] == 0) {
    fn_002f8444();
    fn_002f8464(1);
    return;
  }
  iVar1 = fn_002f8974();
  if (iVar1 != 0) {
    fn_00689930(param_1,0,0);
    (**(code **)(*param_1 + 0x14))(param_1);
    fn_002f83d8(1);
    param_1[0x31] = (int)fn_005cc9b0;
    param_1[0x32] = 0;
  }
  return;
}



void fn_005cc9b0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    fn_002f6100(param_1);
    fn_0015b0dc();
    uVar1 = fn_0022f584((char *)&DAT_005cca28,0);
    fn_0068974c(param_1,uVar1,0,1);
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
    fn_006899f4(param_1,0xe3,0);
    return;
  }
  return;
}


