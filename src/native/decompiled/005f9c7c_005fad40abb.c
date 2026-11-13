#include "005f9c7c_005fad40abb.h"



void fn_005fa4dc(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_788 [36];
  undefined1 auStack_764 [396];
  undefined4 local_5d8;
  undefined1 auStack_5d0 [8];
  undefined4 local_5c8;
  undefined1 local_5c4;
  undefined1 local_5c3;
  undefined4 local_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined1 auStack_5a0 [960];
  undefined1 auStack_1e0 [36];
  undefined1 auStack_1bc [412];
  undefined4 *local_20;
  undefined1 auStack_1c [8];
  
  fn_00168a24(&local_20,*(undefined4 *)(param_1[0x19] + 0x14),auStack_1c);
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe0);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089905c) goto LAB_005fa54c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005fa54c:
  fn_0017821c(auStack_1e0,puVar1 + 6,0x1c0);
  fn_001003e0(auStack_1bc,local_20);
  fn_0017821c(puVar1 + 6,auStack_1e0,0x1c0);
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10c))(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00899218) {
        puVar5 = puVar1;
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  fn_0017821c(auStack_788,puVar5 + 0x156,0x1b0);
  local_5d8 = puVar5[0x1c2];
  iVar3 = fn_004b9b4c(auStack_5d0,puVar5 + 0x1c4);
  *(undefined4 *)(iVar3 + 8) = puVar5[0x1c6];
  *(undefined1 *)(iVar3 + 0xc) = *(undefined1 *)(puVar5 + 0x1c7);
  *(undefined1 *)(iVar3 + 0xd) = *(undefined1 *)((int)puVar5 + 0x71d);
  uVar6 = puVar5[0x1c9];
  uVar7 = puVar5[0x1ca];
  uVar8 = puVar5[0x1cb];
  uVar9 = puVar5[0x1cc];
  uVar10 = puVar5[0x1cd];
  uVar11 = puVar5[0x1ce];
  uVar12 = puVar5[0x1cf];
  *(undefined4 *)(iVar3 + 0x10) = puVar5[0x1c8];
  *(undefined4 *)(iVar3 + 0x14) = uVar6;
  *(undefined4 *)(iVar3 + 0x18) = uVar7;
  *(undefined4 *)(iVar3 + 0x1c) = uVar8;
  *(undefined4 *)(iVar3 + 0x20) = uVar9;
  *(undefined4 *)(iVar3 + 0x24) = uVar10;
  *(undefined4 *)(iVar3 + 0x28) = uVar11;
  *(undefined4 *)(iVar3 + 0x2c) = uVar12;
  fn_0017821c(iVar3 + 0x30,puVar5 + 0x1d0,0x3c0);
  fn_001003e0(auStack_764,local_20);
  fn_0017821c(puVar5 + 0x156,auStack_788,0x1b0);
  puVar5[0x1c2] = local_5d8;
  fn_0014f510(puVar5 + 0x1c4,auStack_5d0);
  puVar5[0x1c6] = local_5c8;
  *(undefined1 *)(puVar5 + 0x1c7) = local_5c4;
  *(undefined1 *)((int)puVar5 + 0x71d) = local_5c3;
  puVar5[0x1c8] = local_5c0;
  puVar5[0x1c9] = uStack_5bc;
  puVar5[0x1ca] = uStack_5b8;
  puVar5[0x1cb] = uStack_5b4;
  puVar5[0x1cc] = uStack_5b0;
  puVar5[0x1cd] = uStack_5ac;
  puVar5[0x1ce] = uStack_5a8;
  puVar5[0x1cf] = uStack_5a4;
  fn_0017821c(puVar5 + 0x1d0,auStack_5a0,0x3c0);
  if (local_20 != &DAT_008f9cf4) {
    piVar4 = local_20 + -3;
    iVar3 = *piVar4;
    if ((iVar3 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
    }
  }
  return;
}



void fn_005fa4a8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003953b0();
  *puVar1 = &DAT_0084e2a0;
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 *)((int)puVar1 + 0x15) = 1;
  return;
}


