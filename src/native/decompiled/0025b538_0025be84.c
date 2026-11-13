#include "0025b538_0025be84.h"



undefined4 fn_0025be84(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || (DAT_00892818 <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined1 fn_0025be70(int param_1)

{
  return *(undefined1 *)(DAT_00892814 + param_1);
}



void fn_0025bddc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x26c) = 0;
  *(undefined4 *)(iVar1 + 0x270) = 0;
  return;
}



void fn_0025bdc4(int param_1)

{
  *(int *)(*(int *)(param_1 + 4) + 0xcc) = *(int *)(*(int *)(param_1 + 4) + 0xcc) / 2;
  return;
}



void fn_0025bdbc(int param_1)

{
  fn_001003e0(*(undefined4 *)(param_1 + 4));
  return;
}



void fn_0025bd60(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int local_10 [3];
  int local_4;
  
  piVar2 = local_10;
  piVar1 = local_10;
  *(int *)(*(int *)(param_1 + 4) + 0xcc) = param_2;
  local_4 = 0;
  if (param_2 < 0) {
    piVar2 = &local_4;
  }
  local_10[0] = param_2;
  local_10[1] = 9999999;
  if (*piVar2 < 10000000) {
    if (param_2 < 0) {
      piVar1 = &local_4;
    }
  }
  else {
    piVar1 = local_10 + 1;
  }
  *(int *)(*(int *)(param_1 + 4) + 0xcc) = *piVar1;
  return;
}



void fn_0025bafc(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  short local_88 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  int local_60;
  int local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 auStack_40 [32];
  
  iVar2 = DAT_00897804;
  if (DAT_00897804 != 0) {
    fn_00301a9c(local_88,&DAT_0088fcb8,0x20);
    local_68 = **(undefined4 **)(*(int *)(iVar2 + 0xc) + 4);
    uStack_64 = 0;
    local_60 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x60);
    local_5c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x86);
    uStack_58 = 0;
    local_54 = 0;
    local_50 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26c);
    local_4c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26e);
    local_48 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x270);
    local_44 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x272);
    fn_0013ef80(auStack_40,local_88,0x48);
    iVar2 = fn_001010c8(auStack_40,*(undefined4 *)(*(int *)(DAT_00897804 + 0x60) + 4),0x20);
    if (iVar2 != 0) {
      bVar1 = true;
      goto LAB_0025bc08;
    }
  }
  bVar1 = false;
LAB_0025bc08:
  fn_00166824(*(int *)(param_1 + 4) + 0x26c,param_2);
  uVar3 = 0;
  do {
    iVar2 = uVar3 * 2 + 0x26c;
    uVar3 = uVar3 + 1;
    local_88[0] = *(short *)(*(int *)(param_1 + 4) + iVar2);
    local_88[2] = 0;
    local_88[4] = 999;
    if (local_88[0] < 0) {
      psVar4 = local_88 + 2;
    }
    else {
      psVar4 = local_88;
    }
    if (999 < *psVar4) {
      psVar4 = local_88 + 4;
    }
    *(short *)(*(int *)(param_1 + 4) + iVar2) = *psVar4;
    iVar2 = DAT_00897804;
  } while (uVar3 < 4);
  if ((!bVar1) && (DAT_00897804 != 0)) {
    fn_00301a9c(local_88,&DAT_0088fcb8,0x20);
    local_68 = **(undefined4 **)(*(int *)(iVar2 + 0xc) + 4);
    uStack_64 = 0;
    local_60 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x60);
    local_5c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x86);
    uStack_58 = 0;
    local_54 = 0;
    local_50 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26c);
    local_4c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26e);
    local_48 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x270);
    local_44 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x272);
    fn_0013ef80(auStack_40,local_88,0x48);
    fn_00122c48(*(undefined4 *)(DAT_00897804 + 0x60),auStack_40);
  }
  return;
}



void fn_0025ba9c(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int local_10 [3];
  int local_4;
  
  piVar1 = local_10;
  piVar2 = local_10;
  local_10[0] = param_2 + *(int *)(*(int *)(param_1 + 4) + 0xcc);
  *(int *)(*(int *)(param_1 + 4) + 0xcc) = local_10[0];
  if (local_10[0] < 0) {
    piVar1 = &local_4;
  }
  local_4 = 0;
  local_10[1] = 9999999;
  if (*piVar1 < 10000000) {
    if (local_10[0] < 0) {
      piVar2 = &local_4;
    }
  }
  else {
    piVar2 = local_10 + 1;
  }
  *(int *)(*(int *)(param_1 + 4) + 0xcc) = *piVar2;
  return;
}



void fn_0025b9fc(int param_1,int param_2)

{
  int *piVar1;
  int local_c [2];
  
  local_c[0] = param_2 + (uint)*(ushort *)(*(int *)(param_1 + 4) + 0x2ba);
  piVar1 = local_c + 1;
  if (local_c[0] < 1000) {
    piVar1 = local_c;
  }
  local_c[1] = 999;
  *(short *)(*(int *)(param_1 + 4) + 0x2ba) = (short)*piVar1;
  return;
}



void fn_0025b9b4(int param_1,int param_2)

{
  int *piVar1;
  int local_c [2];
  
  local_c[0] = param_2 + (uint)*(ushort *)(*(int *)(param_1 + 4) + 0x276);
  piVar1 = local_c + 1;
  if (local_c[0] < 1000) {
    piVar1 = local_c;
  }
  local_c[1] = 999;
  *(short *)(*(int *)(param_1 + 4) + 0x276) = (short)*piVar1;
  return;
}



void fn_0025b92c(int param_1,int param_2)

{
  int *piVar1;
  int local_8 [2];
  
  local_8[0] = (uint)*(ushort *)(*(int *)(param_1 + 4) + 0x2a) + param_2;
  local_8[1] = 999;
  piVar1 = local_8 + 1;
  if (local_8[0] < 1000) {
    piVar1 = local_8;
  }
  *(short *)(*(int *)(param_1 + 4) + 0x2a) = (short)*piVar1;
  return;
}



void fn_0025b864(int param_1)

{
  float *pfVar1;
  float in_s0;
  float local_8 [2];
  
  local_8[0] = *(float *)(*(int *)(param_1 + 4) + 0x2b4) + in_s0;
  local_8[1] = 999999.0;
  pfVar1 = local_8 + 1;
  if (local_8[0] <= 999999.0) {
    pfVar1 = local_8;
  }
  *(float *)(*(int *)(param_1 + 4) + 0x2b4) = *pfVar1;
  return;
}



void fn_0025b708(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar6 = 0;
  do {
    iVar7 = iVar6 * 8 + 0x280;
    piVar5 = (int *)(*(int *)(param_1 + 4) + iVar7);
    if (*piVar5 != 0 || piVar5[1] != 0) {
      local_40 = 0;
      uStack_3c = 0;
      fn_00114248(&local_60);
      local_40 = local_60;
      uStack_3c = local_5c;
      uVar1 = fn_0011a314(&local_40);
      uVar2 = fn_0011a3c4(&local_40);
      uVar3 = fn_0011a36c(&local_40);
      iVar4 = fn_00114150(uVar3,uVar2,uVar1);
      fn_0010b2b4(&local_50,&uStack_4c,auStack_48,iVar4 + 2);
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      fn_00123d00(&local_38,local_50,uStack_4c,auStack_48[0]);
      local_28 = local_38;
      uStack_24 = uStack_34;
      uVar8 = fn_00691514(&local_28);
      *(undefined8 *)(*(int *)(param_1 + 4) + iVar7) = uVar8;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  return;
}



void fn_0025b600(int param_1)

{
  undefined4 *puVar1;
  float in_s0;
  undefined4 local_10;
  undefined4 local_c [3];
  
  local_10 = 0x497423f0;
  puVar1 = &local_10;
  if (in_s0 <= 999999.0) {
    puVar1 = local_c;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 600) = *puVar1;
  return;
}



void fn_0025b538(int param_1,int param_2)

{
  int *piVar1;
  int local_8 [2];
  
  local_8[0] = (uint)*(ushort *)(*(int *)(param_1 + 4) + 0x32) + param_2;
  local_8[1] = 999;
  piVar1 = local_8 + 1;
  if (local_8[0] < 1000) {
    piVar1 = local_8;
  }
  *(short *)(*(int *)(param_1 + 4) + 0x32) = (short)*piVar1;
  return;
}


