#include "005f8170_005f90ccbb.h"



void fn_005f9024(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    fn_002f6534(param_1);
    fn_0015b0dc();
    uVar2 = fn_0022f584((char *)&DAT_005f90ac,0);
    fn_0068974c(param_1,uVar2,0,1);
    return;
  }
  iVar1 = fn_006f6a6c();
  if (iVar1 == 1) {
    fn_002f8464(1);
    *(code **)(param_1 + 0x78) = fn_005f90cc;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



void fn_005f90cc(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    fn_002f6b80(0);
    fn_002f83d8(1);
    return;
  }
  iVar1 = fn_002f8974();
  if (iVar1 != 0) {
    *(code **)(param_1 + 0x78) = fn_005f9128;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



void fn_005f8fb4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x21] == 0) {
    uVar2 = fn_002f8914();
    fn_002f7714(uVar2,1);
    fn_002f4624(DAT_008977ec,0);
    iVar1 = (**(code **)(*param_1 + 8))(param_1);
    fn_0026a494(DAT_00897818,*(undefined4 *)(iVar1 + 0x18),1);
    return;
  }
  iVar1 = fn_002f5908();
  if (iVar1 == 0) {
    return;
  }
  fn_006899f4(param_1,0xd6,1);
  fn_00689930(param_1,0,1);
  return;
}



void fn_005f8f48(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = &DAT_0084df2c;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}


