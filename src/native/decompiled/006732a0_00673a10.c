#include "006732a0_00673a10.h"



void fn_00673a10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
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
  
  uVar1 = fn_0066eb80(DAT_00898840,2);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_18 = 0;
  local_20 = 0;
  local_1c = 0;
  local_14 = 0;
  local_10 = 0;
  local_2c = param_2;
  fn_0066ed70(uVar1,&local_38);
  return;
}



int fn_006739a0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_0066eb80(DAT_00898840,2);
  return iVar1 + param_2 * 0x50 + 0xc0;
}



undefined4 fn_00673934(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
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
  uint local_10 [2];
  
  uVar3 = fn_0066eb80(DAT_00898840,2);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10[0] = 0;
  fn_0066ed70(uVar3,&local_38);
  iVar4 = fn_0066eb80(DAT_00898840,2);
  bVar5 = *(char *)(iVar4 + 0x344) != '\0';
  bVar1 = 0;
  if (bVar5) {
    bVar1 = *(byte *)(iVar4 + 0x4c);
  }
  if (bVar5 && (bVar1 & 4) != 0) {
    *(undefined4 *)(iVar4 + 0x98) = *(undefined4 *)(iVar4 + 0xac);
    *(undefined4 *)(iVar4 + 0x9c) = *(undefined4 *)(iVar4 + 0xb0);
    *(undefined4 *)(iVar4 + 0xa0) = *(undefined4 *)(iVar4 + 0xb4);
    *(undefined4 *)(iVar4 + 0xa4) = *(undefined4 *)(iVar4 + 0xb8);
    *(undefined4 *)(iVar4 + 0xa8) = *(undefined4 *)(iVar4 + 0xbc);
    local_10[0] = 0xe7e3ffff;
    local_10[0] = fn_0052c728(iVar4 + 0x80,&DAT_0066f2ec);
    if ((local_10[0] & 0x80000000) != 0) {
      iVar2 = fn_0052cab4(local_10);
      *(undefined4 *)(iVar4 + 0x78) = 0;
      *(undefined1 *)(iVar4 + 0x7c) = 0;
      *(int *)(iVar4 + 0x74) = iVar2;
      *(uint *)(iVar4 + 0x78) = (uint)(iVar2 != 0);
      *(undefined1 *)(iVar4 + 0x7c) = 1;
      return 0;
    }
    *(undefined1 *)(iVar4 + 0x344) = 0;
  }
  return 1;
}



undefined4 fn_00673914(void)

{
  int iVar1;
  
  iVar1 = fn_0066eb80(DAT_00898840,2);
  return *(undefined4 *)(iVar1 + 0x340);
}



undefined4 * fn_00673818(int param_1)

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
    fn_002fec40(puVar1 + 1,s_NetworkCommandEndMatchmake_008c6fdb);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_0085a3cc;
  }
  *(undefined4 **)(param_1 + 0x98) = puVar1;
  return puVar1;
}



void fn_0067377c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00859e58;
  uVar1 = param_1[0x18];
  uVar2 = uVar1;
  if ((uint)param_1[0x19] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x19]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x1a] - uVar1) >> 2,0);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



bool fn_0067373c(int *param_1)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) != 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,3);
  }
  return bVar1;
}



undefined4 fn_00673540(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_00673cb8();
  iVar1 = param_1[0x11];
  if (iVar1 == 1) {
    if (param_1[0x12] == 0) {
      iVar1 = fn_001287dc(0x100000,4);
      param_1[0x1c] = iVar1;
      uVar2 = fn_004ec68c(iVar1,0x100000);
      fn_004ec4bc(uVar2);
      uVar2 = fn_004f0e14(0x18);
      fn_004eeaa4(uVar2);
      fn_004eed6c(DAT_008bf4a0);
      fn_004f0860();
      *(undefined1 *)(param_1 + 0x1b) = 0;
      param_1[0x13] = param_1[0x13] | 1;
      (**(code **)(*param_1 + 0x34))(param_1,1);
      goto LAB_00673704;
    }
    if (param_1[0x12] != 1) goto LAB_00673704;
    iVar1 = fn_00673be8(param_1);
  }
  else if (iVar1 == 2) {
    if (param_1[0x12] != 0) goto LAB_00673704;
    iVar1 = fn_00673be8(param_1);
  }
  else {
    if (iVar1 != 3) goto LAB_00673704;
    if (param_1[0x12] == 0) {
      fn_004eed1c();
      fn_004f11b0();
      fn_004f09a4();
      *(undefined1 *)(param_1 + 0x1b) = 0;
      fn_005f43f0(param_1 + 0x1c);
      param_1[0x13] = 0;
      (**(code **)(*param_1 + 0x34))(param_1,1);
      goto LAB_00673704;
    }
    if (param_1[0x12] != 1) goto LAB_00673704;
    iVar1 = fn_00673be8(param_1);
  }
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
LAB_00673704:
  if (((*(byte *)(param_1 + 0x13) & 1) != 0) && ((char)param_1[0x1b] == '\0')) {
    fn_004f121c(DAT_008bf49c,0);
  }
  return 1;
}



undefined4 fn_006734f4(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x1b) = 1;
    fn_00673b84(param_1);
    (**(code **)(*param_1 + 0x30))(param_1,2);
  }
  return 1;
}



bool fn_006734c4(int *param_1)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) == 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  return bVar1;
}



undefined4 *
fn_006733ac(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint local_18 [2];
  
  *param_1 = &DAT_00859db0;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar5 = local_18 + 1;
  if (0x1f < param_5) {
    puVar5 = local_18;
  }
  local_18[0] = param_5;
  local_18[1] = 0x20;
  uVar6 = *puVar5;
  puVar2 = (undefined4 *)fn_00100fc6(uVar6 << 3,0);
  param_1[4] = puVar2;
  uVar1 = DAT_0089a63c;
  for (uVar4 = local_18[0]; DAT_0089a63c = uVar1, uVar4 != 0; uVar4 = uVar4 - 1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = DAT_0089a638;
      puVar2[1] = uVar1;
    }
    puVar2 = puVar2 + 2;
    uVar1 = DAT_0089a63c;
  }
  iVar3 = param_1[4];
  param_1[6] = iVar3 + uVar6 * 8;
  param_1[7] = 0;
  param_1[5] = iVar3 + local_18[0] * 8;
  return param_1;
}



void fn_00673354(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (*(int *)(param_1 + 0x1c) + 1U <
      (uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3)) {
    iVar1 = *(int *)(param_1 + 0x1c) + 1;
  }
  else {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  fn_00114248(&local_10);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c) * 8);
  *puVar2 = local_10;
  puVar2[1] = uStack_c;
  return;
}



void fn_006732a0(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  
  fn_0066e458(DAT_00898840,param_2,0);
  iVar1 = DAT_00898840;
  *(undefined1 *)(DAT_00898840 + 0x44) = param_3;
  *(undefined4 *)(iVar1 + 0x38) = param_4;
  fn_0066de74(param_1,2);
  return;
}


