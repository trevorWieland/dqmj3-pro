#include "00401bac_00403c18.h"



void fn_00403c18(int param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *local_ec;
  undefined4 *local_e8 [4];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined *local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_28;
  
  *(undefined1 *)(param_1 + 0x21) = 0;
  uVar11 = (uint)(char)((*(char *)(param_1 + 0x22) + -1) * '\n');
  uVar10 = uVar11;
  do {
    iVar9 = 0;
    if (uVar10 < (uint)(*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 1)) {
      iVar9 = (int)*(short *)(*(int *)(param_1 + 0x40) + uVar10 * 2);
    }
    local_d8 = 0;
    local_d4 = 0;
    local_d0 = 0;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = 0;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0;
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0;
    local_a4 = 0;
    local_a0 = 0;
    local_9c = 0;
    iVar3 = fn_0026a960(iVar9);
    if (iVar3 != 0) {
      local_50 = &DAT_0010ffff;
      local_4c = 0x120011;
      local_48 = 0x13;
      local_44 = -1;
      uStack_40 = 1;
      local_3c = 0x3ffff;
      uStack_38 = 0x50004;
      uStack_34 = 0x70006;
      uStack_30 = 0xffff0002;
      local_28 = fn_00163a00(iVar9);
      iVar3 = fn_00163c80(iVar9);
      local_e8[0] = (undefined4 *)0x0;
      local_ec = (undefined4 *)0x0;
      iVar4 = (int)*(short *)((int)&local_50 + local_28 * 2);
      if (iVar4 != -1) {
        uVar5 = fn_00231ca0(iVar4,0);
        fn_00101a50(local_e8,2,&DAT_003d09e0,uVar5);
      }
      iVar3 = (int)*(short *)((int)&local_3c + iVar3 * 2);
      if (iVar3 != -1) {
        uVar5 = fn_00231ca0(iVar3,0);
        fn_00101a50(&local_ec,2,&DAT_003d09e0,uVar5);
      }
      fn_00101a50(&local_d8,0x20,L"%ls%ls",local_e8,&local_ec);
    }
    local_98 = 0;
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    local_84 = 0;
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    if ((0 < iVar9) && (iVar3 = fn_006f4114(*(undefined4 *)(param_1 + 0x4c)), 0 < iVar3)) {
      fn_00101a50(&local_98,0x20);
    }
    sVar1 = *(short *)(param_1 + 0x50);
    if (iVar9 < 1) {
LAB_00403f50:
      uVar5 = 0;
    }
    else {
      if (iVar9 == 0x175) {
        iVar3 = fn_00166804(*(undefined4 *)(param_1 + 0x4c));
        if ((iVar3 == 0) ||
           (iVar3 = fn_00182924(1), iVar3 != *(char *)(*(int *)(param_1 + 0x4c) + 0x5c)))
        goto LAB_00403f50;
      }
      else {
        local_48 = 0;
        local_44 = fn_00163a00(iVar9);
        uVar8 = 0;
        local_4c = fn_006f4114(*(undefined4 *)(param_1 + 0x4c),iVar9);
        iVar3 = local_48;
        iVar4 = *(int *)(param_1 + 0x4c);
        uVar7 = (uint)*(byte *)(iVar4 + 0x120);
        if (uVar7 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar7 & 1;
          if ((*(byte *)(iVar4 + 0x120) & 1) != 0) {
            do {
              if (*(short *)(iVar4 + uVar8 * 2 + 0x124) == iVar9) goto LAB_00403f04;
              uVar8 = (uint)(short)((short)uVar8 + 1);
            } while ((int)uVar8 < (int)uVar6);
          }
        }
        uVar8 = uVar6;
        if (uVar6 < uVar7) {
          do {
            if (*(short *)(iVar4 + uVar8 * 2 + 0x124) == iVar9) break;
            if (*(short *)(iVar4 + uVar8 * 2 + 0x126) == iVar9) {
              uVar8 = (uint)(short)((short)uVar8 + 1);
              break;
            }
            uVar8 = (uint)(short)((short)uVar8 + 2);
          } while ((int)uVar8 < (int)uVar7);
        }
LAB_00403f04:
        if ((local_44 == 2) && ('\0' < *(char *)(iVar4 + 0xba))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((sVar1 < local_4c) ||
           (iVar4 = fn_006f4938(iVar4 + 0x120,uVar8), iVar4 != 0 || (bVar2 || iVar3 != 0)))
        goto LAB_00403f50;
      }
      uVar5 = 1;
    }
    local_e8[0] = &local_98;
    local_ec = &local_d8;
    fn_0038cc24(*(undefined4 *)(param_1 + 4),uVar10,iVar9,0,uVar5);
    iVar9 = fn_0038d80c(*(undefined4 *)(param_1 + 4),uVar10 - uVar11);
    if (iVar9 != 0) {
      *(char *)(param_1 + 0x21) = *(char *)(param_1 + 0x21) + '\x01';
    }
    uVar10 = (uint)(char)((char)uVar10 + '\x01');
    if ((int)(uVar11 + 10) <= (int)uVar10) {
      fn_003d0ab4(*(undefined4 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x22));
      return;
    }
  } while( true );
}



void fn_004021c0(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  *puVar1 = &DAT_00837724;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = param_3;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  return;
}



void fn_00402100(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  *puVar1 = &DAT_0083770c;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  return;
}



void fn_00401bac(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  uint local_914;
  undefined1 auStack_910 [336];
  undefined1 auStack_7c0 [1928];
  uint local_38 [4];
  int local_28;
  
  puVar10 = *(undefined4 **)(param_1 + 0x18);
  local_28 = param_1;
  if (puVar10 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar10)(puVar10);
    do {
      if (puVar1 == &DAT_00894d28) goto LAB_00401bf4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar10 = (undefined4 *)0x0;
LAB_00401bf4:
  fn_00290734(auStack_910);
  uVar9 = 0;
  do {
    puVar1 = (undefined4 *)fn_001f74ec(local_28,0xd6);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_00897044) goto LAB_00401c48;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_00401c48:
    uVar3 = fn_002f7e70();
    iVar4 = fn_006c3ab0(uVar3,*(undefined1 *)(puVar1 + 4));
    fn_0017821c(auStack_7c0 + uVar9 * 0xf0,iVar4 + uVar9 * 0xf0,0xf0);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  fn_0017821c(puVar10 + 7,auStack_910,0x8d8);
  *(undefined1 *)((int)puVar10 + 0x902) = 0;
  puVar1 = (undefined4 *)fn_002f7e70();
  puVar1 = (undefined4 *)*puVar1;
  piVar11 = puVar10 + 0x23e;
  uVar9 = fn_00100b58();
  puVar2 = (undefined4 *)*piVar11;
  if (uVar9 == 0) {
    piVar6 = puVar2 + -3;
    iVar4 = *piVar6;
    if (iVar4 != 0) {
      if ((puVar2 != &DAT_008f9cf4) &&
         ((iVar4 == -1 || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar4 + -1, iVar4 == 0)))))) {
        fn_001008c4(*piVar11 + -0xc,*(int *)(*piVar11 + -8) + 8,0);
      }
      *piVar11 = (int)&DAT_008f9cf4;
      goto LAB_00401eb4;
    }
    puVar2[-1] = 0;
    puVar7 = (undefined2 *)*piVar11;
  }
  else {
    uVar8 = puVar2[-1];
    uVar12 = puVar2[-3] + 1;
    bVar14 = puVar2[-3] != -1;
    bVar13 = uVar12 == 1;
    if (uVar12 < 2) {
      bVar14 = (uint)puVar2[-2] <= uVar9;
      bVar13 = uVar9 == puVar2[-2];
    }
    if ((bVar14 && !bVar13) ||
       (((puVar1 != (undefined4 *)0x0 && (puVar2 <= puVar1)) &&
        (puVar1 < (undefined4 *)((int)puVar2 + uVar8 * 2))))) {
      local_38[0] = uVar9;
      local_914 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
      if (local_914 < uVar8 + 0x80) {
        local_914 = uVar8 + 0x80;
      }
      puVar5 = &local_914;
      if (local_914 < uVar9) {
        puVar5 = local_38;
      }
      uVar8 = *puVar5;
      if (0xfffffff1 < uVar8) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar8,0xfffffff1);
      }
      if (uVar8 < uVar9) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,uVar8);
      }
      if (uVar8 == 0) {
        puVar2 = &DAT_008f9ce8;
      }
      else {
        puVar2 = (undefined4 *)fn_00100fc6((uVar8 + 8) * 2,0);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
        }
        puVar2[2] = uVar9;
        puVar7 = (undefined2 *)((int)puVar2 + uVar9 * 2 + 0xc);
        *puVar2 = 0;
        puVar2[1] = uVar8;
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = 0;
        }
      }
      fn_00301a9c(puVar2 + 3,puVar1,uVar9 << 1);
      if ((undefined4 *)*piVar11 != &DAT_008f9cf4) {
        piVar6 = (undefined4 *)*piVar11 + -3;
        iVar4 = *piVar6;
        if ((iVar4 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
          fn_001008c4(*piVar11 + -0xc,*(int *)(*piVar11 + -8) + 8,0);
        }
      }
      *piVar11 = (int)(puVar2 + 3);
      goto LAB_00401eb4;
    }
    fn_001006ac(puVar2,puVar1,uVar9);
    *(uint *)(*piVar11 + -4) = uVar9;
    puVar7 = (undefined2 *)(*piVar11 + uVar9 * 2);
  }
  *puVar7 = 0;
LAB_00401eb4:
  *(undefined1 *)(puVar10 + 0x240) = 1;
  *(undefined1 *)((int)puVar10 + 0x901) = 1;
  return;
}


