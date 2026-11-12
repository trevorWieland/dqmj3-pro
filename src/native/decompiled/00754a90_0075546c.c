#include "00754a90_0075546c.h"



int * fn_0075546c(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_28 [12];
  
  uVar1 = fn_0013d40c(auStack_28);
  uVar4 = 0x20;
  if (0x1f < param_2) {
    uVar4 = param_2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar2 = fn_0015ece0(uVar4 << 3);
  *param_1 = iVar2;
  for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
    if (iVar2 != 0) {
      fn_004b637c(iVar2,uVar1);
    }
    iVar2 = iVar2 + 8;
  }
  param_1[2] = *param_1 + uVar4 * 8;
  param_1[1] = *param_1 + param_2 * 8;
  fn_00170f54(auStack_28);
  return param_1;
}



int * fn_00755304(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = 0x20;
  if (0x1f < param_2) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  puVar2 = (undefined4 *)fn_0015ece0(uVar1 * 0x28);
  *param_1 = (int)puVar2;
  for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &DAT_00855830;
      *(undefined1 *)(puVar2 + 1) = 0;
      *(undefined1 *)((int)puVar2 + 5) = 0;
      puVar2[2] = &DAT_008554d0;
      *(undefined1 *)(puVar2 + 3) = 0;
      *(undefined1 *)((int)puVar2 + 0xd) = 0;
      *(undefined1 *)((int)puVar2 + 0xe) = 0;
      *(undefined1 *)((int)puVar2 + 0xf) = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      *(undefined1 *)(puVar2 + 8) = 0;
      *(undefined2 *)((int)puVar2 + 0x22) = 0;
      puVar2[2] = &DAT_008549ec;
      *puVar2 = &DAT_00855674;
    }
    puVar2 = puVar2 + 10;
  }
  param_1[2] = *param_1 + uVar1 * 0x28;
  param_1[1] = *param_1 + param_2 * 0x28;
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00754bf4) */
/* WARNING: Removing unreachable block (ram,0x00754c84) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * fn_00754a90(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int **ppiVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *local_148;
  undefined *local_144;
  int local_140;
  int *local_13c;
  int *local_138;
  undefined *local_134;
  int *local_130 [2];
  undefined *local_128;
  undefined1 local_124;
  undefined1 auStack_110 [160];
  undefined1 auStack_70 [12];
  undefined *local_64;
  int *local_60;
  undefined4 *local_5c;
  uint local_58;
  int *local_54 [2];
  int *local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 *local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  local_124 = 0;
  local_128 = &DAT_00854544;
  local_4c = param_1;
  local_48 = param_2;
  iVar2 = fn_0013d40c(auStack_110);
  iVar2 = fn_004b8b9c(iVar2 + 0xc,0);
  local_44 = 0;
  local_40 = 0;
  local_3c = (undefined4 *)0x0;
  iVar2 = fn_0048b218(iVar2 + 0x20,3,&local_44);
  uVar1 = local_44;
  if (local_44 < local_40) {
    if (0 < (int)(local_40 - local_44)) {
      for (iVar14 = (int)(local_40 - local_44) >> 3; iVar14 != 0; iVar14 = iVar14 + -1) {
      }
    }
  }
  else {
    for (; uVar1 != local_40; uVar1 = uVar1 + 4) {
    }
  }
  fn_0014f1bc(local_44);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  iVar2 = fn_0048b218(iVar2 + 0x14,3,&local_38);
  uVar1 = local_38;
  if (local_38 < local_34) {
    if (0 < (int)(local_34 - local_38)) {
      for (iVar14 = (int)(local_34 - local_38) >> 3; iVar14 != 0; iVar14 = iVar14 + -1) {
      }
    }
  }
  else {
    for (; uVar1 != local_34; uVar1 = uVar1 + 4) {
    }
  }
  fn_0014f1bc(local_38);
  iVar2 = fn_00124be8(iVar2 + 0x18);
  iVar2 = fn_00124be8(iVar2 + 8);
  iVar2 = fn_00124be8(iVar2 + 0x18);
  iVar3 = fn_00124be8(iVar2 + 8);
  piVar13 = (int *)(iVar3 + 8);
  uVar4 = fn_0013d40c(auStack_70);
  *piVar13 = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  local_140 = 0;
  local_130[0] = (int *)0x20;
  iVar2 = fn_0015ece0(0x100);
  *piVar13 = iVar2;
  for (iVar14 = local_140; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (iVar2 != 0) {
      fn_004b637c(iVar2,uVar4);
    }
    iVar2 = iVar2 + 8;
  }
  *(int *)(iVar3 + 0xc) = *piVar13 + local_140 * 8;
  *(int *)(iVar3 + 0x10) = *piVar13 + 0x100;
  fn_00170f54(auStack_70);
  piVar5 = (int *)(iVar3 + 0x14);
  local_138 = (int *)0x0;
  local_2c = 0;
  local_140 = 0;
  *piVar5 = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  local_13c = (int *)0x0;
  local_64 = (undefined *)0x20;
  local_28 = 0x20;
  puVar6 = (undefined4 *)fn_0015ece0(0x500);
  *piVar5 = (int)puVar6;
  for (piVar13 = local_13c; piVar13 != (int *)0x0; piVar13 = (int *)((int)piVar13 - 1)) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = &DAT_00855760;
      *(char *)(puVar6 + 1) = (char)local_2c;
      *(char *)((int)puVar6 + 5) = (char)((uint)local_2c >> 8);
      puVar6[2] = &DAT_00854bec;
      *(undefined1 *)(puVar6 + 3) = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[2] = &DAT_00853ae8;
      puVar6[6] = local_140;
      puVar6[8] = 0;
      puVar6[9] = local_138;
      *puVar6 = &DAT_00855160;
    }
    puVar6 = puVar6 + 10;
  }
  *(int *)(iVar3 + 0x18) = *piVar5 + (int)local_13c * 0x28;
  *(int *)(iVar3 + 0x1c) = *piVar5 + local_28 * 0x28;
  local_64 = &DAT_00853870;
  puVar6 = (undefined4 *)(iVar3 + -0x98);
  *puVar6 = &DAT_00853870;
  *(undefined4 *)(iVar3 + -0x90) = 0;
  *(undefined4 *)(iVar3 + -0x8c) = 0;
  *local_4c = 0;
  local_4c[1] = 0;
  local_4c[2] = 0;
  local_44 = local_48;
  local_40 = 0x20;
  puVar7 = &local_40;
  if (0x1f < local_48) {
    puVar7 = &local_44;
  }
  local_48 = *puVar7;
  local_5c = (undefined4 *)fn_0015ece0(local_48 * 0xb8);
  *local_4c = (int)local_5c;
  local_58 = local_44;
  local_3c = puVar6;
  if (local_44 != 0) {
    local_134 = &DAT_00854bdc;
    local_144 = &DAT_00853ad8;
    do {
      puVar6 = local_3c;
      if (local_5c != (undefined4 *)0x0) {
        *local_5c = &DAT_00854544;
        *(undefined1 *)(local_5c + 1) = *(undefined1 *)(local_3c + 1);
        uVar4 = local_3c[3];
        local_5c[2] = local_3c[2];
        local_5c[3] = uVar4;
        local_5c[4] = local_3c[4];
        local_5c[5] = local_3c[5];
        iVar2 = fn_004b637c(local_5c + 6,local_3c + 6);
        *(undefined2 *)(iVar2 + 8) = *(undefined2 *)(puVar6 + 8);
        iVar2 = fn_004b8ae8(iVar2 + 0xc,puVar6 + 9);
        *(undefined **)(iVar2 + 0x20) = local_134;
        piVar13 = (int *)(iVar2 + 0x28);
        *(undefined1 *)(iVar2 + 0x24) = *(undefined1 *)(puVar6 + 0x12);
        *(undefined1 *)(iVar2 + 0x25) = *(undefined1 *)((int)puVar6 + 0x49);
        *piVar13 = 0;
        *(undefined4 *)(iVar2 + 0x2c) = 0;
        *(undefined4 *)(iVar2 + 0x30) = 0;
        local_60 = (int *)((int)(puVar6[0x14] - puVar6[0x13]) >> 2);
        local_13c = (int *)0x20;
        ppiVar8 = &local_13c;
        if ((int *)0x1f < local_60) {
          ppiVar8 = &local_60;
        }
        piVar5 = *ppiVar8;
        puVar9 = (undefined4 *)fn_0015ece0((int)piVar5 << 2);
        *piVar13 = (int)puVar9;
        puVar11 = (undefined4 *)puVar6[0x14];
        for (puVar10 = (undefined4 *)puVar6[0x13]; puVar10 != puVar11; puVar10 = puVar10 + 1) {
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = *puVar10;
          }
          puVar9 = puVar9 + 1;
        }
        *(uint *)(iVar2 + 0x2c) = (puVar6[0x14] - puVar6[0x13] & 0xfffffffc) + *piVar13;
        *(int *)(iVar2 + 0x30) = *piVar13 + (int)piVar5 * 4;
        *(undefined **)(iVar2 + 0x20) = local_144;
        *(undefined **)(iVar2 + 0x34) = local_134;
        piVar13 = (int *)(iVar2 + 0x3c);
        *(undefined1 *)(iVar2 + 0x38) = *(undefined1 *)(puVar6 + 0x17);
        *(undefined1 *)(iVar2 + 0x39) = *(undefined1 *)((int)puVar6 + 0x5d);
        *piVar13 = 0;
        *(undefined4 *)(iVar2 + 0x40) = 0;
        *(undefined4 *)(iVar2 + 0x44) = 0;
        local_60 = (int *)((int)(puVar6[0x19] - puVar6[0x18]) >> 2);
        local_148 = (int *)0x20;
        ppiVar8 = &local_60;
        if (local_60 < (int *)0x20) {
          ppiVar8 = &local_148;
        }
        piVar5 = *ppiVar8;
        puVar9 = (undefined4 *)fn_0015ece0((int)piVar5 << 2);
        *piVar13 = (int)puVar9;
        puVar11 = (undefined4 *)puVar6[0x19];
        for (puVar10 = (undefined4 *)puVar6[0x18]; puVar10 != puVar11; puVar10 = puVar10 + 1) {
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = *puVar10;
          }
          puVar9 = puVar9 + 1;
        }
        *(uint *)(iVar2 + 0x40) = (puVar6[0x19] - puVar6[0x18] & 0xfffffffc) + *piVar13;
        *(int *)(iVar2 + 0x44) = *piVar13 + (int)piVar5 * 4;
        *(undefined **)(iVar2 + 0x34) = local_144;
        iVar2 = fn_004b9b4c(iVar2 + 0x4c,puVar6 + 0x1c);
        iVar2 = fn_004b9b4c(iVar2 + 8,puVar6 + 0x1e);
        *(undefined2 *)(iVar2 + 8) = *(undefined2 *)(puVar6 + 0x20);
        *(undefined1 *)(iVar2 + 10) = *(undefined1 *)((int)puVar6 + 0x82);
        *(undefined4 *)(iVar2 + 0xc) = puVar6[0x21];
        *(undefined4 *)(iVar2 + 0x10) = puVar6[0x22];
        *(undefined4 *)(iVar2 + 0x14) = puVar6[0x23];
        iVar2 = fn_004b9b4c(iVar2 + 0x18,puVar6 + 0x24);
        iVar2 = fn_004b9b4c(iVar2 + 8,puVar6 + 0x26);
        local_60 = (int *)(iVar2 + 8);
        *(int *)(iVar2 + 8) = 0;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined4 *)(iVar2 + 0x10) = 0;
        local_54[0] = (int *)((int)(puVar6[0x29] - puVar6[0x28]) >> 3);
        local_130[0] = (int *)0x20;
        ppiVar8 = local_54;
        if (local_54[0] < (int *)0x20) {
          ppiVar8 = local_130;
        }
        local_138 = *ppiVar8;
        iVar14 = fn_0015ece0((int)local_138 << 3);
        *local_60 = iVar14;
        iVar3 = puVar6[0x29];
        piVar13 = local_60;
        for (iVar2 = puVar6[0x28]; local_60 = piVar13, iVar2 != iVar3; iVar2 = iVar2 + 8) {
          if (iVar14 != 0) {
            fn_004b637c(iVar14,iVar2);
          }
          iVar14 = iVar14 + 8;
          piVar13 = local_60;
        }
        piVar13[1] = (puVar6[0x29] - puVar6[0x28] & 0xfffffff8) + *piVar13;
        piVar13[2] = *piVar13 + (int)local_138 * 8;
        piVar5 = piVar13 + 3;
        *piVar5 = 0;
        piVar13[4] = 0;
        piVar13[5] = 0;
        local_13c = (int *)((int)(puVar6[0x2c] - puVar6[0x2b]) / 0x28);
        local_54[0] = (int *)0x20;
        ppiVar8 = local_54;
        if ((int *)0x1f < local_13c) {
          ppiVar8 = &local_13c;
        }
        piVar12 = *ppiVar8;
        puVar10 = (undefined4 *)fn_0015ece0((int)piVar12 * 0x28);
        *piVar5 = (int)puVar10;
        iVar14 = puVar6[0x2c];
        for (iVar2 = puVar6[0x2b]; iVar2 != iVar14; iVar2 = iVar2 + 0x28) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = &DAT_00855760;
            *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(iVar2 + 4);
            *(undefined1 *)((int)puVar10 + 5) = *(undefined1 *)(iVar2 + 5);
            puVar10[2] = &DAT_00854bec;
            *(undefined1 *)(puVar10 + 3) = *(undefined1 *)(iVar2 + 0xc);
            uVar4 = *(undefined4 *)(iVar2 + 0x14);
            puVar10[4] = *(undefined4 *)(iVar2 + 0x10);
            puVar10[5] = uVar4;
            puVar10[6] = *(undefined4 *)(iVar2 + 0x18);
            uVar4 = *(undefined4 *)(iVar2 + 0x24);
            puVar10[8] = *(undefined4 *)(iVar2 + 0x20);
            puVar10[9] = uVar4;
            puVar10[2] = &DAT_00853ae8;
            *puVar10 = &DAT_00855160;
          }
          puVar10 = puVar10 + 10;
        }
        iVar14 = puVar6[0x2b];
        iVar2 = puVar6[0x2c];
        piVar13[5] = *piVar5 + (int)piVar12 * 0x28;
        piVar13[4] = *piVar5 + ((iVar2 - iVar14) / 0x28) * 0x28;
        piVar13[-0x28] = (int)local_64;
      }
      local_58 = local_58 - 1;
      local_5c = local_5c + 0x2e;
    } while (local_58 != 0);
  }
  piVar13 = local_4c;
  local_4c[1] = *local_4c + local_44 * 0xb8;
  local_4c[2] = *local_4c + local_48 * 0xb8;
  fn_004963f0(&local_128);
  return piVar13;
}


