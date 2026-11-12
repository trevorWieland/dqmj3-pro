#include "00384af0_0038ff40.h"



void fn_0038ff40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006c76f8(*(undefined4 *)(DAT_008977e0 + 0x54));
  if (iVar1 != 0) {
    fn_003b6890(*(undefined4 *)(DAT_008977e0 + 0x54));
  }
  if ((((param_5 == 0) && (iVar1 = fn_001759d0(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) &&
      (*(char *)(param_1 + 6) == '\0')) && (*(char *)(param_1 + 0xc) != '\x03')) {
    fn_00698fb8(DAT_008977e0,(int)*(char *)(param_1 + 4));
    uVar2 = fn_006f7a48(DAT_008977e0);
    fn_00128744(uVar2,(int)*(char *)(param_1 + 5));
    *(undefined1 *)(param_1 + 4) = 0xff;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  *(char *)(param_1 + 6) = (char)param_3;
  fn_0016ac8c(*(undefined4 *)(param_1 + 8),param_2,param_3,param_4);
  iVar1 = DAT_008977e0;
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(DAT_008977e0 + 0x170);
    fn_00698fb8(iVar1,1);
    fn_006f7a84(DAT_008977e0);
    fn_001ea9c0();
    iVar1 = fn_006f7a48(DAT_008977e0);
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(iVar1 + 4);
    uVar2 = fn_006f7a48(DAT_008977e0);
    fn_00128744(uVar2,5);
  }
  *(char *)(param_1 + 0xc) = (char)param_2;
  return;
}



undefined4 * fn_0038bd5c(undefined4 param_1,undefined2 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  *puVar1 = &DAT_0082aa48;
  iVar2 = fn_00145b00(0x3c,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_002fbb18();
  }
  puVar1[1] = uVar3;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined2 *)((int)puVar1 + 10) = param_2;
  return puVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_003855c4(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_30;
  undefined4 *local_2c [2];
  
  fn_002c3e78();
  iVar5 = *(int *)(param_1 + 0xe4);
  uVar1 = fn_006ba284(param_1);
  *(undefined4 *)(iVar5 + 0xc) = uVar1;
  piVar2 = (int *)fn_00242540(*(undefined4 *)(DAT_00897804 + 0x18),
                               *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x14));
  iVar6 = 0;
  iVar5 = fn_006ba274(param_1);
  if (0 < iVar5) {
    do {
      iVar5 = fn_006ba284(param_1);
      iVar3 = fn_006ba274(param_1);
      uVar4 = iVar5 * iVar3 + iVar6;
      if (((int)uVar4 < 0) ||
         ((uint)(*(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec) >> 4) <= uVar4)) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)(*(int *)(param_1 + 0xec) + uVar4 * 0x10);
      }
      fn_0031b78c(param_1,iVar6,1,&DAT_00385834);
      fn_0031b78c(param_1,iVar6,7,&DAT_00385834);
      local_30 = _DAT_00893a50;
      fn_002c37e0(param_1,iVar6,&local_30);
      if (piVar7 != (int *)0x0) {
        if (*piVar7 == 0) {
          uVar1 = fn_0022f750((char *)&DAT_00385838);
          fn_0031b78c(param_1,iVar6,1,uVar1);
          iVar5 = fn_00242540(*(undefined4 *)(DAT_00897804 + 0x18),
                               *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x14));
          if (*(short *)(iVar5 + *(int *)(*(int *)(param_1 + 0xe4) + 0x18) * 2 + 8) == 0) {
            local_2c[0] = _DAT_00893a58;
            fn_002c37e0(param_1,iVar6,local_2c);
          }
        }
        else {
          fn_0023097c(local_2c,(int)*(short *)((int)piVar7 + 10),1);
          fn_0031b78c(param_1,iVar6,1,local_2c[0]);
          if (piVar7[1] == *piVar2) {
            uVar1 = fn_00230af0(*(undefined1 *)((int)piVar7 + 9),0);
            fn_0031b78c(param_1,iVar6,7,uVar1);
          }
          else if (piVar7[1] != 0) {
            uVar1 = fn_00231ca0(0x25,0);
            fn_0031b78c(param_1,iVar6,7,uVar1);
          }
          if (local_2c[0] != &DAT_008f9cf4) {
            piVar7 = local_2c[0] + -3;
            iVar5 = *piVar7;
            if ((iVar5 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar5 + -1, iVar5 == 0))))
            {
              fn_001008c4(local_2c[0] + -3,local_2c[0][-2] + 8,0);
            }
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar5 = fn_006ba274(param_1);
    } while (iVar6 < iVar5);
  }
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



undefined4 fn_00384af0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  bool bVar15;
  uint local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined1 auStack_7c [4];
  undefined1 local_78;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 local_70;
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_44 [5];
  int local_30;
  
  puVar10 = (undefined4 *)param_1[6];
  if (puVar10 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar10)(puVar10);
    do {
      if (puVar1 == &DAT_008939e8) goto LAB_00384b38;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar10 = (undefined4 *)0x0;
LAB_00384b38:
  param_1[0x39] = (int)puVar10;
  puVar10 = (undefined4 *)fn_001f74d8(param_1,0x42);
  if (puVar10 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar10)(puVar10);
    do {
      if (puVar1 == &DAT_00893a0c) goto LAB_00384b7c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar10 = (undefined4 *)0x0;
LAB_00384b7c:
  param_1[0x3a] = (int)puVar10;
  puVar10 = (undefined4 *)param_1[0x3c];
  uVar12 = *(undefined4 *)(DAT_00897804 + 0x18);
  if (puVar10 == (undefined4 *)param_1[0x3d]) {
    fn_00788730(param_1 + 0x3b);
  }
  else {
    param_1[0x3c] = (int)(puVar10 + 4);
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
    }
  }
  iVar2 = fn_006b4fb8(uVar12);
  iVar11 = 0;
  if (0 < iVar2) {
    do {
      puVar10 = (undefined4 *)fn_002422fc(uVar12,iVar11);
      puVar1 = (undefined4 *)param_1[0x3c];
      if (puVar1 == (undefined4 *)param_1[0x3d]) {
        fn_00788730();
      }
      else {
        param_1[0x3c] = (int)(puVar1 + 4);
        if (puVar1 != (undefined4 *)0x0) {
          uVar7 = puVar10[1];
          uVar8 = puVar10[2];
          uVar13 = puVar10[3];
          *puVar1 = *puVar10;
          puVar1[1] = uVar7;
          puVar1[2] = uVar8;
          puVar1[3] = uVar13;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar2);
  }
  local_30 = param_1[0x3c] - param_1[0x3b] >> 4;
  fn_00397774(&local_a4);
  local_a4 = DAT_00893a44;
  local_a0 = DAT_00893a48;
  puVar10 = (undefined4 *)fn_0022f750((char *)&DAT_00384fb0);
  uVar3 = fn_00100b58();
  puVar1 = &DAT_008f9ce8;
  if (uVar3 == 0) {
    piVar4 = local_88 + -3;
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      if ((local_88 != &DAT_008f9cf4) &&
         ((iVar2 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar2 + -1, iVar2 == 0)))))) {
        fn_001008c4(local_88 + -3,local_88[-2] + 8,0);
      }
      local_88 = &DAT_008f9cf4;
      goto LAB_00384e78;
    }
    local_88[-1] = 0;
    puVar10 = local_88;
  }
  else {
    uVar9 = local_88[-3] + 1;
    bVar15 = local_88[-3] != -1;
    bVar14 = uVar9 == 1;
    if (uVar9 < 2) {
      bVar15 = (uint)local_88[-2] <= uVar3;
      bVar14 = uVar3 == local_88[-2];
    }
    if (bVar15 && !bVar14) {
LAB_00384cc8:
      uVar9 = local_88[-1];
      local_48 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      if (local_48 < uVar9 + 0x80) {
        local_48 = uVar9 + 0x80;
      }
      puVar5 = local_44;
      if (uVar3 <= local_48) {
        puVar5 = &local_48;
      }
      local_44[0] = uVar3;
      uVar9 = *puVar5;
      if (0xfffffff1 < uVar9) {
        local_a8 = 0xfffffff1;
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9);
      }
      if (uVar9 < uVar3) {
        local_a8 = uVar9;
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3);
      }
      if (uVar9 != 0) {
        puVar1 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
        }
        puVar1[2] = uVar3;
        puVar6 = (undefined2 *)((int)puVar1 + uVar3 * 2 + 0xc);
        *puVar1 = 0;
        puVar1[1] = uVar9;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar1 + 3,puVar10,uVar3 << 1);
      if (local_88 != &DAT_008f9cf4) {
        piVar4 = local_88 + -3;
        iVar2 = *piVar4;
        if ((iVar2 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar2 + -1, iVar2 == 0)))) {
          fn_001008c4(local_88 + -3,local_88[-2] + 8,0);
        }
      }
      local_88 = puVar1 + 3;
      goto LAB_00384e78;
    }
    if (puVar10 != (undefined4 *)0x0) {
      bVar14 = puVar10 <= local_88;
      if (local_88 <= puVar10) {
        bVar14 = (undefined4 *)((int)local_88 + local_88[-1] * 2) <= puVar10;
      }
      if (!bVar14) goto LAB_00384cc8;
    }
    fn_001006ac(local_88,puVar10,uVar3);
    local_88[-1] = uVar3;
    puVar10 = (undefined4 *)((int)local_88 + uVar3 * 2);
  }
  *(undefined2 *)puVar10 = 0;
LAB_00384e78:
  local_70 = 2;
  local_9c = 9;
  local_90 = local_30;
  local_98 = *(undefined4 *)(param_1[0x39] + 8);
  local_78 = 1;
  local_75 = 1;
  local_8c = 0x428c0000;
  local_74 = 0;
  local_72 = 1;
  local_71 = 0;
  fn_00397618(param_1,&local_a4);
  uVar12 = fn_0022f750((char *)&DAT_003851a4);
  (**(code **)(*param_1 + 0x13c))(param_1,0,0,uVar12);
  iVar2 = fn_00242540(*(undefined4 *)(DAT_00897804 + 0x18),*(undefined4 *)(param_1[0x39] + 0x14));
  fn_00231690(local_44,iVar2,0);
  (**(code **)(*param_1 + 0x13c))(param_1,0,1,local_44[0]);
  iVar11 = (int)*(short *)(iVar2 + *(int *)(param_1[0x39] + 0x18) * 2 + 8);
  iVar2 = fn_00163940(iVar11);
  if (iVar2 == 0) {
    uVar12 = fn_0022f750(&LAB_003851c0);
    (**(code **)(*param_1 + 0x13c))(param_1,1,0,uVar12);
  }
  else {
    fn_0023097c(&local_a8,iVar11,0);
    (**(code **)(*param_1 + 0x13c))(param_1,1,0,local_a8);
    fn_001588d4(&local_a8);
  }
  fn_001588d4(local_44);
  fn_0036baa0(*(undefined4 *)(param_1[0x39] + 0x10),param_1[0x29],param_1[0x3b] + 0x10,
               param_1[0x3c]);
  (**(code **)(*param_1 + 0x124))(param_1);
  fn_00689efc(param_1,0x42,0);
  fn_00100414(auStack_68,&LAB_0059e0e0,8,4);
  iVar2 = fn_001588d4(auStack_7c);
  iVar2 = fn_001588d4(iVar2 + -4);
  iVar2 = fn_001588d4(iVar2 + -4);
  fn_001588d4(iVar2 + -4);
  return 1;
}


