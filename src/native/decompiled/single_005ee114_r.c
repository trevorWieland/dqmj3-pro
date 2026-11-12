#include "single_005ee114_r.h"


extern undefined4 _local_24;

void fn_005ee114(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *local_28;
  char local_24;
  undefined3 uStack_23;
  undefined1 local_20;
  undefined1 local_1f;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  if (param_4 == 0) {
    uVar1 = fn_00118290();
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  else {
    *(int *)(param_1 + 0xc) = param_4;
  }
  local_20 = 1;
  local_1c = 4;
  local_1f = 1;
  local_18 = 0x10;
  uStack_14 = 1;
  puVar2 = (undefined4 *)fn_00542fec(&local_20,*(undefined4 *)(param_1 + 0xc));
  puVar4 = (undefined4 *)(param_1 + 0x38);
  _local_24 = CONCAT31(uStack_23,1);
  local_28 = puVar2;
  if ((undefined4 **)puVar4 != &local_28) {
    local_28 = (undefined4 *)*puVar4;
    _local_24 = CONCAT31(uStack_23,*(undefined1 *)(param_1 + 0x3c));
    *puVar4 = puVar2;
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
  puVar2 = local_28;
  if ((local_28 != (undefined4 *)0x0) && (local_24 != '\0')) {
    (**(code **)*local_28)(local_28);
    piVar3 = (int *)puVar2[1];
    (**(code **)(*piVar3 + 0xc))(piVar3,puVar2);
  }
  return;
}


