#include "006e5cb0_006e60f0.h"



void fn_006e60f0(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x10))();
  VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  return;
}



void fn_006e60c4(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x14))();
  VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  return;
}



void fn_006e6098(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))();
  VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  return;
}



int fn_006e6044(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)(param_1 + 0x14);
  if (param_2 < *puVar1) {
    iVar2 = (int)puVar1 + puVar1[param_2 * 2 + 2];
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



int fn_006e6038(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2;
}



int fn_006e602c(int param_1)

{
  return param_1 + *(int *)(param_1 + 0xc);
}



int fn_006e5fc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (*(ushort *)(param_1 + 0x10) != 0) {
    while (*(short *)(param_1 + 0x14 + iVar2 * 0xc) != 0x7000) {
      iVar2 = iVar2 + 1;
      if ((int)(uint)*(ushort *)(param_1 + 0x10) <= iVar2) {
        return 0;
      }
    }
    iVar3 = param_1 + 0x14 + iVar2 * 0xc;
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 4);
    }
    if (iVar3 != 0 && iVar2 != 0) {
      iVar1 = iVar2 + param_1;
    }
  }
  return iVar1;
}



int fn_006e5f58(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(ushort *)(param_1 + 0x10) != 0) {
    do {
      if (*(short *)(param_1 + 0x14 + iVar1 * 0xc) == 0x7001) {
        iVar2 = param_1 + 0x14 + iVar1 * 0xc;
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = *(int *)(iVar2 + 4);
        }
        if (iVar2 != 0 && iVar1 != 0) {
          return iVar1 + param_1;
        }
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x10));
  }
  return 0;
}



byte * fn_006e5e74(short *param_1,uint param_2)

{
  short sVar1;
  byte *pbVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  sVar1 = *param_1;
  puVar4 = (uint *)((int)param_1 + *(int *)(param_1 + 2));
  if (sVar1 == 0x6000) {
    pbVar2 = (byte *)(puVar4[1] + (int)puVar4);
  }
  else {
    if (sVar1 == 0x6001) {
      uVar5 = *puVar4;
      uVar3 = 0;
      if (uVar5 != 0) {
        do {
          if (param_2 <= *(byte *)((int)puVar4 + uVar3 + 4)) {
            uVar3 = *(uint *)((int)puVar4 + (uVar5 + 3 & 0xfffffffc) + uVar3 * 8 + 8);
            goto LAB_006e5f20;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar5);
      }
    }
    else {
      if (sVar1 != 0x6002) {
        return (byte *)0x0;
      }
      uVar3 = (uint)(byte)*puVar4;
      bVar7 = param_2 <= uVar3;
      bVar6 = uVar3 == param_2;
      if (!bVar7 || bVar6) {
        bVar7 = *(byte *)((int)puVar4 + 1) <= param_2;
        bVar6 = param_2 == *(byte *)((int)puVar4 + 1);
      }
      if (!bVar7 || bVar6) {
        uVar3 = puVar4[(param_2 - uVar3) * 2 + 2];
LAB_006e5f20:
        return (byte *)(uVar3 + (int)puVar4);
      }
    }
    pbVar2 = (byte *)0x0;
  }
  return pbVar2;
}



uint fn_006e5e4c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 4,local_8,1);
  if (iVar1 == 0) {
    local_8[0] = 0x7f;
  }
  else {
    local_8[0] = local_8[0] & 0xff;
  }
  return local_8[0];
}



void fn_006e5dd8(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = false;
  iVar2 = 0;
  uVar3 = 0;
  iVar4 = 4;
  do {
    if (((*(uint *)(param_1 + 4) & 1 << (uVar3 & 0xff)) != 0) && (iVar2 = iVar2 + 1, uVar3 == 3)) {
      bVar1 = true;
    }
    iVar4 = iVar4 + -1;
    uVar3 = uVar3 + 1;
  } while (iVar4 != 0);
  if ((bVar1) && (iVar2 != 0)) {
    return;
  }
  return;
}



uint fn_006e5db0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 4,local_8,2);
  if (iVar1 == 0) {
    local_8[0] = 0x40;
  }
  else {
    local_8[0] = local_8[0] & 0xff;
  }
  return local_8[0];
}



uint fn_006e5d84(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 4,local_8,4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (local_8[0] & 0xffffff) >> 0x10;
  }
  return uVar2;
}



int fn_006e5d6c(int param_1)

{
  if (*(int *)(param_1 + 4) == 0x21f) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



undefined4 fn_006e5d40(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 4,local_8,4);
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = 0, (local_8[0] & 0xff) != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



uint fn_006e5d18(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 4,local_8,0);
  if (iVar1 == 0) {
    local_8[0] = 0x3c;
  }
  else {
    local_8[0] = local_8[0] & 0xff;
  }
  return local_8[0];
}



undefined1 * fn_006e5cdc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int local_10;
  
  local_10 = param_4;
  iVar1 = fn_00176c24(param_1 + 4,&local_10,9);
  if (iVar1 == 0) {
    puVar2 = &DAT_008c3cb8;
  }
  else {
    puVar2 = (undefined1 *)(local_10 + param_1 + *(int *)(local_10 + param_1 + 4));
  }
  return puVar2;
}



uint fn_006e5cb0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 4,local_8,4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (local_8[0] & 0xffff) >> 8;
  }
  return uVar2;
}


