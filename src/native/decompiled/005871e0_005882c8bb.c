#include "005871e0_005882c8bb.h"



void fn_005882c8(int param_1)

{
  uint uVar1;
  int iVar2;
  
  fn_00748e14();
  if (*(int *)(param_1 + 0x110) == 0) {
    iVar2 = fn_006f6a6c(param_1);
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x110) = 1;
      *(undefined4 *)(param_1 + 0x114) = 0;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x110) == 1) {
    uVar1 = fn_006f6a5c(param_1);
    if ((uVar1 & 0x100000) == 0) {
      if ((uVar1 & 0x200000) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x18) = 2;
        return;
      }
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x18) = 1;
    }
  }
  return;
}



void fn_00587fb4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00748844();
  if (iVar1 == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  iVar1 = fn_0077f968(param_1,param_2);
  *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x54) = *(undefined4 *)(&DAT_007d4f38 + iVar1 * 4);
  fn_00748c18(param_1,param_2);
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00587f10(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  fn_00748990();
  *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x54) = 0;
  piVar1 = (int *)fn_001f74ec(param_1,0xeb);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*piVar1)(piVar1);
    do {
      if (puVar2 == &DAT_00894454) goto LAB_00587f6c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_00587f6c:
                    /* WARNING: Could not recover jumptable at 0x00587f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x10))(piVar1);
  return;
}



void fn_00587cdc(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x18);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_0089914c) goto LAB_00587d28;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00587d28:
  *(undefined4 **)(param_1 + 0x104) = puVar4;
  puVar4 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_00899218) goto LAB_00587d6c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00587d6c:
  *(undefined4 **)(param_1 + 0x108) = puVar4;
  piVar2 = (int *)fn_001f74ec(param_1,0xeb);
  if (piVar2 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*piVar2)(piVar2);
    do {
      if (puVar4 == &DAT_00894454) goto LAB_00587db8;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_00587db8:
  (**(code **)(*piVar2 + 0xc))(piVar2,*(undefined4 *)(param_1 + 100));
  if (*(int *)(*(int *)(param_1 + 0x104) + 0x58) == 1) {
    uVar3 = fn_0022f584((char *)&DAT_00587e3c,0);
    fn_00748808(param_1,uVar3,0,1,1,0);
    *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x110) = 1;
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  fn_0043cd80(param_1);
  return;
}


