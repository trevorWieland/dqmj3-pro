#include "00123f88_00124664a.h"



void fn_001241b4(undefined2 *param_1)

{
  *param_1 = 0x28;
  param_1[1] = 0x24;
  param_1[2] = 0x28;
  param_1[3] = 0x91;
  param_1[4] = 0x91;
  param_1[5] = 0x91;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0x8d;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0x3fc00000;
  *(undefined4 *)(param_1 + 10) = 0x430d0000;
  return;
}



bool fn_00124130(int *param_1,undefined2 *param_2)

{
  int iVar1;
  int local_18 [4];
  
  local_18[2] = 0xffffffff;
  local_18[3] = 0xffffffff;
  local_18[1] = 0xffffffff;
  fn_0013f20c(*(undefined4 *)(*param_1 + 4),param_2,1,local_18,local_18 + 2,local_18 + 1);
  iVar1 = fn_00125198();
  if ((iVar1 != 0) && (iVar1 = fn_00125d3c(), iVar1 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return 0 < local_18[0];
}



undefined4 fn_00123f88(int param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_30 [3];
  short local_24;
  short local_22;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  int local_14;
  
  local_20 = 0xffffffff;
  uStack_1c = 0xffffffff;
  local_18 = 0xffffffff;
  iVar1 = fn_0013cd64();
  if (iVar1 == 0) {
    iVar1 = fn_001247b0(param_1 + 0x58,local_30);
    uVar2 = 0;
    if (iVar1 != 0) {
      *param_2 = local_24;
      param_2[1] = local_22;
      *(uint *)(param_2 + 4) = local_30[0];
      *(uint *)(param_2 + 6) =
           (local_30[0] ^ *(uint *)(param_1 + 0x54)) & ~*(uint *)(param_1 + 0x54);
      *(uint *)(param_2 + 8) = *(uint *)(param_1 + 0x54) & ~local_30[0];
      *(undefined1 *)((int)param_2 + 0x15) = 0;
      *(undefined1 *)(param_2 + 10) = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      *(uint *)(param_1 + 0x54) = local_30[0];
      return 1;
    }
  }
  else {
    fn_0013cb9c(param_1 + 8);
    fn_0013cb9c(param_1 + 0x2c);
    uVar2 = fn_0014dc64();
    fn_0013f074(uVar2,param_2,1,&local_14,&local_20,&local_18);
    if (*(char *)(param_1 + 0x98) != '\0') {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 4);
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
    uVar3 = *(uint *)(param_2 + 4) & 0xffffdfff;
    *(uint *)(param_2 + 4) = uVar3;
    *(uint *)(param_2 + 6) = (uVar3 ^ *(uint *)(param_1 + 0x54)) & ~*(uint *)(param_1 + 0x54);
    *(uint *)(param_2 + 8) = *(uint *)(param_1 + 0x54) & ~uVar3;
    iVar1 = fn_00125198();
    if ((iVar1 != 0) && (iVar1 = fn_00125d3c(), iVar1 == 0)) {
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      *param_2 = 0;
      param_2[1] = 0;
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 4);
    iVar1 = fn_0013cc7c();
    if (iVar1 == 0) {
      fn_001508a4(param_2);
    }
    fn_0013cbe8(param_1 + 8,param_2 + 2,param_2 + 3,(int)param_2[2],(int)param_2[3]);
    fn_0013cbe8(param_1 + 0x2c,param_2,param_2 + 1,(int)*param_2,(int)param_2[1]);
    if (local_14 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


