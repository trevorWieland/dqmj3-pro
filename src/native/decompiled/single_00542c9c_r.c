#include "single_00542c9c_r.h"


extern undefined4 _local_24;

void fn_00542c9c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *local_28;
  char local_24;
  undefined3 uStack_23;
  undefined1 auStack_20 [8];
  
  if (*param_1 == 0) {
    puVar4 = (undefined4 *)fn_00543ba0(auStack_20);
    _local_24 = CONCAT31(uStack_23,1);
    local_28 = puVar4;
    if ((undefined4 **)param_1 != &local_28) {
      local_28 = (undefined4 *)*param_1;
      _local_24 = CONCAT31(uStack_23,(char)param_1[1]);
      *param_1 = (int)puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    puVar4 = local_28;
    if ((local_28 != (undefined4 *)0x0) && (local_24 != '\0')) {
      (**(code **)*local_28)(local_28);
      piVar5 = (int *)puVar4[1];
      (**(code **)(*piVar5 + 0xc))(piVar5,puVar4);
    }
  }
  if (param_1[2] == 0) {
    piVar5 = param_1 + 2;
    puVar4 = (undefined4 *)fn_00543c18(auStack_20,param_2);
    _local_24 = CONCAT31(uStack_23,1);
    local_28 = puVar4;
    if ((undefined4 **)piVar5 != &local_28) {
      local_28 = (undefined4 *)*piVar5;
      _local_24 = CONCAT31(uStack_23,(char)param_1[3]);
      *piVar5 = (int)puVar4;
      *(undefined1 *)(param_1 + 3) = 1;
    }
    puVar4 = local_28;
    if ((local_28 != (undefined4 *)0x0) && (local_24 != '\0')) {
      (**(code **)*local_28)(local_28);
      piVar5 = (int *)puVar4[1];
      (**(code **)(*piVar5 + 0xc))(piVar5,puVar4);
    }
  }
  if (param_1[4] == 0) {
    piVar5 = param_1 + 4;
    puVar4 = (undefined4 *)fn_00543bdc(param_2);
    _local_24 = CONCAT31(uStack_23,1);
    local_28 = puVar4;
    if ((undefined4 **)piVar5 != &local_28) {
      local_28 = (undefined4 *)*piVar5;
      _local_24 = CONCAT31(uStack_23,(char)param_1[5]);
      *piVar5 = (int)puVar4;
      *(undefined1 *)(param_1 + 5) = 1;
    }
    puVar4 = local_28;
    if ((local_28 != (undefined4 *)0x0) && (local_24 != '\0')) {
      (**(code **)*local_28)(local_28);
      piVar5 = (int *)puVar4[1];
      (**(code **)(*piVar5 + 0xc))(piVar5,puVar4);
    }
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,0x24,4);
  if (puVar4 != (undefined4 *)0x0) {
    iVar1 = param_1[1];
    iVar6 = *param_1;
    *param_1 = 0;
    iVar2 = param_1[3];
    iVar7 = param_1[2];
    param_1[2] = 0;
    iVar3 = param_1[5];
    iVar8 = param_1[4];
    param_1[4] = 0;
    *puVar4 = &DAT_00857708;
    puVar4[1] = param_2;
    puVar4[2] = iVar6;
    *(char *)(puVar4 + 3) = (char)iVar1;
    puVar4[4] = iVar7;
    *(char *)(puVar4 + 5) = (char)iVar2;
    puVar4[6] = iVar8;
    *(char *)(puVar4 + 7) = (char)iVar3;
    *(undefined1 *)(puVar4 + 8) = 0;
  }
  return;
}


