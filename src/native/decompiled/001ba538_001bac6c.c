#include "001ba538_001bac6c.h"



void fn_001bac6c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x130);
  if (*(uint *)(param_1 + 0x134) < (uint)(iVar1 + param_3)) {
    param_3 = *(uint *)(param_1 + 0x134) - iVar1;
  }
  if (param_3 != 0) {
    fn_00301a9c(param_2,DAT_008bf520 + iVar1,param_3);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(int *)(param_1 + 8) = param_3;
  return;
}



void fn_001bab44(uint param_1,undefined4 *param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  puVar1 = &local_48;
  local_48 = param_1 | 0x80000000;
  if (param_3 == 0) {
    local_44 = 0xf02c0;
    local_3c = 0xbf02c1;
    uStack_c = 0;
    uVar2 = 0x40;
    local_40 = param_2[3];
    local_38 = param_2[2];
    local_34 = param_2[1];
    local_30 = *param_2;
    local_2c = param_2[7];
    local_28 = param_2[6];
    local_24 = param_2[5];
    local_20 = param_2[4];
    local_1c = param_2[0xb];
    local_18 = param_2[10];
    local_14 = param_2[9];
    local_10 = param_2[8];
  }
  else {
    local_3c = 0xbf02c1;
    local_44 = 0xf02c0;
    local_40 = *param_2;
    fn_00734b4c(&local_48,0x10,1);
    fn_00734b4c(param_2 + 1,0x2c,1);
    puVar1 = (uint *)&DAT_007e0a44;
    uVar2 = 4;
  }
  fn_00734b4c(puVar1,uVar2,1);
  return;
}



undefined4 fn_001baaf4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_0015cfa4(param_1 + 0x138,param_2,param_2,param_2 >> 0x1f);
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 4) = 0xb;
    *(undefined4 *)(param_1 + 8) = 0xffffff80;
    return 0xb;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(int *)(param_1 + 8) = param_2;
  return 0;
}



undefined4 fn_001baaa8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_0014d9ec(param_1 + 0x138,&local_10,param_2,param_3);
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 4) = 0xb;
    *(undefined4 *)(param_1 + 8) = 0xffffff80;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = local_10;
  }
  return *(undefined4 *)(param_1 + 4);
}



undefined4 fn_001ba950(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 - 1U < 0xc) {
    uVar1 = *(undefined4 *)(&DAT_007e1854 + param_1 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_001ba6ec(int param_1)

{
  float *pfVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *local_164;
  float local_160 [3];
  float local_154;
  undefined4 local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  undefined4 local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [76];
  
  fVar7 = 1.0;
  iVar2 = *(int *)(param_1 + 0x14);
  fn_001ae1e8(auStack_110);
  fn_001ae0f0(auStack_e0,0x7a);
  fn_001ad06c(auStack_110,auStack_e0);
  fn_001ae1e8(auStack_70);
  fn_001ad06c(auStack_110,auStack_70);
  fVar8 = 0.0;
  fVar9 = fVar8;
  fn_001ae2cc(auStack_b0);
  fn_001ad06c(auStack_110,auStack_b0);
  fn_001b85e0(auStack_110,0,1);
  local_148 = -0.5;
  local_120 = fVar8;
  if (iVar2 != 0) {
    local_148 = fVar8;
    if (iVar2 == 1) {
      local_120 = fVar7;
      goto LAB_001ba7ec;
    }
    if (iVar2 != 2) goto LAB_001ba7ec;
    local_148 = -1.0;
  }
  fVar8 = fVar7;
LAB_001ba7ec:
  local_160[0] = local_148 + fVar7;
  local_160[1] = -0.5;
  local_150 = 0x3f000000;
  local_144 = 0x3f000000;
  local_138 = 0xbf000000;
  fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x24),(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x20),(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x28),(byte)(in_fpscr >> 0x16) & 3);
  local_130 = fVar8 * (fVar3 / fVar5);
  local_120 = local_120 * (fVar3 / fVar5);
  local_12c = fVar7 * (fVar4 / fVar6);
  local_124 = fVar9 * (fVar4 / fVar6);
  local_160[2] = fVar9;
  local_154 = local_160[0];
  local_14c = fVar9;
  local_140 = fVar9;
  local_13c = local_148;
  local_134 = fVar9;
  local_128 = local_130;
  local_11c = local_124;
  local_118 = local_120;
  local_114 = local_12c;
  fn_006b3f70(param_1 + 0x18,&DAT_008e9938,0x2701,0,0,0);
  fn_0012bc84(0x208,&local_164);
  pfVar1 = local_164;
  local_164 = &local_130;
  iVar2 = fn_001bb3d0(pfVar1,&DAT_008e9938,5,4,&DAT_007e0a50,local_160,0);
  fn_001467e4(iVar2 - (int)pfVar1 & 0xfffffffc);
  fn_00146578();
  return;
}



void fn_001ba680(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    DAT_008e9a99 = *param_1;
    DAT_008e9a9d = param_1[1];
    DAT_008e9aa1 = param_1[2];
    DAT_008e9aa5 = *param_1;
    DAT_008e9aa9 = param_1[1];
    DAT_008e9aad = param_1[2];
    DAT_008e9ab1 = 0;
  }
  DAT_008bf6c6 = param_1 != (undefined4 *)0x0;
  return;
}



undefined4 fn_001ba538(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  if (param_1 == -0x279f5ffd) {
    return 0xfffffe6f;
  }
  if (param_1 == -0x275f5f99) {
    return 0xfffffe6a;
  }
  if (param_1 != -0x275f5c08) {
    if (param_1 == -0x27df5f97) {
      return 0xffffff9c;
    }
    if (param_1 == -0x275f5f9a) {
      return 0xffffff9b;
    }
    if (param_1 == -0x275f5fba) {
      return 0xffffff9a;
    }
    if (param_1 == -0x271f5ffe) {
      return 0xfffffe6d;
    }
    if (param_1 != -0x275f5f9c) {
      if (param_1 == -0x275f5fc4) {
        return 0xffffff38;
      }
      iVar2 = 0x275f5fb6;
      bVar3 = param_1 != -0x275f5fb6;
      if (bVar3) {
        iVar2 = 0x275f5fb9;
      }
      bVar4 = param_1 + iVar2 != 0;
      if (bVar3 && bVar4) {
        iVar2 = 0x275f5fb7;
      }
      if ((!bVar3 || !bVar4) || param_1 + iVar2 == 0) {
        return 0xffffff9b;
      }
      iVar2 = 0x275f5fe8;
      if (param_1 != -0x275f5fe8) {
        iVar2 = 0x275f5fea;
      }
      if (param_1 != -0x275f5fe8 && param_1 + iVar2 != 0) {
        uVar1 = fn_001b8438(1,0xfffffc7a,(char *)&DAT_007e19e8);
        return uVar1;
      }
    }
  }
  return 0xfffffe6e;
}


