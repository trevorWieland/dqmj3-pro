#include "00480104_00480c5ca.h"



void fn_00480334(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x105c);
  (**(code **)(*piVar1 + 8))();
  *(undefined1 *)(param_1 + 0x1086) = 1;
                    /* WARNING: Could not recover jumptable at 0x00480370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



void fn_004801ac(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_2 + 0x105c);
  (**(code **)(*piVar1 + 8))();
  iVar2 = *(int *)(param_2 + 0x1050);
  if (iVar2 < 0) {
    iVar3 = *(int *)(param_2 + 0x1054);
    param_1[2] = *(int *)(param_2 + 0x1058);
    *param_1 = iVar2;
    param_1[1] = iVar3;
                    /* WARNING: Could not recover jumptable at 0x0048020c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return;
  }
  if (*(char *)(param_2 + 0x1086) == '\0') {
    iVar2 = *(int *)(param_2 + 0x10b4);
    if (param_4 <= (uint)(*(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18))) {
      if (param_4 != 0) {
        fn_0047358c(iVar2,param_3,param_4);
      }
      *param_1 = 0x10001;
      param_1[1] = (int)&DAT_007dba44;
      param_1[2] = 0x71;
                    /* WARNING: Could not recover jumptable at 0x0048028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0xc))(piVar1);
      return;
    }
  }
  *param_1 = -0x7ffaffff;
  param_1[1] = (int)&DAT_007dba44;
  param_1[2] = 0x71;
                    /* WARNING: Could not recover jumptable at 0x00480254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



void fn_00480160(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x105c);
  (**(code **)(*piVar1 + 8))();
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10c4) = param_2;
                    /* WARNING: Could not recover jumptable at 0x004801a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



void fn_00480104(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(param_2 + 0x105c);
  (**(code **)(*piVar1 + 8))();
  uVar2 = fn_005246b4(param_2 + 0x38,param_3,param_4);
  fn_0048029c(param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0048015c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



void fn_0048029c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 < 0) {
    if (param_2 == -0x275f5fba) {
      uVar1 = 0x80050014;
    }
    else if (param_2 == -0x275f5fb0) {
      uVar1 = 0x80050015;
    }
    else {
      iVar2 = -0x275f5fb9;
      if (param_2 != -0x275f5fb9) {
        iVar2 = -0x275f5fb8;
      }
      if (param_2 == -0x275f5fb9 || param_2 == iVar2) {
        *param_1 = 0x80050009;
        param_1[1] = &DAT_007dba44;
        param_1[2] = 0x71;
        return;
      }
      uVar1 = 0x80050001;
    }
  }
  else {
    uVar1 = 0x10001;
  }
  *param_1 = uVar1;
  param_1[1] = &DAT_007dba44;
  param_1[2] = 0x71;
  return;
}


