#include "00243918_0024405c.h"



void fn_0024405c(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x148);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1,param_2);
  }
  piVar1 = *(int **)(param_1 + 0x140);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002440a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x1c))(piVar1,param_2);
  return;
}



void fn_00243f58(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  fn_00301a9c(param_1 + 0xe,&DAT_007c68d8,0x1e);
  iVar1 = fn_0069ccf8(param_3);
  if (iVar1 == 0) {
    param_3 = 1;
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  *(short *)(param_1 + 8) = (short)param_3;
  fn_00301a9c(param_1 + 0xe,param_6,0x1e);
  fn_0017821c(param_1 + 0x2c,param_7,0x60);
  *(undefined2 *)(param_1 + 10) = param_4;
  *(undefined4 *)(param_1 + 0x8c) = *param_8;
  *(undefined4 *)(param_1 + 0x90) = param_8[1];
  *(undefined4 *)(param_1 + 0x94) = param_8[2];
  *(undefined4 *)(param_1 + 0x98) = param_8[3];
  *(undefined2 *)(param_1 + 0x9c) = *(undefined2 *)(param_8 + 4);
  *(undefined1 *)(param_1 + 0xc) = param_5;
  fn_00243918(param_1,1);
  if (*(int **)(param_1 + 0x148) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x148) + 0x10))();
  }
  if (*(int **)(param_1 + 0x140) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x140) + 0x10))();
  }
  fn_00243a34(param_1);
  *(undefined1 *)(param_1 + 0x14c) = 0;
  return;
}



void fn_00243e8c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  fn_00301a9c(param_1 + 0xe,&DAT_007c68d8,0x1e);
  iVar1 = fn_0069ccf8(param_3);
  if (iVar1 == 0) {
    param_3 = 1;
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  *(short *)(param_1 + 8) = (short)param_3;
  fn_00301a9c(param_1 + 0xe,param_4,0x1e);
  fn_0017821c(param_1 + 0x2c,param_5,0x60);
  fn_00243918(param_1,1);
  if (*(int **)(param_1 + 0x148) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x148) + 0x10))();
  }
  if (*(int **)(param_1 + 0x140) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x140) + 0x10))();
  }
  fn_00243a34(param_1);
  *(undefined1 *)(param_1 + 0x14c) = 0;
  return;
}



void fn_00243e04(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x14c) == '\0') {
    if (*(int *)(param_1 + 4) == 0) {
      return;
    }
    fn_00243918(param_1,0);
    uVar1 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x14c) != '\x01') {
      return;
    }
    if ((*(int *)(param_1 + 0x140) != 0) && (iVar2 = fn_006f7d68(), iVar2 == 0)) {
      return;
    }
    if ((*(int *)(param_1 + 0x148) != 0) && (iVar2 = fn_006f7d68(), iVar2 == 0)) {
      return;
    }
    fn_00243a34(param_1);
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x14c) = uVar1;
  return;
}



void fn_00243cdc(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x148);
  if (*(int *)(param_1 + 0x140) == 0) {
    if (iVar1 == 0) {
      return;
    }
  }
  else if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x140);
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(iVar1 + 0x1c) = *param_2;
  *(undefined4 *)(iVar1 + 0x20) = uVar2;
  *(undefined4 *)(iVar1 + 0x24) = uVar3;
  return;
}



void fn_00243c20(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  fn_00301a9c(param_1 + 0xe,&DAT_007c68d8,0x1e);
  iVar1 = fn_0069ccf8(param_3);
  if (iVar1 == 0) {
    param_3 = 1;
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  *(short *)(param_1 + 8) = (short)param_3;
  fn_00301a9c(param_1 + 0xe,param_6,0x1e);
  fn_0017821c(param_1 + 0x2c,param_7,0x60);
  *(undefined2 *)(param_1 + 10) = param_4;
  *(undefined4 *)(param_1 + 0x8c) = *param_8;
  *(undefined4 *)(param_1 + 0x90) = param_8[1];
  *(undefined4 *)(param_1 + 0x94) = param_8[2];
  *(undefined4 *)(param_1 + 0x98) = param_8[3];
  *(undefined2 *)(param_1 + 0x9c) = *(undefined2 *)(param_8 + 4);
  *(undefined1 *)(param_1 + 0xc) = param_5;
  return;
}



void fn_00243b9c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  fn_00301a9c(param_1 + 0xe,&DAT_007c68d8,0x1e);
  iVar1 = fn_0069ccf8(param_3);
  if (iVar1 == 0) {
    param_3 = 1;
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  *(short *)(param_1 + 8) = (short)param_3;
  fn_00301a9c(param_1 + 0xe,param_4,0x1e);
  fn_0017821c(param_1 + 0x2c,param_5,0x60);
  return;
}



void fn_00243b1c(int param_1,undefined4 param_2,undefined2 param_3,undefined1 param_4,
                 undefined4 *param_5)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  fn_00301a9c(param_1 + 0xe,&DAT_007c68d8,0x1e);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = param_3;
  *(undefined4 *)(param_1 + 0x8c) = *param_5;
  *(undefined4 *)(param_1 + 0x90) = param_5[1];
  *(undefined4 *)(param_1 + 0x94) = param_5[2];
  *(undefined4 *)(param_1 + 0x98) = param_5[3];
  *(undefined2 *)(param_1 + 0x9c) = *(undefined2 *)(param_5 + 4);
  *(undefined1 *)(param_1 + 0xc) = param_4;
  return;
}



void fn_00243a34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_s0;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x148) != 0) {
    fn_002cd59c((int)*(char *)(param_1 + 0xa8));
    iVar1 = *(int *)(param_1 + 0x148);
    *(undefined4 *)(iVar1 + 0x34) = in_s0;
    *(undefined4 *)(iVar1 + 0x38) = in_s0;
    *(undefined4 *)(iVar1 + 0x3c) = in_s0;
  }
  iVar3 = *(int *)(param_1 + 0x140);
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x148);
  }
  if (iVar3 != 0 && iVar1 != 0) {
    if (*(short *)(param_1 + 0xa4) == 1 || *(short *)(param_1 + 0xa4) == 0x1b) {
      uVar2 = fn_006f7d84(iVar3);
      fn_0017aec0(*(undefined4 *)(*(int *)(param_1 + 0x140) + 0x14),
                   *(undefined4 *)(*(int *)(param_1 + 0x148) + 0x14),uVar2,
                   *(undefined1 *)(param_1 + 0xa4),(int)*(char *)(param_1 + 0xa8),
                   (int)*(short *)(param_1 + 0xa6),1);
      return;
    }
    uVar2 = fn_006f7d84(iVar3);
    fn_0017b048(*(undefined4 *)(*(int *)(param_1 + 0x140) + 0x14),
                 *(undefined4 *)(*(int *)(param_1 + 0x148) + 0x14),uVar2,
                 *(undefined1 *)(param_1 + 0xa4),(int)*(char *)(param_1 + 0xa8),
                 (int)*(short *)(param_1 + 0xa6),1);
  }
  return;
}



void fn_00243918(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    fn_00243d10(param_1);
  }
  iVar2 = (int)*(short *)(param_1 + 8);
  local_10 = param_4;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      uVar1 = fn_002b15d4(*(undefined4 *)(param_1 + 4),1,param_1 + 0xe,param_2);
      *(undefined4 *)(param_1 + 0x13c) = uVar1;
    }
    else {
      if (iVar2 == 0x1b) {
        local_10 = 1;
        uVar1 = fn_002b1a60(*(undefined4 *)(param_1 + 4),0x1b,param_1 + 0x2c,param_2);
      }
      else {
        uVar1 = fn_002b14d4(*(undefined4 *)(param_1 + 4),iVar2,param_2,0);
      }
      *(undefined4 *)(param_1 + 0x13c) = uVar1;
    }
    uVar1 = fn_002b1588(*(undefined4 *)(param_1 + 4),uVar1);
    *(undefined4 *)(param_1 + 0x140) = uVar1;
  }
  iVar2 = fn_001a46f4((int)*(short *)(param_1 + 10));
  if (iVar2 != 0) {
    uVar1 = fn_002b1634(*(undefined4 *)(param_1 + 4),(int)*(short *)(param_1 + 10),param_1 + 0x8c,
                         param_2);
    *(undefined4 *)(param_1 + 0x144) = uVar1;
    uVar1 = fn_002b1588(*(undefined4 *)(param_1 + 4),uVar1);
    *(undefined4 *)(param_1 + 0x148) = uVar1;
  }
  fn_0017821c(param_1 + 0xa0,param_1 + 4,0x9a);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  fn_00301a9c(param_1 + 0xe,&DAT_007c68d8,0x1e,local_10);
  return;
}



void fn_00243d10(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x140) != 0) {
    iVar1 = fn_006f7d68();
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x148);
    }
    if ((iVar1 != 0 && iVar2 != 0) && (iVar2 = fn_006f7d68(), iVar2 != 0)) {
      fn_0018911c(*(undefined4 *)(*(int *)(param_1 + 0x140) + 0x14),
                   *(undefined4 *)(*(int *)(param_1 + 0x148) + 0x14),0);
    }
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x144) != -1) {
    fn_002b1810(*(undefined4 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(int *)(param_1 + 0x13c) != -1) {
    fn_002b1810(*(undefined4 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0x13c) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  fn_00301a9c(param_1 + 0xe,&DAT_007c68d8,0x1e);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined2 *)(param_1 + 0xa4) = 0;
  *(undefined2 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0xff;
  fn_00301a9c(param_1 + 0xaa,&DAT_007c68d8,0x1e);
  return;
}


