#include "0015f1e0_0015f7d0.h"

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

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


void fn_0015f7d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  if ((param_5 == 0) || (param_1 + 0xe1000000U < 0x600000)) {
    local_28 = DAT_008c0774[4];
    uStack_24 = DAT_008c0774[5];
    uStack_20 = DAT_008c0774[6];
    local_38 = CONCAT13(DAT_008c0770,(int3)*DAT_008c0774) & 0xffffff00;
    local_34 = param_2;
    local_30 = param_1;
    uStack_2c = param_3;
    local_1c = param_4;
    iVar1 = fn_0015ff34();
    fn_00171708(iVar1 + 0x58,&local_38);
  }
  return;
}



void fn_0015f770(void)

{
  if (DAT_0089a7c0 != '\0') {
    fn_0013c674();
    DAT_0089a7c0 = '\0';
  }
  return;
}



int fn_0015f738(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xc0080;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  svc_0x32();
  iVar1 = DAT_008c0378;
  if (-1 < DAT_008c0378) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined4 fn_0015f6cc(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if ((iVar1 == 0) || (1 < param_2)) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
  *(short *)((int)puVar2 + 0x1e) = (short)param_2;
  *puVar2 = *puVar2 | 0x40000000;
  fn_00193380();
  return 1;
}



void fn_0015f618(int param_1,undefined2 param_2)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
  *(undefined2 *)(puVar2 + 4) = param_2;
  *puVar2 = *puVar2 | 0x8000;
  fn_00193380();
  return;
}



undefined4 fn_0015f5b8(int param_1,undefined2 param_2)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
  *(undefined2 *)((int)puVar2 + 0x16) = param_2;
  *puVar2 = *puVar2 | 0x4000000;
  fn_00193380();
  return 1;
}



undefined4 fn_0015f52c(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
  *(undefined2 *)((int)puVar2 + param_2 * 2 + 0x24) = param_3;
  if (param_2 == 0) {
    uVar3 = *puVar2 | 0x40;
  }
  else {
    if (param_2 != 1) goto code_r0x0015f5a8;
    uVar3 = *puVar2 | 0x80;
  }
  *puVar2 = uVar3;
code_r0x0015f5a8:
  fn_00193380();
  return 1;
}



undefined4 fn_0015f4c0(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  if (0x7fff < param_2) {
    param_2 = 0x7fff;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
  *(short *)(puVar2 + 7) = (short)param_2;
  *puVar2 = *puVar2 | 0x20000000;
  fn_00193380();
  return 1;
}



undefined4 fn_0015f460(int param_1,undefined2 param_2)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
  *(undefined2 *)(puVar2 + 6) = param_2;
  *puVar2 = *puVar2 | 0x8000000;
  fn_00193380();
  return 1;
}



undefined4 fn_0015f3f8(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  if (0x8000 < param_2) {
    param_2 = 0x8000;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
  *(short *)((int)puVar2 + 0x22) = (short)param_2;
  *puVar2 = *puVar2 | 0x80000000;
  fn_00193380();
  return 1;
}



void fn_0015f38c(int param_1,int param_2,undefined4 param_3)

{
  *(int *)(&DAT_008ef580 + param_1 * 4) = param_2;
  *(undefined4 *)(&DAT_008ef588 + param_1 * 4) = param_3;
  fn_00170704(&DAT_008f34f0);
  *(int *)(&DAT_008f34d0 + param_1 * 4) = param_2;
  *(undefined4 *)(&DAT_008f34d8 + param_1 * 4) = param_3;
  if (param_2 == 0) {
    fn_0017d024(&DAT_008ef5bc,param_1,(int)*(char *)(param_1 + 0x8f34ec));
  }
  else {
    fn_0017d024(&DAT_008ef5bc,param_1,1);
  }
  fn_001707b4(&DAT_008f34f0);
  return;
}



void fn_0015f364(undefined1 param_1)

{
  int iVar1;
  
  iVar1 = fn_001711b4();
  if (*(char *)(iVar1 + 0x30) == '\0') {
    *(undefined1 *)(iVar1 + 8) = param_1;
  }
  return;
}



void fn_0015f270(void)

{
  int iVar1;
  
  iVar1 = fn_001711b4();
  if (*(char *)(iVar1 + 0xe) != '\0') {
    *(undefined1 *)(iVar1 + 0xf) = 0;
    svc_0x24();
    if (*(int *)(iVar1 + 0x18) < 0) {
      fn_0015e294();
    }
    *(undefined1 *)(iVar1 + 0x1c) = 1;
    fn_0015e304(iVar1 + 0x18);
    if (*(int *)(iVar1 + 0x18) != 0) {
      svc_0x23();
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    *(undefined1 *)(iVar1 + 0xe) = 0;
    coproc_moveto_Data_Synchronization(0);
    fn_0015dfc0(iVar1 + 0x48);
  }
  if (*(char *)(iVar1 + 0xc) != '\0') {
    *(undefined1 *)(iVar1 + 0xd) = 0;
    svc_0x24();
    if (*(int *)(iVar1 + 0x10) < 0) {
      fn_0015e294();
    }
    *(undefined1 *)(iVar1 + 0x14) = 1;
    fn_0015e304(iVar1 + 0x10);
    if (*(int *)(iVar1 + 0x10) != 0) {
      svc_0x23();
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined1 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0xffffffff;
    DAT_008f0b6c = 1;
    *(undefined1 *)(iVar1 + 0xc) = 0;
  }
  return;
}



int fn_0015f1e0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = fn_0017125c(param_1,param_6,param_7,*param_2,param_2[1],param_2[2],param_8);
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0x20) = param_3;
    *(undefined4 *)(param_1 + 0x24) = param_4;
    if ((param_5 == (undefined4 *)0x0) ||
       (iVar1 = fn_001713a8(param_1,*param_5,param_5[1],param_5[2]), -1 < iVar1)) {
      return 0;
    }
    fn_0015f280(param_1);
  }
  return iVar1;
}



void fn_0015f280(int param_1)

{
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined1 *)(param_1 + 0xf) = 0;
    svc_0x24();
    if (*(int *)(param_1 + 0x18) < 0) {
      fn_0015e294();
    }
    *(undefined1 *)(param_1 + 0x1c) = 1;
    fn_0015e304(param_1 + 0x18);
    if (*(int *)(param_1 + 0x18) != 0) {
      svc_0x23();
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
    coproc_moveto_Data_Synchronization(0);
    fn_0015dfc0(param_1 + 0x48);
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    svc_0x24();
    if (*(int *)(param_1 + 0x10) < 0) {
      fn_0015e294();
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
    fn_0015e304(param_1 + 0x10);
    if (*(int *)(param_1 + 0x10) != 0) {
      svc_0x23();
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    DAT_008f0b6c = 1;
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return;
}


