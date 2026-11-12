#include "0055c460_0055d0a4.h"



void fn_0055d0a4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  fn_0055b880();
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  uVar4 = 0;
  do {
    uVar2 = uVar4 + 1;
    iVar1 = param_1 + uVar4 * 0x24;
    *(undefined1 *)(iVar1 + 0x2068) = 0;
    *(undefined1 *)(iVar1 + 0x2074) = 0;
    *(undefined1 *)(iVar1 + 0x2075) = 0x7f;
    *(undefined1 *)(iVar1 + 0x2076) = 0x40;
    *(undefined4 *)(iVar1 + 0x2080) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x2084) = 0;
    *(undefined4 *)(iVar1 + 0x2088) = 0;
    uVar4 = uVar2;
  } while (uVar2 < 4);
  uVar4 = 0;
  do {
    uVar2 = 0;
    iVar1 = param_1 + uVar4 * 0x3c8;
    puVar3 = (undefined4 *)(iVar1 + 0x228);
    *puVar3 = 0;
    *(undefined4 *)(iVar1 + 0x22c) = 0;
    do {
      fn_001a3c68(puVar3 + uVar2 * 6 + 2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x20);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  return;
}



undefined4
fn_0055c460(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  uint extraout_r1;
  undefined2 *puVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int local_9c;
  int local_98;
  undefined4 local_94 [4];
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined2 auStack_70 [8];
  int local_60;
  int local_5c;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_48;
  uint local_44;
  int local_34;
  int iStack_30;
  int local_2c;
  undefined4 local_28;
  
  puVar6 = (undefined4 *)(param_2 + 0x18);
  local_7c = 0;
  local_84 = 0;
  local_54 = 0;
  local_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (param_5 != 0 || param_6 != 0) {
    iVar1 = fn_0055befc(param_1,param_5 + param_6,&local_84);
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 0x1c) = 0;
      return 1;
    }
    iVar11 = *(int *)(local_34 + 0x18);
    iVar1 = fn_00169f1c(*(undefined4 *)(local_34 + 0x58),*(undefined4 *)(iVar11 + 0x1c));
    *(int *)(local_34 + 0x38) = iVar1;
    (**(code **)(**(int **)(local_34 + 0x14) + 0x40))
              (*(int **)(local_34 + 0x14),
               *(int *)(iVar11 + 0x20) * *(int *)(local_34 + 0x20) * iVar1 +
               *(int *)(local_34 + 0x44),0);
    if (*(char *)(local_34 + 0xb94) == '\x03') {
      local_54 = 1;
    }
  }
  local_98 = 0;
  local_5c = 0;
  uVar14 = (uint)(param_6 == 0);
  local_80 = *(int *)(local_34 + 0x58);
  do {
    iVar1 = local_34;
    iVar11 = *(int *)(local_34 + 0x18);
    if (*(int *)(local_34 + 0x38) == *(int *)(local_34 + 0x3c)) {
      iVar15 = *(int *)(iVar11 + 0x24);
      local_9c = *(int *)(iVar11 + 0x28);
    }
    else {
      local_9c = *(int *)(iVar11 + 0x1c);
      iVar15 = *(int *)(iVar11 + 0x20);
    }
    fn_00169f1c(*(undefined4 *)(local_34 + 0x58),*(undefined4 *)(iVar11 + 0x1c));
    if (*(char *)(iVar1 + 0xb94) == '\x03') {
      local_50 = (uint)((ulonglong)extraout_r1 * 0x49249249 + 0x49249249 >> 0x22) * 0xe;
    }
    else {
      local_50 = extraout_r1;
    }
    iVar2 = fn_00559e68(local_50,*(undefined1 *)(iVar1 + 0xb94));
    iVar11 = local_34;
    local_9c = local_9c - extraout_r1;
    if (*(uint *)(iVar1 + 0x60) < (uint)(local_9c + *(int *)(iVar1 + 0x58))) {
      local_9c = *(uint *)(iVar1 + 0x60) - *(int *)(iVar1 + 0x58);
    }
    iVar1 = iVar15 - iVar2;
    if ((uVar14 != 0) && (local_7c = 0, local_54 != 0)) {
      uVar3 = (**(code **)(**(int **)(local_34 + 0x14) + 0x54))();
      iVar4 = fn_00559d10(iVar11,auStack_70,&local_48,*(undefined4 *)(iVar11 + 0x38),
                           *(undefined4 *)(iVar11 + 0x20));
      if (iVar4 == 0) {
        return 0;
      }
      (**(code **)(**(int **)(iVar11 + 0x14) + 0x40))(*(int **)(iVar11 + 0x14),uVar3,0);
      iVar4 = *(int *)(iVar11 + 0x20);
      if (iVar4 != 0) {
        iVar9 = 0;
        puVar7 = auStack_70;
        piVar8 = &local_48;
        do {
          iVar16 = iVar11 + iVar9 * 6;
          iVar4 = iVar4 + -1;
          *(undefined2 *)(iVar16 + 0xcfe) = *puVar7;
          iVar9 = iVar9 + 1;
          *(short *)(iVar16 + 0xd00) = (short)*piVar8;
          puVar7 = puVar7 + 1;
          piVar8 = (int *)((int)piVar8 + 2);
        } while (iVar4 != 0);
      }
    }
    uVar12 = 0;
    local_4c = local_34;
    local_60 = local_2c;
    local_48 = local_5c;
    if (*(int *)(local_34 + 0x20) != 0) {
      local_44 = local_54 & uVar14;
      do {
        if (*(char *)(*(int *)(local_4c + 0x10) + 0x52) != '\0') {
          return 0;
        }
        uVar14 = 2;
        if (*(uint *)(local_4c + 0x20) < uVar12 + 2) {
          uVar14 = *(uint *)(local_4c + 0x20) - uVar12;
        }
        iVar11 = (**(code **)(**(int **)(local_4c + 0x14) + 0x24))
                           (*(int **)(local_4c + 0x14),&DAT_008f3520,iVar15 * uVar14);
        if (iVar11 != iVar15 * uVar14) {
          return 0;
        }
        uVar10 = 0;
        if (uVar14 != 0) {
          do {
            pbVar13 = &DAT_008f3520 + iVar15 * uVar10;
            iVar11 = *(int *)(local_60 + uVar12 * 4) + local_48;
            fn_00301a9c(iVar11,pbVar13 + iVar2,iVar1);
            fn_0017cad4(iVar11,iVar1);
            iVar11 = local_4c;
            if (local_44 != 0) {
              puVar5 = (ushort *)(local_4c + uVar12 * 6 + 0xcfc);
              *puVar5 = (ushort)*pbVar13;
              fn_0055a1c4(puVar5,local_4c + uVar12 * 0x2c + 0xb96,local_50,pbVar13);
              *(undefined4 *)(iVar11 + 0xcf8) = *(undefined4 *)(iVar11 + 0x58);
            }
            uVar10 = uVar10 + 1;
            uVar12 = uVar12 + 1;
          } while (uVar10 < uVar14);
        }
      } while (uVar12 < *(uint *)(local_4c + 0x20));
    }
    iVar11 = local_34;
    local_98 = local_9c + local_98;
    local_9c = *(int *)(local_34 + 0x58) + local_9c;
    local_5c = local_5c + iVar1;
    *(int *)(local_34 + 0x38) = *(int *)(local_34 + 0x38) + 1;
    *(int *)(local_34 + 0x58) = local_9c;
    if (local_9c == *(int *)(local_34 + 0x60)) {
      if (*(char *)(local_34 + 0x27) == '\0') {
        if (*(char *)(*(int *)(local_34 + 0x18) + 8) != '\0') {
          *(undefined4 *)(local_34 + 0x5c) = *(undefined4 *)(*(int *)(local_34 + 0x18) + 0xc);
          *(undefined4 *)(local_34 + 0x60) = *(undefined4 *)(*(int *)(local_34 + 0x18) + 0x10);
          uVar3 = *(undefined4 *)(local_34 + 0x5c);
          goto LAB_0055c86c;
        }
        if (*(code **)(local_34 + 0x30) == (code *)0x0) {
LAB_0055c910:
          *(undefined4 *)(iVar11 + 0x58) = *(undefined4 *)(iVar11 + 0x60);
          *(undefined1 *)(iVar11 + 0x51) = 1;
          break;
        }
        local_94[0] = *(undefined4 *)(local_34 + 0x54);
        iVar1 = (**(code **)(local_34 + 0x30))(local_94,*(undefined4 *)(local_34 + 0x34));
        if (iVar1 == 0) goto LAB_0055c910;
        *(undefined4 *)(iVar11 + 0x54) = local_94[0];
        fn_0055c034(iVar11);
        *(undefined4 *)(iVar11 + 0x58) = *(undefined4 *)(iVar11 + 0x5c);
      }
      else {
        uVar3 = 0;
        *(undefined4 *)(local_34 + 0x5c) = 0;
        *(undefined4 *)(local_34 + 0x60) = *(undefined4 *)(*(int *)(local_34 + 0x18) + 0x10);
LAB_0055c86c:
        *(undefined4 *)(local_34 + 0x58) = uVar3;
      }
      local_84 = local_84 + 1;
      iVar11 = *(int *)(local_34 + 0x18);
      iVar1 = fn_00169f1c(*(undefined4 *)(local_34 + 0x58),*(undefined4 *)(iVar11 + 0x1c));
      *(int *)(local_34 + 0x38) = iVar1;
      (**(code **)(**(int **)(local_34 + 0x14) + 0x40))
                (*(int **)(local_34 + 0x14),
                 *(int *)(iVar11 + 0x20) * *(int *)(local_34 + 0x20) * iVar1 +
                 *(int *)(local_34 + 0x44),0);
      break;
    }
    uVar14 = 0;
  } while (local_98 == 0);
  *(undefined1 *)(param_2 + 0x28) = 0;
  if (*(char *)(local_34 + 0xb94) == '\x03') {
    if (local_80 == 0) {
      if (*(uint *)(local_34 + 0x20) != 0) {
        uVar14 = *(uint *)(local_34 + 0x20) & 1;
        if (uVar14 == 1) {
          fn_0019bc50(param_2 + 0x2a,local_34 + 0xbb6);
        }
        uVar12 = (uint)(uVar14 == 1);
        if (uVar14 < *(uint *)(local_34 + 0x20)) {
          do {
            fn_0019bc50((int)puVar6 + uVar12 * 6 + 0x12,local_34 + uVar12 * 0x2c + 0xbb6);
            fn_0019bc50((int)puVar6 + (uVar12 + 1) * 6 + 0x12,
                         local_34 + (uVar12 + 1) * 0x2c + 0xbb6);
            uVar14 = uVar14 + 2;
            uVar12 = uVar12 + 2;
          } while (uVar14 < *(uint *)(local_34 + 0x20));
        }
      }
    }
    else if ((*(char *)(*(int *)(local_34 + 0x18) + 8) == '\0') ||
            (*(int *)(*(int *)(local_34 + 0x18) + 0xc) != local_80)) {
      if (*(int *)(local_34 + 0xcf8) != local_80) goto LAB_0055cbd8;
      if (*(uint *)(local_34 + 0x20) != 0) {
        uVar14 = *(uint *)(local_34 + 0x20) & 1;
        if (uVar14 == 1) {
          fn_0019bc50(param_2 + 0x2a,local_34 + 0xcfc);
        }
        uVar12 = (uint)(uVar14 == 1);
        if (uVar14 < *(uint *)(local_34 + 0x20)) {
          do {
            fn_0019bc50((int)puVar6 + uVar12 * 6 + 0x12,local_34 + uVar12 * 6 + 0xcfc);
            fn_0019bc50((int)puVar6 + (uVar12 + 1) * 6 + 0x12,local_34 + (uVar12 + 1) * 6 + 0xcfc);
            uVar14 = uVar14 + 2;
            uVar12 = uVar12 + 2;
          } while (uVar14 < *(uint *)(local_34 + 0x20));
        }
      }
    }
    else if (*(uint *)(local_34 + 0x20) != 0) {
      uVar14 = *(uint *)(local_34 + 0x20) & 1;
      if (uVar14 == 1) {
        fn_0019bc50(param_2 + 0x2a,local_34 + 0xbbc);
      }
      uVar12 = (uint)(uVar14 == 1);
      if (uVar14 < *(uint *)(local_34 + 0x20)) {
        do {
          fn_0019bc50((int)puVar6 + uVar12 * 6 + 0x12,local_34 + uVar12 * 0x2c + 0xbbc);
          fn_0019bc50((int)puVar6 + (uVar12 + 1) * 6 + 0x12,local_34 + (uVar12 + 1) * 0x2c + 0xbbc)
          ;
          uVar14 = uVar14 + 2;
          uVar12 = uVar12 + 2;
        } while (uVar14 < *(uint *)(local_34 + 0x20));
      }
    }
    *(undefined1 *)(param_2 + 0x28) = 1;
  }
LAB_0055cbd8:
  *puVar6 = local_28;
  *(int *)(param_2 + 0x1c) = local_98;
  *(int *)(param_2 + 0x20) = local_80;
  *(undefined4 *)(param_2 + 0x24) = local_7c;
  *(int *)(param_2 + 0x5c) = local_84;
  *(undefined1 *)(param_2 + 0x60) = *(undefined1 *)(local_34 + 0x51);
  return 1;
}


