#include "0068c70c_0068cc1c.h"



void fn_0068cc1c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (*(int *)(iVar2 + 0x58) != 0) {
    uVar1 = fn_006a89d0();
    *(undefined4 *)(iVar2 + 800) = uVar1;
  }
  return;
}



void fn_0068cc08(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = fn_005f65ec();
  *(undefined4 *)(iVar2 + 0x324) = uVar1;
  return;
}



void fn_0068cb94(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  fn_00107aac(param_2);
  *(undefined4 *)(iVar1 + 0x324) = param_2;
  return;
}



void fn_0068cb5c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x2f8) != 0) {
    fn_00122668();
    if (*(int *)(iVar1 + 0x2f8) != 0) {
      fn_0012271c();
      fn_002feef8();
      *(undefined4 *)(iVar1 + 0x2f8) = 0;
    }
  }
  return;
}



void fn_0068cb14(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = fn_006a8714(*(undefined4 *)(iVar2 + 0x58));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_006a8660(*(undefined4 *)(iVar2 + 0x58));
  }
  return;
}



int fn_0068cae0(int *param_1)

{
  int *piVar1;
  
  if (*(int *)(*param_1 + 0x328) == 0) {
    return -1;
  }
  piVar1 = *(int **)(*(int *)(*param_1 + 0x328) + 4);
  return (piVar1[1] - *piVar1) / 0x14;
}



int fn_0068cabc(int *param_1)

{
  int *piVar1;
  
  if (*(int *)(*param_1 + 0x328) == 0) {
    return 0;
  }
  piVar1 = *(int **)(*(int *)(*param_1 + 0x328) + 4);
  return ((piVar1[1] - *piVar1) / 0x14) * 0x14 + (piVar1[4] - piVar1[3] >> 2) * 4 +
         (piVar1[7] - piVar1[6] >> 2) * 4 + (piVar1[10] - piVar1[9] >> 2) * 4 + 0x8c;
}



void fn_0068ca28(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  fn_00122344(*(undefined4 *)(iVar1 + 0x304));
  if (*(int *)(iVar1 + 0x304) != 0) {
    fn_0012238c();
    fn_002feef8();
    *(undefined4 *)(iVar1 + 0x304) = 0;
  }
  fn_0011dee0(*(undefined4 *)(iVar1 + 0x2f4));
  if (*(int *)(iVar1 + 0x2f4) != 0) {
    fn_0011e054();
    fn_002feef8();
    *(undefined4 *)(iVar1 + 0x2f4) = 0;
  }
  fn_0011e0ac(*(undefined4 *)(iVar1 + 0x2f0));
  if (*(int *)(iVar1 + 0x2f0) != 0) {
    fn_0011e134();
    fn_002feef8();
    *(undefined4 *)(iVar1 + 0x2f0) = 0;
  }
  return;
}



void fn_0068c8d0(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = (int *)*param_1;
  fn_00665964(piVar2[0x11]);
  uVar3 = 0;
  if (piVar2[8] - piVar2[7] >> 2 != 0) {
    do {
      uVar1 = piVar2[8] - piVar2[7] >> 2;
      if (uVar1 <= uVar3) {
        fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar3,uVar1);
      }
      if (*(int *)(piVar2[7] + uVar3 * 4) != -1) {
        iVar4 = piVar2[10];
        uVar1 = piVar2[8] - piVar2[7] >> 2;
        if (uVar1 <= uVar3) {
          fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar3,uVar1);
        }
        fn_00265538(iVar4,*(undefined4 *)(piVar2[7] + uVar3 * 4));
        uVar1 = piVar2[8] - piVar2[7] >> 2;
        if (uVar1 <= uVar3) {
          fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar3,uVar1);
        }
        *(undefined4 *)(piVar2[7] + uVar3 * 4) = 0xffffffff;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(piVar2[8] - piVar2[7] >> 2));
  }
  if (piVar2[3] != -1) {
    fn_00265538(piVar2[10]);
    piVar2[3] = -1;
  }
  if (piVar2[2] != -1) {
    fn_00265538(piVar2[10]);
    piVar2[2] = -1;
  }
  if (*piVar2 != -1) {
    fn_00265538(piVar2[10]);
    *piVar2 = -1;
  }
  return;
}



void fn_0068c80c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r4;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *param_1;
  iVar1 = fn_00145b00(4,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_002ef988();
  }
  iVar1 = *(int *)(iVar3 + 0x2fc);
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_0012291c(iVar1);
      fn_002feef8();
    }
    *(int *)(iVar3 + 0x2fc) = iVar2;
  }
  fn_002ef49c(*(undefined4 *)(iVar3 + 0x2fc),*(undefined4 *)(iVar3 + 0x2d8));
  iVar1 = fn_00145b00(4,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_002ef448();
  }
  iVar1 = *(int *)(iVar3 + 0x2f8);
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_0012271c(iVar1);
      fn_002feef8();
    }
    *(int *)(iVar3 + 0x2f8) = iVar2;
  }
  fn_002ee9c8(**(undefined4 **)(iVar3 + 0x2f8),*(undefined4 *)(iVar3 + 0x2d8),
               *(char *)(iVar3 + 100) == '\x01',param_4,unaff_r4,in_lr);
  return;
}



int fn_0068c7f4(int *param_1)

{
  return *param_1 + 0x2c4;
}



void fn_0068c778(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *param_1;
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00350394();
  }
  piVar4 = *(int **)(iVar3 + 0x328);
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(iVar3 + 0x328) = piVar2;
  }
  fn_0034f760(*(undefined4 *)(iVar3 + 0x328),param_2,param_3,param_4);
  return;
}



void fn_0068c764(int *param_1,undefined4 param_2)

{
  fn_0017821c(*param_1 + 100,param_2,0x25d);
  return;
}



void fn_0068c744(undefined4 *param_1)

{
  fn_0068cc60(*param_1);
  return;
}



void fn_0068c70c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x300) != 0) {
    fn_0012206c();
    if (*(int *)(iVar1 + 0x300) != 0) {
      fn_0012219c();
      fn_002feef8();
      *(undefined4 *)(iVar1 + 0x300) = 0;
    }
  }
  return;
}


