#include "004a28d4_004a3470.h"



void fn_004a3470(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[0x11];
  *param_1 = &DAT_00854d08;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
    param_1[0x11] = 0;
  }
  iVar1 = fn_0046e758(param_1 + 0x12);
  fn_0047a554(iVar1 + -0x48);
  fn_00455018();
  return;
}



void fn_004a2f94(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 auStack_20 [12];
  undefined4 local_14 [2];
  
  uVar1 = fn_004ba934(param_2);
  uVar1 = uVar1 & 0x7fff;
  if ((uVar1 == 0) || (0x2c < uVar1)) {
    local_14[0] = 0x80010002;
    fn_004b8d4c(auStack_20,local_14);
    fn_004ba5a4();
  }
  else if (*(code **)(&DAT_008e68dc + uVar1 * 4) != (code *)0x0) {
                    /* WARNING: Could not emulate address calculation at 0x004a2ff0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_008e68dc + uVar1 * 4))(param_2,param_3);
    return;
  }
  return;
}



undefined4 fn_004a2e38(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [68];
  
  fn_004b73b0(auStack_60);
  iVar1 = fn_004bc44c();
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  fn_004ba7c4(auStack_60,*(undefined2 *)(param_1 + 0x20),1);
  iVar1 = fn_004bab34(auStack_60,param_2);
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_60);
    return 0;
  }
  fn_004ba7ac(auStack_60,2);
  fn_0015ef4c(auStack_60,param_4,4);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_3);
  }
  DAT_008e68e4 = fn_004a3320;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar1 = fn_006d3ef4(param_1,0x10), iVar1 == 0)) {
    uVar3 = fn_0046e0a4(param_1,param_2,auStack_60);
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_60);
    return uVar3;
  }
  (**(code **)(*piVar2 + 0xc))(piVar2);
  uVar3 = fn_0046e0a4(param_1,param_2,auStack_60);
  fn_004b7520(auStack_60);
  return uVar3;
}



void fn_004a3320(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uStack_10;
  
  puVar2 = &uStack_10;
  uStack_10 = param_4;
  puVar1 = (undefined1 *)fn_0048cbf8(param_2,0);
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined4 *)puVar1;
  }
  fn_00454da8(param_1,puVar2);
  return;
}



undefined4 fn_004a2ce8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [68];
  
  fn_004b73b0(auStack_60);
  iVar1 = fn_004bc44c();
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  fn_004ba7c4(auStack_60,*(undefined2 *)(param_1 + 0x20),1);
  iVar1 = fn_004bab34(auStack_60,param_2);
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_60);
    return 0;
  }
  fn_004ba7ac(auStack_60,0x2a);
  fn_0015ef4c(auStack_60,param_3,4);
  fn_00454d74(auStack_60,param_4);
  DAT_008e6984 = &DAT_004a331c;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar1 = fn_006d3ef4(param_1,0x10), iVar1 == 0)) {
    uVar3 = fn_0046e0a4(param_1,param_2,auStack_60);
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_60);
    return uVar3;
  }
  (**(code **)(*piVar2 + 0xc))(piVar2);
  uVar3 = fn_0046e0a4(param_1,param_2,auStack_60);
  fn_004b7520(auStack_60);
  return uVar3;
}



undefined4 fn_004a2b8c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [68];
  
  fn_004b73b0(auStack_60);
  iVar1 = fn_004bc44c();
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  fn_004ba7c4(auStack_60,*(undefined2 *)(param_1 + 0x20),1);
  iVar1 = fn_004bab34(auStack_60,param_2);
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_60);
    return 0;
  }
  fn_004ba7ac(auStack_60,0x29);
  fn_0015ef4c(auStack_60,param_3,4);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_4);
  }
  DAT_008e6980 = fn_004a3018;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar1 = fn_006d3ef4(param_1,0x10), iVar1 == 0)) {
    uVar3 = fn_0046e0a4(param_1,param_2,auStack_60);
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_60);
    return uVar3;
  }
  (**(code **)(*piVar2 + 0xc))(piVar2);
  uVar3 = fn_0046e0a4(param_1,param_2,auStack_60);
  fn_004b7520(auStack_60);
  return uVar3;
}



void fn_004a3018(int param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_120 [104];
  undefined1 auStack_b8 [4];
  int *local_b4;
  int *local_b0;
  int *piStack_ac;
  int *local_a8;
  int local_a4;
  undefined1 auStack_a0 [128];
  
  iVar3 = fn_0048cbf8(param_2,0);
  uVar10 = 0;
  if (iVar3 == 0) {
    fn_00101a1c(auStack_b8,fn_004b4c44,0x18,1);
    piVar8 = local_a8;
    piVar7 = (int *)*local_a8;
    while (piVar2 = piVar7, piVar2 != piVar8) {
      piVar7 = local_a8;
      if (piVar2 != local_a8) {
        piVar7 = (int *)*piVar2;
        *(int **)piVar2[1] = piVar7;
        *(int *)(*piVar2 + 4) = piVar2[1];
        local_a4 = local_a4 + -1;
        (**(code **)piVar2[2])(piVar2 + 2);
        *piVar2 = (int)local_b4;
        local_b4 = piVar2;
      }
    }
    iVar3 = *(int *)(param_1 + 8);
    iVar4 = *(int *)(param_1 + 0xc);
    if ((uint)(*(int *)(iVar3 + 0x10) - iVar4) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      puVar5 = (uint *)(*(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0xc) + iVar4);
      uVar10 = *puVar5;
      bVar1 = *(byte *)((int)puVar5 + 3);
      *(int *)(param_1 + 0xc) = iVar4 + 4;
      uVar10 = uVar10 & 0xffffff | (uint)bVar1 << 0x18;
    }
    uVar9 = 0;
    if (uVar10 != 0) {
      do {
        fn_0013ce04(auStack_120);
        fn_0047fba4(param_1,auStack_120);
        piVar8 = local_a8;
        if (local_b4 == (int *)0x0) {
          if (local_b0 == piStack_ac) {
            fn_0078638c(auStack_b8,0);
          }
          piVar7 = local_b0;
          local_b0 = local_b0 + 0x1c;
        }
        else {
          piVar7 = local_b4;
          local_b4 = (int *)*local_b4;
        }
        if (piVar7 + 2 != (int *)0x0) {
          fn_0013cd7c(piVar7 + 2,auStack_120);
        }
        *piVar7 = (int)piVar8;
        piVar7[1] = piVar8[1];
        *(int **)piVar8[1] = piVar7;
        piVar8[1] = (int)piVar7;
        local_a4 = local_a4 + 1;
        fn_0013ce98(auStack_120);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar10);
    }
    fn_00100414(auStack_b8,fn_004b4c98,0x18,1);
    return;
  }
  piVar7 = *(int **)(iVar3 + 0x10);
  piVar8 = (int *)*piVar7;
  while (piVar2 = piVar8, piVar2 != piVar7) {
    piVar8 = *(int **)(iVar3 + 0x10);
    if (piVar2 != *(int **)(iVar3 + 0x10)) {
      piVar8 = (int *)*piVar2;
      *(int **)piVar2[1] = piVar8;
      *(int *)(*piVar2 + 4) = piVar2[1];
      *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + -1;
      (**(code **)piVar2[2])(piVar2 + 2);
      *piVar2 = *(undefined4 *)(iVar3 + 4);
      *(int **)(iVar3 + 4) = piVar2;
    }
  }
  iVar4 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0xc);
  if ((uint)(*(int *)(iVar4 + 0x10) - iVar6) < 4) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    puVar5 = (uint *)(*(int *)(iVar4 + 0x18) + *(int *)(iVar4 + 0xc) + iVar6);
    uVar10 = *puVar5;
    bVar1 = *(byte *)((int)puVar5 + 3);
    *(int *)(param_1 + 0xc) = iVar6 + 4;
    uVar10 = uVar10 & 0xffffff | (uint)bVar1 << 0x18;
  }
  uVar9 = 0;
  if (uVar10 != 0) {
    do {
      fn_0013ce04(auStack_a0);
      fn_0047fba4(param_1,auStack_a0);
      piVar8 = *(int **)(iVar3 + 4);
      iVar4 = *(int *)(iVar3 + 0x10);
      if (piVar8 == (int *)0x0) {
        if (*(int *)(iVar3 + 8) == *(int *)(iVar3 + 0xc)) {
          fn_0078638c(iVar3,0);
        }
        piVar8 = *(int **)(iVar3 + 8);
        *(int **)(iVar3 + 8) = piVar8 + 0x1c;
      }
      else {
        *(int *)(iVar3 + 4) = *piVar8;
      }
      if (piVar8 + 2 != (int *)0x0) {
        fn_0013cd7c(piVar8 + 2,auStack_a0);
      }
      *piVar8 = iVar4;
      piVar8[1] = *(int *)(iVar4 + 4);
      **(undefined4 **)(iVar4 + 4) = piVar8;
      *(int **)(iVar4 + 4) = piVar8;
      *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
      fn_0013ce98(auStack_a0);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar10);
  }
  return;
}



void fn_004a29d0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x3c) + 8))
            (*(int **)(param_1 + 0x3c),param_1 + 0x58,*(undefined4 *)(param_1 + 0x40),
             *(undefined4 *)(param_1 + 0x84));
  if (*(char *)(param_1 + 0x6c) == '\0') {
    fn_004b2f04(param_1);
    return;
  }
  fn_004b2e68(param_1,*(undefined4 *)(param_1 + 0x74));
  return;
}



undefined4 * fn_004a28d4(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *param_1 = &DAT_00855624;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = fn_0013d40c(param_1 + 3);
  iVar1 = fn_004b8b9c(iVar1 + 0xc,0);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  iVar1 = fn_0048b218(iVar1 + 0x20,3,&local_28);
  fn_0014f1bc(local_28);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  iVar1 = fn_0048b218(iVar1 + 0x14,3,&local_1c);
  fn_0014f1bc(local_1c);
  iVar1 = fn_0075546c(iVar1 + 0x20,0);
  iVar1 = fn_00755304(iVar1 + 0xc,0);
  *(undefined1 *)(iVar1 + 0x10) = 0;
  *(undefined **)(iVar1 + 0xc) = &DAT_00855338;
  *(undefined2 *)(iVar1 + 0x12) = 0xffff;
  *(undefined1 *)(iVar1 + 0x14) = 1;
  iVar1 = fn_0075546c(iVar1 + 0x18,0);
  puVar2 = (undefined4 *)(iVar1 + -0x90);
  *puVar2 = &DAT_00854c48;
  fn_004a23e4(puVar2);
  return puVar2;
}


