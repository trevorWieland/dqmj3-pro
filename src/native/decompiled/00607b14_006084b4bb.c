#include "00607b14_006084b4bb.h"



void fn_006084b4(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  uVar4 = *param_3;
  iVar2 = fn_001249d0();
  iVar2 = fn_0048a058(*(undefined4 *)(iVar2 + 0x10),uVar4);
  if (iVar2 != 0) {
    local_20 = *param_2;
    iStack_1c = param_2[1];
    iStack_18 = param_2[2];
    if (local_20 < 0) {
      uVar4 = 3;
    }
    else {
      uVar4 = 2;
    }
    fn_00455e8c(iVar2,uVar4,&local_20,1);
  }
  (**(code **)(**(int **)(param_1 + 4) + 0x40))(*(int **)(param_1 + 4),param_1);
                    /* WARNING: Could not recover jumptable at 0x00608558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_00608434(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x1d8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00608464(iVar1,param_1);
  return;
}



void fn_006083c4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = &DAT_0084fa7c;
  return;
}


