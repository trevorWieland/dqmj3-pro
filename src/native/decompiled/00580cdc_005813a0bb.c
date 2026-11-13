#include "00580cdc_005813a0bb.h"



void fn_005813a0(int *param_1)

{
  if ((char)param_1[0x37] == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x180))(param_1,1);
  (**(code **)(*param_1 + 0x14c))(param_1);
  fn_0068ab44(param_1,0x100094c);
  fn_005c1d18(param_1);
  return;
}



void fn_0058134c(int *param_1)

{
  if ((char)param_1[0x37] != '\0') {
    (**(code **)(*param_1 + 0x174))(param_1);
    (**(code **)(*param_1 + 0x14c))(param_1);
    fn_00689828(param_1,0);
    param_1[0x32] = 0;
    param_1[0x36] = 1;
  }
  return;
}



void fn_005812e4(int *param_1)

{
  fn_00689828(param_1,1);
  param_1[0x36] = 0;
  param_1[0x32] = 0;
  fn_005c1d18(param_1);
  fn_002b0b04(*(undefined4 *)(DAT_00897804 + 100),param_1[0x31]);
  fn_005c1bd0(param_1);
  (**(code **)(*param_1 + 0x170))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00581344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1);
  return;
}



undefined4 fn_00581208(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  (**(code **)(*param_1 + 0x160))(param_1);
  fn_005c1df0(param_1);
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00327fb4(iVar1,param_1[1],1);
  }
  piVar3 = (int *)param_1[0x33];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    param_1[0x33] = (int)piVar2;
  }
  *(int *)(param_1[0x33] + 0x30) = param_1[0x1c];
  (**(code **)(*(int *)param_1[0x33] + 0x10))((int *)param_1[0x33],param_1[0x12]);
  (**(code **)(*param_1 + 0x15c))(param_1);
  fn_005c1bd0(param_1);
  (**(code **)(*param_1 + 0x158))(param_1);
  (**(code **)(*param_1 + 0x164))(param_1);
  return 1;
}



void fn_005810e8(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_1[0x31];
  iVar2 = param_1[0x32];
  param_1[0x32] = iVar2 + 1;
  if (iVar1 != 0) {
    if ((iVar1 < 0x28) && (-0x28 < iVar1)) goto LAB_00581164;
    if (iVar2 + 1 < 0x29) {
      iVar1 = fn_002b0af8(*(undefined4 *)(DAT_00897804 + 100));
      fn_005c1b58(param_1,(param_1[0x31] / 0x28) * param_1[0x32] + iVar1);
      goto LAB_00581164;
    }
  }
  (**(code **)(*param_1 + 0x154))(param_1);
LAB_00581164:
  iVar1 = fn_002b0af8(*(undefined4 *)(DAT_00897804 + 100));
  fn_005c1b58(param_1,iVar1 - param_1[0x32]);
  if (param_1[0x32] == param_1[0x31]) {
    (**(code **)(*param_1 + 0x154))(param_1);
  }
  uVar3 = param_1[0x32];
  iVar1 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
  if (((iVar1 >> 2) - (iVar1 >> 0x1f)) * -7 + uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}


