#include "00249188_00249188.h"



void fn_00249188(int param_1,undefined1 *param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 **ppuVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined1 *local_d8;
  uint local_d4;
  uint local_d0;
  int local_cc;
  undefined1 *local_c8;
  undefined4 local_c4;
  uint local_c0;
  int local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 local_a4 [4];
  undefined1 *local_a0;
  undefined4 local_9c;
  uint local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined1 *local_84;
  undefined1 *local_80;
  undefined1 *local_7c;
  uint local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [20];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c;
  int iStack_28;
  
  if (param_4 == 0) {
    pcVar9 = (char *)&DAT_002494b8;
  }
  else {
    pcVar9 = (char *)&DAT_002494b0;
  }
  iStack_34 = param_1;
  puStack_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  fn_00183718(&local_c8,param_3,pcVar9);
  local_9c = local_c4;
  local_a0 = local_c8;
  local_8c = local_b4;
  uStack_88 = uStack_b0;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_98 = local_c0;
  iStack_94 = local_bc;
  uStack_90 = uStack_b8;
  local_a4[0] = 0;
  fn_0079c770(&local_d4,local_c8,local_a4);
  ppuVar6 = (undefined1 **)&local_bc;
  if (&DAT_0000001f < local_a0) {
    ppuVar6 = &local_d8;
  }
  local_a4[0] = 0;
  local_80 = (undefined1 *)0x0;
  local_84 = (undefined1 *)0x0;
  local_d8 = local_a0;
  local_7c = (undefined1 *)0x0;
  local_bc = 0x20;
  iVar8 = (int)*ppuVar6;
  local_84 = (undefined1 *)fn_00100fc6(iVar8,0);
  puVar1 = local_84;
  for (puVar4 = local_d8; puVar4 != (undefined1 *)0x0; puVar4 = puVar4 + -1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = local_a4[0];
    }
    puVar1 = puVar1 + 1;
  }
  local_7c = local_84 + iVar8;
  local_80 = local_84 + (int)local_d8;
  if (param_4 == 0) {
    puVar7 = &DAT_008cd57c;
  }
  else {
    puVar7 = &DAT_008cd588;
  }
  local_d8 = param_2;
  fn_00248f44(&local_d4,&local_a0,puVar7,&local_84);
  puVar1 = (undefined1 *)0x0;
  iVar8 = 0;
  if (0 < (int)param_2) {
    do {
      if (puVar1 < local_a0) {
        do {
          if ((undefined1 *)(local_d0 - local_d4) <= puVar1) {
            local_d8 = (undefined1 *)(local_d0 - local_d4);
            fn_002ff628(9,&DAT_008c766f,&DAT_008c766f,puVar1);
          }
        } while ((puVar1[local_d4] == '\0') && (puVar1 = puVar1 + 1, puVar1 < local_a0));
      }
      if (param_4 == 0) {
        pcVar5 = (char *)&DAT_002494d8;
      }
      else {
        pcVar5 = "special%02d";
      }
      fn_001028d4(auStack_58,pcVar5,puVar1);
      local_c8 = auStack_58;
      fn_00183718(&local_78,local_2c,pcVar9);
      uVar10 = 0;
      local_c0 = local_78;
      local_bc = iStack_74;
      uStack_b8 = uStack_70;
      local_b4 = uStack_6c;
      uStack_b0 = uStack_68;
      uStack_ac = uStack_64;
      uStack_a8 = uStack_60;
      if (local_78 != 0) {
        do {
          local_d8 = (undefined1 *)fn_006f6e30(&local_bc,uVar10);
          iVar2 = fn_003035b0(local_d8,local_c8);
          if (iVar2 == 0) {
            local_44 = *(undefined4 *)(local_d8 + 0x20);
            uStack_40 = *(undefined4 *)(local_d8 + 0x24);
            uStack_3c = *(undefined4 *)(local_d8 + 0x28);
            break;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < local_c0);
      }
      piVar3 = *(int **)(param_1 + iVar8 * 4);
      (**(code **)(*piVar3 + 0x1c))(piVar3,&local_44);
      *(undefined1 **)(*(int *)(param_1 + iVar8 * 4) + 0x54) = puVar1;
      fn_0068c384(*(undefined4 *)(param_1 + iVar8 * 4));
      (**(code **)(**(int **)(param_1 + iVar8 * 4) + 0xc))();
      if (param_4 == 0) {
        piVar3 = &DAT_008cd57c;
        puVar4 = (undefined1 *)(DAT_008cd580 - DAT_008cd57c);
      }
      else {
        piVar3 = &DAT_008cd588;
        puVar4 = (undefined1 *)(DAT_008cd58c - DAT_008cd588);
      }
      if (puVar4 <= puVar1) {
        local_d8 = puVar4;
        fn_002ff628(9,&DAT_008c766f,&DAT_008c766f,puVar1);
      }
      iVar8 = iVar8 + 1;
      puVar4 = puVar1 + *piVar3;
      puVar1 = puVar1 + 1;
      *puVar4 = 1;
    } while (iVar8 < (int)param_2);
  }
  puVar1 = local_84;
  if (local_80 < local_84) {
    do {
      puVar1 = puVar1 + 1;
    } while (puVar1 != local_80);
  }
  fn_001008c4(local_84,(int)local_7c - (int)local_84,0);
  uVar10 = local_d4;
  if (local_d0 < local_d4) {
    do {
      uVar10 = uVar10 + 1;
    } while (uVar10 != local_d0);
  }
  fn_001008c4(local_d4,local_cc - local_d4,0);
  return;
}


