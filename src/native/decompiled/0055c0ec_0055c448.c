#include "0055c0ec_0055c448.h"



void fn_0055c448(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = fn_00172e2c();
  fn_00170704(iVar1 + 0x2c);
  uVar5 = 0;
  do {
    iVar4 = iVar1 + (uVar5 & 0xff) * 0xc;
    piVar3 = (int *)*(int *)(iVar4 + 4);
    while (piVar2 = piVar3, piVar2 != (int *)(iVar4 + 4)) {
      piVar3 = (int *)*piVar2;
      if (piVar2[5] == param_1) {
        fn_00150c1c(iVar4);
        *(undefined1 *)(piVar2 + 4) = 4;
        fn_0015dfc0(piVar2 + 2);
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  fn_001707b4(iVar1 + 0x2c);
  return;
}



void fn_0055c3dc(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(param_1 + 0x88);
  if (piVar2 != (int *)(param_1 + 0x88)) {
    do {
      piVar1 = piVar2 + -0x14;
      piVar3 = (int *)*piVar2;
      if ((char)piVar2[-0xf] != '\x03') {
        return;
      }
      fn_0017d90c(param_1 + 0x84,piVar2);
      if (piVar1 != (int *)0x0) {
        (**(code **)*piVar1)(piVar1);
        fn_0017f108(param_1 + 0x90,piVar1);
      }
      piVar2 = piVar3;
    } while (piVar3 != (int *)(param_1 + 0x88));
  }
  return;
}



undefined4 fn_0055c278(int param_1,int param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  byte local_34;
  undefined2 local_33 [3];
  int iStack_2c;
  int local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  puVar2 = (uint *)fn_006e34d4(*(undefined4 *)(param_2 + 4));
  uVar6 = *puVar2;
  uVar5 = 0;
  bVar8 = uVar6 == 4;
  if (uVar6 < 5) {
    bVar8 = uVar6 == 0;
  }
  else {
    uVar6 = 4;
  }
  if (!bVar8) {
    do {
      local_38 = 0;
      local_37 = 0;
      local_36 = 0;
      local_35 = 0;
      local_34 = 0;
      local_33[0] = 0;
      iVar3 = fn_006e4008(local_28,&local_38,uVar5);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = uVar5 * 0xd;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar3 + 0x34) = local_38;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar3 + 0x35) = local_37;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar3 + 0x36) = local_36;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar3 + 0x37) = local_35;
      *(byte *)(*(int *)(param_1 + 0x18) + iVar3 + 0x3e) = local_34;
      iVar4 = 0;
      if (local_34 != 0) {
        do {
          iVar7 = iVar4 + 0x3f;
          puVar1 = (undefined1 *)((int)local_33 + iVar4);
          iVar4 = iVar4 + 1;
          *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar3 + iVar7) = *puVar1;
        } while (iVar4 < (int)(uint)local_34);
      }
      uVar5 = uVar5 + 1;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar3 + 0x38) = 0x7f;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar3 + 0x39) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar3 + 0x3a) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar3 + 0x3b) = 0x40;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar3 + 0x3c) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + iVar3 + 0x3d) = 0;
    } while (uVar5 < uVar6);
  }
  return 1;
}



void fn_0055c1e4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar2 = fn_001524d0();
  iVar3 = fn_00140e98(iVar2,0xf);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0x184);
  *(undefined1 *)(iVar3 + 4) = 0x2a;
  if (*(char *)(iVar4 + 0x1c) == '\0') {
    uVar1 = fn_0055b948(iVar4,iVar3);
  }
  else if (*(char *)(iVar4 + 0x1c) == '\x01') {
    uVar1 = fn_0055bc68(iVar4,iVar3);
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(iVar3 + 0x14) = uVar1;
  fn_001411b8(iVar2,iVar3);
  fn_001271e8(iVar2,1);
  return;
}



void fn_0055c0ec(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x27) = *(undefined1 *)(param_1 + 0x48);
  iVar4 = *(int *)(param_1 + 0x4c);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  if (*(char *)(iVar4 + 0x51) != '\0') {
    return;
  }
  iVar2 = fn_001524d0();
  iVar3 = fn_00140e98(iVar2,0x19);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0x184);
  *(undefined1 *)(iVar3 + 4) = 0x2b;
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (*(char *)(iVar4 + 0x1c) == '\0') {
    uVar1 = fn_0055c460(iVar4,iVar3,param_1 + 0x1c,uVar5,(int)uVar6,uVar7);
  }
  else if (*(char *)(iVar4 + 0x1c) == '\x01') {
    uVar1 = fn_0055cc3c(iVar4,iVar3,param_1 + 0x1c,uVar5,(int)uVar6,uVar7);
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(iVar3 + 0x14) = uVar1;
  *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
  fn_001411b8(iVar2,iVar3);
  fn_001271e8(iVar2,1);
  return;
}


