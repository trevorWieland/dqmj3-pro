#include "0037c110_0037cbbca.h"



void fn_0037c7d4(int *param_1)

{
  int iVar1;
  
  if ((param_1[0x2c] == 1) && (iVar1 = (**(code **)(*param_1 + 0x14c))(param_1), iVar1 != 0)) {
    fn_002c3d68(param_1);
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,1);
    fn_00689878(param_1,0);
    param_1[0x2c] = 3;
  }
  return;
}



void fn_0037c7a8(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6ab4();
  if (*(int *)(param_1 + 0xb0) == 1 && (uVar1 & 0x100000) == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0x18) = 2;
  }
  return;
}



void fn_0037c77c(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6ab4();
  if (*(int *)(param_1 + 0xb0) == 1 && (uVar1 & 0x200000) == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0x18) = 1;
  }
  return;
}



undefined4 fn_0037c2b4(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 == 2) {
        if (param_2 == 1) {
          return 1;
        }
      }
      else if ((param_1 == 3) && (param_2 == 0)) {
        return 1;
      }
      return 0;
    }
    if (param_2 != 2) {
      return 0;
    }
  }
  return 1;
}



undefined1 fn_0037c2a0(int param_1)

{
  return (&DAT_007c4c1c)[param_1 * 8];
}



undefined4 fn_0037c270(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = fn_00154ac8(0x38);
  if (iVar1 == 0) {
    puVar2 = &DAT_007c4c80;
  }
  else {
    puVar2 = &DAT_007c4cb8;
  }
  return *(undefined4 *)(puVar2 + param_1 * 8 + 4);
}



undefined4 fn_0037c110(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte local_14 [8];
  
  uVar1 = 0;
  switch(param_1) {
  case 0:
    break;
  case 1:
    if (param_2 != 1) {
      return 0;
    }
    break;
  case 2:
    if (param_2 != 2) {
      return 0;
    }
    break;
  case 3:
    local_14[0] = 6;
    local_14[1] = 7;
    local_14[2] = 8;
    local_14[3] = 9;
    local_14[4] = 10;
    local_14[5] = 0;
    local_14[6] = 0;
    local_14[7] = 0;
    iVar2 = 0;
    iVar3 = 1;
    do {
      if (local_14[iVar2] == param_2) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 1);
    while ((local_14[iVar3] != param_2 && (local_14[iVar3 + 1] != param_2))) {
      iVar3 = iVar3 + 2;
      if (4 < iVar3) {
        return 0;
      }
    }
    return 1;
  case 4:
    local_14[0] = 3;
    local_14[1] = 4;
    local_14[2] = 5;
    local_14[3] = 0;
    iVar3 = 0;
    iVar2 = 1;
    do {
      if (local_14[iVar3] == param_2) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 1);
    while( true ) {
      if (local_14[iVar2] == param_2) {
        return 1;
      }
      if (local_14[iVar2 + 1] == param_2) break;
      iVar2 = iVar2 + 2;
      if (2 < iVar2) {
        return 0;
      }
    }
    return 1;
  default:
    goto switchD_0037c130_default;
  }
  uVar1 = 1;
switchD_0037c130_default:
  return uVar1;
}


