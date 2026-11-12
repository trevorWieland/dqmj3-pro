#include "001488c4_00148e1c.h"



void fn_00148e1c(int param_1)

{
  fn_00154774();
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 4))();
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  fn_001433d8(*(undefined4 *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_002feef8(*(int *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  fn_0012d73c(*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (DAT_008987d8 == 0) {
    return;
  }
  DAT_008987d8 = DAT_008987d8 + -1;
  if (DAT_008987d8 != 0) {
    return;
  }
  if (DAT_008987d4 == 0) {
    return;
  }
  DAT_008987d4 = DAT_008987d4 + -1;
  if (DAT_008987d4 != 0) {
    return;
  }
  fn_00169f4c();
  if (DAT_008987d0 != 0) {
    (**(code **)(*DAT_008987c4 + 0xc))();
    DAT_008987d0 = 0;
  }
  if (DAT_008987cc != 0) {
    (**(code **)(*DAT_008987c4 + 0xc))();
    DAT_008987cc = 0;
  }
  fn_0015f770();
  fn_0013c674();
  return;
}



undefined4 fn_00148d1c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = fn_0012ebb4(param_1,param_1 + 4,param_2);
  if ((*(int *)(*(int *)(iVar1 + 8) + 8) == 0) &&
     (iVar2 = fn_0012ebb4(param_1,param_1 + 4,param_2), *(int *)(*(int *)(iVar2 + 8) + 8) == 0)) {
    iVar3 = fn_00148c5c(*(undefined4 *)(param_1 + 0x10),param_2);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = fn_0015a320(*(undefined4 *)(param_1 + 0x10),param_2);
    }
    fn_001422a0(*(undefined4 *)(iVar2 + 8),uVar4);
    (**(code **)(**(int **)(iVar2 + 8) + 0x38))(*(int **)(iVar2 + 8),0x3f);
  }
  return *(undefined4 *)(iVar1 + 8);
}



void fn_00148ca4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_0012ebb4(param_1,param_1 + 4,param_2);
  if (*(int *)(*(int *)(iVar1 + 8) + 8) != 0) {
    return;
  }
  iVar2 = fn_00148c5c(*(undefined4 *)(param_1 + 0x10),param_2);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0015a320(*(undefined4 *)(param_1 + 0x10),param_2);
  }
  fn_001422a0(*(undefined4 *)(iVar1 + 8),uVar3);
                    /* WARNING: Could not recover jumptable at 0x00148d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(iVar1 + 8) + 0x38))(*(int **)(iVar1 + 8),0x3f);
  return;
}



bool fn_00148c80(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_0012ebb4(param_1,param_1 + 4,param_2);
  return *(int *)(*(int *)(iVar1 + 8) + 8) != 0;
}



bool fn_00148c5c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_0012ea60(param_1,param_1 + 4,param_2);
  iVar1 = fn_00145aac(*(undefined4 *)(iVar1 + 8));
  return iVar1 == 1;
}



bool fn_00148c38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  iVar1 = fn_0016752c(param_1,param_1 + 8,param_2);
  iVar1 = fn_0012ea60(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 4,*(undefined4 *)(iVar1 + 8),
                       param_4,unaff_r4,in_lr);
  iVar1 = fn_00145aac(*(undefined4 *)(iVar1 + 8));
  return iVar1 == 1;
}



void fn_00148b94(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0xc) + -1;
  *(int *)(param_2 + 0xc) = iVar2;
  if ((0 < iVar2) || (fn_0017d90c(param_1 + 4,param_2 + 0x10), param_2 == 0)) {
    return;
  }
  fn_0012d73c(*(undefined4 *)(param_2 + 8));
  if (*(undefined4 **)(param_2 + 4) == &DAT_008f9cf4) goto LAB_00148c20;
  piVar1 = *(undefined4 **)(param_2 + 4) + -3;
  iVar2 = *piVar1;
  if (iVar2 != -1) {
    if (piVar1 == &DAT_008f9ce8) goto LAB_00148c20;
    *piVar1 = iVar2 + -1;
    if (iVar2 != 0) goto LAB_00148c20;
  }
  fn_001008c4(*(int *)(param_2 + 4) + -0xc,*(int *)(*(int *)(param_2 + 4) + -8) + 8,0);
LAB_00148c20:
  fn_002feef8(param_2);
  return;
}



undefined4 fn_00148a34(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_00173d14();
  fn_00158128(param_1,&DAT_00148b3c,0xffffffff);
  iVar1 = fn_00157df4(param_1,0xfffffffe);
  if (-1 < iVar1) {
    iVar1 = fn_00166d54(param_1,0xffffffff);
    if (iVar1 < 0) {
      uVar2 = fn_001581d0(param_1,(char *)&DAT_00148b44);
      return uVar2;
    }
    fn_00158128(param_1,&DAT_00148b60,0xffffffff);
    fn_00158070(param_1);
    iVar1 = fn_00167030(param_1,0xfffffffd);
    if (-1 < iVar1) {
      fn_00158128(param_1,&DAT_00148b64,0xffffffff);
      fn_00158070(param_1);
      iVar1 = fn_00167030(param_1,0xfffffffd);
      if (-1 < iVar1) {
        fn_00158128(param_1,&DAT_00148b68,0xffffffff);
        fn_00158070(param_1);
        iVar1 = fn_00167030(param_1,0xfffffffd);
        if (-1 < iVar1) {
          return 0;
        }
      }
    }
  }
  uVar2 = fn_001581d0(param_1,&DAT_00148920);
  return uVar2;
}



undefined4 fn_00148924(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_00158128(param_2,&DAT_00148a24,0xffffffff);
  iVar1 = fn_00157df4(param_2,param_3 + -1);
  if ((-1 < iVar1) && (iVar1 = fn_00157f00(param_2,0xffffffff,param_1), -1 < iVar1)) {
    fn_00173cb8(param_2,1);
    fn_00158128(param_2,&DAT_00148a28,0xffffffff);
    iVar1 = fn_00157df4(param_2,param_3 + -1);
    if ((-1 < iVar1) && (iVar1 = fn_00157f00(param_2,0xffffffff,param_1 + 4), -1 < iVar1)) {
      fn_00173cb8(param_2,1);
      fn_00158128(param_2,&DAT_00148a2c,0xffffffff);
      iVar1 = fn_00157df4(param_2,param_3 + -1);
      if ((-1 < iVar1) && (iVar1 = fn_00157f00(param_2,0xffffffff,param_1 + 8), -1 < iVar1)) {
        fn_00173cb8(param_2,1);
        return 0;
      }
    }
  }
  uVar2 = fn_001581d0(param_2,&DAT_00148920);
  return uVar2;
}



undefined * fn_00148918(void)

{
  return &DAT_00148920;
}



undefined4 fn_001488c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,param_2);
  if ((iVar1 < 0) || (iVar1 = fn_00157f00(param_1,0xffffffff,param_3), iVar1 < 0)) {
    uVar2 = fn_001581d0(param_1,&DAT_00148920);
    return uVar2;
  }
  return 0;
}


