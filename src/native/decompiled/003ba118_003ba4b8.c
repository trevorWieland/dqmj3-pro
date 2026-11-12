#include "003ba118_003ba4b8.h"



void fn_003ba4b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = fn_0016ba34(DAT_00897800,param_2,param_3,0);
  puVar2 = (undefined4 *)fn_001f7510(param_1,0x48);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008942d0) goto LAB_003ba528;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003ba528:
  fn_0036c5f4(puVar2,uVar1,1,0,1,1,0,0,1);
  *(undefined1 *)(puVar2 + 2) = param_4;
  *(undefined1 *)((int)puVar2 + 9) = param_5;
  if (param_6 == 0) {
    *(undefined1 *)(puVar2 + 0xc) = 0;
    *(undefined1 *)((int)puVar2 + 0x51) = 1;
  }
  else {
    *(undefined1 *)(puVar2 + 0xc) = 1;
  }
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_003ba190(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00128eac(param_1 + 8,DAT_00893ee8,*(int *)(param_1 + 0x1c) + 1);
  fn_0016ba34(DAT_00897800,DAT_00893eec,uVar1,0);
  return;
}



void fn_003ba13c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_00128eac(param_1 + 8,DAT_00893ee8,param_2);
  fn_0016ba34(DAT_00897800,DAT_00893eec,uVar1,0);
  return;
}



void fn_003ba118(undefined4 param_1,undefined4 param_2)

{
  fn_0016ba34(DAT_00897800,DAT_00893eec,param_2,0);
  return;
}


