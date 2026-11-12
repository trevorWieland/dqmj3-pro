#include "004d28a8_004d30b0.h"



uint fn_004d30b0(int *param_1)

{
  int iVar1;
  uint unaff_r5;
  
  iVar1 = (**(code **)(*param_1 + 0x3c))(param_1);
  if (iVar1 == 0) {
    return 5;
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  param_1[9] = (int)fn_00501508;
  param_1[10] = 0;
  param_1[0xb] = (int)"NexProcessHostMigrationJob::SendGreetingMessage";
  return unaff_r5 & 0xff00;
}



bool fn_004d2f40(int param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  cVar1 = *(char *)(param_1 + 0x84);
  if (cVar1 != '\0') {
    puVar2 = (uint *)fn_004f0ce8(cVar1);
    uVar4 = *puVar2;
    uVar6 = puVar2[1];
    uVar3 = (uint)((ulonglong)uVar4 * 2000);
    uVar5 = *(uint *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = uVar3 + uVar5;
    *(uint *)(param_1 + 0x44) =
         uVar6 * 2000 + (int)((ulonglong)uVar4 * 2000 >> 0x20) + *(int *)(param_1 + 0x44) +
         (uint)CARRY4(uVar3,uVar5);
    *(code **)(param_1 + 0x24) = fn_004d390c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) =
         "NexProcessHostMigrationJob::InetGetMatchMakingClientHostLastConfirmation";
  }
  return cVar1 == '\0';
}



uint fn_004d2cfc(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_r5;
  uint *puVar7;
  uint unaff_r6;
  bool bVar8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if (*(char *)(iVar1 + 0x10) != '\x01') {
    local_20 = *(undefined4 *)(iVar1 + 0x40);
    local_28 = *(undefined4 *)(iVar1 + 0x38);
    uStack_24 = *(undefined4 *)(iVar1 + 0x3c);
    iVar1 = fn_006d3b8c(&local_28);
    if (iVar1 == 0) {
      *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetPrepareForBecomingHost";
      *(code **)(param_1 + 0x24) = fn_004d1efc;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    else {
      *(code **)(param_1 + 0x24) = fn_004d2570;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetCheckOldHostDisconnection";
      iVar1 = DAT_008bf49c;
      puVar7 = (uint *)(DAT_008bf49c + 0x30);
      puVar2 = (uint *)fn_004f0ce8();
      uVar3 = (uint)((ulonglong)*puVar2 * 6000);
      uVar4 = *puVar7;
      *(uint *)(param_1 + 0x10c) =
           puVar2[1] * 6000 + (int)((ulonglong)*puVar2 * 6000 >> 0x20) + *(int *)(iVar1 + 0x34) +
           (uint)CARRY4(uVar3,uVar4);
      *(uint *)(param_1 + 0x108) = uVar3 + uVar4;
      iVar1 = DAT_008bf49c;
      puVar7 = (uint *)(DAT_008bf49c + 0x30);
      puVar2 = (uint *)fn_004f0ce8();
      uVar3 = *puVar2;
      uVar6 = puVar2[1];
      uVar4 = (uint)((ulonglong)uVar3 * 30000);
      uVar5 = *puVar7;
      iVar1 = *(int *)(iVar1 + 0x34);
      *(uint *)(param_1 + 0x110) = uVar4 + uVar5;
      *(uint *)(param_1 + 0x114) =
           uVar6 * 30000 + (int)((ulonglong)uVar3 * 30000 >> 0x20) + iVar1 +
           (uint)CARRY4(uVar4,uVar5);
    }
    return unaff_r6 & 0xff00;
  }
  iVar1 = fn_006d9250(DAT_008bf4e0);
  if (iVar1 != -0x275eb708) {
    uVar4 = *(uint *)(param_1 + 0x44);
    uVar3 = *(uint *)(DAT_008bf49c + 0x34);
    bVar8 = *(uint *)(param_1 + 0x40) <= *(uint *)(DAT_008bf49c + 0x30);
    if (uVar3 <= uVar4 && (uint)bVar8 <= uVar3 - uVar4) {
      return uVar3 - (uVar4 + !bVar8) & 0xff00 | 0x640004;
    }
  }
  fn_00456510(*(undefined4 *)(param_1 + 0xa8),4);
  *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::HostMigrationFailure";
  *(code **)(param_1 + 0x24) = fn_00501dd4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r5 & 0xff00;
}



uint fn_004d28a8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint unaff_r5;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint unaff_r7;
  bool bVar11;
  char local_38 [4];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar5 = *(int *)(param_1 + 0xa8);
  if (*(char *)(iVar5 + 0x10) == '\x01') {
    iVar5 = fn_006d9250(DAT_008bf4e0);
    if (iVar5 != -0x275eb708) {
      uVar9 = *(uint *)(param_1 + 0x44);
      uVar10 = *(uint *)(DAT_008bf49c + 0x34);
      bVar11 = *(uint *)(param_1 + 0x40) <= *(uint *)(DAT_008bf49c + 0x30);
      if (uVar10 <= uVar9 && (uint)bVar11 <= uVar10 - uVar9) {
        return uVar10 - (uVar9 + !bVar11) & 0xff00 | 5;
      }
    }
    fn_00456510(*(undefined4 *)(param_1 + 0xa8),4);
    *(code **)(param_1 + 0x24) = fn_00501dd4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::HostMigrationFailure";
    return unaff_r5 & 0xff00;
  }
  if (*(char *)(param_1 + 0x80) != -3) {
    *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::WaitNewHostGreeting";
    *(code **)(param_1 + 0x24) = fn_00501adc;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return param_4 & 0xff00;
  }
  uVar9 = 0;
  uVar10 = uVar9;
  do {
    cVar1 = *(char *)(param_1 + uVar9 + 0x9c);
    if (cVar1 == '\x01') {
      *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::WaitNewHostGreeting";
      *(code **)(param_1 + 0x24) = fn_00501adc;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return param_4 & 0xff00;
    }
    if (cVar1 == '\x02') {
      uVar10 = 1;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0xc);
  puVar7 = &local_34;
  local_34 = *(undefined4 *)(iVar5 + 0x38);
  uStack_30 = *(undefined4 *)(iVar5 + 0x3c);
  uStack_2c = *(undefined4 *)(iVar5 + 0x40);
  uVar9 = 0;
  iVar5 = fn_006d3b8c(&local_34);
  if (iVar5 != 0) {
    iVar5 = fn_006d09d4(**(int **)(*(int *)(param_1 + 0xcc) + 0x10) + 8);
    if ((iVar5 == 0) || (uVar2 = fn_00502718(param_1), iVar5 = DAT_008bf49c, 0xb < uVar2))
    goto LAB_004d2b68;
    if (*(byte *)(param_1 + 0x70) == uVar2) {
      if (*(char *)(param_1 + 0x100) == '\0' && uVar10 == 0) {
        puVar8 = (uint *)(DAT_008bf49c + 0x30);
        puVar3 = (uint *)fn_004f0ce8();
        uVar9 = *puVar3;
        uVar2 = puVar3[1];
        uVar10 = (uint)((ulonglong)uVar9 * 6000);
        uVar6 = *puVar8;
        iVar5 = *(int *)(iVar5 + 0x34);
        *(uint *)(param_1 + 0x108) = uVar10 + uVar6;
        *(uint *)(param_1 + 0x10c) =
             uVar2 * 6000 + (int)((ulonglong)uVar9 * 6000 >> 0x20) + iVar5 +
             (uint)CARRY4(uVar10,uVar6);
        iVar5 = DAT_008bf49c;
        puVar8 = (uint *)(DAT_008bf49c + 0x30);
        puVar3 = (uint *)fn_004f0ce8();
        uVar9 = *puVar3;
        uVar2 = puVar3[1];
        uVar10 = (uint)((ulonglong)uVar9 * 30000);
        uVar6 = *puVar8;
        iVar5 = *(int *)(iVar5 + 0x34);
        *(uint *)(param_1 + 0x110) = uVar10 + uVar6;
        *(uint *)(param_1 + 0x114) =
             uVar2 * 30000 + (int)((ulonglong)uVar9 * 30000 >> 0x20) + iVar5 +
             (uint)CARRY4(uVar10,uVar6);
        *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetCheckOldHostDisconnection";
        *(code **)(param_1 + 0x24) = fn_004d2570;
        *(undefined4 *)(param_1 + 0x28) = 0;
        return 5;
      }
    }
    else if (*(byte *)(DAT_008bf4e0 + 99) != uVar2) {
      iVar5 = fn_006d92e4();
      if (iVar5 != 0) {
        uVar4 = *(undefined4 *)(DAT_008bf49c + 0x34);
        *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(DAT_008bf49c + 0x30);
        *(undefined4 *)(param_1 + 0xc4) = uVar4;
        *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::WaitNewHostGreeting";
        *(code **)(param_1 + 0x24) = fn_00501adc;
        *(undefined4 *)(param_1 + 0x28) = 0;
        return (uint)puVar7 & 0xff00;
      }
      goto LAB_004d2b68;
    }
  }
  uVar9 = 1;
LAB_004d2b68:
  if (((((uVar9 & ~uVar10) == 0) || (0x3fefffff < *(int *)(DAT_008bf4d4 + 100) - 0x100000U)) ||
      ((iVar5 = fn_006da484(*(int *)(DAT_008bf4d4 + 100),*(undefined1 *)(DAT_008bf4e0 + 99),
                             *(undefined1 *)(param_1 + 0x70),local_38), -1 < iVar5 &&
       (*(char *)(param_1 + 0x70) == local_38[0])))) && (uVar9 != 0)) {
    *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetPrepareForBecomingHostMulti";
    *(code **)(param_1 + 0x24) = fn_004d2fac;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    *(code **)(param_1 + 0x24) = fn_00501dd4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::HostMigrationFailure";
  }
  return unaff_r7 & 0xff00;
}



uint fn_004d2fac(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_r7;
  
  uVar5 = 0;
  *(undefined1 *)((int)param_1 + 0x71) = *(undefined1 *)(DAT_008bf4e0 + 99);
  *(undefined1 *)((int)param_1 + 0x7f) = 0;
  do {
    if (param_1[uVar5 + 0x34] != 0) {
      fn_005196a0(DAT_008c0690);
      param_1[uVar5 + 0x34] = 0;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xc);
  (**(code **)(*param_1 + 0x40))(param_1,(char)param_1[0x1c]);
  puVar1 = (uint *)fn_004f0ce8();
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = (uint)((ulonglong)uVar2 * 3000);
  uVar3 = param_1[0x10];
  param_1[0x10] = uVar3 - uVar5;
  param_1[0x11] =
       param_1[0x11] -
       (uVar4 * 3000 + (int)((ulonglong)uVar2 * 3000 >> 0x20) + (uint)(uVar3 < uVar5));
  param_1[0xb] = (int)"NexProcessHostMigrationJob::InetPrepareForBecomingHost";
  param_1[9] = (int)fn_004d1efc;
  param_1[10] = 0;
  return unaff_r7 & 0xff00 | 5;
}


