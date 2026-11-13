#include "single_005f3dc8_r.h"


extern undefined4 _local_4c;

int * fn_005f3dc8(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *local_50;
  char local_4c;
  undefined3 uStack_4b;
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  char local_34;
  int *local_30;
  char local_2c;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  fn_00118290();
  piVar2 = (int *)fn_0054460c();
  iVar3 = (**(code **)(*piVar2 + 0x10))(piVar2);
  uVar7 = 0x3f800000;
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0x3f800000;
  uVar8 = 0x447a0000;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  if (param_2 == 0) {
    fn_00118290();
    piVar4 = (int *)fn_00544288();
    *(undefined1 *)(piVar4 + 2) = 1;
    iVar3 = (**(code **)(*piVar4 + 0x10))(piVar4);
    *(undefined4 *)(iVar3 + 4) = uVar7;
    *(undefined4 *)(iVar3 + 8) = uVar8;
  }
  else {
    fn_00118290();
    piVar4 = (int *)fn_005448f0();
    *(undefined1 *)(piVar4 + 2) = 1;
    iVar3 = (**(code **)(*piVar4 + 0x10))(piVar4);
    uVar6 = 0x42173333;
    *(undefined4 *)(iVar3 + 4) = uVar7;
    *(undefined4 *)(iVar3 + 8) = uVar8;
    fn_0017fe34();
    *(undefined4 *)(iVar3 + 0x10) = uVar6;
    *(undefined4 *)(iVar3 + 0xc) = 0x3fd55555;
  }
  uVar7 = fn_00118290();
  local_48 = 1;
  local_47 = 1;
  local_38 = (int *)0x0;
  local_3c = 1;
  local_30 = (int *)0x0;
  local_2c = '\x01';
  local_40 = 0;
  local_44 = 0;
  local_4c = 1;
  local_50 = piVar2;
  if (&local_38 != &local_50) {
    local_50 = (int *)0x0;
    local_38 = piVar2;
  }
  piVar2 = local_50;
  local_34 = '\x01';
  if (local_50 != (int *)0x0) {
    (**(code **)*local_50)(local_50);
    piVar5 = (int *)piVar2[1];
    (**(code **)(*piVar5 + 0xc))(piVar5,piVar2);
  }
  cVar1 = local_2c;
  _local_4c = CONCAT31(uStack_4b,1);
  local_50 = piVar4;
  if (&local_30 != &local_50) {
    local_50 = local_30;
    local_2c = '\x01';
    _local_4c = CONCAT31(uStack_4b,cVar1);
    local_30 = piVar4;
  }
  piVar2 = local_50;
  if ((local_50 != (int *)0x0) && (local_4c != '\0')) {
    (**(code **)*local_50)(local_50);
    piVar4 = (int *)piVar2[1];
    (**(code **)(*piVar4 + 0xc))(piVar4,piVar2);
  }
  iVar3 = fn_00544f44(&local_48,uVar7);
  piVar2 = local_30;
  *param_1 = iVar3;
  if ((local_30 != (int *)0x0) && (local_2c != '\0')) {
    (**(code **)*local_30)(local_30);
    piVar4 = (int *)piVar2[1];
    (**(code **)(*piVar4 + 0xc))(piVar4,piVar2);
  }
  piVar2 = local_38;
  if ((local_38 != (int *)0x0) && (local_34 != '\0')) {
    (**(code **)*local_38)(local_38);
    piVar4 = (int *)piVar2[1];
    (**(code **)(*piVar4 + 0xc))(piVar4,piVar2);
  }
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + 0x58) = 0x40e00000;
  *(undefined4 *)(iVar3 + 0x68) = 0x40600000;
  *(undefined4 *)(iVar3 + 0x78) = 0xc0a00000;
  *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x800;
  return param_1;
}


