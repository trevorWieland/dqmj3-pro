#include "00612360_00614bfc.h"



void fn_00614bfc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_18;
  
  uVar2 = DAT_00897800;
  local_18 = param_4;
  uVar1 = fn_002ea518(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4));
  fn_002317d8(&local_18,uVar1,0);
  fn_0016ba84(uVar2,local_18);
  fn_001588d4(&local_18);
  iVar3 = *(int *)(param_1 + 0x20);
  uVar2 = fn_0016ba34(uVar2,L"rom:/data/Message/DiscQuestResultMessage.mes",
                       s_Lottery_Success_008c6cc3,0);
  fn_0036c140(*(undefined4 *)(iVar3 + 0x48),uVar2);
  fn_001f749c(iVar3,0x48,0);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



void fn_00613c58(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_006132ec(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_007cbde4;
  if (param_1[0x16] != 0) {
    fn_002feef8(param_1[0x16]);
  }
  iVar1 = fn_00787a14(param_1 + 10);
  fn_0061564c(iVar1 + -0x28);
  fn_002feef8();
  return;
}



/* WARNING: Removing unreachable block (ram,0x00613198) */
/* WARNING: Removing unreachable block (ram,0x00613194) */
/* WARNING: Removing unreachable block (ram,0x0061319c) */
/* WARNING: Removing unreachable block (ram,0x006131a0) */
/* WARNING: Removing unreachable block (ram,0x006131a4) */
/* WARNING: Removing unreachable block (ram,0x006131b0) */
/* WARNING: Removing unreachable block (ram,0x006131d8) */
/* WARNING: Removing unreachable block (ram,0x006131e0) */
/* WARNING: Removing unreachable block (ram,0x006131ec) */
/* WARNING: Removing unreachable block (ram,0x006131fc) */
/* WARNING: Removing unreachable block (ram,0x00613204) */
/* WARNING: Removing unreachable block (ram,0x00613210) */
/* WARNING: Removing unreachable block (ram,0x0061321c) */
/* WARNING: Removing unreachable block (ram,0x00613240) */
/* WARNING: Removing unreachable block (ram,0x0061324c) */
/* WARNING: Removing unreachable block (ram,0x00613254) */
/* WARNING: Removing unreachable block (ram,0x00613258) */
/* WARNING: Removing unreachable block (ram,0x00613260) */
/* WARNING: Removing unreachable block (ram,0x00613264) */
/* WARNING: Removing unreachable block (ram,0x00613268) */
/* WARNING: Removing unreachable block (ram,0x00613274) */
/* WARNING: Removing unreachable block (ram,0x0061329c) */

undefined4 *
fn_006130d4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  param_1[1] = param_7;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  *param_1 = &DAT_007cbde4;
  param_1[4] = 0xffffffff;
  param_1[5] = param_4;
  param_1[7] = param_2;
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[0x14] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  fn_00787a14(&local_68);
  *(undefined2 *)(param_1 + 0x15) = 0xffff;
  param_1[0x16] = 0;
  param_1[0x17] = param_5;
  param_1[0x18] = param_6;
  param_1[0x19] = 0;
  param_1[0x1a] = param_7;
  *(undefined1 *)(param_1 + 0x1b) = param_8;
  return param_1;
}



void fn_00612c2c(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined1 auStack_138 [240];
  undefined1 auStack_48 [20];
  undefined1 auStack_34 [20];
  
  switch(*(undefined1 *)(param_1 + 0x19)) {
  default:
    return;
  case 2:
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  case 3:
    if (**(char **)(param_1 + 0x24) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x19) = 1;
  case 1:
    uVar3 = DAT_00897800;
    switch(*(undefined1 *)(param_1 + 0x18)) {
    case 2:
      if (*(int *)(param_1 + 0x48) != 0) {
        piVar6 = *(int **)(param_1 + 0x28);
        fn_0015b0dc(*piVar6 + 4);
        fn_0015b0f8((char)piVar6[1]);
        iVar2 = *piVar6;
        iVar5 = fn_00246924(iVar2);
        if (iVar5 == 0) {
          fn_0015b0f8(*(undefined1 *)(iVar2 + 0x2e));
        }
        else {
          local_148 = 0;
          local_144 = 0;
          fn_002309d8(&local_148,4,*(undefined1 *)(iVar2 + 0x2e),1);
          fn_0015b0dc(&local_148);
        }
        iVar5 = *(int *)(param_1 + 0x1c);
        uVar3 = fn_0016ba34(uVar3,L"rom:/data/Message/DiscQuestResultMessage.mes",
                             s_Result_MonsterLevelUp_008c6c4d,0);
        fn_0036c140(*(undefined4 *)(iVar5 + 0x48),uVar3);
        fn_001f749c(iVar5,0x48,0);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 8;
        iVar5 = *(int *)(param_1 + 0x48) + -1;
        *(int *)(param_1 + 0x48) = iVar5;
        if ((iVar5 == 0) || (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x30))) {
          fn_0078798c();
        }
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
    }
    break;
  case 4:
    iVar5 = *(int *)(param_1 + 100);
    if (iVar5 == 0) {
      return;
    }
    if (iVar5 == 1) {
      if (**(char **)(param_1 + 0x24) == '\0') {
        return;
      }
      iVar2 = fn_00145b00(0x114,&DAT_00812c8c);
      iVar5 = 0;
      if (iVar2 != 0) {
        iVar5 = fn_002fa328();
      }
      iVar2 = *(int *)(param_1 + 0x58);
      if (iVar2 != iVar5) {
        if (iVar2 != 0) {
          fn_002feef8(iVar2);
        }
        *(int *)(param_1 + 0x58) = iVar5;
      }
      local_148 = 0x14;
      fn_00699648(DAT_008977e0,0xff,0,1);
      *(undefined4 *)(param_1 + 100) = 2;
      return;
    }
    if (iVar5 == 2) {
      iVar5 = fn_006f73a0(DAT_008977e0,0,1);
      if (iVar5 == 0) {
        return;
      }
      iVar5 = fn_00178f9c(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4),
                           *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0xc));
      *(byte *)(*(int *)(iVar5 + 0x10) + 0x44) = *(byte *)(*(int *)(iVar5 + 0x10) + 0x44) & 0xfe;
      iVar5 = fn_00178f9c(*(undefined4 *)(*(int *)(param_1 + 0x60) + 4),
                           *(undefined4 *)(*(int *)(param_1 + 0x60) + 0xc));
      *(byte *)(*(int *)(iVar5 + 0x10) + 0x44) = *(byte *)(*(int *)(iVar5 + 0x10) + 0x44) & 0xfe;
      uVar3 = *(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4);
      if (*(char *)(param_1 + 0x18) == '\x05') {
        uVar3 = fn_006c8c2c();
        iVar5 = fn_0030c230(uVar3,auStack_48,0);
        if (iVar5 == 0) {
          fn_00237c74(auStack_138,0xb81,0);
        }
        else {
          fn_002cd4cc(auStack_34,0x18b,auStack_48);
          fn_00237c74(auStack_138,0xb81,0,auStack_34);
        }
      }
      else {
        uVar4 = fn_006c97c0();
        local_148 = 0;
        local_144 = 0;
        uStack_140 = 1;
        fn_003d6134(uVar3,auStack_138,uVar4,1);
      }
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))();
      fn_002f96c4(*(undefined4 *)(param_1 + 0x58),auStack_138,*(undefined4 *)(param_1 + 0x1c),0);
      *(undefined4 *)(param_1 + 100) = 3;
      return;
    }
    if (iVar5 != 3) {
      return;
    }
    iVar5 = fn_002f9da0(*(undefined4 *)(param_1 + 0x58));
    if (iVar5 == 0) {
      return;
    }
    uVar1 = *(uint *)(DAT_00897808 + 0x18);
    if ((((uVar1 & 0xff) != 0 || (uVar1 & 0xffff) >> 8 != 0) || (uVar1 & 0xffffff) >> 0x10 != 0) ||
        uVar1 >> 0x18 != 0) {
      local_148 = 0;
      fn_00163988(DAT_00897808,&local_148,1);
    }
    uVar1 = *(uint *)(DAT_0089780c + 0x18);
    if ((((uVar1 & 0xff) != 0 || (uVar1 & 0xffff) >> 8 != 0) || (uVar1 & 0xffffff) >> 0x10 != 0) ||
        uVar1 >> 0x18 != 0) {
      local_148 = 0;
      fn_00163988(DAT_0089780c,&local_148,1);
    }
    break;
  case 5:
    if (*(int *)(param_1 + 100) == 0) {
      return;
    }
    if (*(int *)(param_1 + 100) != 1) {
      return;
    }
    iVar5 = fn_0028eb38(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc));
    if (iVar5 != 0) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x19) = 6;
  return;
}



void fn_00612394(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x19);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iVar2 = *(int *)(param_1 + 0x1c) + 1;
      *(int *)(param_1 + 0x1c) = iVar2;
      if (iVar2 == 0x1f) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      fn_001088e0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
      iVar2 = fn_00154a6c();
      if (iVar2 != 0) {
        fn_00159f34(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
        uVar3 = fn_0010887c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
        *(undefined4 *)(param_1 + 0x10) = uVar3;
        *(undefined1 *)(param_1 + 0x19) = 2;
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
    }
    else if (cVar1 == '\x02') {
      fn_001088e0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
      iVar2 = fn_00154a6c();
      if (iVar2 != 0) {
        fn_00159f34(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
        uVar3 = fn_0010887c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
        *(undefined4 *)(param_1 + 0x10) = uVar3;
        *(undefined1 *)(param_1 + 0x19) = 3;
      }
    }
    else if (cVar1 == '\x03') {
      fn_001088e0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
      fn_00154a6c();
      return;
    }
  }
  return;
}



void fn_00612360(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0010887c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                       s_network_coin_get_bg_star_00_bfla_008c75d4,*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


