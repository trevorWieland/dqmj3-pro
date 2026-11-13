#include "001dcc90_001dcf20.h"



undefined4 fn_001dcf20(int param_1,int param_2,short param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0x208) != -1) &&
     (iVar1 = fn_0025988c(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8)),
     1 < iVar1)) {
    fn_006aa538(param_1,(int)*(char *)(param_1 + 0x208));
    iVar1 = fn_00242b0c();
    if (((iVar1 == 0) && ((*(char *)(param_1 + 0x22d) != '\v' || (*(int *)(param_1 + 0x438) == 5))))
       && ((param_4 == 0 || (0xc1efffff < *(uint *)(param_1 + 0x31c))))) {
      if (param_2 != 0) {
        uVar2 = fn_006f7388(DAT_008977e0);
        iVar1 = fn_006b4240(uVar2,param_2);
        if ((iVar1 != 0) && (iVar1 = fn_006bab48(iVar1,(int)param_3), iVar1 != 0)) {
          return 0;
        }
      }
      piVar3 = (int *)fn_006f7508(DAT_008977e0);
      iVar1 = (**(code **)(*piVar3 + 0x70))();
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          piVar3 = (int *)fn_006f7508(DAT_008977e0);
          uVar2 = (**(code **)(*piVar3 + 0x74))(piVar3,iVar4);
          fn_00683320(uVar2,8,0);
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      uVar2 = fn_006f7a5c(DAT_008977e0);
      fn_001d6b00(uVar2,0xc,3,0);
      if (param_4 != 0) {
        fn_001eab44(param_1,0x754d,param_1 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  return 0;
}



void fn_001dcee8(int *param_1)

{
  fn_001ea890(param_1,10);
                    /* WARNING: Could not recover jumptable at 0x001dcf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x44))(param_1,0x38,4,0);
  return;
}



void fn_001dcdf0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float in_s0;
  float fVar3;
  float fVar4;
  float local_20;
  float local_1c;
  undefined4 uStack_18;
  
  fVar3 = 1.0;
  if ((char)param_1[0x82] == -1) {
    iVar1 = fn_00154ac8(0x18);
    if (iVar1 == 0) goto LAB_001dce78;
    if ((param_1[0xde] != 0) && (iVar1 = fn_0017fde4(), iVar1 != 0)) {
      uVar2 = fn_0017fde4(param_1[0xde]);
      fn_002cd6b0(uVar2,1);
    }
    fn_001cac64(1);
  }
  else {
    fn_0025988c(param_1[(char)param_1[0x82] + 0x7e]);
    fn_0025a2ac();
  }
  fVar3 = in_s0;
LAB_001dce78:
  fVar4 = fVar3;
  (**(code **)(*param_1 + 0x20))(param_1);
  if ((char)param_1[0x82] == -1) {
    fn_001cac64(0);
    fVar4 = fVar3;
  }
  uStack_18 = 0x3e99999a;
  local_20 = fVar4 * 15.0;
  local_1c = fVar4 * 40.0;
  fn_001d9bb4(param_1,&local_20);
  return;
}



void fn_001dcc90(int param_1,undefined4 param_2,short param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x1b1) != '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x140);
  if (iVar1 != 0) {
    if (iVar1 == -1) {
      return;
    }
    goto LAB_001dcd90;
  }
  uVar2 = fn_006f7388(DAT_008977e0);
  iVar3 = fn_006b4240(uVar2,param_2);
  iVar1 = 0x1000966;
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 0x208) != -1) {
      fn_006aa538(param_1);
      piVar4 = (int *)fn_00242b4c();
      iVar1 = *piVar4;
    }
    goto LAB_001dcd90;
  }
  iVar6 = (int)param_3;
  if (*(char *)(param_1 + 0x208) == -1) {
    iVar5 = fn_006bab38(iVar3,iVar6);
    if (iVar5 == 0) goto LAB_001dcd90;
LAB_001dcd74:
    iVar1 = fn_006baaf4(iVar3,iVar6);
  }
  else {
    iVar1 = fn_006bab38(iVar3,iVar6);
    if ((iVar1 == 0xc || iVar1 == 0xd) || iVar1 == 0xe) {
      fn_006aa538(param_1,(int)*(char *)(param_1 + 0x208));
      iVar1 = fn_00242b0c();
      if (iVar1 == 0) goto LAB_001dcd74;
    }
    fn_006aa538(param_1,(int)*(char *)(param_1 + 0x208));
    piVar4 = (int *)fn_00242b4c();
    iVar1 = *piVar4;
  }
LAB_001dcd90:
  if (*(int *)(param_1 + 0x378) != 0 || iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}


