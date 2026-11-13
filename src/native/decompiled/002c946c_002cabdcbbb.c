#include "002c946c_002cabdcbbb.h"



void fn_002cabdc(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  
  param_1[5] = 0;
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    param_1[1] = param_2;
    param_1[2] = *(int *)(param_3 + 0x28);
    piVar1 = (int *)fn_006ba32c(param_4);
    piVar2 = (int *)param_1[3];
    if (piVar2 != piVar1) {
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      param_1[3] = (int)piVar1;
    }
    fn_00245330(param_1[1],param_1[3]);
    uVar4 = 0;
    if (*(int *)(param_4 + 4) != 0) {
      do {
        uVar3 = (**(code **)(*param_1 + 0x14))(param_1,uVar4);
        fn_001c9d44(param_1[3],uVar4,uVar3,0);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_4 + 4));
    }
  }
  if ((char)param_1[4] != '\x01') {
    *(undefined1 *)(param_1 + 4) = 1;
    fn_001caa40(param_1[3]);
    fn_00245510(param_1[1],param_1[3]);
  }
  fn_002cb15c(param_1,0xffffffff);
  *(undefined1 *)((int)param_1 + 0x11) = 1;
  return;
}



void fn_002cab28(int param_1,int param_2,int param_3)

{
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0x100094e;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0x100094f;
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x38) = 0x100094c;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 0x40) = 0x1000950;
  }
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(undefined4 *)(param_1 + 0x50) = 0x1000950;
  }
  return;
}


