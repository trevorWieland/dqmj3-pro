#include "003aee60_003af57ca.h"



void fn_003af030(int *param_1,int param_2)

{
  if ((char)param_1[0x16] != param_2 && param_2 != 0) {
    param_1[0x4e] = param_1[0x4e] | 2;
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  fn_001dbb48(param_1,param_2);
  return;
}



void fn_003af024(int param_1)

{
  float in_s0;
  
  *(float *)(param_1 + 0x1a0) = in_s0 * in_s0;
  return;
}



void fn_003aee60(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x41700000;
  if (0.0 < (float)param_1[0x69]) {
    param_1[0x69] = (int)((float)param_1[0x69] - 1.0);
    if ((char)param_1[0x67] == '\0') {
      fn_001a4a80();
      fn_001a4a80();
      (**(code **)(*param_1 + 0xd8))(param_1);
    }
    else {
      fn_001a4a80();
      fn_001a4a80();
      (**(code **)(*param_1 + 0xd8))(param_1);
    }
  }
  if ((char)param_1[0x67] == '\0') {
    uVar2 = fn_006f7a84(DAT_008977e0);
    iVar3 = (**(code **)(*param_1 + 0x134))(param_1,uVar2);
    if (iVar3 == 0) {
      piVar1 = (int *)fn_006f72e0(DAT_008977e0);
      (**(code **)(*piVar1 + 0x3c))();
      (**(code **)(*param_1 + 0xd8))(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0x67) = 1;
      fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x11d2a);
      iVar3 = fn_006f7a20(DAT_008977e0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      param_1[0x69] = iVar4;
    }
  }
  else if ((char)param_1[0x67] == '\x01') {
    uVar2 = fn_006f7a84(DAT_008977e0);
    iVar3 = (**(code **)(*param_1 + 0x134))(param_1,uVar2);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0x67) = 0;
      param_1[0x69] = iVar4;
    }
  }
  fn_001db0c0(param_1);
  return;
}


