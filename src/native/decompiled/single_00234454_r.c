#include "single_00234454_r.h"


extern undefined4 _local_14;

undefined4 *
fn_00234454(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *local_18;
  char local_14;
  undefined3 uStack_13;
  
  *param_1 = &DAT_0081d094;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 0;
  param_1[4] = &DAT_00851818;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xbf800000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0x41200000;
  puVar1 = (undefined4 *)fn_00234124(param_2,param_3,param_4);
  puVar2 = param_1 + 1;
  _local_14 = CONCAT31(uStack_13,1);
  local_18 = puVar1;
  if ((undefined4 **)puVar2 != &local_18) {
    local_18 = (undefined4 *)*puVar2;
    _local_14 = CONCAT31(uStack_13,*(undefined1 *)(param_1 + 2));
    *puVar2 = puVar1;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  puVar1 = local_18;
  if ((local_18 != (undefined4 *)0x0) && (local_14 != '\0')) {
    (**(code **)*local_18)(local_18);
    piVar3 = (int *)puVar1[1];
    (**(code **)(*piVar3 + 0xc))(piVar3,puVar1);
  }
  return param_1;
}


