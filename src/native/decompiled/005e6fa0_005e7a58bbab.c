#include "005e6fa0_005e7a58bbab.h"



undefined4 *
fn_005e78a8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  *param_1 = &DAT_00858c00;
  param_1[1] = 0;
  piVar1 = (int *)fn_00145b00(4,&DAT_00812c8c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = 0;
    uVar2 = fn_00118290();
    local_40 = 0x8058;
    local_3c = 0;
    local_38 = 0x103;
    local_2c = (uint)CONCAT11(param_7,param_4);
    local_48 = param_2;
    local_44 = param_3;
    local_34 = param_6;
    local_30 = param_5;
    piVar3 = (int *)fn_005ee9b0(&local_48,uVar2,&local_34,1);
    piVar4 = (int *)*piVar1;
    if (piVar4 != piVar3) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      *piVar1 = (int)piVar3;
    }
  }
  piVar3 = (int *)param_1[1];
  if (piVar3 != piVar1) {
    if (piVar3 != (int *)0x0) {
      if ((int *)*piVar3 != (int *)0x0) {
        (**(code **)(*(int *)*piVar3 + 4))();
        *piVar3 = 0;
      }
      fn_002feef8(piVar3);
    }
    param_1[1] = piVar1;
  }
  return param_1;
}


