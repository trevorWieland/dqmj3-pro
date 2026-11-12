#include "006ac3a8_006ac81c.h"



undefined1 fn_006ac81c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (-1 < param_3) {
    if (param_2 == 0) {
      iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
    }
    else if (param_2 == 1) {
      iVar1 = fn_006b84b0();
    }
    if (param_3 < iVar1) {
      if (param_2 == 0) {
        iVar1 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),param_3);
      }
      else {
        if (param_2 != 1) {
          return 0;
        }
        iVar1 = fn_0028b348();
      }
      if (iVar1 != 0) {
        return *(undefined1 *)(iVar1 + 0x3c);
      }
    }
  }
  return 0;
}



int fn_006ac78c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (-1 < param_3) {
    if (param_2 == 0) {
      iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
    }
    else if (param_2 == 1) {
      iVar1 = fn_006b84b0();
    }
    if (param_3 < iVar1) {
      if (param_2 == 0) {
        iVar1 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),param_3);
      }
      else {
        if (param_2 != 1) {
          return 0;
        }
        iVar1 = fn_0028b348();
      }
      return (int)*(short *)(iVar1 + 0x1c);
    }
  }
  return 0;
}



int fn_006ac738(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    iVar1 = 0;
    if (*(int *)(DAT_00897804 + 0xc) != 0) {
      iVar1 = fn_006b8478();
    }
    if ((param_2 < iVar1) && (*(int *)(DAT_00897804 + 0xc) != 0)) {
      iVar1 = fn_0028b074(*(int *)(DAT_00897804 + 0xc),param_2);
      return (int)*(short *)(iVar1 + 0x1c);
    }
  }
  return 0;
}



void fn_006ac71c(void)

{
  fn_006b7f9c(*(undefined4 *)(DAT_00897804 + 0x24),0,1);
  return;
}



int fn_006ac688(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  iVar4 = 0;
  iVar3 = 0;
  do {
    iVar1 = fn_006b51d8(*(undefined4 *)(DAT_00897804 + 0x1c),iVar3);
    if (iVar1 != 0) {
      uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
      fn_0020bbc4(auStack_20,uVar2);
      fn_006bfda8(auStack_1c);
      iVar1 = fn_00242b6c();
      if (iVar1 == param_2) {
        iVar4 = iVar4 + 1;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return iVar4;
}



void fn_006ac664(void)

{
  int iVar1;
  
  iVar1 = fn_006f72c8(DAT_008977e0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x140) = 0;
  }
  return;
}



undefined4 fn_006ac638(int param_1,uint param_2)

{
  if (((int)param_2 < 0) || (0x4f < param_2)) {
    return 0;
  }
  return *(undefined4 *)(param_1 + param_2 * 0x2c + 0x8c);
}



undefined4 fn_006ac5d4(void)

{
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  fn_006f7a84(DAT_008977e0);
  uVar1 = fn_006aa334();
  uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar1);
  fn_0020bbc4(auStack_10,uVar1);
  fn_006bfda8(auStack_c);
  uVar1 = fn_00242b6c();
  return uVar1;
}



undefined4 fn_006ac574(void)

{
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  fn_006f7a84(DAT_008977e0);
  uVar1 = fn_006aa334();
  uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar1);
  fn_0020bbc4(auStack_10,uVar1);
  uVar1 = fn_006bfe90(auStack_c);
  return uVar1;
}



void fn_006ac540(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
    return;
  }
  if (param_2 == 1) {
    fn_006b84b0(*(undefined4 *)(DAT_00897804 + 0xc));
    return;
  }
  return;
}



void fn_006ac520(void)

{
  if (*(int *)(DAT_00897804 + 0xc) == 0) {
    return;
  }
  fn_006b8478();
  return;
}



void fn_006ac508(undefined4 param_1,short param_2)

{
  fn_006b7d34(*(undefined4 *)(DAT_00897804 + 0x24),(int)param_2);
  return;
}



void fn_006ac4f4(void)

{
  fn_006b62ec(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006ac4d0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = fn_006f72c8(DAT_008977e0);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x1f0) = param_2;
  }
  return;
}



undefined4 fn_006ac3f4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  iVar3 = 0;
  if ((*(int *)(DAT_00897804 + 0xc) != 0) && (iVar1 = fn_006b8478(), 0 < iVar1)) {
    do {
      uVar2 = fn_0028b074(*(undefined4 *)(DAT_00897804 + 0xc),iVar3);
      fn_0020bbc4(auStack_20,uVar2);
      fn_006bfda8(auStack_1c);
      iVar1 = fn_00242b6c();
      if ((iVar1 == param_2) && (iVar1 = fn_006bfe90(auStack_1c), iVar1 != 3 && iVar1 != 4)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      if (*(int *)(DAT_00897804 + 0xc) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = fn_006b8478();
      }
    } while (iVar3 < iVar1);
  }
  return 0;
}



undefined4 fn_006ac3e0(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar4 = 0;
  iVar5 = **(int **)(DAT_00897804 + 0x28);
  iVar3 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(iVar5 + iVar1 * 0x1c) == 0) break;
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar1 < 100);
  if (0 < iVar3) {
    do {
      uVar2 = iVar5 + iVar4 * 0x1c;
      bVar6 = *(char *)(uVar2 + 4) == '\x01';
      if (bVar6) {
        uVar2 = (uint)*(byte *)(uVar2 + 8);
      }
      if (bVar6 && uVar2 == param_2) {
        return 1;
      }
      iVar3 = 0;
      iVar1 = 0;
      iVar4 = iVar4 + 1;
      do {
        if (*(int *)(iVar5 + iVar1 * 0x1c) == 0) break;
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar1 < 100);
    } while (iVar4 < iVar3);
  }
  return 0;
}



void fn_006ac3cc(void)

{
  fn_006b63ec(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



int fn_006ac3a8(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(DAT_00897804 + 0xc) != 0) {
    iVar1 = fn_006b8478();
  }
  return 500 - iVar1;
}


