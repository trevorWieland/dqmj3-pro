#include "0012e254_004ad318b.h"



undefined4
fn_004ad318(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [68];
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
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
  iVar2 = fn_004bab34(auStack_78,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return 0;
  }
  fn_004ba7ac(auStack_78,0x1a);
  fn_0045f6f0(auStack_78,local_2c);
  fn_0045f6f0(auStack_78,local_28);
  fn_0015ef4c(auStack_78,param_5,4);
  fn_0045f6f0(auStack_78,param_6);
  (**(code **)(*DAT_008c3dcc + 8))(DAT_008c3dcc,auStack_78,*(undefined4 *)(param_7 + 4));
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_8);
  }
  DAT_008e93b8 = fn_004ada28;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_78);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_78);
  fn_004b7520(auStack_78);
  return uVar4;
}



uint fn_002281b4(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_38 [40];
  
  uVar2 = 0;
  if (param_1 != 0) {
    fn_00522550(auStack_38);
    iVar1 = (**(code **)(*DAT_00897894 + 0x30))(DAT_00897894,auStack_38,param_1);
    if (iVar1 != 0) {
      iVar1 = fn_005222ac(auStack_38,&DAT_008cddb4,0x2000);
      if (-1 < iVar1) {
        iVar1 = fn_002273f0(&DAT_008cddb4,0);
        uVar2 = (uint)(iVar1 != 0);
        if (iVar1 != 0) goto LAB_0022822c;
      }
      fn_00522220(auStack_38);
      fn_002279b4(DAT_00897894,(char *)&DAT_0086a0ac);
    }
  }
LAB_0022822c:
  if ((param_1 & -uVar2) == 0) {
    if (param_1 == 0) {
      uVar2 = 1;
    }
    fn_00158f6c(&DAT_008cddb4,0x2000);
    param_1 = 0;
  }
  DAT_0089789c = param_1;
  return uVar2;
}



bool fn_0020c434(undefined4 *param_1)

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



undefined4 * fn_00146510(void)

{
  undefined4 *puVar1;
  
  if (DAT_0089a520 == (code *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)(*DAT_0089a520)(0x10000,0x100,0,0x28);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
    }
  }
  return puVar1;
}


