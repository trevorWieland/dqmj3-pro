#include "004eb0f8_004ebda0.h"



void fn_004ebda0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &DAT_00856bf8;
  return;
}



undefined1 fn_004ebbf4(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_28 [20];
  
  iVar4 = *(int *)(DAT_008bf4cc + 0xa4);
  uVar1 = fn_006d6ae0(*(undefined4 *)(DAT_008bf504 + 0x18));
  bVar5 = iVar4 != 0;
  uVar3 = *(uint *)(DAT_008bf504 + 0x14);
  uVar2 = (uint)*(byte *)(uVar3 + 0xe);
  if (bVar5) {
    uVar3 = (uint)*(ushort *)(uVar3 + 0x42);
  }
  if (bVar5 && uVar3 != uVar2) {
    param_3 = (uint)*(ushort *)(iVar4 + 0x10);
  }
  if ((((bVar5 && uVar3 != uVar2) && param_3 != uVar3) && (param_3 == uVar2)) &&
     (uVar3 != uVar1 && uVar1 != uVar2)) {
    fn_0014f590(local_28);
    fn_004ed6f4(local_28,uVar1);
    iVar4 = fn_0050b144(DAT_008bf4cc,local_28);
    if (iVar4 == 0) {
      return 0xfd;
    }
    return *(undefined1 *)(iVar4 + 0x14);
  }
  return 0xfd;
}



uint fn_004eb430(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  ushort uVar7;
  uint uVar8;
  uint unaff_r6;
  
  iVar4 = fn_0050b080(DAT_008bf4cc,(char)param_1[0x1c]);
  iVar5 = fn_0050b080(DAT_008bf4cc,*(undefined1 *)((int)param_1 + 0x71));
  if (iVar5 != 0) {
    bVar1 = *(byte *)(*(int *)(DAT_008bf504 + 0x14) + 0xf);
    uVar7 = (ushort)bVar1;
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0x2a) = 0xff;
      uVar3 = *(ushort *)(iVar5 + 0x10);
      *(char *)((int)param_1 + 0xa9) = (char)uVar3;
    }
    else {
      uVar2 = *(ushort *)(iVar4 + 0x10);
      *(char *)(param_1 + 0x2a) = (char)uVar2;
      uVar3 = *(ushort *)(iVar5 + 0x10);
      if ((uVar2 & 0xff) != uVar7 && uVar7 != 0xff) {
        if (uVar3 != uVar7) {
          param_1[9] = (int)fn_00501dd4;
          param_1[10] = 0;
          param_1[0xb] = (int)"LocalProcessHostMigrationJobNew::HostMigrationFailure";
          return param_4 & 0xff00;
        }
        *(byte *)((int)param_1 + 0xa9) = bVar1;
        goto LAB_004eb4ec;
      }
      *(char *)((int)param_1 + 0xa9) = (char)uVar3;
    }
    if ((uVar3 & 0xff) != 0xff) {
LAB_004eb4ec:
      iVar4 = (**(code **)(*param_1 + 0x18))(param_1);
      if (iVar4 == 0) {
        param_1[0xb] = (int)"LocalProcessHostMigrationJobNew::HostMigrationFailure";
        param_1[9] = (int)fn_00501dd4;
        param_1[10] = 0;
        return param_4 & 0xff00;
      }
      iVar4 = fn_0050215c(param_1);
      puVar6 = (uint *)fn_004f0ce8();
      uVar8 = (uint)((ulonglong)*puVar6 * 10000);
      param_1[0x11] =
           puVar6[1] * 10000 + (int)((ulonglong)*puVar6 * 10000 >> 0x20) + param_1[0x11] +
           (uint)CARRY4(uVar8,param_1[0x10]);
      param_1[0x10] = uVar8 + param_1[0x10];
      if (iVar4 == 1) {
        param_1[9] = (int)fn_004eb768;
        param_1[10] = 0;
        param_1[0xb] = (int)"LocalProcessHostMigrationJobNew::LocalPrepareForBecomingHost";
      }
      else if (iVar4 == 2) {
        param_1[9] = (int)fn_004eb8c0;
        param_1[10] = 0;
        param_1[0xb] = (int)"LocalProcessHostMigrationJobNew::WaitLocalHostMigrationClient";
      }
      else {
        param_1[9] = (int)fn_00501dd4;
        param_1[10] = 0;
        param_1[0xb] = (int)"LocalProcessHostMigrationJobNew::HostMigrationFailure";
      }
      return unaff_r6 & 0xff00;
    }
  }
  param_1[0xb] = (int)"LocalProcessHostMigrationJobNew::HostMigrationFailure";
  param_1[9] = (int)fn_00501dd4;
  param_1[10] = 0;
  return param_4 & 0xff00;
}



uint fn_004eb0f8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_r6;
  undefined *local_48 [4];
  undefined1 local_38 [24];
  
  uVar7 = (uint)*(byte *)(DAT_008bf4e0 + 0x62);
  uVar2 = uVar7;
  uVar5 = DAT_008bf4e0;
  if (uVar7 < 0xc) {
    uVar2 = (uint)*(byte *)(DAT_008bf4e0 + 99);
    uVar5 = uVar2;
  }
  if ((0xb < uVar2) || (uVar5 == uVar7)) {
    *(code **)(param_1 + 0x24) = fn_00501dd4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
    return param_4 & 0xff00;
  }
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(*(int *)(DAT_008bf504 + 0x14) + 0xf);
  fn_0014f590(local_48);
  fn_004ed6f4(local_48,*(undefined1 *)(param_1 + 0xa8));
  iVar3 = fn_0050b144(DAT_008bf4cc,local_48);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = (uint)*(byte *)(iVar3 + 0x14);
  }
  if (iVar3 != 0 && uVar2 != uVar7) {
    uVar1 = *(undefined1 *)(param_1 + 0xa8);
    *(undefined1 *)(param_1 + 0xa8) = 0xff;
  }
  else {
    uVar1 = fn_006d6ae0(*(undefined4 *)(DAT_008bf504 + 0x18));
  }
  *(undefined1 *)(param_1 + 0xa9) = uVar1;
  local_48[0] = &DAT_00856c94;
  if (*(char *)(param_1 + 0xa9) == -1) {
    *(char **)(param_1 + 0x2c) = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
    *(code **)(param_1 + 0x24) = fn_00501dd4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return param_4 & 0xff00;
  }
  fn_0014f590(local_38);
  fn_004ed6f4(local_38,*(undefined1 *)(param_1 + 0xa9));
  iVar3 = fn_0050b144(DAT_008bf4cc,local_38);
  if (iVar3 == 0) {
    *(char **)(param_1 + 0x2c) = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
    *(code **)(param_1 + 0x24) = fn_00501dd4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r6 & 0xff00;
  }
  *(undefined1 *)(param_1 + 0x71) = *(undefined1 *)(iVar3 + 0x14);
  iVar3 = fn_0050215c(param_1);
  puVar4 = (uint *)fn_004f0ce8();
  uVar6 = *puVar4;
  uVar5 = puVar4[1];
  uVar2 = (uint)((ulonglong)uVar6 * 10000);
  uVar7 = *(uint *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = uVar2 + uVar7;
  *(uint *)(param_1 + 0x44) =
       uVar5 * 10000 + (int)((ulonglong)uVar6 * 10000 >> 0x20) + *(int *)(param_1 + 0x44) +
       (uint)CARRY4(uVar2,uVar7);
  if (iVar3 == 1) {
    *(char **)(param_1 + 0x2c) = "LocalProcessHostMigrationJobNew::LocalPrepareForBecomingHost";
    *(code **)(param_1 + 0x24) = fn_004eb768;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else if (iVar3 == 2) {
    *(char **)(param_1 + 0x2c) = "LocalProcessHostMigrationJobNew::WaitLocalHostMigrationClient";
    *(code **)(param_1 + 0x24) = fn_004eb8c0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    *(char **)(param_1 + 0x2c) = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
    *(code **)(param_1 + 0x24) = fn_00501dd4;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return unaff_r6 & 0xff00;
}



ulonglong fn_004eb8c0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 unaff_r6;
  bool bVar4;
  
  cVar1 = *(char *)(*(int *)(DAT_008bf504 + 0x14) + 0xf);
  if ((*(char *)(param_1 + 0xa9) == cVar1) && (iVar3 = fn_006d589c(), iVar3 == 0)) {
    *(char **)(param_1 + 0x2c) = "LocalProcessHostMigrationJobNew::WaitNewHostGreeting";
    *(code **)(param_1 + 0x24) = fn_00501adc;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return CONCAT44("LocalProcessHostMigrationJobNew::WaitNewHostGreeting",unaff_r6) &
           0xffffffff0000ff00;
  }
  cVar2 = *(char *)(param_1 + 0xa8);
  if (cVar2 != -1 && cVar1 != -1) {
    bVar4 = cVar2 != cVar1;
    if (bVar4) {
      cVar2 = *(char *)(param_1 + 0xa9);
    }
    if (bVar4 && cVar2 != cVar1) goto LAB_004eb960;
  }
  param_4 = *(uint *)(DAT_008bf49c + 0x34);
  if ((param_4 <= *(uint *)(param_1 + 0x44) &&
       (uint)(*(uint *)(param_1 + 0x40) <= *(uint *)(DAT_008bf49c + 0x30)) <=
       param_4 - *(uint *)(param_1 + 0x44)) &&
     (*(char *)(*(int *)(DAT_008bf504 + 0x18) + 0x11) != '\x04')) {
    return CONCAT44(*(uint *)(DAT_008bf49c + 0x30) - *(uint *)(param_1 + 0x40),5);
  }
LAB_004eb960:
  *(char **)(param_1 + 0x2c) = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
  *(code **)(param_1 + 0x24) = fn_00501dd4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return CONCAT44(fn_00501dd4,param_4) & 0xffffffff0000ff00;
}



uint fn_004eb768(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint unaff_r5;
  undefined8 uVar2;
  
  uVar1 = (uint)*(byte *)(*(int *)(DAT_008bf504 + 0x14) + 0xe);
  if (uVar1 != 0xff) {
    param_2 = (uint)*(byte *)((int)param_1 + 0xa9);
  }
  if (uVar1 != 0xff && uVar1 != param_2) {
    param_1[0xb] = (int)"LocalProcessHostMigrationJobNew::HostMigrationFailure";
    param_1[9] = (int)fn_00501dd4;
    param_1[10] = 0;
    return param_4 & 0xff00;
  }
  uVar2 = fn_0050273c(param_1);
  if ((int)uVar2 == 0) {
    param_1[9] = (int)fn_00501dd4;
    param_1[10] = 0;
    param_1[0xb] = (int)"LocalProcessHostMigrationJobNew::HostMigrationFailure";
    return (uint)((ulonglong)uVar2 >> 0x20) & 0xff00;
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  param_1[0xb] = (int)"LocalProcessHostMigrationJobNew::WaitLocalHostMigrationNewHost";
  param_1[9] = (int)fn_004eba34;
  param_1[10] = 0;
  return unaff_r5 & 0xff00;
}



ulonglong fn_004eba34(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 unaff_r5;
  
  iVar1 = fn_006d5cf0(DAT_008bf504);
  if ((iVar1 == 0) || (iVar1 = fn_006d589c(DAT_008bf504), iVar1 != 0)) {
    param_4 = *(uint *)(DAT_008bf49c + 0x34);
    if (*(uint *)(param_1 + 0x44) < param_4 ||
        param_4 - *(uint *)(param_1 + 0x44) <
        (uint)(*(uint *)(param_1 + 0x40) <= *(uint *)(DAT_008bf49c + 0x30))) {
      *(code **)(param_1 + 0x24) = fn_00501dd4;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(char **)(param_1 + 0x2c) = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
      return (ulonglong)param_4 & 0xffffffff0000ff00;
    }
    if (*(char *)(*(int *)(DAT_008bf504 + 0x18) + 0x11) != '\x04') {
      return CONCAT44(*(uint *)(DAT_008bf49c + 0x30) - *(uint *)(param_1 + 0x40),5);
    }
  }
  else if (*(char *)(*(int *)(DAT_008bf504 + 0x14) + 0xe) == *(char *)(param_1 + 0xa9)) {
    *(char **)(param_1 + 0x2c) = "LocalProcessHostMigrationJobNew::SendGreetingMessage";
    *(code **)(param_1 + 0x24) = fn_00501508;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return CONCAT44(fn_00501508,unaff_r5) & 0xffffffff0000ff00;
  }
  *(char **)(param_1 + 0x2c) = "LocalProcessHostMigrationJobNew::HostMigrationFailure";
  *(code **)(param_1 + 0x24) = fn_00501dd4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return CONCAT44("LocalProcessHostMigrationJobNew::HostMigrationFailure",param_4) &
         0xffffffff0000ff00;
}


