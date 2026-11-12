#include "00552f70_00553648bbb.h"



void fn_00553648(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[9] = *(undefined4 *)(param_1 + 0xb4);
  if (*(int *)(param_1 + 0xb4) != 0) {
    fn_0055fa10(param_2);
    param_2[0xe] = *(undefined4 *)(param_1 + 0xc0);
    param_2[0xd] = *(undefined4 *)(param_1 + 0xc4);
    if ((*(byte *)(param_1 + 0xd0) & 0x40) == 0) {
      param_2[0xc] = 0x7f7fffff;
    }
    else {
      param_2[0xc] = *(undefined4 *)(param_1 + 0x3c);
    }
  }
  if (*(int *)(param_1 + 200) != 0) {
    param_2[0x11] = *(int *)(param_1 + 200);
  }
  bVar3 = *(byte *)(param_1 + 0xd0) & 3;
  uVar2 = 0;
  if (bVar3 == 1) goto LAB_00553700;
  if (bVar3 == 2) {
LAB_005536f4:
    uVar2 = 1;
  }
  else {
    if (bVar3 != 3) {
      if ((*(byte *)(param_1 + 0xd1) & 3) == 0) goto LAB_005536f4;
      if ((*(byte *)(param_1 + 0xd1) & 3) != 2) goto LAB_00553700;
    }
    uVar2 = 2;
  }
LAB_00553700:
  bVar3 = *(byte *)(param_1 + 0xd1);
  if ((bVar3 & 3) == 0) {
    uVar2 = uVar2 | 0x10;
  }
  else if ((bVar3 & 3) == 2) {
    uVar2 = uVar2 | 0x20;
  }
  uVar1 = (bVar3 & 0xf) >> 2;
  if (uVar1 == 0) {
    uVar2 = uVar2 | 0x100;
  }
  else if (uVar1 == 2) {
    uVar2 = uVar2 | 0x200;
  }
  param_2[0x10] = uVar2;
  uVar4 = *(undefined4 *)(param_1 + 0xb0);
  *param_2 = *(undefined4 *)(param_1 + 0xac);
  param_2[1] = uVar4;
  param_2[8] = *(undefined4 *)(param_1 + 0xd4);
  return;
}



void fn_005535dc(int param_1)

{
  int iVar1;
  bool bVar2;
  
  fn_0054c58c();
  bVar2 = *(short *)(param_1 + 0xce) != 0;
  iVar1 = 0;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0xb4);
  }
  if (((bVar2 && iVar1 != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
     ((*(byte *)(param_1 + 0xd0) & 4) != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0xf8) + 0x45) = 0;
    *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xfb;
  }
  return;
}


