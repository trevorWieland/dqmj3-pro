#include "00388df8_00389548a.h"



int * fn_00388fd4(int *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*param_1 != 0) {
    fn_00143b48();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



void fn_00388f38(int *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*param_1 != 0) {
    fn_00143b48();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}



void fn_00388ef0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  param_1 = param_1 + param_2 * 0x2ec;
  *(undefined4 *)(param_1 + 0x2d0) = param_4;
  *(undefined4 *)(param_1 + 0x138) = param_5;
  *(undefined4 *)(param_1 + 0x2c8) = param_3;
  return;
}



void fn_00388ed0(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0x2ec + 0x2cc) = param_3;
  return;
}



void fn_00388df8(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*param_1 != 0) {
    fn_00143b48();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  iVar4 = *(int *)(param_2 + 0xc);
  iVar1 = 0x40;
  if (iVar4 == 0) {
    iVar1 = *(char *)(param_2 + 0x20) * 0x48 + 0x54;
  }
  else if (iVar4 == 1) {
    iVar1 = 0x44;
  }
  else if (iVar4 == 2) {
    iVar1 = 0x48;
  }
  param_1[1] = iVar1;
  iVar1 = fn_001287dc(iVar1,4);
  *param_1 = iVar1;
  fn_00301a9c(iVar1,param_2,param_1[1]);
  piVar2 = (int *)*param_1;
  iVar1 = piVar2[1];
  iVar4 = piVar2[2];
  iVar5 = piVar2[3];
  iVar6 = piVar2[4];
  iVar7 = piVar2[5];
  iVar8 = piVar2[6];
  iVar9 = piVar2[7];
  piVar3 = piVar2 + 8;
  param_1[2] = *piVar2;
  param_1[3] = iVar1;
  param_1[4] = iVar4;
  param_1[5] = iVar5;
  param_1[6] = iVar6;
  param_1[7] = iVar7;
  param_1[8] = iVar8;
  param_1[9] = iVar9;
  param_1[10] = (int)(piVar2 + 9);
  param_1[0xb] = (int)piVar3;
  param_1[0xc] = (int)(piVar2 + 0xd);
  param_1[0xd] = (int)piVar3;
  param_1[0xe] = (int)piVar3;
  return;
}


