#include "0013e8c8_0013ee90.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_0013ee90(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x3c0000;
  svc_0x32();
  iVar1 = DAT_008c0718;
  if (-1 < DAT_008c0718) {
    *param_1 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0013ebcc(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3,int param_4,
                undefined4 *param_5,int *param_6,uint param_7,uint param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  bool bVar12;
  uint local_60;
  uint local_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  undefined4 auStack_3c [2];
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined1 *puStack_2c;
  int local_28;
  
  puStack_34 = param_1;
  puStack_30 = param_2;
  puStack_2c = param_3;
  local_28 = param_4;
  if (param_7 == DAT_0089a558 && param_8 == DAT_0089a55c) {
    iVar2 = fn_001252f8(param_1,param_2,param_3,param_4,param_5,param_6,0);
    return iVar2;
  }
  if (DAT_0089a560 != param_7 || DAT_0089a564 != param_8) {
    local_60 = param_8 ^ DAT_0089a55c;
    local_50 = param_7 ^ DAT_0089a558 | local_60;
    if (local_50 != 0) {
      svc_0x28();
      goto LAB_0013ec74;
    }
  }
  local_50 = 0;
  local_60 = 0;
LAB_0013ec74:
  while( true ) {
    iVar2 = local_28;
    iVar3 = fn_0013e67c();
    if (iVar3 == 0) {
      iVar2 = -0x375f3011;
    }
    else {
      iVar3 = fn_0013e09c();
      if (iVar3 == 0) {
        puVar5 = param_1;
        if (param_1 == (undefined4 *)0x0) {
          puVar5 = &uStack_48;
        }
        puVar6 = param_2;
        if (param_2 == (undefined4 *)0x0) {
          puVar6 = &uStack_44;
        }
        if (param_3 == (undefined1 *)0x0) {
          iVar2 = 0;
        }
        puVar7 = param_3;
        if (param_3 == (undefined1 *)0x0 || iVar2 == 0) {
          puVar7 = auStack_40;
        }
        puVar10 = param_5;
        if (param_5 == (undefined4 *)0x0) {
          puVar10 = auStack_3c;
        }
        local_4c = 0;
        if (param_6 == (int *)0x0) {
          piVar11 = &local_4c;
        }
        else {
          piVar11 = param_6;
        }
        fn_00125694();
        uVar4 = fn_001252e8();
        iVar2 = fn_0013eac8(puVar5,uVar4,puVar6,puVar7,iVar2,puVar10,piVar11);
        fn_001257a8();
        if (local_4c != 0) {
          svc_0x23();
        }
      }
      else {
        uVar4 = fn_0013e09c();
        *param_2 = uVar4;
        fn_001251a8(0);
        fn_0013e368();
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = 0;
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = 0;
        }
        iVar2 = 0;
        if (param_6 != (int *)0x0) {
          *param_6 = DAT_0089a54c;
        }
      }
      fn_0013e368();
    }
    if (-1 < iVar2) break;
    if (iVar2 == -0x375f3011) {
      if (param_8 == DAT_0089a564 && param_7 == DAT_0089a560) {
        return -0x375f3011;
      }
      uVar8 = param_8 ^ DAT_0089a55c | param_7 ^ DAT_0089a558;
      if (uVar8 != 0) {
        svc_0x28();
        uVar9 = (param_7 ^ DAT_0089a558) - (local_60 + (uVar8 < local_50));
        lVar1 = (ulonglong)(uVar8 - local_50) * 3 +
                ((ulonglong)
                 (uint)(((int)uVar9 >> 0x1f) * -0x452cb512 +
                       (int)((ulonglong)uVar9 * 0xbad34aee >> 0x20)) << 0x20 |
                (ulonglong)uVar9 * 0xbad34aee & 0xffffffff) +
                CONCAT44(uVar9 * 3,(int)((ulonglong)(uVar8 - local_50) * 0xbad34aee >> 0x20));
        iVar2 = (int)((ulonglong)lVar1 >> 0x20);
        bVar12 = param_7 < (uint)lVar1;
        if ((int)(param_8 - (iVar2 + (uint)bVar12)) < 0 !=
            (SBORROW4(param_8,iVar2) != SBORROW4(param_8 - iVar2,(uint)bVar12))) {
          return -0x375f3011;
        }
      }
    }
    fn_0012d6a4(10000000,0);
  }
  return iVar2;
}



int fn_0013eb94(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x3f0040;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0013eb54(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x1010000;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    *param_1 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0013eac8(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                int param_5,undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0xd0080;
  *(undefined4 *)(iVar3 + 0x84) = param_2;
  *(int *)(iVar3 + 0x88) = param_5;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar2 + 0x180);
  uVar5 = *puVar4;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *puVar4 = param_5 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x184) = param_4;
  iVar1 = DAT_008bfb30;
  svc_0x32();
  bVar7 = -1 < DAT_008bfb30;
  *puVar4 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  if (bVar7) {
    *param_1 = *(undefined4 *)(iVar3 + 0x88);
    *param_3 = *(undefined4 *)(iVar3 + 0x8c);
    *param_6 = *(undefined4 *)(iVar3 + 0x90);
    *param_7 = *(undefined4 *)(iVar3 + 0x98);
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



int fn_0013ea84(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x3e0080;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined1 *)(iVar2 + 0x88) = param_2;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0013e9f8(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                int param_5,undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0xe0080;
  *(undefined4 *)(iVar3 + 0x84) = param_2;
  *(int *)(iVar3 + 0x88) = param_5;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar2 + 0x180);
  uVar5 = *puVar4;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *puVar4 = param_5 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x184) = param_4;
  iVar1 = DAT_008bfb30;
  svc_0x32();
  bVar7 = -1 < DAT_008bfb30;
  *puVar4 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  if (bVar7) {
    *param_1 = *(undefined4 *)(iVar3 + 0x88);
    *param_3 = *(undefined4 *)(iVar3 + 0x8c);
    *param_6 = *(undefined4 *)(iVar3 + 0x90);
    *param_7 = *(undefined4 *)(iVar3 + 0x98);
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



int fn_0013e99c(undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xf0100;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  *(undefined1 *)(iVar2 + 0x8c) = param_3;
  *(undefined4 *)(iVar2 + 0x90) = param_4;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    *param_5 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0013e944(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xc0104;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  *(undefined4 *)(iVar2 + 0x8c) = param_3;
  *(int *)(iVar2 + 0x90) = param_5;
  *(undefined4 *)(iVar2 + 0x94) = 0;
  *(undefined4 *)(iVar2 + 0x98) = param_6;
  *(uint *)(iVar2 + 0x9c) = param_5 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0xa0) = param_4;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0013e8c8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x4b00c2;
  *(undefined4 *)(iVar3 + 0x84) = param_1;
  *(int *)(iVar3 + 0x88) = param_3;
  *(int *)(iVar3 + 0x8c) = param_5;
  *(uint *)(iVar3 + 0x90) = param_3 << 0xe | 0x402;
  *(undefined4 *)(iVar3 + 0x94) = param_2;
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar1 + 0x180);
  uVar5 = *puVar4;
  uVar6 = *(undefined4 *)(iVar1 + 0x184);
  *puVar4 = param_5 << 0xe | 2;
  *(undefined4 *)(iVar1 + 0x184) = param_4;
  iVar2 = DAT_008bfb30;
  svc_0x32();
  *puVar4 = uVar5;
  *(undefined4 *)(iVar1 + 0x184) = uVar6;
  if (-1 < iVar2) {
    *param_6 = *(undefined4 *)(iVar3 + 0x88);
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}


