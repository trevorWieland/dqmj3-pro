#include "00165d2c_00166344.h"



uint fn_00166344(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 0xc,local_8,1);
  if (iVar1 == 0) {
    local_8[0] = 0x40;
  }
  else {
    local_8[0] = local_8[0] & 0xff;
  }
  return local_8[0];
}



undefined4 fn_00166324(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 0xc,local_8,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_8[0];
  }
  return uVar2;
}



void fn_001662c4(int param_1,uint *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + *(int *)(param_1 + 4));
  if (*puVar1 == 0) {
    *param_2 = 0xffffffff;
  }
  else {
    *param_2 = puVar1[1];
  }
  if (*puVar1 < 2) {
    param_2[1] = 0xffffffff;
  }
  else {
    param_2[1] = puVar1[2];
  }
  if (*puVar1 < 3) {
    param_2[2] = 0xffffffff;
  }
  else {
    param_2[2] = puVar1[3];
  }
  if (*puVar1 < 4) {
    param_2[3] = 0xffffffff;
  }
  else {
    param_2[3] = puVar1[4];
  }
  return;
}



uint fn_00166298(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 8,local_8,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (local_8[0] & 0xffff) >> 8;
  }
  return uVar2;
}



uint fn_00166270(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 8,local_8,0);
  if (iVar1 == 0) {
    local_8[0] = 0x40;
  }
  else {
    local_8[0] = local_8[0] & 0xff;
  }
  return local_8[0];
}



int fn_00166264(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x2c);
}



int fn_00166258(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x3c);
}



int fn_0016624c(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x34);
}



int fn_00166210(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 >> 0x18 == 2) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0xc));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}



int fn_001661d4(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 >> 0x18 == 4) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x2c));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}



int fn_0016600c(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 >> 0x18 == 1) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 4));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}



int fn_00165fd0(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 >> 0x18 == 3) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x14));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}



undefined4 fn_00165fb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 4,local_8,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_8[0];
  }
  return uVar2;
}



void fn_00165ea0(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  
  if (*(int *)(param_2 + 0x60) == 0) {
    *param_1 = 0x8001000c;
    param_1[1] = &DAT_007dba44;
    param_1[2] = 0x71;
    return;
  }
  if (param_3 != 0) {
    uVar10 = fn_00101160(*(int *)(param_2 + 0x60),&DAT_007dbc14);
    iVar5 = (int)((ulonglong)uVar10 >> 0x20);
    iVar2 = (int)uVar10;
    if (iVar2 != 0) {
      iVar5 = *(int *)(param_2 + 0x60);
    }
    if (iVar2 == 0 || iVar5 == iVar2) {
LAB_00165f38:
      *param_1 = 0x80050003;
      param_1[1] = &DAT_007dba44;
      param_1[2] = 0x71;
      return;
    }
    uVar3 = 0;
    uVar1 = iVar2 - iVar5 >> 1;
    if (uVar1 != 0) {
      do {
        uVar6 = (uint)*(ushort *)(iVar5 + uVar3 * 2);
        uVar7 = uVar6 - 0x41;
        bVar8 = 0x19 < uVar7;
        if (bVar8) {
          uVar7 = uVar6 - 0x61;
        }
        bVar9 = bVar8 && 0x19 < uVar7;
        if (bVar8 && 0x19 < uVar7) {
          bVar9 = 9 < uVar6 - 0x30;
        }
        if ((bVar9) && (uVar6 != 0x2d && uVar6 != 0x5f)) goto LAB_00165f38;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    if (param_3 != 0) {
      if (param_4 < uVar1 + 1) {
        uVar4 = 0x8001000f;
      }
      else {
        fn_00301a9c(param_3,iVar5,uVar1 << 1);
        *(undefined2 *)(param_3 + uVar1 * 2) = 0;
        uVar4 = 0x10001;
      }
      *param_1 = uVar4;
      param_1[1] = &DAT_007dba44;
      param_1[2] = 0x71;
      return;
    }
  }
  *param_1 = 0x8001000a;
  param_1[1] = &DAT_007dba44;
  param_1[2] = 0x71;
  return;
}



uint * fn_00165d44(int *param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  if (param_3 != 0) {
    param_2 = (uint *)fn_0016faa8(param_2,(param_1[1] >> 0x1f) + 1,(char)param_1[0x28]);
  }
  iVar1 = param_1[1];
  if (-1 < iVar1) {
    fn_0017821c(param_2,param_1[0x2d] + *(int *)(param_1[0x30] + iVar1 * 4) * 4,
                 *(int *)(param_1[0x2e] + iVar1 * 4) << 2);
    puVar3 = param_2 + *(int *)(param_1[0x2e] + param_1[1] * 4);
    *puVar3 = param_1[0x2a] | 0x7fff0000;
    param_2 = puVar3 + 2;
    puVar3[1] = 0xf0280;
  }
  fn_0017821c(param_2,param_1[0x2d] + *(int *)(param_1[0x30] + *param_1 * 4) * 4,
               *(int *)(param_1[0x2e] + *param_1 * 4) << 2);
  param_2 = param_2 + *(int *)(param_1[0x2e] + *param_1 * 4);
  *param_2 = param_1[0x29] | 0x7fff0000;
  param_2[1] = 0xf02b0;
  uVar2 = 0x100;
  if ((char)param_1[0x28] != '\x03') {
    uVar2 = 0;
  }
  param_2[2] = uVar2;
  uVar2 = 0x100;
  param_2[3] = 0x20229;
  if ((char)param_1[0x28] != '\x03') {
    uVar2 = 0;
  }
  param_2[4] = uVar2;
  param_2[5] = 0x20253;
  fn_0017821c(param_2 + 6,param_1[0x2b] + *(int *)(param_1[0x32] + param_1[2] * 4) * 4,
               *(int *)(param_1[0x2c] + param_1[2] * 4) << 2);
  return param_2 + 6 + *(int *)(param_1[0x2c] + param_1[2] * 4);
}



void fn_00165d3c(int param_1)

{
  fn_001759d0(*(undefined4 *)(param_1 + 100));
  return;
}



void fn_00165d2c(void)

{
  int iVar1;
  
  iVar1 = fn_00159d14();
  fn_001759d0(*(undefined4 *)(iVar1 + 100));
  return;
}


