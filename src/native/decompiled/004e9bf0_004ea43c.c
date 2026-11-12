#include "004e9bf0_004ea43c.h"



void fn_004ea43c(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_30 [4];
  int local_2c;
  ushort local_22;
  ushort local_20;
  int local_1c;
  
  puVar1 = (undefined4 *)fn_004dbe24(auStack_30,param_2,800);
  *(undefined1 *)(puVar1 + 3) = 0x26;
  *(undefined2 *)((int)puVar1 + 0xe) = 0x10;
  *puVar1 = &DAT_00856b00;
  puVar1[5] = 0;
  iVar2 = fn_004dbcf0(auStack_30);
  if (iVar2 != 0) {
    local_1c = *(int *)(local_2c + 0xc);
    iVar2 = fn_006d5cf0(DAT_008bf504);
    if ((iVar2 == 0) && (((uint)local_22 + (uint)local_20 & 0xffff) == *(uint *)(param_2 + 800))) {
      iVar2 = fn_006d6700(*(undefined4 *)(DAT_008bf504 + 0x14),*(undefined2 *)(param_2 + 0x326));
      fn_004edc34(param_1 + 0x174);
      iVar3 = 0;
      do {
        if (*(int *)(param_1 + iVar3 * 0x14 + 0x38) == local_1c) {
          iVar3 = param_1 + iVar3 * 0x14;
          *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & ~(1 << (iVar2 - 1U & 0xff));
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x10);
      fn_004edc70(param_1 + 0x174);
    }
  }
  return;
}



void fn_004ea2d0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_50 [4];
  int local_4c;
  ushort local_42;
  ushort local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [4];
  int local_34;
  undefined4 local_24;
  
  puVar1 = (undefined4 *)fn_004dbe24(auStack_50,param_2,800);
  *(undefined1 *)(puVar1 + 3) = 0x16;
  *puVar1 = &DAT_00856ae8;
  *(undefined2 *)((int)puVar1 + 0xe) = 0x10;
  puVar1[5] = 0;
  iVar2 = fn_004dbcf0(auStack_50);
  if ((iVar2 != 0) &&
     (local_3c = *(undefined4 *)(local_4c + 0xc),
     ((uint)local_42 + (uint)local_40 & 0xffff) == *(uint *)(param_2 + 800))) {
    if ((char)param_1[9] != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1,auStack_50);
    }
    uVar4 = local_3c;
    uVar3 = fn_006d6700(*(undefined4 *)(DAT_008bf504 + 0x14),*(undefined2 *)(param_2 + 0x326));
    iVar2 = *(int *)(DAT_008bf504 + 0x14) + 0x48;
    fn_004edc34(iVar2);
    puVar1 = (undefined4 *)fn_004dbe24(auStack_38,*(int *)(DAT_008bf504 + 0x14) + 0x6c,0x5dc);
    *puVar1 = &DAT_00856b00;
    puVar1[5] = uVar4;
    *(undefined1 *)(puVar1 + 3) = 0x26;
    *(undefined2 *)((int)puVar1 + 0xe) = 0x10;
    fn_004dbd30(auStack_38);
    *(undefined4 *)(local_34 + 0xc) = local_24;
    fn_004e21dc(*(undefined4 *)(DAT_008bf504 + 0x14),auStack_38,uVar3);
    fn_004edc70(iVar2);
  }
  return;
}



void fn_004ea16c(int param_1)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  uVar1 = fn_006d6690(*(undefined4 *)(DAT_008bf504 + 0x14),1);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}



void fn_004ea154(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1 << (param_2 - 1U & 0xff);
  return;
}



void fn_004ea0d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  fn_004edc34(param_1 + 0x174);
  iVar2 = 0;
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  do {
    iVar3 = iVar2 + 1;
    iVar1 = iVar1 + 2;
    *(undefined4 *)(param_1 + iVar2 * 0x14 + 0x3c) = 0;
    iVar2 = iVar2 + 2;
    *(undefined4 *)(param_1 + iVar3 * 0x14 + 0x3c) = 0;
  } while (iVar1 < 0x10);
  fn_004edc70(param_1 + 0x174);
  return;
}



void fn_004ea050(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  fn_004edc34(param_1 + 0x174);
  uVar1 = 1 << (param_2 - 1U & 0xff);
  iVar3 = 0;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & ~uVar1;
  iVar2 = 0;
  do {
    iVar4 = param_1 + iVar3 * 0x14;
    iVar5 = param_1 + (iVar3 + 1) * 0x14;
    iVar2 = iVar2 + 2;
    *(uint *)(iVar4 + 0x3c) = *(uint *)(iVar4 + 0x3c) & ~uVar1;
    iVar3 = iVar3 + 2;
    *(uint *)(iVar5 + 0x3c) = *(uint *)(iVar5 + 0x3c) & ~uVar1;
  } while (iVar2 < 0x10);
  fn_004edc70(param_1 + 0x174);
  return;
}



undefined4 fn_004e9f94(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[8] == 0) {
    uVar1 = fn_004ed2e8();
    iVar2 = fn_00656e14(0x14,uVar1);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = fn_004ed164();
    }
    param_1[8] = iVar3;
  }
  if (param_1[6] == 0) {
    uVar1 = fn_004ed2e8();
    iVar2 = fn_00656e14(0x68,uVar1);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = fn_004e9830();
    }
    param_1[6] = iVar3;
  }
  if (param_1[7] == 0) {
    iVar3 = (**(code **)(*param_1 + 0x14))(param_1);
    param_1[7] = iVar3;
  }
  uVar4 = 0;
  do {
    if (param_1[uVar4 * 5 + 0xd] == 0) {
      iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
      param_1[uVar4 * 5 + 0xd] = iVar3;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  return 0;
}



void fn_004e9f6c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004dbe24();
  *(undefined1 *)(puVar1 + 3) = 0x13;
  *(undefined2 *)((int)puVar1 + 0xe) = 0x10;
  *puVar1 = &DAT_00856ad0;
  return;
}



void fn_004e9f20(int param_1)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_1 + 4);
  *puVar2 = 1;
  puVar2[1] = *(undefined1 *)(param_1 + 0xc);
  *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(param_1 + 0x10);
  fn_006f94d0(puVar2 + 4);
  uVar1 = fn_00658e84(*(undefined4 *)(param_1 + 4),10);
  *(undefined2 *)(puVar2 + 10) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = 0;
  return;
}



bool fn_004e9ee0(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = fn_00658e84(iVar2,10);
  bVar3 = *(ushort *)(iVar2 + 10) == uVar1;
  if (bVar3) {
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(iVar2 + 1);
    *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(iVar2 + 2);
  }
  return bVar3;
}



undefined4 fn_004e9ddc(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  fn_004ed13c(param_2);
  fn_004ed050(*(undefined4 *)(param_1 + 0x40));
  if (param_3 == 0) {
    *(code **)(param_1 + 0x24) = fn_004e9cdc;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalForceDisconnectNetworkJob::WaitHostMigrationEnd";
  }
  else if (param_3 == 1) {
    *(code **)(param_1 + 0x24) = fn_004e9c44;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalForceDisconnectNetworkJob::WaitDisconnected";
  }
  return 0;
}



void fn_004e9da8(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x40);
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\x01') {
      fn_004ed098(pcVar1,0xd9214824);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



uint fn_004e9cdc(int param_1)

{
  uint uVar1;
  uint unaff_r5;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    fn_004ed068();
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  uVar1 = fn_006d589c(DAT_008bf504);
  if (uVar1 != 0) {
    return uVar1 & 0xff00 | 5;
  }
  fn_004ed0e4(*(undefined4 *)(param_1 + 0x40),0);
  uVar1 = fn_004ddab0(DAT_008bf504,*(undefined4 *)(param_1 + 0x40));
  if ((int)uVar1 < 0) {
    fn_004ed13c(*(undefined4 *)(param_1 + 0x40));
    fn_004ed050(*(undefined4 *)(param_1 + 0x40));
    fn_004ed098(*(undefined4 *)(param_1 + 0x40),uVar1);
    *(undefined4 *)(param_1 + 0x40) = 0;
    return uVar1 & 0xff00 | 1;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return 1;
}



uint fn_004e9c44(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r5;
  
  uVar1 = DAT_008bf504;
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    fn_004ed068();
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  uVar2 = fn_006d5cf0(DAT_008bf504);
  if ((uVar2 == 0) && (uVar2 = fn_006d5d14(uVar1), uVar2 == 0)) {
    fn_004ed0e4(*(undefined4 *)(param_1 + 0x40),0);
    *(undefined4 *)(param_1 + 0x40) = 0;
    return uVar1 & 0xff00 | 1;
  }
  return uVar2 & 0xff00 | 5;
}



int fn_004e9bf0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_004eaf3c();
  *puVar1 = &DAT_00856a80;
  puVar1[0x1ccf] = &DAT_00856874;
  iVar2 = fn_00101a1c(puVar1 + 0x1d12,&LAB_00124db8,0x28,0xc);
  return iVar2 + -0x7448;
}


