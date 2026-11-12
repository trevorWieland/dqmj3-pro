#include "00655554_00655bfcb.h"



void fn_00655bfc(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + ((int)param_2 >> 6) * 8;
  uVar1 = *(uint *)(param_1 + 0x150);
  uVar2 = *(uint *)(param_1 + 0x154);
  uVar3 = fn_00301bb0(1,0,param_2 & 0x3f);
  *(uint *)(param_1 + 0x150) = (uint)uVar3 | uVar1;
  *(uint *)(param_1 + 0x154) = (uint)((ulonglong)uVar3 >> 0x20) | uVar2;
  return;
}



undefined4 fn_00655b28(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_001639e4();
  if (iVar1 != 0x21) {
    if (iVar1 < 0x22) {
      if (iVar1 != 4) {
        if (iVar1 == 0x12) {
          uVar2 = fn_00691af0(param_1,1);
          return uVar2;
        }
        if (iVar1 == 0x13) {
          uVar2 = fn_00691af0(param_1,0);
          return uVar2;
        }
        if (iVar1 != 0x16) {
          return 1;
        }
      }
    }
    else if (iVar1 != 0x26 && iVar1 != 0x2a) {
      if (iVar1 == 0x3e) {
        uVar2 = fn_00691af0(param_1,1);
        uVar3 = fn_00691af0(param_1,0);
        uVar2 = fn_0063a510(uVar3,uVar2,param_2);
        return uVar2;
      }
      return 1;
    }
  }
  uVar2 = fn_00691af0(param_1,3);
  uVar3 = fn_00691af0(param_1,2);
  uVar2 = fn_0063a510(uVar3,uVar2,param_2);
  return uVar2;
}



void fn_00655acc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined *local_1f0;
  undefined1 auStack_1ec [472];
  
  local_1f0 = &DAT_00859598;
  iVar1 = fn_006562a0(auStack_1ec);
  *(undefined **)(iVar1 + -4) = &DAT_008595a8;
  fn_00633824(&local_1f0,param_1,param_2,param_3);
  local_1f0 = &DAT_00859598;
  fn_006563c4(auStack_1ec);
  return;
}



void fn_00655a88(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[5] = 1;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}



void fn_00655a48(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[5] = param_2;
  param_1[8] = param_3;
  *(undefined2 *)(param_1 + 6) = param_4;
  return;
}


