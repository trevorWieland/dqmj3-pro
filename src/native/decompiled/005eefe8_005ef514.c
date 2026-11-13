#include "005eefe8_005ef514.h"



void fn_005ef514(int param_1)

{
  undefined4 in_s0;
  
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x4c) + 4) = in_s0;
  return;
}



void fn_005ef440(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  while( true ) {
    uVar1 = (*(int *)(iVar4 + 0x24) - *(int *)(iVar4 + 0x20)) / 0xc;
    if ((int)uVar1 <= param_2) break;
    uVar2 = uVar1 - 1;
    if ((-1 < (int)uVar2) && (uVar2 < uVar1)) {
      if (*(int *)(iVar4 + 0x4c) != 0) {
        if (*(int *)(*(int *)(iVar4 + 0x4c) + 0x18) ==
            *(int *)(*(int *)(iVar4 + 0x20) + uVar2 * 0xc + 4)) {
          fn_001a0b78();
        }
      }
      puVar3 = (undefined4 *)(*(int *)(iVar4 + 0x20) + uVar2 * 0xc);
      fn_002feca8(puVar3[2]);
      puVar3[2] = 0;
      fn_002feef8(puVar3[1]);
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + -0xc;
  }
  return;
}



void fn_005ef408(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  fn_005ef218(param_2,param_3);
  fn_005ef178(param_2,param_4);
  iVar4 = *(int *)(param_2 + 4);
  while( true ) {
    uVar1 = (*(int *)(iVar4 + 0x24) - *(int *)(iVar4 + 0x20)) / 0xc;
    if ((int)uVar1 <= param_5) break;
    uVar2 = uVar1 - 1;
    if ((-1 < (int)uVar2) && (uVar2 < uVar1)) {
      if (*(int *)(iVar4 + 0x4c) != 0) {
        if (*(int *)(*(int *)(iVar4 + 0x4c) + 0x18) ==
            *(int *)(*(int *)(iVar4 + 0x20) + uVar2 * 0xc + 4)) {
          fn_001a0b78();
        }
      }
      puVar3 = (undefined4 *)(*(int *)(iVar4 + 0x20) + uVar2 * 0xc);
      fn_002feca8(puVar3[2]);
      puVar3[2] = 0;
      fn_002feef8(puVar3[1]);
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + -0xc;
  }
  return;
}



void fn_005ef390(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_s0;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x40);
  iVar3 = iVar2;
  iVar1 = *(int *)(iVar2 + 4);
  while (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x10) < param_2) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar3 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  iVar1 = 0;
  if ((iVar3 == iVar2) || (iVar1 = *(int *)(iVar3 + 0x10), param_2 < iVar1)) {
    iVar3 = iVar2;
  }
  if (iVar3 != iVar2) {
    iVar1 = *(int *)(iVar3 + 0x14);
  }
  if (iVar3 != iVar2) {
    *(undefined4 *)(iVar1 + 4) = in_s0;
  }
  return;
}



void fn_005ef320(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_s0;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x40);
  iVar1 = *(int *)(iVar3 + 8);
  while (iVar1 != iVar3) {
    *(undefined4 *)(*(int *)(iVar1 + 0x14) + 4) = in_s0;
    iVar2 = *(int *)(iVar1 + 0xc);
    if (*(int *)(iVar1 + 0xc) == 0) {
      for (iVar2 = *(int *)(iVar1 + 4); iVar1 == *(int *)(iVar2 + 0xc); iVar2 = *(int *)(iVar2 + 4))
      {
        iVar1 = iVar2;
      }
      if (*(int *)(iVar1 + 0xc) != iVar2) {
        iVar1 = iVar2;
      }
    }
    else {
      do {
        iVar1 = iVar2;
        iVar2 = *(int *)(iVar1 + 8);
      } while (*(int *)(iVar1 + 8) != 0);
    }
  }
  return;
}



void fn_005ef2f4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_s0;
  
  fn_005ef3f8(*(undefined4 *)(param_1 + 0x10));
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 0x40);
  iVar1 = *(int *)(iVar3 + 8);
  while (iVar1 != iVar3) {
    *(undefined4 *)(*(int *)(iVar1 + 0x14) + 4) = in_s0;
    iVar2 = *(int *)(iVar1 + 0xc);
    if (*(int *)(iVar1 + 0xc) == 0) {
      for (iVar2 = *(int *)(iVar1 + 4); iVar1 == *(int *)(iVar2 + 0xc); iVar2 = *(int *)(iVar2 + 4))
      {
        iVar1 = iVar2;
      }
      if (*(int *)(iVar1 + 0xc) != iVar2) {
        iVar1 = iVar2;
      }
    }
    else {
      do {
        iVar1 = iVar2;
        iVar2 = *(int *)(iVar1 + 8);
      } while (*(int *)(iVar1 + 8) != 0);
    }
  }
  return;
}



void fn_005ef3f8(int param_1)

{
  undefined4 in_s0;
  
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x2c) + 4) = in_s0;
  return;
}



int fn_005ef2d0(int param_1)

{
  return (*(int *)(*(int *)(param_1 + 4) + 0x24) - *(int *)(*(int *)(param_1 + 4) + 0x20)) / 0xc;
}



void fn_005ef218(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = *(int *)(param_1 + 4);
  while( true ) {
    uVar1 = (*(int *)(iVar3 + 0xc) - *(int *)(iVar3 + 8)) / 0xc;
    if ((int)uVar1 <= param_2) break;
    uVar2 = uVar1 - 1;
    if ((-1 < (int)uVar2) && (uVar2 < uVar1)) {
      if (*(int *)(*(int *)(iVar3 + 0x2c) + 0x18) == *(int *)(*(int *)(iVar3 + 8) + uVar2 * 0xc + 4)
         ) {
        fn_001a0b78();
      }
      puVar4 = (undefined4 *)(*(int *)(iVar3 + 8) + uVar2 * 0xc);
      fn_002feca8(puVar4[2]);
      puVar4[2] = 0;
      fn_002feef8(puVar4[1]);
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -0xc;
  }
  return;
}



void fn_005ef178(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar3 = *(int *)(param_1 + 4);
  while (uVar1 = (*(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 0x14)) / 0xc, param_2 < (int)uVar1) {
    uVar4 = uVar1 - 1;
    if ((-1 < (int)uVar4) && (uVar4 < uVar1)) {
      iVar2 = fn_006ec320(iVar3,uVar4);
      if (iVar2 != 0) {
        fn_001a0b78();
      }
      puVar5 = (undefined4 *)(*(int *)(iVar3 + 0x14) + uVar4 * 0xc);
      fn_002feca8(puVar5[2]);
      puVar5[2] = 0;
      fn_002feef8(puVar5[1]);
      puVar5[1] = 0;
      *puVar5 = 0;
    }
    *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + -0xc;
  }
  return;
}



int fn_005ef148(int param_1)

{
  return (*(int *)(*(int *)(param_1 + 4) + 0xc) - *(int *)(*(int *)(param_1 + 4) + 8)) / 0xc;
}



int fn_005ef124(int param_1)

{
  return (*(int *)(*(int *)(param_1 + 4) + 0x18) - *(int *)(*(int *)(param_1 + 4) + 0x14)) / 0xc;
}



void fn_005ef0b8(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (param_2 < (uint)((*(int *)(iVar2 + 0x24) - *(int *)(iVar2 + 0x20)) / 0xc)) {
    fn_001a0b78(*(undefined4 *)(iVar2 + 0x4c));
    puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x20) + param_2 * 0xc);
    fn_00196910(*(undefined4 *)(iVar2 + 0x4c),*puVar1,puVar1[1],0);
    *(undefined4 *)(*(int *)(iVar2 + 0x4c) + 4) = 0;
  }
  return;
}



int fn_005ef050(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = *(int *)(param_1 + 4);
  local_14 = 0;
  local_10 = 0;
  local_18 = *param_2;
  fn_005ef58c(iVar1,&local_18);
  fn_007961ec(iVar1 + 0x20,&local_18);
  return (*(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x20)) / 0xc + -1;
}



int fn_005eefe8(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = *(int *)(param_1 + 4);
  local_14 = 0;
  local_10 = 0;
  local_18 = *param_2;
  fn_005ef58c(iVar1,&local_18);
  fn_007961ec(iVar1 + 8,&local_18);
  return (*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8)) / 0xc + -1;
}


