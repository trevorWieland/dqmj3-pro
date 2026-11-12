#include "0012b830_00227ba0b.h"



undefined4 fn_00227ba0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0) || (iVar1 = fn_003035b0(param_2,(char *)&DAT_0086a0ac), iVar1 == 0)) {
    (**(code **)(*DAT_00897894 + 0x14))(DAT_00897894,(char *)&DAT_0086a0ac);
    uVar2 = 1;
    if (param_2 != 0) goto LAB_00227bec;
LAB_00227c04:
    (**(code **)(*DAT_00897894 + 0x14))(DAT_00897894,(char *)&DAT_0086a0bc);
    uVar2 = 1;
    if (param_2 == 0) goto LAB_00227c3c;
  }
  else {
LAB_00227bec:
    iVar1 = fn_003035b0(param_2,(char *)&DAT_0086a0bc);
    if (iVar1 == 0) goto LAB_00227c04;
  }
  iVar1 = fn_003035b0(param_2,(char *)&DAT_0086a0b4);
  if (iVar1 != 0) {
    return uVar2;
  }
LAB_00227c3c:
  (**(code **)(*DAT_00897894 + 0x14))(DAT_00897894,(char *)&DAT_0086a0b4);
  if (param_2 == 0) {
    (**(code **)(*DAT_00897894 + 0x14))(DAT_00897894,(char *)&DAT_00227c80);
  }
  return 1;
}



void fn_001f7918(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  
  if ((param_1[0x25] != 0) && (iVar1 = fn_00165d3c(), iVar1 != 0)) {
    fn_00422638(param_1[0x25]);
  }
  if ((*(char *)((int)param_1 + 0x99) == '\0') && (iVar1 = fn_002d4710(param_1), iVar1 != 0)) {
    *(undefined1 *)((int)param_1 + 0x99) = 1;
    param_1[0x24] = 0;
    if ((int *)param_1[0x23] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x23] + 0x10))();
    }
    piVar2 = (int *)fn_002d40c8(param_1[0x22],5);
    piVar3 = (int *)param_1[0x23];
    if (piVar3 != piVar2) {
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
      param_1[0x23] = (int)piVar2;
    }
    if ((int *)param_1[0x23] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x23] + 8))();
      goto LAB_001f79d4;
    }
  }
  else {
LAB_001f79d4:
    if (((int *)param_1[0x23] != (int *)0x0) &&
       (iVar1 = (**(code **)(*(int *)param_1[0x23] + 0xc))(), iVar1 != 7)) {
      if ((int *)param_1[0x23] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x23] + 0x10))();
      }
      piVar2 = (int *)fn_002d40c8(param_1[0x22],iVar1);
      piVar3 = (int *)param_1[0x23];
      if (piVar3 != piVar2) {
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 4))();
        }
        param_1[0x23] = (int)piVar2;
      }
      if ((int *)param_1[0x23] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x23] + 8))();
      }
    }
  }
  if ((*(char *)((int)param_1 + 0x99) == '\0') && ((int *)param_1[0x13] != (int *)0x0)) {
    (**(code **)(*(int *)param_1[0x13] + 8))();
  }
  if (param_1[0x14] != 0) {
    fn_00405730();
  }
  fn_001c93c8(*(undefined4 *)(param_1[1] + 8));
  if (*(int *)(param_1[1] + 0xc) != 0) {
    fn_001c93c8();
  }
  if (param_1[2] != 0) {
    fn_0028c2fc();
  }
  fn_003b7fec(param_1[0xc]);
  fn_002b183c(param_1[0xb]);
  switch((char)param_1[8]) {
  case '\0':
    *(undefined1 *)((int)param_1 + 0x22) = 1;
    param_1[9] = param_1[9] + 1;
    *(char *)((int)param_1 + 0x21) = (char)param_1[8];
    *(undefined1 *)(param_1 + 8) = 1;
    param_1[10] = 0;
    break;
  case '\x01':
    break;
  case '\x02':
    if ((*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) &&
       (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
      (**(code **)(*param_1 + 0x20))(param_1);
      uVar4 = 3;
LAB_001f7bc8:
      *(undefined1 *)((int)param_1 + 0x22) = uVar4;
    }
    break;
  case '\x03':
    iVar1 = (**(code **)(*param_1 + 0x24))(param_1);
    if (iVar1 != 0) {
      uVar4 = 1;
      goto LAB_001f7bc8;
    }
    break;
  default:
    goto switchD_001f7ae4_default;
  }
  fn_002b1908(param_1);
switchD_001f7ae4_default:
  fn_0069e878(param_1[0xe]);
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 0xc))();
  }
  iVar1 = param_1[8];
  param_1[9] = param_1[9] + 1;
  *(char *)((int)param_1 + 0x21) = (char)iVar1;
  *(char *)(param_1 + 8) = *(char *)((int)param_1 + 0x22);
  if ((char)iVar1 == *(char *)((int)param_1 + 0x22)) {
    param_1[10] = param_1[10] + 1;
  }
  else {
    param_1[10] = 0;
  }
  return;
}



undefined4 fn_0012e0d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_10 [4];
  undefined4 local_c;
  
  iVar1 = fn_00157f00(param_1,0xffffffff,local_10);
  if ((iVar1 < 0) || (iVar1 = fn_00157fb0(param_1,0xfffffffe,&local_c), iVar1 < 0)) {
    uVar2 = fn_001581d0(param_1,&DAT_00148920);
    return uVar2;
  }
  uVar2 = (**(code **)(*DAT_00898898 + 0x50))(DAT_00898898,local_c);
  fn_001580cc(param_1,uVar2);
  return 1;
}


