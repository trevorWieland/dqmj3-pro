#include "003f4e70_003f52e4.h"



void fn_003f52e4(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  
  fn_00698fb8(DAT_008977e0,1);
  uVar1 = fn_006f7a48(DAT_008977e0);
  fn_00128744(uVar1,0xffffffff);
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x39) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  return;
}



void fn_003f51a4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      if (param_2 == 0) {
        fn_00699648(DAT_008977e0,0xffffffff,1,1,0x14);
      }
      else if ((param_2 == 1) && (iVar1 = fn_006f73a0(DAT_008977e0,1), iVar1 != 0)) {
        piVar3 = (int *)fn_006f72c8(DAT_008977e0);
        (**(code **)(*piVar3 + 0x54))(piVar3,0);
        uVar2 = 2;
        goto LAB_003f52ac;
      }
    }
    else if (iVar1 == 2) {
      if (param_2 == 0) {
        fn_006f74ac(DAT_008977e0);
        uVar2 = 3;
LAB_003f52ac:
        *(undefined4 *)(param_1 + 0x2c) = uVar2;
        return;
      }
    }
    else if (iVar1 == 3) {
      if (param_2 == 0) {
        if (*(char *)(param_1 + 0x39) != '\0') {
          fn_006f7674(DAT_008977e0);
        }
        fn_0069922c(DAT_008977e0);
        return;
      }
      if ((param_2 == 1) && (iVar1 = fn_006f7ad0(DAT_008977e0,1), iVar1 != 0)) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined1 *)(param_1 + 0x38) = 0;
        fn_00698fb8(DAT_008977e0,0xffffffff);
        uVar2 = fn_006f7a48(DAT_008977e0);
        fn_00128744(uVar2,0);
        return;
      }
    }
  }
  return;
}



void fn_003f50f0(undefined4 *param_1)

{
  *param_1 = &DAT_00835068;
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_003f506c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_00835068;
  param_1[1] = 0;
  iVar1 = fn_00145b00(0x38,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_001c6fa8();
  }
  param_1[2] = uVar2;
  iVar1 = fn_00145b00(0x30,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_002401c4();
  }
  param_1[3] = uVar2;
  iVar1 = fn_00145b00(0x34,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00259eac();
  }
  param_1[4] = uVar2;
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0023f74c();
  }
  param_1[5] = uVar2;
  return param_1;
}



void fn_003f5004(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



undefined4 fn_003f4fe0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_006b4f58(*(undefined4 *)(param_1 + 0x14));
  fn_00257c9c(*(undefined4 *)(param_1 + 0x14));
  return uVar1;
}



void fn_003f4f74(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x34) = param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  iVar1 = DAT_008977e0;
  piVar2 = *(int **)(DAT_008977e0 + 0x50);
  *(int **)(DAT_008977e0 + 0x180) = piVar2;
  *(code **)(iVar1 + 0x178) = fn_006966bc;
  *(undefined4 *)(iVar1 + 0x17c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00697f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 8))(piVar2);
  return;
}



void fn_003f4edc(int param_1,undefined4 param_2)

{
  undefined1 auStack_100 [244];
  
  fn_00301f50(auStack_100,0xf0);
  fn_00237c74(auStack_100,(int)*(short *)(*(int *)(param_1 + 8) + 0xe),0xff,0);
  fn_00301f50(param_2,0xf0);
  fn_0017821c(param_2,auStack_100,0xf0);
  fn_0024fa24(param_2);
  fn_0024f108(param_2,0);
  return;
}



undefined4 * fn_003f4e70(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  *param_1 = &DAT_00835020;
  uVar3 = param_1[8];
  uVar1 = uVar3;
  if ((uint)param_1[9] < uVar3) {
    do {
      uVar1 = uVar1 + 0x1c;
    } while (uVar1 != param_1[9]);
  }
  iVar2 = (int)((longlong)(int)(param_1[10] - uVar3) * -0x6db6db6d +
                ((ulonglong)(param_1[10] - uVar3) << 0x20) >> 0x20);
  fn_001008c4(uVar3,(iVar2 >> 4) - (iVar2 >> 0x1f),0);
  *param_1 = &DAT_00825100;
  uVar3 = param_1[1];
  uVar1 = uVar3;
  if ((uint)param_1[2] < uVar3) {
    do {
      uVar1 = uVar1 + 0xc;
    } while (uVar1 != param_1[2]);
  }
  fn_001008c4(uVar3,(int)(param_1[3] - uVar3) / 0xc,0,uVar3,unaff_r4,in_lr);
  return param_1;
}


