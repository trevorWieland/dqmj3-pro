#include "0066d818_0066de3c.h"



void fn_0066de3c(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x20))(param_1,param_2 + 0x4c);
                    /* WARNING: Could not recover jumptable at 0x0066de68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))(param_1);
  return;
}



void fn_0066ddc8(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_001296d0(DAT_00898840);
  if ((iVar1 == 0) && (*(char *)(DAT_00898840 + 0x60) == '\0')) {
    fn_0066e41c(DAT_00898840,param_2);
    return;
  }
  (**(code **)(*param_1 + 0x20))(param_1,DAT_00898840 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x0066de24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))(param_1);
  return;
}



void fn_0066dc94(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  if (param_1[9] == 2) {
    if (param_2 == 0) {
      iVar1 = fn_001296d0(DAT_00898840);
      if ((iVar1 == 0) && (*(char *)(DAT_00898840 + 0x60) == '\0')) {
        fn_0066e41c(DAT_00898840,param_3);
        return;
      }
      (**(code **)(*param_1 + 0x20))(param_1,DAT_00898840 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x0066dd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c))(param_1);
      return;
    }
    bVar2 = param_2 == 1;
    if (bVar2) {
      param_2 = (uint)*(byte *)(param_3 + 0x48);
    }
    if (bVar2 && param_2 == 0) {
      if (*(int *)(param_3 + 0x50) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0066dd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1c))();
        return;
      }
      (**(code **)(*param_1 + 0x20))(param_1,param_3 + 0x4c);
                    /* WARNING: Could not recover jumptable at 0x0066dcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c))(param_1);
      return;
    }
  }
  return;
}



void fn_0066dc70(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  bool bVar3;
  
  fn_0066dd80();
  iVar2 = param_1[0x26];
  if (param_1[9] == 2) {
    if (param_2 == 0) {
      iVar1 = fn_001296d0(DAT_00898840);
      if ((iVar1 == 0) && (*(char *)(DAT_00898840 + 0x60) == '\0')) {
        fn_0066e41c(DAT_00898840,iVar2);
        return;
      }
      (**(code **)(*param_1 + 0x20))(param_1,DAT_00898840 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x0066dd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c))(param_1);
      return;
    }
    bVar3 = param_2 == 1;
    if (bVar3) {
      param_2 = (uint)*(byte *)(iVar2 + 0x48);
    }
    if (bVar3 && param_2 == 0) {
      if (*(int *)(iVar2 + 0x50) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0066dd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1c))();
        return;
      }
      (**(code **)(*param_1 + 0x20))
                (param_1,iVar2 + 0x4c,*(code **)(*param_1 + 0x20),2,unaff_r4,unaff_r5,unaff_r6,in_lr
                );
                    /* WARNING: Could not recover jumptable at 0x0066dcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c))(param_1);
      return;
    }
  }
  return;
}



void fn_0066dd80(int param_1,int param_2)

{
  if ((((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x24) == 1)) && (param_2 != 0)) &&
     (param_2 == 1)) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x3c);
  }
  return;
}



void fn_0066dc48(int param_1)

{
  fn_0066ec18(param_1 + 0x40);
  fn_0066e130(DAT_00898840);
  fn_0066ec10(DAT_00898840);
  return;
}



void fn_0066dc40(int *param_1)

{
  fn_0066ec18(*param_1 + 0x40);
  fn_0066e130(DAT_00898840);
  fn_0066ec10(DAT_00898840);
  return;
}



void fn_0066dbc8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00859e58;
  uVar1 = param_1[0x18];
  uVar2 = uVar1;
  if ((uint)param_1[0x19] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x19]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x1a] - uVar1) >> 2,0);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



bool fn_0066db88(int *param_1)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) != 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,2);
  }
  return bVar1;
}



undefined4 fn_0066da90(int *param_1)

{
  int iVar1;
  
  fn_00673cb8();
  if (param_1[0x11] == 1) {
    if (param_1[0x12] == 0) {
      fn_00524a44(0);
      param_1[0x13] = param_1[0x13] | 1;
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 1;
    }
    if (param_1[0x12] != 1) {
      return 1;
    }
    iVar1 = fn_00673be8(param_1);
  }
  else {
    if (param_1[0x11] != 2) {
      return 1;
    }
    if (param_1[0x12] == 0) {
      if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
        fn_005252ec();
      }
      param_1[0x13] = 0;
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 1;
    }
    if (param_1[0x12] != 1) {
      return 1;
    }
    iVar1 = fn_00673be8(param_1);
  }
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return 1;
}



undefined4 fn_0066da64(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    fn_00673b84(param_1);
  }
  return 1;
}



bool fn_0066da34(int *param_1)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) == 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  return bVar1;
}



undefined4 fn_0066d8d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar3 = 1;
  piVar1 = (int *)fn_0066eb80(DAT_00898840,3);
  iVar2 = param_1[0x11];
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1);
    if ((iVar2 == 0) &&
       (((*(byte *)(piVar1 + 0x13) & 0x10) == 0 || (iVar2 = fn_00666a24(piVar1), iVar2 != 0)))) {
      (**(code **)(*param_1 + 0x34))(param_1);
      param_1[0x11] = 1;
    }
  }
  else if (iVar2 == 1) {
    iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1);
    if (iVar2 == 0) {
      fn_00119b40(&local_28);
      (**(code **)(*piVar1 + 0x24))(piVar1,&local_28);
      uVar3 = 0;
      param_1[0x13] = local_28;
      param_1[0x14] = local_24;
      param_1[0x15] = local_20;
      param_1[0x16] = local_1c;
      param_1[0x17] = local_18;
      param_1[0x18] = local_14;
    }
  }
  else if (iVar2 == 2) {
    fn_00119b40(&local_28);
    fn_0066ec18(&local_28);
    param_1[0x14] = 5;
    param_1[0x15] = local_20;
    param_1[0x13] = local_28;
    param_1[0x18] = (int)piVar1;
    param_1[0x16] = 3;
    param_1[0x17] = local_18;
    uVar3 = 0;
  }
  return uVar3;
}



bool fn_0066d890(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    iVar2 = param_2[1];
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    iVar5 = param_2[4];
    iVar6 = param_2[5];
    param_1[0x13] = *param_2;
    param_1[0x14] = iVar2;
    param_1[0x15] = iVar3;
    param_1[0x16] = iVar4;
    param_1[0x17] = iVar5;
    param_1[0x18] = iVar6;
  }
  return iVar1 == 0;
}



void fn_0066d818(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00859e58;
  uVar1 = param_1[0x18];
  uVar2 = uVar1;
  if ((uint)param_1[0x19] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x19]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x1a] - uVar1) >> 2,0);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}


