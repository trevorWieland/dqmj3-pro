#include "002e9d44_002ea3b4.h"



void fn_002ea3b4(void)

{
  if (DAT_00892858 != 0) {
    fn_002feca8();
    DAT_00892858 = 0;
  }
  DAT_0089285c = 0;
  DAT_00892860 = 0;
  return;
}



undefined4 fn_002ea2b0(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return *(undefined4 *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0x10);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return *(undefined4 *)(iVar1 + 8);
}



int fn_002ea29c(void)

{
  return (int)(short)DAT_00892860;
}



undefined4 fn_002ea244(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return *(undefined4 *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0x14);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return *(undefined4 *)(iVar1 + 0xc);
}



int fn_002ea1ec(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return (int)*(char *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0x32);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return (int)*(char *)(iVar1 + 0x1c);
}



undefined4 fn_002ea1d4(short *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(*(int *)(DAT_00897804 + 0xc) + 4);
  do {
    if (*(short *)(iVar1 + iVar2 * 0x48 + 0x1d5dc) == *param_1) {
      iVar2 = iVar2 * 0x48 + 0x1d5dc;
LAB_0028b60c:
      if (iVar1 + iVar2 != 0) {
        return 1;
      }
      break;
    }
    if (*(short *)(iVar1 + iVar2 * 0x48 + 0x1d624) == *param_1) {
      iVar2 = iVar2 * 0x48 + 0x1d624;
      goto LAB_0028b60c;
    }
    iVar2 = iVar2 + 2;
  } while (iVar2 < 0x14);
  iVar2 = 0;
  do {
    if (*(short *)(iVar1 + iVar2 * 0x48 + 0x1d5dc) == 0) {
      fn_0017821c(iVar1 + iVar2 * 0x48 + 0x1d5dc,param_1,0x48);
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  return 0;
}



int fn_002ea17c(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return (int)*(short *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0x2c);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return (int)*(short *)(iVar1 + 0x16);
}



int fn_002ea124(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return (int)*(short *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0x20);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return (int)*(short *)(iVar1 + 0x16);
}



int fn_002ea0cc(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return (int)*(short *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0x2a);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return (int)*(short *)(iVar1 + 0x14);
}



int fn_002ea074(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return (int)*(short *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0x1e);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return (int)*(short *)(iVar1 + 0x14);
}



undefined4 fn_002ea030(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 10000) {
    if (*(char *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 5) != '\0') {
      uVar1 = fn_0030c230();
      return uVar1;
    }
  }
  return 0;
}



undefined4 fn_002e9fd4(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_s0;
  
  iVar3 = (int)(short)param_2;
  *(short *)(param_1 + 0x30) = (short)param_2;
  uVar1 = fn_002ea524(iVar3);
  *(undefined2 *)(param_1 + 0x32) = uVar1;
  fn_002cd56c(param_2);
  *(undefined4 *)(param_1 + 0x3c) = in_s0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined1 *)(param_1 + 0x37) = 3;
  *(undefined2 *)(param_1 + 0x38) = 0xffff;
  if (iVar3 < 10000) {
    iVar3 = (int)*(char *)(DAT_00892854 + *(short *)(DAT_00892858 + iVar3 * 2) * 0x48 + 5);
    if (iVar3 != 0) {
      uVar2 = fn_0030c230(iVar3,param_1 + 0x40,0);
      return uVar2;
    }
  }
  return 0;
}



int fn_002e9f9c(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    iVar1 = (int)*(char *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0xb);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 fn_002e9f54(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = SCARRY4(param_1,1);
  iVar1 = param_1 + 1;
  if (param_1 != -1) {
    bVar3 = SBORROW4(param_1,10000);
    iVar1 = param_1 + -10000;
  }
  if ((iVar1 < 0 == bVar3) ||
     (*(char *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 5) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



int fn_002e9efc(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return (int)*(short *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0x2e);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return (int)*(short *)(iVar1 + 0x18);
}



int fn_002e9ea4(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return (int)*(short *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0x28);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return (int)*(short *)(iVar1 + 0x12);
}



int fn_002e9e4c(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return (int)*(short *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0x26);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return (int)*(short *)(iVar1 + 0x10);
}



int fn_002e9df4(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return (int)*(short *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0x22);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return (int)*(short *)(iVar1 + 0x18);
}



int fn_002e9d9c(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return (int)*(short *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0x1c);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return (int)*(short *)(iVar1 + 0x12);
}



int fn_002e9d44(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return (int)*(short *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0x1a);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return (int)*(short *)(iVar1 + 0x10);
}


