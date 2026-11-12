#include "0016636c_0016678c.h"



bool fn_0016678c(int param_1,int param_2)

{
  return **(int **)(*(int *)(*(int *)(param_1 + 4) + 0x360) + param_2 * 4) != 0;
}



int fn_0016676c(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 0x148) + 0x20) + param_2 * 0x30;
}



undefined4 fn_001666dc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint local_24 [6];
  
  local_24[0] = 0;
  local_24[3] = 0;
  local_24[4] = 0;
  local_24[1] = 0;
  local_24[2] = 0;
  uVar1 = fn_0014d6cc(local_24,param_2,1);
  if ((local_24[0] & 0xfffffffe) != 0) {
    if ((local_24[0] & 1) != 0) {
      fn_00146594();
    }
    fn_0015cf8c(local_24[0] & 0xfffffffe);
  }
  return uVar1;
}



int fn_001666d0(int param_1)

{
  return *(int *)(param_1 + 4) + -1;
}



int fn_001666c4(int param_1)

{
  return param_1 + *(int *)(param_1 + 4);
}



int fn_001665c8(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar4 = param_2 >> 0x18;
  if (uVar4 != 1) {
    if (uVar4 == 2) {
      iVar1 = fn_00166210(*(undefined4 *)(iVar1 + 0x3c));
      if (*(short *)(iVar1 + 0x10) == 0x2205) {
        iVar1 = iVar1 + *(int *)(iVar1 + 0x14);
      }
      else {
        iVar1 = 0;
      }
      iVar3 = *(int *)(iVar1 + 4);
    }
    else {
      if (uVar4 != 3) {
        return 0;
      }
      iVar1 = fn_00165fd0(*(undefined4 *)(iVar1 + 0x3c));
      iVar3 = *(int *)(iVar1 + 8);
    }
    return iVar1 + iVar3;
  }
  fn_0016600c(*(undefined4 *)(iVar1 + 0x3c));
  iVar3 = fn_001663f0();
  if (iVar3 == 3) {
    for (uVar4 = 0; puVar2 = (uint *)fn_00176b80(*(undefined4 *)(iVar1 + 0x3c)), uVar4 < *puVar2;
        uVar4 = uVar4 + 1) {
      puVar2 = (uint *)fn_00166210(*(undefined4 *)(iVar1 + 0x3c),uVar4 | 0x2000000);
      bVar6 = param_2 <= *puVar2;
      bVar5 = *puVar2 == param_2;
      if (!bVar6 || bVar5) {
        bVar6 = puVar2[1] <= param_2;
        bVar5 = param_2 == puVar2[1];
      }
      if (!bVar6 || bVar5) {
        if ((short)puVar2[4] == 0x2205) {
          iVar1 = (int)puVar2 + puVar2[5];
        }
        else {
          iVar1 = 0;
        }
        return iVar1 + *(int *)(iVar1 + 4);
      }
    }
  }
  return 0;
}



bool fn_0016658c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_00176b44(*(undefined4 *)(param_1 + 0x3c));
  if (puVar1 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
    uVar2 = fn_00176b8c(puVar1);
    param_3[1] = uVar2;
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(puVar1 + 1);
  }
  return puVar1 != (undefined4 *)0x0;
}



undefined4 fn_00166518(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00176b18(*(undefined4 *)(param_1 + 0x3c));
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_00176bd8();
    if (iVar2 == 0) {
      iVar1 = fn_00176bfc(iVar1);
      *param_3 = *(undefined4 *)(iVar1 + 8);
      iVar1 = *(int *)(iVar1 + 4);
      if (iVar1 != -1) {
        iVar1 = iVar1 + 8;
      }
      param_3[1] = iVar1;
    }
    else if (iVar2 == 1) {
      uVar3 = fn_00176bac(iVar1);
      param_3[2] = uVar3;
    }
    else if (iVar2 == 2) {
      return 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}



int fn_001664d8(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(param_1 + 3) != '\0') {
    iVar1 = fn_00176ac0(*param_1);
    iVar1 = *(int *)(param_1[1] + param_2 * 0xc + 8) + iVar1 + 8;
  }
  return iVar1;
}



undefined4 fn_001664b0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0xc + 0xc);
  }
  return uVar1;
}



int fn_001664a4(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x10);
}



uint fn_0016647c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 0x14,local_8,2);
  if (iVar1 == 0) {
    local_8[0] = 0x40;
  }
  else {
    local_8[0] = local_8[0] & 0xff;
  }
  return local_8[0];
}



int fn_00166470(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x10);
}



uint fn_00166444(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 0x14,local_8,2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (local_8[0] & 0xffff) >> 8;
  }
  return uVar2;
}



uint fn_00166420(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 0x14,local_8,0x11);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_8[0] & 1;
  }
  return uVar2;
}



undefined4 fn_001663f0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = *(short *)(param_1 + 0xc);
  if (sVar1 == 0x2201) {
    uVar2 = 2;
  }
  else if (sVar1 == 0x2202) {
    uVar2 = 3;
  }
  else if (sVar1 == 0x2203) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



uint fn_001663c4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 0x14,local_8,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (local_8[0] & 0xffff) >> 8;
  }
  return uVar2;
}



uint fn_001663a0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 0x14,local_8,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_8[0] & 0xff;
  }
  return uVar2;
}



undefined4 fn_0016636c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 0xc,local_8,1);
  if ((iVar1 == 0) || (uVar2 = 0, (local_8[0] & 0xffff) >> 8 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}


