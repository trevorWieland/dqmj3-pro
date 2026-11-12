#include "001fb3d4_001fbbc8.h"



undefined4 fn_001fbbc8(void)

{
  return DAT_00896cc4;
}



void fn_001fbba4(void)

{
  if (DAT_00896cbc == '\x05') {
    *(undefined1 *)(DAT_00896cc0 + 0x1e) = 0;
  }
  return;
}



int fn_001fbb3c(void)

{
  short sVar1;
  int iVar2;
  short local_4;
  
  local_4 = -1;
  iVar2 = 0;
  do {
    if (*(uint *)(&DAT_008cd180)[iVar2] == (uint)DAT_00896cbc && DAT_00896cbc == 5) {
      sVar1 = (short)((uint *)(&DAT_008cd180)[iVar2])[7];
      if (sVar1 < local_4) {
        sVar1 = local_4;
      }
      local_4 = sVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return (int)local_4;
}



void fn_001fbb24(void)

{
  fn_0066e4a4(DAT_00897850,0,0x34);
  return;
}



bool fn_001fbac8(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)(&DAT_008cd180)[param_2];
  uVar2 = (uint)DAT_00896cbc;
  uVar3 = *puVar1;
  if (uVar3 == uVar2 && uVar2 == 0) {
    *param_1 = puVar1[3];
    param_1[1] = puVar1[4];
    param_1[2] = puVar1[5];
    param_1[3] = puVar1[6];
    *(short *)(param_1 + 4) = (short)puVar1[7];
  }
  return uVar3 == uVar2 && uVar2 == 0;
}



bool fn_001fba34(int *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if (param_3 < (uint)(iVar1 - iVar2)) {
    puVar3 = (uint *)(&DAT_008cd180)[param_3];
    uVar4 = (uint)DAT_00896cbc;
    uVar5 = *puVar3;
    if (uVar5 == uVar4 && uVar4 == 0) {
      *param_2 = puVar3[3];
      param_2[1] = puVar3[4];
      param_2[2] = puVar3[5];
      param_2[3] = puVar3[6];
      *(short *)(param_2 + 4) = (short)puVar3[7];
    }
    return uVar5 == uVar4 && uVar4 == 0;
  }
  iVar1 = fn_006b3e50(param_1[1],param_3);
  if (iVar1 != 0) {
    *param_2 = *(uint *)(iVar1 + 0x12);
    param_2[1] = *(uint *)(iVar1 + 0x16);
    param_2[2] = *(uint *)(iVar1 + 0x1a);
    param_2[3] = *(uint *)(iVar1 + 0x1e);
    *(undefined2 *)(param_2 + 4) = *(undefined2 *)(iVar1 + 0x22);
  }
  return iVar1 != 0;
}



void fn_001fb9c0(void)

{
  if (DAT_00896cbc == '\0') {
    *(undefined1 *)(DAT_00896cc0 + 0x2f) = 1;
  }
  return;
}



void fn_001fb998(undefined2 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00896cc0;
  if (DAT_00896cbc == '\x05') {
    *(undefined1 *)(DAT_00896cc0 + 0x1e) = 1;
    *(undefined2 *)(iVar1 + 0x1c) = param_1;
  }
  return;
}



undefined4 fn_001fb944(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((*(uint *)(&DAT_008cd180)[iVar1] != (uint)DAT_00896cbc || DAT_00896cbc != 0 ||
         (*(char *)((int)(&DAT_008cd180)[iVar1] + 0x2f) == '\0'))) {
    iVar1 = iVar1 + 1;
    if (3 < iVar1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_001fb8d0(int param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = 0;
  while ((puVar2 = (uint *)(&DAT_008cd180)[iVar1],
         *puVar2 != (uint)DAT_00896cbc || DAT_00896cbc != 5 ||
         ((*(char *)((int)puVar2 + 0x1e) != '\0' &&
          (((short)puVar2[7] == -1 || (param_1 < (short)puVar2[7]))))))) {
    iVar1 = iVar1 + 1;
    if (3 < iVar1) {
      return 1;
    }
  }
  return 0;
}



int fn_001fb834(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*(uint *)(&DAT_008cd180)[iVar2] != (uint)DAT_00896cbc || DAT_00896cbc != 0 ||
         (iVar1 = (int)(char)((uint *)(&DAT_008cd180)[iVar2])[0xb], iVar1 < 0))) {
    iVar2 = iVar2 + 1;
    if (3 < iVar2) {
      return 0;
    }
  }
  return iVar1;
}



uint fn_001fb730(int param_1)

{
  uint uVar1;
  
  if (*(uint *)(&DAT_008cd180)[param_1] == (uint)DAT_00896cbc && DAT_00896cbc == 5) {
    uVar1 = ((uint *)(&DAT_008cd180)[param_1])[4];
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



bool fn_001fb6c4(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if ((*(uint *)(&DAT_008cd180)[iVar1] == (uint)DAT_00896cbc && DAT_00896cbc == 0) &&
       ((short)((uint *)(&DAT_008cd180)[iVar1])[8] != -1)) {
      iVar2 = iVar2 + 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  iVar1 = fn_0066e3bc(DAT_00897850);
  return iVar1 == iVar2;
}



uint fn_001fb678(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*(uint *)(&DAT_008cd180)[iVar2] != (uint)DAT_00896cbc || DAT_00896cbc != 0 ||
         (uVar1 = ((uint *)(&DAT_008cd180)[iVar2])[1], uVar1 == 0))) {
    iVar2 = iVar2 + 1;
    if (3 < iVar2) {
      return 0;
    }
  }
  return uVar1;
}



void fn_001fb4b4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int local_20;
  int local_1c [2];
  
  iVar3 = DAT_00896cc0;
  if (DAT_00896cbc == '\0') {
    iVar4 = DAT_00896cc0 + 0xc;
    *(undefined2 *)(DAT_00896cc0 + 0x20) = *(undefined2 *)(param_1 + 0xc);
    fn_0017821c(iVar4,param_1 + 0x14,0x12);
    *(undefined1 *)(iVar3 + 0x30) = *(undefined1 *)(param_1 + 599);
    if (param_2 != 0) {
      uVar5 = fn_005f65ec();
      *(undefined4 *)(iVar3 + 4) = uVar5;
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 4);
      *(short *)(iVar3 + 0x1e) = (short)*(char *)(param_1 + 0x240);
      iVar4 = fn_0066e3bc(DAT_00897850);
      *(char *)(iVar3 + 0x2c) = (char)iVar4;
      local_1c[0] = 4 - iVar4;
      local_20 = (int)*(char *)(param_1 + 0x24f);
      piVar6 = local_1c;
      if ((int)*(char *)(param_1 + 0x24f) <= 4 - iVar4) {
        piVar6 = &local_20;
      }
      iVar4 = 0;
      *(char *)(iVar3 + 0x2d) = (char)*piVar6;
      if ('\0' < *(char *)(param_1 + 0x24f)) {
        do {
          iVar1 = iVar4 * 4;
          iVar2 = iVar4 * 2;
          iVar4 = iVar4 + 1;
          *(undefined2 *)(iVar3 + iVar2 + 0x22) = *(undefined2 *)(param_1 + iVar1 + 0x242);
        } while (iVar4 < *(char *)(param_1 + 0x24f));
      }
      *(undefined1 *)(iVar3 + 0x2b) = *(undefined1 *)(param_1 + 0x253);
      *(undefined1 *)(iVar3 + 0x2a) = *(undefined1 *)(param_1 + 0x252);
      *(undefined1 *)(iVar3 + 0x28) = *(undefined1 *)(param_1 + 0x250);
      *(undefined1 *)(iVar3 + 0x29) = *(undefined1 *)(param_1 + 0x251);
      *(bool *)(iVar3 + 0x31) = *(char *)(param_1 + 0x254) != '\0';
    }
  }
  return;
}



uint fn_001fb484(int param_1)

{
  uint uVar1;
  
  if (*(uint *)(&DAT_008cd180)[param_1] == (uint)DAT_00896cbc && DAT_00896cbc == 5) {
    uVar1 = ((uint *)(&DAT_008cd180)[param_1])[2];
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



int fn_001fb428(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*(uint *)(&DAT_008cd180)[iVar2] != (uint)DAT_00896cbc || DAT_00896cbc != 0 ||
         (iVar1 = (int)*(short *)((int)(&DAT_008cd180)[iVar2] + param_1 * 2 + 0x22), iVar1 < 0))) {
    iVar2 = iVar2 + 1;
    if (3 < iVar2) {
      return 0;
    }
  }
  return iVar1;
}



void fn_001fb3d4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0011c1b4(L"rom:/data/Parameter/RaceMapParam.tp");
  *param_1 = uVar1;
  return;
}


