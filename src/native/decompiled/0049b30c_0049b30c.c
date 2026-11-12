#include "0049b30c_0049b30c.h"



void fn_0049b30c(int param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 local_a0;
  undefined4 **local_9c;
  undefined4 *local_98 [2];
  undefined4 *local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  undefined4 **local_84;
  int local_74;
  undefined4 *local_70;
  undefined1 local_6c [4];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 *local_58;
  undefined1 local_54 [4];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  int iStack_2c;
  undefined4 local_28;
  
  puVar9 = &local_a0;
  local_40 = 1;
  iStack_2c = param_1;
  local_28 = param_2;
  piVar4 = (int *)fn_0048cbf8(param_2,0);
  if (piVar4 == (int *)0x0) {
    fn_00101a1c(&local_90,&LAB_007552b4,0xc,1);
    puVar13 = local_8c;
    puVar12 = local_90;
    local_84 = &local_90;
    puVar15 = local_90;
    if (local_90 != local_8c) {
      do {
        (**(code **)*puVar15)(puVar15);
        puVar15 = puVar15 + 6;
      } while (puVar15 != puVar13);
      local_8c = local_8c + (((int)puVar13 - (int)puVar12) / 0x18) * -6;
    }
    iVar7 = *(int *)(param_1 + 8);
    iVar10 = *(int *)(param_1 + 0xc);
    if ((uint)(*(int *)(iVar7 + 0x10) - iVar10) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      puVar8 = (uint *)(*(int *)(iVar7 + 0x18) + *(int *)(iVar7 + 0xc) + iVar10);
      uVar11 = *puVar8;
      bVar1 = *(byte *)((int)puVar8 + 3);
      *(int *)(param_1 + 0xc) = iVar10 + 4;
      uVar11 = uVar11 & 0xffffff | (uint)bVar1 << 0x18;
      if (0xaaaaaaa < uVar11) {
        local_a0 = 0xaaaaaaa;
        fn_002ff628(8,&DAT_0049b6e4,&DAT_0049b6e4,uVar11);
      }
      if ((uint)(((int)local_88 - (int)local_90) / 0x18) < uVar11) {
        uVar14 = ((int)local_8c - (int)local_90) / 0x18;
        uVar16 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
        if (uVar16 < uVar14 + 0x20) {
          uVar16 = uVar14 + 0x20;
        }
        if (uVar16 <= uVar11) {
          uVar16 = uVar11;
        }
        puVar5 = (undefined4 *)fn_0015ece0(uVar16 * 0x18);
        puVar15 = local_8c;
        puVar12 = puVar5;
        for (puVar13 = local_90; puVar3 = local_90, puVar13 != local_8c; puVar13 = puVar13 + 6) {
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = &DAT_008550b4;
            *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar13 + 1);
            uVar17 = puVar13[3];
            puVar12[2] = puVar13[2];
            puVar12[3] = uVar17;
            uVar17 = puVar13[5];
            puVar12[4] = puVar13[4];
            puVar12[5] = uVar17;
            *puVar12 = &DAT_008540d0;
          }
          puVar12 = puVar12 + 6;
        }
        for (; puVar3 != puVar15; puVar3 = puVar3 + 6) {
          (**(code **)*puVar3)(puVar3);
        }
        fn_0014f1bc(local_90);
        local_88 = puVar5 + uVar16 * 6;
        local_8c = puVar5 + (((int)local_8c - (int)local_90) / 0x18) * 6;
        local_90 = puVar5;
      }
      uVar14 = 0;
      while( true ) {
        if ((uVar11 <= uVar14) || (*(char *)(param_1 + 4) != '\0')) goto LAB_0049bae4;
        local_6c[0] = 0;
        local_70 = &DAT_008540d0;
        cVar2 = *(char *)(param_1 + 0x3b);
        local_74 = 0;
        if ((((cVar2 == '\0') &&
             ((fn_0074a4c8(param_1,local_6c), *(char *)(param_1 + 4) != '\0' ||
              (fn_0074a528(param_1,&local_74), *(char *)(param_1 + 4) != '\0')))) ||
            (local_98[0] = *(undefined4 **)(param_1 + 0xc), *(char *)(param_1 + 4) != '\0')) ||
           ((fn_0074a5fc(param_1,&local_68), *(char *)(param_1 + 4) != '\0' ||
            (fn_0074a5fc(param_1,&local_60), *(char *)(param_1 + 4) != '\0')))) break;
        if (cVar2 == '\0') {
          uVar16 = (int)local_98[0] + local_74;
          if ((uVar16 < *(uint *)(param_1 + 0xc)) ||
             (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar16)) {
            *(undefined1 *)(param_1 + 4) = 1;
          }
          else {
            *(uint *)(param_1 + 0xc) = uVar16;
          }
          if (*(char *)(param_1 + 4) != '\0') break;
        }
        if (local_8c == local_88) {
          fn_00792b54(local_84,local_8c,&local_70);
          puVar12 = local_8c;
        }
        else {
          puVar12 = local_8c + 6;
          if (local_8c != (undefined4 *)0x0) {
            *local_8c = &DAT_008550b4;
            *(undefined1 *)(local_8c + 1) = local_6c[0];
            local_8c[2] = local_68;
            local_8c[3] = uStack_64;
            *local_8c = &DAT_008540d0;
            local_8c[4] = local_60;
            local_8c[5] = uStack_5c;
          }
        }
        local_8c = puVar12;
        uVar14 = uVar14 + 1;
      }
      puVar13 = local_8c;
      puVar12 = local_90;
      puVar15 = local_90;
      if (local_90 != local_8c) {
        do {
          (**(code **)*puVar15)(puVar15);
          puVar15 = puVar15 + 6;
        } while (puVar15 != puVar13);
        local_8c = local_8c + (((int)puVar13 - (int)puVar12) / 0x18) * -6;
      }
    }
LAB_0049bae4:
    if (*(char *)(param_1 + 4) != '\0') {
      fn_00100414(&local_90,fn_004b8dec,0xc,1);
      return;
    }
    fn_00100414(&local_90,fn_004b8dec,0xc,1);
  }
  else {
    puVar13 = (undefined4 *)piVar4[1];
    puVar15 = (undefined4 *)*piVar4;
    puVar12 = puVar15;
    local_98[0] = puVar13;
    if (puVar15 != puVar13) {
      do {
        (**(code **)*puVar12)(puVar12);
        puVar12 = puVar12 + 6;
      } while (puVar12 != puVar13);
      piVar4[1] = piVar4[1] + (((int)local_98[0] - (int)puVar15) / 0x18) * -0x18;
    }
    iVar7 = *(int *)(param_1 + 8);
    iVar10 = *(int *)(param_1 + 0xc);
    if ((uint)(*(int *)(iVar7 + 0x10) - iVar10) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      puVar8 = (uint *)(*(int *)(iVar7 + 0x18) + *(int *)(iVar7 + 0xc) + iVar10);
      uVar11 = *puVar8;
      bVar1 = *(byte *)((int)puVar8 + 3);
      *(int *)(param_1 + 0xc) = iVar10 + 4;
      uVar11 = uVar11 & 0xffffff | (uint)bVar1 << 0x18;
      if (0xaaaaaaa < uVar11) {
        local_a0 = 0xaaaaaaa;
        fn_002ff628(8,&DAT_0049b6e4,&DAT_0049b6e4,uVar11);
      }
      if ((uint)((piVar4[2] - *piVar4) / 0x18) < uVar11) {
        uVar14 = (piVar4[1] - *piVar4) / 0x18;
        uVar16 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
        if (uVar16 < uVar14 + 0x20) {
          uVar16 = uVar14 + 0x20;
        }
        if (uVar16 <= uVar11) {
          uVar16 = uVar11;
        }
        local_90 = (undefined4 *)fn_0015ece0(uVar16 * 0x18);
        iVar10 = piVar4[1];
        puVar12 = local_90;
        for (iVar7 = *piVar4; iVar7 != iVar10; iVar7 = iVar7 + 0x18) {
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = &DAT_008550b4;
            *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(iVar7 + 4);
            uVar17 = *(undefined4 *)(iVar7 + 0xc);
            puVar12[2] = *(undefined4 *)(iVar7 + 8);
            puVar12[3] = uVar17;
            uVar17 = *(undefined4 *)(iVar7 + 0x14);
            puVar12[4] = *(undefined4 *)(iVar7 + 0x10);
            puVar12[5] = uVar17;
            *puVar12 = &DAT_008540d0;
          }
          puVar12 = puVar12 + 6;
        }
        puVar13 = (undefined4 *)piVar4[1];
        for (puVar12 = (undefined4 *)*piVar4; puVar12 != puVar13; puVar12 = puVar12 + 6) {
          (**(code **)*puVar12)(puVar12);
        }
        fn_0014f1bc(*piVar4);
        piVar4[1] = (int)(local_90 + ((piVar4[1] - *piVar4) / 0x18) * 6);
        *piVar4 = (int)local_90;
        piVar4[2] = (int)(local_90 + uVar16 * 6);
      }
      uVar14 = 0;
      while( true ) {
        if ((uVar11 <= uVar14) || (*(char *)(param_1 + 4) != '\0')) goto LAB_0049b70c;
        local_9c = &local_58;
        local_54[0] = 0;
        local_58 = &DAT_008540d0;
        cVar2 = *(char *)(param_1 + 0x3b);
        local_98[0] = (undefined4 *)0x0;
        if (((cVar2 == '\0') &&
            ((fn_0074a4c8(param_1,local_54), *(char *)(param_1 + 4) != '\0' ||
             (fn_0074a528(param_1,local_98), *(char *)(param_1 + 4) != '\0')))) ||
           ((local_8c = *(undefined4 **)(param_1 + 0xc), *(char *)(param_1 + 4) != '\0' ||
            ((fn_0074a5fc(param_1,local_9c + 2), *(char *)(param_1 + 4) != '\0' ||
             (fn_0074a5fc(param_1,local_9c + 4), *(char *)(param_1 + 4) != '\0')))))) break;
        if (cVar2 == '\0') {
          uVar16 = (int)local_8c + (int)local_98[0];
          if ((uVar16 < *(uint *)(param_1 + 0xc)) ||
             (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar16)) {
            *(undefined1 *)(param_1 + 4) = 1;
          }
          else {
            *(uint *)(param_1 + 0xc) = uVar16;
          }
          if (*(char *)(param_1 + 4) != '\0') break;
        }
        puVar12 = (undefined4 *)piVar4[1];
        if (puVar12 == (undefined4 *)piVar4[2]) {
          fn_00792b54(piVar4,puVar12,&local_58);
        }
        else {
          piVar4[1] = (int)(puVar12 + 6);
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = &DAT_008550b4;
            *(undefined1 *)(puVar12 + 1) = local_54[0];
            puVar12[2] = local_50;
            puVar12[3] = uStack_4c;
            *puVar12 = &DAT_008540d0;
            puVar12[4] = local_48;
            puVar12[5] = uStack_44;
          }
        }
        uVar14 = uVar14 + 1;
      }
      puVar13 = (undefined4 *)piVar4[1];
      puVar15 = (undefined4 *)*piVar4;
      puVar12 = puVar15;
      if (puVar15 != puVar13) {
        do {
          (**(code **)*puVar12)(puVar12);
          puVar12 = puVar12 + 6;
        } while (puVar12 != puVar13);
        piVar4[1] = piVar4[1] + (((int)puVar13 - (int)puVar15) / 0x18) * -0x18;
      }
    }
LAB_0049b70c:
    if (*(char *)(param_1 + 4) != '\0') {
      return;
    }
  }
  puVar6 = (undefined1 *)fn_0048cbf8(local_28,local_40);
  if (puVar6 != (undefined1 *)0x0) {
    puVar9 = (undefined4 *)puVar6;
  }
  fn_00454da8(param_1,puVar9);
  return;
}


