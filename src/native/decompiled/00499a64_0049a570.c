#include "00499a64_0049a570.h"



undefined4
fn_0049a570(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_60 [64];
  
  fn_004b73b0(auStack_60);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_60,*(undefined2 *)(param_1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_60,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return 0;
  }
  fn_004ba7ac(auStack_60,0x1b);
  fn_0074cf38(auStack_60,param_3);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_4);
    fn_0048ca64(param_2,param_5);
  }
  DAT_008e66f0 = fn_0049b30c;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_60);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_60);
  fn_004b7520(auStack_60);
  return uVar4;
}



void fn_0049a308(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_60;
  undefined1 local_5c [4];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [16];
  int local_20 [2];
  
  iVar2 = fn_0048cbf8(param_2,0);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 4) = 0;
    cVar1 = *(char *)(param_1 + 0x3b);
    local_60 = 0;
    if ((((cVar1 != '\0') ||
         ((fn_0074a4c8(param_1,iVar2 + 4), *(char *)(param_1 + 4) == '\0' &&
          (fn_0074a528(param_1,&local_60), *(char *)(param_1 + 4) == '\0')))) &&
        (iVar4 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
       ((((fn_0074a5fc(param_1,iVar2 + 8), *(char *)(param_1 + 4) == '\0' &&
          (fn_0045f7f0(param_1,iVar2 + 0x10), *(char *)(param_1 + 4) == '\0')) &&
         (fn_0074b7d8(param_1,iVar2 + 0x18), *(char *)(param_1 + 4) == '\0')) &&
        ((fn_0074b7d8(param_1,iVar2 + 0x24), *(char *)(param_1 + 4) == '\0' &&
         (fn_0074af34(param_1,iVar2 + 0x30), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0'))))))
    {
      uVar3 = local_60 + iVar4;
      if ((uVar3 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar3)) {
        *(undefined1 *)(param_1 + 4) = 1;
      }
      else {
        *(uint *)(param_1 + 0xc) = uVar3;
      }
    }
    return;
  }
  fn_00101a1c(&local_60,&LAB_0048e160,0x40,1);
  local_5c[0] = 0;
  cVar1 = *(char *)(param_1 + 0x3b);
  local_20[0] = 0;
  if (((cVar1 != '\0') ||
      ((fn_0074a4c8(param_1,local_5c), *(char *)(param_1 + 4) == '\0' &&
       (fn_0074a528(param_1,local_20), *(char *)(param_1 + 4) == '\0')))) &&
     ((iVar2 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0' &&
      ((((fn_0074a5fc(param_1,auStack_58), *(char *)(param_1 + 4) == '\0' &&
         (fn_0045f7f0(param_1,auStack_50), *(char *)(param_1 + 4) == '\0')) &&
        (fn_0074b7d8(param_1,auStack_48), *(char *)(param_1 + 4) == '\0')) &&
       ((fn_0074b7d8(param_1,auStack_3c), *(char *)(param_1 + 4) == '\0' &&
        (fn_0074af34(param_1,auStack_30), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0')))))))) {
    uVar3 = local_20[0] + iVar2;
    if ((uVar3 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar3)) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar3;
    }
  }
  fn_00100414(&local_60,&LAB_0048e1b4,0x40,1);
  return;
}



void fn_00499a64(int param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 *local_94;
  undefined4 *local_90;
  undefined4 *local_8c;
  undefined4 **local_88 [2];
  int local_80;
  undefined4 *local_78;
  undefined1 local_74 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined2 local_62;
  undefined4 *local_60;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  int local_48;
  int local_40;
  int local_3c;
  int local_2c;
  undefined4 uStack_28;
  
  local_2c = param_1;
  uStack_28 = param_2;
  piVar5 = (int *)fn_0048cbf8(param_2,0);
  iVar4 = local_2c;
  if (piVar5 == (int *)0x0) {
    fn_00101a1c(&local_94,&LAB_007552f0,0xc,1);
    iVar4 = local_2c;
    puVar14 = local_90;
    puVar12 = local_94;
    local_88[0] = &local_94;
    puVar13 = local_94;
    if (local_94 != local_90) {
      do {
        (**(code **)*puVar13)(puVar13);
        puVar13 = puVar13 + 6;
      } while (puVar13 != puVar14);
      local_90 = local_90 + (((int)puVar14 - (int)puVar12) / 0x18) * -6;
    }
    iVar6 = *(int *)(iVar4 + 8);
    iVar9 = *(int *)(iVar4 + 0xc);
    if ((uint)(*(int *)(iVar6 + 0x10) - iVar9) < 4) {
      *(undefined1 *)(iVar4 + 4) = 1;
    }
    else {
      puVar7 = (uint *)(*(int *)(iVar6 + 0x18) + *(int *)(iVar6 + 0xc) + iVar9);
      uVar10 = *puVar7;
      bVar1 = *(byte *)((int)puVar7 + 3);
      *(int *)(iVar4 + 0xc) = iVar9 + 4;
      uVar10 = uVar10 & 0xffffff | (uint)bVar1 << 0x18;
      if (0xaaaaaaa < uVar10) {
        fn_002ff628(8,&DAT_00499e30,&DAT_00499e30,uVar10,0xaaaaaaa);
      }
      if ((uint)(((int)local_8c - (int)local_94) / 0x18) < uVar10) {
        uVar15 = ((int)local_90 - (int)local_94) / 0x18;
        uVar8 = uVar15 + (uVar15 >> 1) + (uVar15 >> 3);
        if (uVar8 < uVar15 + 0x20) {
          uVar8 = uVar15 + 0x20;
        }
        if (uVar8 <= uVar10) {
          uVar8 = uVar10;
        }
        puVar16 = (undefined4 *)fn_0015ece0(uVar8 * 0x18);
        puVar13 = local_90;
        puVar12 = puVar16;
        for (puVar14 = local_94; puVar3 = local_94, puVar14 != local_90; puVar14 = puVar14 + 6) {
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = &DAT_00855770;
            *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar14 + 1);
            puVar12[2] = puVar14[2];
            puVar12[3] = puVar14[3];
            puVar12[4] = puVar14[4];
            *(undefined2 *)(puVar12 + 5) = *(undefined2 *)(puVar14 + 5);
            *(undefined2 *)((int)puVar12 + 0x16) = *(undefined2 *)((int)puVar14 + 0x16);
            *puVar12 = &DAT_00855170;
          }
          puVar12 = puVar12 + 6;
        }
        for (; puVar3 != puVar13; puVar3 = puVar3 + 6) {
          (**(code **)*puVar3)(puVar3);
        }
        fn_0014f1bc(local_94);
        local_90 = puVar16 + (((int)local_90 - (int)local_94) / 0x18) * 6;
        local_8c = puVar16 + uVar8 * 6;
        local_94 = puVar16;
      }
      uVar15 = 0;
      while( true ) {
        if ((uVar10 <= uVar15) || (*(char *)(iVar4 + 4) != '\0')) goto LAB_0049a2dc;
        local_74[0] = 0;
        local_78 = &DAT_00855170;
        cVar2 = *(char *)(iVar4 + 0x3b);
        local_40 = 0;
        if (((cVar2 == '\0') &&
            ((fn_0074a4c8(iVar4,local_74), *(char *)(iVar4 + 4) != '\0' ||
             (fn_0074a528(iVar4,&local_40), *(char *)(iVar4 + 4) != '\0')))) ||
           ((local_3c = *(int *)(iVar4 + 0xc), *(char *)(iVar4 + 4) != '\0' ||
            ((((fn_0074a528(iVar4,&local_70), *(char *)(iVar4 + 4) != '\0' ||
               (fn_0074a528(iVar4,&local_6c), *(char *)(iVar4 + 4) != '\0')) ||
              (fn_0074a528(iVar4,&local_68), *(char *)(iVar4 + 4) != '\0')) ||
             ((fn_0074a598(iVar4,&local_64), *(char *)(iVar4 + 4) != '\0' ||
              (fn_0074a598(iVar4,&local_62), *(char *)(iVar4 + 4) != '\0')))))))) break;
        if (cVar2 == '\0') {
          uVar8 = local_3c + local_40;
          if ((uVar8 < *(uint *)(iVar4 + 0xc)) || (*(uint *)(*(int *)(iVar4 + 8) + 0x10) < uVar8)) {
            *(undefined1 *)(iVar4 + 4) = 1;
          }
          else {
            *(uint *)(iVar4 + 0xc) = uVar8;
          }
          if (*(char *)(iVar4 + 4) != '\0') break;
        }
        if (local_90 == local_8c) {
          fn_00793a18(local_88[0],local_90,&local_78);
          puVar12 = local_90;
        }
        else {
          puVar12 = local_90 + 6;
          if (local_90 != (undefined4 *)0x0) {
            *local_90 = &DAT_00855770;
            *(undefined1 *)(local_90 + 1) = local_74[0];
            local_90[2] = local_70;
            local_90[3] = local_6c;
            local_90[4] = local_68;
            *(undefined2 *)(local_90 + 5) = local_64;
            *(undefined2 *)((int)local_90 + 0x16) = local_62;
            *local_90 = &DAT_00855170;
          }
        }
        local_90 = puVar12;
        uVar15 = uVar15 + 1;
      }
      puVar14 = local_90;
      puVar12 = local_94;
      puVar13 = local_94;
      if (local_94 != local_90) {
        do {
          (**(code **)*puVar13)(puVar13);
          puVar13 = puVar13 + 6;
        } while (puVar13 != puVar14);
        local_90 = local_90 + (((int)puVar14 - (int)puVar12) / 0x18) * -6;
      }
    }
LAB_0049a2dc:
    fn_00100414(&local_94,fn_004b8fd4,0xc,1);
    return;
  }
  puVar13 = (undefined4 *)piVar5[1];
  puVar16 = (undefined4 *)*piVar5;
  puVar12 = puVar16;
  puVar14 = puVar13;
  if (puVar16 != puVar13) {
    do {
      (**(code **)*puVar12)(puVar12);
      puVar12 = puVar12 + 6;
    } while (puVar12 != puVar13);
    piVar5[1] = piVar5[1] + (((int)puVar14 - (int)puVar16) / 0x18) * -0x18;
  }
  iVar6 = *(int *)(iVar4 + 8);
  iVar9 = *(int *)(iVar4 + 0xc);
  if ((uint)(*(int *)(iVar6 + 0x10) - iVar9) < 4) {
    *(undefined1 *)(iVar4 + 4) = 1;
  }
  else {
    puVar7 = (uint *)(*(int *)(iVar6 + 0x18) + *(int *)(iVar6 + 0xc) + iVar9);
    uVar10 = *puVar7;
    bVar1 = *(byte *)((int)puVar7 + 3);
    *(int *)(iVar4 + 0xc) = iVar9 + 4;
    uVar10 = uVar10 & 0xffffff | (uint)bVar1 << 0x18;
    if (0xaaaaaaa < uVar10) {
      fn_002ff628(8,&DAT_00499e30,&DAT_00499e30,uVar10,0xaaaaaaa);
    }
    if ((uint)((piVar5[2] - *piVar5) / 0x18) < uVar10) {
      uVar15 = (piVar5[1] - *piVar5) / 0x18;
      uVar11 = uVar15 + (uVar15 >> 1) + (uVar15 >> 3);
      uVar8 = uVar15 + 0x20;
      if (uVar15 + 0x20 <= uVar11) {
        uVar8 = uVar11;
      }
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      local_94 = (undefined4 *)fn_0015ece0(uVar8 * 0x18);
      iVar9 = piVar5[1];
      puVar12 = local_94;
      for (iVar6 = *piVar5; iVar6 != iVar9; iVar6 = iVar6 + 0x18) {
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = &DAT_00855770;
          *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(iVar6 + 4);
          puVar12[2] = *(undefined4 *)(iVar6 + 8);
          puVar12[3] = *(undefined4 *)(iVar6 + 0xc);
          puVar12[4] = *(undefined4 *)(iVar6 + 0x10);
          *(undefined2 *)(puVar12 + 5) = *(undefined2 *)(iVar6 + 0x14);
          *(undefined2 *)((int)puVar12 + 0x16) = *(undefined2 *)(iVar6 + 0x16);
          *puVar12 = &DAT_00855170;
        }
        puVar12 = puVar12 + 6;
      }
      puVar14 = (undefined4 *)piVar5[1];
      for (puVar12 = (undefined4 *)*piVar5; puVar12 != puVar14; puVar12 = puVar12 + 6) {
        (**(code **)*puVar12)(puVar12);
      }
      fn_0014f1bc(*piVar5);
      piVar5[1] = (int)(local_94 + ((piVar5[1] - *piVar5) / 0x18) * 6);
      *piVar5 = (int)local_94;
      piVar5[2] = (int)(local_94 + uVar8 * 6);
    }
    uVar15 = 0;
    while( true ) {
      if (uVar10 <= uVar15) {
        return;
      }
      if (*(char *)(iVar4 + 4) != '\0') {
        return;
      }
      local_5c[0] = 0;
      local_60 = &DAT_00855170;
      local_48 = (int)*(char *)(iVar4 + 0x3b);
      local_88[0] = (undefined4 **)0x0;
      if ((((local_48 == 0) &&
           ((fn_0074a4c8(iVar4,local_5c), *(char *)(iVar4 + 4) != '\0' ||
            (fn_0074a528(iVar4,local_88), *(char *)(iVar4 + 4) != '\0')))) ||
          (local_80 = *(int *)(iVar4 + 0xc), *(char *)(iVar4 + 4) != '\0')) ||
         ((((fn_0074a528(iVar4,&local_58), *(char *)(iVar4 + 4) != '\0' ||
            (fn_0074a528(iVar4,&local_54), *(char *)(iVar4 + 4) != '\0')) ||
           (fn_0074a528(iVar4,&local_50), *(char *)(iVar4 + 4) != '\0')) ||
          ((fn_0074a598(iVar4,&local_4c), *(char *)(iVar4 + 4) != '\0' ||
           (fn_0074a598(iVar4,&local_4a), *(char *)(iVar4 + 4) != '\0')))))) break;
      if (local_48 == 0) {
        uVar8 = local_80 + (int)local_88[0];
        if ((uVar8 < *(uint *)(iVar4 + 0xc)) || (*(uint *)(*(int *)(iVar4 + 8) + 0x10) < uVar8)) {
          *(undefined1 *)(iVar4 + 4) = 1;
        }
        else {
          *(uint *)(iVar4 + 0xc) = uVar8;
        }
        if (*(char *)(iVar4 + 4) != '\0') break;
      }
      puVar12 = (undefined4 *)piVar5[1];
      if (puVar12 == (undefined4 *)piVar5[2]) {
        fn_00793a18(piVar5,puVar12,&local_60);
      }
      else {
        piVar5[1] = (int)(puVar12 + 6);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = &DAT_00855770;
          *(undefined1 *)(puVar12 + 1) = local_5c[0];
          puVar12[2] = local_58;
          puVar12[3] = local_54;
          puVar12[4] = local_50;
          *(undefined2 *)(puVar12 + 5) = local_4c;
          *(undefined2 *)((int)puVar12 + 0x16) = local_4a;
          *puVar12 = &DAT_00855170;
        }
      }
      uVar15 = uVar15 + 1;
    }
    puVar14 = (undefined4 *)piVar5[1];
    puVar13 = (undefined4 *)*piVar5;
    puVar12 = puVar13;
    if (puVar13 != puVar14) {
      do {
        (**(code **)*puVar12)(puVar12);
        puVar12 = puVar12 + 6;
      } while (puVar12 != puVar14);
      piVar5[1] = piVar5[1] + (((int)puVar14 - (int)puVar13) / 0x18) * -0x18;
    }
  }
  return;
}


