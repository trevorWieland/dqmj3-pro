#include "004e81f4_004e8de4.h"



uint fn_004e8624(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r5;
  
  if (*(char *)(*(int *)(DAT_008bf504 + 0x1c) + 0x24) == '\0') {
    iVar2 = fn_006d5cf0(DAT_008bf504);
    if (iVar2 == 0) {
      *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitAroundNetworkSearchActivated";
      *(code **)(param_1 + 0x24) = fn_004e8ba8;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return param_4 & 0xff00 | 5;
    }
    fn_004ea16c(*(undefined4 *)(DAT_008bf504 + 0x1c));
    *(code **)(param_1 + 0x24) = fn_004e8d90;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::SendStopAroundNetworkSearchMessage";
    return unaff_r5 & 0xff00;
  }
  iVar2 = fn_006d589c();
  uVar1 = DAT_008bf504;
  if (iVar2 != 0) {
    fn_004ea0d0(*(undefined4 *)(DAT_008bf504 + 0x1c));
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitHostMigrationCompleted";
    *(code **)(param_1 + 0x24) = fn_004e8a60;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00 | 5;
  }
  iVar2 = fn_006d5cf0(DAT_008bf504);
  if ((iVar2 == 0) && (iVar2 = fn_006d5d14(uVar1), iVar2 == 0)) {
    fn_004ea0d0(*(undefined4 *)(DAT_008bf504 + 0x1c));
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitAroundNetworkSearchActivated";
    *(code **)(param_1 + 0x24) = fn_004e8ba8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return uVar1 & 0xff00 | 5;
  }
  iVar2 = fn_006d5cf0(DAT_008bf504);
  if (((iVar2 == 0) || (iVar2 = fn_006d589c(DAT_008bf504), iVar2 != 0)) ||
     (iVar2 = fn_006d6cb8(*(undefined4 *)(DAT_008bf504 + 0x1c)), iVar2 == 0)) {
    fn_004e81f4(param_1);
    return param_1 & 0xff00 | 5;
  }
  if (*(char *)(*(int *)(DAT_008bf504 + 0x1c) + 0x24) == '\0') {
    *(code **)(param_1 + 0x24) = fn_004e8d90;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::SendStopAroundNetworkSearchMessage";
  }
  else {
    *(code **)(param_1 + 0x24) = fn_004e8de4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::SendStartAroundNetworkSearchMessage";
  }
  return uVar1 & 0xff00;
}



uint fn_004e8324(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r5;
  
  fn_004e81f4();
  cVar1 = **(char **)(param_1 + 0x44);
  uVar2 = 0;
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitAroundNetworkSearchActivated"
        ;
        *(code **)(param_1 + 0x24) = fn_004e8ba8;
        *(undefined4 *)(param_1 + 0x28) = 0;
        return param_4 & 0xff00 | 5;
      }
      *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitAroundNetworkSearchActivated";
      *(code **)(param_1 + 0x24) = fn_004e8ba8;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return param_4 & 0xff00 | 5;
    }
    uVar2 = fn_006d897c(*(undefined4 *)(*(int *)(DAT_008bf504 + 0x1c) + 0x1c));
    if (uVar2 == 0) {
      if (*(char *)(*(int *)(DAT_008bf504 + 0x1c) + 0x24) == '\0') {
        iVar4 = fn_006d5cf0(DAT_008bf504);
        if (iVar4 == 0) {
          *(code **)(param_1 + 0x24) = fn_004e8ba8;
          *(undefined4 *)(param_1 + 0x28) = 0;
          *(char **)(param_1 + 0x2c) =
               "LocalAroundNetworkSearchJob::WaitAroundNetworkSearchActivated";
          return param_4 & 0xff00 | 5;
        }
        fn_004ea16c(*(undefined4 *)(DAT_008bf504 + 0x1c));
        *(char **)(param_1 + 0x2c) =
             "LocalAroundNetworkSearchJob::SendStopAroundNetworkSearchMessage";
        *(code **)(param_1 + 0x24) = fn_004e8d90;
        *(undefined4 *)(param_1 + 0x28) = 0;
        return unaff_r5 & 0xff00;
      }
      iVar3 = fn_006d589c();
      iVar4 = DAT_008bf504;
      if (iVar3 != 0) {
        fn_004ea0d0(*(undefined4 *)(DAT_008bf504 + 0x1c));
        *(code **)(param_1 + 0x24) = fn_004e8a60;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitHostMigrationCompleted";
        return unaff_r5 & 0xff00 | 5;
      }
      iVar3 = fn_006d5cf0(DAT_008bf504);
      if ((iVar3 == 0) && (iVar4 = fn_006d5d14(iVar4), iVar4 == 0)) {
        fn_004ea0d0(*(undefined4 *)(DAT_008bf504 + 0x1c));
        *(code **)(param_1 + 0x24) = fn_004e8ba8;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitAroundNetworkSearchActivated"
        ;
        return unaff_r5 & 0xff00 | 5;
      }
      *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::SendAroundNetworkStatus";
      *(code **)(param_1 + 0x24) = fn_004e82d0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return unaff_r5 & 0xff00;
    }
  }
  return uVar2 & 0xff00 | 5;
}



uint fn_004e8a60(uint param_1)

{
  int iVar1;
  uint unaff_r5;
  
  fn_004e81f4();
  iVar1 = fn_006d589c(DAT_008bf504);
  if (iVar1 != 0) {
    return param_1 & 0xff00 | 5;
  }
  iVar1 = fn_006d5cf0(DAT_008bf504);
  if (iVar1 == 0) {
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitAroundNetworkSearchActivated";
    *(code **)(param_1 + 0x24) = fn_004e8ba8;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    fn_004ea16c(*(undefined4 *)(DAT_008bf504 + 0x1c));
    if (*(char *)(*(int *)(DAT_008bf504 + 0x1c) + 0x24) == '\0') {
      *(code **)(param_1 + 0x24) = fn_004e8d90;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::SendStopAroundNetworkSearchMessage"
      ;
    }
    else {
      *(code **)(param_1 + 0x24) = fn_004e8de4;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(char **)(param_1 + 0x2c) =
           "LocalAroundNetworkSearchJob::SendStartAroundNetworkSearchMessage";
    }
  }
  return unaff_r5 & 0xff00;
}



uint fn_004e8ba8(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint unaff_r5;
  
  fn_004e81f4();
  if ((*(char *)(*(int *)(DAT_008bf504 + 0x1c) + 0x24) != '\0') &&
     (iVar1 = fn_006d589c(DAT_008bf504), iVar1 == 0)) {
    iVar1 = fn_006d5cf0(DAT_008bf504);
    if (iVar1 != 0) {
      fn_004ea16c(*(undefined4 *)(DAT_008bf504 + 0x1c));
      *(char **)(param_1 + 0x2c) =
           "LocalAroundNetworkSearchJob::SendStartAroundNetworkSearchMessage";
      *(code **)(param_1 + 0x24) = fn_004e8de4;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return unaff_r5 & 0xff00;
    }
    iVar1 = fn_006d5d14();
    if (iVar1 != 0) {
      *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::StartAroundNetworkSearch";
      *(code **)(param_1 + 0x24) = fn_004e88dc;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return param_4 & 0xff00;
    }
  }
  iVar1 = fn_006d5cf0(DAT_008bf504);
  if (((iVar1 == 0) || (iVar1 = fn_006d589c(DAT_008bf504), iVar1 != 0)) ||
     (iVar1 = fn_006d6cb8(*(undefined4 *)(DAT_008bf504 + 0x1c)), iVar1 == 0)) {
    return param_1 & 0xff00 | 5;
  }
  if (*(char *)(*(int *)(DAT_008bf504 + 0x1c) + 0x24) == '\0') {
    *(code **)(param_1 + 0x24) = fn_004e8d90;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::SendStopAroundNetworkSearchMessage";
  }
  else {
    *(code **)(param_1 + 0x24) = fn_004e8de4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::SendStartAroundNetworkSearchMessage";
  }
  return unaff_r5 & 0xff00;
}



uint fn_004e8de4(int param_1)

{
  uint unaff_r5;
  
  fn_004ea5f0(*(undefined4 *)(DAT_008bf504 + 0x1c));
  *(code **)(param_1 + 0x24) = fn_004e9428;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) =
       "LocalAroundNetworkSearchJob::WaitSendStartAroundNetworkSearchMessageCompleted";
  fn_004f01f4(param_1 + 0x48);
  return unaff_r5 & 0xff00 | 5;
}



uint fn_004e8d90(int param_1)

{
  uint unaff_r5;
  
  fn_004ea54c(*(undefined4 *)(DAT_008bf504 + 0x1c));
  *(code **)(param_1 + 0x24) = fn_004e91dc;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) =
       "LocalAroundNetworkSearchJob::WaitSendStopAroundNetworkSearchMessageCompleted";
  fn_004f01f4(param_1 + 0x48);
  return unaff_r5 & 0xff00 | 5;
}



uint fn_004e88dc(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint unaff_r6;
  undefined1 auStack_28 [20];
  
  iVar1 = fn_004ec1a0(*(undefined4 *)(*(int *)(DAT_008bf504 + 0x1c) + 0x1c),
                       *(undefined4 *)(param_1 + 0x44),*(int *)(DAT_008bf504 + 0x1c) + 4);
  if (iVar1 < 0) {
    *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitAroundNetworkSearchActivated";
    *(code **)(param_1 + 0x24) = fn_004e8ba8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return param_4 & 0xff00 | 5;
  }
  fn_004efcf4(*(undefined4 *)(*(int *)(DAT_008bf504 + 0x1c) + 0x1c),1);
  *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitAroundNetworkSearch";
  *(code **)(param_1 + 0x24) = fn_004e8324;
  *(undefined4 *)(param_1 + 0x28) = 0;
  fn_004f01f4(param_1 + 0x50);
  fn_0065754c(auStack_28);
  uVar2 = fn_006575c0(auStack_28);
  *(uint *)(param_1 + 0x60) = (uVar2 % 3) * 0xf + *(int *)(*(int *)(DAT_008bf504 + 0x1c) + 0xc);
  return unaff_r6 & 0xff00 | 5;
}



uint fn_004e82d0(int param_1)

{
  uint unaff_r5;
  
  fn_004ea1a0(*(undefined4 *)(DAT_008bf504 + 0x1c));
  fn_004f01f4(param_1 + 0x48);
  *(code **)(param_1 + 0x24) = fn_004e8e38;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitSendAroundNetworkStatusCompleted";
  return unaff_r5 & 0xff00 | 5;
}



void fn_004e81f4(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_20;
  int iStack_1c;
  
  local_20 = 0;
  iStack_1c = 0;
  fn_004f01f4(&local_20);
  iVar6 = local_20 - *(uint *)(param_1 + 0x58);
  iVar5 = iStack_1c - (*(int *)(param_1 + 0x5c) + (uint)(local_20 < *(uint *)(param_1 + 0x58)));
  puVar1 = (undefined4 *)fn_004f0ce8();
  uVar2 = fn_0011c134(iVar6,iVar5,*puVar1,puVar1[1]);
  if (99 < uVar2) {
    fn_004f01f4(param_1 + 0x58);
    iVar5 = *(int *)(DAT_008bf504 + 0x1c) + 0x174;
    fn_004edc34(iVar5);
    uVar4 = 0;
    do {
      if (uVar4 < 0x10) {
        iVar6 = *(int *)(DAT_008bf504 + 0x1c) + uVar4 * 0x14 + 0x34;
      }
      else {
        iVar6 = 0;
      }
      uVar3 = *(uint *)(iVar6 + 0xc);
      if (uVar3 != 0) {
        if (uVar2 < uVar3) {
          *(uint *)(iVar6 + 0xc) = uVar3 - uVar2;
        }
        else {
          *(undefined4 *)(iVar6 + 4) = 0;
          *(undefined4 *)(iVar6 + 8) = 0;
          *(undefined4 *)(iVar6 + 0xc) = 0;
          *(undefined4 *)(iVar6 + 0x10) = 0;
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x10);
    fn_004edc70(iVar5);
  }
  return;
}


