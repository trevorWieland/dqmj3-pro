#include "0048e3cc_0048ea74.h"

static void svc_0x19(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x19 }
#endif
}

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


void fn_0048e3cc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_28;
  undefined1 auStack_24 [4];
  undefined *local_20;
  code *local_1c;
  undefined4 local_18;
  undefined *local_14;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    fn_004b2f04(param_1);
    return;
  }
  iVar1 = fn_001249d0();
  if (*(char *)(iVar1 + 0x30) != '\0') {
    local_1c = (code *)0x8001000b;
    uVar2 = fn_004b8d4c(&local_28,&local_1c);
    fn_0048ec8c(param_1,uVar2);
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x88);
  svc_0x24();
  if ((int)uVar3 < 0) {
    fn_0015e294();
  }
  if ((uVar3 & 0x3ff) == 0x3fe) {
    fn_004b2e68(param_1,0xfa);
    return;
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    svc_0x23();
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  local_28 = fn_0052cec0();
  iVar1 = 0;
  if (local_28 < 0) {
    iVar1 = -0x275f3b0b;
  }
  if (local_28 < 0 && local_28 != iVar1) {
    uVar2 = fn_0052cab4(&local_28);
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 4) = uVar2;
    local_18 = 0x8001000c;
    uVar2 = fn_004b8d4c(auStack_24,&local_18);
    fn_0048ec8c(param_1,uVar2);
  }
  else {
    local_1c = fn_0048e548;
    local_18 = 0;
    local_14 = &DAT_0048e53c;
    local_20 = &DAT_00853500;
    fn_00479c98(param_1,&local_20);
  }
  iVar1 = fn_0052c610();
  if (iVar1 != 0) {
    fn_0052d320();
  }
  return;
}



void fn_0048e548(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [4];
  undefined *local_20;
  code *local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  
  local_3c = 0;
  local_2c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_40 = 0;
  if (*(int *)(param_1 + 0x88) == 0) {
    iVar1 = fn_00158ef8(&local_40,0);
    if (-1 < iVar1) {
      iVar1 = 0;
      *(undefined4 *)(param_1 + 0x88) = local_40;
    }
  }
  else {
    iVar1 = -0x1f5fe7c5;
  }
  if (iVar1 < 0) {
    fn_0015e294();
  }
  svc_0x19();
  if (*(int *)(param_1 + 0x88) < 0) {
    fn_0015e294();
  }
  local_40 = 0;
  iVar1 = fn_0052d1c8(param_1 + 0x88,*(undefined4 *)(param_1 + 0x70),&local_3c,0);
  if (iVar1 < 0) {
    if (iVar1 != -0x375f3810) {
      local_40 = 0x8001000c;
      uVar2 = fn_004b8d4c(auStack_24,&local_40);
      fn_0048ec8c(param_1,uVar2);
      return;
    }
    iVar1 = fn_001249d0();
    iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
    if (iVar1 == 0) {
      fn_004b2f04(param_1);
      return;
    }
    fn_004b2e68(param_1,0xfa);
    if (*(int *)(param_1 + 0x88) != 0) {
      svc_0x23();
      *(int *)(param_1 + 0x88) = 0;
      return;
    }
  }
  else {
    local_1c = fn_0048e850;
    uStack_18 = 0;
    local_20 = &DAT_00853500;
    puStack_14 = &DAT_0048e6b4;
    fn_00479c98(param_1,&local_20);
  }
  return;
}



void fn_0048e850(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  int local_168;
  int local_164;
  undefined4 local_15c [73];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined *local_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  undefined *local_24;
  undefined1 auStack_20 [12];
  undefined4 local_14;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    fn_004b2f04(param_1);
    return;
  }
  iVar1 = fn_001249d0();
  if (*(char *)(iVar1 + 0x30) != '\0') {
    local_15c[0] = 0x8001000b;
    uVar2 = fn_004b8d4c(&local_168,local_15c);
    fn_0048ec8c(param_1,uVar2);
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x88);
  svc_0x24();
  if ((int)uVar3 < 0) {
    fn_0015e294();
  }
  if ((uVar3 & 0x3ff) == 0x3fe) {
    fn_004b2e68(param_1,0xfa);
    return;
  }
  uVar3 = fn_0052cec0();
  if ((int)uVar3 < 0) {
    if ((uVar3 & 0x3ff) == 0x104) {
      local_15c[0] = 0x80680004;
      uVar2 = fn_004b8d4c(&local_168,local_15c);
      fn_0048ec8c(param_1,uVar2);
      return;
    }
    if ((uVar3 & 0x3ff) == 0x105) {
      local_15c[0] = 0x80680005;
      uVar2 = fn_004b8d4c(&local_168,local_15c);
      fn_0048ec8c(param_1,uVar2);
      return;
    }
    local_15c[0] = 0x80680003;
    uVar2 = fn_004b8d4c(&local_168,local_15c);
    fn_0048ec8c(param_1,uVar2);
    return;
  }
  local_38 = 0;
  uStack_34 = 0;
  fn_0052d088(&local_168);
  *(int *)(param_1 + 0x80) = local_164;
  *(int *)(param_1 + 0x7c) = local_168;
  bVar4 = local_164 == 200;
  if (bVar4) {
    local_164 = local_168;
  }
  if (bVar4 && local_164 == 1) {
    if (*(int *)(param_1 + 0x88) != 0) {
      svc_0x23();
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    pcStack_2c = fn_0048e6c4;
    uStack_28 = 0;
    local_24 = &DAT_0048ea6c;
    local_30 = &DAT_00853500;
    fn_00479c98(param_1,&local_30);
    return;
  }
  local_14 = 0x80680001;
  uVar2 = fn_004b8d4c(auStack_20,&local_14);
  fn_0048ec8c(param_1,uVar2);
  return;
}



void fn_0048e6c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  undefined *local_20;
  code *local_1c;
  undefined4 uStack_18;
  undefined4 *local_14;
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x30303030;
  uStack_28 = 0;
  local_40 = 0;
  if (*(int *)(param_1 + 0x88) == 0) {
    iVar1 = fn_00158ef8(&local_40,0);
    if (-1 < iVar1) {
      iVar1 = 0;
      *(undefined4 *)(param_1 + 0x88) = local_40;
    }
  }
  else {
    iVar1 = -0x1f5fe7c5;
  }
  if (iVar1 < 0) {
    fn_0015e294();
  }
  svc_0x19();
  if (*(int *)(param_1 + 0x88) < 0) {
    fn_0015e294();
  }
  fn_001782b8(&local_38,*(undefined4 *)(param_1 + 0x74),8);
  local_40 = 0;
  local_3c = 0;
  iVar1 = fn_0052d0fc(param_1 + 0x88,*(undefined4 *)(param_1 + 0x70),&local_38,&local_2c);
  if (iVar1 < 0) {
    if (iVar1 != -0x375f3810) {
      local_40 = 0x8001000c;
      uVar2 = fn_004b8d4c(auStack_24,&local_40);
      fn_0048ec8c(param_1,uVar2);
      return;
    }
    iVar1 = fn_001249d0();
    iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
    if (iVar1 == 0) {
      fn_004b2f04(param_1);
      return;
    }
    fn_004b2e68(param_1,0xfa);
    if (*(int *)(param_1 + 0x88) != 0) {
      svc_0x23();
      *(int *)(param_1 + 0x88) = 0;
      return;
    }
  }
  else {
    local_1c = fn_0048ea74;
    uStack_18 = 0;
    local_14 = &DAT_0048e838;
    local_20 = &DAT_00853500;
    fn_00479c98(param_1,&local_20);
  }
  return;
}



void fn_0048ea74(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  int local_1c8;
  int local_1c4;
  undefined4 local_1bc [31];
  undefined1 auStack_140 [264];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [12];
  undefined4 local_24;
  undefined1 auStack_20 [12];
  undefined4 local_14;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    fn_004b2f04(param_1);
    return;
  }
  iVar1 = fn_001249d0();
  if (*(char *)(iVar1 + 0x30) != '\0') {
    local_1bc[0] = 0x8001000b;
    uVar2 = fn_004b8d4c(&local_1c8,local_1bc);
    fn_0048ec8c(param_1,uVar2);
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x88);
  svc_0x24();
  if ((int)uVar3 < 0) {
    fn_0015e294();
  }
  if ((uVar3 & 0x3ff) == 0x3fe) {
    fn_004b2e68(param_1,0xfa);
    return;
  }
  uVar3 = fn_0052cec0();
  if ((int)uVar3 < 0) {
    if ((uVar3 & 0x3ff) == 0x104) {
      local_1bc[0] = 0x80680004;
      uVar2 = fn_004b8d4c(&local_1c8,local_1bc);
      fn_0048ec8c(param_1,uVar2);
      return;
    }
    if ((uVar3 & 0x3ff) == 0x105) {
      local_1bc[0] = 0x80680005;
      uVar2 = fn_004b8d4c(&local_1c8,local_1bc);
      fn_0048ec8c(param_1,uVar2);
      return;
    }
    local_1bc[0] = 0x80680003;
    uVar2 = fn_004b8d4c(&local_1c8,local_1bc);
    fn_0048ec8c(param_1,uVar2);
    return;
  }
  local_38 = 0;
  uStack_34 = 0;
  fn_0052cf90(&local_1c8);
  *(int *)(param_1 + 0x80) = local_1c4;
  *(int *)(param_1 + 0x7c) = local_1c8;
  bVar4 = local_1c4 == 200;
  if (bVar4) {
    local_1c4 = local_1c8;
  }
  if (bVar4 && local_1c4 == 7) {
    fn_00301a9c(*(undefined4 *)(param_1 + 0x78),auStack_140,0x100);
    *(undefined1 *)(*(int *)(param_1 + 0x78) + 0xff) = 0;
    local_24 = 0x10001;
    uVar2 = fn_004b8d4c(auStack_30,&local_24);
    fn_0048ec8c(param_1,uVar2);
    return;
  }
  *(int *)(param_1 + 0x7c) = local_1c8 + 4000;
  local_14 = 0x80680001;
  uVar2 = fn_004b8d4c(auStack_20,&local_14);
  fn_0048ec8c(param_1,uVar2);
  return;
}


