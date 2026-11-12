#include "0060e9c0_00612500a.h"



undefined1 * fn_0060e9c0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *local_4e8;
  undefined4 local_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 local_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 local_4a4;
  undefined4 uStack_4a0;
  undefined4 local_49c;
  undefined4 uStack_498;
  undefined1 auStack_494 [960];
  undefined1 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [30];
  undefined1 local_92;
  undefined1 auStack_90 [96];
  undefined4 local_30;
  
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar1 == &DAT_00898ce0) goto LAB_0060ea0c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0060ea0c:
  local_30 = 0;
  if (*(char *)((int)puVar3 + 0xd) != '\0') {
    local_30 = 2;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar1 == &DAT_00898ce0) goto LAB_0060ea54;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0060ea54:
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    uVar5 = 1;
  }
  else {
    uVar5 = 3;
  }
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar3 == &DAT_00898ce0) goto LAB_0060eaa0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0060eaa0:
  local_4e8 = &DAT_00858808;
  local_4e4 = puVar1[6];
  uStack_4e0 = puVar1[7];
  uStack_4dc = puVar1[8];
  uStack_4d8 = puVar1[9];
  uStack_4d4 = puVar1[10];
  uStack_4d0 = puVar1[0xb];
  uStack_4cc = puVar1[0xc];
  uStack_4c8 = puVar1[0xd];
  local_4c4 = puVar1[0xe];
  uStack_4c0 = puVar1[0xf];
  uStack_4bc = puVar1[0x10];
  uStack_4b8 = puVar1[0x11];
  uStack_4b4 = puVar1[0x12];
  uStack_4b0 = puVar1[0x13];
  uStack_4ac = puVar1[0x14];
  uStack_4a8 = puVar1[0x15];
  local_4a4 = puVar1[0x16];
  uStack_4a0 = puVar1[0x17];
  local_49c = puVar1[0x18];
  uStack_498 = puVar1[0x19];
  fn_0017821c(auStack_494,puVar1 + 0x1a,0x3c0);
  local_d4 = *(undefined1 *)(puVar1 + 0x10a);
  local_d0 = puVar1[0x10b];
  local_cc = puVar1[0x10c];
  local_c8 = puVar1[0x10d];
  uStack_c4 = puVar1[0x10e];
  uStack_c0 = puVar1[0x10f];
  uStack_bc = puVar1[0x110];
  uStack_b8 = puVar1[0x111];
  uStack_b4 = puVar1[0x112];
  fn_0017821c(auStack_b0,puVar1 + 0x113,0x1e);
  local_92 = *(undefined1 *)((int)puVar1 + 0x46a);
  fn_0017821c(auStack_90,puVar1 + 0x11b,0x60);
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar1 == &DAT_00898ce0) goto LAB_0060eb84;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0060eb84:
  fn_005742e4(&local_4e8,*(undefined1 *)((int)puVar3 + 0xd));
  iVar4 = 0;
  do {
    uVar2 = fn_00144df4(*(undefined4 *)(DAT_00897804 + 0xc),iVar4);
    fn_00573f84(&local_4e8,local_30,uVar2);
    uVar2 = fn_006b8538(*(undefined4 *)(DAT_00897804 + 0xc),iVar4);
    fn_00573f84(&local_4e8,uVar5,uVar2);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  uVar5 = fn_006b846c(*(undefined4 *)(DAT_00897804 + 0xc));
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar1 == &DAT_00898ce0) goto LAB_0060ec2c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0060ec2c:
  fn_00573fc8(&local_4e8,*(undefined1 *)((int)puVar3 + 0xd),uVar5);
  uVar5 = fn_006b8600(*(undefined4 *)(DAT_00897804 + 0xc));
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar1 == &DAT_00898ce0) goto LAB_0060ec88;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0060ec88:
  fn_0057433c(&local_4e8,*(undefined1 *)((int)puVar3 + 0xd),uVar5);
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar1 == &DAT_00898ce0) goto LAB_0060eccc;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0060eccc:
  fn_0057481c(puVar3 + 5,&local_4e8);
  return (undefined1 *)&local_4e8;
}


