#include "003df140_003e09d0a.h"



void fn_003df5cc(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x4c);
  bVar1 = *(byte *)(*(int *)(param_1 + 0x98) + 0x24);
  uVar2 = fn_00246858(*(undefined1 *)(*(int *)(param_1 + 0x98) + 0x26),
                       (int)*(char *)(*(int *)(param_1 + 0x98) + 0x28));
  if (uVar2 <= bVar1) {
    uVar3 = fn_0022f584((char *)&DAT_003df6bc,0);
    fn_00190d50(*(undefined4 *)(param_1 + 0x168),uVar3);
    return;
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  fn_0018a618(&local_24,9,8,&DAT_003df6b4,*(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec));
  if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != '\0') {
    fn_0022ef60(&local_24,6);
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0x168),&local_24);
  return;
}



undefined4 fn_003df43c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  puVar4 = &local_28;
  *(undefined2 *)(param_1 + 0xb4) = *(undefined2 *)(*(int *)(param_1 + 0x98) + 0x1c);
  iVar2 = *(int *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(iVar2 + 0xac);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(iVar2 + 0xb0);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(iVar2 + 0xb4);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(iVar2 + 0xb8);
  *(undefined2 *)(param_1 + 0x120) = *(undefined2 *)(iVar2 + 0xbc);
  *(undefined1 *)(param_1 + 0xb6) = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x1e);
  *(undefined1 *)(param_1 + 0xb7) = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x26);
  *(undefined1 *)(param_1 + 0x123) = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x45a);
  *(undefined1 *)(param_1 + 0x124) = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x45b);
  fn_0022cdb4(param_1,*(short *)(param_1 + 0xb4) != 0);
  if (*(short *)(param_1 + 0xb4) != 0) {
    fn_002b427c(*(undefined4 *)(param_1 + 0x128));
    fn_002b4348(*(undefined4 *)(param_1 + 0x128),(int)*(char *)(param_1 + 0xb6));
    *(bool *)(*(int *)(param_1 + 0x128) + 0x3d) = *(char *)(param_1 + 0xb7) == 'd';
    *(undefined1 *)(*(int *)(param_1 + 0x128) + 0x43) =
         *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x28);
    *(undefined1 *)(*(int *)(param_1 + 0x128) + 0x45) =
         *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x45b);
    iVar2 = *(int *)(param_1 + 0x128);
    uVar1 = fn_001f84ac(param_1 + 0x110);
    *(undefined1 *)(iVar2 + 0x3f) = uVar1;
    *(undefined1 *)(*(int *)(param_1 + 0x128) + 0x41) = *(undefined1 *)(param_1 + 0x123);
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) == '\0') {
      puVar4 = (undefined4 *)fn_0015b064((int)*(short *)(param_1 + 0xb4));
      uVar3 = *(undefined4 *)(param_1 + 0x170);
    }
    else {
      fn_0022ef60(&local_28,9);
      uVar3 = *(undefined4 *)(param_1 + 0x170);
    }
    fn_00190d50(uVar3,puVar4);
  }
  return 0;
}



undefined4 fn_003df140(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_38 [32];
  
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_0089559c,DAT_008955a0,DAT_008955a4);
  iVar1 = fn_001853ec(param_1[0x19],DAT_008955a8,param_1[0x1b]);
  param_1[0x2a] = iVar1;
  iVar1 = fn_001853ec(param_1[0x19],DAT_008955ac,param_1[0x1b]);
  param_1[0x2b] = iVar1;
  iVar1 = fn_001853ec(param_1[0x19],DAT_008955b0,param_1[0x1b]);
  param_1[0x2c] = iVar1;
  iVar1 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  piVar7 = *(int **)(iVar1 + 0x10);
  uVar2 = fn_00689220(iVar1,(char *)&DAT_003df424);
  iVar1 = fn_00145b00(0xd4,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar1 != 0) {
    piVar3 = (int *)fn_002b44c0(iVar1,param_1[1],uVar2,1,param_1[0x12]);
  }
  piVar5 = (int *)param_1[0x4a];
  if (piVar5 != piVar3) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[0x4a] = (int)piVar3;
  }
  (**(code **)(*(int *)param_1[0x4a] + 0x10))();
  iVar1 = fn_0068897c(piVar7,DAT_008955b4);
  param_1[0x4b] = iVar1;
  iVar1 = fn_0068897c(piVar7,DAT_008955b8);
  param_1[0x4c] = iVar1;
  iVar1 = fn_0068897c(piVar7,DAT_008955bc);
  param_1[0x4d] = iVar1;
  iVar1 = fn_0068897c(piVar7,DAT_008955c0);
  param_1[0x4e] = iVar1;
  iVar1 = fn_0068897c(piVar7,DAT_008955c4);
  param_1[0x4f] = iVar1;
  iVar1 = fn_0068897c(piVar7,DAT_008955c8);
  param_1[0x50] = iVar1;
  iVar1 = fn_0068897c(piVar7,DAT_008955cc);
  param_1[0x51] = iVar1;
  iVar1 = fn_0068897c(piVar7,DAT_008955d0);
  param_1[0x52] = iVar1;
  iVar1 = fn_0068897c(piVar7,DAT_008955d4);
  param_1[0x53] = iVar1;
  iVar1 = fn_0068897c(piVar7,DAT_008955d8);
  param_1[0x54] = iVar1;
  iVar1 = fn_0068897c(piVar7,DAT_008955dc);
  param_1[0x55] = iVar1;
  iVar1 = fn_0068897c(piVar7,DAT_008955e0);
  param_1[0x56] = iVar1;
  iVar1 = fn_0068897c(piVar7,DAT_008955e4);
  param_1[0x57] = iVar1;
  iVar1 = fn_0068897c(piVar7,DAT_008955e8);
  param_1[0x58] = iVar1;
  iVar1 = fn_0068897c(piVar7,DAT_008955ec);
  param_1[0x59] = iVar1;
  iVar1 = fn_0068897c(piVar7,DAT_008955f0);
  param_1[0x5a] = iVar1;
  iVar1 = fn_0068897c(piVar7,DAT_008955f4);
  param_1[0x5b] = iVar1;
  iVar1 = fn_0068897c(piVar7,DAT_008955f8);
  param_1[0x5c] = iVar1;
  iVar1 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_003df430,1);
  iVar6 = 0;
  param_1[0x5d] = iVar1;
  do {
    fn_0017d96c(auStack_38,0x20,0x1f,DAT_008955fc,iVar6);
    iVar1 = param_1[0x5e];
    uVar2 = fn_0068897c(piVar7,auStack_38);
    *(undefined4 *)(iVar1 + iVar6 * 4) = uVar2;
    fn_0017d96c(auStack_38,0x20,0x1f,DAT_00895600,iVar6);
    iVar1 = param_1[0x61];
    uVar2 = fn_0068897c(piVar7,auStack_38);
    *(undefined4 *)(iVar1 + iVar6 * 4) = uVar2;
    fn_0017d96c(auStack_38,0x20,0x1f,DAT_00895604,iVar6 + 2);
    iVar4 = param_1[100];
    iVar1 = iVar6 * 4;
    uVar2 = fn_0068967c(piVar7,auStack_38);
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar4 + iVar1) = uVar2;
  } while (iVar6 < 7);
  fn_003e0184(param_1);
  return 1;
}


