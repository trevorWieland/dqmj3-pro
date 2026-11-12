#include "001563dc_0015676c.h"



bool fn_0015676c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00165fd0(*(undefined4 *)(param_1 + 0x3c));
  if (puVar1 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
  }
  return puVar1 != (undefined4 *)0x0;
}



undefined4 fn_00156750(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016624c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  return *puVar1;
}



undefined4 fn_00156714(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((char)param_1[3] == '\0') ||
     (iVar3 = *param_1, iVar1 = fn_00176ac0(iVar3), *(int *)(iVar3 + iVar1) != 0x54415743)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



int fn_001566bc(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((*(char *)(param_1 + 3) == '\0') || (*(uint *)param_1[1] <= param_2)) {
    return 0;
  }
  if (param_1[2] == 0) {
    uVar2 = ((uint *)param_1[1])[param_2 * 3 + 2];
    iVar1 = fn_00176a8c(*param_1);
    return iVar1 + 8 + uVar2;
  }
  return *(int *)(param_1[2] + param_2 * 4);
}



undefined4 fn_00156618(int param_1)

{
  if (*(short *)(param_1 + 0x14) == 0x2002) {
    param_1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x2002) {
    param_1 = param_1 + 0x20;
  }
  else if (*(short *)(param_1 + 0x2c) == 0x2002) {
    param_1 = param_1 + 0x2c;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 4);
}



uint fn_001565f0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 4,local_8,1);
  if (iVar1 == 0) {
    local_8[0] = 0x60;
  }
  else {
    local_8[0] = local_8[0] & 0xff;
  }
  return local_8[0];
}



void fn_0015657c(int param_1)

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



uint fn_00156554(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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



uint fn_00156528(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 4,local_8,2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (local_8[0] & 0xffff) >> 8;
  }
  return uVar2;
}



uint fn_00156500(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 4,local_8,0);
  if (iVar1 == 0) {
    local_8[0] = 0x40;
  }
  else {
    local_8[0] = local_8[0] & 0xff;
  }
  return local_8[0];
}



undefined1 * fn_001564c4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int local_10;
  
  local_10 = param_4;
  iVar1 = fn_00176c24(param_1 + 4,&local_10,9);
  if (iVar1 == 0) {
    puVar2 = &DAT_008c3cca;
  }
  else {
    puVar2 = (undefined1 *)(local_10 + param_1 + *(int *)(local_10 + param_1 + 4));
  }
  return puVar2;
}



int fn_00156488(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x14));
  if ((param_2 < *puVar1) && ((short)puVar1[param_2 * 2 + 1] == 0x4902)) {
    iVar2 = (int)puVar1 + puVar1[param_2 * 2 + 2];
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



int fn_00156454(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0xc));
  if ((param_2 < *puVar1) && ((short)puVar1[param_2 * 2 + 1] == 0x4900)) {
    iVar2 = (int)puVar1 + puVar1[param_2 * 2 + 2];
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



int fn_00156448(int param_1)

{
  return param_1 + *(int *)(param_1 + 4);
}



int fn_001563dc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (*(ushort *)(param_1 + 0x10) != 0) {
    while (*(short *)(param_1 + 0x14 + iVar2 * 0xc) != 0x6800) {
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


