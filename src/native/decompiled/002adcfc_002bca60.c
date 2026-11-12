#include "002adcfc_002bca60.h"



undefined4 fn_002bca60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  wchar16 *local_90;
  char *pcStack_8c;
  undefined4 local_88;
  int local_7c;
  undefined4 local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined1 local_64;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined4 local_48;
  uint local_3c [6];
  
  fn_00121838(DAT_00897800,DAT_00898794,1);
  fn_002c330c(&local_90);
  local_90 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_8c = "common_0100.bflyt";
  if (*(int *)(*(int *)(param_1 + 200) + 0xc) == 0xd7) {
    uVar1 = fn_0022f584((char *)&DAT_002bce80,0);
    fn_00147974(&local_74,uVar1);
  }
  else {
    uVar1 = fn_0022f584((char *)&DAT_002bce4c,0);
    fn_00147974(&local_74,uVar1);
  }
  local_64 = 1;
  local_62 = 1;
  uVar1 = fn_0022f750((char *)&DAT_002bce6c);
  fn_00147974(&local_70,uVar1);
  local_5d = 0;
  local_61 = 1;
  uVar1 = fn_00231cb8((&DAT_007c6dfc)[*(byte *)(param_1 + 0xb8)]);
  fn_00147974(&local_6c,uVar1);
  local_78 = 0x42f40000;
  local_48 = *(undefined4 *)(DAT_00897804 + 0x28);
  iVar2 = fn_006b2a40();
  local_3c[1] = 100;
  puVar15 = (uint *)(param_1 + 0xbc);
  if ((uint)(*(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xbc) >> 2) < 100) {
    uVar14 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 2;
    local_3c[0] = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
    if (local_3c[0] < uVar14 + 0x20) {
      local_3c[0] = uVar14 + 0x20;
    }
    puVar8 = local_3c;
    if (local_3c[0] < 0x65) {
      puVar8 = local_3c + 1;
    }
    uVar14 = *puVar8;
    puVar3 = (undefined4 *)fn_00100fc6(uVar14 << 2,0);
    puVar13 = *(undefined4 **)(param_1 + 0xc0);
    puVar11 = puVar3;
    for (puVar9 = (undefined4 *)*puVar15; puVar9 != puVar13; puVar9 = puVar9 + 1) {
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = *puVar9;
      }
      puVar11 = puVar11 + 1;
    }
    uVar4 = *puVar15;
    uVar5 = uVar4;
    if (*(uint *)(param_1 + 0xc0) < uVar4) {
      do {
        uVar5 = uVar5 + 4;
      } while (uVar5 != *(uint *)(param_1 + 0xc0));
    }
    fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0xc4) - uVar4) >> 2,0);
    uVar5 = *puVar15;
    *puVar15 = (uint)puVar3;
    *(uint *)(param_1 + 0xc0) = (*(int *)(param_1 + 0xc0) - uVar5 & 0xfffffffc) + (int)puVar3;
    *(undefined4 **)(param_1 + 0xc4) = puVar3 + uVar14;
  }
  puVar15 = (uint *)(param_1 + 0xbc);
  iVar16 = 0;
  if (0 < iVar2) {
    do {
      local_5c = fn_006b2948(local_48,iVar16);
      puVar9 = *(undefined4 **)(param_1 + 0xc0);
      if (puVar9 == *(undefined4 **)(param_1 + 0xc4)) {
        uVar14 = (int)((int)puVar9 - *puVar15) >> 2;
        if (uVar14 < (uint)((int)((int)*(undefined4 **)(param_1 + 0xc4) - *puVar15) >> 2)) {
          *(undefined4 **)(param_1 + 0xc0) = puVar9 + 1;
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = puVar9[-1];
          }
          puVar11 = puVar9 + -1;
          puVar3 = puVar9;
          if (puVar9 < puVar11) {
            iVar10 = (int)puVar11 - (int)puVar9;
            if (0 < iVar10) {
              if (iVar10 * 0x20000000 < 0) {
                puVar11 = puVar9 + -2;
                puVar3 = puVar9 + -1;
                *puVar3 = *puVar11;
              }
              for (iVar10 = iVar10 >> 3; iVar10 != 0; iVar10 = iVar10 + -1) {
                puVar3[-1] = puVar11[-1];
                puVar11 = puVar11 + -2;
                puVar3 = puVar3 + -2;
                *puVar3 = *puVar11;
              }
            }
          }
          else {
            while (puVar9 != puVar11) {
              puVar11 = puVar11 + -1;
              puVar3[-1] = *puVar11;
              puVar3 = puVar3 + -1;
            }
          }
          *puVar9 = local_5c;
        }
        else {
          uVar5 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
          if (uVar5 < uVar14 + 0x20) {
            uVar5 = uVar14 + 0x20;
          }
          puVar13 = (undefined4 *)fn_00100fc6(uVar5 << 2,0);
          puVar3 = puVar13;
          for (puVar11 = (undefined4 *)*puVar15; puVar11 != puVar9; puVar11 = puVar11 + 1) {
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = *puVar11;
            }
            puVar3 = puVar3 + 1;
          }
          puVar11 = (undefined4 *)(((int)puVar9 - *puVar15 & 0xfffffffc) + (int)puVar13);
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = local_5c;
          }
          puVar3 = *(undefined4 **)(param_1 + 0xc0);
          puVar11 = (undefined4 *)(((int)puVar9 - *puVar15 & 0xfffffffc) + (int)puVar13);
          for (; puVar9 != puVar3; puVar9 = puVar9 + 1) {
            puVar11 = puVar11 + 1;
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = *puVar9;
            }
          }
          uVar4 = *puVar15;
          uVar12 = *(uint *)(param_1 + 0xc0);
          uVar14 = uVar4;
          if (uVar12 < uVar4) {
            do {
              uVar14 = uVar14 + 4;
            } while (uVar14 != uVar12);
          }
          fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0xc4) - uVar4) >> 2,0);
          *(undefined4 **)(param_1 + 0xc4) = puVar13 + uVar5;
          *(undefined4 **)(param_1 + 0xc0) = puVar13 + ((int)(uVar12 - uVar4) >> 2) + 1;
          *puVar15 = (uint)puVar13;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0xc0) = puVar9 + 1;
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = local_5c;
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar2);
  }
  fn_0022e468(param_1 + 0xbc,*(undefined1 *)(param_1 + 0xb8));
  if (*(int *)(param_1 + 0xa4) != 0) {
    uVar1 = fn_00231cb8((&DAT_007c6dfc)[*(byte *)(param_1 + 0xb8)]);
    fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar1);
  }
  fn_00228e40(local_48);
  local_88 = 10;
  local_7c = iVar2;
  uVar1 = fn_002c29a0(param_1,&local_90);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 200);
  uVar6 = fn_00231cb8((&DAT_007c6dfc)[*(byte *)(param_1 + 0xb8)]);
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar6);
  fn_00689efc(param_1,0x3e,0);
  if (local_68 != &DAT_008f9cf4) {
    piVar7 = local_68 + -3;
    iVar2 = *piVar7;
    if ((iVar2 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_68 + -3,local_68[-2] + 8,0);
    }
  }
  if (local_6c != &DAT_008f9cf4) {
    piVar7 = local_6c + -3;
    iVar2 = *piVar7;
    if ((iVar2 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_6c + -3,local_6c[-2] + 8,0);
    }
  }
  if (local_70 != &DAT_008f9cf4) {
    piVar7 = local_70 + -3;
    iVar2 = *piVar7;
    if ((iVar2 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
    }
  }
  if (local_74 != &DAT_008f9cf4) {
    piVar7 = local_74 + -3;
    iVar2 = *piVar7;
    if ((iVar2 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_74 + -3,local_74[-2] + 8,0);
    }
  }
  return uVar1;
}



void fn_002adcfc(int param_1)

{
  int *piVar1;
  undefined4 local_10;
  
  local_10 = 0;
  fn_00163988(DAT_00897810,&local_10,1);
  (**(code **)(*DAT_00897810 + 8))(DAT_00897810,1);
  fn_006f72b4(DAT_008977e0);
  fn_00219448();
  piVar1 = (int *)fn_006f72e0(DAT_008977e0);
  (**(code **)(*piVar1 + 0x38))();
  *(undefined1 *)(param_1 + 0x80) = 6;
  return;
}


