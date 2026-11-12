#include "0066bb2c_0066f120.h"



undefined4 fn_0066f120(int param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint local_74;
  uint local_70;
  undefined4 local_6c [7];
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint local_24;
  int iStack_20;
  uint uStack_1c;
  undefined4 local_18;
  
  if (7 < param_2) {
    return 0;
  }
  local_70 = 0xe7e3ffff;
  iVar2 = param_1 + param_2 * 0x50;
  iStack_20 = param_1;
  uStack_1c = param_2;
  local_18 = param_3;
  local_70 = fn_0052c9ec(&local_50,&local_18,1);
  if ((local_70 & 0x80000000) == 0) {
    bVar4 = (local_24 >> 0x10 & 0xff) == 0;
    uVar3 = 0;
    if (!bVar4) {
      uVar3 = local_24 & 0xff;
    }
    if ((bVar4 || uVar3 == 0) || (local_48 != *(int *)(param_1 + 0x88))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(iVar2 + 0xc0) = uVar1;
    *(undefined4 *)(iVar2 + 0xc4) = local_18;
    *(undefined4 *)(iVar2 + 0xe0) = local_50;
    *(undefined4 *)(iVar2 + 0xe4) = uStack_4c;
    *(int *)(iVar2 + 0xe8) = local_48;
    *(undefined4 *)(iVar2 + 0xec) = uStack_44;
    *(undefined4 *)(iVar2 + 0xf0) = uStack_40;
    *(undefined4 *)(iVar2 + 0xf4) = uStack_3c;
    *(undefined4 *)(iVar2 + 0xf8) = uStack_38;
    *(undefined4 *)(iVar2 + 0xfc) = uStack_34;
    *(undefined4 *)(iVar2 + 0x100) = local_30;
    *(undefined4 *)(iVar2 + 0x104) = uStack_2c;
    *(undefined4 *)(iVar2 + 0x108) = uStack_28;
    *(uint *)(iVar2 + 0x10c) = local_24;
    local_6c[0] = local_18;
    local_74 = fn_0052cbf0(iVar2 + 200,local_6c,1,1,0);
    if ((local_74 & 0x80000000) == 0) {
      return 1;
    }
    *(undefined1 *)(iVar2 + 0xc0) = 0;
    iVar2 = fn_0052cab4(&local_74);
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    *(int *)(param_1 + 0x74) = iVar2;
  }
  else {
    *(undefined1 *)(iVar2 + 0xc0) = 0;
    iVar2 = fn_0052cab4(&local_70);
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    *(int *)(param_1 + 0x74) = iVar2;
  }
  *(uint *)(param_1 + 0x78) = (uint)(iVar2 != 0);
  *(undefined1 *)(param_1 + 0x7c) = 1;
  return 0;
}



void fn_0066eb64(void)

{
  fn_00671538(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28));
  return;
}



void fn_0066eb04(void)

{
  fn_00666a24(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0xc));
  return;
}



void fn_0066e5b4(void)

{
  fn_00674758(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c));
  return;
}



void fn_0066e530(void)

{
  fn_006744e4(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c));
  return;
}



void fn_0066e3d8(void)

{
  fn_006741c0(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c));
  return;
}



void fn_0066e34c(void)

{
  fn_00670f10(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28));
  return;
}



undefined4 fn_0066bb2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_18c [53];
  undefined1 local_157;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined *local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar5 = 0;
  if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
    fn_00456400();
  }
  fn_004ab464(auStack_18c);
  fn_004ab0ac(auStack_18c,*(undefined4 *)(param_1 + 0xa8));
  fn_004ab0d0(auStack_18c,*(undefined2 *)(param_1 + 0xac));
  fn_004ab104(auStack_18c,*(undefined1 *)(param_1 + 0xae));
  local_124 = *(undefined4 *)(param_1 + 0xb0);
  local_157 = 0;
  fn_004ab0c0(auStack_18c,0);
  uVar4 = 0;
  do {
    iVar1 = param_1 + uVar4 * 4;
    fn_004ab0e8(auStack_18c,uVar4,*(undefined4 *)(iVar1 + 0x1b4),*(undefined4 *)(iVar1 + 0x1c4));
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  local_1c = 0;
  local_14 = 100;
  local_18 = 0xffffffff;
  local_20 = &DAT_00852a4c;
  fn_00147be0(param_1 + 0x590);
  iVar1 = fn_004a0b58(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x9c),auStack_18c,
                       &local_20,param_1 + 0x590);
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
    uVar2 = fn_0045a590();
    uVar3 = fn_00482b9c();
    *(undefined4 *)(param_1 + 0x74) = uVar3;
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    fn_0045a3b0(uVar2,&local_120,0x80);
    fn_0045a5b0();
  }
  else {
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
    iVar1 = *(int *)(param_1 + 0x9c);
    if (*(char *)(iVar1 + 0x10) != '\x02') {
      local_120 = *(undefined4 *)(iVar1 + 0x38);
      uStack_11c = *(undefined4 *)(iVar1 + 0x3c);
      uStack_118 = *(undefined4 *)(iVar1 + 0x40);
      uVar5 = 0xffffffff;
      fn_006688a0(param_1,param_1 + 0x74,&local_120,0);
    }
  }
  fn_004b2d5c(auStack_18c);
  return uVar5;
}


