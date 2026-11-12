#include "0048322c_0048389c.h"



void fn_0048389c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined4 uStack_20;
  
  fn_004842e0(param_1,1);
  iVar1 = fn_006d0810(*(int *)(param_1 + 0x1ac) + 8,&DAT_007d9e40,0);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x78);
    iVar1 = fn_006d0810(*(int *)(param_1 + 0x1ac) + 8,&DAT_007d9e40,0);
    piVar2 = *(int **)(iVar3 + 4);
    if (piVar2 != (int *)0x0) {
      if (*(int *)(iVar3 + 0x78) != 0) {
        (**(code **)(*piVar2 + 0x7c))(piVar2,*(int *)(iVar3 + 0x78),iVar3);
      }
      if (iVar1 != 0) {
        (**(code **)(**(int **)(iVar3 + 4) + 0x78))(*(int **)(iVar3 + 4),iVar1,iVar3);
      }
    }
    *(int *)(iVar3 + 0x78) = iVar1;
  }
  **(undefined4 **)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x78) = 0;
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x178));
  if (iVar1 != 0) {
    uStack_28 = 0x10001;
    puStack_24 = &DAT_007dba44;
    uStack_20 = 0x71;
    fn_00455e8c(iVar1,2,&uStack_28,1);
  }
  fn_004b301c(param_1,5);
  return;
}



void fn_00483708(int param_1)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [112];
  
  iVar2 = fn_004b7748();
  if ((iVar2 == 0) || (iVar2 = fn_004b7748(), *(int *)(iVar2 + 0x100) == 0)) {
    pcVar3 = fn_004834e8;
    uVar4 = 0;
    fn_0013d0fc(&local_90);
    *(undefined4 *)(param_1 + 0x40) = local_90;
    *(undefined4 *)(param_1 + 0x44) = uStack_8c;
    *(code **)(param_1 + 0x50) = pcVar3;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined **)(param_1 + 0x58) = &DAT_00483808;
    return;
  }
  fn_0013ce04(auStack_88);
  iVar2 = fn_00483f4c(param_1);
  if (iVar2 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x1aa);
    if (uVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x1ac);
      fn_0017695c(iVar2 + 8);
      *(ushort *)(*(int *)(iVar2 + 0xc) + 6) = uVar1 << 8 | uVar1 >> 8;
      *(undefined1 *)(iVar2 + 0x6d) = 0;
      *(undefined2 *)(param_1 + 0x1aa) = 0;
    }
    *(undefined4 *)(param_1 + 0x1ac) = **(undefined4 **)(param_1 + 0x1ac);
  }
  pcVar3 = fn_0048322c;
  uVar4 = 0;
  fn_0013d0fc(&local_90);
  *(undefined4 *)(param_1 + 0x40) = local_90;
  *(undefined4 *)(param_1 + 0x44) = uStack_8c;
  *(code **)(param_1 + 0x50) = pcVar3;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(undefined **)(param_1 + 0x58) = &DAT_00483808;
  fn_0013ce98(auStack_88);
  return;
}



void fn_00483590(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)**(int **)(param_1 + 0x1a0);
  *(int **)(param_1 + 0x1ac) = piVar1;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  if (piVar1 == *(int **)(param_1 + 0x1a0)) {
    pcVar2 = fn_004843e4;
    uVar3 = 0;
    fn_0013d0fc(&local_20);
    *(undefined4 *)(param_1 + 0x40) = local_20;
    *(undefined4 *)(param_1 + 0x44) = uStack_1c;
    *(code **)(param_1 + 0x50) = pcVar2;
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined **)(param_1 + 0x58) = &DAT_00483630;
    return;
  }
  pcVar2 = fn_0048322c;
  uVar3 = 0;
  fn_0013d0fc(&local_20);
  *(undefined4 *)(param_1 + 0x40) = local_20;
  *(undefined4 *)(param_1 + 0x44) = uStack_1c;
  *(code **)(param_1 + 0x50) = pcVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined **)(param_1 + 0x58) = &DAT_00483630;
  return;
}



void fn_00483468(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x178));
  if (((iVar1 == 0) || (iVar1 = fn_001249d0(), *(char *)(iVar1 + 0x30) != '\0')) ||
     (*(char *)(param_1 + 0x1b1) != '\0')) {
    pcVar2 = fn_00483810;
    uVar3 = 0;
    fn_0013d0fc(&local_20);
    *(undefined4 *)(param_1 + 0x40) = local_20;
    *(undefined4 *)(param_1 + 0x44) = uStack_1c;
    *(code **)(param_1 + 0x50) = pcVar2;
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined **)(param_1 + 0x58) = &DAT_004834e4;
  }
  return;
}



void fn_00483810(int param_1)

{
  int iVar1;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined4 uStack_20;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x78) + 4) + 0x40))();
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x178));
  if (iVar1 != 0) {
    uStack_28 = 0x80010004;
    puStack_24 = &DAT_007dba44;
    uStack_20 = 0x71;
    fn_00455e8c(iVar1,4,&uStack_28,1);
  }
  fn_004b301c(param_1,5);
  return;
}



void fn_0048322c(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  iVar1 = fn_004b7748();
  piVar3 = (int *)0x0;
  if (iVar1 == 0) {
    pcVar4 = fn_004834e8;
    uVar5 = 0;
    fn_0013d0fc(&local_38);
    *(undefined **)(param_1 + 0x40) = local_38;
    *(undefined4 *)(param_1 + 0x44) = local_34;
    *(code **)(param_1 + 0x50) = pcVar4;
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    *(undefined **)(param_1 + 0x58) = &DAT_0048344c;
    return;
  }
  if (*(int *)(param_1 + 0x1ac) == *(int *)(param_1 + 0x1a0)) {
    pcVar4 = fn_004843e4;
    uVar5 = 0;
    fn_0013d0fc(&local_38);
    *(undefined **)(param_1 + 0x40) = local_38;
    *(undefined4 *)(param_1 + 0x44) = local_34;
    *(code **)(param_1 + 0x50) = pcVar4;
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    *(undefined **)(param_1 + 0x58) = &DAT_0048344c;
    return;
  }
  iVar1 = fn_004b7748();
  if (*(int *)(iVar1 + 0x100) != 0) {
    iVar1 = *(int *)(param_1 + 0x1ac);
    local_38 = &DAT_008528bc;
    local_30 = 0;
    local_34 = 0x200;
    if (*(char *)(iVar1 + 0x6c) == '\0') {
      fn_0014ea80();
    }
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = fn_004b7748();
    if (iVar1 != 0) {
      piVar3 = *(int **)(iVar1 + 0x90);
    }
    iVar1 = (**(code **)(*piVar3 + 0x28))(piVar3);
    iVar1 = fn_006d1068(*(int *)(iVar1 + 0xc) + 0x78,uVar5,&local_38);
    if (((iVar1 == 0) &&
        ((*(char *)(param_1 + 0x1a8) == '\0' ||
         (uVar2 = *(uint *)(*(int *)(param_1 + 0x88) + 0x30),
         (((uVar2 & 0xff) == 0 && (uVar2 >> 8 & 0xff) == 0) && (uVar2 >> 0x10 & 0xff) == 0) &&
         uVar2 >> 0x18 == 0)))) &&
       (((DAT_008b6399 != '\0' &&
         (iVar1 = fn_006d0810(*(int *)(param_1 + 0x1ac) + 8,L"RVCID",0), iVar1 != 0)) ||
        ((uVar2 = fn_006d0810(*(int *)(param_1 + 0x1ac) + 8,L"type",0), (uVar2 & 1) != 0 &&
         (uVar2 = fn_006d0810(*(int *)(param_1 + 0x1ac) + 8,L"type",0), (uVar2 & 2) != 0)))))) {
      pcVar4 = fn_004839a8;
      uVar5 = 0;
      fn_0013d0fc(&local_38);
      *(undefined **)(param_1 + 0x40) = local_38;
      *(undefined4 *)(param_1 + 0x44) = local_34;
      *(code **)(param_1 + 0x50) = pcVar4;
      *(undefined4 *)(param_1 + 0x54) = uVar5;
      *(undefined **)(param_1 + 0x58) = &DAT_0048344c;
      return;
    }
  }
  pcVar4 = fn_00483634;
  uVar5 = 0;
  fn_0013d0fc(&local_38);
  *(undefined **)(param_1 + 0x40) = local_38;
  *(undefined4 *)(param_1 + 0x44) = local_34;
  *(code **)(param_1 + 0x50) = pcVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined **)(param_1 + 0x58) = &DAT_0048344c;
  return;
}



void fn_004834e8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_28;
  undefined *local_24;
  undefined4 local_20;
  
  fn_004842e0(param_1,0);
  if (*(char *)(param_1 + 0x1bc) == '\0') {
    iVar3 = fn_001249d0();
    iVar3 = fn_0048a058(*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(param_1 + 0x178));
    uVar2 = 0x80050002;
    uVar1 = local_28;
  }
  else {
    iVar3 = fn_001249d0();
    iVar3 = fn_0048a058(*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(param_1 + 0x178));
    uVar2 = 0x8068000b;
    uVar1 = local_28;
  }
  local_28 = uVar2;
  if (iVar3 != 0) {
    local_20 = 0x71;
    local_24 = &DAT_007dba44;
    fn_00455e8c(iVar3,3,&local_28,1);
    uVar1 = local_28;
  }
  local_28 = uVar1;
  fn_004b301c(param_1,5);
  return;
}


