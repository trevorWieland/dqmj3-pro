#include "single_005ecb70_r.h"


extern undefined4 _local_54;

int * fn_005ecb70(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *local_58;
  char local_54;
  undefined3 uStack_53;
  undefined4 *local_50;
  char local_4c;
  undefined4 *local_48;
  char local_44;
  undefined4 *local_40;
  char local_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 auStack_20 [8];
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 7) = 1;
  uVar1 = fn_00118290();
  local_38 = 1;
  local_37 = 1;
  local_2c = 1;
  local_34 = 4;
  uStack_30 = param_2;
  puVar2 = (undefined4 *)fn_00542fec(&local_38,uVar1);
  ppuVar3 = (undefined4 **)(param_1 + 3);
  _local_54 = CONCAT31(uStack_53,1);
  local_58 = puVar2;
  if (ppuVar3 != &local_58) {
    local_58 = *ppuVar3;
    _local_54 = CONCAT31(uStack_53,(char)param_1[4]);
    *ppuVar3 = puVar2;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  puVar2 = local_58;
  if ((local_58 != (undefined4 *)0x0) && (local_54 != '\0')) {
    (**(code **)*local_58)(local_58);
    piVar4 = (int *)puVar2[1];
    (**(code **)(*piVar4 + 0xc))(piVar4,puVar2);
  }
  local_28 = 0x40;
  local_24 = 0x40;
  piVar4 = (int *)fn_005e4b74(&local_28,uVar1);
  piVar5 = (int *)*param_1;
  if (piVar5 != piVar4) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    *param_1 = (int)piVar4;
  }
  puVar2 = (undefined4 *)fn_005e6bc4(auStack_20,uVar1);
  ppuVar3 = (undefined4 **)(param_1 + 1);
  _local_54 = CONCAT31(uStack_53,1);
  local_58 = puVar2;
  if (ppuVar3 != &local_58) {
    local_58 = *ppuVar3;
    _local_54 = CONCAT31(uStack_53,(char)param_1[2]);
    *ppuVar3 = puVar2;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  puVar2 = local_58;
  if ((local_58 != (undefined4 *)0x0) && (local_54 != '\0')) {
    (**(code **)*local_58)(local_58);
    piVar4 = (int *)puVar2[1];
    (**(code **)(*piVar4 + 0xc))(piVar4,puVar2);
  }
  local_50 = (undefined4 *)0x0;
  local_4c = '\x01';
  local_48 = (undefined4 *)0x0;
  local_44 = '\x01';
  local_40 = (undefined4 *)0x0;
  local_3c = '\x01';
  puVar6 = (undefined4 *)fn_00542c9c(&local_50,uVar1);
  puVar2 = local_40;
  if ((local_40 != (undefined4 *)0x0) && (local_3c != '\0')) {
    (**(code **)*local_40)(local_40);
    piVar4 = (int *)puVar2[1];
    (**(code **)(*piVar4 + 0xc))(piVar4,puVar2);
  }
  puVar2 = local_48;
  if ((local_48 != (undefined4 *)0x0) && (local_44 != '\0')) {
    (**(code **)*local_48)(local_48);
    piVar4 = (int *)puVar2[1];
    (**(code **)(*piVar4 + 0xc))(piVar4,puVar2);
  }
  puVar2 = local_50;
  if ((local_50 != (undefined4 *)0x0) && (local_4c != '\0')) {
    (**(code **)*local_50)(local_50);
    piVar4 = (int *)puVar2[1];
    (**(code **)(*piVar4 + 0xc))(piVar4,puVar2);
  }
  ppuVar3 = (undefined4 **)(param_1 + 5);
  _local_54 = CONCAT31(uStack_53,1);
  local_58 = puVar6;
  if (ppuVar3 != &local_58) {
    local_58 = *ppuVar3;
    _local_54 = CONCAT31(uStack_53,(char)param_1[6]);
    *ppuVar3 = puVar6;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  puVar2 = local_58;
  if ((local_58 != (undefined4 *)0x0) && (local_54 != '\0')) {
    (**(code **)*local_58)(local_58);
    piVar4 = (int *)puVar2[1];
    (**(code **)(*piVar4 + 0xc))(piVar4,puVar2);
  }
  return param_1;
}


