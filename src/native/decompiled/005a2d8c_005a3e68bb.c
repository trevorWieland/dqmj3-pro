#include "005a2d8c_005a3e68bb.h"



void fn_005a3e68(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    uVar2 = fn_0022f584((char *)&DAT_005a3ec8,0);
    fn_0068974c(param_1,uVar2,0,1);
    return;
  }
  iVar1 = fn_006f6a6c(param_1);
  if (iVar1 == 1) {
    *(code **)(param_1 + 0xc4) = fn_005a3c10;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



void fn_005a3c10(int *param_1)

{
  int iVar1;
  
  if (param_1[0x34] == 0) {
    fn_002f829c(1);
    fn_002f4624(DAT_008977ec,0);
    iVar1 = (**(code **)(*param_1 + 8))(param_1);
    fn_0026a494(DAT_00897818,*(undefined4 *)(iVar1 + 0x18),1);
    return;
  }
  iVar1 = fn_002f5908();
  if (iVar1 != 0) {
    param_1[0x31] = (int)fn_005a4a7c;
    param_1[0x32] = 0;
  }
  return;
}



void fn_005a3704(int param_1)

{
  if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd4) + 4))();
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  fn_002c4100(param_1);
  return;
}



void fn_005a3468(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  fn_0039536c();
  *(undefined1 *)(param_1 + 0x14) = 1;
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar3 != uVar1) {
    uVar2 = uVar3;
    if (uVar1 <= uVar3) {
      do {
        uVar2 = uVar2 + 0xa88;
      } while (uVar2 != uVar1);
    }
    *(uint *)(param_1 + 0x1c) = uVar1 + ((int)(uVar1 - uVar3) / 0xa88) * -0xa88;
  }
  return;
}


