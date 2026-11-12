#include "single_001d719c_r.h"


extern undefined4 _local_24;

/* WARNING: Removing unreachable block (ram,0x003ad5fc) */

void fn_001d719c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 in_d8;
  undefined4 *local_28;
  char local_24;
  undefined3 uStack_23;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = (undefined4)in_d8;
  uStack_18 = (undefined4)((ulonglong)in_d8 >> 0x20);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x150) + 0x10))();
  fn_00176d68(*(undefined4 *)(param_1 + 4));
  puVar2 = (undefined4 *)fn_006dcd40();
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  *(undefined4 *)(iVar1 + 8) = *puVar2;
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  *(undefined4 *)(iVar1 + 0x10) = uVar5;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  iVar1 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  puVar6 = *(undefined4 **)(param_1 + 0x150);
  uVar4 = *(undefined4 *)(iVar1 + 600);
  *(undefined4 *)(iVar1 + 600) = 0;
  puVar2 = (undefined4 *)(iVar1 + 600);
  _local_24 = CONCAT31(uStack_23,1);
  local_28 = puVar6;
  if ((undefined4 **)puVar2 != &local_28) {
    local_28 = (undefined4 *)*puVar2;
    _local_24 = CONCAT31(uStack_23,*(undefined1 *)(iVar1 + 0x25c));
    *puVar2 = puVar6;
    *(undefined1 *)(iVar1 + 0x25c) = 1;
  }
  puVar2 = local_28;
  if ((local_28 != (undefined4 *)0x0) && (local_24 != '\0')) {
    (**(code **)*local_28)(local_28);
    piVar3 = (int *)puVar2[1];
    (**(code **)(*piVar3 + 0xc))(piVar3,puVar2);
  }
  *(undefined4 *)(param_1 + 0x14c) = uVar4;
  *(undefined4 *)(param_1 + 0x150) = 0;
  fn_001d68cc(param_1,3);
  *(undefined1 *)(param_1 + 0xc) = 3;
  iVar1 = *(int *)(param_1 + 0x148);
  if (param_2 != 0) {
    fn_003ad8f8();
    return;
  }
  *(undefined1 *)(iVar1 + 8) = 1;
  *(undefined1 *)(iVar1 + 9) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined1 *)(iVar1 + 0x3c) = 0;
  *(undefined1 *)(iVar1 + 0x3d) = 0;
  *(undefined1 *)(iVar1 + 0x3e) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 2;
  *(undefined4 *)(iVar1 + 0x1c) = 0x1e;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0x40c90fdb;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  piVar3 = (int *)(iVar1 + 0x30);
  if (*(int *)(iVar1 + 0x30) < *(int *)(iVar1 + 0x1c)) {
    piVar3 = (int *)(iVar1 + 0x1c);
  }
  *(int *)(iVar1 + 0x38) = *piVar3 + 5;
  return;
}


