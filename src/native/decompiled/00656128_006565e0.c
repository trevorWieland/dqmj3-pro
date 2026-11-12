#include "00656128_006565e0.h"



int fn_006565e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  fn_006f94f4(param_1 + 0xc,param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  return param_1;
}



void fn_006565b8(undefined4 *param_1)

{
  *param_1 = &DAT_00859628;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  return;
}



undefined4 * fn_00656538(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = &DAT_00859628;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  fn_006f94f4(param_1 + 3,param_2 + 0xc);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0xc);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0xc);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0xc);
  *(undefined1 *)((int)param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  param_1[0xc] = uVar6;
  return param_1;
}



void fn_006564f4(int param_1,int param_2,undefined1 param_3,undefined1 param_4,undefined1 param_5)

{
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 4);
  fn_0019bc50(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x12) = param_3;
  *(undefined1 *)(param_1 + 0x13) = param_4;
  *(undefined1 *)(param_1 + 0x14) = param_5;
  return;
}



void fn_006564d8(int param_1,undefined2 param_2)

{
  *(undefined1 *)(param_1 + 4) = 4;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 0xc) = param_2;
  return;
}



void fn_006564c0(int param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 5) = param_3;
  *(undefined1 *)(param_1 + 4) = 3;
  *(undefined1 *)(param_1 + 6) = param_4;
  *(undefined2 *)(param_1 + 0xc) = param_2;
  return;
}



void fn_006564a8(int param_1,undefined2 param_2,undefined1 param_3,undefined2 param_4)

{
  *(undefined1 *)(param_1 + 5) = param_3;
  *(undefined1 *)(param_1 + 4) = 2;
  *(undefined2 *)(param_1 + 0xc) = param_2;
  *(undefined2 *)(param_1 + 0xe) = param_4;
  return;
}



void fn_00656490(int param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 5) = param_3;
  *(undefined1 *)(param_1 + 4) = 5;
  *(undefined1 *)(param_1 + 6) = param_4;
  *(undefined2 *)(param_1 + 0xc) = param_2;
  return;
}



void fn_0065646c(int param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 4);
  fn_0019bc50(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x14) = param_3;
  return;
}



void fn_00656418(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = param_1 + *(char *)(param_1 + 0x16) * 0xe;
  *(undefined4 *)(iVar1 + 0x18) = *param_2;
  *(undefined4 *)(iVar1 + 0x1c) = param_2[1];
  *(undefined4 *)(iVar1 + 0x20) = param_2[2];
  *(undefined2 *)(iVar1 + 0x24) = *(undefined2 *)(param_2 + 3);
  if (*(byte *)(param_1 + 0x16) < 2) {
    *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) + 1;
  }
  return;
}



undefined4 * fn_006563c4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00859618;
  uVar1 = param_1[0x11];
  uVar2 = uVar1;
  if ((uint)param_1[0x12] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x12]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x13] - uVar1) >> 2,0);
  return param_1;
}



undefined4 * fn_006562a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint local_20;
  uint local_1c [2];
  
  puVar8 = param_1 + 0x11;
  *param_1 = &DAT_00859618;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_20 = 0x20;
  if ((uint)((int)(param_1[0x13] - param_1[0x11]) >> 2) < 0x20) {
    uVar9 = (int)(param_1[0x12] - param_1[0x11]) >> 2;
    local_1c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_1c[0] < uVar9 + 0x20) {
      local_1c[0] = uVar9 + 0x20;
    }
    puVar5 = local_1c;
    if (local_1c[0] < 0x21) {
      puVar5 = &local_20;
    }
    uVar9 = *puVar5;
    puVar1 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
    puVar7 = (undefined4 *)param_1[0x12];
    puVar2 = puVar1;
    for (puVar6 = (undefined4 *)*puVar8; puVar6 != puVar7; puVar6 = puVar6 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar6;
      }
      puVar2 = puVar2 + 1;
    }
    uVar3 = *puVar8;
    uVar4 = uVar3;
    if ((uint)param_1[0x12] < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != param_1[0x12]);
    }
    fn_001008c4(uVar3,(int)(param_1[0x13] - uVar3) >> 2,0);
    uVar4 = *puVar8;
    param_1[0x11] = puVar1;
    param_1[0x12] = (param_1[0x12] - uVar4 & 0xfffffffc) + (int)puVar1;
    param_1[0x13] = puVar1 + uVar9;
  }
  fn_00656128(param_1);
  return param_1;
}



void fn_0065628c(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  return;
}



void fn_00656270(int param_1)

{
  if (0 < *(int *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}



void fn_00656128(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  fn_001ad020(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  fn_0012a2d8(param_1 + 0x70);
  fn_0012a2d8(param_1 + 0x78);
  fn_0012a2d8(param_1 + 0x80);
  fn_0012a2d8(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  uVar2 = *(uint *)(param_1 + 0x48);
  uVar3 = *(uint *)(param_1 + 0x44);
  if (uVar3 != uVar2) {
    uVar1 = uVar3;
    if (uVar2 <= uVar3) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar2);
    }
    *(uint *)(param_1 + 0x48) = uVar2 - (uVar2 - uVar3 & 0xfffffffc);
  }
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  fn_0012a2d8(param_1 + 0x70);
  fn_0012a2d8(param_1 + 0x78);
  fn_0012a2d8(param_1 + 0x80);
  fn_0012a2d8(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  fn_00301f50(param_1 + 0xc0,0x110);
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  return;
}


