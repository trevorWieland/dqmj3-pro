#include "single_005ef668_r.h"


extern undefined4 _local_1c;

undefined4
fn_005ef668(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *local_20;
  char local_1c;
  undefined3 uStack_1b;
  
  uVar1 = fn_00118290();
  local_20 = param_5;
  puVar2 = (undefined4 *)fn_005ec438(param_2,uVar1,param_3,param_4);
  _local_1c = CONCAT31(uStack_1b,1);
  local_20 = puVar2;
  if ((undefined4 **)param_1 != &local_20) {
    local_20 = (undefined4 *)*param_1;
    _local_1c = CONCAT31(uStack_1b,*(undefined1 *)(param_1 + 1));
    *param_1 = puVar2;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  puVar2 = local_20;
  if ((local_20 != (undefined4 *)0x0) && (local_1c != '\0')) {
    (**(code **)*local_20)(local_20);
    piVar3 = (int *)puVar2[1];
    (**(code **)(*piVar3 + 0xc))(piVar3,puVar2);
  }
  iVar4 = fn_00145b00(0x20,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar4 != 0) {
    piVar3 = (int *)fn_00196930();
  }
  piVar5 = (int *)param_1[0xb];
  if (piVar5 != piVar3) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[0xb] = piVar3;
  }
  iVar4 = fn_00145b00(0x20,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar4 != 0) {
    piVar3 = (int *)fn_00196930();
  }
  piVar5 = (int *)param_1[0x13];
  if (piVar5 != piVar3) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[0x13] = piVar3;
  }
  return *param_1;
}


