#include "003f6fac_003f7514a.h"



int fn_003f7174(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0012f128(param_1 + 0xc);
  *(undefined1 *)(iVar1 + -0xc) = 0;
  *(undefined1 *)(iVar1 + -0xb) = 0;
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined1 *)(iVar1 + -4) = 0;
  *(undefined1 *)(iVar1 + -3) = 0;
  fn_00301f50(iVar1,100);
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *(undefined4 *)(iVar1 + 0x84) = 0;
  return iVar1 + -0xc;
}



void fn_003f7120(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  fn_00301f50(param_1 + 0xc,100);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}



void fn_003f70d8(int param_1,int param_2,undefined4 *param_3)

{
  param_1 = param_1 + param_2 * 0x12;
  *(undefined4 *)(param_1 + 0x70) = *param_3;
  *(undefined4 *)(param_1 + 0x74) = param_3[1];
  *(undefined4 *)(param_1 + 0x78) = param_3[2];
  *(undefined4 *)(param_1 + 0x7c) = param_3[3];
  *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_3 + 4);
  return;
}



void fn_003f7030(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008963ac) goto LAB_003f7084;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003f7084:
  puVar1[0xc] = param_2;
  fn_0074824c(param_1,param_2);
  return;
}



undefined4 fn_003f6fac(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))();
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008963ac) goto LAB_003f6ff4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003f6ff4:
  return puVar1[0xc];
}


