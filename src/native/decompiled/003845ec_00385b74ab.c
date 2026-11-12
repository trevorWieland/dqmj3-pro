#include "003845ec_00385b74ab.h"



void fn_003849cc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004111d0();
  puVar1[0x34] = 0;
  *puVar1 = &DAT_008299a0;
  return;
}



void fn_00384998(int *param_1)

{
  undefined2 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x144))(param_1);
  *(undefined2 *)(param_1[0x34] + 0x558) = uVar1;
  *(undefined1 *)(param_1[0x34] + 0x56c) = 0;
  return;
}



void fn_003848c8(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = (**(code **)(*param_1 + 0x144))(param_1);
  iVar2 = fn_006ccfd4(param_1,uVar1);
  if (iVar2 == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  fn_006899f4(param_1,0x83,0);
  puVar3 = (undefined4 *)fn_001f74ec(param_1,0x83);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008939d8) goto LAB_00384954;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_00384954:
  *(undefined1 *)(puVar3 + 2) = 2;
  *(short *)(puVar3 + 7) = (short)uVar1;
  fn_00410d14(param_1,param_2);
  fn_0068ab44(param_1,0x100094b);
  return;
}


