#include "002ea880_003467f8.h"



void fn_003467f8(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = fn_00300f74(param_2,*(undefined4 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00346824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0x30))
            (*(int **)(param_1 + 0x38),(int)((ulonglong)uVar1 >> 0x20),(int)uVar1);
  return;
}



undefined4 fn_00326868(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  wchar16 *pwStack_50;
  char *pcStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_1e;
  
  fn_005f3c48(2);
  fn_005f3aac(2);
  fn_002c330c(&pwStack_50);
  pwStack_50 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_4c = (char *)&DAT_00326b60;
  uStack_48 = 5;
  puVar8 = *(undefined4 **)(param_1 + 0x18);
  if (puVar8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar1 == &DAT_00893b10) goto LAB_003268dc;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_003268dc:
  local_44 = puVar8[2];
  uVar2 = fn_0022f750((char *)&DAT_00326b78);
  fn_00147974(&local_34,uVar2);
  local_24 = 0;
  local_23 = 1;
  puVar8 = (undefined4 *)0x0;
  uVar2 = fn_0022f750((char *)&DAT_00864ca0);
  fn_00147974(&local_28,uVar2);
  local_1e = 1;
  uVar2 = fn_002c29a0(param_1,&pwStack_50);
  fn_00689efc(param_1,0x90,0);
  fn_003272d4(param_1);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  iVar3 = fn_001560b4(*(undefined4 *)(DAT_00897804 + 8),0x333);
  if ((iVar3 == 0) && (uVar4 = fn_001759e8(*(undefined4 *)(DAT_00897804 + 8),0), 3 < uVar4)) {
    *(undefined1 *)(param_1 + 0xe8) = 1;
    puVar1 = (undefined4 *)fn_001f7510(param_1,0x48);
    if (puVar1 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar5 == &DAT_008942d0) {
          puVar8 = puVar1;
          break;
        }
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != (undefined4 *)0x0);
    }
    fn_0036c658(puVar8,0);
    uVar6 = fn_0022f584((char *)&DAT_00326b98,0);
    fn_0036c13c(puVar8,uVar6);
    fn_00689bd0(param_1,0x48,0);
  }
  if (local_28 != &DAT_008f9cf4) {
    piVar7 = local_28 + -3;
    iVar3 = *piVar7;
    if ((iVar3 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar7 = local_2c + -3;
    iVar3 = *piVar7;
    if ((iVar3 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar7 = local_30 + -3;
    iVar3 = *piVar7;
    if ((iVar3 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar7 = local_34 + -3;
    iVar3 = *piVar7;
    if ((iVar3 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  return uVar2;
}



void fn_00308790(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 auStack_40 [36];
  
  puVar4 = *(undefined4 **)(param_1 + 0x98);
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar2 == &DAT_00895ad8) goto LAB_003087e0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003087e0:
  uVar5 = (uint)*(short *)(puVar4 + 7);
  if ((int)*(short *)(param_1 + 0x9c) != uVar5 || param_2 != 0) {
    if (uVar5 == 0) {
      uVar3 = fn_0022f584((char *)&DAT_0030877c,0);
      fn_00385b60(param_1,uVar3);
    }
    else {
      uVar3 = fn_006a7ae8(uVar5 & 0xff);
      fn_00230fe4(auStack_40,0x10,uVar3,uVar5,0);
      fn_00385b60(param_1,auStack_40);
    }
  }
  puVar4 = *(undefined4 **)(param_1 + 0x98);
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar2 == &DAT_00895ad8) goto LAB_00308880;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00308880:
  uVar1 = *(ushort *)(puVar4 + 7);
  if (*(ushort *)(param_1 + 0x9c) == uVar1 && param_2 == 0) {
    return;
  }
  if (uVar1 == 0) {
    uVar3 = fn_0022f584((char *)&DAT_0030877c,0);
    fn_00190d50(*(undefined4 *)(param_1 + 0xa0),uVar3);
    return;
  }
  uVar3 = fn_0028945c(DAT_00897800,uVar1 & 0xff);
  fn_00190d50(*(undefined4 *)(param_1 + 0xa0),uVar3);
  return;
}



void fn_003086c8(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x98);
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar2 == &DAT_00895ad8) goto LAB_00308710;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00308710:
  uVar1 = *(ushort *)(puVar4 + 7);
  if (*(ushort *)(param_1 + 0x9c) == uVar1 && param_2 == 0) {
    return;
  }
  if (uVar1 == 0) {
    uVar3 = fn_0022f584((char *)&DAT_0030877c,0);
    fn_00190d50(*(undefined4 *)(param_1 + 0xa0),uVar3);
    return;
  }
  uVar3 = fn_0028945c(DAT_00897800,uVar1 & 0xff);
  fn_00190d50(*(undefined4 *)(param_1 + 0xa0),uVar3);
  return;
}



undefined4 fn_002ea880(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined1 auStack_90 [128];
  
  piVar4 = (int *)(param_1 + 0x1c);
  piVar3 = (int *)*piVar4;
  *piVar3 = *piVar3 + 1;
  iVar1 = *piVar4;
  bVar5 = *(int *)(param_1 + 0x20) - iVar1 >> 3 != 0;
  if (bVar5) {
    iVar1 = *(int *)(iVar1 + 4);
  }
  if (!bVar5 || iVar1 == 0) {
    uVar2 = fn_001caca8(param_2);
    fn_00101a50(auStack_90,0x80,L"rom:/data/Model/%s.bch",uVar2);
    uVar2 = fn_001287b4();
    uVar2 = fn_0011c184(auStack_90,uVar2,0x80,5);
    iVar1 = fn_00145ac0();
    if (iVar1 != 0) {
      *(undefined4 *)(*piVar4 + 4) = uVar2;
    }
    uVar2 = fn_00145ac0(piVar3[1]);
    fn_00179dc0(param_1,0,uVar2);
  }
  return 0;
}


