#include "0014f60c_0014ff08.h"

static void svc_0x18(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x18 }
#endif
}

static void svc_0x19(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x19 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


void fn_0014ff08(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_001502a4();
  fn_001501e8(uVar1,0xffff8001,param_1,param_2);
  return;
}



void fn_0014fef4(void)

{
  fn_0015fc90(DAT_008bfbf8);
  return;
}



undefined1 * fn_0014fe94(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (DAT_008c0374 < 1) {
    puVar1 = (undefined1 *)0xd8a067f8;
  }
  else {
    if (param_3 < 9) {
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar2 + 0x80) = 0x50100;
      fn_00166824(iVar2 + 0x84);
      *(int *)(iVar2 + 0x8c) = param_3;
      *(undefined4 *)(iVar2 + 0x90) = param_4;
      svc_0x32();
      puVar1 = DAT_008c0378;
      if (-1 < (int)DAT_008c0378) {
        *param_1 = *(undefined4 *)(iVar2 + 0x8c);
        puVar1 = *(undefined1 **)(iVar2 + 0x84);
      }
      return puVar1;
    }
    puVar1 = &DAT_d9006405;
  }
  return puVar1;
}



void fn_0014fbe4(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined2 local_c8 [8];
  ushort local_b8 [4];
  int local_b0;
  int local_ac;
  int *local_a8 [4];
  int *local_98;
  int *local_94;
  int *piStack_90;
  int *local_8c;
  int *piStack_88;
  int *local_84;
  int *piStack_80;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *local_70;
  int local_68;
  int local_64;
  undefined1 auStack_5c [4];
  ushort local_58 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if ((char)param_1[0x4c7] == '\0') {
    *(undefined1 *)(param_1 + 0x4c7) = 1;
    if (param_2 == 0) {
      local_c8[0] = 0;
    }
    else {
      local_c8[0] = 2;
      fn_00301a9c(param_1[0x42b],param_1 + 7,0x1080);
      coproc_moveto_Data_Synchronization(0);
    }
    fn_0014e518(2,local_c8,4);
    fn_0015e358(0x4000);
    if ((char)param_1[0x4c7] != '\0') {
      svc_0x24();
      if (*param_1 < 0) {
        fn_0015e294();
      }
      svc_0x19();
      if (*param_1 < 0) {
        fn_0015e294();
      }
      *(char *)((int)param_1 + 0x131d) = *(char *)((int)param_1 + 0x131d) + '\x01';
    }
    fn_0015e384(2,local_b8,2,auStack_5c);
    fn_0015e384(2,local_58,(local_b8[0] & 0x7fff) << 1,auStack_5c);
    local_a8[0] = param_1 + 0x427;
    local_a8[1] = &local_30;
    local_a8[2] = &local_b0;
    local_a8[3] = &local_38;
    local_98 = param_1 + 0x429;
    local_70 = param_1 + 0x56a;
    local_8c = &local_68;
    piStack_88 = param_1 + 0x4c3;
    local_94 = param_1 + 0x42b;
    piStack_90 = param_1 + 0x4c1;
    local_84 = param_1 + 0x4c5;
    piStack_80 = param_1 + 0x562;
    piStack_7c = param_1 + 0x564;
    piStack_78 = param_1 + 0x566;
    piStack_74 = param_1 + 0x568;
    iVar3 = 0;
    if (local_b8[0] != 0) {
      do {
        fn_0015e3d8(local_58[iVar3],local_a8[iVar3]);
        fn_0015e3d8(local_58[iVar3] | 0x10000,local_a8[iVar3] + 1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)local_b8[0]);
    }
    param_1[0x4bd] = local_68;
    param_1[0x4be] = local_68 + 0xa00;
    param_1[0x4bf] = local_64;
    param_1[0x4c0] = local_64 + 0xa00;
    iVar3 = 0;
    do {
      param_1[iVar3 + 0x42d] = local_30 + iVar3 * 0xc0;
      param_1[iVar3 + 0x45d] = local_b0 + iVar3 * 0xc;
      param_1[iVar3 + 0x48d] = local_38 + iVar3 * 0x20;
      param_1[iVar3 + 0x445] = local_2c + iVar3 * 0xc0;
      param_1[iVar3 + 0x475] = local_ac + iVar3 * 0xc;
      iVar2 = iVar3 + 1;
      param_1[iVar3 + 0x4a5] = local_34 + iVar3 * 0x20;
      iVar3 = iVar2;
    } while (iVar2 < 0x18);
    fn_0015e358(0x4000);
    *(undefined1 *)((int)param_1 + 0x131d) = 0;
    *(undefined2 *)((int)param_1 + 0x131e) = 4;
    *(undefined2 *)param_1[0x427] = 4;
    *(short *)((int)param_1 + 0x131e) = *(short *)((int)param_1 + 0x131e) + 1;
    svc_0x18();
    if (param_1[1] < 0) {
      fn_0015e294();
    }
    uVar1 = *(ushort *)((int)param_1 + 0x131e) & 1;
    *(ushort *)((int)param_1 + 0x1322) = uVar1;
    *(ushort *)(param_1 + 0x4c8) = uVar1;
  }
  return;
}



undefined4 fn_0014fb58(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  *(char *)(param_1 + 2) = (char)param_2;
  uVar2 = fn_0015f5b8(&DAT_008ef5bc,param_2);
  fn_00193380();
  return uVar2;
}



void fn_0014fa6c(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  fn_00171538(&DAT_008ef5bc);
  iVar2 = 0;
  do {
    iVar3 = (int)(char)iVar2;
    fn_0017d2b0(&DAT_008ef5bc,iVar3);
    fn_0017d024(&DAT_008ef5bc,iVar3);
    fn_0015f52c(&DAT_008ef5bc,iVar3,(int)*(char *)(param_1 + iVar3 + 0x24));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  fn_0015f5b8(&DAT_008ef5bc,*(undefined1 *)(param_1 + 2));
  fn_0015f460(&DAT_008ef5bc,*(undefined1 *)(param_1 + 1));
  fn_0015f4c0(&DAT_008ef5bc,*(undefined2 *)(param_1 + 0x28));
  fn_0015f6cc(&DAT_008ef5bc,*(undefined1 *)(param_1 + 0x27));
  fn_0015f3f8(&DAT_008ef5bc,*(undefined2 *)(param_1 + 0x2a));
  fn_0015f618(&DAT_008ef5bc,*(undefined2 *)(param_1 + 0x32));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  bVar1 = *(byte *)(param_1 + 3);
  fn_00193374();
  iVar2 = fn_00189e18();
  if (iVar2 == 0) {
    fn_00193380();
    return;
  }
  iVar2 = *(int *)(&DAT_008f0660 + (uint)DAT_008f08de * 4);
  *(ushort *)(iVar2 + 0xbc) = (ushort)bVar1;
  *(uint *)(iVar2 + 0xc0) = *(uint *)(iVar2 + 0xc0) | 0x10000;
  fn_00193380();
  return;
}



void fn_0014f884(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x3f800000;
  if (*param_1 != '\0') {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = -0x80;
    param_1[7] = '?';
    fn_00171538(&DAT_008ef5bc);
  }
  if (*param_1 != '\0') {
    *(undefined4 *)(param_1 + 8) = uVar2;
    fn_00171538(&DAT_008ef5bc);
  }
  if (*param_1 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    fn_0017d2b0(&DAT_008ef5bc,0);
  }
  if (*param_1 != '\0') {
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    fn_0017d2b0(&DAT_008ef5bc,1);
  }
  fn_00170704();
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  fn_0017d024(&DAT_008ef5bc,0,(int)param_1[0x30]);
  fn_001707b4(param_1 + 0x34);
  fn_00170704(param_1 + 0x34);
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  fn_0017d024(&DAT_008ef5bc,1,(int)param_1[0x31]);
  fn_001707b4(param_1 + 0x34);
  param_1[0x24] = '\0';
  fn_0015f52c(&DAT_008ef5bc,0);
  param_1[0x25] = '\0';
  fn_0015f52c(&DAT_008ef5bc,1);
  param_1[0x2a] = '\0';
  param_1[0x2b] = -0x80;
  fn_0015f3f8(&DAT_008ef5bc);
  param_1[0x28] = -1;
  param_1[0x29] = '\x7f';
  fn_0015f4c0(&DAT_008ef5bc);
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
  }
  else {
    param_1[1] = '\x01';
    fn_0015f460(&DAT_008ef5bc,1);
    fn_00193380();
  }
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\x02';
  param_1[0x33] = '\0';
  fn_0015f618(&DAT_008ef5bc);
  param_1[3] = '\0';
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return;
  }
  iVar1 = *(int *)(&DAT_008f0660 + (uint)DAT_008f08de * 4);
  *(undefined2 *)(iVar1 + 0xbc) = 0;
  *(uint *)(iVar1 + 0xc0) = *(uint *)(iVar1 + 0xc0) | 0x10000;
  fn_00193380();
  return;
}



void fn_0014f85c(char *param_1)

{
  if (*param_1 == '\0') {
    fn_0013c500(param_1 + 0x34);
    *param_1 = '\x01';
  }
  return;
}



void fn_0014f7bc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = (int)(char)iVar1;
    *(undefined2 *)(param_1 + iVar2 * 0x14) = 0xffff;
    fn_0017d1ac(&DAT_008ef5bc,iVar2);
    *(undefined2 *)(param_1 + iVar2 * 0x34 + 0x28) = 0xffff;
    fn_0017d328(&DAT_008ef5bc,iVar2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0014f700) */
/* WARNING: Removing unreachable block (ram,0x0014f694) */
/* WARNING: Removing unreachable block (ram,0x0014f6c4) */
/* WARNING: Removing unreachable block (ram,0x0014f774) */

void fn_0014f60c(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 local_50;
  undefined2 local_4e;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  iVar1 = fn_00171504();
  iVar3 = 0;
  do {
    iVar2 = (int)(char)iVar3;
    local_4e = 0;
    local_50 = 1;
    *(undefined2 *)(iVar1 + iVar2 * 0x14 + 2) = 0;
    fn_0017d1ac(&DAT_008ef5bc,iVar2,&local_50);
    local_4e = 0;
    local_50 = 1;
    *(undefined2 *)(iVar1 + iVar2 * 0x34 + 0x2a) = 0;
    fn_0017d328(&DAT_008ef5bc,iVar2,&local_50);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  return;
}


