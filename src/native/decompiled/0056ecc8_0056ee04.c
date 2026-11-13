#include "0056ecc8_0056ee04.h"



void fn_0056ee04(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if (*(int **)(param_1 + 0xf4) == (int *)0x0) {
    return;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0xf4) + 0x3c))();
  if (iVar1 != 0) {
    fn_0056e838(param_1,3,*(undefined4 *)(param_1 + 0xfc));
    fn_0025e314(*(undefined4 *)(param_1 + 200),1);
    fn_0068ab44(param_1,0x100094e);
    return;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0xf4) + 0x40))();
  if (iVar1 != 0) {
    bVar4 = *(char *)(param_1 + 0x124) == '\0';
    if (bVar4) {
      param_3 = *(int *)(param_1 + 0xfc);
    }
    if (bVar4 && param_3 == 3) {
      fn_0056e838(param_1,1);
      fn_0025e314(*(undefined4 *)(param_1 + 200),1);
      fn_0068ab44(param_1,0x100094e);
      return;
    }
    fn_0056e838(param_1,0,*(undefined4 *)(param_1 + 0xfc));
    fn_0025e314(*(undefined4 *)(param_1 + 200),1);
    fn_0068ab44(param_1,0x100094e);
    return;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0xf4) + 0x54))();
  if (-1 < iVar1) {
    fn_0056e60c(param_1,iVar1);
    return;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0xf4) + 0xa8))();
  if (-1 < iVar1) {
    fn_0068ab44(param_1,0x100094e);
    fn_0056e578(param_1,1);
    return;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0xf4) + 0xb8))();
  if (iVar1 < 0) {
    fn_0056d658(param_1,*(undefined4 *)(param_1 + 0xf4),1);
    return;
  }
  uVar2 = fn_0022f750((char *)&DAT_0056fa1c);
  uVar3 = fn_0022eefc(0x6a5,0);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar3);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_0056ecc8(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  if (0 < *(int *)(param_1 + 0x120)) {
    (**(code **)(**(int **)(param_1 + 0xec) + 0xc4))();
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
    return;
  }
  uVar2 = fn_006f6a5c(param_1);
  uVar3 = fn_006f6ab4(param_1);
  if ((uVar3 & 0x100000) == 0 || (uVar3 & 0x200000) == 0) {
    if ((uVar2 & 0x100000) == 0) {
      if ((uVar2 & 0x200000) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 100) + 0x18) = 2;
      }
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 100) + 0x18) = 1;
    }
  }
  (**(code **)(**(int **)(param_1 + 0xec) + 0x1c))();
  (**(code **)(**(int **)(param_1 + 0xf0) + 0x1c))();
  if (*(int **)(param_1 + 0xf4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xf4) + 0x1c))();
  }
  (**(code **)(**(int **)(param_1 + 0xd4) + 0x1c))();
  cVar1 = *(char *)(param_1 + 0xdc);
  if (cVar1 == '\0') {
    (**(code **)(**(int **)(param_1 + 0xec) + 0x20))();
  }
  else if (cVar1 == '\x02') {
    (**(code **)(**(int **)(param_1 + 0xf4) + 0x20))();
  }
  else if (cVar1 == '\x03') {
    (**(code **)(**(int **)(param_1 + 0xf0) + 0x20))();
  }
  fn_0056efb8(param_1);
  fn_0056ea54(param_1);
  if (*(int **)(param_1 + 0xf4) == (int *)0x0) {
    return;
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 0xf4) + 0x3c))();
  if (iVar4 != 0) {
    fn_0056e838(param_1,3,*(undefined4 *)(param_1 + 0xfc));
    fn_0025e314(*(undefined4 *)(param_1 + 200),1);
    fn_0068ab44(param_1,0x100094e);
    return;
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 0xf4) + 0x40))();
  if (iVar4 != 0) {
    bVar7 = *(char *)(param_1 + 0x124) == '\0';
    if (bVar7) {
      param_3 = *(int *)(param_1 + 0xfc);
    }
    if (bVar7 && param_3 == 3) {
      fn_0056e838(param_1,1);
      fn_0025e314(*(undefined4 *)(param_1 + 200),1);
      fn_0068ab44(param_1,0x100094e);
      return;
    }
    fn_0056e838(param_1,0,*(undefined4 *)(param_1 + 0xfc));
    fn_0025e314(*(undefined4 *)(param_1 + 200),1);
    fn_0068ab44(param_1,0x100094e);
    return;
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 0xf4) + 0x54))();
  if (-1 < iVar4) {
    fn_0056e60c(param_1,iVar4);
    return;
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 0xf4) + 0xa8))();
  if (-1 < iVar4) {
    fn_0068ab44(param_1,0x100094e);
    fn_0056e578(param_1,1);
    return;
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 0xf4) + 0xb8))();
  if (iVar4 < 0) {
    fn_0056d658(param_1,*(undefined4 *)(param_1 + 0xf4),1);
    return;
  }
  uVar5 = fn_0022f750("fieldridesettei");
  uVar6 = fn_0022eefc(0x6a5,0);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar5,uVar6);
  fn_00689bd0(param_1,0x49,0);
  return;
}


