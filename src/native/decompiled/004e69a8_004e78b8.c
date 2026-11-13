#include "004e69a8_004e78b8.h"



void fn_004e78b8(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x40);
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\x01') {
      fn_004ed098(pcVar1,0xd9214824);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined1 *)(param_1 + 0x44) = 10;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  return;
}



undefined1 * fn_004e7830(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 0x46) != '\0') {
    return (undefined1 *)0x0;
  }
  iVar1 = fn_006d897c(param_1);
  if (iVar1 != 0) {
    iVar1 = fn_006d87fc(param_1);
    iVar2 = param_1[0x10];
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      if (iVar2 != 0) {
        fn_004ed098(iVar2,0xd9214824);
      }
      return &DAT_e0a14827;
    }
    if (iVar2 != 0) {
      fn_004ed158();
    }
  }
  (**(code **)(*param_1 + 8))(param_1,0);
  *(undefined1 *)((int)param_1 + 0x46) = 1;
  return (undefined1 *)0x0;
}



undefined1 * fn_004e77a8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 0x45) != '\0') {
    return (undefined1 *)0x0;
  }
  iVar1 = fn_006d897c(param_1);
  if (iVar1 != 0) {
    iVar1 = fn_006d87fc(param_1);
    iVar2 = param_1[0x10];
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      if (iVar2 != 0) {
        fn_004ed098(iVar2,0xd9214824);
      }
      return &DAT_e0a14827;
    }
    if (iVar2 != 0) {
      fn_004ed158();
    }
  }
  (**(code **)(*param_1 + 8))(param_1,0);
  *(undefined1 *)((int)param_1 + 0x45) = 1;
  return (undefined1 *)0x0;
}



void fn_004e7740(int param_1,undefined1 *param_2)

{
  fn_001694e4(param_1 + 0x139,param_2 + 0x10d,*(undefined4 *)(param_2 + 0x1d8));
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x138) = param_2[0x10c];
  *(undefined1 *)(param_1 + 0x2c) = *param_2;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x2d) = param_2[1];
  fn_001694e4(param_1 + 0x34,param_2 + 8,*(undefined4 *)(param_2 + 0x108));
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x108);
  return;
}



undefined4 * fn_004e76b4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004e7974();
  *puVar1 = &DAT_0085690c;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((int)puVar1 + 0x49) = 0;
  puVar1[0x13] = 0;
  puVar1[0x54] = 0;
  *(undefined1 *)(puVar1 + 0x55) = 0;
  puVar1[0x88] = 0;
  fn_00301f50(puVar1 + 0x14,0xff);
  fn_00158f6c((int)puVar1 + 0x155,200);
  puVar1[0x89] = 0;
  puVar1[0x8a] = 0;
  *(undefined1 *)(puVar1 + 0x8b) = 0;
  puVar1[0x8c] = 0;
  puVar1[0x8d] = 0;
  puVar1[0x8e] = 0;
  puVar1[0x8f] = 0;
  *(undefined1 *)((int)puVar1 + 0x33f) = 0;
  fn_00301f50(puVar1 + 0x90,0xff);
  puVar1[0xd0] = 0;
  return puVar1;
}



int fn_004e7644(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_004e78fc(param_1,param_2,2);
  if (-1 < iVar1) {
    *(undefined1 *)(param_1 + 0x46) = 0;
    *(code **)(param_1 + 0x24) = fn_004e6a50;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "UdsBackgroundProcessJob::DisconnectNetwork";
    iVar1 = 0;
  }
  return iVar1;
}



uint fn_004e7588(int param_1)

{
  int iVar1;
  uint unaff_r5;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    fn_004ed068();
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  if (300 < *(uint *)(param_1 + 0x340)) {
    fn_004ed098(*(int *)(param_1 + 0x40),0xd941482d);
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  iVar1 = fn_006d5d14(DAT_008bf504);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x340) = *(int *)(param_1 + 0x340) + 1;
    return 0xf0004;
  }
  fn_004ed0e4(*(undefined4 *)(param_1 + 0x40),0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return unaff_r5 & 0xff00 | 1;
}



uint fn_004e74cc(int param_1)

{
  int iVar1;
  uint unaff_r5;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    fn_004ed068();
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  if (200 < *(uint *)(param_1 + 0x340)) {
    fn_004ed098(*(int *)(param_1 + 0x40),0xd941482d);
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  iVar1 = fn_006d5cf0(DAT_008bf504);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x340) = *(int *)(param_1 + 0x340) + 1;
    return 0xf0004;
  }
  fn_004ed0e4(*(undefined4 *)(param_1 + 0x40),0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return unaff_r5 & 0xff00 | 1;
}



int fn_004e7460(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_004e78fc(param_1,param_2,1);
  if (-1 < iVar1) {
    *(undefined1 *)(param_1 + 0x45) = 0;
    *(code **)(param_1 + 0x24) = fn_004e69a8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "UdsBackgroundProcessJob::DestroyNetwork";
    iVar1 = 0;
  }
  return iVar1;
}



undefined1 * fn_004e70c4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  fn_0017821c(param_1 + 0x23c,param_3,0x104);
  puVar5 = (undefined1 *)0xe0e14826;
  if (0xf7 < *(byte *)(param_1 + 0x33f) - 8) {
    return (undefined1 *)0xe0e14826;
  }
  iVar4 = *(int *)(DAT_008bf504 + 0x14) + 0x1228;
  fn_004edc34(iVar4);
  puVar2 = (undefined4 *)
           (**(code **)(**(int **)(DAT_008bf504 + 0x14) + 0x3c))
                     (*(int **)(DAT_008bf504 + 0x14),*(undefined4 *)(param_1 + 0x23c));
  if (((puVar2 == (undefined4 *)0x0) ||
      (puVar5 = (undefined1 *)0xd8a1486a, *(char *)(puVar2 + 2) != '\x01')) ||
     (uVar3 = fn_006d6604(*(undefined4 *)(DAT_008bf504 + 0x14)), iVar1 = DAT_008bf504,
     uVar3 != *(byte *)((int)puVar2 + 9))) {
    fn_004edc70(iVar4);
    return puVar5;
  }
  *(undefined4 *)(*(int *)(DAT_008bf504 + 0x14) + 0x1238) = *puVar2;
  fn_004e12f0(*(undefined4 *)(iVar1 + 0x14),puVar2[1]);
  fn_004edc70(iVar4);
  iVar4 = fn_004e78fc(param_1,param_2,3);
  if (iVar4 < 0) {
    return &DAT_e0a14827;
  }
  *(char **)(param_1 + 0x2c) = "UdsBackgroundProcessJob::ConnectNetwork";
  *(code **)(param_1 + 0x24) = fn_004e67b4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  DAT_008ed8ec = (**(code **)(**(int **)(param_1 + 0x23c) + 0xc))();
  DAT_008ed8f0 = (**(code **)(**(int **)(param_1 + 0x23c) + 4))();
  return (undefined1 *)0x0;
}



undefined1 * fn_004e6ca4(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  fn_0017821c(param_1 + 0x48,param_3,0x1dc);
  if (((*(char *)(param_1 + 0x48) != -1) && (*(int *)(param_1 + 0x150) - 8U < 0xf8)) &&
     ((bVar1 = *(byte *)(param_1 + 0x154), bVar1 < 2 || (bVar1 == 6 || bVar1 == 0xb)))) {
    uVar2 = fn_006d5c74(DAT_008bf504);
    if (uVar2 < *(uint *)(param_1 + 0x220)) {
      if (DAT_008c0630 != 0) {
        fn_006d5c74(DAT_008bf504,8,0,(char *)&DAT_004e6fb8,"local_UdsBackgroundProcessJob.cpp",
                     "StartupCreateNetwork");
      }
    }
    else {
      iVar3 = (**(code **)(**(int **)(DAT_008bf504 + 0x14) + 0x4c))
                        (*(int **)(DAT_008bf504 + 0x14),param_1 + 0x48);
      if (-1 < iVar3) {
        iVar3 = fn_004e78fc(param_1,param_2,3);
        if (iVar3 < 0) {
          return &DAT_e0a14827;
        }
        *(code **)(param_1 + 0x24) = fn_004e6648;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(char **)(param_1 + 0x2c) = "UdsBackgroundProcessJob::CreateNetwork";
        DAT_008ed8ec = *(undefined4 *)(param_1 + 0x4c);
        DAT_008ed8f0 = *(undefined1 *)(param_1 + 0x49);
        return (undefined1 *)0x0;
      }
    }
  }
  return (undefined1 *)0xe0e14826;
}



uint fn_004e6a50(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint unaff_r5;
  int local_18;
  
  iVar2 = DAT_008bf504;
  local_18 = param_4;
  iVar1 = fn_006d5cf0(DAT_008bf504);
  if (((iVar1 == 0) && (iVar2 = fn_006d5d14(iVar2), iVar2 == 0)) ||
     (local_18 = fn_0051f53c(), -1 < local_18)) {
    fn_004e0368(*(undefined4 *)(DAT_008bf504 + 0x14));
    if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) == '\0') {
      fn_004ed0e4(*(int *)(param_1 + 0x40),0);
      *(undefined4 *)(param_1 + 0x40) = 0;
      return unaff_r5 & 0xff00 | 1;
    }
    fn_004ed068();
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  if (local_18 == -0x375eec16) {
    local_18 = -0x275eb795;
  }
  else {
    local_18 = fn_006d5dec(*(undefined4 *)(DAT_008bf504 + 0x14),&local_18);
  }
  fn_004ed098(*(undefined4 *)(param_1 + 0x40),local_18);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return unaff_r5 & 0xff00 | 1;
}



uint fn_004e69a8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint unaff_r5;
  int local_18;
  
  local_18 = param_4;
  local_18 = fn_0051f254();
  fn_004e0368(*(undefined4 *)(DAT_008bf504 + 0x14));
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) == '\0') {
    if (local_18 < 0) {
      if (local_18 == -0x375eec16) {
        local_18 = -0x275eb795;
      }
      else {
        local_18 = fn_006d5dec(*(undefined4 *)(DAT_008bf504 + 0x14),&local_18);
      }
      fn_004ed098(*(undefined4 *)(param_1 + 0x40),local_18);
    }
    else {
      fn_004ed0e4();
    }
  }
  else {
    fn_004ed068();
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return unaff_r5 & 0xff00 | 1;
}


