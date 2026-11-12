#include "003b7164_003b7854.h"



undefined4 fn_003b7854(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [132];
  
  fn_00301f50(auStack_98,0x80);
  fn_0018a618(auStack_98,0x40,0x3f,DAT_00893248,param_2);
  iVar1 = fn_00147fd4(auStack_98,5);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = fn_003b7f00(param_1,auStack_98,param_4);
    if (param_3 != 0) {
      fn_003b7e40(param_1,uVar2);
    }
  }
  return uVar2;
}



void fn_003b77b8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &DAT_00852298;
  if (param_1[7] != 0) {
    fn_0012d73c(param_1[7]);
    param_1[7] = 0;
  }
  if ((undefined4 *)param_1[6] != &DAT_008f9cf4) {
    piVar1 = (undefined4 *)param_1[6] + -3;
    iVar2 = *piVar1;
    if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(param_1[6] + -0xc,*(int *)(param_1[6] + -8) + 8,0);
    }
  }
  fn_003b8284(param_1);
  fn_002feef8();
  return;
}



void fn_003b75d0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint local_50;
  undefined1 local_4c [2];
  undefined2 local_4a [9];
  undefined *local_38;
  int local_34;
  undefined4 local_30;
  int local_24;
  int local_18;
  undefined1 auStack_14 [8];
  
  fn_002f8fd0(&local_38);
  uVar2 = fn_00145ac0(*(undefined4 *)(param_1 + 0xc));
  fn_0018921c(&local_38,uVar2);
  uVar2 = fn_00145ac0(*(undefined4 *)(param_1 + 0xc));
  fn_00173a34(*(undefined4 *)(param_1 + 0x14),uVar2);
  iVar3 = fn_00191228(*(undefined4 *)(param_1 + 0x14));
  if (iVar3 != 0) {
    fn_00185320(*(undefined4 *)(param_1 + 0x14));
  }
  iVar3 = fn_00191218(*(undefined4 *)(param_1 + 0x14));
  if (iVar3 != 0) {
    fn_001852ac(*(undefined4 *)(param_1 + 0x14));
  }
  bVar6 = *(char *)(param_1 + 0x20) != '\0';
  if (bVar6) {
    local_4c[0] = 4;
    local_4c[1] = *(undefined1 *)(param_1 + 0x21);
    local_4a[0] = *(undefined2 *)(param_1 + 0x22);
    local_4a[1] = *(undefined2 *)(param_1 + 0x24);
  }
  uVar4 = (uint)bVar6;
  uVar5 = uVar4;
  if (*(char *)(param_1 + 0x26) != '\0') {
    local_4c[uVar4 * 6] = 8;
    uVar5 = uVar4 + 1;
    local_4c[uVar4 * 6 + 1] = *(undefined1 *)(param_1 + 0x27);
    local_4a[uVar4 * 3] = *(undefined2 *)(param_1 + 0x28);
    local_4a[uVar4 * 3 + 1] = *(undefined2 *)(param_1 + 0x2a);
  }
  local_50 = uVar5;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    local_50 = uVar5 + 1;
    local_4c[uVar5 * 6] = 0xf;
    local_4c[uVar5 * 6 + 1] = *(undefined1 *)(param_1 + 0x2d);
    local_4a[uVar5 * 3] = *(undefined2 *)(param_1 + 0x2e);
    local_4a[uVar5 * 3 + 1] = *(undefined2 *)(param_1 + 0x30);
  }
  if (local_50 != 0) {
    uVar2 = fn_00145ac0(*(undefined4 *)(param_1 + 0x1c));
    fn_003119e0(*(undefined4 *)(param_1 + 0x14),&local_38,uVar2,local_4c);
  }
  local_38 = &DAT_008213bc;
  if (local_24 != 0) {
    local_18 = local_24;
    local_50 = *(uint *)(local_24 + 8);
    fn_0077a474(auStack_14,&local_34,&local_50,&local_18);
    *(undefined4 *)(local_24 + 0xc) = local_30;
    piVar1 = (int *)local_34;
    while (piVar1 != (int *)0x0) {
      local_34 = *piVar1;
      fn_001008c4(piVar1[2],piVar1[1],0);
      fn_001008c4(piVar1,1,0);
      piVar1 = (int *)local_34;
    }
  }
  return;
}



void fn_003b7584(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_001287b0();
  uVar1 = fn_0012d6b0(*(undefined4 *)(param_1 + 8),uVar1,0x80,5);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = fn_001287b0();
  uVar1 = fn_0012d6b0(*(undefined4 *)(param_1 + 0x18),uVar1,0x80,5);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



undefined4
fn_003b73e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  char *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_d8 [128];
  char local_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_58[0xc] = '\0';
  local_58[0xd] = '\0';
  local_58[0xe] = '\0';
  local_58[0xf] = '\0';
  local_58[0x10] = '\0';
  local_58[0x11] = '\0';
  local_58[0x12] = '\0';
  local_58[0x13] = '\0';
  local_58[0x14] = '\0';
  local_58[0x15] = '\0';
  local_58[0x16] = '\0';
  local_58[0x17] = '\0';
  local_58[0x18] = '\0';
  local_58[0x19] = '\0';
  local_58[0x1a] = '\0';
  local_58[0x1b] = '\0';
  local_58[0x1c] = '\0';
  local_58[0x1d] = '\0';
  local_58[0x1e] = '\0';
  local_58[0x1f] = '\0';
  pcVar1 = (char *)fn_00242bd4(param_2);
  uVar5 = 0;
  pcVar3 = local_58;
  do {
    uVar5 = uVar5 + 1;
    pcVar4 = pcVar3 + 1;
    *pcVar3 = *pcVar1;
    bVar6 = pcVar1[1] == '\0';
    pcVar1 = pcVar1 + 1;
    pcVar3 = pcVar4;
  } while ((bVar6 || uVar5 < 5) && (!bVar6 && uVar5 != 4));
  *pcVar4 = '\0';
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  fn_0017d96c(&local_38,0x20,0x1f,(char *)&DAT_003b74ec,local_58,param_3);
  fn_00301f50(auStack_d8,0x80);
  fn_0018a618(auStack_d8,0x40,0x3f,DAT_00893240,&local_38);
  uVar2 = fn_003b7f00(param_1,auStack_d8,param_5);
  if (param_4 != 0) {
    fn_003b7e40(param_1,uVar2);
  }
  return uVar2;
}



undefined4 fn_003b7360(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_98 [132];
  
  fn_00301f50(auStack_98,0x80);
  uVar1 = fn_00242bd4(param_2);
  fn_0018a618(auStack_98,0x40,0x3f,DAT_00893240,uVar1);
  uVar1 = fn_003b7f00(param_1,auStack_98,param_4);
  if (param_3 != 0) {
    fn_003b7e40(param_1,uVar1);
  }
  return uVar1;
}



undefined4 fn_003b7324(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0x18);
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 0x18)) {
      return 0;
    }
    if (*(int *)(piVar1[2] + 4) == param_2) break;
    piVar1 = (int *)*piVar1;
  }
  return *(undefined4 *)(piVar1[2] + 0x14);
}



undefined4 fn_003b72a4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_98 [132];
  
  fn_00301f50(auStack_98,0x80);
  uVar1 = fn_0069cd0c(param_2);
  fn_0018a618(auStack_98,0x40,0x3f,DAT_00893240,uVar1);
  uVar1 = fn_003b7f00(param_1,auStack_98,param_4);
  if (param_3 != 0) {
    fn_003b7e40(param_1,uVar1);
  }
  return uVar1;
}



int fn_003b7164(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *local_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  
  if ((param_5 == 0) || (iVar1 = fn_003b74f8(param_1), iVar1 == -1)) {
    puVar6 = *(undefined4 **)(param_1 + 0x18);
    iVar1 = 0;
    for (puVar2 = (undefined4 *)*puVar6; puVar2 != puVar6; puVar2 = (undefined4 *)*puVar2) {
      if (*(int *)(puVar2[2] + 4) == iVar1) {
        iVar1 = iVar1 + 1;
        puVar2 = puVar6;
      }
    }
    puVar2 = (undefined4 *)fn_00145b00(0x34,&DAT_00812c8c);
    local_30 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &PTR_FUN_008522d0;
      puVar2[1] = iVar1;
      iVar3 = fn_00168a24(puVar2 + 2,param_2,auStack_28);
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 1;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      iVar4 = fn_00145b00(0x34,&DAT_00812c8c);
      uVar5 = 0;
      if (iVar4 != 0) {
        uVar5 = fn_001283fc();
      }
      *(undefined4 *)(iVar3 + 0xc) = uVar5;
      *(undefined **)(iVar3 + -8) = &DAT_00852298;
      iVar3 = fn_00168a24(iVar3 + 0x10,param_3,auStack_2c);
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = *param_4;
      *(undefined4 *)(iVar3 + 0xc) = param_4[1];
      *(undefined4 *)(iVar3 + 0x10) = param_4[2];
      *(undefined4 *)(iVar3 + 0x14) = param_4[3];
      *(undefined2 *)(iVar3 + 0x18) = *(undefined2 *)(param_4 + 4);
      local_30 = (int *)(iVar3 + -0x18);
    }
    (**(code **)(*local_30 + 8))();
    fn_0078717c(param_1 + 8,&local_30);
  }
  return iVar1;
}



undefined4 fn_003b74f8(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  piVar7 = *(int **)(param_1 + 0x18);
  piVar5 = (int *)*piVar7;
  while( true ) {
    if (piVar5 == piVar7) {
      return 0xffffffff;
    }
    iVar6 = piVar5[2];
    uVar4 = *(uint *)(*(int *)(iVar6 + 8) + -4);
    uVar1 = fn_00100b58(param_2);
    uVar3 = *(uint *)(*(int *)(iVar6 + 8) + -4);
    if (uVar3 < uVar4) {
      uVar4 = uVar3;
    }
    if (uVar4 < uVar1) {
      uVar3 = uVar4;
    }
    else {
      uVar3 = uVar1;
    }
    iVar2 = fn_001006de(*(int *)(iVar6 + 8),param_2,uVar3);
    if (iVar2 == 0 && uVar4 == uVar1) break;
    piVar5 = (int *)*piVar5;
  }
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  return *(undefined4 *)(iVar6 + 4);
}


