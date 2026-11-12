#include "0066a008_0066a53c.h"



undefined4 fn_0066a53c(void)

{
  return DAT_00898848;
}



int fn_0066a3e8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_20 [16];
  
  iVar1 = param_1[0x12];
  iVar2 = 0;
  if (iVar1 == 0) {
    if ((param_1[0x13] & 0x20U) != 0) {
      param_1[0x1b] = 0;
      param_1[0x13] = param_1[0x13] | 2;
      param_1[0x1c] = 0;
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 0;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      iVar1 = fn_00673be8(param_1);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 0x30))(param_1,0);
        return 0;
      }
      return 0;
    }
    if ((*(byte *)(param_1 + 0x13) & 2) != 0) {
      return 0;
    }
    iVar2 = param_1[0x1b];
    if (iVar2 != 0) {
      param_2 = param_1[0x21];
    }
    if (iVar2 != 0 && param_2 != 0) {
      fn_006d1828(auStack_20);
      iVar1 = fn_006d3b8c(auStack_20);
      if (iVar1 != 0) {
        return iVar2;
      }
    }
    param_1[0x13] = param_1[0x13] & 0xffffff1f;
    DAT_00898844 = 0;
    DAT_00898848 = 0;
    DAT_0089884c = 0;
    DAT_00898850 = 0;
  }
  (**(code **)(*param_1 + 0x34))(param_1,2);
  return iVar2;
}



/* WARNING: Removing unreachable block (ram,0x0066a12c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 fn_0066a008(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined *local_1f0;
  undefined1 local_1ec;
  undefined4 local_1e8;
  undefined1 auStack_1e4 [44];
  undefined1 auStack_1b8 [20];
  undefined1 auStack_1a4 [80];
  undefined *local_154 [2];
  undefined1 auStack_14c [12];
  undefined1 auStack_140 [4];
  undefined4 local_13c;
  undefined4 local_138;
  undefined *local_134;
  undefined *local_12c;
  undefined4 local_120;
  undefined4 local_118;
  undefined *local_114;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  int local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [12];
  
  local_34 = 0;
  if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
    fn_00456400();
  }
  local_1f0 = &DAT_00855624;
  local_1ec = 0;
  iVar1 = fn_0013d40c(auStack_1e4);
  iVar1 = fn_004b8b9c(iVar1 + 0xc,0);
  local_104 = 0;
  local_100 = 0;
  local_fc = 0;
  iVar1 = fn_0048b218(iVar1 + 0x20,3,&local_104);
  fn_004b93dc(&local_104);
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  iVar1 = fn_0048b218(iVar1 + 0x14,3,&local_f8);
  fn_004b93dc(&local_f8);
  iVar2 = fn_0075546c(iVar1 + 0x20,0);
  piVar6 = (int *)(iVar2 + 0xc);
  local_138 = 0;
  local_110 = &DAT_00855830;
  local_e8 = 0;
  local_13c = 0;
  local_12c = &DAT_008554d0;
  local_114 = &DAT_008549ec;
  local_108 = 0;
  local_134 = &DAT_00855674;
  local_120 = 0;
  *piVar6 = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  local_ec = 0;
  local_118 = 0x20;
  local_e4 = 0x20;
  puVar3 = (undefined4 *)fn_0015ece0(0x500);
  *piVar6 = (int)puVar3;
  for (iVar1 = local_ec; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = local_110;
      *(char *)(puVar3 + 1) = (char)local_e8;
      *(char *)((int)puVar3 + 5) = (char)((uint)local_e8 >> 8);
      puVar3[2] = local_12c;
      *(undefined1 *)(puVar3 + 3) = 0;
      *(undefined1 *)((int)puVar3 + 0xd) = 0;
      *(undefined1 *)((int)puVar3 + 0xe) = 0;
      *(undefined1 *)((int)puVar3 + 0xf) = 0;
      puVar3[4] = local_108;
      puVar3[5] = local_120;
      puVar3[6] = local_138;
      puVar3[7] = local_13c;
      *(undefined1 *)(puVar3 + 8) = 0;
      *(undefined2 *)((int)puVar3 + 0x22) = 0;
      puVar3[2] = local_114;
      *puVar3 = local_134;
    }
    puVar3 = puVar3 + 10;
  }
  *(int *)(iVar2 + 0x14) = *piVar6 + local_e4 * 0x28;
  *(int *)(iVar2 + 0x10) = *piVar6 + local_ec * 0x28;
  *(undefined1 *)(iVar2 + 0x1c) = 0;
  *(undefined **)(iVar2 + 0x18) = &DAT_00855338;
  *(undefined2 *)(iVar2 + 0x1e) = 0xffff;
  *(undefined1 *)(iVar2 + 0x20) = 1;
  iVar1 = fn_0075546c(iVar2 + 0x24,0);
  *(undefined **)(iVar1 + -0x90) = &DAT_00854c48;
  fn_004a23e4();
  uVar4 = fn_004b6318(auStack_30,param_1 + 0x5f0);
  fn_00170fa4(auStack_1e4,uVar4);
  fn_00170f54(auStack_30);
  local_1e8 = *(undefined4 *)(param_1 + 0x610);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  uVar4 = fn_0048b218(local_154,*(undefined1 *)(param_1 + 0x5e8),&local_40);
  fn_004a1a28(auStack_1b8,uVar4);
  local_154[0] = &DAT_00854bdc;
  fn_004b93dc(auStack_14c);
  fn_004b93dc(&local_40);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  uVar4 = fn_0048b218(local_154,*(undefined1 *)(param_1 + 0x5ec),&local_40);
  fn_004a1a28(auStack_1a4,uVar4);
  local_154[0] = &DAT_00854bdc;
  fn_004b93dc(auStack_14c);
  fn_004b93dc(&local_40);
  iVar1 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x124))
                    (*(int **)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0x9c),&local_1f0,
                     *(undefined4 *)(param_1 + 0x5d8),*(undefined4 *)(param_1 + 0x614),0);
  if (iVar1 == 0) {
    local_34 = 0xffffffff;
    uVar4 = fn_0045a590();
    uVar5 = fn_00482b9c();
    *(undefined4 *)(param_1 + 0x74) = uVar5;
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    fn_0045a3b0(uVar4,auStack_140,0x80);
    fn_0045a5b0();
  }
  else {
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
  }
  uVar4 = local_34;
  fn_004acbb4(&local_1f0);
  return uVar4;
}


