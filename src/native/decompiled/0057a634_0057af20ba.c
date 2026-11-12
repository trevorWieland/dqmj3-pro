#include "0057a634_0057af20ba.h"



void fn_0057ac08(int param_1)

{
  fn_0057a784();
  fn_00689824(param_1,0);
  *(undefined1 *)(param_1 + 0x10c) = 2;
  return;
}



void fn_0057ab54(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  if (iVar1 * iVar2 <= param_2) {
    iVar1 = fn_006ba274(param_1);
    iVar2 = fn_006ba284(param_1);
    iVar3 = fn_006ba274(param_1);
    if (param_2 < iVar2 * iVar3 + iVar1) {
      iVar1 = fn_006ba284(param_1);
      iVar2 = fn_006ba274(param_1);
      param_2 = param_2 - iVar1 * iVar2;
      (**(code **)(*param_1 + 0x14c))(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0057ac00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x150))(param_1,param_2,param_3);
      return;
    }
  }
  return;
}



void fn_0057a95c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_008417f8;
  param_1[0x39] = &DAT_00841944;
  uVar1 = param_1[0x44];
  uVar2 = uVar1;
  if ((uint)param_1[0x45] < uVar1) {
    do {
      uVar2 = uVar2 + 0x428;
    } while (uVar2 != param_1[0x45]);
  }
  iVar3 = (int)((longlong)(int)(param_1[0x46] - uVar1) * -0x99fc267 +
                ((ulonglong)(param_1[0x46] - uVar1) << 0x20) >> 0x20);
  fn_001008c4(uVar1,(iVar3 >> 10) - (iVar3 >> 0x1f),0);
  fn_00397a78(param_1);
  return;
}


