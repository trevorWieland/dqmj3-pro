#include "004e8e38_004e9bc8.h"

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


void fn_004e9bc8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(1000,uVar1);
  if (iVar2 == 0) {
    return;
  }
  fn_004ec0f0();
  return;
}



int fn_004e9a7c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(0x2f0,uVar1);
  iVar3 = 0;
  if (iVar2 != 0) {
    *(undefined **)(iVar2 + 4) = &DAT_00856874;
    iVar3 = fn_00101a1c(iVar2 + 0x110,&LAB_00124db8,0x28,0xc);
    iVar3 = iVar3 + -0x110;
  }
  return iVar3;
}



void fn_004e9a58(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  puVar1[0x10] = 0;
  *puVar1 = &DAT_00856a60;
  return;
}



undefined4 fn_004e99e0(int *param_1,int param_2)

{
  param_1[0x10] = param_2;
  (**(code **)(*param_1 + 8))(param_1,0);
  param_1[9] = (int)fn_004e98d8;
  param_1[10] = 0;
  param_1[0xb] = (int)"LocalEventCheckBackgroundJob::WatchUpdateEvent";
  return 0;
}



uint fn_004e98d8(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint unaff_r5;
  
  puVar1 = *(uint **)(param_1 + 0x40);
  if ((uint *)0x3fefffff < puVar1 + -0x40000) {
    return (uint)puVar1 & 0xff00 | 1;
  }
  if (*(char *)(*(int *)(DAT_008bf504 + 0x14) + 0x1f14) != '\0') {
    return (uint)puVar1 & 0xff00 | 0x80004;
  }
  uVar2 = *puVar1;
  if (uVar2 != 0) {
    svc_0x24();
    if ((int)uVar2 < 0) {
      fn_0015e294();
    }
    if ((uVar2 & 0x3ff) != 0x3fe) {
      iVar3 = *(int *)(DAT_008bf504 + 0x14) + 0x1f08;
      fn_004edc34(iVar3);
      (**(code **)(**(int **)(DAT_008bf504 + 0x14) + 0x14))();
      *(undefined1 *)(*(int *)(DAT_008bf504 + 0x14) + 0x1f14) = 1;
      fn_004edc70(iVar3);
    }
  }
  return unaff_r5 & 0xff00 | 0xf0004;
}



undefined4 * fn_004e9830(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  puVar1[0x10] = 0;
  *puVar1 = &DAT_00856a40;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  uVar2 = fn_004ed2e8();
  iVar3 = fn_00656e14(0x14,uVar2);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_004ed164();
  }
  puVar1[0x11] = uVar2;
  return puVar1;
}



undefined4 fn_004e97b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  fn_004ed13c(param_2);
  fn_004ed050(*(undefined4 *)(param_1 + 0x40));
  *(code **)(param_1 + 0x24) = fn_004e8ba8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitAroundNetworkSearchActivated";
  return 0;
}



void fn_004e973c(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  fn_004ed158(*(undefined4 *)(param_1 + 0x44));
  iVar2 = *(int *)(*(int *)(DAT_008bf504 + 0x1c) + 0x1c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x30) = 1;
    fn_004edd1c(iVar2,2);
    fn_004ec16c(iVar2);
  }
  pcVar1 = *(char **)(param_1 + 0x40);
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\x01') {
      fn_004ed098(pcVar1,0xd9214824);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



uint fn_004e9428(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r5;
  int iVar5;
  uint unaff_r7;
  uint local_20;
  int iStack_1c;
  
  if (*(char *)(*(int *)(DAT_008bf504 + 0x1c) + 0x24) == '\0') {
    iVar1 = fn_006d5cf0(DAT_008bf504);
    if (iVar1 == 0) {
      *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitAroundNetworkSearchActivated";
      *(code **)(param_1 + 0x24) = fn_004e8ba8;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return param_4 & 0xff00 | 5;
    }
    fn_004ea16c(*(undefined4 *)(DAT_008bf504 + 0x1c));
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::SendStopAroundNetworkSearchMessage";
    *(code **)(param_1 + 0x24) = fn_004e8d90;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00;
  }
  iVar1 = fn_006d589c();
  uVar3 = DAT_008bf504;
  if (iVar1 != 0) {
    fn_004ea0d0(*(undefined4 *)(DAT_008bf504 + 0x1c));
    *(code **)(param_1 + 0x24) = fn_004e8a60;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitHostMigrationCompleted";
    return unaff_r5 & 0xff00 | 5;
  }
  iVar1 = fn_006d5cf0(DAT_008bf504);
  if ((iVar1 == 0) && (iVar1 = fn_006d5d14(uVar3), iVar1 == 0)) {
    fn_004ea0d0(*(undefined4 *)(DAT_008bf504 + 0x1c));
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitAroundNetworkSearchActivated";
    *(code **)(param_1 + 0x24) = fn_004e8ba8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return uVar3 & 0xff00 | 5;
  }
  fn_004e81f4(param_1);
  iVar1 = fn_006d6cb8(*(undefined4 *)(DAT_008bf504 + 0x1c));
  if (iVar1 == 0) {
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::ReceiveAroundNetworkInfo";
    *(code **)(param_1 + 0x24) = fn_004e8624;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    local_20 = 0;
    iStack_1c = 0;
    fn_004f01f4(&local_20);
    iVar1 = local_20 - *(uint *)(param_1 + 0x48);
    iVar5 = iStack_1c - (*(int *)(param_1 + 0x4c) + (uint)(local_20 < *(uint *)(param_1 + 0x48)));
    puVar2 = (undefined4 *)fn_004f0ce8();
    uVar4 = puVar2[1];
    uVar3 = fn_0011c134(iVar1,iVar5,*puVar2,uVar4);
    if (0x50 < uVar3) {
      *(code **)(param_1 + 0x24) = fn_004e8de4;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(char **)(param_1 + 0x2c) =
           "LocalAroundNetworkSearchJob::SendStartAroundNetworkSearchMessage";
      return uVar4 & 0xff00;
    }
  }
  return unaff_r7 & 0xff00 | 5;
}



uint fn_004e91dc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r5;
  int iVar5;
  uint unaff_r7;
  uint local_20;
  int iStack_1c;
  
  iVar1 = fn_006d589c(DAT_008bf504);
  uVar3 = DAT_008bf504;
  if (iVar1 != 0) {
    fn_004ea0d0(*(undefined4 *)(DAT_008bf504 + 0x1c));
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitHostMigrationCompleted";
    *(code **)(param_1 + 0x24) = fn_004e8a60;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00 | 5;
  }
  iVar1 = fn_006d5cf0(DAT_008bf504);
  if ((iVar1 == 0) && (iVar1 = fn_006d5d14(uVar3), iVar1 == 0)) {
    fn_004ea0d0(*(undefined4 *)(DAT_008bf504 + 0x1c));
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitAroundNetworkSearchActivated";
    *(code **)(param_1 + 0x24) = fn_004e8ba8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return uVar3 & 0xff00 | 5;
  }
  fn_004e81f4(param_1);
  iVar1 = fn_006d6cb8(*(undefined4 *)(DAT_008bf504 + 0x1c));
  if (iVar1 == 0) {
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitAroundNetworkSearchActivated";
    *(code **)(param_1 + 0x24) = fn_004e8ba8;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    local_20 = 0;
    iStack_1c = 0;
    fn_004f01f4(&local_20);
    iVar1 = local_20 - *(uint *)(param_1 + 0x48);
    iVar5 = iStack_1c - (*(int *)(param_1 + 0x4c) + (uint)(local_20 < *(uint *)(param_1 + 0x48)));
    puVar2 = (undefined4 *)fn_004f0ce8();
    uVar4 = puVar2[1];
    uVar3 = fn_0011c134(iVar1,iVar5,*puVar2,uVar4);
    if (0x50 < uVar3) {
      *(code **)(param_1 + 0x24) = fn_004e8d90;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::SendStopAroundNetworkSearchMessage"
      ;
      return uVar4 & 0xff00;
    }
  }
  return unaff_r7 & 0xff00 | 5;
}



uint fn_004e8e38(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r5;
  int iVar5;
  uint unaff_r7;
  uint local_20;
  int iStack_1c;
  
  if (*(char *)(*(int *)(DAT_008bf504 + 0x1c) + 0x24) == '\0') {
    iVar1 = fn_006d5cf0(DAT_008bf504);
    if (iVar1 == 0) {
      *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitAroundNetworkSearchActivated";
      *(code **)(param_1 + 0x24) = fn_004e8ba8;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return param_4 & 0xff00 | 5;
    }
    fn_004ea16c(*(undefined4 *)(DAT_008bf504 + 0x1c));
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::SendStopAroundNetworkSearchMessage";
    *(code **)(param_1 + 0x24) = fn_004e8d90;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00;
  }
  iVar1 = fn_006d589c();
  uVar3 = DAT_008bf504;
  if (iVar1 != 0) {
    fn_004ea0d0(*(undefined4 *)(DAT_008bf504 + 0x1c));
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitHostMigrationCompleted";
    *(code **)(param_1 + 0x24) = fn_004e8a60;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00 | 5;
  }
  iVar1 = fn_006d5cf0(DAT_008bf504);
  if ((iVar1 == 0) && (iVar1 = fn_006d5d14(uVar3), iVar1 == 0)) {
    fn_004ea0d0(*(undefined4 *)(DAT_008bf504 + 0x1c));
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitAroundNetworkSearchActivated";
    *(code **)(param_1 + 0x24) = fn_004e8ba8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return uVar3 & 0xff00 | 5;
  }
  fn_004e81f4(param_1);
  iVar1 = fn_006d6c60(*(undefined4 *)(DAT_008bf504 + 0x1c));
  local_20 = 0;
  iStack_1c = 0;
  if (iVar1 == 0) {
    fn_004f01f4(&local_20);
    iVar1 = local_20 - *(uint *)(param_1 + 0x50);
    iVar5 = iStack_1c - (*(int *)(param_1 + 0x54) + (uint)(local_20 < *(uint *)(param_1 + 0x50)));
    puVar2 = (undefined4 *)fn_004f0ce8();
    uVar4 = puVar2[1];
    uVar3 = fn_0011c134(iVar1,iVar5,*puVar2,uVar4);
    if (*(uint *)(param_1 + 0x60) < uVar3) {
      *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::StartAroundNetworkSearch";
      *(code **)(param_1 + 0x24) = fn_004e88dc;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return uVar4 & 0xff00;
    }
  }
  else {
    fn_004f01f4(&local_20);
    iVar1 = local_20 - *(uint *)(param_1 + 0x48);
    iVar5 = iStack_1c - (*(int *)(param_1 + 0x4c) + (uint)(local_20 < *(uint *)(param_1 + 0x48)));
    puVar2 = (undefined4 *)fn_004f0ce8();
    uVar4 = puVar2[1];
    uVar3 = fn_0011c134(iVar1,iVar5,*puVar2,uVar4);
    if (0x50 < uVar3) {
      *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::SendAroundNetworkStatus";
      *(code **)(param_1 + 0x24) = fn_004e82d0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return uVar4 & 0xff00;
    }
  }
  return unaff_r7 & 0xff00 | 5;
}


