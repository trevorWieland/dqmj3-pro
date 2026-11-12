#include "004d10ac_004d1544.h"



uint fn_004d1544(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint unaff_r6;
  uint in_r12;
  undefined4 local_20;
  
  uVar8 = 0;
  *(undefined1 *)(param_1 + 0x71) = 0xfd;
  local_20 = param_4;
  while( true ) {
    if (((uint)*(byte *)(DAT_008bf4e0 + 0x62) != (uVar8 & 0xff)) &&
       (iVar2 = fn_006d92e4(DAT_008bf4e0,uVar8 & 0xff), iVar2 != 0)) break;
    uVar8 = uVar8 + 1;
    if (0xb < (int)uVar8) {
LAB_004d1598:
      iVar2 = fn_0050215c(param_1);
      bVar1 = false;
      if (*(int *)(DAT_008bf4d4 + 100) != 0) {
        iVar3 = fn_006da484(*(int *)(DAT_008bf4d4 + 100),*(undefined1 *)(param_1 + 0x70),
                             *(undefined1 *)(param_1 + 0x71),&local_20);
        if (iVar3 < 0) {
          *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::HostMigrationFailure";
          *(code **)(param_1 + 0x24) = fn_00501dd4;
          *(undefined4 *)(param_1 + 0x28) = 0;
          return in_r12 & 0xff00;
        }
        if (*(char *)(param_1 + 0x71) != (char)local_20) {
          puVar4 = (uint *)fn_004f0ce8();
          bVar1 = true;
          uVar8 = (uint)((ulonglong)*puVar4 * 30000);
          *(uint *)(param_1 + 0x44) =
               *(int *)(param_1 + 0x44) +
               puVar4[1] * 30000 + (int)((ulonglong)*puVar4 * 30000 >> 0x20) +
               (uint)CARRY4(uVar8,*(uint *)(param_1 + 0x40));
          *(uint *)(param_1 + 0x40) = uVar8 + *(uint *)(param_1 + 0x40);
        }
      }
      if (iVar2 == 1) {
        if (bVar1) {
          *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetGetMatchMakingClientHost";
          *(code **)(param_1 + 0x24) = fn_004d22c4;
          *(undefined4 *)(param_1 + 0x28) = 0;
          iVar2 = DAT_008bf49c;
          puVar9 = (uint *)(DAT_008bf49c + 0x30);
          puVar4 = (uint *)fn_004f0ce8();
          uVar8 = (uint)((ulonglong)*puVar4 * 6000);
          uVar5 = *puVar9;
          *(uint *)(param_1 + 0x10c) =
               puVar4[1] * 6000 + (int)((ulonglong)*puVar4 * 6000 >> 0x20) + *(int *)(iVar2 + 0x34)
               + (uint)CARRY4(uVar8,uVar5);
          *(uint *)(param_1 + 0x108) = uVar8 + uVar5;
          iVar2 = DAT_008bf49c;
          puVar9 = (uint *)(DAT_008bf49c + 0x30);
          puVar4 = (uint *)fn_004f0ce8();
          uVar6 = *puVar4;
          uVar8 = puVar4[1];
          uVar5 = (uint)((ulonglong)uVar6 * 30000);
          uVar7 = *puVar9;
          iVar2 = *(int *)(iVar2 + 0x34);
          *(uint *)(param_1 + 0x110) = uVar5 + uVar7;
          *(uint *)(param_1 + 0x114) =
               uVar8 * 30000 + (int)((ulonglong)uVar6 * 30000 >> 0x20) + iVar2 +
               (uint)CARRY4(uVar5,uVar7);
        }
        else {
          *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetPrepareForBecomingHost";
          *(code **)(param_1 + 0x24) = fn_004d1efc;
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
      }
      else if (iVar2 == 2) {
        *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::WaitNewHostGreeting";
        *(code **)(param_1 + 0x24) = fn_00501adc;
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
      else {
        *(code **)(param_1 + 0x24) = fn_00501dd4;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::HostMigrationFailure";
      }
      return unaff_r6 & 0xff00;
    }
  }
  *(char *)(param_1 + 0x71) = (char)uVar8;
  goto LAB_004d1598;
}



undefined4 fn_004d1410(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  iVar2 = *(int *)(param_1 + 0x48) + -5000;
  if (iVar2 < 5000) {
    iVar2 = 5000;
  }
  *(int *)(param_1 + 0xb8) = iVar2;
  iVar2 = DAT_008bf49c;
  uVar6 = *(uint *)(param_1 + 200);
  puVar7 = (uint *)(DAT_008bf49c + 0x30);
  puVar3 = (uint *)fn_004f0ce8();
  lVar1 = (ulonglong)uVar6 * (ulonglong)*puVar3;
  uVar4 = (uint)lVar1;
  uVar5 = *puVar7;
  *(uint *)(param_1 + 0xc4) =
       *(int *)(iVar2 + 0x34) +
       *puVar3 * ((int)uVar6 >> 0x1f) + puVar3[1] * uVar6 + (int)((ulonglong)lVar1 >> 0x20) +
       (uint)CARRY4(uVar5,uVar4);
  *(uint *)(param_1 + 0xc0) = uVar5 + uVar4;
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(DAT_008bf4e0 + 0x62);
  if (param_2 == 0) {
    *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetMakeHostCandidateRanking";
    *(code **)(param_1 + 0x24) = fn_004d2454;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    *(char **)(param_1 + 0x2c) =
         "NexProcessHostMigrationJob::InetCleanupOldHostInfoOnMultiCandidate";
    *(code **)(param_1 + 0x24) = fn_004d3578;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(char *)(param_1 + 0x100) = (char)param_2;
  return 1;
}



void fn_004d13c4(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    iVar2 = param_1 + uVar1 * 4;
    if (*(int *)(iVar2 + 0xd0) != 0) {
      fn_005196a0(DAT_008c0690);
      *(undefined4 *)(iVar2 + 0xd0) = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xc);
  fn_00501398(param_1);
  return;
}



void fn_004d12c8(int param_1)

{
  if (*(char *)(param_1 + 0x84) != '\0') {
    fn_004d5734(DAT_008bf4f4,*(undefined4 *)(param_1 + 0x104));
    *(undefined1 *)(param_1 + 0x101) = 0;
  }
  return;
}



void fn_004d1288(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &DAT_00856280;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0xe7e3ffff;
  puVar1[0x10] = 0;
  return;
}



undefined1 * fn_004d1160(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)0xe0e14826;
  if (param_2 != 0 && param_3 != 0) {
    *(int *)(param_1 + 0x44) = param_2;
    iVar2 = fn_004ed050(param_2);
    if (iVar2 == 0) {
      return &DAT_e0a14827;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(int *)(param_1 + 0x40) = param_3;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(code **)(param_1 + 0x24) = fn_004d0ef8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = (char *)&DAT_004d121c;
    fn_004edddc(param_1,1);
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



void fn_004d1130(int param_1)

{
  if ((*(char **)(param_1 + 0x44) != (char *)0x0) && (**(char **)(param_1 + 0x44) == '\x01')) {
    fn_004ed068();
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



uint fn_004d10ac(int param_1,int param_2)

{
  int iVar1;
  uint unaff_r5;
  bool bVar2;
  
  bVar2 = *(int *)(param_1 + 0x40) != 0;
  if (bVar2) {
    param_2 = *(int *)(param_1 + 0x44);
  }
  if (bVar2 && param_2 != 0) {
    iVar1 = fn_004c7eb8();
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x50) < 0) {
        fn_004ed098(*(undefined4 *)(param_1 + 0x44));
      }
      else {
        fn_004ed0e4(*(undefined4 *)(param_1 + 0x44),0);
      }
    }
    else {
      fn_004ed098(*(undefined4 *)(param_1 + 0x44),0xd9214824);
    }
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return unaff_r5 & 0xff00 | 1;
}


