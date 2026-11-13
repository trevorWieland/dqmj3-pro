#include "00463928_00463928.h"



/* WARNING: Removing unreachable block (ram,0x00463b1c) */
/* WARNING: Removing unreachable block (ram,0x00463b24) */
/* WARNING: Removing unreachable block (ram,0x00463b30) */

void fn_00463928(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint unaff_r6;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined2 local_64 [2];
  undefined *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  uint local_4c;
  undefined *local_48;
  undefined1 local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_2c;
  int iStack_28;
  
  iVar8 = **(int **)(param_1 + 0x9c);
  local_2c = param_1;
  iStack_28 = param_2;
  iVar2 = fn_001249d0();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  (**(code **)(*(int *)(iVar3 + 0x50) + 8))();
  iVar3 = *(int *)(*(int *)(iVar8 + 0x14) + 8);
  puVar12 = (undefined4 *)0x0;
  local_38 = (uint)*(ushort *)(param_2 + 0x44) | unaff_r6 & 0xffff0000;
  puVar10 = (undefined4 *)0x0;
  puVar11 = (undefined4 *)0x0;
  if (iVar3 == *(int *)(**(int **)(local_2c + 0x9c) + 0x14)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar3 + 0x18);
  }
  while( true ) {
    if ((iVar2 == 0) ||
       (((local_38 & 0xffff) != (uint)*(ushort *)(iVar2 + 0x44) &&
        ((short)((short)local_38 - *(ushort *)(iVar2 + 0x44)) < 1)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    local_34 = iVar3 + 0x10;
    puVar5 = puVar11;
    if (puVar10 == puVar12) {
      uVar9 = (int)puVar10 - (int)puVar11 >> 3;
      if (uVar9 < (uint)((int)puVar12 - (int)puVar11 >> 3)) {
        puVar11 = puVar10 + 2;
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = &DAT_00853688;
          *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(puVar10 + -1);
        }
        iVar8 = 1;
        iVar2 = (int)(puVar10 + -2) - (int)puVar10 >> 3;
        if (1 < iVar2 + 1) {
          puVar4 = puVar10;
          puVar6 = puVar10 + -2;
          do {
            iVar8 = iVar8 + 1;
            *(undefined2 *)(puVar4 + -1) = *(undefined2 *)(puVar6 + -1);
            puVar4 = puVar4 + -2;
            puVar6 = puVar6 + -2;
          } while (iVar8 < iVar2 + 1);
        }
        *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(iVar3 + 0x14);
      }
      else {
        local_4c = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
        if (local_4c < uVar9 + 0x20) {
          local_4c = uVar9 + 0x20;
        }
        puVar5 = (undefined4 *)fn_0015ece0(local_4c << 3);
        puVar12 = puVar5;
        for (puVar4 = puVar11; puVar4 != puVar10; puVar4 = puVar4 + 2) {
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = &DAT_00853688;
            *(undefined2 *)(puVar12 + 1) = *(undefined2 *)(puVar4 + 1);
          }
          puVar12 = puVar12 + 2;
        }
        puVar12 = (undefined4 *)(((int)puVar10 - (int)puVar11 & 0xfffffff8U) + (int)puVar5);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = &DAT_00853688;
          *(undefined2 *)(puVar12 + 1) = *(undefined2 *)(local_34 + 4);
        }
        local_54 = (int)puVar10 - (int)puVar11 >> 3;
        for (puVar12 = puVar11; puVar12 != puVar10; puVar12 = puVar12 + 2) {
          (**(code **)*puVar12)(puVar12);
        }
        if (puVar11 != (undefined4 *)0x0) {
          if ((code *)puVar11[-2] == (code *)0x0) {
            fn_0030233c(puVar11 + -2);
          }
          else {
            (*(code *)puVar11[-2])();
          }
        }
        puVar11 = puVar5 + local_54 * 2 + 2;
        puVar12 = puVar5 + local_4c * 2;
      }
    }
    else {
      puVar11 = puVar10 + 2;
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = &DAT_00853688;
        *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(iVar3 + 0x14);
      }
    }
    iVar2 = *(int *)(iVar3 + 0xc);
    if (*(int *)(iVar3 + 0xc) == 0) {
      iVar2 = *(int *)(iVar3 + 4);
      if (iVar3 == *(int *)(iVar2 + 0xc)) {
        do {
          iVar3 = iVar2;
          iVar2 = *(int *)(iVar3 + 4);
        } while (iVar3 == *(int *)(iVar2 + 0xc));
      }
      if (*(int *)(iVar3 + 0xc) != iVar2) {
        iVar3 = iVar2;
      }
    }
    else {
      do {
        iVar3 = iVar2;
        iVar2 = *(int *)(iVar3 + 8);
      } while (*(int *)(iVar3 + 8) != 0);
    }
    puVar10 = puVar11;
    puVar11 = puVar5;
    if (iVar3 == *(int *)(**(int **)(local_2c + 0x9c) + 0x14)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar3 + 0x18);
    }
  }
  iVar3 = fn_001249d0();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0xc);
  }
  (**(code **)(*(int *)(iVar3 + 0x50) + 0xc))();
  uVar9 = 0;
  if ((int)puVar10 - (int)puVar11 >> 3 != 0) {
    do {
      local_60 = *(undefined **)(param_2 + 0x100);
      local_5c = *(undefined4 *)(param_2 + 0x104);
      fn_00461210(local_2c,&local_60,puVar11 + uVar9 * 2,0);
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)((int)puVar10 - (int)puVar11 >> 3));
  }
  local_40 = *(int *)(param_2 + 0xd8);
  local_48 = &DAT_00852740;
  piVar7 = (int *)(local_40 + 4);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar1);
  *piVar7 = *piVar7 + 1;
  local_44 = 0;
  local_3c = 0;
  while (local_3c < *(uint *)(local_40 + 0x10)) {
    local_64[0] = 0;
    iVar3 = fn_0074a598(&local_48,local_64);
    if (iVar3 == 0) break;
    local_60 = &DAT_00853688;
    local_5c = CONCAT22(((unsigned int)(local_5c) >> 16) & 0xffff,local_64[0]);
    local_58 = *(undefined4 *)(param_2 + 0x100);
    local_54 = *(int *)(param_2 + 0x104);
    fn_00461210(local_2c,&local_58,&local_60,0);
  }
  fn_00454d0c(&local_48);
  for (puVar12 = puVar11; puVar12 != puVar10; puVar12 = puVar12 + 2) {
    (**(code **)*puVar12)(puVar12);
  }
  if (puVar11 != (undefined4 *)0x0) {
    if ((code *)puVar11[-2] == (code *)0x0) {
      fn_0030233c(puVar11 + -2);
      return;
    }
    (*(code *)puVar11[-2])();
  }
  return;
}


