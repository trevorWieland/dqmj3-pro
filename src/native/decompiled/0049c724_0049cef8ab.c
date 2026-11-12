#include "0049c724_0049cef8ab.h"



void fn_0049c9b8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int local_48;
  int iStack_44;
  undefined4 *puStack_40;
  undefined4 local_3c;
  undefined1 auStack_38 [28];
  
  fn_00456400(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x318);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x31c);
  iVar1 = fn_006d1a3c(*(undefined4 *)(param_1 + 0x198));
  fn_004b4c44(auStack_38);
  fn_00495020(iVar1,auStack_38);
  local_48 = *(int *)(iVar1 + 8) + 0x10;
  iStack_44 = param_1 + 0x19c;
  if (DAT_008b68a8 == 0) {
    iVar1 = fn_004ab660(iVar1 + 0x10,param_1 + 0xe8,param_1 + 0x160,auStack_38);
    fn_00786480(auStack_38);
  }
  else {
    puStack_40 = &DAT_008b68a4;
    iVar1 = fn_004ab7f0(iVar1 + 0x10);
    fn_00786480(auStack_38);
  }
  if (iVar1 == 0) {
    local_3c = 0x8001000d;
    uVar3 = fn_004b8d4c(&local_48,&local_3c);
    fn_0049c724(param_1,uVar3);
    return;
  }
  fn_004b2f0c(param_1);
  puVar2 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_00853500;
    puVar2[1] = fn_0049cb00;
    puVar2[2] = 0;
    puVar2[3] = &DAT_0049caf8;
  }
  fn_00479b1c(param_1,param_1 + 0xe8,puVar2);
  return;
}



void fn_0049cb00(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined *local_28;
  code *pcStack_24;
  undefined4 uStack_20;
  undefined *local_1c;
  
  iVar1 = fn_006d19d4(*(undefined4 *)(param_1 + 0x198));
  if (*(int *)(iVar1 + 0x1c) != 2) {
    if (*(char *)(param_1 + 0xf8) != '\x02') {
      local_48 = *(uint *)(param_1 + 0x120);
      local_44 = *(undefined4 *)(param_1 + 0x124);
      uStack_40 = *(undefined4 *)(param_1 + 0x128);
      fn_0049c724(param_1,&local_48);
      return;
    }
    local_48 = local_48 & 0xffffff00;
    iVar1 = fn_006d3b54(param_1 + 0x160,&local_48);
    if (iVar1 != 0) {
      local_44 = *(undefined4 *)(param_1 + 0x160);
      uStack_40 = *(undefined4 *)(param_1 + 0x164);
      uStack_3c = *(undefined4 *)(param_1 + 0x168);
      fn_0049c724(param_1,&local_44);
      return;
    }
  }
  fn_004554c4(param_1 + 0x19c,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x198) + 0x78) + 0x10));
  fn_00455474(param_1 + 0x19c);
  if (*(char *)(*(int *)(param_1 + 0x198) + 0xac) != '\0') {
    iVar1 = fn_004b7748();
    piVar2 = (int *)(iVar1 + 0x50);
    (**(code **)(*piVar2 + 8))();
    for (piVar6 = (int *)**(int **)(iVar1 + 0x88); piVar6 != (int *)*(int *)(iVar1 + 0x88);
        piVar6 = (int *)*piVar6) {
      uVar3 = fn_006d0c04(piVar6 + 2);
      if ((uVar3 & 2) == 0) {
        uVar4 = fn_006d0ae4(param_1 + 0x19c);
        fn_004554c4(piVar6 + 2,uVar4);
      }
      fn_006d0734(auStack_30,piVar6 + 2);
      fn_006d0734(auStack_38,param_1 + 0x19c);
      iVar5 = fn_004b626c(local_2c,local_34);
      fn_00170f54(auStack_38);
      fn_00170f54(auStack_30);
      if (iVar5 != 0) {
        uVar4 = fn_006d0c04(param_1 + 0x19c);
        fn_00455c28(piVar6 + 2,uVar4);
        uVar4 = fn_006d0ae4(param_1 + 0x19c);
        fn_004554c4(piVar6 + 2,uVar4);
        uVar4 = fn_006d0978(piVar6 + 2);
        fn_00455344(param_1 + 0x19c,uVar4);
      }
    }
    uVar4 = fn_004b7748();
    fn_004b755c(uVar4,param_1 + 0x19c);
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  fn_00455cf0(*(int *)(param_1 + 0x198) + 0xb0,param_1 + 0x19c);
  (**(code **)(**(int **)(param_1 + 0x198) + 0xc))();
  pcStack_24 = fn_0049d5e4;
  uStack_20 = 0;
  local_1c = &DAT_0049cd40;
  local_28 = &DAT_00853500;
  fn_00479c98(param_1,&local_28);
  return;
}


