#include "single_005e7328_r.h"


extern undefined4 _local_54;

int * fn_005e7328(int *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *local_58;
  char local_54;
  undefined3 uStack_53;
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  char local_3c;
  int *local_38;
  char local_34;
  
  *param_1 = 0;
  iVar6 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  iVar7 = 0x3f800000;
  piVar2 = (int *)fn_0054460c(param_2);
  iVar3 = (**(code **)(*piVar2 + 0x10))(piVar2);
  *(int *)(iVar3 + 8) = iVar6;
  *(int *)(iVar3 + 0xc) = iVar6;
  *(int *)(iVar3 + 0x10) = iVar6;
  *(int *)(iVar3 + 0x14) = iVar6;
  *(int *)(iVar3 + 0x18) = iVar7;
  *(int *)(iVar3 + 0x1c) = iVar6;
  piVar4 = (int *)fn_00544288(param_2);
  *(undefined1 *)(piVar4 + 2) = 0;
  local_50 = 1;
  local_4f = 1;
  local_40 = (int *)0x0;
  local_44 = 1;
  local_38 = (int *)0x0;
  local_34 = '\x01';
  local_48 = 0;
  local_4c = 0;
  local_54 = 1;
  local_58 = piVar2;
  if (&local_40 != &local_58) {
    local_58 = (int *)0x0;
    local_40 = piVar2;
  }
  piVar2 = local_58;
  local_3c = '\x01';
  if (local_58 != (int *)0x0) {
    (**(code **)*local_58)(local_58);
    piVar5 = (int *)piVar2[1];
    (**(code **)(*piVar5 + 0xc))(piVar5,piVar2);
  }
  cVar1 = local_34;
  _local_54 = CONCAT31(uStack_53,1);
  local_58 = piVar4;
  if (&local_38 != &local_58) {
    local_58 = local_38;
    local_34 = '\x01';
    _local_54 = CONCAT31(uStack_53,cVar1);
    local_38 = piVar4;
  }
  piVar2 = local_58;
  if ((local_58 != (int *)0x0) && (local_54 != '\0')) {
    (**(code **)*local_58)(local_58);
    piVar4 = (int *)piVar2[1];
    (**(code **)(*piVar4 + 0xc))(piVar4,piVar2);
  }
  piVar4 = (int *)fn_00544f44(&local_50,param_2);
  piVar2 = local_38;
  if ((local_38 != (int *)0x0) && (local_34 != '\0')) {
    (**(code **)*local_38)(local_38);
    piVar5 = (int *)piVar2[1];
    (**(code **)(*piVar5 + 0xc))(piVar5,piVar2);
  }
  piVar2 = local_40;
  if ((local_40 != (int *)0x0) && (local_3c != '\0')) {
    (**(code **)*local_40)(local_40);
    piVar5 = (int *)piVar2[1];
    (**(code **)(*piVar5 + 0xc))(piVar5,piVar2);
  }
  piVar4[0x23] = 0x3f800000;
  piVar4[0x24] = 0;
  piVar4[0x25] = 0;
  piVar4[0x26] = iVar6;
  piVar4[0x27] = 0;
  piVar4[0x28] = 0x3f800000;
  piVar4[0x29] = 0;
  piVar4[0x2a] = iVar6;
  piVar4[0x2b] = 0;
  piVar4[0x2d] = 0x3f800000;
  piVar4[0x2c] = 0;
  piVar4[0x2e] = iVar7;
  piVar4[0xa5] = iVar7;
  fn_00545c14(piVar4);
  fn_00545778(piVar4);
  _local_54 = CONCAT31(uStack_53,1);
  local_58 = piVar4;
  if ((int **)param_1 != &local_58) {
    local_58 = (int *)*param_1;
    _local_54 = CONCAT31(uStack_53,(char)param_1[1]);
    *param_1 = (int)piVar4;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  piVar2 = local_58;
  if ((local_58 != (int *)0x0) && (local_54 != '\0')) {
    (**(code **)*local_58)(local_58);
    piVar4 = (int *)piVar2[1];
    (**(code **)(*piVar4 + 0xc))(piVar4,piVar2);
  }
  return param_1;
}


