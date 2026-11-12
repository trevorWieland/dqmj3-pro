#include "005c4b90_005c75a8.h"



void fn_005c75a8(int *param_1)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = (ushort *)fn_00203884();
  if (0x96 < *puVar2) {
    iVar1 = fn_00203cb4();
    fn_00203898(0xffffffff);
    iVar3 = fn_00203cb4();
    fn_00203c20(0);
    if (iVar1 != iVar3) {
      if (param_1[0x59] != 0) {
        uVar4 = (**(code **)(*param_1 + 0x158))(param_1,2);
        fn_00190d50(param_1[0x59],uVar4);
      }
      fn_00203bc8();
      fn_0022f750();
      fn_0015b0dc();
      fn_00749130(param_1,DAT_00898214,(char *)&DAT_005c7724,0,1,0,0);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    fn_00749130(param_1,DAT_00898214,(char *)&DAT_005c7708,0,1,1,0);
    if (param_1[0x58] != 0) {
      uVar4 = (**(code **)(*param_1 + 0x158))(param_1,1);
      fn_00190d50(param_1[0x58],uVar4);
    }
    param_1[0x52] = 0x14;
    return;
  }
  fn_002d69e8(param_1[0x5a]);
  fn_002d697c(param_1[0x5a]);
  fn_002d6808(DAT_00897830);
  iVar1 = fn_0066e158(DAT_00898840);
  if ((iVar1 == 0) ||
     ((*(char *)(param_1[0x47] + 0xc) == '\0' && (*(int *)(DAT_00898840 + 0x20) == 7)))) {
    fn_0026a494(DAT_00897818,*(undefined4 *)(param_1[1] + 0x18),1);
    *(undefined1 *)((int)param_1 + 0x136) = 0;
    param_1[0x52] = 0x15;
    *(undefined1 *)(param_1[0x17] + 0x31) = 0;
    return;
  }
  param_1[0x52] = 0x18;
  return;
}



undefined4 fn_005c5b04(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  fn_005d668c();
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00327fb4(iVar1,*(undefined4 *)(param_1 + 4),0);
  }
  piVar5 = *(int **)(param_1 + 0x114);
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0x114) = piVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x114) + 0x30) = *(undefined4 *)(param_1 + 0x70);
  (**(code **)(**(int **)(param_1 + 0x114) + 0x10))
            (*(int **)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x48));
  uVar3 = fn_0022f750((char *)&DAT_005c5c08);
  fn_00327a18(*(undefined4 *)(param_1 + 0x114),uVar3,0);
  iVar6 = *(int *)(*(int *)(param_1 + 0x104) + 0x10);
  iVar1 = fn_006c4720(iVar6);
  if (iVar1 == 1) {
    *(uint *)(param_1 + 0x10c) = (uint)*(byte *)(iVar6 + 10);
    uVar4 = (uint)*(byte *)(iVar6 + 0xb);
  }
  else {
    uVar4 = 1;
    *(undefined4 *)(param_1 + 0x10c) = 1;
  }
  *(uint *)(param_1 + 0x110) = uVar4;
  fn_005c5ee4(param_1,0,*(undefined4 *)(param_1 + 0x10c));
  fn_005c5ee4(param_1,1,*(undefined4 *)(param_1 + 0x110));
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x005c4d18) */
/* WARNING: Removing unreachable block (ram,0x005c4d24) */
/* WARNING: Removing unreachable block (ram,0x005c4cdc) */
/* WARNING: Removing unreachable block (ram,0x005c4ce0) */
/* WARNING: Removing unreachable block (ram,0x005c4ce4) */
/* WARNING: Removing unreachable block (ram,0x005c4ce8) */
/* WARNING: Removing unreachable block (ram,0x005c4cec) */
/* WARNING: Removing unreachable block (ram,0x005c4c80) */
/* WARNING: Removing unreachable block (ram,0x005c4c84) */
/* WARNING: Removing unreachable block (ram,0x005c4c88) */
/* WARNING: Removing unreachable block (ram,0x005c4c8c) */
/* WARNING: Removing unreachable block (ram,0x005c4c90) */
/* WARNING: Removing unreachable block (ram,0x005c4d38) */
/* WARNING: Removing unreachable block (ram,0x005c4c4c) */
/* WARNING: Removing unreachable block (ram,0x005c4d28) */
/* WARNING: Removing unreachable block (ram,0x005c4d30) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffb8 : 0x005c4c64 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_005c4b90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_148 [52];
  undefined4 local_114;
  undefined1 auStack_110 [20];
  undefined1 *local_fc;
  undefined1 *local_f8;
  undefined1 *local_f4;
  undefined1 auStack_f0 [32];
  undefined1 *local_d0;
  undefined1 *local_cc;
  undefined1 *local_c8;
  uint local_c4;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [112];
  uint local_48 [2];
  undefined4 local_40;
  uint local_3c [3];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  
  fn_00124930(auStack_148);
  iVar1 = *(int *)(param_1 + 0x104);
  if (*(char *)(iVar1 + 0x1c8) == '\0') {
    local_114 = 0;
  }
  else {
    local_114 = 1;
    uVar2 = fn_0013d3e8(auStack_c0,iVar1 + 0x1ca);
    fn_00170fa4(auStack_110,uVar2);
    fn_00170f54(auStack_c0);
  }
  fn_0048c740(auStack_148,0,1);
  fn_006f5e08(auStack_30,DAT_00897850);
  fn_0014f510(auStack_f0,auStack_30);
  local_48[0] = 0x1b0;
  local_40 = 0x20;
  puVar3 = (undefined1 *)fn_0015ece0(0x1b0);
  iVar9 = 0x1b0;
  puVar4 = puVar3;
  do {
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = 0;
    }
    iVar9 = iVar9 + -1;
    puVar4 = puVar4 + 1;
  } while (iVar9 != 0);
  fn_0014f1bc(0);
  puVar4 = puVar3 + 0x1b0;
  fn_00301a9c(puVar3,iVar1 + 0x18,0x1b0);
  local_48[0] = (int)puVar4 - (int)puVar3;
  local_c4 = 0x20;
  puVar6 = local_48;
  if ((uint)((int)puVar4 - (int)puVar3) < 0x20) {
    puVar6 = &local_c4;
  }
  local_d0 = (undefined1 *)0x0;
  local_cc = (undefined1 *)0x0;
  local_c8 = (undefined1 *)0x0;
  uVar11 = *puVar6;
  local_d0 = (undefined1 *)fn_0015ece0(uVar11);
  puVar5 = local_d0;
  for (puVar10 = puVar3; puVar10 != puVar4; puVar10 = puVar10 + 1) {
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = *puVar10;
    }
    puVar5 = puVar5 + 1;
  }
  local_cc = local_d0 + ((int)puVar4 - (int)puVar3);
  local_c8 = local_d0 + uVar11;
  if (&local_d0 != &local_fc) {
    uVar11 = (int)local_cc - (int)local_d0;
    if ((uint)((int)local_f4 - (int)local_fc) < uVar11) {
      local_48[0] = (int)local_cc - (int)local_d0;
      uVar11 = (int)local_f8 - (int)local_fc;
      local_3c[0] = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
      if (local_3c[0] < uVar11 + 0x20) {
        local_3c[0] = uVar11 + 0x20;
      }
      puVar6 = local_3c;
      if (local_3c[0] <= (uint)((int)local_cc - (int)local_d0)) {
        puVar6 = local_48;
      }
      uVar11 = *puVar6;
      puVar7 = (undefined1 *)fn_0015ece0(uVar11);
      puVar5 = puVar7;
      for (puVar10 = local_d0; puVar10 != local_cc; puVar10 = puVar10 + 1) {
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = *puVar10;
        }
        puVar5 = puVar5 + 1;
      }
      puVar10 = local_fc;
      if (local_fc < local_f8) {
        if (0 < (int)local_f8 - (int)local_fc) {
          for (iVar1 = (int)local_f8 - (int)local_fc >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
          }
        }
      }
      else {
        for (; puVar10 != local_f8; puVar10 = puVar10 + 1) {
        }
      }
      fn_0014f1bc(local_fc);
      local_f4 = puVar7 + uVar11;
      local_f8 = puVar7 + ((int)local_cc - (int)local_d0);
      local_fc = puVar7;
    }
    else {
      uVar12 = (int)local_f8 - (int)local_fc;
      if (uVar12 < uVar11) {
        puVar7 = local_d0 + uVar12;
        puVar10 = local_d0;
        puVar5 = local_fc;
        if (local_d0 < puVar7) {
          if (0 < (int)puVar7 - (int)local_d0) {
            puVar10 = local_fc + -1;
            puVar5 = local_d0 + -1;
            if (((int)puVar7 - (int)local_d0 & 1U) != 0) {
              *local_fc = *local_d0;
              puVar10 = local_fc;
              puVar5 = local_d0;
            }
            for (iVar1 = (int)puVar7 - (int)local_d0 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
              puVar10[1] = puVar5[1];
              puVar5 = puVar5 + 2;
              puVar10 = puVar10 + 2;
              *puVar10 = *puVar5;
            }
          }
        }
        else {
          for (; puVar10 != puVar7; puVar10 = puVar10 + 1) {
            *puVar5 = *puVar10;
            puVar5 = puVar5 + 1;
          }
        }
        local_f8 = local_fc + ((int)local_cc - (int)local_d0);
        puVar5 = local_fc + uVar12;
        for (puVar10 = local_d0 + uVar12; puVar10 != local_cc; puVar10 = puVar10 + 1) {
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = *puVar10;
          }
          puVar5 = puVar5 + 1;
        }
      }
      else {
        puVar10 = local_d0;
        puVar5 = local_fc;
        if (local_d0 < local_cc) {
          if (0 < (int)uVar11) {
            puVar10 = local_fc + -1;
            puVar5 = local_d0 + -1;
            if ((uVar11 & 1) != 0) {
              *local_fc = *local_d0;
              puVar10 = local_fc;
              puVar5 = local_d0;
            }
            for (iVar1 = (int)local_cc - (int)local_d0 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
              puVar10[1] = puVar5[1];
              puVar5 = puVar5 + 2;
              puVar10 = puVar10 + 2;
              *puVar10 = *puVar5;
            }
            puVar5 = local_fc + ((int)local_cc - (int)local_d0);
          }
        }
        else {
          for (; puVar10 != local_cc; puVar10 = puVar10 + 1) {
            *puVar5 = *puVar10;
            puVar5 = puVar5 + 1;
          }
        }
        if (puVar5 < local_f8) {
          if (0 < (int)local_f8 - (int)puVar5) {
            for (iVar1 = (int)local_f8 - (int)puVar5 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
            }
          }
        }
        else {
          for (; puVar5 != local_f8; puVar5 = puVar5 + 1) {
          }
        }
        local_f8 = local_fc + ((int)local_cc - (int)local_d0);
        local_f4 = local_f8;
      }
    }
  }
  puVar10 = local_d0;
  if (local_d0 < local_cc) {
    if (0 < (int)local_cc - (int)local_d0) {
      for (iVar1 = (int)local_cc - (int)local_d0 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      }
    }
  }
  else {
    for (; puVar10 != local_cc; puVar10 = puVar10 + 1) {
    }
  }
  fn_0014f1bc(local_d0);
  uVar2 = fn_0013d3e8(auStack_28,&LAB_005c516c);
  uVar8 = fn_0048c758(auStack_b8,auStack_148);
  fn_006780d4(*(undefined4 *)(param_1 + 0x118),uVar8,uVar2);
  fn_0048c938(auStack_b8);
  fn_00170f54(auStack_28);
  puVar10 = puVar3;
  if (puVar3 < puVar4) {
    if (0 < (int)puVar4 - (int)puVar3) {
      for (iVar1 = (int)puVar4 - (int)puVar3 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      }
    }
  }
  else {
    for (; puVar10 != puVar4; puVar10 = puVar10 + 1) {
    }
  }
  fn_0014f1bc(puVar3);
  fn_0048c938(auStack_148);
  return;
}


