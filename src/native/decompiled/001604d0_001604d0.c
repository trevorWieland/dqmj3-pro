#include "001604d0_001604d0.h"



void fn_001604d0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auStack_70 [76];
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x14);
  iVar1 = *(int *)(param_3 + 8);
  piVar9 = (int *)(param_1 + 0x44c);
  *(int *)(param_1 + 0x448) = iVar1;
  iVar10 = *(int *)(param_3 + 0xc);
  *(int *)(param_1 + 0x44c) = iVar10;
  iVar8 = *(int *)(param_3 + 0x10);
  *(int *)(param_1 + 0x18) = iVar8;
  iVar6 = *(int *)(param_3 + 0x18);
  *(int *)(param_1 + 0x450) = iVar6;
  *(int *)(param_1 + 0x454) = iVar1 + -1;
  *(int *)(param_1 + 0x458) = iVar10 + -1;
  *(int *)(param_1 + 0x328) = iVar1;
  *(int *)(param_1 + 0x1c) = iVar8 + -1;
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x444) = 0;
  *(int *)(param_1 + 0x45c) = iVar6 + -1;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x480) = 0;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined4 *)(param_1 + 0x474) = 0;
  *(undefined1 *)(param_1 + 0x4b4) = 0xff;
  fn_00301f50(param_1 + 0x20,0x100);
  fn_00301f50(param_1 + 0x120,0x100);
  fn_00301f50(param_1 + 0x220,0x100);
  fn_00301f50(param_1 + 0x340,0x100);
  fn_00171a14(*(undefined4 *)(param_1 + 8));
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))
                    (*(int **)(param_1 + 8),*(int *)(param_1 + 0x10) * 4 + 0x40,0x80);
  *(undefined4 *)(param_1 + 0x4a0) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  fn_00158f6c(uVar2,*(int *)(param_1 + 0x10) * 4 + 0x40);
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 8))
                    (*(int **)(param_1 + 8),*(int *)(param_1 + 0x18) * 0x28c + 0x20,0x80);
  *(int *)(param_1 + 0x4a4) = iVar1;
  if (iVar1 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)fn_00101a1c(iVar1,&LAB_0017199c,0x28c);
  }
  *(int **)(param_1 + 0x14) = piVar7;
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x18) & 1;
    if (uVar3 == 1) {
      *piVar7 = param_1;
    }
  }
  if ((int)uVar3 < *(int *)(param_1 + 0x18)) {
    do {
      uVar4 = uVar3 + 2;
      *(int *)(*(int *)(param_1 + 0x14) + uVar3 * 0x28c) = param_1;
      *(int *)(*(int *)(param_1 + 0x14) + uVar3 * 0x28c + 0x28c) = param_1;
      uVar3 = uVar4;
    } while ((int)uVar4 < *(int *)(param_1 + 0x18));
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))
                    (*(int **)(param_1 + 8),*(int *)(param_1 + 0x448) * 0x298,0x80);
  *(undefined4 *)(param_1 + 800) = uVar2;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x448)) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 800) + iVar1 * 0x298 + 0xd8) = 0;
      uVar2 = fn_00171ca8(auStack_70);
      fn_0017821c(*(int *)(param_1 + 800) + iVar1 * 0x298 + 0x240,uVar2,0x44);
      fn_00171ce8(auStack_70);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x448));
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))
                    (*(int **)(param_1 + 8),*(int *)(param_1 + 0x44c) * 0x168,0x80);
  *(undefined4 *)(param_1 + 0x32c) = uVar2;
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),*piVar9 << 4,0x80);
  *(undefined4 *)(param_1 + 0x334) = uVar2;
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),*piVar9 * 0x18,0x80);
  *(undefined4 *)(param_1 + 0x338) = uVar2;
  iVar1 = 0;
  if (0 < *piVar9) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x32c) + iVar1 * 0x168 + 0x144) = 0;
      *(int *)(*(int *)(param_1 + 0x32c) + iVar1 * 0x168 + 100) =
           *(int *)(param_1 + 0x334) + iVar1 * 0x10;
      iVar6 = iVar1 + 1;
      *(int *)(*(int *)(param_1 + 0x32c) + iVar1 * 0x168 + 0x70) =
           *(int *)(param_1 + 0x338) + iVar1 * 0x18;
      iVar1 = iVar6;
    } while (iVar6 < *(int *)(param_1 + 0x44c));
  }
  puVar5 = (undefined4 *)
           (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),0x24,0x80);
  uVar11 = 0;
  *(undefined4 **)(param_1 + 0x4a8) = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &DAT_008575fc;
    puVar5[1] = &DAT_00857624;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined1 *)(puVar5 + 6) = 0;
    *(undefined1 *)((int)puVar5 + 0x19) = 0;
    puVar5[8] = 0;
    DAT_008c0464 = param_1;
    *puVar5 = &DAT_00857634;
  }
  *(undefined4 **)(param_1 + 0x494) = puVar5;
  puVar5 = (undefined4 *)
           (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),0x24,0x80);
  *(undefined4 **)(param_1 + 0x4ac) = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &DAT_008575fc;
    puVar5[1] = &DAT_00857624;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined1 *)(puVar5 + 6) = 0;
    *(undefined1 *)((int)puVar5 + 0x19) = 0;
    puVar5[8] = (int)uVar11;
    DAT_008c0464 = param_1;
    *puVar5 = &DAT_00857684;
  }
  *(undefined4 **)(param_1 + 0x498) = puVar5;
  puVar5 = (undefined4 *)
           (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),0x24,0x80);
  *(undefined4 **)(param_1 + 0x4b0) = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &DAT_008575fc;
    puVar5[1] = &DAT_00857624;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined1 *)(puVar5 + 6) = 0;
    *(undefined1 *)((int)puVar5 + 0x19) = 0;
    puVar5[8] = (int)uVar11;
    DAT_008c0464 = param_1;
    *puVar5 = &DAT_0085765c;
  }
  *(undefined4 **)(param_1 + 0x49c) = puVar5;
  fn_00171bd8(*(undefined4 *)(param_1 + 8));
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))
                    (*(int **)(param_1 + 8),*(int *)(param_1 + 0x450) * 0x5880,0x80);
  *(undefined4 *)(param_1 + 0x33c) = uVar2;
  iVar1 = *(int *)(param_1 + 0x450);
  if (0 < iVar1) {
    iVar6 = 0;
    do {
      iVar1 = iVar1 + -1;
      *(undefined4 *)(*(int *)(param_1 + 0x33c) + iVar6 * 0x5880 + 0x5814) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x33c) + iVar6 * 0x5880 + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x33c) + iVar6 * 0x5880 + 8) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x33c) + iVar6 * 0x5880 + 0x587c) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar1 != 0);
  }
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(uint *)(param_1 + 0x4dc) = (uint)*(byte *)(param_3 + 0x1c);
  *(uint *)(param_1 + 0x4e0) = (uint)*(byte *)(param_3 + 0x1d);
  *(uint *)(param_1 + 0x4e4) = (uint)*(byte *)(param_3 + 0x1e);
  piVar9 = *(int **)(param_1 + 8);
  if ((piVar9 != (int *)0x0 || DAT_008c3474 != 0) && (DAT_008c3474 == 0)) {
    puVar5 = (undefined4 *)(**(code **)(*piVar9 + 8))(piVar9,0x1118,4);
    iVar1 = 0;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
      *(undefined1 *)(puVar5 + 1) = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      iVar1 = fn_001729f0(puVar5 + 4);
      iVar1 = fn_001729f0(iVar1 + 0xc);
      iVar1 = fn_001729f0(iVar1 + 0xc);
      iVar1 = fn_00101a1c(iVar1 + 0xc,fn_001729f0,0xc,0x1e);
      *(undefined1 *)(iVar1 + 0x168) = 0;
      *(undefined1 *)(iVar1 + 0x169) = 1;
      *(undefined1 *)(iVar1 + 0x16a) = 0xff;
      *(undefined1 *)(iVar1 + 0x16b) = 0xff;
      *(undefined4 *)(iVar1 + 0x16c) = 0;
      *(undefined1 *)(iVar1 + 0x170) = 0;
      *(undefined1 *)(iVar1 + 0x171) = 1;
      *(undefined1 *)(iVar1 + 0x172) = 0xff;
      *(undefined1 *)(iVar1 + 0x173) = 0xff;
      *(undefined4 *)(iVar1 + 0x174) = 0;
      *(undefined1 *)(iVar1 + 0x178) = 0;
      *(undefined1 *)(iVar1 + 0x179) = 1;
      *(undefined1 *)(iVar1 + 0x17a) = 0xff;
      *(undefined1 *)(iVar1 + 0x17b) = 0xff;
      *(undefined4 *)(iVar1 + 0x17c) = 0;
      iVar1 = fn_00101a1c(iVar1 + 0x2e0,&LAB_0015d258,0x70,0xc);
      iVar1 = fn_00101a1c(iVar1 + 0x540,&LAB_0015d210,0x14,0xc);
      iVar6 = iVar1 + -0x6a0;
      *(undefined4 *)(iVar1 + -0x6a0) = 0;
      fn_00301f50(iVar1 + -0x69c,0x150);
      uVar3 = 0;
      do {
        *(undefined1 *)(iVar6 + uVar3 + 0x154) = 0;
        fn_0015d21c(iVar6 + uVar3 * 0x70 + 0x160);
        uVar4 = uVar3 + 1;
        iVar8 = iVar6 + uVar3 * 0x14;
        *(undefined1 *)(iVar8 + 0x6a0) = 0;
        uVar2 = (undefined4)uVar11;
        *(undefined4 *)(iVar8 + 0x6a4) = uVar2;
        *(undefined4 *)(iVar8 + 0x6a8) = uVar2;
        *(undefined4 *)(iVar8 + 0x6ac) = uVar2;
        *(undefined4 *)(iVar8 + 0x6b0) = uVar2;
        uVar3 = uVar4;
      } while (uVar4 < 0xc);
      *(undefined4 *)(iVar1 + 0xf0) = 0;
      *(undefined4 *)(iVar1 + 0xf4) = 0;
      *(undefined1 *)(iVar1 + 0xf8) = 0;
      *(undefined4 *)(iVar1 + 0xfc) = 0;
      *(undefined4 *)(iVar1 + 0x100) = 0;
      iVar1 = fn_001729f0(iVar1 + 0x104);
      iVar1 = fn_001729f0(iVar1 + 0xc);
      iVar1 = fn_001729f0(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined1 *)(iVar1 + 0x14) = 0;
      iVar1 = fn_00101a1c(iVar1 + 0x178,&LAB_0015d258,0x70,0xc);
      iVar1 = fn_00101a1c(iVar1 + 0x540,&LAB_0015d210,0x14,0xc);
      iVar6 = iVar1 + -0x6a0;
      *(undefined4 *)(iVar1 + -0x6a0) = 0;
      fn_00301f50(iVar1 + -0x69c,0x150);
      uVar3 = 0;
      do {
        *(undefined1 *)(iVar6 + uVar3 + 0x154) = 0;
        fn_0015d21c(iVar6 + uVar3 * 0x70 + 0x160);
        uVar4 = uVar3 + 1;
        iVar8 = iVar6 + uVar3 * 0x14;
        *(undefined1 *)(iVar8 + 0x6a0) = 0;
        uVar2 = (undefined4)uVar11;
        *(undefined4 *)(iVar8 + 0x6a4) = uVar2;
        *(undefined4 *)(iVar8 + 0x6a8) = uVar2;
        *(undefined4 *)(iVar8 + 0x6ac) = uVar2;
        *(undefined4 *)(iVar8 + 0x6b0) = uVar2;
        uVar3 = uVar4;
      } while (uVar4 < 0xc);
      iVar1 = iVar1 + -0x1028;
    }
    DAT_008c3474 = iVar1;
  }
  fn_00171d08(DAT_008c3474,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_3 + 0x20),
               *(uint *)(param_1 + 0x4e4) & 0xff);
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}


