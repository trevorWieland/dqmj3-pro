#include "single_00234124_r.h"


extern undefined4 _local_5c;

int fn_00234124(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 uVar9;
  undefined4 uVar10;
  int *local_60;
  char local_5c;
  undefined3 uStack_5b;
  undefined1 local_58;
  undefined1 local_57;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int *local_48;
  char local_44;
  int *local_40;
  char local_3c;
  
  uVar2 = fn_001287b4();
  uVar9 = 0;
  uVar10 = 0x3f800000;
  piVar3 = (int *)fn_0054460c();
  iVar4 = (**(code **)(*piVar3 + 0x10))(piVar3);
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  *(undefined4 *)(iVar4 + 8) = *param_2;
  *(undefined4 *)(iVar4 + 0xc) = uVar7;
  *(undefined4 *)(iVar4 + 0x10) = uVar8;
  uVar7 = param_3[1];
  uVar8 = param_3[2];
  *(undefined4 *)(iVar4 + 0x14) = *param_3;
  *(undefined4 *)(iVar4 + 0x18) = uVar7;
  *(undefined4 *)(iVar4 + 0x1c) = uVar8;
  piVar5 = (int *)fn_00544288(uVar2);
  *(undefined1 *)(piVar5 + 2) = 0;
  iVar4 = (**(code **)(*piVar5 + 0x10))(piVar5);
  *(undefined4 *)(iVar4 + 4) = in_s0;
  *(undefined4 *)(iVar4 + 8) = in_s1;
  *(undefined4 *)(iVar4 + 0x10) = in_s2;
  *(undefined4 *)(iVar4 + 0x14) = uVar9;
  *(undefined4 *)(iVar4 + 0x18) = uVar9;
  local_58 = 1;
  local_57 = 1;
  local_48 = (int *)0x0;
  local_4c = 1;
  local_40 = (int *)0x0;
  local_3c = '\x01';
  local_50 = 0;
  local_54 = 0;
  local_5c = 1;
  local_60 = piVar3;
  if (&local_48 != &local_60) {
    local_60 = (int *)0x0;
    local_48 = piVar3;
  }
  piVar3 = local_60;
  local_44 = '\x01';
  if (local_60 != (int *)0x0) {
    (**(code **)*local_60)(local_60);
    piVar6 = (int *)piVar3[1];
    (**(code **)(*piVar6 + 0xc))(piVar6,piVar3);
  }
  cVar1 = local_3c;
  _local_5c = CONCAT31(uStack_5b,1);
  local_60 = piVar5;
  if (&local_40 != &local_60) {
    local_60 = local_40;
    local_3c = '\x01';
    _local_5c = CONCAT31(uStack_5b,cVar1);
    local_40 = piVar5;
  }
  piVar3 = local_60;
  if ((local_60 != (int *)0x0) && (local_5c != '\0')) {
    (**(code **)*local_60)(local_60);
    piVar5 = (int *)piVar3[1];
    (**(code **)(*piVar5 + 0xc))(piVar5,piVar3);
  }
  iVar4 = fn_00544f44(&local_58,uVar2);
  piVar3 = local_40;
  if ((local_40 != (int *)0x0) && (local_3c != '\0')) {
    (**(code **)*local_40)(local_40);
    piVar5 = (int *)piVar3[1];
    (**(code **)(*piVar5 + 0xc))(piVar5,piVar3);
  }
  piVar3 = local_48;
  if ((local_48 != (int *)0x0) && (local_44 != '\0')) {
    (**(code **)*local_48)(local_48);
    piVar5 = (int *)piVar3[1];
    (**(code **)(*piVar5 + 0xc))(piVar5,piVar3);
  }
  uVar2 = param_1[1];
  uVar7 = param_1[2];
  *(undefined4 *)(iVar4 + 0x58) = *param_1;
  *(undefined4 *)(iVar4 + 0x68) = uVar2;
  *(undefined4 *)(iVar4 + 0x78) = uVar7;
  *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 0x800;
  *(undefined4 *)(iVar4 + 0x294) = uVar10;
  return iVar4;
}


