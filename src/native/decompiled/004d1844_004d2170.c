#include "004d1844_004d2170.h"



undefined4 fn_004d2170(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_008bf4f4;
  if (((*(char *)(param_1 + 0x84) != '\0') && (*(int *)(DAT_008bf4f4 + 8) == 0)) ||
     (*(int *)(DAT_008bf4f4 + 0x10) == 0)) {
    return 0;
  }
  if (*(char *)(param_1 + 0x84) != '\0') {
    *(undefined1 *)(param_1 + 0x101) = 0;
    fn_004d54d8(iVar1,*(undefined4 *)(param_1 + 0x104));
  }
  return 1;
}



undefined4 fn_004d2060(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x84) != '\0') {
    if (*(uint *)(param_1 + 0xc4) < *(uint *)(DAT_008bf49c + 0x34) ||
        *(uint *)(DAT_008bf49c + 0x34) - *(uint *)(param_1 + 0xc4) <
        (uint)(*(uint *)(param_1 + 0xc0) <= *(uint *)(DAT_008bf49c + 0x30))) {
      uVar1 = 0;
    }
    else {
      if (*(char *)(param_1 + 0x80) != -3) {
        *(char *)(param_1 + 0x70) = *(char *)(param_1 + 0x80);
      }
      *(undefined1 *)(param_1 + 0x7f) = 0;
      *(undefined1 *)(param_1 + 0x81) = 0;
      *(undefined1 *)(param_1 + 0x82) = 0;
      *(undefined1 *)(param_1 + 0x80) = 0xfd;
      *(undefined1 *)(param_1 + 0x71) = 0xfd;
      uVar2 = 0;
      *(char *)(param_1 + 0x6e) = *(char *)(param_1 + 0x6e) + '\x01';
      *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetSendRankDecision";
      *(code **)(param_1 + 0x24) = fn_004d1844;
      *(undefined4 *)(param_1 + 0x28) = 0;
      do {
        iVar3 = param_1 + uVar2 * 4;
        if (*(int *)(iVar3 + 0xd0) != 0) {
          fn_005196a0(DAT_008c0690);
          *(undefined4 *)(iVar3 + 0xd0) = 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0xc);
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 0;
      uVar1 = 1;
      *(undefined1 *)(param_1 + 0x100) = 0;
    }
  }
  return uVar1;
}



uint fn_004d1d94(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint unaff_r5;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 == 0) {
    param_1[0xb] = (int)"NexProcessHostMigrationJob::HostMigrationFailure";
    param_1[9] = (int)fn_00501dd4;
    param_1[10] = 0;
    return param_4 & 0xff00 | 5;
  }
  iVar1 = fn_0050215c(param_1);
  if (iVar1 == 1) {
    param_1[0xb] = (int)"NexProcessHostMigrationJob::InetPrepareForBecomingHost";
    param_1[9] = (int)fn_004d1efc;
    param_1[10] = 0;
  }
  else if (iVar1 == 2) {
    param_1[9] = (int)fn_00501adc;
    param_1[10] = 0;
    param_1[0xb] = (int)"NexProcessHostMigrationJob::WaitNewHostGreeting";
  }
  else {
    param_1[0xb] = (int)"NexProcessHostMigrationJob::HostMigrationFailure";
    param_1[9] = (int)fn_00501dd4;
    param_1[10] = 0;
  }
  return unaff_r5 & 0xff00 | 5;
}



uint fn_004d1efc(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint unaff_r6;
  
  iVar1 = fn_0050273c();
  if ((iVar1 == 0) || (*(int *)(DAT_008bf4f4 + 0x10) == 0)) {
    param_1[9] = (int)fn_00501dd4;
    param_1[10] = 0;
    param_1[0xb] = (int)"NexProcessHostMigrationJob::HostMigrationFailure";
    return param_4 & 0xff00;
  }
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  iVar1 = DAT_008bf4e8;
  if (iVar2 == 0) {
    param_1[0xb] = (int)"NexProcessHostMigrationJob::HostMigrationFailure";
    param_1[9] = (int)fn_00501dd4;
    param_1[10] = 0;
  }
  else {
    if ((DAT_008bf4e8 != 0) && (iVar2 = fn_006d96e0(DAT_008bf4e8), iVar2 == 3)) {
      iVar1 = iVar1 + (uint)*(byte *)(iVar1 + 0xb5) * 4;
      piVar3 = *(int **)(iVar1 + 0xb8);
      (**(code **)(*piVar3 + 0x74))(piVar3,*(undefined4 *)(iVar1 + 0xc4));
    }
    param_1[9] = (int)fn_004d30b0;
    param_1[10] = 0;
    param_1[0xb] = (int)"NexProcessHostMigrationJob::WaitAfterPrepareForBecomingHost";
  }
  return unaff_r6 & 0xff00;
}



uint fn_004d1844(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint in_r12;
  int iVar14;
  bool bVar15;
  undefined8 uVar16;
  uint local_2c [2];
  
  iVar3 = DAT_008bf4e0;
  uVar11 = (uint)*(byte *)(DAT_008bf4e0 + 99);
  if (0xb < uVar11) {
    *(code **)(param_1 + 0x24) = fn_00501dd4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::HostMigrationFailure";
    return param_4 & 0xff00;
  }
  if (*(int *)(param_1 + 0x94) == 0) {
    *(code **)(param_1 + 0x24) = fn_00501dd4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::HostMigrationFailure";
    return in_r12 & 0xff00;
  }
  uVar12 = 0xc;
  uVar13 = 0;
  uVar8 = 0;
  iVar10 = 0xc;
  pbVar4 = (byte *)(param_1 + 0x85);
  do {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    if (bVar1 == uVar11) {
      uVar12 = uVar8;
    }
    if (bVar1 != 0xfd) {
      uVar13 = uVar13 + 1;
    }
    iVar10 = iVar10 + -1;
    uVar8 = uVar8 + 1;
  } while (iVar10 != 0);
  puVar7 = (uint *)(DAT_008bf49c + 0x30);
  if (uVar12 == 0) {
    uVar12 = 0;
    puVar7 = (uint *)(DAT_008bf49c + 0x30);
  }
  else {
    uVar8 = uVar13 >> 1;
    iVar10 = *(int *)(param_1 + 0xb8);
    iVar5 = fn_00169f1c(iVar10,uVar8 * (uVar8 - 1) + (uVar13 & 1) + (uVar13 >> 1));
    if (uVar12 < uVar8) {
      iVar10 = 0;
      bVar15 = (uVar12 & 1) != 0;
      if (bVar15) {
        iVar10 = uVar8 * 2 + -2;
      }
      uVar13 = (uint)bVar15;
      iVar14 = 0;
      for (iVar9 = (int)uVar12 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
        iVar10 = iVar10 + (uVar8 - uVar13) * 2 + -2;
        iVar14 = iVar14 + (uVar8 - uVar13) * 2 + -4;
        uVar13 = uVar13 + 2;
      }
      uVar12 = iVar5 * (iVar10 + iVar14);
    }
    else {
      uVar12 = iVar5 * ((uVar12 - uVar13) + 1) + iVar10;
    }
  }
  puVar6 = (uint *)fn_004f0ce8();
  lVar2 = (ulonglong)uVar12 * (ulonglong)*puVar6;
  uVar8 = (uint)lVar2;
  uVar13 = *puVar7;
  *(uint *)(param_1 + 0xb4) =
       *puVar6 * ((int)uVar12 >> 0x1f) + puVar6[1] * uVar12 + (int)((ulonglong)lVar2 >> 0x20) +
       puVar7[1] + (uint)CARRY4(uVar8,uVar13);
  *(uint *)(param_1 + 0xb0) = uVar8 + uVar13;
  iVar10 = DAT_008bf49c;
  uVar12 = *(uint *)(param_1 + 0x48);
  puVar6 = (uint *)(DAT_008bf49c + 0x30);
  puVar7 = (uint *)fn_004f0ce8();
  lVar2 = (ulonglong)uVar12 * (ulonglong)*puVar7;
  uVar8 = (uint)lVar2;
  uVar13 = 0;
  uVar12 = *puVar7 * ((int)uVar12 >> 0x1f) + puVar7[1] * uVar12 + (int)((ulonglong)lVar2 >> 0x20) +
           *(int *)(iVar10 + 0x34) + (uint)CARRY4(uVar8,*puVar6);
  *(uint *)(param_1 + 0x40) = uVar8 + *puVar6;
  *(uint *)(param_1 + 0x44) = uVar12;
  do {
    uVar8 = uVar13 & 0xff;
    if (uVar8 != uVar11) {
      uVar12 = (uint)*(byte *)(param_1 + 0x70);
    }
    if ((uVar8 != uVar11 && uVar8 != uVar12) &&
       (uVar16 = fn_006d92e4(iVar3,uVar13 & 0xff), uVar12 = (uint)((ulonglong)uVar16 >> 0x20),
       (int)uVar16 != 0)) {
      local_2c[0] = 0;
      uVar16 = fn_004f7270(*(undefined4 *)(iVar3 + 0x4c),uVar13 & 0xff,
                            *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),local_2c
                           );
      uVar12 = (uint)((ulonglong)uVar16 >> 0x20);
      if ((int)uVar16 != 0) {
        *(uint *)(param_1 + uVar13 * 4 + 0xd0) = local_2c[0];
        uVar12 = local_2c[0];
      }
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0xc);
  *(undefined1 *)(param_1 + 0x7f) = 1;
  *(undefined1 *)(param_1 + 0x80) = 0xfd;
  *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetWaitRankDecision";
  *(code **)(param_1 + 0x24) = fn_004d1b40;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1 & 0xff00 | 5;
}



uint fn_004d1b40(int param_1)

{
  int iVar1;
  uint uVar2;
  uint unaff_r5;
  uint in_r12;
  
  iVar1 = fn_006d9250(DAT_008bf4e0);
  if (iVar1 == -0x275eb708) {
    *(code **)(param_1 + 0x24) = fn_00501dd4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::HostMigrationFailure";
    return 0x4800;
  }
  if (*(char *)(param_1 + 0x80) != -3) {
    *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::WaitNewHostGreeting";
    *(code **)(param_1 + 0x24) = fn_00501adc;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return in_r12 & 0xff00;
  }
  uVar2 = 0;
  do {
    if (*(char *)(param_1 + uVar2 + 0x9c) == '\x01') {
      *(code **)(param_1 + 0x24) = fn_00501adc;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::WaitNewHostGreeting";
      return 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xc);
  uVar2 = *(uint *)(DAT_008bf49c + 0x34);
  if (*(uint *)(param_1 + 0xb4) < uVar2 ||
      uVar2 - *(uint *)(param_1 + 0xb4) <
      (uint)(*(uint *)(param_1 + 0xb0) <= *(uint *)(DAT_008bf49c + 0x30))) {
    *(code **)(param_1 + 0x24) = fn_004d22c4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "NexProcessHostMigrationJob::InetGetMatchMakingClientHost";
    return uVar2 & 0xff00;
  }
  return unaff_r5 & 0xff00 | 5;
}


