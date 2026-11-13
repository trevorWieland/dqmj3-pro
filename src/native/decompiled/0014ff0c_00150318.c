#include "0014ff0c_00150318.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


/* WARNING: Removing unreachable block (ram,0x001503b8) */
/* WARNING: Removing unreachable block (ram,0x001503cc) */

void fn_00150318(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_54;
  uint uStack_4c;
  int iStack_44;
  uint uStack_3c;
  int iStack_2c;
  
  if (param_2 == (int *)0x0 || param_3 == 0) {
    return;
  }
  iVar1 = *(int *)(param_3 + 0x14) + param_1;
  if (*(char *)(param_3 + 4) != '\0') {
    fn_001503ac(iVar1,param_2,1,0);
    fn_001503ac(*(int *)(param_3 + 8) + param_1,param_2,0);
    fn_001503ac(*(int *)(param_3 + 0xc) + param_1,param_2,0,1);
    return;
  }
  fn_001503ac(iVar1,param_2,1,0);
  param_1 = *(int *)(param_3 + 8) + param_1;
  uStack_4c = 400;
  iVar4 = *param_2;
  iVar1 = param_2[2];
  if (iVar1 == 0) {
    iVar2 = 0x18;
  }
  else {
    iVar2 = 0;
    switch(iVar1) {
    case 1:
      iVar2 = 3;
      break;
    case 2:
    case 3:
    case 4:
      iVar2 = 2;
    }
    iVar2 = iVar2 << 3;
  }
  uStack_54 = (uint)param_2[3] >> 2;
  iStack_44 = iVar2 << 2;
  switch(iVar1) {
  case 0:
  case 1:
    iStack_68 = uStack_54 * 4 + 3;
    pcVar5 = (code *)&UNK_0015ffb4;
    uStack_60 = 3;
    break;
  case 2:
  case 3:
  case 4:
    iStack_68 = uStack_54 * 4 + 2;
    pcVar5 = fn_0015ff44;
    uStack_60 = 2;
    break;
  default:
    goto switchD_0015044c_default;
  }
  uStack_5c = 0;
  iStack_64 = uStack_54 << 2;
  uStack_6c = 0;
  if (param_1 != 0) {
    uStack_3c = 0;
    iStack_2c = uStack_54 * 8;
    do {
      uVar3 = 0;
      iVar1 = iVar4;
      do {
        (*pcVar5)(param_1,iVar1,uStack_54,&uStack_6c);
        uVar3 = uVar3 + 8;
        iVar1 = iVar1 + iVar2;
        param_1 = param_1 + iVar2 * 8;
      } while (uVar3 < 0xf0);
      iVar4 = iVar4 + iStack_2c * 4;
      param_1 = param_1 + iStack_44 * 4;
      uStack_3c = uStack_3c + 8;
    } while (uStack_3c < uStack_4c);
  }
switchD_0015044c_default:
  return;
}



void fn_001502b0(void)

{
  fn_00170704(&DAT_008ebd90);
  if (DAT_008bfbdc == '\0') {
    fn_001707b4(&DAT_008ebd90);
    return;
  }
  fn_0015fcd8(DAT_008bfbf8);
  svc_0x23();
  DAT_008bfbf0 = 0;
  DAT_008bfbdc = 0;
  fn_001707b4(&DAT_008ebd90);
  return;
}



void fn_00150294(void)

{
  fn_001707b4(&DAT_008ebd90);
  return;
}



void fn_00150284(void)

{
  fn_00170704(&DAT_008ebd90);
  return;
}



int fn_00150224(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x20084;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_5;
  *(uint *)(iVar2 + 0x8c) = param_5 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x90) = param_3;
  *(uint *)(iVar2 + 0x94) = param_5 << 0xe | 0x402;
  *(undefined4 *)(iVar2 + 0x98) = param_4;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_001501a0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10082;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(int *)(iVar2 + 0x88) = param_4;
  *(uint *)(iVar2 + 0x8c) = param_4 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x90) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_0015012c(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = fn_001502a4();
  fn_0015fe84(uVar1,param_1);
  uVar2 = param_1[2];
  if ((uVar2 & 0x70) == 0) {
    param_1[2] = -1;
  }
  else {
    bVar3 = (uVar2 & 0x20) == 0;
    if (bVar3) {
      param_3 = *param_1;
    }
    if (bVar3) {
      param_1[1] = param_3;
    }
    param_1[2] = uVar2 & 7;
  }
  param_1[6] = param_1[6] & 7;
  if (*param_1 == 0) {
    param_1[2] = -1;
  }
  if (param_1[1] == 0) {
    param_1[2] = -1;
  }
  if (param_1[4] == 0) {
    param_1[6] = -1;
  }
  param_1[5] = param_1[4];
  return;
}



void fn_0014ff3c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined *local_20;
  undefined1 *local_1c;
  int local_18;
  
  local_2c = 0;
  fn_0013c500();
  fn_00170704(param_1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  local_40 = (int *)0x0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar1 = fn_00158ef8(&local_40,0);
    if (-1 < iVar1) {
      iVar1 = 0;
      *(int **)(param_1 + 0x2c) = local_40;
    }
  }
  else {
    iVar1 = -0x1f5fe7c5;
  }
  if (iVar1 < 0) {
    fn_0015e294();
  }
  *(undefined1 *)(param_1 + 0x77) = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  fn_0014ddb8(param_1 + 100,0);
  uVar2 = fn_001502a4();
  iVar1 = fn_0013e068();
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 2;
  }
  iVar1 = fn_0015ff24();
  local_40 = &local_30;
  if (iVar1 != 0) {
    uVar4 = uVar4 | 4;
  }
  iVar1 = fn_0015fed4(uVar2,*(undefined4 *)(param_1 + 0x2c),uVar4,&local_2c);
  *(char *)(param_1 + 0x74) = (char)local_30;
  fn_0014dffc(param_1 + 0x38,local_2c,0x1000,0);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x40) + local_30 * 0x40;
  fn_0015f850(param_1 + 0x58,*(int *)(param_1 + 0x40) + local_30 * 0x200 + 0x800);
  iVar3 = local_30 * 0x80 + 0x200 + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x5c) = iVar3;
  *(int *)(param_1 + 0x60) = iVar3 + 0x40;
  if (iVar1 == 0x2a07) {
    *(undefined1 *)(param_1 + 0x75) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x75) = 0;
  }
  local_28 = 4;
  local_24 = &LAB_001675a0;
  local_3c = 0x5109d502;
  local_20 = &DAT_001775e4;
  local_1c = &LAB_001775d8;
  local_40 = (int *)(param_1 + 0x1078);
  local_38 = 0xfffffffe;
  uStack_34 = 0;
  local_18 = param_1;
  iVar1 = fn_0014e2f4(param_1 + 0x6c,&local_28,fn_0015fb38,&local_18);
  if (iVar1 < 0) {
    fn_0015e294();
  }
  fn_001707b4(param_1);
  return;
}



void fn_0014ff0c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_001502a4();
  fn_001501e8(uVar1,0xffff8001,param_1,param_2);
  return;
}



int fn_001501e8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x80082;
  *(undefined4 *)(iVar2 + 0x90) = param_2;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = 0;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


