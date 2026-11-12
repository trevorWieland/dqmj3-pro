#include "00163514_00163a00.h"



undefined1 fn_00163a00(int param_1)

{
  return *(undefined1 *)(DAT_008994a4 + param_1 * 0x60 + 2);
}



undefined1 fn_001639e4(int param_1)

{
  return *(undefined1 *)(DAT_008994a4 + param_1 * 0x60 + 10);
}



undefined4 fn_001639b8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)fn_00176d74(DAT_008988a0,param_1);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
  }
  return uVar2;
}



undefined4 fn_001639b0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)fn_00176d74(DAT_008988a0,param_2);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
  }
  return uVar2;
}



void fn_00163988(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  return;
}



void fn_0016397c(int param_1)

{
  *(undefined1 *)(param_1 + 0x88) = 1;
  return;
}



undefined4 fn_00163940(int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 < 1) || (DAT_008994c8 <= param_1)) ||
     (*(char *)(DAT_008994c4 + param_1 * 0x40 + 0x10) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_001638b0(int param_1)

{
  if (*(int *)(param_1 + 0x94) != 0) {
    fn_001581d0(param_1,(char *)&DAT_001638e4);
    return;
  }
  if (*(int *)(param_1 + 0x90) == 2) {
    return;
  }
  fn_001581d0(param_1,(char *)&DAT_00163910);
  return;
}



void fn_00163890(void)

{
  return;
}



undefined4 fn_00163868(undefined4 param_1)

{
  undefined4 extraout_r1;
  
  DAT_0089a4c8 = fn_0010101c();
  fn_00300f74(DAT_0089a4c8,param_1);
  return extraout_r1;
}



undefined4 fn_00163860(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  
  DAT_0089a4c8 = fn_0010101c();
  fn_00300f74(DAT_0089a4c8,param_2);
  return extraout_r1;
}



void fn_0016383c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = **(int **)(*(int *)(*(int *)(param_1 + 4) + 0x360) + param_2 * 4);
  if (iVar1 == 0) {
    return;
  }
  fn_00152048(iVar1,param_3);
  return;
}



undefined1 * fn_00163724(undefined1 *param_1,undefined1 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint local_24 [2];
  
  param_1[1] = param_2;
  *param_1 = 0;
  uVar1 = fn_00100b58(param_3);
  if (uVar1 == 0) {
    puVar2 = &DAT_008f9cf4;
  }
  else {
    puVar3 = local_24 + 1;
    if (0x20 < uVar1) {
      puVar3 = local_24;
    }
    local_24[0] = uVar1;
    local_24[1] = 0x20;
    uVar5 = *puVar3;
    if (0xfffffff1 < uVar5) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
    }
    if (uVar5 < uVar1) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar5);
    }
    if (uVar5 == 0) {
      puVar2 = &DAT_008f9ce8;
    }
    else {
      puVar2 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      *puVar2 = 0;
      puVar2[1] = uVar5;
      puVar2[2] = uVar1;
      puVar4 = (undefined2 *)((int)puVar2 + uVar1 * 2 + 0xc);
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    puVar2 = puVar2 + 3;
  }
  *(undefined4 **)(param_1 + 4) = puVar2;
  fn_00301a9c(puVar2,param_3,uVar1 << 1);
  return param_1;
}



undefined4 * fn_001636ac(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &DAT_00858e0c;
  puVar3 = (undefined4 *)param_1[8];
  for (puVar2 = (undefined4 *)param_1[7]; puVar2 != puVar3; puVar2 = puVar2 + 0x15) {
    (**(code **)*puVar2)(puVar2);
  }
  iVar1 = param_1[7];
  fn_001008c4(iVar1,(param_1[9] - iVar1) / 0x54,0);
  return param_1;
}



undefined4 * fn_00163514(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint local_20 [2];
  
  *param_1 = &DAT_00858e0c;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = &DAT_00858a74;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0x10);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_20[1] = 0x20;
  local_20[0] = (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x1c)) / 0x54;
  puVar1 = local_20;
  if (local_20[0] < 0x20) {
    puVar1 = local_20 + 1;
  }
  uVar6 = *puVar1;
  puVar2 = (undefined4 *)fn_00100fc6(uVar6 * 0x54,0);
  param_1[7] = puVar2;
  iVar5 = *(int *)(param_2 + 0x20);
  for (iVar3 = *(int *)(param_2 + 0x1c); iVar3 != iVar5; iVar3 = iVar3 + 0x54) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &DAT_00858ac8;
      *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(iVar3 + 4);
      puVar2[2] = *(undefined4 *)(iVar3 + 8);
      uVar7 = *(undefined4 *)(iVar3 + 0x10);
      uVar8 = *(undefined4 *)(iVar3 + 0x14);
      uVar9 = *(undefined4 *)(iVar3 + 0x18);
      uVar10 = *(undefined4 *)(iVar3 + 0x1c);
      uVar11 = *(undefined4 *)(iVar3 + 0x20);
      uVar12 = *(undefined4 *)(iVar3 + 0x24);
      uVar13 = *(undefined4 *)(iVar3 + 0x28);
      puVar2[3] = *(undefined4 *)(iVar3 + 0xc);
      puVar2[4] = uVar7;
      puVar2[5] = uVar8;
      puVar2[6] = uVar9;
      puVar2[7] = uVar10;
      puVar2[8] = uVar11;
      puVar2[9] = uVar12;
      puVar2[10] = uVar13;
      puVar2[0xb] = *(undefined4 *)(iVar3 + 0x2c);
      uVar7 = *(undefined4 *)(iVar3 + 0x34);
      uVar8 = *(undefined4 *)(iVar3 + 0x38);
      puVar2[0xc] = *(undefined4 *)(iVar3 + 0x30);
      puVar2[0xd] = uVar7;
      puVar2[0xe] = uVar8;
      puVar2[0xf] = *(undefined4 *)(iVar3 + 0x3c);
      puVar2[0x10] = *(undefined4 *)(iVar3 + 0x40);
      puVar2[0x11] = *(undefined4 *)(iVar3 + 0x44);
      *(undefined1 *)(puVar2 + 0x12) = *(undefined1 *)(iVar3 + 0x48);
      puVar2[0x13] = *(undefined4 *)(iVar3 + 0x4c);
      puVar2[0x14] = *(undefined4 *)(iVar3 + 0x50);
    }
    puVar2 = puVar2 + 0x15;
  }
  iVar3 = *(int *)(param_2 + 0x20);
  iVar4 = *(int *)(param_2 + 0x1c);
  iVar5 = param_1[7];
  param_1[9] = iVar5 + uVar6 * 0x54;
  param_1[8] = iVar5 + ((iVar3 - iVar4) / 0x54) * 0x54;
  return param_1;
}


