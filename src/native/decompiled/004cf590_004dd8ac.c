#include "004cf590_004dd8ac.h"



void fn_004dd8ac(void)

{
  if (DAT_008bf504 != (int *)0x0) {
    fn_004def40();
    if (DAT_008bf504 != (int *)0x0) {
      (**(code **)(*DAT_008bf504 + 4))();
    }
    DAT_008bf504 = (int *)0x0;
  }
  return;
}



void fn_004db748(void)

{
  if (DAT_008bf4fc != (int *)0x0) {
    (**(code **)(*DAT_008bf4fc + 0xc))();
    DAT_008bf4fc = (int *)0x0;
  }
  return;
}



void fn_004d83d0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint in_r12;
  
  if (*(int *)(param_1 + 0x654) == 0) {
    iVar3 = *(int *)(param_1 + 0x668) - *(int *)(param_1 + 0x658);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x14);
    if (uVar6 != 0) {
      in_r12 = (uint)*(byte *)(param_1 + 0x18);
    }
    iVar3 = *(int *)(param_1 + 0x6b0) + *(int *)(param_1 + 0x654);
    uVar2 = 0;
    if (uVar6 != 0) {
      do {
        if (in_r12 != (uVar2 & 0xff)) {
          pcVar4 = (char *)(*(int *)(param_1 + 0x5b4) + (uVar2 & 0xff) * 0x20);
          cVar1 = '\0';
          if (*pcVar4 != '\0') {
            cVar1 = pcVar4[1];
          }
          if ((*pcVar4 != '\0' && cVar1 != '\0') &&
             (iVar5 = (*(int *)(pcVar4 + 8) - *(int *)(param_1 + 0x668)) + 1, iVar5 < iVar3)) {
            iVar3 = iVar5;
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar6);
    }
    iVar5 = -*(int *)(param_1 + 0x658);
    if (-iVar3 != *(int *)(param_1 + 0x658) && iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    iVar3 = *(int *)(param_1 + 0x668) + iVar3;
  }
  *(int *)(param_1 + 0x69c) = iVar3;
  *(undefined4 *)(param_1 + 0x6a0) = 0;
  *(undefined1 *)(param_1 + 0x6a4) = 0;
  return;
}



void fn_004d49a8(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0015f180(param_1 + 8);
  puVar1[-1] = 0;
  puVar1[-2] = 0xffffffff;
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 1) = 0;
  return;
}



uint fn_004d390c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint unaff_r6;
  
  iVar1 = *(int *)(DAT_008bf4f4 + 0x10);
  if (iVar1 != 0) {
    if (*(char *)(*(int *)(param_1 + 0xa8) + 0x10) == '\x01') {
      fn_00456510(*(int *)(param_1 + 0xa8),4);
    }
    fn_00456400(*(undefined4 *)(param_1 + 0xa8));
    param_4 = *(uint *)(param_1 + 0xcc);
    iVar1 = fn_004820b4(*(undefined4 *)(DAT_008bf4f4 + 0xc),*(undefined4 *)(param_1 + 0xa8),iVar1,
                         param_4);
    if (iVar1 != 0) {
      *(code **)(param_1 + 0x24) = fn_004d3a00;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(char **)(param_1 + 0x2c) =
           "NexProcessHostMigrationJob::InetWaitMatchMakingClientHostLastConfirmation";
      return unaff_r6 & 0xff00 | 5;
    }
  }
  *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::HostMigrationFailure";
  *(code **)(param_1 + 0x24) = fn_00501dd4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_4 & 0xff00;
}



ulonglong fn_004d2570(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_r6;
  undefined4 in_r12;
  
  iVar1 = fn_006d9250(DAT_008bf4e0);
  if (iVar1 == -0x275eb708) {
    *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::HostMigrationFailure";
    *(code **)(param_1 + 0x24) = fn_00501dd4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return CONCAT44(fn_00501dd4,in_r12) & 0xffffffff0000ff00;
  }
  uVar6 = *(uint *)(DAT_008bf49c + 0x34);
  uVar3 = *(uint *)(DAT_008bf49c + 0x30) - *(uint *)(param_1 + 0x108);
  if (*(uint *)(param_1 + 0x10c) < uVar6 ||
      uVar6 - *(uint *)(param_1 + 0x10c) <
      (uint)(*(uint *)(param_1 + 0x108) <= *(uint *)(DAT_008bf49c + 0x30))) {
    iVar1 = *(int *)(DAT_008bf4f4 + 0x10);
    if (iVar1 != 0) {
      if (*(char *)(*(int *)(param_1 + 0xa8) + 0x10) == '\x01') {
        fn_00456510(*(int *)(param_1 + 0xa8),4);
      }
      fn_00456400(*(undefined4 *)(param_1 + 0xa8));
      uVar6 = *(uint *)(param_1 + 0xcc);
      iVar1 = fn_004820b4(*(undefined4 *)(DAT_008bf4f4 + 0xc),*(undefined4 *)(param_1 + 0xa8),iVar1
                           ,uVar6);
      if (iVar1 != 0) {
        if (*(char *)(param_1 + 0x84) != '\0') {
          puVar2 = (uint *)fn_004f0ce8();
          uVar3 = (uint)((ulonglong)*puVar2 * 6000);
          *(uint *)(param_1 + 0x44) =
               puVar2[1] * 6000 + (int)((ulonglong)*puVar2 * 6000 >> 0x20) +
               *(int *)(param_1 + 0x44) + (uint)CARRY4(uVar3,*(uint *)(param_1 + 0x40));
          *(uint *)(param_1 + 0x40) = uVar3 + *(uint *)(param_1 + 0x40);
        }
        *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetWaitCheckOldHostDisconnection"
        ;
        *(code **)(param_1 + 0x24) = fn_004d3150;
        *(undefined4 *)(param_1 + 0x28) = 0;
        return CONCAT44("NexProcessHostMigrationJob::InetWaitCheckOldHostDisconnection",unaff_r6) &
               0xffffffff0000ff00 | 5;
      }
    }
    *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::HostMigrationFailure";
    *(code **)(param_1 + 0x24) = fn_00501dd4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return CONCAT44(fn_00501dd4,uVar6) & 0xffffffff0000ff00;
  }
  if (*(char *)(param_1 + 0x84) != '\0') {
    if (*(char *)(param_1 + 0x80) != -3) {
      *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::WaitNewHostGreeting";
      *(code **)(param_1 + 0x24) = fn_00501adc;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return CONCAT44("NexProcessHostMigrationJob::WaitNewHostGreeting",uVar6) & 0xffffffff0000ff00;
    }
    uVar4 = 0;
    uVar5 = uVar4;
    do {
      uVar3 = (uint)*(byte *)(param_1 + uVar4 + 0x9c);
      if (uVar3 == 1) {
        *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::WaitNewHostGreeting";
        *(code **)(param_1 + 0x24) = fn_00501adc;
        *(undefined4 *)(param_1 + 0x28) = 0;
        return CONCAT44(fn_00501adc,uVar6) & 0xffffffff0000ff00;
      }
      if (uVar3 == 2) {
        uVar5 = 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0xc);
    if (uVar5 != 0) {
      *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetPrepareForBecomingHostMulti";
      *(code **)(param_1 + 0x24) = fn_004d2fac;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return CONCAT44(fn_004d2fac,uVar6) & 0xffffffff0000ff00;
    }
  }
  return CONCAT44(uVar3,uVar6) & 0xffffffff0000ff00 | 5;
}



uint fn_004d22c4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint unaff_r6;
  
  iVar1 = *(int *)(DAT_008bf4f4 + 0x10);
  if (iVar1 != 0) {
    if (*(char *)(*(int *)(param_1 + 0xa8) + 0x10) == '\x01') {
      fn_00456510(*(int *)(param_1 + 0xa8),4);
    }
    fn_00456400(*(undefined4 *)(param_1 + 0xa8));
    param_4 = *(uint *)(param_1 + 0xcc);
    iVar1 = fn_004820b4(*(undefined4 *)(DAT_008bf4f4 + 0xc),*(undefined4 *)(param_1 + 0xa8),iVar1,
                         param_4);
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 0x84) == '\0') {
        *(code **)(param_1 + 0x24) = fn_004d2cfc;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetCheckMatchMakingClientHost";
      }
      else {
        *(code **)(param_1 + 0x24) = fn_004d28a8;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetWaitMatchMakingClientHost";
      }
      return unaff_r6 & 0xff00 | 5;
    }
  }
  *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::HostMigrationFailure";
  *(code **)(param_1 + 0x24) = fn_00501dd4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_4 & 0xff00;
}



undefined4 fn_004d1d24(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 == 0) && (param_2 = *(int *)(DAT_008bf4f4 + 0x10), param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    if (*(char *)(*(int *)(param_1 + 0xa8) + 0x10) == '\x01') {
      fn_00456510(*(int *)(param_1 + 0xa8),4);
    }
    fn_00456400(*(undefined4 *)(param_1 + 0xa8));
    iVar2 = fn_0048210c(*(undefined4 *)(DAT_008bf4f4 + 0xc),*(undefined4 *)(param_1 + 0xa8),param_2
                         ,1);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



undefined4 fn_004cf590(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined *local_118;
  undefined1 auStack_114 [40];
  undefined1 auStack_ec [12];
  int local_e0;
  char local_98;
  uint local_90;
  uint uStack_8c;
  uint local_80;
  uint uStack_7c;
  undefined1 auStack_78 [40];
  undefined1 auStack_50 [44];
  
  iVar2 = fn_004d4edc(param_1 + 0x1c);
  if (((iVar2 != 0) &&
      (((*(char *)(param_1 + 0x70) == '\x01' || (*(char *)(param_1 + 0x4c1) != '\0')) ||
       (*(char *)(param_1 + 0x4c2) != '\0')))) || (*(int *)(param_1 + 200) == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc4) + 8;
  }
  local_118 = &DAT_00855fc4;
  iVar3 = fn_0050d0fc(auStack_114,iVar2 + 4);
  iVar3 = fn_005180d8(iVar3 + 0x28,iVar2 + 0x2c);
  *(undefined1 *)(iVar3 + 0x54) = *(undefined1 *)(iVar2 + 0x80);
  uVar6 = *(undefined4 *)(iVar2 + 0x8c);
  *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(iVar2 + 0x88);
  *(undefined4 *)(iVar3 + 0x60) = uVar6;
  *(undefined4 *)(iVar3 + 100) = *(undefined4 *)(iVar2 + 0x90);
  local_80 = 0;
  uStack_7c = 0;
  fn_004f01f4(&local_80);
  iVar2 = DAT_008c06a0;
  if ((local_90 != 0 || uStack_8c != 0) &&
     (uStack_7c <= uStack_8c && (uint)(local_90 <= local_80) <= uStack_7c - uStack_8c)) {
    local_118 = &DAT_00855fc4;
    fn_0051811c(auStack_ec,uStack_7c - (uStack_8c + (local_90 > local_80)),0x8000,0);
    fn_0050d178(auStack_114);
    return 0;
  }
  bVar1 = false;
  if (local_98 == '\0') {
    iVar3 = fn_004d5ad0(auStack_114);
    if (iVar3 != 0) goto LAB_004cf740;
LAB_004cf6dc:
    bVar1 = true;
    uVar6 = fn_0050d0fc(auStack_78,iVar2 + 0x30);
    fn_004cf144(param_1,uVar6,auStack_114);
    fn_0050d178(auStack_78);
    if (((local_98 == '\0') || (iVar3 = fn_004d4edc(param_1 + 0x1c), iVar3 != 0)) ||
       (iVar3 = fn_004d4edc(auStack_114), iVar3 != 0)) goto LAB_004cf7a0;
    uVar6 = fn_0050d0fc(auStack_50,iVar2 + 8);
    fn_004cf144(param_1,uVar6,auStack_114);
    puVar4 = auStack_50;
  }
  else {
    if (local_e0 == *(int *)(DAT_008c06a0 + 0x10)) goto LAB_004cf6dc;
LAB_004cf740:
    uVar6 = fn_0050d0fc(auStack_78,iVar2 + 8);
    fn_004cf144(param_1,uVar6,auStack_114);
    puVar4 = auStack_78;
  }
  fn_0050d178(puVar4);
LAB_004cf7a0:
  bVar7 = *(int *)(param_1 + 200) != 0;
  iVar2 = 0;
  if (bVar7) {
    iVar2 = *(int *)(param_1 + 0xc4);
  }
  if (bVar7 && iVar2 != 0) {
    puVar5 = (undefined4 *)(iVar2 + 8);
  }
  else {
    puVar5 = (undefined4 *)0x0;
  }
  (**(code **)*puVar5)();
  fn_004f0c1c(param_1 + 0xbc,puVar5 + -2);
  fn_004f0ab4(param_1 + 0xcc,param_1 + 0xd0,*(int *)(param_1 + 0xdc) + (int)(puVar5 + -2));
  if (((!bVar1) && (iVar2 = fn_004d4edc(auStack_114), iVar2 != 0)) &&
     (iVar2 = fn_004d4edc(param_1 + 0x1c), iVar2 == 0)) {
    fn_004d02e0(param_1,&local_118);
  }
  if ((*(int *)(param_1 + 200) == 0) || (*(char *)(param_1 + 0x4c0) != '\0')) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  local_118 = &DAT_00855fc4;
  fn_0051811c(auStack_ec);
  fn_0050d178(auStack_114);
  return uVar6;
}


