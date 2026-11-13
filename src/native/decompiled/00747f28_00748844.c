#include "00747f28_00748844.h"



bool fn_00748844(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if (((int)uVar3 < 0) ||
     ((uint)(*(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xf0) >> 4) <= uVar3)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xf0) + uVar3 * 0x10;
  }
  return *(int *)(iVar1 + 8) != 0;
}



void fn_00748808(int param_1)

{
  fn_00328800(*(undefined4 *)(param_1 + 0x100));
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_0074879c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = fn_0016ba34(DAT_00897800,param_2,param_3,0);
  fn_00328800(*(undefined4 *)(param_1 + 0x100),uVar1,param_4,param_5,param_6,param_7);
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_0074876c(int param_1)

{
  if (*(int *)(param_1 + 0x100) != 0) {
    fn_002feef8(*(int *)(param_1 + 0x100));
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  fn_003979d0(param_1);
  return;
}



void fn_00748728(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 0x114) + 0xa0) == 1) && (*(int *)(param_1 + 0x110) != 0)) {
    fn_006898b8(param_1,0xd9,0);
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    fn_002feef8(*(int *)(param_1 + 0x100));
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  fn_003979d0(param_1);
  return;
}



void fn_007486bc(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0082cff4;
  if (param_1[0x33] != 0) {
    fn_002feef8(param_1[0x33]);
  }
  uVar1 = param_1[0x2f];
  uVar2 = uVar1;
  if ((uint)param_1[0x30] < uVar1) {
    do {
      uVar2 = uVar2 + 0x10;
    } while (uVar2 != param_1[0x30]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x31] - uVar1) >> 4,0);
  fn_002c471c(param_1);
  return;
}



void fn_007486b8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0082cff4;
  if (param_1[0x33] != 0) {
    fn_002feef8(param_1[0x33]);
  }
  uVar1 = param_1[0x2f];
  uVar2 = uVar1;
  if ((uint)param_1[0x30] < uVar1) {
    do {
      uVar2 = uVar2 + 0x10;
    } while (uVar2 != param_1[0x30]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x31] - uVar1) >> 4,0);
  fn_002c471c(param_1);
  return;
}



void fn_00748448(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  fn_002c4304();
  piVar2 = *(int **)(param_1 + 0xcc);
  uVar1 = piVar2[2];
  if (uVar1 != 0) {
    if ((uint)piVar2[1] < uVar1) {
      piVar2[1] = piVar2[1] + 1;
    }
    else if (*(char *)((int)piVar2 + 0xd) == '\0') {
      piVar2[1] = uVar1;
    }
    else {
      piVar2[1] = 0;
      piVar2[2] = 0;
      *(undefined1 *)(*piVar2 + 0x30) = 1;
      fn_0036c340(*piVar2);
    }
  }
  if ((char)piVar2[3] != '\0') {
    *(undefined1 *)(*piVar2 + 0x30) = 0;
    *(undefined1 *)(piVar2 + 3) = 0;
  }
  return;
}



void fn_0074824c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((char)param_1[3] != '\x03') {
    return;
  }
  iVar1 = fn_006ba284(param_1);
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  iVar1 = 0;
  if (((int)uVar3 < 0) || ((uint)(param_1[0x30] - param_1[0x2f] >> 4) <= uVar3)) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1[0x2f] + uVar3 * 0x10;
  }
  if (*(int *)(iVar2 + 8) == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  iVar2 = fn_006ba284(param_1);
  iVar4 = fn_006ba274(param_1);
  uVar3 = iVar2 * iVar4 + param_2;
  if ((-1 < (int)uVar3) && (uVar3 < (uint)(param_1[0x30] - param_1[0x2f] >> 4))) {
    iVar1 = param_1[0x2f] + uVar3 * 0x10;
  }
  uVar5 = *(undefined4 *)(iVar1 + 8);
  fn_006899f4(param_1,uVar5,(int)*(char *)(iVar1 + 0xc),(int)*(char *)(iVar1 + 0xd));
  (**(code **)(*param_1 + 0x13c))(param_1,uVar5);
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_007481a0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_10;
  
  if ((char)param_1[0x2e] != '\0') {
    local_10 = param_4;
    (**(code **)(*param_1 + 0x14c))(&local_10,param_1,param_2);
    puVar3 = local_10;
    if (local_10[-1] == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    fn_00748460(param_1,param_2,puVar3);
    if (local_10 != &DAT_008f9cf4) {
      piVar1 = local_10 + -3;
      iVar2 = *piVar1;
      if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
        fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
      }
    }
  }
  return;
}



void fn_00748134(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1[0x2c] == 0) {
    fn_00689878(param_1,0);
  }
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x144))(param_1);
  fn_006899f4(param_1,param_1[0x2c],uVar2,uVar1);
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_007480dc(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006896fc(param_1,0x39);
  if (iVar1 != 0) {
    *(undefined1 *)(*(int *)(param_1 + 200) + 0x18) = 2;
  }
  return;
}



void fn_007480b4(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006896fc(param_1,0x39);
  if (iVar1 != 0) {
    *(undefined1 *)(*(int *)(param_1 + 200) + 0x18) = 1;
  }
  return;
}



void fn_0074808c(int param_1)

{
  fn_003288d8(*(undefined4 *)(param_1 + 0xcc));
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_0074804c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = fn_0016ba34(DAT_00897800,param_2,param_3,0);
  fn_00328874(*(undefined4 *)(param_1 + 0xcc),uVar1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_00748024(int param_1)

{
  fn_00328874(*(undefined4 *)(param_1 + 0xcc));
  fn_00689bd0(param_1,0x48,0);
  return;
}



bool fn_00747fd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if (((int)uVar3 < 0) ||
     ((uint)(*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 4) <= uVar3)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xbc) + uVar3 * 0x10;
  }
  return *(int *)(iVar1 + 8) != 0;
}



void fn_00747f94(int param_1)

{
  fn_00328800(*(undefined4 *)(param_1 + 0xcc));
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_00747f28(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = fn_0016ba34(DAT_00897800,param_2,param_3,0);
  fn_00328800(*(undefined4 *)(param_1 + 0xcc),uVar1,param_4,param_5,param_6,param_7);
  fn_00689bd0(param_1,0x48,0);
  return;
}


