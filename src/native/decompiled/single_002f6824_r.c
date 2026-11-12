#include "single_002f6824_r.h"


extern undefined4 _local_10;

void fn_002f6824(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  short local_10;
  undefined2 uStack_e;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0x30);
  if (param_1 == 0) {
    puVar1 = (undefined4 *)fn_006b8718(uVar2);
    local_18 = *puVar1;
    uStack_14 = puVar1[1];
    local_10 = (short)puVar1[2];
    uStack_e = (undefined2)((uint)puVar1[2] >> 0x10);
    _local_10 = CONCAT22(uStack_e,local_10 + 1);
    fn_0028b940(uVar2,&local_18);
    return;
  }
  puVar1 = (undefined4 *)fn_006b873c();
  local_18 = *puVar1;
  uStack_14 = puVar1[1];
  local_10 = (short)puVar1[2];
  uStack_e = (undefined2)((uint)puVar1[2] >> 0x10);
  _local_10 = CONCAT22(uStack_e,local_10 + 1);
  fn_0028b970(uVar2,&local_18);
  return;
}


