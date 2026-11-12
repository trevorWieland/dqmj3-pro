#include "0048528c_004858f0a.h"



undefined1 * fn_00485570(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int *local_88;
  int *local_84;
  int *local_80;
  int *local_7c;
  int local_78;
  int local_74;
  undefined1 auStack_70 [28];
  int local_54;
  undefined1 auStack_48 [32];
  undefined *local_28;
  code *pcStack_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  
  fn_00456a48(auStack_48,*(undefined4 *)(param_1 + 0x368),*(uint *)(param_1 + 0x364) & 0xffff);
  fn_00455394(param_1 + 0x250,auStack_48);
  iVar1 = fn_004b7748();
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x90);
  }
  fn_006d1198(auStack_70,uVar4);
  fn_0045fbe8(auStack_70);
  iVar1 = fn_006d0978(param_1 + 0x250);
  uVar5 = iVar1 + local_54 & 0xffff;
  if (0xfffe < uVar5) {
    uVar5 = 0xffff;
  }
  fn_00455344(param_1 + 0x250,uVar5);
  if (*(char *)(param_1 + 0x39c) != '\0') {
    fn_004b4c44(&local_88);
    if (local_84 == (int *)0x0) {
      if (local_80 == local_7c) {
        if (local_88 == (int *)0x0) {
          uVar5 = 0x20;
        }
        else {
          uVar2 = local_88[1];
          uVar5 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
          if (uVar5 < uVar2 + 0x20) {
            uVar5 = uVar2 + 0x20;
          }
        }
        piVar3 = (int *)fn_0015ece0(0xc);
        iVar1 = fn_0015ece0(uVar5 * 0x70);
        piVar3[2] = iVar1;
        *piVar3 = (int)local_88;
        piVar3[1] = uVar5;
        local_80 = (int *)piVar3[2];
        local_7c = local_80 + uVar5 * 0x1c;
        local_88 = piVar3;
      }
      piVar3 = local_80;
      local_80 = local_80 + 0x1c;
    }
    else {
      piVar3 = local_84;
      local_84 = (int *)*local_84;
    }
    if (piVar3 + 2 != (int *)0x0) {
      fn_0013cd7c(piVar3 + 2,param_1 + 0x1e8);
    }
    *piVar3 = local_78;
    piVar3[1] = *(int *)(local_78 + 4);
    **(undefined4 **)(local_78 + 4) = piVar3;
    *(int **)(local_78 + 4) = piVar3;
    local_74 = local_74 + 1;
    (**(code **)(**(int **)(param_1 + 0x1e4) + 0x14))
              (*(int **)(param_1 + 0x1e4),&local_88,param_1 + 0x250);
    fn_00786480(&local_88);
  }
  pcStack_24 = fn_004858f0;
  uStack_20 = 0;
  local_28 = &DAT_00853500;
  puStack_1c = &DAT_00485738;
  fn_00479c98(param_1,&local_28);
  return auStack_48;
}



void fn_0048528c(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined *local_30;
  code *local_2c;
  undefined4 uStack_28;
  undefined *local_24;
  
  switch(*(undefined4 *)(param_1 + 0x2c0)) {
  default:
    return;
  case 1:
    piVar3 = (int *)**(int **)(param_1 + 0x120);
    if (piVar3 != *(int **)(param_1 + 0x120)) {
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + -1;
      (**(code **)piVar3[2])(piVar3 + 2);
      *piVar3 = *(int *)(param_1 + 0x114);
      *(int **)(param_1 + 0x114) = piVar3;
    }
    piVar3 = (int *)**(int **)(param_1 + 0x120);
    if (piVar3 != *(int **)(param_1 + 0x120)) {
      do {
        iVar1 = fn_006d0ce0(piVar3 + 2);
        iVar2 = fn_006d0ce0(param_1 + 0x2e0);
        if (iVar1 == iVar2) break;
        piVar3 = (int *)*piVar3;
        piVar4 = (int *)**(int **)(param_1 + 0x120);
        if (piVar4 != *(int **)(param_1 + 0x120)) {
          *(int *)piVar4[1] = *piVar4;
          *(int *)(*piVar4 + 4) = piVar4[1];
          *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + -1;
          (**(code **)piVar4[2])(piVar4 + 2);
          *piVar4 = *(int *)(param_1 + 0x114);
          *(int **)(param_1 + 0x114) = piVar4;
        }
      } while (piVar3 != (int *)*(int *)(param_1 + 0x120));
    }
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    local_2c = fn_004865c0;
    break;
  case 2:
    if (2 < *(uint *)(param_1 + 0x2b8)) {
      *(undefined4 *)(param_1 + 0x2b8) = 0;
      local_2c = fn_004866b8;
      uStack_28 = 0;
      local_24 = &DAT_00485554;
      local_30 = &DAT_00853500;
      fn_00479c98(param_1,&local_30);
      return;
    }
    local_2c = fn_0048666c;
    break;
  case 3:
    if (*(uint *)(param_1 + 0x2b8) < 3) {
      local_2c = fn_004866b8;
    }
    else {
      *(undefined4 *)(param_1 + 0x2c8) = DAT_008b68a0;
      *(undefined4 *)(param_1 + 0x2b8) = 0;
      local_2c = fn_00486704;
    }
    break;
  case 4:
    if (*(uint *)(param_1 + 0x2b8) < 3) {
      local_2c = fn_00486704;
    }
    else {
      *(undefined4 *)(param_1 + 0x2b8) = 0;
      local_2c = fn_004858f0;
    }
    break;
  case 5:
    if (*(uint *)(param_1 + 0x2b8) < 3) {
      local_2c = fn_00486814;
    }
    else {
      *(undefined4 *)(param_1 + 0x2b8) = 0;
      local_2c = fn_004858f0;
    }
  }
  uStack_28 = 0;
  local_24 = &DAT_00485554;
  local_30 = &DAT_00853500;
  fn_00479c98(param_1,&local_30);
  return;
}


