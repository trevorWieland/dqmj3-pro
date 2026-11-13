#include "004991cc_004999e8.h"



void fn_004999e8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_40 [56];
  
  iVar1 = fn_0048cbf8(param_2,0);
  if (iVar1 == 0) {
    fn_00101a1c(auStack_40,&LAB_0048b34c,0x38,1);
    fn_004a1c98(param_1,auStack_40);
    fn_00100414(auStack_40,&LAB_0048b3a0,0x38,1);
    return;
  }
  fn_004a1c98(param_1,iVar1);
  return;
}



void fn_004991cc(int param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 *local_a4;
  undefined4 *local_a0;
  undefined4 *local_9c;
  undefined4 **local_98;
  int local_94;
  int local_90;
  int local_84;
  undefined4 *local_80;
  undefined1 local_7c [4];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68 [2];
  undefined4 local_64;
  undefined4 *local_60;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48 [2];
  undefined4 local_44 [2];
  int local_3c [4];
  int local_2c;
  undefined4 uStack_28;
  
  local_2c = param_1;
  uStack_28 = param_2;
  piVar5 = (int *)fn_0048cbf8(param_2,0);
  iVar4 = local_2c;
  if (piVar5 == (int *)0x0) {
    fn_00101a1c(&local_a4,&LAB_007552dc,0xc,1);
    iVar4 = local_2c;
    puVar14 = local_a0;
    puVar13 = local_a4;
    local_98 = &local_a4;
    puVar16 = local_a4;
    if (local_a4 != local_a0) {
      do {
        (**(code **)*puVar16)(puVar16);
        puVar16 = puVar16 + 8;
      } while (puVar16 != puVar14);
      local_a0 = (undefined4 *)((int)local_a0 - ((int)puVar14 - (int)puVar13 & 0xffffffe0U));
    }
    iVar10 = *(int *)(iVar4 + 8);
    iVar6 = *(int *)(iVar4 + 0xc);
    if ((uint)(*(int *)(iVar10 + 0x10) - iVar6) < 4) {
      *(undefined1 *)(iVar4 + 4) = 1;
    }
    else {
      puVar7 = (uint *)(iVar6 + *(int *)(iVar10 + 0xc) + *(int *)(iVar10 + 0x18));
      uVar12 = *puVar7;
      bVar1 = *(byte *)((int)puVar7 + 3);
      *(int *)(iVar4 + 0xc) = iVar6 + 4;
      uVar12 = uVar12 & 0xffffff | (uint)bVar1 << 0x18;
      if (0x7ffffff < uVar12) {
        fn_002ff628(8,&DAT_004995a8,&DAT_004995a8,uVar12,0x7ffffff);
      }
      if ((uint)((int)local_9c - (int)local_a4 >> 5) < uVar12) {
        uVar15 = (int)local_a0 - (int)local_a4 >> 5;
        uVar11 = uVar15 + (uVar15 >> 1) + (uVar15 >> 3);
        uVar8 = uVar15 + 0x20;
        if (uVar15 + 0x20 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 <= uVar12) {
          uVar8 = uVar12;
        }
        puVar9 = (undefined4 *)fn_0015ece0(uVar8 << 5);
        puVar16 = local_a0;
        puVar13 = puVar9;
        for (puVar14 = local_a4; puVar3 = local_a4, puVar14 != local_a0; puVar14 = puVar14 + 8) {
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = &DAT_00855634;
            *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar14 + 1);
            uVar17 = puVar14[3];
            puVar13[2] = puVar14[2];
            puVar13[3] = uVar17;
            puVar13[4] = puVar14[4];
            puVar13[5] = puVar14[5];
            *(undefined2 *)(puVar13 + 6) = *(undefined2 *)(puVar14 + 6);
            puVar13[7] = puVar14[7];
            *puVar13 = &DAT_00854c58;
          }
          puVar13 = puVar13 + 8;
        }
        for (; puVar3 != puVar16; puVar3 = puVar3 + 8) {
          (**(code **)*puVar3)(puVar3);
        }
        fn_0014f1bc(local_a4);
        local_a0 = (undefined4 *)(((int)local_a0 - (int)local_a4 & 0xffffffe0U) + (int)puVar9);
        local_9c = puVar9 + uVar8 * 8;
        local_a4 = puVar9;
      }
      uVar15 = 0;
      while( true ) {
        if ((uVar12 <= uVar15) || (*(char *)(iVar4 + 4) != '\0')) goto LAB_004999bc;
        local_7c[0] = 0;
        local_80 = &DAT_00854c58;
        cVar2 = *(char *)(iVar4 + 0x3b);
        local_3c[0] = 0;
        if (((cVar2 == '\0') &&
            ((fn_0074a4c8(iVar4,local_7c), *(char *)(iVar4 + 4) != '\0' ||
             (fn_0074a528(iVar4,local_3c), *(char *)(iVar4 + 4) != '\0')))) ||
           ((local_84 = *(int *)(iVar4 + 0xc), *(char *)(iVar4 + 4) != '\0' ||
            ((((fn_0074a5fc(iVar4,&local_78), *(char *)(iVar4 + 4) != '\0' ||
               (fn_0074a528(iVar4,&local_70), *(char *)(iVar4 + 4) != '\0')) ||
              (fn_0074a528(iVar4,&local_6c), *(char *)(iVar4 + 4) != '\0')) ||
             ((fn_0074a598(iVar4,local_68), *(char *)(iVar4 + 4) != '\0' ||
              (fn_0074a528(iVar4,&local_64), *(char *)(iVar4 + 4) != '\0')))))))) break;
        if (cVar2 == '\0') {
          uVar8 = local_84 + local_3c[0];
          if ((uVar8 < *(uint *)(iVar4 + 0xc)) || (*(uint *)(*(int *)(iVar4 + 8) + 0x10) < uVar8)) {
            *(undefined1 *)(iVar4 + 4) = 1;
          }
          else {
            *(uint *)(iVar4 + 0xc) = uVar8;
          }
          if (*(char *)(iVar4 + 4) != '\0') break;
        }
        if (local_a0 == local_9c) {
          fn_00793028(local_98,local_a0,&local_80);
          puVar13 = local_a0;
        }
        else {
          puVar13 = local_a0 + 8;
          if (local_a0 != (undefined4 *)0x0) {
            *local_a0 = &DAT_00855634;
            *(undefined1 *)(local_a0 + 1) = local_7c[0];
            local_a0[2] = local_78;
            local_a0[3] = uStack_74;
            local_a0[4] = local_70;
            local_a0[5] = local_6c;
            *(undefined2 *)(local_a0 + 6) = local_68[0];
            local_a0[7] = local_64;
            *local_a0 = &DAT_00854c58;
          }
        }
        local_a0 = puVar13;
        uVar15 = uVar15 + 1;
      }
      puVar14 = local_a0;
      puVar13 = local_a4;
      puVar16 = local_a4;
      if (local_a4 != local_a0) {
        do {
          (**(code **)*puVar16)(puVar16);
          puVar16 = puVar16 + 8;
        } while (puVar16 != puVar14);
        local_a0 = (undefined4 *)((int)local_a0 - ((int)puVar14 - (int)puVar13 & 0xffffffe0U));
      }
    }
LAB_004999bc:
    fn_00100414(&local_a4,fn_004b8e6c,0xc,1);
    return;
  }
  puVar14 = (undefined4 *)piVar5[1];
  puVar16 = (undefined4 *)*piVar5;
  puVar13 = puVar16;
  if (puVar16 != puVar14) {
    do {
      (**(code **)*puVar13)(puVar13);
      puVar13 = puVar13 + 8;
    } while (puVar13 != puVar14);
    piVar5[1] = piVar5[1] - ((int)puVar14 - (int)puVar16 & 0xffffffe0U);
  }
  iVar10 = *(int *)(iVar4 + 8);
  iVar6 = *(int *)(iVar4 + 0xc);
  if ((uint)(*(int *)(iVar10 + 0x10) - iVar6) < 4) {
    *(undefined1 *)(iVar4 + 4) = 1;
  }
  else {
    puVar7 = (uint *)(iVar6 + *(int *)(iVar10 + 0xc) + *(int *)(iVar10 + 0x18));
    uVar12 = *puVar7;
    bVar1 = *(byte *)((int)puVar7 + 3);
    *(int *)(iVar4 + 0xc) = iVar6 + 4;
    uVar12 = uVar12 & 0xffffff | (uint)bVar1 << 0x18;
    if (0x7ffffff < uVar12) {
      fn_002ff628(8,&DAT_004995a8,&DAT_004995a8,uVar12,0x7ffffff);
    }
    if ((uint)(piVar5[2] - *piVar5 >> 5) < uVar12) {
      uVar15 = piVar5[1] - *piVar5 >> 5;
      uVar8 = uVar15 + (uVar15 >> 1) + (uVar15 >> 3);
      if (uVar8 < uVar15 + 0x20) {
        uVar8 = uVar15 + 0x20;
      }
      uVar15 = uVar12;
      if (uVar12 < uVar8) {
        uVar15 = uVar8;
      }
      local_98 = (undefined4 **)fn_0015ece0(uVar15 << 5);
      iVar10 = piVar5[1];
      puVar13 = local_98;
      for (iVar6 = *piVar5; iVar6 != iVar10; iVar6 = iVar6 + 0x20) {
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = &DAT_00855634;
          *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(iVar6 + 4);
          uVar17 = *(undefined4 *)(iVar6 + 0xc);
          puVar13[2] = *(undefined4 *)(iVar6 + 8);
          puVar13[3] = uVar17;
          puVar13[4] = *(undefined4 *)(iVar6 + 0x10);
          puVar13[5] = *(undefined4 *)(iVar6 + 0x14);
          *(undefined2 *)(puVar13 + 6) = *(undefined2 *)(iVar6 + 0x18);
          puVar13[7] = *(undefined4 *)(iVar6 + 0x1c);
          *puVar13 = &DAT_00854c58;
        }
        puVar13 = puVar13 + 8;
      }
      puVar14 = (undefined4 *)piVar5[1];
      for (puVar13 = (undefined4 *)*piVar5; puVar13 != puVar14; puVar13 = puVar13 + 8) {
        (**(code **)*puVar13)(puVar13);
      }
      fn_0014f1bc(*piVar5);
      iVar6 = *piVar5;
      *piVar5 = (int)local_98;
      piVar5[2] = (int)(local_98 + uVar15 * 8);
      piVar5[1] = (piVar5[1] - iVar6 & 0xffffffe0U) + (int)local_98;
    }
    uVar15 = 0;
    while( true ) {
      if (uVar12 <= uVar15) {
        return;
      }
      if (*(char *)(iVar4 + 4) != '\0') {
        return;
      }
      local_5c[0] = 0;
      local_60 = &DAT_00854c58;
      local_90 = (int)*(char *)(iVar4 + 0x3b);
      local_94 = 0;
      if ((((local_90 == 0) &&
           ((fn_0074a4c8(iVar4,local_5c), *(char *)(iVar4 + 4) != '\0' ||
            (fn_0074a528(iVar4,&local_94), *(char *)(iVar4 + 4) != '\0')))) ||
          (iVar6 = *(int *)(iVar4 + 0xc), *(char *)(iVar4 + 4) != '\0')) ||
         ((((fn_0074a5fc(iVar4,&local_58), *(char *)(iVar4 + 4) != '\0' ||
            (fn_0074a528(iVar4,&local_50), *(char *)(iVar4 + 4) != '\0')) ||
           (fn_0074a528(iVar4,&local_4c), *(char *)(iVar4 + 4) != '\0')) ||
          ((fn_0074a598(iVar4,local_48), *(char *)(iVar4 + 4) != '\0' ||
           (fn_0074a528(iVar4,local_44), *(char *)(iVar4 + 4) != '\0')))))) break;
      if (local_90 == 0) {
        uVar8 = iVar6 + local_94;
        if ((uVar8 < *(uint *)(iVar4 + 0xc)) || (*(uint *)(*(int *)(iVar4 + 8) + 0x10) < uVar8)) {
          *(undefined1 *)(iVar4 + 4) = 1;
        }
        else {
          *(uint *)(iVar4 + 0xc) = uVar8;
        }
        if (*(char *)(iVar4 + 4) != '\0') break;
      }
      puVar13 = (undefined4 *)piVar5[1];
      if (puVar13 == (undefined4 *)piVar5[2]) {
        fn_00793028(piVar5,puVar13,&local_60);
      }
      else {
        piVar5[1] = (int)(puVar13 + 8);
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = &DAT_00855634;
          *(undefined1 *)(puVar13 + 1) = local_5c[0];
          puVar13[2] = local_58;
          puVar13[3] = uStack_54;
          puVar13[4] = local_50;
          puVar13[5] = local_4c;
          *(undefined2 *)(puVar13 + 6) = local_48[0];
          puVar13[7] = local_44[0];
          *puVar13 = &DAT_00854c58;
        }
      }
      uVar15 = uVar15 + 1;
    }
    puVar14 = (undefined4 *)piVar5[1];
    puVar16 = (undefined4 *)*piVar5;
    puVar13 = puVar16;
    if (puVar16 != puVar14) {
      do {
        (**(code **)*puVar13)(puVar13);
        puVar13 = puVar13 + 8;
      } while (puVar13 != puVar14);
      piVar5[1] = piVar5[1] - ((int)puVar14 - (int)puVar16 & 0xffffffe0U);
    }
  }
  return;
}


