#include "single_004bb718_1.h"



void fn_004bb718(undefined4 param_1,int param_2,int param_3,wchar16 *param_4,int param_5,
                 int param_6,int param_7,int param_8,undefined4 param_9,int param_10)

{
  char cVar1;
  wchar16 *pwVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  wchar16 *pwVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined4 local_b0;
  undefined1 auStack_ac [36];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_70 [2];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  undefined *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined *puStack_44;
  undefined4 local_34;
  int iStack_30;
  int iStack_2c;
  wchar16 *pwStack_28;
  
  uVar11 = 0;
  *(undefined4 *)(param_2 + 300) = 200;
  *(undefined4 *)(param_2 + 0x128) = 0;
  *(undefined4 *)(param_2 + 0x13c) = 0;
  local_70[0] = 0x10001;
  local_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  pwStack_28 = param_4;
  uVar3 = fn_004b8d4c(auStack_60,local_70);
  iVar4 = fn_004b8d90(param_2 + 0x130,uVar3);
  if (param_3 != 0) {
    iVar4 = param_5;
  }
  if ((param_3 == 0 || iVar4 == 0) || ((param_6 != 0 && (param_7 == 0)))) {
    local_b0 = 0x8001000a;
    fn_004b8d4c(local_34,&local_b0);
    return;
  }
  pwVar2 = (wchar16 *)&DAT_008a645c;
  if (DAT_008a6464 <= param_4) {
    pwVar2 = DAT_008a6468;
  }
  pwVar8 = DAT_008a6464;
  if (DAT_008a6464 <= param_4 && param_4 <= pwVar2) {
    pwVar8 = L"0x%08x is the game server ID for NEX sample demo server. ";
  }
  if (param_8 != 0) {
    local_b0 = 0x80010002;
    fn_004b8d4c(local_34,&local_b0);
    return;
  }
  iVar4 = fn_0052c6ec(0,pwVar8);
  if (iVar4 == 0) {
    local_b0 = 0x80650000;
    fn_004b8d4c(local_34,&local_b0);
    return;
  }
  if ((*(char *)(param_2 + 0x141) == '\0') && (iVar4 = fn_0052c610(), iVar4 == 0)) {
    local_b0 = 0x80650002;
    fn_004b8d4c(local_34,&local_b0);
    return;
  }
  if ((param_10 != 0) && (iVar4 = fn_0052c888(), iVar4 != param_10)) {
    local_b0 = 0x80650009;
    fn_004b8d4c(local_34,&local_b0);
    return;
  }
  piVar5 = *(int **)(param_2 + 0x11c);
  if (piVar5 != (int *)0x0) {
    if (*(char *)((int)piVar5 + 0x22) != '\x05') goto LAB_004bb95c;
    puVar10 = (uint *)(piVar5 + 1);
    do {
      uVar9 = *puVar10 - 1;
      bVar12 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar12);
    *puVar10 = uVar9;
    bVar12 = uVar9 == 0;
    if (bVar12) {
      uVar9 = (uint)*(byte *)(piVar5 + 2);
    }
    if (bVar12 && uVar9 == 0) {
      *(undefined1 *)(piVar5 + 2) = 1;
      (**(code **)(*piVar5 + 4))();
    }
    *(undefined4 *)(param_2 + 0x11c) = 0;
  }
  iVar4 = fn_006d19b8(param_2);
  bVar12 = iVar4 == 0;
  if (bVar12) {
    iVar4 = *(int *)(param_2 + 0x78);
  }
  if (bVar12 && iVar4 == 0) {
    iVar4 = *(int *)(param_2 + 0x120);
    cVar1 = '\0';
    if (iVar4 != 0) {
      cVar1 = *(char *)(iVar4 + 0x22);
    }
    if ((iVar4 == 0 || cVar1 == '\x05') && (iVar4 = fn_006d1a20(param_2), iVar4 == 0)) {
      uVar3 = fn_00468f84();
      fn_00468c28();
      fn_00468ffc(uVar3);
      *(short *)(param_2 + 0x7c) = (short)uVar3;
      fn_0045fb88(auStack_ac);
      uVar3 = fn_00468c28();
      fn_00468e80(uVar3,auStack_ac);
      fn_0013d3e8(auStack_68,param_5);
      fn_0046c37c();
      fn_00170f54(auStack_68);
      iVar4 = fn_00455e10(param_3);
      if (iVar4 == 0) {
        local_b0 = 0x8001000d;
        fn_004b8d4c(local_34,&local_b0);
        fn_0045fbe8(auStack_ac);
        return;
      }
      iVar4 = fn_0015ecdc(0x2b8);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        puVar6 = (undefined4 *)fn_00479cd8(iVar4,2,&local_88);
        *puVar6 = &PTR_FUN_00855c84;
        iVar4 = fn_0048cc04(puVar6 + 0x1a,0);
        *(undefined4 *)(iVar4 + 0x78) = 0;
        *(undefined4 *)(iVar4 + 0x7c) = 0;
        *(undefined4 *)(iVar4 + 0x80) = 0;
        *(undefined4 *)(iVar4 + 0x84) = 0;
        *(undefined4 *)(iVar4 + 0x88) = 0;
        *(undefined4 *)(iVar4 + 0x8c) = 0;
        *(undefined4 *)(iVar4 + 0x98) = 0;
        *(undefined4 *)(iVar4 + 0x90) = 0;
        *(undefined4 *)(iVar4 + 0x9c) = 0;
        *(undefined **)(iVar4 + 0xa0) = &DAT_008535ec;
        *(undefined4 *)(iVar4 + 0xa4) = 0;
        iVar7 = fn_0013d40c(iVar4 + 0xa8);
        iVar4 = iVar7 + -0x110;
        *(undefined **)(iVar7 + -0x110) = &DAT_008528cc;
        *(undefined4 *)(iVar7 + 8) = 0;
        *(undefined1 *)(iVar7 + 0xc) = 0;
        fn_00301f50(iVar7 + 0x10,0x198);
        *(undefined4 *)(iVar7 + 0x1a0) = 0;
        *(undefined4 *)(iVar7 + 0x1a4) = 0;
      }
      *(int *)(param_2 + 0x11c) = iVar4;
      uVar3 = *(undefined4 *)(param_3 + 0x44);
      *(int *)(iVar4 + 0xe8) = param_2;
      *(undefined4 *)(iVar4 + 0xe0) = uVar3;
      *(wchar16 **)(iVar4 + 0xe4) = param_4;
      *(int *)(iVar4 + 0xf0) = param_6;
      *(int *)(iVar4 + 0xf4) = param_7;
      *(undefined4 *)(iVar4 + 0xf8) = param_9;
      fn_004b4218(&local_88);
      *(undefined4 *)(iVar4 + 0x100) = local_88;
      *(undefined4 *)(iVar4 + 0x104) = uStack_84;
      uStack_4c = 0x34;
      uStack_48 = 1;
      local_50 = &DAT_00853500;
      puStack_44 = &DAT_007d94a0;
      fn_00479c98(iVar4,&local_50);
      piVar5 = (int *)(*(int *)(param_2 + 0x11c) + 4);
      do {
        bVar12 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar12);
      *piVar5 = *piVar5 + 1;
      iVar4 = fn_001249d0();
      if (iVar4 != 0) {
        uVar11 = *(undefined4 *)(iVar4 + 0xc);
      }
      fn_004bdba4(uVar11,*(undefined4 *)(param_2 + 0x11c),0);
      local_70[0] = 0x10001;
      fn_004b8d4c(local_34,local_70);
      fn_0045fbe8(auStack_ac);
      return;
    }
  }
LAB_004bb95c:
  local_b0 = 0x80010004;
  fn_004b8d4c(local_34,&local_b0);
  return;
}


