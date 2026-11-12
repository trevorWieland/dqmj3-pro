#include "00412dd8_00415d08.h"



void fn_00415d08(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)fn_001f7510(param_1,0x49);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942dc) goto LAB_00415d50;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00415d50:
  uVar3 = fn_0016ba34(DAT_00897800,DAT_0089877c,(char *)&DAT_00415da8,0);
  uVar4 = fn_0022eefc(0x1f5,0);
  fn_00321118(puVar1,uVar3,uVar4);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_004153d0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0xe5) == '\x01') {
    fn_003807f4(param_1,*(undefined4 *)(param_2 + 0xc),1,0);
    return;
  }
  if (*(char *)(param_1 + 0x7c) != '\0') {
    return;
  }
  puVar1 = (undefined4 *)fn_001f7510(param_1,0x49);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942dc) goto LAB_00415430;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00415430:
  uVar3 = fn_0016ba34(DAT_00897800,DAT_0089877c,(char *)&DAT_00415da8,0);
  uVar4 = fn_0022eefc(0x1f5,0);
  fn_00321118(puVar1,uVar3,uVar4);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_00413df0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x104) != '\0') {
    return;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
  if ((iVar1 < 2) &&
     (iVar1 = fn_00144df4(*(undefined4 *)(DAT_00897804 + 0xc),0), iVar1 == *(int *)(param_2 + 0xc))
     ) {
    fn_00413b2c(param_1,(char *)&DAT_00413f5c,0);
    return;
  }
  iVar4 = *(int *)(param_2 + 0xc);
  iVar1 = fn_006b846c(*(undefined4 *)(DAT_00897804 + 0xc));
  if ((iVar1 != iVar4) &&
     (iVar1 = fn_006b8600(*(undefined4 *)(DAT_00897804 + 0xc)), iVar1 != iVar4)) {
    iVar1 = 0;
    do {
      iVar2 = fn_006b51d8(*(undefined4 *)(DAT_00897804 + 0x1c),iVar1);
      if (iVar2 == iVar4) goto LAB_00413f30;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    iVar1 = fn_006b51c0(*(undefined4 *)(DAT_00897804 + 0x1c));
    if (iVar1 != iVar4) {
      fn_005828f0(param_1,param_2);
      uVar3 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb4),
                           *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x10),
                           *(undefined4 *)(*(int *)(param_1 + 0x100) + 0xc));
      iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar3);
      fn_0015b0dc(iVar1 + 4);
      fn_00413b2c(param_1,(char *)&DAT_00413f84,1);
      *(undefined1 *)(param_1 + 0x104) = 1;
      fn_0068ab44(param_1,0x100094b);
      return;
    }
  }
LAB_00413f30:
  fn_00413b2c(param_1,(char *)&DAT_00413fa8,0);
  return;
}



undefined4 fn_00412dd8(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  uint local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  int local_74;
  int local_70;
  uint local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [8];
  undefined1 local_54;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 auStack_38 [4];
  undefined1 local_34;
  undefined4 local_30;
  uint local_2c [2];
  
  puVar9 = &local_88;
  fn_00229474(*(undefined4 *)(DAT_00897804 + 0x28));
  puVar13 = *(undefined4 **)(param_1 + 0x18);
  if (puVar13 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar13)(puVar13);
    do {
      if (puVar2 == &DAT_008941fc) goto LAB_00412e34;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar13 = (undefined4 *)0x0;
LAB_00412e34:
  *(undefined4 **)(param_1 + 0xd8) = puVar13;
  fn_00121838(DAT_00897800,DAT_0089878c,1);
  fn_00121838(DAT_00897800,DAT_00898794,1);
  local_30 = *(undefined4 *)(DAT_00897804 + 0x28);
  fn_00228e40();
  local_84 = fn_006b2a40(local_30);
  fn_00397b18(&local_80);
  local_80 = DAT_00894218;
  local_7c = DAT_0089421c;
  uVar3 = fn_0022f750((char *)&DAT_004131a8);
  fn_00147974(auStack_64,uVar3);
  local_6c = local_84;
  puVar15 = &DAT_007c6dd8;
  if ((int)local_84 < 9) {
    puVar15 = &local_84;
  }
  local_78 = *puVar15;
  local_54 = 8 < (int)local_84;
  local_4c = 0;
  local_34 = 1;
  local_74 = *(int *)(*(int *)(param_1 + 0xd8) + 8) % 8;
  iVar4 = *(int *)(*(int *)(param_1 + 0xd8) + 8);
  local_52 = 1;
  local_70 = (int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1d)) >> 3;
  uVar3 = fn_0022f750((char *)&DAT_004131b4);
  fn_00147974(auStack_60,uVar3);
  local_51 = 1;
  local_4d = 0;
  bVar1 = *(byte *)(*(int *)(param_1 + 0xd8) + 0xc);
  *(byte *)(param_1 + 0xdd) = bVar1;
  uVar3 = fn_00231cb8((&DAT_007c6ddc)[bVar1]);
  fn_00147974(auStack_5c,uVar3);
  local_68 = 0x42f40000;
  iVar4 = fn_006896fc(param_1,0x3e);
  if (iVar4 == 0) {
    fn_00689930(param_1,0x3e,0);
  }
  *(undefined1 *)(param_1 + 0xdc) = 0;
  puVar15 = (uint *)(param_1 + 0xe0);
  local_2c[0] = local_84;
  if (0x3fffffff < local_84) {
    local_88 = 0x3fffffff;
    fn_002ff628(8,&DAT_008c7673);
  }
  if ((uint)((int)(*(int *)(param_1 + 0xe8) - *puVar15) >> 2) < local_2c[0]) {
    uVar14 = (int)(*(int *)(param_1 + 0xe4) - *puVar15) >> 2;
    local_88 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
    if (local_88 < uVar14 + 0x20) {
      local_88 = uVar14 + 0x20;
    }
    if (local_88 <= local_2c[0]) {
      puVar9 = local_2c;
    }
    uVar14 = *puVar9;
    puVar5 = (undefined4 *)fn_00100fc6(uVar14 << 2,0);
    puVar12 = *(undefined4 **)(param_1 + 0xe4);
    puVar2 = puVar5;
    for (puVar13 = (undefined4 *)*puVar15; puVar13 != puVar12; puVar13 = puVar13 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar13;
      }
      puVar2 = puVar2 + 1;
    }
    uVar6 = *puVar15;
    uVar7 = uVar6;
    if (*(uint *)(param_1 + 0xe4) < uVar6) {
      do {
        uVar7 = uVar7 + 4;
      } while (uVar7 != *(uint *)(param_1 + 0xe4));
    }
    fn_001008c4(uVar6,(int)(*(int *)(param_1 + 0xe8) - uVar6) >> 2,0);
    uVar7 = *puVar15;
    *puVar15 = (uint)puVar5;
    *(uint *)(param_1 + 0xe4) = (*(int *)(param_1 + 0xe4) - uVar7 & 0xfffffffc) + (int)puVar5;
    *(undefined4 **)(param_1 + 0xe8) = puVar5 + uVar14;
  }
  puVar9 = (uint *)(param_1 + 0xe0);
  iVar4 = 0;
  if (0 < (int)local_84) {
    do {
      uVar3 = fn_006b2948(local_30,iVar4);
      puVar13 = *(undefined4 **)(param_1 + 0xe4);
      if (puVar13 == *(undefined4 **)(param_1 + 0xe8)) {
        uVar14 = (int)((int)puVar13 - *puVar9) >> 2;
        if (uVar14 < (uint)((int)((int)*(undefined4 **)(param_1 + 0xe8) - *puVar9) >> 2)) {
          *(undefined4 **)(param_1 + 0xe4) = puVar13 + 1;
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = puVar13[-1];
          }
          puVar2 = puVar13 + -1;
          puVar5 = puVar13;
          if (puVar13 < puVar2) {
            iVar10 = (int)puVar2 - (int)puVar13;
            if (0 < iVar10) {
              if (iVar10 * 0x20000000 < 0) {
                puVar2 = puVar13 + -2;
                puVar5 = puVar13 + -1;
                *puVar5 = *puVar2;
              }
              for (iVar10 = iVar10 >> 3; iVar10 != 0; iVar10 = iVar10 + -1) {
                puVar5[-1] = puVar2[-1];
                puVar2 = puVar2 + -2;
                puVar5 = puVar5 + -2;
                *puVar5 = *puVar2;
              }
            }
          }
          else {
            while (puVar13 != puVar2) {
              puVar2 = puVar2 + -1;
              puVar5[-1] = *puVar2;
              puVar5 = puVar5 + -1;
            }
          }
          *puVar13 = uVar3;
        }
        else {
          uVar7 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
          if (uVar7 < uVar14 + 0x20) {
            uVar7 = uVar14 + 0x20;
          }
          puVar12 = (undefined4 *)fn_00100fc6(uVar7 << 2,0);
          puVar5 = puVar12;
          for (puVar2 = (undefined4 *)*puVar9; puVar2 != puVar13; puVar2 = puVar2 + 1) {
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = *puVar2;
            }
            puVar5 = puVar5 + 1;
          }
          puVar2 = (undefined4 *)(((int)puVar13 - *puVar9 & 0xfffffffc) + (int)puVar12);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = uVar3;
          }
          puVar5 = *(undefined4 **)(param_1 + 0xe4);
          puVar2 = (undefined4 *)(((int)puVar13 - *puVar9 & 0xfffffffc) + (int)puVar12);
          for (; puVar13 != puVar5; puVar13 = puVar13 + 1) {
            puVar2 = puVar2 + 1;
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = *puVar13;
            }
          }
          uVar6 = *puVar9;
          uVar11 = *(uint *)(param_1 + 0xe4);
          uVar14 = uVar6;
          if (uVar11 < uVar6) {
            do {
              uVar14 = uVar14 + 4;
            } while (uVar14 != uVar11);
          }
          fn_001008c4(uVar6,(int)(*(int *)(param_1 + 0xe8) - uVar6) >> 2,0);
          *(undefined4 **)(param_1 + 0xe8) = puVar12 + uVar7;
          *(undefined4 **)(param_1 + 0xe4) = puVar12 + ((int)(uVar11 - uVar6) >> 2) + 1;
          *puVar9 = (uint)puVar12;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0xe4) = puVar13 + 1;
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = uVar3;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)local_84);
  }
  fn_0022e468(param_1 + 0xe0,*(undefined1 *)(param_1 + 0xdd));
  if (*(int *)(param_1 + 0xa4) != 0) {
    uVar3 = fn_00231cb8((&DAT_007c6ddc)[*(byte *)(param_1 + 0xdd)]);
    fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar3);
  }
  uVar3 = fn_00397a98(param_1,&local_80);
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x20))(*(int **)(param_1 + 0xb0),1);
  uVar8 = fn_00231cb8((&DAT_007c6ddc)[*(byte *)(param_1 + 0xdd)]);
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar8);
  fn_00344ef0(*(undefined4 *)(param_1 + 0xb0),1,0);
  iVar4 = fn_001588d4(auStack_38);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -0x10);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  fn_001588d4(iVar4 + -4);
  return uVar3;
}


