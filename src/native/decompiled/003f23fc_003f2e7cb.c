#include "003f23fc_003f2e7cb.h"



bool fn_003f2e7c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_28 [24];
  
  uVar1 = (**(code **)(*param_1 + 0xc))(param_1);
  (**(code **)(*param_1 + 0x10))(param_1,uVar1);
  if (param_1[5] == 0) {
    iVar2 = (**(code **)(*param_2 + 0x24))(param_2,local_28);
    if (iVar2 != 0) {
      param_1[5] = 1;
    }
    iVar2 = fn_006a80b8(param_2,local_28);
  }
  else {
    if (param_1[5] != 1) {
      return false;
    }
    iVar2 = (**(code **)(*param_2 + 0x2c))(param_2,local_28,1);
  }
  return iVar2 != 0;
}



undefined4 fn_003f2e60(int param_1)

{
  fn_0034329c();
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}



undefined4 fn_003f2d04(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 == 0) || (iVar1 = fn_006bb52c(param_2), *param_1 != iVar1)) {
    return 0;
  }
  iVar3 = *(int *)(param_2 + 0x100);
  iVar1 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = fn_006bb544(param_2,iVar1);
      if ((iVar2 != 0) && ((int)*(char *)(iVar2 + 0x16c) == (int)(short)param_1[1])) {
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return 0;
}



void fn_003f2b10(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = fn_006bb52c(*(undefined4 *)(param_2 + 0x170));
  *param_1 = uVar1;
  *(short *)(param_1 + 1) = (short)*(char *)(param_2 + 0x16c);
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(param_2 + 0x16a);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 0x168);
  *(undefined1 *)((int)param_1 + 10) = *(undefined1 *)(param_2 + 0x36c);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  param_1[3] = *(undefined4 *)(param_2 + 0x20);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  return;
}



void fn_003f2aa4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = &DAT_00834ce0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0xffffffff;
  puVar1[0x2f] = 0;
  return;
}



void fn_003f2900(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar4 = 0;
  iVar1 = fn_006e8118(*(undefined4 *)(param_1 + 0xb0));
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)fn_006e810c(*(undefined4 *)(param_1 + 0xb0),iVar4);
      local_68[0] = *puVar2;
      local_54 = 0;
      local_60 = 0;
      local_40 = 0;
      local_5c = 0;
      local_58 = 0;
      local_50 = 0;
      local_4c = 0;
      local_2c = 0;
      local_48 = 0;
      local_44 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_28 = 0;
      local_24 = 0;
      fn_0017d96c(&local_60,0x40,0x3f,DAT_00891bd8);
      uVar3 = fn_0022f584(&local_60,0);
      fn_0031b78c(param_1,iVar4,1,uVar3);
      iVar1 = fn_002e2dc8(*(undefined4 *)(DAT_00897804 + 0x20),*puVar2);
      if ((iVar1 == 0) || (iVar1 = fn_006cbb48(param_1,*puVar2), iVar1 == 0)) {
        local_68[0] = DAT_00891bec;
        fn_002c37e0(param_1,iVar4,local_68);
      }
      else {
        local_68[0] = DAT_00891be4;
        fn_002c37e0(param_1,iVar4,local_68);
      }
      iVar1 = fn_002e2dc8(*(undefined4 *)(DAT_00897804 + 0x20),*puVar2);
      if (iVar1 == 0) {
        fn_002c32c4(param_1,iVar4,0);
      }
      else {
        uVar3 = fn_00290488(*puVar2);
        fn_002c32c4(param_1,iVar4,uVar3);
      }
      iVar4 = iVar4 + 1;
      iVar1 = fn_006e8118(*(undefined4 *)(param_1 + 0xb0));
    } while (iVar4 < iVar1);
  }
  return;
}


