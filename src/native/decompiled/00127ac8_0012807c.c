#include "00127ac8_0012807c.h"



void fn_0012807c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(iVar2 + 4);
  if (piVar1 != (int *)0x0) {
    param_2 = *(int *)(iVar2 + 8);
  }
  if (piVar1 != (int *)0x0 && param_2 != 0) {
    (**(code **)(*piVar1 + 0xc))();
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  return;
}



void fn_00127fb4(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *in_r12;
  
  iVar3 = *(int *)(param_1 + 4);
  if (param_2 != (int *)0x0) {
    if (*(int **)(iVar3 + 4) == param_2) {
      do {
        fn_0012d6a4(1000000,0);
      } while (*(int **)(iVar3 + 4) == param_2);
    }
    else {
      fn_00170704(iVar3 + 0x1c);
      fn_00170704();
      piVar1 = *(int **)(iVar3 + 8);
      piVar2 = *(int **)(iVar3 + 0xc);
      while( true ) {
        if (piVar1 != piVar2) {
          in_r12 = (int *)*piVar1;
        }
        if (piVar1 == piVar2 || in_r12 == param_2) break;
        piVar1 = piVar1 + 1;
      }
      fn_001707b4(iVar3 + 0x1c);
      if (piVar1 != piVar2) {
        fn_00142d4c(iVar3,param_2);
      }
      fn_001707b4(iVar3 + 0x1c);
    }
    if (param_2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00128070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 4))(param_2);
      return;
    }
  }
  return;
}



int * fn_00127ef8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *local_28 [7];
  
  local_28[0] = &DAT_008f9cf4;
  uVar1 = fn_00156b34(*(undefined4 *)(param_1 + 4),local_28,&DAT_0089a4f4,param_3,param_2);
  iVar2 = fn_00145b00(0x3c,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_001439d0(iVar2,uVar1,local_28[0],param_4,param_5,param_6,param_7,param_8,
                                 param_9,param_10);
  }
  fn_001588d4(local_28);
  (**(code **)(*piVar3 + 8))(piVar3);
  return piVar3;
}



int * fn_00127e6c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *local_14;
  
  local_14 = &DAT_008f9cf4;
  uVar1 = fn_00156b34(*(undefined4 *)(param_1 + 4),&local_14,&DAT_0089a4f4,param_3,param_2);
  iVar2 = fn_00145b00(0x3c,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_00153cc8(iVar2,uVar1,local_14,param_4,param_5);
  }
  fn_001588d4(&local_14);
  (**(code **)(*piVar3 + 8))(piVar3);
  return piVar3;
}



undefined4 * fn_00127dec(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &DAT_00858910;
  param_1[1] = 0;
  iVar1 = fn_00145b00(0x968,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_00142828(iVar1,param_2,param_3);
  }
  iVar1 = param_1[1];
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_00142abc(iVar1);
      fn_002feef8();
    }
    param_1[1] = iVar2;
  }
  return param_1;
}



void fn_00127d2c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  *(int *)(iVar2 + 0x7cc) = param_2;
  iVar3 = *(int *)(param_2 + 4) + 8;
  fn_0014524c(iVar3,iVar2 + 0x7b4,(char *)&DAT_00142808);
  fn_0014524c(iVar3,iVar2 + 0x7bc,(char *)&DAT_00142814);
  fn_0014524c(iVar3,iVar2 + 0x7c4,(char *)&DAT_0014281c);
  uVar1 = fn_0015fa88(*(undefined4 *)(iVar2 + 8));
  fn_0015d0e0(iVar2 + 0x18,iVar2 + 0x7b4,uVar1,0xb);
  uVar1 = fn_0015fa88(*(undefined4 *)(iVar2 + 0xc));
  fn_0015d0e0(iVar2 + 0x18,iVar2 + 0x7bc,uVar1,0xf);
  uVar1 = fn_0015fa88(*(undefined4 *)(iVar2 + 0x10));
  fn_0015d0e0(iVar2 + 0x18,iVar2 + 0x7c4,uVar1,7);
  return;
}



void fn_00127cc4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00145ac0(*(undefined4 *)(param_1 + 4));
  fn_0013b36c(param_1 + 8,uVar1,0,0xffffffff);
  fn_0014524c(param_1 + 8,param_1 + 0x128f0,(char *)&DAT_00127d14);
  fn_0014524c(param_1 + 8,param_1 + 0x128f8,(char *)&DAT_00127d20);
  return;
}



void fn_00127cac(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  
  puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 8) + param_2 * 0xc);
  *puVar1 = in_s0;
  puVar1[1] = in_s1;
  puVar1[2] = in_s2;
  return;
}



undefined4 * fn_00127c78(undefined4 *param_1)

{
  *param_1 = &DAT_00859440;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}



undefined4 * fn_00127bf8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  param_1[1] = 0;
  *param_1 = &DAT_008588d4;
  piVar1 = (int *)fn_00145b00(8,&DAT_00812c8c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)&DAT_008588c4;
    iVar2 = fn_00146994(0x1000);
    piVar1[1] = iVar2;
  }
  piVar3 = (int *)param_1[1];
  if (piVar3 != piVar1) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    param_1[1] = piVar1;
  }
  return param_1;
}



void fn_00127adc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = (&DAT_007d47b4)[iVar3 * 2];
    if (iVar1 <= (int)(&DAT_007d47b8)[iVar3 * 2]) {
      do {
        iVar2 = param_1 + iVar1 * 0x10;
        *(undefined4 *)(iVar2 + 4) = 0;
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined4 *)(iVar2 + 0x10) = 0;
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x44) = 0;
        }
        else if (iVar1 == 2) {
          *(undefined4 *)(param_1 + 0x48) = 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 <= (int)(&DAT_007d47b8)[iVar3 * 2]);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  *(undefined1 *)(param_1 + 0x414) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x41c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x424) = 0;
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined4 *)(param_1 + 0x42c) = 0;
  *(undefined4 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x434) = 0;
  *(undefined1 *)(param_1 + 0x438) = 0;
  *(undefined1 *)(param_1 + 0x439) = 0;
  *(undefined2 *)(param_1 + 0x43a) = 0;
  *(undefined2 *)(param_1 + 0x43c) = 0;
  *(undefined1 *)(param_1 + 0x43e) = 0;
  *(undefined1 *)(param_1 + 0x43f) = 0;
  *(undefined2 *)(param_1 + 0x440) = 0;
  *(undefined2 *)(param_1 + 0x442) = 0;
  *(undefined1 *)(param_1 + 0x444) = 0;
  *(undefined1 *)(param_1 + 0x445) = 0;
  *(undefined2 *)(param_1 + 0x446) = 0;
  *(undefined2 *)(param_1 + 0x448) = 0;
  *(undefined1 *)(param_1 + 0x44a) = 0;
  *(undefined1 *)(param_1 + 1099) = 0;
  *(undefined2 *)(param_1 + 0x44c) = 0;
  *(undefined2 *)(param_1 + 0x44e) = 0;
  *(undefined1 *)(param_1 + 0x450) = 0;
  *(undefined1 *)(param_1 + 0x451) = 0;
  *(undefined2 *)(param_1 + 0x452) = 0;
  *(undefined2 *)(param_1 + 0x454) = 0;
  *(undefined1 *)(param_1 + 0x456) = 0;
  fn_00301f50(param_1 + 0x458,0x60);
  return;
}



void fn_00127ac8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar3 = 0;
  do {
    iVar1 = (&DAT_007d47b4)[iVar3 * 2];
    if (iVar1 <= (int)(&DAT_007d47b8)[iVar3 * 2]) {
      do {
        iVar2 = param_1 + 0x10 + iVar1 * 0x10;
        *(undefined4 *)(iVar2 + 4) = 0;
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined4 *)(iVar2 + 0x10) = 0;
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x54) = 0;
        }
        else if (iVar1 == 2) {
          *(undefined4 *)(param_1 + 0x58) = 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 <= (int)(&DAT_007d47b8)[iVar3 * 2]);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  *(undefined1 *)(param_1 + 0x424) = 0;
  *(undefined4 *)(param_1 + 0x428) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x42c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x434) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined4 *)(param_1 + 0x444) = 0;
  *(undefined1 *)(param_1 + 0x448) = 0;
  *(undefined1 *)(param_1 + 0x449) = 0;
  *(undefined2 *)(param_1 + 0x44a) = 0;
  *(undefined2 *)(param_1 + 0x44c) = 0;
  *(undefined1 *)(param_1 + 0x44e) = 0;
  *(undefined1 *)(param_1 + 0x44f) = 0;
  *(undefined2 *)(param_1 + 0x450) = 0;
  *(undefined2 *)(param_1 + 0x452) = 0;
  *(undefined1 *)(param_1 + 0x454) = 0;
  *(undefined1 *)(param_1 + 0x455) = 0;
  *(undefined2 *)(param_1 + 0x456) = 0;
  *(undefined2 *)(param_1 + 0x458) = 0;
  *(undefined1 *)(param_1 + 0x45a) = 0;
  *(undefined1 *)(param_1 + 0x45b) = 0;
  *(undefined2 *)(param_1 + 0x45c) = 0;
  *(undefined2 *)(param_1 + 0x45e) = 0;
  *(undefined1 *)(param_1 + 0x460) = 0;
  *(undefined1 *)(param_1 + 0x461) = 0;
  *(undefined2 *)(param_1 + 0x462) = 0;
  *(undefined2 *)(param_1 + 0x464) = 0;
  *(undefined1 *)(param_1 + 0x466) = 0;
  fn_00301f50(param_1 + 0x468,0x60);
  return;
}


