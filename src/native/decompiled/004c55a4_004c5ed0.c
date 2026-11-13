#include "004c55a4_004c5ed0.h"



void fn_004c5ed0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1;
    iVar3 = param_1 + uVar1 * 0x14;
    *(undefined4 *)(iVar3 + 0x2f8) = 0;
    *(undefined4 *)(iVar3 + 0x2fc) = 0;
    *(undefined4 *)(iVar3 + 0x300) = 0;
    *(undefined4 *)(iVar3 + 0x304) = 0;
    *(undefined4 *)(iVar3 + 0x308) = 0;
    uVar1 = uVar2;
  } while (uVar2 < 3);
  return;
}



undefined8 fn_004c5e5c(uint param_1)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = 0;
  do {
    uVar5 = (uint)DAT_008c361e;
    uVar4 = (uint)DAT_008c3620;
    uVar3 = fn_006575c0(&DAT_008f2d30);
    lVar1 = (ulonglong)(uVar4 - uVar5) * (ulonglong)uVar3;
    uVar3 = (int)((ulonglong)lVar1 >> 0x20) + uVar5 & 0xffff;
    if (uVar3 != param_1) goto LAB_004c5ea8;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 100);
  uVar3 = 0;
LAB_004c5ea8:
  return CONCAT44((int)lVar1,uVar3);
}



undefined4 fn_004c5d5c(int param_1)

{
  int iVar1;
  bool bVar2;
  int local_2c [3];
  
  if (*(int *)(param_1 + 0x58) != 0) {
    do {
      bVar2 = *(int *)(param_1 + 0x58) != 0;
      iVar1 = 0;
      if (bVar2) {
        iVar1 = *(int *)(param_1 + 0x54);
      }
      local_2c[1] = 0;
      local_2c[0] = -0x181c0001;
      if (bVar2 && iVar1 != 0) {
        iVar1 = iVar1 + 8;
      }
      else {
        iVar1 = 0;
      }
      if ((undefined4 *)(param_1 + 0x28) != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar1 + 8);
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar1 + 0xc);
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar1 + 0x10);
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0x14);
      }
      fn_00476814(param_1 + 0x28);
      local_2c[0] = fn_004d45ec(param_1 + 4,param_1 + 0x28,0x10,iVar1,local_2c + 1);
      if (local_2c[0] < 0) {
        fn_004ed4f8(0x8000,0,local_2c);
        return 0;
      }
      fn_004f0c1c(param_1 + 0x4c,iVar1 + -8);
      fn_004f0ab4(param_1 + 0x5c,param_1 + 0x60,*(int *)(param_1 + 0x6c) + iVar1 + -8);
    } while (*(int *)(param_1 + 0x58) != 0);
  }
  return 1;
}



undefined1 * fn_004c5bf4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  iVar1 = *(int *)(DAT_008bf4f4 + 0x20);
  puVar5 = (undefined4 *)(iVar1 + 0x80);
  if ((undefined4 *)(iVar1 + *(int *)(iVar1 + 0x7c) * 8 + 0x80) == puVar5) {
    puVar5 = (undefined4 *)0x0;
  }
  fn_004ed454(auStack_30,*puVar5,0x8236);
  uVar2 = fn_004ed440(auStack_28,auStack_30);
  iVar1 = fn_004ed440(auStack_48,uVar2);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  uVar6 = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  do {
    if (*(int *)(param_1 + 0x68) != 0) {
      iVar3 = fn_004f0a20(param_1 + 0x5c);
      if (iVar3 == 0) {
        iVar3 = 0;
code_r0x004c5cb4:
        iVar4 = fn_0015f180();
        *(undefined4 *)(iVar4 + 8) = 0;
        *(undefined4 *)(iVar4 + 0xc) = 0;
        *(undefined4 *)(iVar4 + 0x10) = 0;
        *(undefined4 *)(iVar4 + 0x14) = 0;
      }
      else {
        iVar3 = iVar3 - *(int *)(param_1 + 0x6c);
        if (iVar3 != -8) goto code_r0x004c5cb4;
      }
      fn_004f0b78(param_1 + 0x4c,param_1 + 0x50,iVar3);
      if (iVar3 + 8 != 0) {
        fn_004ed464(iVar3 + 8,iVar1);
        *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar1 + 8);
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar1 + 0xc);
        *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar1 + 0x10);
        *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar1 + 0x14);
      }
    }
    uVar6 = uVar6 + 1;
    if (4 < uVar6) {
      return auStack_30;
    }
  } while( true );
}



uint fn_004c5be8(int param_1)

{
  return *(uint *)(param_1 + 0x300) & 0xffff;
}



undefined4 fn_004c59a4(int param_1)

{
  uint uVar1;
  int iVar2;
  int local_18;
  int local_14;
  undefined1 local_10 [4];
  
  local_18 = -0x181c0001;
  local_10[0] = 0;
  local_14 = 0;
  local_18 = fn_004d47c0(param_1 + 4,param_1 + 0x38,0x10,param_1 + 0x20,local_10,&local_14);
  if (local_18 < 0) {
    if (local_18 != -0x2e9eb7d8) {
      fn_004ed4f8(0x8000,0,&local_18);
    }
  }
  else if (local_14 == 0x10) {
    fn_00476848(param_1 + 0x38);
    uVar1 = *(int *)(param_1 + 0x38) - 0x65;
    if (uVar1 < 3) {
      iVar2 = param_1 + uVar1 * 0x14;
      *(int *)(iVar2 + 0x2fc) = *(int *)(param_1 + 0x38);
      *(undefined4 *)(iVar2 + 0x300) = *(undefined4 *)(param_1 + 0x3c);
      *(undefined4 *)(iVar2 + 0x304) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(iVar2 + 0x308) = *(undefined4 *)(param_1 + 0x44);
      *(int *)(iVar2 + 0x2f8) = *(int *)(iVar2 + 0x2f8) + 1;
    }
    return 1;
  }
  return 0;
}



void fn_004c58dc(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      if (*(int *)(param_1 + 0x68) != 0) {
        iVar1 = fn_004f0a20(param_1 + 0x5c);
        if (iVar1 == 0) {
          iVar1 = 0;
code_r0x004c5938:
          iVar2 = fn_0015f180();
          *(undefined4 *)(iVar2 + 8) = 0;
          *(undefined4 *)(iVar2 + 0xc) = 0;
          *(undefined4 *)(iVar2 + 0x10) = 0;
          *(undefined4 *)(iVar2 + 0x14) = 0;
        }
        else {
          iVar1 = iVar1 - *(int *)(param_1 + 0x6c);
          if (iVar1 != -8) goto code_r0x004c5938;
        }
        fn_004f0b78(param_1 + 0x4c,param_1 + 0x50,iVar1);
        if (iVar1 + 8 != 0) {
          fn_004ed464(iVar1 + 8,param_2);
          *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_2 + 8);
          *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
          *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
          *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  return;
}



undefined1 * fn_004c5814(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 local_18;
  ushort local_14;
  
  fn_004ed454(&local_18,*(undefined4 *)(param_1 + 0x304),*(uint *)(param_1 + 0x300) & 0xffff);
  uVar1 = *(uint *)(*(int *)(DAT_008bf4f4 + 0x20) + 0x14) & 0xffff;
  if (1 < uVar1) {
    uVar1 = 1;
  }
  uVar1 = local_14 + uVar1;
  if (DAT_008c3620 < uVar1) {
    uVar1 = (uint)DAT_008c361e;
  }
  *param_2 = local_18;
  *(short *)(param_2 + 1) = (short)uVar1;
  return (undefined1 *)&local_18;
}



undefined1 * fn_004c57bc(int param_1)

{
  undefined1 *local_8 [2];
  
  if (*(int *)(param_1 + 8) < 1) {
    return &DAT_e0a14827;
  }
  local_8[0] = (undefined1 *)0xe7e3ffff;
  local_8[0] = (undefined1 *)fn_004d44f4(param_1 + 4);
  if ((int)local_8[0] < 0) {
    fn_004ed4f8(0x8000,0,local_8);
  }
  else {
    local_8[0] = (undefined1 *)0x0;
  }
  return local_8[0];
}



undefined1 * fn_004c566c(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0xe7e3ffff;
  local_10 = (undefined1 *)fn_004d43ec(param_1 + 4);
  if ((int)local_10 < 0) {
    fn_004ed4f8(0x8000,0,&local_10);
    return local_10;
  }
  if (*(short *)(param_1 + 0x1c) != 0) {
    local_10 = (undefined1 *)fn_004d4278(param_1 + 4,param_1 + 0x18);
    if (-1 < (int)local_10) {
      return (undefined1 *)0x0;
    }
    fn_004ed4f8(0x8000,0,&local_10);
  }
  uVar2 = fn_004c5b14(param_1);
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if ((int)uVar2 != 0) {
    return (undefined1 *)0x0;
  }
  if (DAT_008c0630 != 0) {
    uVar1 = 2;
  }
  local_10 = (undefined1 *)fn_004d44f4(param_1 + 4,uVar1,0x8000,0);
  if ((int)local_10 < 0) {
    fn_004ed4f8(0x8000,0,&local_10);
  }
  return &DAT_e0a14827;
}



undefined4 fn_004c5b14(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_20;
  
  uVar5 = 0;
  local_20 = param_4;
  do {
    uVar1 = DAT_008c361e;
    uVar3 = (uint)DAT_008c3620;
    uVar4 = (uint)DAT_008c361e;
    uVar2 = fn_006575c0(&DAT_008f2d30,uVar3,param_3,param_4);
    *(ushort *)(param_1 + 0x1c) =
         (short)((ulonglong)(uVar3 - uVar4) * (ulonglong)uVar2 >> 0x20) + uVar1;
    local_20 = fn_004d4278(param_1 + 4,param_1 + 0x18);
    if (-1 < local_20) {
      return 1;
    }
    fn_004ed4f8(0x8000,0,&local_20);
    param_3 = 0x8000;
    param_4 = 0;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 5);
  return 0;
}



uint fn_004c55a4(int param_1,undefined4 param_2,uint param_3)

{
  uint in_r12;
  
  if (*(char *)(DAT_008bf4e0 + 0x68) == '\0') {
    *(char **)(param_1 + 0x2c) = "JoinMeshJob::CompleteProcess";
    *(code **)(param_1 + 0x24) = fn_004f1b88;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return in_r12 & 0xff00;
  }
  *(code **)(param_1 + 0x24) = fn_004c509c;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "JoinMeshJob::StartBandWidthCheck";
  return param_3 & 0xff00;
}


