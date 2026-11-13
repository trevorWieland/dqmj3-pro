#include "0010d3dc_0010da54.h"



void fn_0010da54(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  fn_00118e70(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0xc),1);
  iVar2 = *(int *)(param_1 + 8);
  uVar1 = *(uint *)(iVar2 + 4);
  uVar4 = *(uint *)(iVar2 + 8);
  if (uVar1 != uVar4) {
    uVar3 = uVar1;
    if (uVar4 <= uVar1) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar4);
    }
    *(uint *)(iVar2 + 8) = uVar4 - (uVar4 - uVar1 & 0xfffffffc);
  }
  if (*(char *)(*(int *)(param_1 + 0x54) + 0x48) == '\0') {
    fn_0012cf70(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x18) = 1;
    *(undefined1 *)(param_1 + 0x4f) = 0;
  }
  do {
    fn_00119854(param_1);
    fn_0012d6a4(1000000,0);
  } while (*(int *)(param_1 + 0x18) != 0);
  return;
}



void fn_0010d9d4(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  DAT_008bf614 = 0x1f123bb5;
  DAT_008bf610 = 0x159a55e5;
  uVar1 = 0x75bcd15;
  do {
    DAT_008bf60c = DAT_008bf610;
    DAT_008bf610 = DAT_008bf614;
    DAT_008bf614 = param_1;
    uVar1 = uVar1 ^ uVar1 << 0xb;
    iVar2 = iVar2 + 1;
    param_1 = uVar1 ^ uVar1 >> 8 ^ DAT_008bf614 ^ DAT_008bf614 >> 0x13;
    uVar1 = DAT_008bf60c;
  } while (iVar2 < 0x14);
  DAT_008bf618 = param_1;
  return;
}



bool fn_0010d9a8(void)

{
  return DAT_00893198 < 2;
}



int fn_0010d998(void)

{
  return (int)DAT_00893195;
}



void fn_0010d90c(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x18) == 0 && *(int *)(iVar1 + 0x1c) == 0) {
    if (*(int *)(iVar1 + 0x24) != 0 || *(int *)(iVar1 + 0x20) != 0) {
      uVar2 = fn_0011a534();
      *(undefined8 *)(*(int *)(param_1 + 4) + 0x18) = uVar2;
    }
  }
  return;
}



void fn_0010d89c(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  fn_00118a68(iVar1 + 100);
  fn_00118a68(iVar1 + 0x74);
  fn_0010d4e0(*(undefined4 *)(iVar1 + 0x90),(int)*(char *)(iVar1 + 0x94));
  *(undefined1 *)(iVar1 + 0x94) = 0;
  fn_0010d8dc(iVar1 + 0x74);
  uVar2 = fn_0011a534(*(undefined4 *)(iVar1 + 0x68));
  *(undefined8 *)(*(int *)(iVar1 + 0x68) + 0x18) = uVar2;
  iVar1 = *(int *)(iVar1 + 0x68);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  return;
}



void fn_0010d8dc(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = fn_0011a534(*(undefined4 *)(param_1 + 4));
  *(undefined8 *)(*(int *)(param_1 + 4) + 0x18) = uVar2;
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  return;
}



void fn_0010d83c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x1c) != 0 || *(int *)(iVar1 + 0x18) != 0) {
    uVar6 = fn_0011a534();
    uVar3 = *(uint *)(iVar1 + 0x20);
    uVar4 = *(uint *)(*(int *)(param_1 + 4) + 0x18);
    iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x1c);
    uVar2 = (uint)uVar6 - uVar4;
    *(uint *)(iVar1 + 0x20) = uVar2 + uVar3;
    *(uint *)(iVar1 + 0x24) =
         ((int)((ulonglong)uVar6 >> 0x20) - (iVar5 + (uint)((uint)uVar6 < uVar4))) +
         *(int *)(iVar1 + 0x24) + (uint)CARRY4(uVar2,uVar3);
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  return;
}



undefined4 *
fn_0010d788(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &DAT_00858f8c;
  param_1[1] = 0;
  if (param_4 < 4) {
    param_4 = 4;
  }
  iVar1 = fn_00145b00(0x30,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_00118688(iVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  iVar1 = param_1[1];
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_001188b0(iVar1);
      fn_002feef8();
    }
    param_1[1] = iVar2;
  }
  return param_1;
}



int fn_0010d624(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = fn_00127ab0();
  iVar2 = fn_00116f6c(iVar1 + 0x48);
  *(undefined4 *)(iVar2 + 0x610) = 0;
  *(undefined4 *)(iVar2 + 0x614) = 0;
  iVar7 = iVar2 + -0x48;
  *(undefined4 *)(iVar2 + 0x618) = 0;
  uVar3 = fn_001287d4(param_4,&DAT_00812c8c);
  *(undefined4 *)(iVar2 + 0x61c) = uVar3;
  *(undefined4 *)(iVar2 + 0x620) = param_4;
  *(undefined4 *)(iVar2 + 0x624) = uVar3;
  *(undefined1 *)(iVar2 + 0x628) = 0;
  *(undefined4 *)(iVar2 + 0x629) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x630) = 0;
  *(undefined4 *)(iVar2 + 0x634) = 0;
  *(undefined4 *)(iVar2 + 0x63c) = 1;
  *(undefined4 *)(iVar2 + 0x638) = 0;
  *(undefined4 *)(iVar2 + 0x640) = 1;
  fn_00118518(iVar7,iVar7,param_3);
  uVar3 = fn_001183b8(iVar7,param_2);
  *(undefined4 *)(iVar2 + 0x610) = uVar3;
  uVar3 = fn_001735bc(param_4);
  uVar3 = fn_001287dc(uVar3,4);
  uVar4 = fn_00116f44(param_4,0);
  uVar5 = fn_001287dc(uVar4,0x10);
  uVar3 = fn_00173580(uVar3,uVar5,uVar4,param_4,0);
  *(undefined4 *)(iVar2 + 0x614) = uVar3;
  iVar6 = fn_00145b00(0x48,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar6 != 0) {
    iVar1 = fn_0011b76c();
  }
  iVar6 = *(int *)(iVar2 + 0x618);
  if (iVar6 != iVar1) {
    if (iVar6 != 0) {
      fn_00152880(iVar6);
      fn_002feef8();
    }
    *(int *)(iVar2 + 0x618) = iVar1;
  }
  *(undefined4 *)(*(int *)(iVar2 + 0x618) + 0x28) = *(undefined4 *)(iVar2 + 0x614);
  *(int *)(*(int *)(iVar2 + 0x618) + 0x24) = iVar7;
  iVar1 = *(int *)(iVar2 + 0x618);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  fn_00158f6c(*(undefined4 *)(iVar2 + 0x61c),*(undefined4 *)(iVar2 + 0x620));
  *(undefined4 *)(iVar2 + 0x624) = *(undefined4 *)(iVar2 + 0x61c);
  return iVar7;
}



void fn_0010d590(void)

{
  fn_0012bc84(0x202,DAT_008bf77c + 0x10);
  fn_0011b34c();
  return;
}



void fn_0010d57c(void)

{
  DAT_0089a4cd = 0;
  return;
}



int fn_0010d56c(void)

{
  return (int)DAT_0089a4cd;
}



void fn_0010d4e0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_0011a618(0x402);
  while ((DAT_008bf78c <= iVar1 && (iVar1 < DAT_008bf78c + param_1 + -1))) {
    fn_0011b698(0x402);
    iVar1 = fn_0011a618(0x402);
  }
  if (0 < param_1) {
    if (param_2 != 0) {
      fn_0011b464(0x402);
    }
    fn_0011b698(0x402);
    iVar1 = fn_0011a618(0x402);
  }
  DAT_008bf78c = iVar1;
  return;
}



undefined4 * fn_0010d3dc(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  *param_1 = &DAT_00858f10;
  param_1[1] = 0;
  puVar1 = (undefined4 *)fn_00145b00(0x388,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    iVar5 = 0;
  }
  else {
    *puVar1 = 0;
    iVar5 = fn_00116824(puVar1 + 1);
    iVar5 = fn_00116244(iVar5 + 0x118);
    iVar2 = fn_00116e60(iVar5 + 0x220);
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    iVar5 = iVar2 + -0x33c;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    *(undefined4 *)(iVar2 + 0x40) = 0;
    *(undefined4 *)(iVar2 + 0x44) = 0;
    *(undefined1 *)(iVar2 + 0x48) = 0;
  }
  iVar2 = param_1[1];
  if (iVar2 != iVar5) {
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x360);
      *(int *)(iVar2 + 0x364) = iVar3;
      piVar4 = *(int **)(iVar2 + 0x35c);
      if (piVar4 != (int *)0x0) {
        iVar3 = *(int *)(iVar2 + 0x360);
      }
      if (piVar4 != (int *)0x0 && iVar3 != 0) {
        (**(code **)(*piVar4 + 0xc))(piVar4);
      }
      iVar2 = fn_00116ea0(iVar2 + 0x33c);
      iVar2 = fn_00116284(iVar2 + -0x220);
      iVar2 = fn_00116988(iVar2 + -0x118);
      fn_002feef8(iVar2 + -4);
    }
    param_1[1] = iVar5;
  }
  return param_1;
}


