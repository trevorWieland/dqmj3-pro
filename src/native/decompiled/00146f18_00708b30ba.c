#include "00146f18_00708b30ba.h"



undefined4 fn_002f9da0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  switch(*(undefined1 *)(param_1 + 0xf0)) {
  case 0:
    if (DAT_0089780c[5] == DAT_0089780c[3]) {
      *(undefined1 *)(param_1 + 0xf0) = 1;
    }
    break;
  case 1:
    fn_002fa190();
    break;
  case 2:
    if (*(char *)(param_1 + 0x112) != '\0') {
      uVar4 = fn_001603f8(&uStack_10,0xff);
      fn_00163988(DAT_0089780c,uVar4,10);
      *(undefined1 *)(param_1 + 0xf0) = 3;
    }
                    /* WARNING: Subroutine does not return */
    fn_0011dda8();
  case 3:
    (**(code **)(*DAT_0089780c + 8))(DAT_0089780c,1);
    if (DAT_0089780c[5] == DAT_0089780c[3]) {
      piVar3 = *(int **)(*(int *)(param_1 + 0xf4) + 0xc);
      (**(code **)(*piVar3 + 0x24))(piVar3,0x4c,0);
      uVar4 = fn_001603f8(&uStack_10,0);
      fn_00163988(DAT_0089780c,uVar4,10);
      *(undefined1 *)(param_1 + 0xf0) = 6;
    }
    break;
  case 4:
    fn_002f99d8();
    break;
  case 5:
    cVar1 = *(char *)(*(int *)(param_1 + 0x100) + 0x1f);
    if (cVar1 == '\x02') {
      *(undefined1 *)(param_1 + 0x110) = 1;
      if (*(char *)(*(int *)(param_1 + 0x100) + 0x1e) == '\0') {
        return 0;
      }
      if ((*(byte *)(param_1 + 0x10c) & 4) == 0) {
        uVar2 = 0xb;
      }
      else {
        uVar2 = 10;
      }
    }
    else {
      if (*(char *)(*(int *)(param_1 + 0x100) + 0x1e) == '\0') {
        return 0;
      }
      if (cVar1 != '\x01') {
        return 0;
      }
      piVar3 = *(int **)(*(int *)(param_1 + 0xf4) + 0x10);
      (**(code **)(*piVar3 + 0x34))(piVar3,0,1);
      uVar4 = fn_001603f8(&uStack_10,0xff);
      fn_00163988(DAT_0089780c,uVar4,10);
      uVar2 = 0;
    }
    goto LAB_002fa0ec;
  case 6:
    (**(code **)(*DAT_0089780c + 8))(DAT_0089780c,1);
    if (DAT_0089780c[5] != DAT_0089780c[3]) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0x10c) & 1) == 0) {
      uVar2 = 7;
    }
    else {
      uVar2 = 8;
    }
    goto LAB_002fa0ec;
  case 7:
    if (*(char *)(*(int *)(param_1 + 0x104) + 0x1c) != '\0') {
      fn_001003e0(param_1 + 4,*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x14));
      *(undefined1 *)(param_1 + 0xf0) = 8;
    }
                    /* WARNING: Subroutine does not return */
    fn_0011dda8();
  case 8:
    fn_002f9b00();
    break;
  case 9:
    if (*(char *)(*(int *)(param_1 + 0x108) + 0x10) != '\x01') {
      return 0;
    }
    if ((*(byte *)(param_1 + 0x10c) & 8) == 0) {
      uVar2 = 0xd;
    }
    else {
      uVar4 = fn_001603f8(&uStack_10,0);
      fn_00163988(DAT_0089780c,uVar4,10);
      uVar2 = 0xc;
    }
    goto LAB_002fa0ec;
  case 10:
    if (*(char *)(param_1 + 0x111) == '\0') {
      return 0;
    }
    uVar2 = 0xb;
    goto LAB_002fa104;
  case 0xb:
    if (*(char *)(*(int *)(param_1 + 0xf8) + 0x31) != '\x01') {
      return 0;
    }
    uVar2 = 0xd;
LAB_002fa104:
    *(undefined1 *)(param_1 + 0xf0) = uVar2;
    break;
  case 0xc:
    (**(code **)(*DAT_0089780c + 8))(DAT_0089780c,1);
    if (DAT_0089780c[5] != DAT_0089780c[3]) {
      return 0;
    }
    uVar4 = fn_006f72b4(DAT_008977e0);
    fn_00219400(uVar4,1);
    uVar2 = 0xd;
LAB_002fa0ec:
    *(undefined1 *)(param_1 + 0xf0) = uVar2;
    break;
  case 0xd:
    return 1;
  }
  return 0;
}



void fn_002ca990(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 local_18;
  
  if ((DAT_00897894 != (int *)0x0) &&
     (local_18 = param_4, iVar1 = (**(code **)(*DAT_00897894 + 0x48))(DAT_00897894,(char *)&DAT_00867230),
     iVar1 != 0)) {
    local_18 = 0;
    uVar2 = fn_0052102c(&local_18);
    if ((uVar2 & 0x80000000) == 0) {
      fn_005f3b74(DAT_00898840,local_18);
      fn_0066ec10(DAT_00898840);
    }
    iVar1 = fn_00681c7c();
    if (iVar1 != 0) {
      fn_002287d0(DAT_00897894,0x20,1);
      (**(code **)(*DAT_00897894 + 0x14))(DAT_00897894,(char *)&DAT_00867230);
      fn_00682a8c();
    }
  }
  *(code **)(param_1 + 0xc4) = fn_002c97f4;
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}


