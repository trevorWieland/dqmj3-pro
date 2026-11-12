#include "003fc554_003fd1b4bba.h"



void fn_003fd00c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003fd1b4(iVar1,param_1);
  return;
}



undefined4 fn_003fcf04(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00894b3c,DAT_00894b40,DAT_00894b44);
  iVar1 = fn_0068897c(*(undefined4 *)(param_1[0x1d] + 0x10),DAT_00894b48);
  param_1[0x28] = iVar1;
  puVar4 = (undefined4 *)param_1[6];
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar2 == &DAT_00894b04) goto LAB_003fcf74;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003fcf74:
  param_1[0x27] = (int)puVar4;
  iVar5 = param_1[0x29];
  iVar1 = fn_0059e448(puVar4,iVar5);
  if (iVar1 == 0) {
    puVar3 = &LAB_003fd0c8;
  }
  else {
    puVar3 = (undefined1 *)fn_0016ba34(DAT_00897800,DAT_00898788,iVar1,0);
  }
  fn_002e6978(param_1,puVar3);
  iVar1 = fn_0059e438(param_1[0x27],iVar5);
  if (iVar1 == 0) {
    puVar3 = &LAB_003fd0c8;
  }
  else {
    puVar3 = (undefined1 *)fn_0016ba34(DAT_00897800,DAT_00898788,iVar1,0);
  }
  fn_00190d50(param_1[0x28],puVar3);
  return 1;
}


