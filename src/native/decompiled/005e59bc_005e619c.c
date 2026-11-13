#include "005e59bc_005e619c.h"



void fn_005e619c(int param_1)

{
  undefined4 local_10;
  
  local_10 = 0;
  fn_0012bc84(0x203,&local_10);
  fn_005e1b90(*(int *)(param_1 + 4) + 8,local_10);
  fn_0010fa70(local_10);
  return;
}



void fn_005e614c(int param_1,undefined4 *param_2,undefined4 param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_2;
  *puVar1 = *(byte *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 0x12) | 0x80000000;
  puVar1[1] = 0xf02c0;
  fn_001ad578(puVar1 + 2,param_3,0xbf02c1);
  *param_2 = puVar1 + 0x10;
  return;
}



void fn_005e6114(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x44) != 0) {
    fn_005e1e4c(iVar1 + 8);
  }
  if (*(int *)(iVar1 + 0x48) == 0) {
    return;
  }
  fn_005e2030(iVar1 + 8,*(int *)(iVar1 + 0x48),*(undefined4 *)(iVar1 + 0x4c));
  return;
}



void fn_005e60c8(int param_1,undefined4 *param_2,undefined4 param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_2;
  *puVar1 = *(byte *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 2) | 0x80000000;
  puVar1[1] = 0xf02c0;
  fn_001ad578(puVar1 + 2,param_3,0xbf02c1);
  *param_2 = puVar1 + 0x10;
  return;
}



void fn_005e60a8(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(iVar1 + 0x68) = *param_2;
  *(undefined4 *)(iVar1 + 0x6c) = uVar2;
  *(undefined4 *)(iVar1 + 0x70) = uVar3;
  return;
}



void fn_005e6088(int param_1)

{
  int iVar1;
  
  iVar1 = fn_005e19c8(*(int *)(param_1 + 4) + 8);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}



void fn_005e606c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined2 *)(iVar1 + 0x14) = 0xffff;
  *(undefined2 *)(iVar1 + 0x16) = 0xffff;
  return;
}



undefined1 * fn_005e5fbc(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  undefined1 auStack_30 [36];
  
  uVar4 = *(undefined4 *)(param_1 + 4);
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*param_2)(param_2);
    VectorSignedToFloat(*puVar1,(byte)(in_fpscr >> 0x16) & 3);
    iVar2 = (**(code **)*param_2)(param_2);
    VectorSignedToFloat(*(undefined4 *)(iVar2 + 4),(byte)(in_fpscr >> 0x16) & 3);
  }
  uVar3 = fn_005eff70(auStack_30);
  fn_00128150(uVar4,param_2,uVar3);
  return auStack_30;
}



void fn_005e5f50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  puVar1 = (uint *)*param_4;
  *puVar1 = *(byte *)(iVar2 + 0x5a) | 0x80000000;
  puVar1[1] = 0xf02c0;
  fn_001ad5b4(puVar1 + 2,param_2,0xff02c1);
  *param_4 = puVar1 + 0x14;
  puVar1[0x14] = *(byte *)(iVar2 + 0x62) | 0x80000000;
  puVar1[0x15] = 0xf02c0;
  fn_001ad578(puVar1 + 0x16,param_3,0xbf02c1);
  *param_4 = puVar1 + 0x24;
  return;
}



void fn_005e5a40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  fn_00117984();
  iVar1 = fn_0010fa20();
  iVar2 = 0;
  if (*(int *)(param_1 + 0x48) == 0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar3 = fn_006eb278(iVar1);
      fn_005e2a6c(uVar3,0,*(undefined4 *)(param_1 + 0x44));
      iVar2 = *(int *)(param_1 + 0x44);
    }
  }
  else {
    uVar3 = fn_00176d68(*(int *)(param_1 + 0x48));
    uVar4 = fn_006eb278(iVar1);
    fn_005e2a6c(uVar4,0,uVar3);
    iVar2 = fn_00176d68(*(undefined4 *)(param_1 + 0x48));
  }
  *(int *)(param_1 + 0x44) = iVar2;
  iVar5 = fn_0010d998();
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
      fn_002404f8(param_1,iVar1);
    }
    if ((*(int *)(param_1 + 0x54) != 0) && (iVar5 = fn_006ebdd4(), iVar5 != 0)) {
      fn_005e9cc4(*(undefined4 *)(param_1 + 0x54),iVar1);
      fn_00117984();
      fn_00117674();
    }
    if ((*(int *)(param_1 + 100) != 0) && (iVar5 = fn_00304b0c(), iVar5 != 0)) {
      fn_003048ec(*(undefined4 *)(param_1 + 100),iVar1,param_1 + 0x30);
    }
  }
  uVar3 = fn_00176d68(*(undefined4 *)(param_1 + 0x48));
  uVar4 = fn_006eb278(iVar1);
  fn_005e2a6c(uVar4,0,uVar3);
  fn_005e581c(iVar1);
  fn_006eb278(iVar1);
  fn_005e2a9c();
  fn_005e5e5c(iVar1,0);
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar3 = fn_00176d68();
    fn_005e60bc(iVar1,uVar3);
  }
  fn_005e5884(iVar1);
  fn_005e5ec0(iVar1,iVar2 + 0x1a8,iVar2 + 0x148);
  *(undefined1 *)(param_1 + 0x74) = 0;
  fn_005e1844(*(undefined4 *)(param_1 + 0x20));
  fn_005e692c(&local_38,iVar1);
  *(undefined4 *)(param_1 + 0x30) = local_38;
  *(undefined4 *)(param_1 + 0x34) = uStack_34;
  *(undefined4 *)(param_1 + 0x38) = uStack_30;
  *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x40) = uStack_28;
  uVar3 = fn_006eb278(iVar1);
  fn_005e1b70(uVar3,param_1 + 0x30);
  fn_005e3b8c(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x44));
  fn_005e3abc(*(undefined4 *)(param_1 + 0x2c));
  uVar3 = fn_006ebf78(*(undefined4 *)(param_1 + 0x24));
  fn_005e2e64(*(undefined4 *)(param_1 + 0x2c),uVar3,0);
  uVar3 = fn_006ebf78(*(undefined4 *)(param_1 + 0x24));
  fn_005e335c(*(undefined4 *)(param_1 + 0x2c),uVar3);
  iVar2 = fn_001f828c();
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    puVar8 = *(undefined4 **)(param_1 + 0x6c);
    for (puVar7 = *(undefined4 **)(param_1 + 0x68); puVar7 != puVar8; puVar7 = puVar7 + 1) {
      fn_005e35b8(*puVar7,uVar3);
    }
  }
  fn_005e3af4(*(undefined4 *)(param_1 + 0x2c));
  if ((*(int *)(param_1 + 100) == 0) ||
     (uVar9 = fn_00304c94(), uVar6 = (uint)((ulonglong)uVar9 >> 0x20), (int)uVar9 == 0)) {
    fn_0024073c(param_1,iVar1);
    uVar6 = extraout_r1;
  }
  if ((*(int *)(param_1 + 0x58) != 0) && (*(char *)(*(int *)(param_1 + 0x58) + 0x44) != '\0')) {
    fn_005f02f8(*(undefined4 *)(param_1 + 0x58),iVar1,param_1 + 0x30);
    uVar6 = extraout_r1_00;
  }
  iVar2 = *(int *)(param_1 + 0x60);
  if (iVar2 != 0) {
    uVar6 = (uint)*(byte *)(iVar2 + 0x40);
  }
  if (iVar2 != 0 && uVar6 != 0) {
    fn_005e2c44(iVar2,iVar1,param_1 + 0x30);
  }
  if ((*(int *)(param_1 + 0x54) != 0) && (iVar2 = fn_006ebdd4(), iVar2 != 0)) {
    fn_005e9d98(*(undefined4 *)(param_1 + 0x54),iVar1,param_1 + 0x30);
  }
  if ((*(int *)(param_1 + 100) != 0) && (iVar2 = fn_00304cb4(), iVar2 != 0)) {
    fn_00304b18(*(undefined4 *)(param_1 + 100),iVar1,param_1 + 0x30);
  }
  fn_005e68a0(iVar1,param_1 + 0x30);
  if (*(char *)(param_1 + 0x74) == '\0') {
    uVar3 = fn_006eb2a8(iVar1);
    fn_005e17f8(*(undefined4 *)(param_1 + 0x20),uVar3);
  }
  fn_00240324(param_1);
  if (*(int *)(param_1 + 0x48) == 0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar3 = fn_006eb278(iVar1);
      fn_005e2a6c(uVar3,0,*(undefined4 *)(param_1 + 0x44));
    }
  }
  else {
    uVar3 = fn_00176d68(*(int *)(param_1 + 0x48));
    uVar4 = fn_006eb278(iVar1);
    fn_005e2a6c(uVar4,0,uVar3);
    fn_00176d68(*(undefined4 *)(param_1 + 0x48));
  }
  fn_006eb278(iVar1);
  fn_005e2a9c();
  iVar2 = *(int *)(iVar1 + 4);
  *(undefined4 *)(iVar2 + 0x50) = 0;
  iVar1 = fn_005e2a58(iVar2 + 8);
  if (*(int *)(iVar2 + 0x44) != iVar1) {
    *(int *)(iVar2 + 0x44) = iVar1;
    fn_005e2a9c(iVar2 + 8);
  }
  iVar1 = fn_005e18a4(iVar2 + 8,0);
  uVar3 = fn_005e18bc(iVar2 + 8,0);
  if (*(int *)(iVar2 + 0x48) != iVar1) {
    *(int *)(iVar2 + 0x48) = iVar1;
    *(undefined4 *)(iVar2 + 0x4c) = uVar3;
  }
  return;
}



void fn_005e5ec0(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  uint *puVar1;
  int iVar2;
  uint *local_20;
  
  iVar2 = *(int *)(param_1 + 4);
  local_20 = param_4;
  fn_0012bc84(0x208,&local_20);
  fn_00146578();
  puVar1 = local_20;
  *local_20 = *(byte *)(iVar2 + 0x5a) | 0x80000000;
  local_20[1] = 0xf02c0;
  fn_001ad5b4(local_20 + 2,param_2,0xff02c1);
  local_20 = puVar1 + 0x14;
  *local_20 = *(byte *)(iVar2 + 0x62) | 0x80000000;
  puVar1[0x15] = 0xf02c0;
  fn_001ad578(puVar1 + 0x16,param_3,0xbf02c1);
  local_20 = puVar1 + 0x24;
  fn_001467e4((int)local_20 - (int)puVar1 & 0xfffffffc);
  return;
}



void fn_005e5e5c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar3 + 0x50) = param_2;
  iVar1 = fn_005e2a58(iVar3 + 8);
  if (*(int *)(iVar3 + 0x44) != iVar1) {
    *(int *)(iVar3 + 0x44) = iVar1;
    fn_005e2a9c(iVar3 + 8);
  }
  iVar1 = fn_005e18a4(iVar3 + 8,param_2);
  uVar2 = fn_005e18bc(iVar3 + 8,param_2);
  if (*(int *)(iVar3 + 0x48) != iVar1) {
    *(int *)(iVar3 + 0x48) = iVar1;
    *(undefined4 *)(iVar3 + 0x4c) = uVar2;
  }
  return;
}



void fn_005e59bc(int param_1,undefined4 *param_2,undefined4 param_3,byte *param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar2 = fn_005e19c8(iVar5 + 8);
  uVar3 = fn_006e9fcc(iVar5 + 8);
  if ((*param_4 & 0x10) == 0) {
    puVar4 = (undefined4 *)*param_2;
    *puVar4 = 0;
    puVar4[1] = 0x100e0;
    *param_2 = puVar4 + 2;
    return;
  }
  uVar1 = fn_006dd8f8(param_3,param_2,param_4,uVar3,*(undefined2 *)(iVar2 + 2));
  *(undefined2 *)(iVar2 + 2) = uVar1;
  return;
}


