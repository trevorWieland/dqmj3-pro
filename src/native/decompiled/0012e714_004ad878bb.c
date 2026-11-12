#include "0012e714_004ad878bb.h"



undefined4
fn_004ad878(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [68];
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  fn_004b73b0(auStack_78);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_78,*(undefined2 *)(param_1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_78,local_30);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return 0;
  }
  fn_004ba7ac(auStack_78,0x15);
  fn_0045f6f0(auStack_78,param_3);
  fn_0045f6f0(auStack_78,local_28);
  fn_0015ef4c(auStack_78,param_5,4);
  fn_0045f6f0(auStack_78,param_6);
  (**(code **)(*DAT_008c3dcc + 8))(DAT_008c3dcc,auStack_78,*(undefined4 *)(param_7 + 4));
  (**(code **)(*DAT_008c3dcc + 8))(DAT_008c3dcc,auStack_78,*(undefined4 *)(param_8 + 4));
  DAT_008e93a4 = &DAT_004adbf8;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(param_1,local_30,auStack_78);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,local_30,auStack_78);
  fn_004b7520(auStack_78);
  return uVar4;
}



bool fn_0026c63c(undefined4 *param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)param_1[9] + 0x18))();
  iVar1 = (**(code **)(*(int *)param_1[9] + 0x2c))();
  if (iVar1 == 0) {
    (**(code **)(*(int *)param_1[9] + 0x20))();
  }
  fn_0023e6c8(param_1[1]);
  (**(code **)(*(int *)*param_1 + 0x10))();
  (**(code **)(*DAT_00897808 + 8))(DAT_00897808,1);
  (**(code **)(*DAT_0089780c + 8))(DAT_0089780c,1);
  return iVar1 == 0;
}


