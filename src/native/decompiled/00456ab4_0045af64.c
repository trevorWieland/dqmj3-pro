#include "00456ab4_0045af64.h"



void fn_0045af64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint local_78;
  uint uStack_74;
  undefined *local_70;
  undefined *local_6c;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  
  if ((*(int *)(param_1 + 100) == 0) && (*(int *)(param_1 + 0x90) != 0)) {
    local_6c = (undefined *)0x1;
    local_68 = local_68 & 0xffffff00;
    local_64 = 0;
    local_70 = &DAT_008558c4;
    local_60 = 0;
    local_5c = 0;
    iVar1 = fn_004ba000(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x68),
                         param_1 + 0x70,&local_70);
    if (iVar1 != 0) {
      iVar1 = fn_001249d0();
      iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x3c));
      if (iVar1 != 0) {
        fn_0015ed58(*(undefined4 *)(param_1 + 0x6c),&local_70);
        uStack_38 = 0x10001;
        puStack_34 = &DAT_007dba44;
        uStack_30 = 0x71;
        fn_00455e8c(iVar1,2,&uStack_38,1);
      }
      fn_004b301c(param_1,5);
      fn_0014f2b0(&local_70);
      return;
    }
    fn_0014f2b0(&local_70);
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x1c))();
  fn_004b5488(auStack_58,uVar2);
  if (*(uint *)(param_1 + 100) < *(uint *)(param_1 + 0x68)) {
    do {
      local_48 = 0;
      local_40 = 0;
      (**(code **)(**(int **)(param_1 + 0x40) + 8))
                (*(int **)(param_1 + 0x40),param_1 + 0x44,auStack_58);
      fn_004b5540(param_1 + 0x44,auStack_58);
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      uVar3 = *(uint *)(param_1 + 0x30);
      uVar4 = *(uint *)(param_1 + 0x34);
      if ((uVar3 != 0 || uVar4 != 0) &&
         ((fn_0013d0fc(&local_78),
          uVar4 < uStack_74 || uStack_74 - uVar4 < (uint)(uVar3 <= local_78) || (uVar3 == local_78))
         )) break;
      uVar4 = *(uint *)(param_1 + 100);
      bVar5 = (uVar4 & 0x3f) == 0;
      uVar3 = 0;
      if (!bVar5) {
        uVar3 = *(uint *)(param_1 + 0x68);
      }
    } while ((bVar5 || uVar4 <= uVar3) && (!bVar5 && uVar3 != uVar4));
  }
  if (*(int *)(param_1 + 100) == *(int *)(param_1 + 0x68)) {
    fn_0014f24c(&uStack_38,*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x50),
                 *(undefined4 *)(param_1 + 0x54));
    iVar1 = fn_001249d0();
    iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x3c));
    if (iVar1 != 0) {
      fn_0015ed58(*(undefined4 *)(param_1 + 0x6c),&uStack_38);
      local_70 = (undefined *)0x10001;
      local_6c = &DAT_007dba44;
      local_68 = 0x71;
      fn_00455e8c(iVar1,2,&local_70,1);
    }
    fn_004b301c(param_1,5);
    if (*(int *)(param_1 + 0x90) != 0) {
      fn_004ba19c(*(int *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x68),param_1 + 0x70,
                   &uStack_38);
    }
    fn_0014f2b0(&uStack_38);
  }
  else {
    fn_004b301c(param_1,1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  fn_0014f480(auStack_58);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00456c88) */

void fn_00456ab4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  bool bVar6;
  int local_3c0;
  uint local_3bc;
  int iStack_3b8;
  int local_3b4;
  int iStack_3b0;
  undefined4 local_3ac;
  int local_3a8;
  int local_3a4;
  undefined1 auStack_3a0 [32];
  ushort local_380;
  undefined1 auStack_378 [256];
  undefined4 local_278;
  undefined4 local_274;
  undefined1 auStack_270 [4];
  undefined4 local_26c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [4];
  int local_34;
  undefined *local_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  undefined *local_24;
  
  uVar1 = fn_0052c888();
  local_274 = 0;
  local_278 = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  fn_0052d088(&local_3a8);
  *(int *)(*(int *)(param_1 + 0xe8) + 300) = local_3a4;
  *(int *)(*(int *)(param_1 + 0xe8) + 0x128) = local_3a8;
  bVar6 = local_3a4 == 200;
  if (bVar6) {
    local_3a4 = local_3a8;
  }
  if (!bVar6 || local_3a4 != 1) {
    local_3b4 = -0x7f97ffff;
    uVar1 = fn_004b8d4c(&local_3c0,&local_3b4);
    fn_004b9e68(param_1,uVar1);
    return;
  }
  iVar2 = fn_0052c674(&local_58);
  if (iVar2 < 0) {
    local_3b4 = -0x7ffcff9b;
    uVar1 = fn_004b8d4c(&local_3c0,&local_3b4);
    fn_004b9e68(param_1,uVar1);
    return;
  }
  if (*(int *)(param_1 + 0xf8) == -1) {
    *(undefined4 *)(*(int *)(param_1 + 0xe8) + 0x74) = 0xffffffff;
  }
  else {
    fn_004b4218(&local_3c0);
    local_3c0 = local_3c0 - *(int *)(param_1 + 0x100);
    if (*(int *)(param_1 + 0xf8) <= local_3c0) {
      local_3ac = 0x8001000b;
      uVar1 = fn_004b8d4c(&iStack_3b8,&local_3ac);
      fn_004b9e68(param_1,uVar1);
      return;
    }
    *(int *)(*(int *)(param_1 + 0xe8) + 0x74) = *(int *)(param_1 + 0xf8) - local_3c0;
  }
  uVar5 = *(undefined4 *)(param_1 + 0xe8);
  fn_00456400(param_1 + 0x68);
  iVar2 = fn_0015ecdc(0x1c);
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)fn_004b4148();
    *puVar4 = &DAT_00854918;
    *(undefined1 *)((int)puVar4 + 5) = 0;
    iVar2 = fn_0013d40c(puVar4 + 2);
    puVar4 = (undefined4 *)(iVar2 + -8);
    *puVar4 = &DAT_00853930;
    fn_0013d438(iVar2,&DAT_007d94a0);
    *(undefined4 *)(iVar2 + 0x10) = 0x7d6;
    *(undefined4 *)(iVar2 + 8) = 3;
    *(undefined1 *)(iVar2 + 0xc) = 0;
  }
  piVar3 = *(int **)(param_1 + 0x10c);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  *(undefined4 **)(param_1 + 0x10c) = puVar4;
  fn_0045f27c(auStack_270);
  fn_004b6318(auStack_38,auStack_3a0);
  fn_004b63a4(*(int *)(param_1 + 0x10c) + 8,auStack_378);
  fn_0045f0f8(auStack_270,uVar1);
  iStack_3b0 = param_1 + 0x110;
  iStack_3b8 = param_1 + 0x108;
  local_3b4 = param_1 + 0xec;
  if (*(char *)(*(int *)(param_1 + 0xe8) + 0x140) != '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0x10c) + 0x18) = 0xffffffff;
  }
  local_3bc = (uint)local_380;
  local_3c0 = local_34;
  iVar2 = fn_00454f9c(uVar5,param_1 + 0x68,local_26c,&local_58);
  if (iVar2 == 0) {
    local_3b4 = -0x7ffefff3;
    uVar1 = fn_004b8d4c(&local_3c0,&local_3b4);
    fn_004b9e68(param_1,uVar1);
    fn_00170f54(auStack_38);
    fn_0045f2ec(auStack_270);
    return;
  }
  fn_00170f54(auStack_38);
  fn_0045f2ec(auStack_270);
  pcStack_2c = fn_00456e70;
  uStack_28 = 0;
  local_24 = &DAT_00456dc8;
  local_30 = &DAT_00853500;
  fn_00479c98(param_1,&local_30);
  return;
}


