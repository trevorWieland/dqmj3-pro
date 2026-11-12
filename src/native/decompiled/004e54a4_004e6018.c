#include "004e54a4_004e6018.h"



void fn_004e6018(undefined4 *param_1)

{
  *param_1 = &DAT_008568b8;
  if (param_1[0x11] != 0) {
    fn_00656b7c(param_1[0x11]);
  }
  fn_004ede4c(param_1);
  return;
}



undefined4 * fn_004e5fac(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  puVar1[0x10] = 0;
  *puVar1 = &DAT_008568b8;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  uVar2 = fn_004ed2e8();
  iVar3 = fn_00656e14(0x14,uVar2);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_004ed164();
  }
  puVar1[0x11] = uVar2;
  return puVar1;
}



undefined1 * fn_004e5e18(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = fn_006d5cf0(DAT_008bf504);
  if (iVar1 == 0) {
    return &DAT_e0a14827;
  }
  *(undefined4 *)(param_1 + 0x40) = param_2;
  fn_004ed13c(param_2);
  fn_004ed050(*(undefined4 *)(param_1 + 0x40));
  *(char *)(param_1 + 0x60) = (char)param_3;
  if (param_3 != 0) {
    *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x10) = 1;
    *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x34) = 1;
  }
  *(code **)(param_1 + 0x24) = fn_004e56b4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "LocalDestroyNetworkJob::TryPrepareDestroyNetwork";
  return (undefined1 *)0x0;
}



void fn_004e5db0(int param_1)

{
  char *pcVar1;
  
  fn_004ed158(*(undefined4 *)(param_1 + 0x44));
  pcVar1 = *(char **)(param_1 + 0x40);
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\x01') {
      fn_004ed098(pcVar1,0xd9214824);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(char *)(param_1 + 0x60) != '\0') {
    *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x10) = 0;
    *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x34) = 0;
  }
  return;
}



uint fn_004e56b4(int param_1)

{
  int iVar1;
  uint unaff_r5;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    if (**(char **)(param_1 + 0x44) == '\x01') {
      fn_004ed158();
    }
    if (*(char *)(param_1 + 0x60) != '\0') {
      *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x10) = 0;
    }
    *(char **)(param_1 + 0x2c) = "LocalDestroyNetworkJob::WaitForCancel";
    *(code **)(param_1 + 0x24) = fn_004e54e0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00;
  }
  iVar1 = fn_004e77a8(*(undefined4 *)(DAT_008bf504 + 0x38));
  if (iVar1 < 0) {
    return 5;
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    fn_004f01f4(param_1 + 0x50);
    *(char **)(param_1 + 0x2c) = "LocalDestroyNetworkJob::SendDestroyNetworkMessage";
    *(code **)(param_1 + 0x24) = fn_004e582c;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    fn_004e17b8(*(undefined4 *)(DAT_008bf504 + 0x14));
    fn_004f01f4(param_1 + 0x58);
    *(code **)(param_1 + 0x24) = fn_004e5c20;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) =
         "LocalDestroyNetworkJob::WaitUntilAllClientsReceiveUpdateSessionMessage";
  }
  return unaff_r5 & 0xff00;
}



uint fn_004e5c20(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint unaff_r5;
  uint local_20;
  int iStack_1c;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    if (**(char **)(param_1 + 0x44) == '\x01') {
      fn_004ed158();
    }
    if (*(char *)(param_1 + 0x60) != '\0') {
      *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x10) = 0;
    }
    *(char **)(param_1 + 0x2c) = "LocalDestroyNetworkJob::WaitForCancel";
    *(code **)(param_1 + 0x24) = fn_004e54e0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00;
  }
  iVar1 = fn_006d67e4(*(undefined4 *)(DAT_008bf504 + 0x14));
  if (iVar1 != 0) {
    local_20 = 0;
    iStack_1c = 0;
    fn_004f01f4(&local_20);
    unaff_r5 = local_20 - *(uint *)(param_1 + 0x58);
    iVar1 = iStack_1c - (*(int *)(param_1 + 0x5c) + (uint)(local_20 < *(uint *)(param_1 + 0x58)));
    puVar2 = (undefined4 *)fn_004f0ce8();
    uVar3 = fn_0011c134(unaff_r5,iVar1,*puVar2,puVar2[1]);
    if ((int)uVar3 < 0x2711) {
      return uVar3 & 0xff00 | 5;
    }
  }
  fn_004f01f4(param_1 + 0x50);
  *(char **)(param_1 + 0x2c) = "LocalDestroyNetworkJob::SendDestroyNetworkMessage";
  *(code **)(param_1 + 0x24) = fn_004e582c;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r5 & 0xff00;
}



uint fn_004e582c(int param_1)

{
  uint unaff_r5;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) == '\0') {
    if (*(char *)(param_1 + 0x60) == '\0') {
      fn_004e1d04(*(undefined4 *)(DAT_008bf504 + 0x14));
    }
    else {
      *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x34) = 0;
      fn_004e2204(*(undefined4 *)(DAT_008bf504 + 0x14));
    }
    fn_004f01f4(param_1 + 0x48);
    *(char **)(param_1 + 0x2c) = "LocalDestroyNetworkJob::WaitUntilAllClientsDisconnection";
    *(code **)(param_1 + 0x24) = fn_004e597c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00 | 5;
  }
  if (**(char **)(param_1 + 0x44) == '\x01') {
    fn_004ed158();
  }
  if (*(char *)(param_1 + 0x60) != '\0') {
    *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x10) = 0;
  }
  *(char **)(param_1 + 0x2c) = "LocalDestroyNetworkJob::WaitForCancel";
  *(code **)(param_1 + 0x24) = fn_004e54e0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r5 & 0xff00;
}



uint fn_004e597c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint unaff_r5;
  int iVar4;
  uint unaff_r7;
  uint local_30;
  int iStack_2c;
  uint local_28;
  int iStack_24;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    if (**(char **)(param_1 + 0x44) == '\x01') {
      fn_004ed158();
    }
    if (*(char *)(param_1 + 0x60) != '\0') {
      *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x10) = 0;
    }
    *(char **)(param_1 + 0x2c) = "LocalDestroyNetworkJob::WaitForCancel";
    *(code **)(param_1 + 0x24) = fn_004e54e0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00;
  }
  iVar1 = fn_006d65d4(*(undefined4 *)(DAT_008bf504 + 0x14));
  if (iVar1 != 1) {
    local_30 = 0;
    iStack_2c = 0;
    fn_004f01f4(&local_30);
    unaff_r5 = local_30 - *(uint *)(param_1 + 0x50);
    iVar1 = iStack_2c - (*(int *)(param_1 + 0x54) + (uint)(local_30 < *(uint *)(param_1 + 0x50)));
    puVar2 = (undefined4 *)fn_004f0ce8();
    iVar1 = fn_0011c134(unaff_r5,iVar1,*puVar2,puVar2[1]);
    if (iVar1 < 0x2711) {
      local_28 = 0;
      iStack_24 = 0;
      fn_004f01f4(&local_28);
      iVar1 = local_28 - *(uint *)(param_1 + 0x48);
      iVar4 = iStack_24 - (*(int *)(param_1 + 0x4c) + (uint)(local_28 < *(uint *)(param_1 + 0x48)));
      puVar2 = (undefined4 *)fn_004f0ce8();
      uVar3 = puVar2[1];
      iVar1 = fn_0011c134(iVar1,iVar4,*puVar2,uVar3);
      if (iVar1 < 0x12d) {
        return unaff_r7 & 0xff00 | 5;
      }
      *(char **)(param_1 + 0x2c) = "LocalDestroyNetworkJob::SendDestroyNetworkMessage";
      *(code **)(param_1 + 0x24) = fn_004e582c;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return uVar3 & 0xff00;
    }
  }
  iVar1 = (**(code **)(**(int **)(DAT_008bf504 + 0x38) + 0x1c))
                    (*(int **)(DAT_008bf504 + 0x38),*(undefined4 *)(param_1 + 0x44));
  if (-1 < iVar1) {
    fn_004efcf4(*(undefined4 *)(DAT_008bf504 + 0x38),1);
    *(char **)(param_1 + 0x2c) = "LocalDestroyNetworkJob::WaitDestroyNetwork";
    *(code **)(param_1 + 0x24) = fn_004e5528;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00;
  }
  fn_004ed098(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(*(int *)(param_1 + 0x44) + 4));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(char *)(param_1 + 0x60) != '\0') {
    *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x10) = 0;
  }
  return unaff_r5 & 0xff00 | 1;
}



uint fn_004e5528(int param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint unaff_r5;
  
  iVar3 = *(int *)(param_1 + 0x40);
  pcVar2 = *(char **)(param_1 + 0x44);
  if (*(char *)(iVar3 + 0x10) != '\0') {
    if (*pcVar2 == '\x01') {
      fn_004ed158();
    }
    if (*(char *)(param_1 + 0x60) != '\0') {
      *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x10) = 0;
    }
    *(code **)(param_1 + 0x24) = fn_004e54e0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalDestroyNetworkJob::WaitForCancel";
    return unaff_r5 & 0xff00;
  }
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    return (uint)pcVar2 & 0xff00 | 5;
  }
  if (cVar1 == '\x02') {
    fn_004ed0e4(iVar3,*(undefined4 *)(pcVar2 + 4));
    *(undefined4 *)(param_1 + 0x40) = 0;
    iVar3 = fn_006d58dc(DAT_008bf504);
    if (iVar3 != 0) {
      fn_004e49c4(*(undefined4 *)(DAT_008bf504 + 0x18));
    }
    cVar1 = *(char *)(param_1 + 0x60);
  }
  else if (cVar1 == '\x03') {
    fn_004ed098(iVar3,*(undefined4 *)(pcVar2 + 4));
    *(undefined4 *)(param_1 + 0x40) = 0;
    cVar1 = *(char *)(param_1 + 0x60);
  }
  else {
    if (cVar1 != '\x04') {
      return param_2 & 0xff00 | 1;
    }
    fn_004ed098(iVar3,*(undefined4 *)(pcVar2 + 4));
    *(undefined4 *)(param_1 + 0x40) = 0;
    cVar1 = *(char *)(param_1 + 0x60);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x10) = 0;
  }
  return unaff_r5 & 0xff00 | 1;
}



uint fn_004e54e0(int param_1)

{
  uint unaff_r5;
  
  if (**(char **)(param_1 + 0x44) == '\x01') {
    return 5;
  }
  fn_004ed068(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  return unaff_r5 & 0xff00 | 1;
}



void fn_004e54a4(undefined4 *param_1)

{
  *param_1 = &DAT_00856898;
  if (param_1[0x11] != 0) {
    fn_00656b7c(param_1[0x11]);
  }
  fn_004ede4c(param_1);
  return;
}


