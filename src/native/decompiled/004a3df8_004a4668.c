#include "004a3df8_004a4668.h"



undefined4 fn_004a4668(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_68 [64];
  undefined4 local_28 [2];
  
  fn_004b73b0(auStack_68);
  iVar1 = fn_004bc44c();
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  fn_004ba7c4(auStack_68,*(undefined2 *)(param_1 + 0x20),1);
  iVar1 = fn_004bab34(auStack_68,param_2);
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_68);
    return 0;
  }
  fn_004ba7ac(auStack_68,3);
  local_28[0] = *(undefined4 *)(param_3 + 0x14);
  fn_0015ef4c(auStack_68,local_28,4);
  piVar5 = *(int **)(param_3 + 0x10);
  for (piVar4 = (int *)*piVar5; piVar4 != piVar5; piVar4 = (int *)*piVar4) {
    fn_0047fb68(auStack_68,piVar4 + 2);
  }
  fn_0047fb68(auStack_68,param_4);
  DAT_008ed828 = &DAT_004a47f4;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar1 = fn_006d3ef4(param_1,0x10), iVar1 == 0)) {
    uVar3 = fn_0046e0a4(param_1,param_2,auStack_68);
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_68);
    return uVar3;
  }
  (**(code **)(*piVar2 + 0xc))(piVar2);
  uVar3 = fn_0046e0a4(param_1,param_2,auStack_68);
  fn_004b7520(auStack_68);
  return uVar3;
}



undefined4
fn_004a44f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [64];
  
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
  fn_004ba7ac(auStack_60,4);
  fn_0015ef4c(auStack_60,param_3,4);
  fn_00454d74(auStack_60,param_4);
  fn_0015ef4c(auStack_60,param_5,4);
  DAT_008ed82c = &DAT_004a47f0;
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



undefined4
fn_004a430c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [64];
  
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
  fn_004ba7ac(auStack_60,5);
  fn_0015ef4c(auStack_60,param_3,4);
  fn_0015ef4c(auStack_60,param_4,4);
  fn_0015ef4c(auStack_60,param_5,4);
  DAT_008ed830 = &DAT_004a47ec;
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



void fn_004a3df8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  
  uVar6 = *(uint *)(param_2 + 0xc);
  uVar5 = *(uint *)(param_1 + 0xc);
  uVar1 = uVar6 / 1000;
  if (*(char *)(param_1 + 9) == '\0') {
    if (*(char *)(param_1 + 10) == '\0') {
      if (uVar1 != uVar5) {
        return;
      }
      if (uVar6 % 1000 != *(uint *)(param_1 + 0x10)) {
        return;
      }
      puVar8 = *(undefined4 **)(param_1 + 0x24);
      if (puVar8 == *(undefined4 **)(param_1 + 0x28)) {
        uVar1 = ((int)puVar8 - *(int *)(param_1 + 0x20)) / 0x24;
        if (uVar1 < (uint)(((int)*(undefined4 **)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) / 0x24
                          )) {
          *(undefined4 **)(param_1 + 0x24) = puVar8 + 9;
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = &DAT_00854554;
            *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar8 + -8);
            puVar8[2] = puVar8[-7];
            puVar8[3] = puVar8[-6];
            puVar8[4] = puVar8[-5];
            puVar8[5] = puVar8[-4];
            iVar3 = fn_004b637c(puVar8 + 6,puVar8 + -3);
            *(undefined4 *)(iVar3 + 8) = puVar8[-1];
            *(undefined **)(iVar3 + -0x18) = &DAT_00853900;
          }
          puVar11 = puVar8 + -9;
          puVar7 = puVar8;
          while (puVar8 != puVar11) {
            puVar7 = puVar7 + -9;
            puVar11 = puVar11 + -9;
            fn_004966a4(puVar7,puVar11);
          }
          fn_004966a4(puVar8,param_2);
        }
        else {
          uVar5 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar5 < uVar1 + 0x20) {
            uVar5 = uVar1 + 0x20;
          }
          puVar4 = (undefined4 *)fn_0015ece0(uVar5 * 0x24);
          puVar11 = puVar4;
          for (puVar7 = *(undefined4 **)(param_1 + 0x20); puVar7 != puVar8; puVar7 = puVar7 + 9) {
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = &DAT_00854554;
              *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar7 + 1);
              puVar11[2] = puVar7[2];
              puVar11[3] = puVar7[3];
              puVar11[4] = puVar7[4];
              puVar11[5] = puVar7[5];
              iVar3 = fn_004b637c(puVar11 + 6,puVar7 + 6);
              *(undefined4 *)(iVar3 + 8) = puVar7[8];
              *(undefined **)(iVar3 + -0x18) = &DAT_00853900;
            }
            puVar11 = puVar11 + 9;
          }
          puVar7 = puVar4 + (((int)puVar8 - *(int *)(param_1 + 0x20)) / 0x24) * 9;
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = &DAT_00854554;
            *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(param_2 + 4);
            puVar7[2] = *(undefined4 *)(param_2 + 8);
            puVar7[3] = *(undefined4 *)(param_2 + 0xc);
            puVar7[4] = *(undefined4 *)(param_2 + 0x10);
            puVar7[5] = *(undefined4 *)(param_2 + 0x14);
            iVar3 = fn_004b637c(puVar7 + 6,param_2 + 0x18);
            *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_2 + 0x20);
            *(undefined **)(iVar3 + -0x18) = &DAT_00853900;
          }
          puVar11 = *(undefined4 **)(param_1 + 0x24);
          puVar7 = puVar4 + (((int)puVar8 - *(int *)(param_1 + 0x20)) / 0x24) * 9;
          for (; puVar8 != puVar11; puVar8 = puVar8 + 9) {
            puVar9 = puVar7 + 9;
            if (puVar9 != (undefined4 *)0x0) {
              *puVar9 = &DAT_00854554;
              *(undefined1 *)(puVar7 + 10) = *(undefined1 *)(puVar8 + 1);
              puVar7[0xb] = puVar8[2];
              puVar7[0xc] = puVar8[3];
              puVar7[0xd] = puVar8[4];
              puVar7[0xe] = puVar8[5];
              iVar3 = fn_004b637c(puVar7 + 0xf,puVar8 + 6);
              *(undefined4 *)(iVar3 + 8) = puVar8[8];
              *(undefined **)(iVar3 + -0x18) = &DAT_00853900;
            }
            puVar7 = puVar9;
          }
          puVar8 = *(undefined4 **)(param_1 + 0x20);
          puVar7 = *(undefined4 **)(param_1 + 0x24);
          iVar3 = (int)puVar7 - (int)puVar8;
          for (; puVar8 != puVar7; puVar8 = puVar8 + 9) {
            (**(code **)*puVar8)(puVar8);
          }
          fn_0014f1bc(*(undefined4 *)(param_1 + 0x20));
          *(undefined4 **)(param_1 + 0x20) = puVar4;
          *(undefined4 **)(param_1 + 0x28) = puVar4 + uVar5 * 9;
          *(undefined4 **)(param_1 + 0x24) = puVar4 + (iVar3 / 0x24) * 9 + 9;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0x24) = puVar8 + 9;
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = &DAT_00854554;
          *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(param_2 + 4);
          puVar8[2] = *(undefined4 *)(param_2 + 8);
          puVar8[3] = *(undefined4 *)(param_2 + 0xc);
          puVar8[4] = *(undefined4 *)(param_2 + 0x10);
          puVar8[5] = *(undefined4 *)(param_2 + 0x14);
          iVar3 = fn_004b637c(puVar8 + 6,param_2 + 0x18);
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_2 + 0x20);
          *(undefined **)(iVar3 + -0x18) = &DAT_00853900;
        }
      }
      iVar3 = *(int *)(param_1 + 0x20);
      iVar10 = *(int *)(param_1 + 0x24);
      if ((uint)((iVar10 - iVar3) / 0x24) < 0x11) {
        return;
      }
      iVar2 = iVar3;
      if (iVar3 == iVar10) {
        return;
      }
      while (iVar2 = iVar2 + 0x24, iVar10 != iVar2) {
        fn_004966a4(iVar3,iVar2);
        iVar3 = iVar3 + 0x24;
      }
      (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x24) + -0x24))();
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -0x24;
      return;
    }
    if (uVar1 != uVar5) {
      return;
    }
    if (uVar6 % 1000 != *(uint *)(param_1 + 0x10)) {
      return;
    }
    if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x14) ||
        *(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x10)) {
      return;
    }
  }
  else {
    if (uVar1 != uVar5) {
      return;
    }
    if (uVar6 % 1000 != *(uint *)(param_1 + 0x10)) {
      return;
    }
    if (*(int *)(param_2 + 0x10) != *(int *)(param_1 + 0x14)) {
      return;
    }
  }
  fn_004966a4(*(undefined4 *)(param_1 + 0x2c));
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


