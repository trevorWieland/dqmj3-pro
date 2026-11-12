#include "00456f50_00457a2c.h"

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


undefined4 fn_00457a2c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = fn_0049599c(param_1[3] + 0x94,(char)param_1[1],(char)param_1[4]);
  iVar3 = 0;
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  iVar1 = fn_001249d0();
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  piVar4 = (int *)(iVar3 + 0x50);
  (**(code **)(*piVar4 + 8))(piVar4);
  (**(code **)(*param_1 + 0x44))(param_1);
  iVar1 = *(int *)(param_1[0x19] + 8);
  if (iVar1 != param_1[0x19]) {
    do {
      iVar3 = *(int *)(iVar1 + 0xc);
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar3 = *(int *)(iVar1 + 4);
        iVar2 = iVar1;
        if (iVar1 == *(int *)(iVar3 + 0xc)) {
          do {
            iVar2 = iVar3;
            iVar3 = *(int *)(iVar2 + 4);
          } while (iVar2 == *(int *)(iVar3 + 0xc));
        }
        if (*(int *)(iVar2 + 0xc) != iVar3) {
          iVar2 = iVar3;
        }
      }
      else {
        do {
          iVar2 = iVar3;
          iVar3 = *(int *)(iVar2 + 8);
        } while (*(int *)(iVar2 + 8) != 0);
      }
      (**(code **)(**(int **)(iVar1 + 0x34) + 0x58))(*(int **)(iVar1 + 0x34),4);
      iVar1 = iVar2;
    } while (iVar2 != param_1[0x19]);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*piVar4 + 0xc))(piVar4);
  return 1;
}



void fn_004579ec(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = 0x10001;
  param_1[1] = &DAT_007dba44;
  param_1[2] = 0x71;
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar1 = fn_004b7748();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0x90);
    }
    *(undefined4 *)(param_2 + 0xc) = uVar2;
  }
  return;
}



undefined4 fn_00457924(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined *local_88 [22];
  undefined4 local_30 [4];
  char local_20;
  
  local_88[0] = &DAT_0085748c;
  local_20 = '\0';
  iVar1 = param_3;
  fn_00160094(local_88);
  iVar2 = 0;
  if (0 < param_4) {
    do {
      bVar3 = *(int *)(param_2 + iVar2 * 4) != 0;
      if (bVar3) {
        iVar1 = *(int *)(param_3 + iVar2 * 4);
      }
      if ((bVar3 && iVar1 != 0) && (local_20 == '\0')) {
        fn_001600c4(local_88);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_4);
  }
  if (local_20 == '\0') {
    fn_00160190(local_88,local_30);
  }
  return local_30[0];
}



void fn_00457710(int param_1)

{
  int iVar1;
  bool bVar2;
  int local_150;
  int local_14c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined *local_18;
  code *local_14;
  undefined4 uStack_10;
  undefined1 *local_c;
  
  local_20 = 0;
  uStack_1c = 0;
  iVar1 = fn_0052d088(&local_150);
  if (-1 < iVar1) {
    bVar2 = local_14c == 200;
    if (bVar2) {
      local_14c = local_150;
    }
    if (bVar2 && local_14c == 1) {
      if (*(int *)(param_1 + 0xf0) == 0) {
        local_14 = fn_00456ab4;
        uStack_10 = 0;
        local_18 = &DAT_00853500;
        local_c = &LAB_004577f8;
        fn_00479c98(param_1,&local_18);
        return;
      }
      local_14 = fn_004570c0;
      uStack_10 = 0;
      local_18 = &DAT_00853500;
      local_c = &LAB_004577f8;
      fn_00479c98(param_1,&local_18);
      return;
    }
  }
  local_14 = fn_00456f50;
  uStack_10 = 0;
  local_18 = &DAT_00853500;
  local_c = &LAB_004577f8;
  fn_00479c98(param_1,&local_18);
  return;
}



void fn_00456f50(int param_1)

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
  undefined *local_14;
  
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  fn_00456dd4();
  local_40 = 0;
  iVar1 = fn_0052d1c8(param_1 + 0x118,*(undefined4 *)(param_1 + 0xe4),&local_3c,0);
  if (-1 < iVar1) {
    local_1c = fn_0045724c;
    uStack_18 = 0;
    local_14 = &DAT_004570ac;
    local_20 = &DAT_00853500;
    fn_00479c98(param_1,&local_20);
    return;
  }
  if (iVar1 != -0x375f3810) {
    local_40 = 0x8001000c;
    uVar2 = fn_004b8d4c(auStack_24,&local_40);
    fn_004b9e68(param_1,uVar2);
    return;
  }
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0xe0));
  if (iVar1 == 0) {
    fn_004b2f04(param_1);
    return;
  }
  iVar1 = fn_001249d0();
  if ((*(char *)(iVar1 + 0x30) == '\0') &&
     ((*(int *)(param_1 + 0xf8) == -1 ||
      (fn_004b4218(&local_20), (int)local_20 - *(int *)(param_1 + 0x100) < *(int *)(param_1 + 0xf8)
      )))) {
    fn_004b2e68(param_1,0xfa);
    return;
  }
  local_40 = 0x8001000b;
  uVar2 = fn_004b8d4c(auStack_24,&local_40);
  fn_004b9e68(param_1,uVar2);
  return;
}



void fn_0045724c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined *local_158;
  code *local_154;
  undefined4 uStack_150;
  undefined *local_14c [73];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  undefined4 local_14;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0xe0));
  if (iVar1 == 0) {
    fn_004b2f04(param_1);
    return;
  }
  iVar1 = fn_001249d0();
  if (*(char *)(iVar1 + 0x30) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x118);
    svc_0x24();
    if ((int)uVar2 < 0) {
      fn_0015e294();
    }
    if ((uVar2 & 0x3ff) != 0x3fe) {
      uVar2 = fn_0052cec0();
      if (-1 < (int)uVar2) {
        local_28 = 0;
        uStack_24 = 0;
        fn_0052d088(&local_158);
        *(code **)(*(int *)(param_1 + 0xe8) + 300) = local_154;
        *(undefined **)(*(int *)(param_1 + 0xe8) + 0x128) = local_158;
        bVar4 = local_154 == (code *)0xc8;
        if (bVar4) {
          local_154 = (code *)local_158;
        }
        if (!bVar4 || local_154 != (code *)0x1) {
          local_14 = 0x80680001;
          uVar3 = fn_004b8d4c(auStack_20,&local_14);
          fn_004b9e68(param_1,uVar3);
          return;
        }
        if (*(int *)(param_1 + 0xf0) == 0) {
          local_154 = fn_00456ab4;
          uStack_150 = 0;
          local_14c[0] = &DAT_004574b4;
          local_158 = &DAT_00853500;
          fn_00479c98(param_1,&local_158);
          return;
        }
        local_154 = fn_004570c0;
        uStack_150 = 0;
        local_14c[0] = &DAT_004574b4;
        local_158 = &DAT_00853500;
        fn_00479c98(param_1,&local_158);
        return;
      }
      if ((uVar2 & 0x3ff) == 0x104) {
        local_14c[0] = (undefined *)0x80680004;
        uVar3 = fn_004b8d4c(&local_158,local_14c);
        fn_004b9e68(param_1,uVar3);
        return;
      }
      if ((uVar2 & 0x3ff) == 0x105) {
        local_14c[0] = (undefined *)0x80680005;
        uVar3 = fn_004b8d4c(&local_158,local_14c);
        fn_004b9e68(param_1,uVar3);
        return;
      }
      local_14c[0] = (undefined *)0x80680003;
      uVar3 = fn_004b8d4c(&local_158,local_14c);
      fn_004b9e68(param_1,uVar3);
      return;
    }
    if ((*(int *)(param_1 + 0xf8) == -1) ||
       (fn_004b4218(&local_158),
       (int)local_158 - *(int *)(param_1 + 0x100) < *(int *)(param_1 + 0xf8))) {
      fn_004b2e68(param_1,0xfa);
      return;
    }
  }
  local_14c[0] = (undefined *)0x8001000b;
  uVar3 = fn_004b8d4c(&local_158,local_14c);
  fn_004b9e68(param_1,uVar3);
  return;
}



void fn_004570c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_40 [7];
  undefined1 auStack_24 [4];
  undefined *local_20;
  code *local_1c;
  undefined4 uStack_18;
  undefined4 *local_14;
  
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0x30303030;
  local_40[6] = 0;
  fn_00456dd4(param_1);
  fn_001782b8(local_40 + 2,*(undefined4 *)(param_1 + 0xf0),8);
  local_40[0] = 0;
  local_40[1] = 0;
  iVar1 = fn_0052d0fc(param_1 + 0x118,*(undefined4 *)(param_1 + 0xe4),local_40 + 2,local_40 + 5);
  if (-1 < iVar1) {
    local_1c = fn_004574b8;
    uStack_18 = 0;
    local_14 = &DAT_00457234;
    local_20 = &DAT_00853500;
    fn_00479c98(param_1,&local_20);
    return;
  }
  if (iVar1 != -0x375f3810) {
    local_40[0] = -0x7ffefff4;
    uVar2 = fn_004b8d4c(auStack_24,local_40);
    fn_004b9e68(param_1,uVar2);
    return;
  }
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0xe0));
  if (iVar1 == 0) {
    fn_004b2f04(param_1);
    return;
  }
  iVar1 = fn_001249d0();
  if ((*(char *)(iVar1 + 0x30) == '\0') &&
     ((*(int *)(param_1 + 0xf8) == -1 ||
      (fn_004b4218(local_40), local_40[0] - *(int *)(param_1 + 0x100) < *(int *)(param_1 + 0xf8))))
     ) {
    fn_004b2e68(param_1,0xfa);
    return;
  }
  local_40[0] = -0x7ffefff5;
  uVar2 = fn_004b8d4c(auStack_24,local_40);
  fn_004b9e68(param_1,uVar2);
  return;
}


