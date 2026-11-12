#include "0041a9ac_0041c68caa.h"



void fn_0041acc4(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ed);
  if ((iVar1 < 1) && (2 < param_2)) {
    param_2 = param_2 + 1;
  }
  if (param_2 == 0) {
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    iVar1 = fn_006f72c8(DAT_008977e0);
    uVar2 = 3;
  }
  else if (param_2 == 1) {
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    iVar1 = fn_006f72c8(DAT_008977e0);
    uVar2 = 4;
  }
  else if (param_2 == 2) {
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    iVar1 = fn_006f72c8(DAT_008977e0);
    uVar2 = 5;
  }
  else {
    if (param_2 != 3) goto LAB_0041ae0c;
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    iVar1 = fn_006f72c8(DAT_008977e0);
    uVar2 = 6;
  }
  *(undefined1 *)(iVar1 + 0x238) = uVar2;
LAB_0041ae0c:
  iVar1 = *(int *)(param_1 + 0xb8);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return;
}



void fn_0041aa30(undefined4 *param_1)

{
  *param_1 = &DAT_00839950;
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x28] + 4))();
  }
  fn_003fcefc(param_1);
  fn_002feef8();
  return;
}



void fn_0041a9ac(int *param_1)

{
  fn_0022cf0c();
  if (*(char *)(param_1[0x27] + 0x8f4) == '\0') {
    return;
  }
  fn_0042f1c0();
                    /* WARNING: Could not recover jumptable at 0x0041a9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 300))(param_1);
  return;
}


