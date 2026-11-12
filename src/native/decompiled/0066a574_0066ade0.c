#include "0066a574_0066ade0.h"



void fn_0066ade0(int param_1,undefined4 param_2)

{
  fn_0017821c(param_1 + 0x1d4,param_2,0x160);
  if (*(ushort *)(param_1 + 0x1d8) < 2) {
    *(short *)(param_1 + 0x1d8) = (short)*(undefined4 *)(DAT_00898840 + 0x38);
  }
  return;
}



undefined4 fn_0066add4(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  param_1[0x1a4] = param_2;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if ((*(byte *)(param_1 + 0x13) & 0x10) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1);
    return 1;
  }
  fn_00673ce8(param_1,6);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    fn_00673ce8(param_1,2);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    *(undefined1 *)(param_1 + 0x1f) = 0;
    uVar1 = 0;
    if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,1);
      uVar1 = 1;
    }
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,2);
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_0066abd4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined *local_158;
  undefined1 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 *local_138;
  undefined4 *puStack_134;
  undefined1 auStack_128 [260];
  
  uVar8 = 0;
  if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
    fn_00456400();
  }
  local_158 = &DAT_00855750;
  local_154 = 0;
  puVar1 = (undefined4 *)fn_0075546c(&local_138,0);
  puVar1[-8] = &DAT_00855150;
  puVar1[-6] = 0;
  puVar1[-5] = 0;
  puVar1[-4] = 0;
  puVar1[-2] = 0;
  puVar1[-1] = 0;
  puVar6 = (undefined4 *)puVar1[1];
  puVar7 = (undefined4 *)*puVar1;
  puVar5 = puVar7;
  if (puVar7 != puVar6) {
    do {
      (**(code **)*puVar5)(puVar5);
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar6);
    puVar1[1] = puVar1[1] - ((int)puVar6 - (int)puVar7 & 0xfffffff8U);
  }
  local_150 = *(undefined4 *)(param_1 + 0x618);
  uStack_14c = *(undefined4 *)(param_1 + 0x61c);
  local_148 = *(undefined4 *)(param_1 + 0x648);
  iVar2 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x13c))
                    (*(int **)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0x9c),&local_158,
                     *(undefined4 *)(param_1 + 0x64c),0);
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
    uVar3 = fn_0045a590();
    uVar4 = fn_00482b9c();
    *(undefined4 *)(param_1 + 0x74) = uVar4;
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    fn_0045a3b0(uVar3,auStack_128,0x80);
    fn_0045a5b0();
  }
  else {
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
  }
  local_158 = &DAT_00855750;
  for (puVar5 = local_138; puVar5 != puStack_134; puVar5 = puVar5 + 2) {
    (**(code **)*puVar5)(puVar5);
  }
  fn_0014f1bc(local_138);
  return uVar8;
}



/* WARNING: Removing unreachable block (ram,0x0066a5d4) */
/* WARNING: Removing unreachable block (ram,0x0066a5d8) */
/* WARNING: Removing unreachable block (ram,0x0066a5dc) */
/* WARNING: Removing unreachable block (ram,0x0066a618) */
/* WARNING: Removing unreachable block (ram,0x0066a6d4) */
/* WARNING: Removing unreachable block (ram,0x0066a814) */
/* WARNING: Removing unreachable block (ram,0x0066a820) */
/* WARNING: Removing unreachable block (ram,0x0066a6fc) */
/* WARNING: Removing unreachable block (ram,0x0066a700) */
/* WARNING: Removing unreachable block (ram,0x0066a704) */
/* WARNING: Removing unreachable block (ram,0x0066a838) */
/* WARNING: Removing unreachable block (ram,0x0066a824) */
/* WARNING: Removing unreachable block (ram,0x0066a830) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 fn_0066a574(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 *local_1bc;
  undefined4 *local_1b8;
  undefined4 *local_1b4;
  undefined *local_1b0;
  undefined1 local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  undefined4 *local_198;
  undefined4 *local_194;
  undefined4 *local_190;
  undefined1 auStack_188 [77];
  undefined1 local_13b;
  undefined1 auStack_128 [4];
  undefined4 local_124;
  undefined4 local_120;
  int local_11c;
  uint local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined *local_108;
  undefined1 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 *local_f8;
  undefined4 *local_f4;
  undefined4 local_f0;
  
  uVar14 = 0;
  if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
    fn_00456400();
  }
  local_1b0 = &DAT_00854de0;
  local_1ac = 3;
  local_1a8 = 0;
  local_1a4 = 0;
  local_1a0 = 0;
  local_1a8 = fn_0015ece0(0x80);
  local_1a0 = local_1a8 + 0x80;
  local_198 = (undefined4 *)0x0;
  local_194 = (undefined4 *)0x0;
  local_190 = (undefined4 *)0x0;
  local_120 = 0x20;
  local_11c = 0;
  local_1a4 = local_1a8;
  local_198 = (undefined4 *)fn_0015ece0(0x80);
  puVar10 = local_198;
  for (iVar8 = local_11c; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = 0;
    }
    puVar10 = puVar10 + 1;
  }
  local_190 = local_198 + 0x20;
  local_194 = local_198 + local_11c;
  iVar8 = fn_00124be8(auStack_188);
  iVar8 = fn_00124be8(iVar8 + 8);
  iVar8 = fn_00124be8(iVar8 + 8);
  iVar8 = fn_00124be8(iVar8 + 8);
  iVar8 = fn_0075546c(iVar8 + 0xc,0);
  *(undefined1 *)(iVar8 + 0x14) = 0;
  *(undefined **)(iVar8 + 0x10) = &DAT_00852a4c;
  *(undefined4 *)(iVar8 + 0x18) = 0;
  *(undefined4 *)(iVar8 + 0x1c) = 0x14;
  piVar11 = (int *)(iVar8 + 0x2c);
  *piVar11 = 0;
  *(undefined4 *)(iVar8 + 0x30) = 0;
  *(undefined4 *)(iVar8 + 0x34) = 0;
  local_120 = 0x20;
  iVar1 = fn_0015ece0(0x40);
  *piVar11 = iVar1;
  *(int *)(iVar8 + 0x30) = *piVar11;
  *(int *)(iVar8 + 0x34) = *piVar11 + 0x40;
  *(undefined **)(iVar8 + -0x4c) = &DAT_00853c6c;
  *(undefined1 *)(iVar8 + -0x47) = 1;
  local_124 = 0;
  local_120 = 0;
  local_11c = 0;
  fn_004b9414(iVar8 + -0x44,&local_124);
  fn_004b93dc(&local_124);
  *(undefined1 *)(iVar8 + -0x38) = 0;
  local_124 = 0;
  local_120 = 0;
  local_11c = 0;
  fn_004b9414(iVar8 + -0x34,&local_124);
  fn_004b93dc(&local_124);
  *(undefined2 *)(iVar8 + -0x28) = 0xffff;
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  if (&local_118 != (uint *)(iVar8 + 0x2c)) {
    uVar2 = *(uint *)(iVar8 + 0x2c);
    uVar9 = *(uint *)(iVar8 + 0x30);
    uVar12 = uVar2;
    if (uVar2 < uVar9) {
      if (0 < (int)(uVar9 - uVar2)) {
        for (iVar1 = (int)(uVar9 - uVar2) >> 2; iVar1 != 0; iVar1 = iVar1 + -1) {
        }
      }
    }
    else {
      for (; uVar12 != uVar9; uVar12 = uVar12 + 2) {
      }
    }
    *(uint *)(iVar8 + 0x30) = uVar2;
    *(uint *)(iVar8 + 0x34) = uVar2;
  }
  fn_0014f1bc(0);
  fn_0014f510(iVar8 + -0x24,DAT_0089a95c);
  fn_0014f510(iVar8 + -0x1c,DAT_0089a95c);
  fn_0014f510(iVar8 + -0x14,DAT_0089a95c);
  fn_0014f510(iVar8 + -0xc,DAT_0089a95c);
  *(undefined4 *)(iVar8 + -4) = 0;
  *(undefined1 *)(iVar8 + 0xc) = 0;
  *(undefined1 *)(iVar8 + 0xd) = 0;
  local_fc = 0x14;
  local_104 = 0;
  local_108 = &DAT_00852a4c;
  local_100 = 0;
  fn_00124914(iVar8 + 0x10,&local_108);
  *(undefined1 *)(iVar8 + 0x20) = 0;
  local_f8 = (undefined4 *)0x0;
  local_f4 = (undefined4 *)0x0;
  local_f0 = 0;
  fn_004b90b8(iVar8,&local_f8);
  puVar13 = local_f4;
  for (puVar10 = local_f8; puVar10 != puVar13; puVar10 = puVar10 + 2) {
    (**(code **)*puVar10)(puVar10);
  }
  fn_0014f1bc(local_f8);
  *(undefined4 *)(iVar8 + 0x24) = 0;
  *(undefined1 *)(iVar8 + 0x28) = 0;
  *(undefined1 *)(iVar8 + 0x29) = 0;
  local_1bc = (undefined4 *)0x0;
  local_1b8 = (undefined4 *)0x0;
  local_1b4 = (undefined4 *)0x0;
  uVar12 = 0;
  if (*(int *)(param_1 + 0x67c) - *(int *)(param_1 + 0x678) >> 2 != 0) {
    do {
      puVar10 = local_1b8;
      puVar13 = (undefined4 *)(*(int *)(param_1 + 0x678) + uVar12 * 4);
      if (local_1b8 == local_1b4) {
        uVar2 = (int)local_1b8 - (int)local_1bc >> 2;
        if (uVar2 < (uint)((int)local_1b4 - (int)local_1bc >> 2)) {
          if (local_1b8 != (undefined4 *)0x0) {
            *local_1b8 = local_1b8[-1];
          }
          puVar10 = local_1b8 + -1;
          puVar5 = local_1b8;
          if (local_1b8 < puVar10) {
            iVar8 = (int)puVar10 - (int)local_1b8;
            if (0 < iVar8) {
              if (iVar8 * 0x20000000 < 0) {
                puVar10 = local_1b8 + -2;
                puVar5 = local_1b8 + -1;
                *puVar5 = *puVar10;
              }
              for (iVar8 = iVar8 >> 3; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar5[-1] = puVar10[-1];
                puVar10 = puVar10 + -2;
                puVar5 = puVar5 + -2;
                *puVar5 = *puVar10;
              }
            }
          }
          else {
            while (local_1b8 != puVar10) {
              puVar10 = puVar10 + -1;
              puVar5[-1] = *puVar10;
              puVar5 = puVar5 + -1;
            }
          }
          *local_1b8 = *puVar13;
          puVar10 = local_1b8 + 1;
        }
        else {
          uVar9 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
          if (uVar9 < uVar2 + 0x20) {
            uVar9 = uVar2 + 0x20;
          }
          puVar3 = (undefined4 *)fn_0015ece0(uVar9 << 2);
          puVar4 = puVar3;
          for (puVar5 = local_1bc; puVar5 != puVar10; puVar5 = puVar5 + 1) {
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = *puVar5;
            }
            puVar4 = puVar4 + 1;
          }
          puVar5 = (undefined4 *)(((int)puVar10 - (int)local_1bc & 0xfffffffcU) + (int)puVar3);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar13;
          }
          puVar13 = (undefined4 *)(((int)puVar10 - (int)local_1bc & 0xfffffffcU) + (int)puVar3);
          for (; puVar10 != local_1b8; puVar10 = puVar10 + 1) {
            puVar13 = puVar13 + 1;
            if (puVar13 != (undefined4 *)0x0) {
              *puVar13 = *puVar10;
            }
          }
          iVar8 = (int)local_1b8 - (int)local_1bc;
          puVar10 = local_1bc;
          if (local_1bc < local_1b8) {
            if (0 < iVar8) {
              for (iVar1 = iVar8 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
              }
            }
          }
          else {
            for (; puVar10 != local_1b8; puVar10 = puVar10 + 1) {
            }
          }
          fn_0014f1bc(local_1bc);
          local_1b4 = puVar3 + uVar9;
          local_1bc = puVar3;
          puVar10 = puVar3 + (iVar8 >> 2) + 1;
        }
      }
      else {
        puVar10 = local_1b8 + 1;
        if (local_1b8 != (undefined4 *)0x0) {
          *local_1b8 = *puVar13;
        }
      }
      local_1b8 = puVar10;
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)(*(int *)(param_1 + 0x67c) - *(int *)(param_1 + 0x678) >> 2));
  }
  fn_004b9414(&local_1a8,&local_1bc);
  local_13b = 1;
  iVar8 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x98))
                    (*(int **)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0x9c),&local_1b0,
                     *(undefined4 *)(param_1 + 0x684));
  if (iVar8 == 0) {
    uVar14 = 0xffffffff;
    uVar6 = fn_0045a590();
    uVar7 = fn_00482b9c();
    *(undefined4 *)(param_1 + 0x74) = uVar7;
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    fn_0045a3b0(uVar6,auStack_128,0x80);
    fn_0045a5b0();
  }
  else {
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
  }
  fn_004b93dc(&local_1bc);
  fn_004a39a8(&local_1b0);
  return uVar14;
}


