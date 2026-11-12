#include "003e2a98_003e371cbb.h"



void fn_003e371c(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  uint local_914;
  undefined4 auStack_910 [566];
  uint local_38 [4];
  
  puVar7 = *(undefined4 **)(param_1 + 0x18);
  if (puVar7 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar7)(puVar7);
    do {
      if (puVar1 == &DAT_00894d28) goto LAB_003e3760;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar7 = (undefined4 *)0x0;
LAB_003e3760:
  *(undefined1 *)((int)puVar7 + 0x902) = 0;
  fn_00290734(auStack_910);
  fn_0017821c(puVar7 + 7,auStack_910,0x8d8);
  piVar8 = puVar7 + 0x23f;
  uVar2 = fn_00100b58(auStack_910);
  puVar9 = &DAT_008f9ce8;
  puVar1 = (undefined4 *)*piVar8;
  if (uVar2 == 0) {
    piVar4 = puVar1 + -3;
    iVar6 = *piVar4;
    if (iVar6 == 0) {
      puVar1[-1] = 0;
      *(undefined2 *)*piVar8 = 0;
    }
    else {
      if ((puVar1 != &DAT_008f9cf4) &&
         ((iVar6 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar6 + -1, iVar6 == 0)))))) {
        fn_001008c4(*piVar8 + -0xc,*(int *)(*piVar8 + -8) + 8,0);
      }
      *piVar8 = (int)&DAT_008f9cf4;
    }
  }
  else {
    uVar10 = puVar1[-3] + 1;
    bVar12 = puVar1[-3] != -1;
    bVar11 = uVar10 == 1;
    if (uVar10 < 2) {
      bVar12 = (uint)puVar1[-2] <= uVar2;
      bVar11 = uVar2 == puVar1[-2];
    }
    if ((bVar12 && !bVar11) ||
       ((puVar1 <= auStack_910 && (auStack_910 < (undefined4 *)((int)puVar1 + puVar1[-1] * 2))))) {
      uVar10 = puVar1[-1];
      local_38[0] = uVar2;
      local_914 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
      if (local_914 < uVar10 + 0x80) {
        local_914 = uVar10 + 0x80;
      }
      puVar3 = &local_914;
      if (local_914 < uVar2) {
        puVar3 = local_38;
      }
      uVar10 = *puVar3;
      if (0xfffffff1 < uVar10) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar10,0xfffffff1);
      }
      if (uVar10 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar10);
      }
      if (uVar10 != 0) {
        puVar9 = (undefined4 *)fn_00100fc6((uVar10 + 8) * 2,0);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
        }
        puVar9[2] = uVar2;
        puVar5 = (undefined2 *)((int)puVar9 + uVar2 * 2 + 0xc);
        *puVar9 = 0;
        puVar9[1] = uVar10;
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
        }
      }
      fn_00301a9c(puVar9 + 3,auStack_910,uVar2 << 1);
      if ((undefined4 *)*piVar8 != &DAT_008f9cf4) {
        piVar4 = (undefined4 *)*piVar8 + -3;
        iVar6 = *piVar4;
        if ((iVar6 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar6 + -1, iVar6 == 0)))) {
          fn_001008c4(*piVar8 + -0xc,*(int *)(*piVar8 + -8) + 8,0);
        }
      }
      *piVar8 = (int)(puVar9 + 3);
    }
    else {
      fn_001006ac(puVar1,auStack_910,uVar2);
      *(uint *)(*piVar8 + -4) = uVar2;
      *(undefined2 *)(*piVar8 + uVar2 * 2) = 0;
    }
  }
  *(undefined1 *)(puVar7 + 0x240) = 1;
  return;
}



void fn_003e36e8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_00832b38;
  *(undefined1 *)(puVar1 + 0x2c) = 0;
  puVar1[0x2d] = 0;
  return;
}



void fn_003e3248(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar1 = fn_006ba220();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x003e3270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x110))(param_1);
    return;
  }
  if ((char)param_1[0x2c] == '\x01') {
    return;
  }
  *(undefined4 *)(param_1[0x2d] + 8) = param_2;
  iVar1 = fn_006cb7f8(param_1,param_2);
  if (iVar1 == 0) {
    fn_006899f4(param_1,99,0);
  }
  else if (iVar1 == 1) {
    fn_006899f4(param_1,0x61,0);
  }
  else if (iVar1 == 2) {
    fn_006899f4(param_1,0x62,0);
  }
  else if (iVar1 == 3) {
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    iVar1 = fn_006f72c8(DAT_008977e0);
    *(undefined1 *)(iVar1 + 0x238) = 0xb;
    iVar1 = fn_006f72c8(DAT_008977e0);
    iVar2 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
    if (iVar2 == 1) {
      uVar3 = 3;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(iVar1 + 0x239) = uVar3;
    iVar1 = param_1[0x2d];
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  fn_0068ab44(param_1,0x100094b);
  return;
}


