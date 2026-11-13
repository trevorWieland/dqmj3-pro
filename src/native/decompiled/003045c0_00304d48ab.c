#include "003045c0_00304d48ab.h"



void fn_00304a00(int *param_1)

{
  if ((int *)param_1[0x20] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x20] + 0x10))();
    param_1[0x20] = 0;
  }
  if ((int *)param_1[0x21] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x21] + 4))();
    param_1[0x21] = 0;
  }
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x22] + 4))();
    param_1[0x22] = 0;
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
    param_1[1] = 0;
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
    param_1[2] = 0;
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
    *param_1 = 0;
  }
  fn_001433d8(param_1 + 6);
  fn_001433d8(param_1 + 0x13);
  if (param_1[4] != 0) {
    fn_0012d73c();
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    fn_0012d73c();
    param_1[5] = 0;
  }
  return;
}



undefined1 * fn_003048ec(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint in_fpscr;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_40 [24];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  fn_00117ad8(auStack_40);
  fn_00117984();
  fn_0010fa20();
  piVar2 = (int *)fn_00117668();
  piVar2 = (int *)(**(code **)(*piVar2 + 4))();
  uVar3 = 0;
  uVar1 = 0x80000000 >> (LZCOUNT(*piVar2 + -1) - 1U & 0xff);
  VectorSignedToFloat(0x80000000 >> (LZCOUNT(piVar2[1] + -1) - 1U & 0xff),
                      (byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  fn_001286b4(auStack_40,uVar1);
  uVar4 = 0x3f800000;
  fn_001286a8(auStack_40);
  fn_005e6268(param_2,*(undefined4 *)(*param_1 + 0x80),auStack_40,param_3);
  local_28 = uVar3;
  uStack_24 = uVar4;
  local_20 = uVar3;
  uStack_1c = uVar4;
  fn_00117604(param_2,1);
  *(undefined1 *)(*param_1 + 0xd) = 1;
  *(undefined1 *)(*param_1 + 0xc) = 0;
  uVar3 = fn_00117984();
  fn_005efee0(uVar3,param_3);
  return auStack_40;
}



int fn_003048b8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0085ad28;
  iVar1 = fn_002feeb0(param_1 + 6);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return iVar1 + -0x18;
}


