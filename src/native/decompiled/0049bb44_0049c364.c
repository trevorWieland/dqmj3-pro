#include "0049bb44_0049c364.h"



void fn_0049c364(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_50;
  undefined1 local_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [2];
  undefined1 auStack_42 [2];
  undefined1 auStack_40 [32];
  int local_20 [2];
  
  iVar2 = fn_0048cbf8(param_2,0);
  if (iVar2 == 0) {
    fn_00101a1c(&local_50,&LAB_0048b34c,0x38,1);
    fn_004a1c98(param_1,&local_50);
    if (*(char *)(param_1 + 4) != '\0') {
      fn_00100414(&local_50,&LAB_0048b3a0,0x38,1);
      return;
    }
    fn_00100414(&local_50,&LAB_0048b3a0,0x38,1);
  }
  else {
    fn_004a1c98(param_1,iVar2);
    if (*(char *)(param_1 + 4) != '\0') {
      return;
    }
  }
  iVar2 = fn_0048cbf8(param_2,1);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 4) = 0;
    cVar1 = *(char *)(param_1 + 0x3b);
    local_50 = 0;
    if ((((cVar1 != '\0') ||
         ((fn_0074a4c8(param_1,iVar2 + 4), *(char *)(param_1 + 4) == '\0' &&
          (fn_0074a528(param_1,&local_50), *(char *)(param_1 + 4) == '\0')))) &&
        (iVar4 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
       ((((fn_0074a528(param_1,iVar2 + 8), *(char *)(param_1 + 4) == '\0' &&
          (fn_0074a598(param_1,iVar2 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
         (fn_0074a598(param_1,iVar2 + 0xe), *(char *)(param_1 + 4) == '\0')) &&
        (fn_0046d648(param_1,iVar2 + 0x10), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0')))) {
      uVar3 = local_50 + iVar4;
      if ((uVar3 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar3)) {
        *(undefined1 *)(param_1 + 4) = 1;
        return;
      }
      *(uint *)(param_1 + 0xc) = uVar3;
    }
    return;
  }
  fn_00101a1c(&local_50,&LAB_004a8a18,0x30,1);
  local_4c[0] = 0;
  cVar1 = *(char *)(param_1 + 0x3b);
  local_20[0] = 0;
  if (((cVar1 != '\0') ||
      ((fn_0074a4c8(param_1,local_4c), *(char *)(param_1 + 4) == '\0' &&
       (fn_0074a528(param_1,local_20), *(char *)(param_1 + 4) == '\0')))) &&
     ((iVar2 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0' &&
      ((((fn_0074a528(param_1,auStack_48), *(char *)(param_1 + 4) == '\0' &&
         (fn_0074a598(param_1,auStack_44), *(char *)(param_1 + 4) == '\0')) &&
        (fn_0074a598(param_1,auStack_42), *(char *)(param_1 + 4) == '\0')) &&
       (fn_0046d648(param_1,auStack_40), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0')))))) {
    uVar3 = local_20[0] + iVar2;
    if ((uVar3 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar3)) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar3;
    }
  }
  fn_00100414(&local_50,&LAB_004a8a4c,0x30,1);
  return;
}



void fn_0049bb44(int param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  int local_a0;
  undefined4 *local_9c;
  undefined4 *local_98;
  undefined4 *local_94;
  undefined4 **local_90;
  undefined4 **local_84;
  int local_80 [2];
  undefined4 *local_78;
  undefined1 local_74 [4];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  int local_48;
  undefined4 local_40;
  int iStack_2c;
  undefined4 local_28;
  
  piVar10 = &local_a0;
  local_40 = 1;
  iStack_2c = param_1;
  local_28 = param_2;
  piVar4 = (int *)fn_0048cbf8(param_2,0);
  if (piVar4 == (int *)0x0) {
    fn_00101a1c(&local_9c,&LAB_007552c8,0xc,1);
    puVar14 = local_98;
    puVar13 = local_9c;
    local_84 = &local_9c;
    puVar16 = local_9c;
    if (local_9c != local_98) {
      do {
        (**(code **)*puVar16)(puVar16);
        puVar16 = puVar16 + 6;
      } while (puVar16 != puVar14);
      local_98 = local_98 + (((int)puVar14 - (int)puVar13) / 0x18) * -6;
    }
    iVar8 = *(int *)(param_1 + 8);
    iVar11 = *(int *)(param_1 + 0xc);
    if ((uint)(*(int *)(iVar8 + 0x10) - iVar11) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      puVar9 = (uint *)(*(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0xc) + iVar11);
      uVar12 = *puVar9;
      bVar1 = *(byte *)((int)puVar9 + 3);
      *(int *)(param_1 + 0xc) = iVar11 + 4;
      uVar12 = uVar12 & 0xffffff | (uint)bVar1 << 0x18;
      if (0xaaaaaaa < uVar12) {
        local_a0 = 0xaaaaaaa;
        fn_002ff628(8,&DAT_0049bf14,&DAT_0049bf14,uVar12);
      }
      if ((uint)(((int)local_94 - (int)local_9c) / 0x18) < uVar12) {
        uVar15 = ((int)local_98 - (int)local_9c) / 0x18;
        uVar5 = uVar15 + (uVar15 >> 1) + (uVar15 >> 3);
        if (uVar5 < uVar15 + 0x20) {
          uVar5 = uVar15 + 0x20;
        }
        if (uVar5 <= uVar12) {
          uVar5 = uVar12;
        }
        puVar6 = (undefined4 *)fn_0015ece0(uVar5 * 0x18);
        puVar16 = local_98;
        puVar13 = puVar6;
        for (puVar14 = local_9c; puVar3 = local_9c, puVar14 != local_98; puVar14 = puVar14 + 6) {
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = &DAT_00855318;
            *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar14 + 1);
            uVar17 = puVar14[3];
            puVar13[2] = puVar14[2];
            puVar13[3] = uVar17;
            puVar13[4] = puVar14[4];
            *puVar13 = &DAT_008547f8;
          }
          puVar13 = puVar13 + 6;
        }
        for (; puVar3 != puVar16; puVar3 = puVar3 + 6) {
          (**(code **)*puVar3)(puVar3);
        }
        fn_0014f1bc(local_9c);
        local_94 = puVar6 + uVar5 * 6;
        local_98 = puVar6 + (((int)local_98 - (int)local_9c) / 0x18) * 6;
        local_9c = puVar6;
      }
      uVar15 = 0;
      while( true ) {
        if ((uVar12 <= uVar15) || (*(char *)(param_1 + 4) != '\0')) goto LAB_0049c304;
        local_74[0] = 0;
        local_78 = &DAT_008547f8;
        cVar2 = *(char *)(param_1 + 0x3b);
        local_80[0] = 0;
        if ((((cVar2 == '\0') &&
             ((fn_0074a4c8(param_1,local_74), *(char *)(param_1 + 4) != '\0' ||
              (fn_0074a528(param_1,local_80), *(char *)(param_1 + 4) != '\0')))) ||
            (local_48 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) != '\0')) ||
           ((fn_0074a5fc(param_1,&local_70), *(char *)(param_1 + 4) != '\0' ||
            (fn_0074a528(param_1,local_68), *(char *)(param_1 + 4) != '\0')))) break;
        if (cVar2 == '\0') {
          uVar5 = local_48 + local_80[0];
          if ((uVar5 < *(uint *)(param_1 + 0xc)) ||
             (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar5)) {
            *(undefined1 *)(param_1 + 4) = 1;
          }
          else {
            *(uint *)(param_1 + 0xc) = uVar5;
          }
          if (*(char *)(param_1 + 4) != '\0') break;
        }
        if (local_98 == local_94) {
          fn_00792dc4(local_84,local_98,&local_78);
          puVar13 = local_98;
        }
        else {
          puVar13 = local_98 + 6;
          if (local_98 != (undefined4 *)0x0) {
            *local_98 = &DAT_00855318;
            *(undefined1 *)(local_98 + 1) = local_74[0];
            local_98[2] = local_70;
            local_98[3] = uStack_6c;
            local_98[4] = local_68[0];
            *local_98 = &DAT_008547f8;
          }
        }
        local_98 = puVar13;
        uVar15 = uVar15 + 1;
      }
      puVar14 = local_98;
      puVar13 = local_9c;
      puVar16 = local_9c;
      if (local_9c != local_98) {
        do {
          (**(code **)*puVar16)(puVar16);
          puVar16 = puVar16 + 6;
        } while (puVar16 != puVar14);
        local_98 = local_98 + (((int)puVar14 - (int)puVar13) / 0x18) * -6;
      }
    }
LAB_0049c304:
    if (*(char *)(param_1 + 4) != '\0') {
      fn_00100414(&local_9c,fn_004b8e2c,0xc,1);
      return;
    }
    fn_00100414(&local_9c,fn_004b8e2c,0xc,1);
  }
  else {
    puVar14 = (undefined4 *)piVar4[1];
    puVar16 = (undefined4 *)*piVar4;
    puVar13 = puVar16;
    local_9c = puVar14;
    if (puVar16 != puVar14) {
      do {
        (**(code **)*puVar13)(puVar13);
        puVar13 = puVar13 + 6;
      } while (puVar13 != puVar14);
      piVar4[1] = piVar4[1] + (((int)local_9c - (int)puVar16) / 0x18) * -0x18;
    }
    iVar8 = *(int *)(param_1 + 8);
    iVar11 = *(int *)(param_1 + 0xc);
    if ((uint)(*(int *)(iVar8 + 0x10) - iVar11) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      puVar9 = (uint *)(*(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0xc) + iVar11);
      uVar12 = *puVar9;
      bVar1 = *(byte *)((int)puVar9 + 3);
      *(int *)(param_1 + 0xc) = iVar11 + 4;
      uVar12 = uVar12 & 0xffffff | (uint)bVar1 << 0x18;
      if (0xaaaaaaa < uVar12) {
        local_a0 = 0xaaaaaaa;
        fn_002ff628(8,&DAT_0049bf14,&DAT_0049bf14,uVar12);
      }
      if ((uint)((piVar4[2] - *piVar4) / 0x18) < uVar12) {
        uVar15 = (piVar4[1] - *piVar4) / 0x18;
        uVar5 = uVar15 + (uVar15 >> 1) + (uVar15 >> 3);
        if (uVar5 < uVar15 + 0x20) {
          uVar5 = uVar15 + 0x20;
        }
        uVar15 = uVar12;
        if (uVar12 < uVar5) {
          uVar15 = uVar5;
        }
        local_94 = (undefined4 *)fn_0015ece0(uVar15 * 0x18);
        iVar11 = piVar4[1];
        puVar13 = local_94;
        for (iVar8 = *piVar4; iVar8 != iVar11; iVar8 = iVar8 + 0x18) {
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = &DAT_00855318;
            *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(iVar8 + 4);
            uVar17 = *(undefined4 *)(iVar8 + 0xc);
            puVar13[2] = *(undefined4 *)(iVar8 + 8);
            puVar13[3] = uVar17;
            puVar13[4] = *(undefined4 *)(iVar8 + 0x10);
            *puVar13 = &DAT_008547f8;
          }
          puVar13 = puVar13 + 6;
        }
        puVar14 = (undefined4 *)piVar4[1];
        for (puVar13 = (undefined4 *)*piVar4; puVar13 != puVar14; puVar13 = puVar13 + 6) {
          (**(code **)*puVar13)(puVar13);
        }
        fn_0014f1bc(*piVar4);
        piVar4[1] = (int)(local_94 + ((piVar4[1] - *piVar4) / 0x18) * 6);
        *piVar4 = (int)local_94;
        piVar4[2] = (int)(local_94 + uVar15 * 6);
      }
      uVar15 = 0;
      while( true ) {
        if ((uVar12 <= uVar15) || (*(char *)(param_1 + 4) != '\0')) goto LAB_0049bf3c;
        local_90 = &local_60;
        local_5c[0] = 0;
        local_60 = &DAT_008547f8;
        cVar2 = *(char *)(param_1 + 0x3b);
        local_a0 = 0;
        if (((cVar2 == '\0') &&
            ((fn_0074a4c8(param_1,local_5c), *(char *)(param_1 + 4) != '\0' ||
             (fn_0074a528(param_1,&local_a0), *(char *)(param_1 + 4) != '\0')))) ||
           ((local_98 = *(undefined4 **)(param_1 + 0xc), *(char *)(param_1 + 4) != '\0' ||
            ((fn_0074a5fc(param_1,local_90 + 2), *(char *)(param_1 + 4) != '\0' ||
             (fn_0074a528(param_1,local_90 + 4), *(char *)(param_1 + 4) != '\0')))))) break;
        if (cVar2 == '\0') {
          uVar5 = (int)local_98 + local_a0;
          if ((uVar5 < *(uint *)(param_1 + 0xc)) ||
             (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar5)) {
            *(undefined1 *)(param_1 + 4) = 1;
          }
          else {
            *(uint *)(param_1 + 0xc) = uVar5;
          }
          if (*(char *)(param_1 + 4) != '\0') break;
        }
        puVar13 = (undefined4 *)piVar4[1];
        if (puVar13 == (undefined4 *)piVar4[2]) {
          fn_00792dc4(piVar4,puVar13,&local_60);
        }
        else {
          piVar4[1] = (int)(puVar13 + 6);
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = &DAT_00855318;
            *(undefined1 *)(puVar13 + 1) = local_5c[0];
            puVar13[2] = local_58;
            puVar13[3] = uStack_54;
            puVar13[4] = local_50;
            *puVar13 = &DAT_008547f8;
          }
        }
        uVar15 = uVar15 + 1;
      }
      puVar14 = (undefined4 *)*piVar4;
      puVar16 = (undefined4 *)piVar4[1];
      puVar13 = puVar14;
      if (puVar14 != puVar16) {
        do {
          (**(code **)*puVar13)(puVar13);
          puVar13 = puVar13 + 6;
        } while (puVar13 != puVar16);
        piVar4[1] = piVar4[1] + (((int)puVar16 - (int)puVar14) / 0x18) * -0x18;
      }
    }
LAB_0049bf3c:
    if (*(char *)(param_1 + 4) != '\0') {
      return;
    }
  }
  puVar7 = (undefined1 *)fn_0048cbf8(local_28,local_40);
  if (puVar7 != (undefined1 *)0x0) {
    piVar10 = (int *)puVar7;
  }
  fn_00454da8(param_1,piVar10);
  return;
}


