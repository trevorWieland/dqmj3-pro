#include "00672734_00673290.h"



void fn_00673290(void)

{
  *(undefined1 *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x20) + 0x564) = 1;
  return;
}



undefined4 * fn_00673204(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(100,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688(puVar1);
    fn_002fec40(puVar1 + 1,s_NetworkCommandGetHostList_008c6f73);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_0085a298;
  }
  *(undefined4 **)(param_1 + 0x98) = puVar1;
  return puVar1;
}



undefined4 fn_00673170(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(DAT_00898840 + 0x34) == 1) {
    iVar1 = fn_0066eb80(DAT_00898840,8);
    uVar2 = *(undefined4 *)(iVar1 + 0x55c);
  }
  else if (*(int *)(DAT_00898840 + 0x34) == 2) {
    iVar1 = fn_0066eb80(DAT_00898840,3);
    uVar2 = *(undefined4 *)(iVar1 + 0x5a4);
  }
  return uVar2;
}



void fn_00673140(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStackY_90 [128];
  
  iVar1 = fn_0066eb80(DAT_00898840,8);
  fn_006d53e8(DAT_008bf504,param_3,auStackY_90 + 0x84,0x16,iVar1 + param_2 * 0x10c + 0x568);
  return;
}



void fn_00673108(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStackY_90 [128];
  
  iVar1 = fn_0066eb80(DAT_00898840,8);
  fn_006d53e8(DAT_008bf504,param_3,auStackY_90 + 0x84,param_4,iVar1 + param_2 * 0x10c + 0x568);
  return;
}



void fn_0067303c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_148 [4];
  undefined4 local_144;
  undefined2 local_140;
  undefined1 local_13e;
  undefined4 local_13c;
  undefined1 auStack_138 [256];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(int *)(DAT_00898840 + 0x34) == 1) {
    iVar2 = fn_0066eb80(DAT_00898840,8);
    fn_003007a0(param_3,iVar2 + param_2 * 0x28 + 0xbc0,0x16);
    return;
  }
  if (*(int *)(DAT_00898840 + 0x34) == 2) {
    local_140 = 0;
    local_13e = 1;
    local_144 = 0;
    local_13c = 0;
    fn_00301f50(auStack_138,0x100);
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_2c = 0;
    local_1c = 0;
    uVar1 = fn_0066eb80(DAT_00898840,3);
    fn_00668814(uVar1,param_2,auStack_148);
    fn_00103130(param_3,auStack_138,0xb);
  }
  return;
}



bool fn_00672ee4(int *param_1)

{
  bool bVar1;
  
  param_1[0x313] = 0;
  param_1[0x314] = 0;
  *(undefined1 *)(param_1 + 0x315) = 0;
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) != 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,7);
  }
  return bVar1;
}



bool fn_00672e50(int *param_1)

{
  bool bVar1;
  
  *(undefined1 *)(param_1 + 0x159) = 0;
  param_1[0x313] = 0;
  param_1[0x314] = 0;
  *(undefined1 *)(param_1 + 0x315) = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,3);
    return true;
  }
  fn_00673ce8(param_1,3);
  param_1[0x313] = 0;
  param_1[0x314] = 0;
  *(undefined1 *)(param_1 + 0x315) = 0;
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) == 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  return bVar1;
}



bool fn_00672e14(int *param_1)

{
  bool bVar1;
  
  param_1[0x313] = 0;
  param_1[0x314] = 0;
  *(undefined1 *)(param_1 + 0x315) = 0;
  bVar1 = (*(byte *)(param_1 + 0x13) & 0x10) != 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,6);
  }
  return bVar1;
}



bool fn_00672a6c(int *param_1)

{
  bool bVar1;
  
  param_1[0x313] = 0;
  param_1[0x314] = 0;
  *(undefined1 *)(param_1 + 0x315) = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,4);
    return true;
  }
  fn_00673ce8(param_1,4);
  param_1[0x313] = 0;
  param_1[0x314] = 0;
  *(undefined1 *)(param_1 + 0x315) = 0;
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) == 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  return bVar1;
}



undefined4 fn_00672a1c(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    fn_00673b84(param_1);
    (**(code **)(*param_1 + 0x30))(param_1,2);
  }
  return 1;
}



void fn_006729c8(void)

{
  fn_004dec0c(DAT_008bf504);
  return;
}



void fn_006729b4(void)

{
  fn_004de544(DAT_008bf504,1);
  return;
}



void fn_006729ac(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc48) = param_2;
  return;
}



undefined4 fn_00672734(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *local_a8;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_93;
  undefined4 *local_90;
  uint local_88 [2];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 auStack_68 [72];
  
  uVar5 = 0;
  local_88[0] = 0xe7e3ffff;
  local_88[0] = fn_004db3c8();
  local_88[0] = fn_004db2b4(local_88[0]);
  local_88[0] = fn_004dd0ac(local_88[0]);
  uVar4 = *(undefined4 *)(DAT_00897804 + 8);
  iVar2 = fn_006b64bc(uVar4);
  if (iVar2 == 0) {
    puVar3 = *(undefined4 **)(*(int *)(DAT_00897804 + 8) + 4);
    local_80 = *puVar3;
    local_7c = puVar3[1];
    local_78 = puVar3[2];
    local_74 = puVar3[3];
    local_70 = puVar3[4];
    local_6c = *(undefined2 *)(puVar3 + 5);
  }
  else {
    fn_001f825c();
    uVar4 = fn_006b621c(uVar4);
    fn_006619ec(auStack_68,uVar4);
    fn_0017821c(&local_80,auStack_68,0x16);
    fn_0011ddb8();
  }
  local_a4 = 0;
  local_a8 = &DAT_00856608;
  local_a3 = 0;
  local_90 = &local_80;
  local_94 = 1;
  local_9c = 0;
  local_93 = 1;
  local_a0 = 0x14000;
  local_98 = 0x1400;
  local_a2 = 3;
  local_88[0] = fn_004dbf90(DAT_008bf504,&local_a8);
  if ((local_88[0] & 0x80000000) == 0) {
    local_88[0] = fn_004db520();
    local_88[0] = fn_004ec2ac();
    uVar4 = fn_006d590c(DAT_008bf504,*(undefined4 *)(DAT_00898840 + 0x40),0);
    *(undefined4 *)(param_1 + 0x558) = uVar4;
    uVar1 = (undefined2)*(undefined4 *)(DAT_00898840 + 0x38);
    *(undefined2 *)(param_1 + 0xc38) = uVar1;
    *(undefined2 *)(param_1 + 0xc3a) = uVar1;
    *(undefined1 *)(param_1 + 0xc44) = *(undefined1 *)(DAT_00898840 + 0x44);
    *(undefined4 *)(param_1 + 0xc40) = *(undefined4 *)(param_1 + 0x558);
  }
  else {
    fn_004ec2ac();
    *(undefined4 *)(param_1 + 0xc50) = 8;
    *(undefined4 *)(param_1 + 0xc4c) = 0;
    *(undefined1 *)(param_1 + 0xc54) = 1;
    fn_004db748();
    if (DAT_008bf504 - 0x100000U < 0x3ff00000) {
      fn_004dee3c();
      fn_004def40(DAT_008bf504);
    }
    fn_004dd8ac();
    fn_004ec384();
    uVar5 = 0xffffffff;
  }
  local_88[0] = fn_004deec4(DAT_008bf504);
  if ((local_88[0] & 0x80000000) != 0) {
    fn_0067253c(param_1,(undefined4 *)(param_1 + 0xc4c),local_88);
    fn_004db748();
    if (DAT_008bf504 - 0x100000U < 0x3ff00000) {
      fn_004dee3c();
      fn_004def40(DAT_008bf504);
    }
    fn_004dd8ac();
    fn_004ec384();
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


