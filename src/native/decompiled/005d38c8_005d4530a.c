#include "005d38c8_005d4530a.h"



void fn_005d3d50(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_0025dbc4();
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00894d28) goto LAB_005d3d98;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005d3d98:
  if (*(char *)(puVar2 + 0x23d) == '\0') {
    return;
  }
  fn_005d3a6c(param_1);
  return;
}



void fn_005d3d20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005d3db8(iVar1,param_1);
  return;
}



void fn_005d3db8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0036e354(param_1,param_2,&DAT_007c71f4,1);
  *puVar1 = &DAT_0084c748;
  return;
}



void fn_005d3a6c(int param_1)

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
      if (puVar1 == &DAT_00894d28) goto LAB_005d3ab0;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar7 = (undefined4 *)0x0;
LAB_005d3ab0:
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



void fn_005d396c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_8f8 [2272];
  
  fn_0025dbc4();
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00894d28) goto LAB_005d39bc;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005d39bc:
  if (*(char *)(puVar2 + 0x23d) != '\0') {
    puVar2 = *(undefined4 **)(param_1 + 0x18);
    if (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar1 == &DAT_00894d28) goto LAB_005d39fc;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_005d39fc:
    *(undefined1 *)((int)puVar2 + 0x902) = 0;
    fn_002e8c7c(auStack_8f8);
    fn_0017821c(puVar2 + 7,auStack_8f8,0x8d8);
    *(undefined1 *)(puVar2 + 0x240) = 0;
  }
  return;
}



void fn_005d38c8(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  uVar1 = fn_006b64f8(param_1,0);
  piVar2 = (int *)fn_006896fc(param_1,uVar1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(piVar2);
    do {
      if (puVar3 == &DAT_00894ea4) {
        if (piVar2 == (int *)0x0) {
          return;
        }
        piVar4 = *(int **)(piVar2[0x2a] + (param_2 & 0xff) * 4);
        piVar2 = *(int **)(piVar2[0x2d] + (param_2 & 0xff) * 4);
        pcVar5 = *(code **)(*piVar4 + 0x20);
        (*pcVar5)(piVar4,param_3,param_3,pcVar5,unaff_r4,unaff_r5,unaff_r6,in_lr);
                    /* WARNING: Could not recover jumptable at 0x0036ec34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 0x20))(piVar2,param_3);
        return;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  return;
}


