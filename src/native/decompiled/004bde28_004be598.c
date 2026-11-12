#include "004bde28_004be598.h"



void fn_004be598(int param_1,int param_2)

{
  undefined4 local_10;
  
  *(undefined1 *)(param_2 + 4) = 0;
  local_10 = 0;
  if ((*(char *)(param_1 + 0x3b) == '\0') &&
     (fn_0074a4c8(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0')) {
    fn_0074a528(param_1,&local_10);
  }
  return;
}



void fn_004be524(int param_1,int param_2)

{
  char *pcVar1;
  char local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0x3b) == '\0') {
    local_14[0] = 0;
    local_18[0] = *(char *)(param_2 + 4);
    pcVar1 = local_14;
    if (local_18[0] == '\0') {
      pcVar1 = local_18;
    }
    fn_0015ef4c(param_1,pcVar1,1);
    local_10 = 0;
    fn_0015ef4c(param_1,&local_10,4);
  }
  return;
}



void fn_004be26c(void)

{
  int iVar1;
  
  iVar1 = fn_004be29c();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004be28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



int fn_004be29c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  int local_28;
  int local_24;
  undefined1 auStack_20 [8];
  
  *param_1 = &DAT_00855dc4;
  fn_0046d014(param_1[3]);
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  while (param_1[0x47] != 0) {
    fn_004bd8d0(param_1,param_1[0x44]);
  }
  piVar7 = (int *)param_1[0x13];
  (**(code **)(param_1[5] + 8))();
  iVar2 = fn_006d0df8(param_1 + 4,piVar7);
  *(undefined1 *)(*(int *)param_1[0xf] + iVar2) = 0;
  iVar2 = fn_006d0df8(param_1 + 4,piVar7);
  *(undefined4 *)(param_1[0x10] + iVar2 * 4) = 0;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  (**(code **)(param_1[5] + 0xc))(param_1 + 5);
  iVar3 = fn_00466f1c(param_1 + 0x4a);
  *(undefined **)(iVar3 + -0x1c) = &DAT_00855af4;
  iVar6 = *(int *)(iVar3 + -0x10);
  iVar1 = *(int *)(iVar3 + -0x18);
  iVar2 = local_24;
  while (local_24 = iVar1, local_24 != iVar6) {
    fn_00754688(&local_28,iVar3 + -0x1c,&local_24);
    iVar1 = local_28;
    iVar2 = local_24;
  }
  local_24 = *(int *)(iVar3 + -0x28);
  piVar7 = (int *)(iVar3 + -0x38);
  if (local_24 != 0) {
    local_28 = *(int *)(local_24 + 8);
    fn_00769038(auStack_20,piVar7,&local_28,&local_24);
    iVar2 = *(int *)(iVar3 + -0x28);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar3 + -0x34);
    *(int *)(iVar3 + -0x34) = iVar2;
    piVar4 = (int *)*piVar7;
    while (iVar2 = local_24, piVar4 != (int *)0x0) {
      *piVar7 = *piVar4;
      if (piVar4[2] != 0) {
        pcVar5 = *(code **)(piVar4[2] + -8);
        if (pcVar5 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar5)();
        }
      }
      if (piVar4 != (int *)0x0) {
        if ((code *)piVar4[-2] == (code *)0x0) {
          fn_0030233c(piVar4 + -2);
        }
        else {
          (*(code *)piVar4[-2])();
        }
      }
      piVar4 = (int *)*piVar7;
    }
  }
  local_24 = iVar2;
  *(undefined **)(iVar3 + -0x4c) = &DAT_00855af4;
  iVar6 = *(int *)(iVar3 + -0x40);
  iVar1 = *(int *)(iVar3 + -0x48);
  iVar2 = local_24;
  while (local_24 = iVar1, local_24 != iVar6) {
    fn_00754688(&local_28,iVar3 + -0x4c,&local_24);
    iVar1 = local_28;
    iVar2 = local_24;
  }
  *(undefined4 *)(iVar3 + -0x60) = &DAT_00855af4;
  iVar6 = *(int *)(iVar3 + -0x54);
  iVar1 = *(int *)(iVar3 + -0x5c);
  while (local_24 = iVar1, local_24 != iVar6) {
    fn_00754688(&local_28,(undefined4 *)(iVar3 + -0x60),&local_24);
    iVar1 = local_28;
    iVar2 = local_24;
  }
  *(undefined ***)(iVar3 + -0x88) = &PTR_LAB_008533fc;
  *(undefined **)(iVar3 + -0x84) = &DAT_0085319c;
  *(undefined ***)(iVar3 + -0xb0) = &PTR_LAB_008533fc;
  *(undefined **)(iVar3 + -0xac) = &DAT_0085319c;
  *(undefined ***)(iVar3 + -0xd8) = &PTR_LAB_008533fc;
  *(undefined **)(iVar3 + -0xd4) = &DAT_0085319c;
  local_24 = iVar2;
  iVar2 = fn_0045aaf4(iVar3 + -0x118);
  return iVar2 + -0x10;
}



int fn_004be01c(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  *param_1 = &DAT_00855dc4;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  iVar1 = fn_0045aa18(param_1 + 4,1,param_3,param_4,param_4);
  iVar1 = fn_004745d8(iVar1 + 0x40,param_2);
  iVar1 = fn_004745d8(iVar1 + 0x28,0x400);
  iVar1 = fn_004745d8(iVar1 + 0x28,0x400);
  piVar8 = (int *)(iVar1 + 0x50);
  *(undefined **)(iVar1 + 0x28) = &DAT_00855af4;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined **)(iVar1 + 0x3c) = &DAT_00855af4;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *piVar8 = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined1 *)(iVar1 + 0x68) = 1;
  *(undefined1 *)(iVar1 + 0x69) = 1;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  piVar2 = (int *)fn_0015ece0(0xc);
  iVar3 = fn_0015ece0(0x400);
  piVar2[2] = iVar3;
  *piVar2 = *piVar8;
  piVar2[1] = 0x20;
  *piVar8 = (int)piVar2;
  iVar3 = piVar2[2];
  *(int *)(iVar1 + 0x58) = iVar3;
  *(int *)(iVar1 + 0x5c) = iVar3 + 0x400;
  puVar4 = *(undefined1 **)(iVar1 + 0x58);
  *(undefined1 **)(iVar1 + 0x58) = puVar4 + 0x20;
  *(undefined4 *)(puVar4 + 8) = 0;
  *(undefined4 *)(puVar4 + 0xc) = 0;
  *puVar4 = 0;
  *(undefined1 **)(iVar1 + 0x60) = puVar4;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(int *)(*(int *)(iVar1 + 0x60) + 8) = *(int *)(iVar1 + 0x60);
  *(int *)(*(int *)(iVar1 + 0x60) + 0xc) = *(int *)(iVar1 + 0x60);
  *(undefined **)(iVar1 + 0x6c) = &DAT_00855af4;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  iVar1 = fn_00466dcc(iVar1 + 0x88,L"JobProcessing",0,&DAT_004be23c);
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  *(undefined **)(iVar1 + 0x84) = &DAT_0085450c;
  *(undefined4 *)(iVar1 + 0x88) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  *(undefined4 *)(iVar1 + 0x90) = 1;
  *(undefined4 *)(iVar1 + 0x94) = 0;
  *(undefined4 *)(iVar1 + 0x98) = 0;
  *(undefined4 *)(iVar1 + 0x9c) = 0;
  *(undefined1 *)(iVar1 + 0xa0) = 0;
  *(undefined1 *)(iVar1 + -8) = 0;
  uVar5 = fn_0045a900(iVar1 + -0x118);
  *(undefined4 *)(iVar1 + -0xdc) = uVar5;
  if (param_3 == 0) {
    puVar6 = (undefined4 *)fn_0015ece0(0x40);
    puVar7 = (undefined4 *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = &DAT_00852fcc;
      iVar3 = fn_004745d8(puVar6 + 1,0x20000000);
      puVar7 = (undefined4 *)(iVar3 + -4);
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x34) = 0;
      *(undefined1 *)(iVar3 + 0x28) = 2;
      *puVar7 = &DAT_00855da8;
      *(undefined4 *)(iVar3 + 0x38) = 0;
    }
    *(undefined4 **)(iVar1 + -0x11c) = puVar7;
  }
  else {
    *(int *)(iVar1 + -0x11c) = param_3;
  }
  *(int *)(*(int *)(iVar1 + -0x11c) + 0x3c) = iVar1 + -0x128;
  if (DAT_008b637e == '\0') {
    uVar5 = 0;
  }
  else {
    puVar7 = (undefined4 *)fn_001775e8(DAT_008b63d8);
    uVar5 = *puVar7;
  }
  *(undefined4 *)(iVar1 + 0x80) = uVar5;
  return iVar1 + -0x128;
}



void fn_004bde28(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int local_28;
  undefined1 auStack_20 [8];
  int iStack_18;
  int local_14;
  int iStack_10;
  
  cVar1 = *(char *)(param_2 + 0x22);
  iStack_18 = param_1;
  local_14 = param_2;
  iStack_10 = param_3;
  if (cVar1 == '\0') {
    fn_004b301c(param_2,3);
  }
  else {
    if (cVar1 == '\x01') {
      fn_0013d0fc(&local_38);
      uVar2 = *(uint *)(local_14 + 0x24);
      if ((int)uVar2 < 0) {
        iStack_2c = local_34 - (((int)-uVar2 >> 0x1f) + (uint)(local_38 < -uVar2));
      }
      else {
        iStack_2c = local_34 + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar2,local_38);
      }
      local_30 = local_38 + uVar2;
      local_28 = local_14;
      fn_0079f0e0(auStack_20,param_1 + 0xf0,&local_30);
      goto LAB_004bdff4;
    }
    if (cVar1 == '\x02') {
      if (param_3 == 0) {
        if (*(int *)(param_1 + 0xe0) == *(int *)(param_1 + 0xe8)) {
          *(int *)(param_1 + 0xe0) = param_2;
        }
        else {
          *(int *)(*(int *)(param_1 + 0xe4) + 0xc) = param_2;
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0xe4);
        }
        *(int *)(param_1 + 0xe4) = param_2;
      }
      else if (*(int *)(param_1 + 0xe0) == *(int *)(param_1 + 0xe8)) {
        *(int *)(param_1 + 0xe0) = param_2;
        *(int *)(param_1 + 0xe4) = param_2;
      }
      else {
        *(int *)(param_2 + 0xc) = *(int *)(param_1 + 0xe0);
        *(int *)(*(int *)(param_1 + 0xe0) + 0x10) = param_2;
        *(int *)(param_1 + 0xe0) = param_2;
      }
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
      goto LAB_004bdff4;
    }
    if (cVar1 != '\x03') goto LAB_004bdff4;
  }
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0xcc) == *(int *)(param_1 + 0xd4)) {
      *(int *)(param_1 + 0xcc) = local_14;
    }
    else {
      *(int *)(*(int *)(param_1 + 0xd0) + 0xc) = local_14;
      *(undefined4 *)(local_14 + 0x10) = *(undefined4 *)(param_1 + 0xd0);
    }
    *(int *)(param_1 + 0xd0) = local_14;
  }
  else if (*(int *)(param_1 + 0xcc) == *(int *)(param_1 + 0xd4)) {
    *(int *)(param_1 + 0xcc) = local_14;
    *(int *)(param_1 + 0xd0) = local_14;
  }
  else {
    *(int *)(local_14 + 0xc) = *(int *)(param_1 + 0xcc);
    *(int *)(*(int *)(param_1 + 0xcc) + 0x10) = local_14;
    *(int *)(param_1 + 0xcc) = local_14;
  }
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
LAB_004bdff4:
  iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + 4);
  iVar3 = fn_006d0df8(iVar4);
  *(undefined1 *)(**(int **)(iVar4 + 0x2c) + iVar3) = 1;
  return;
}


