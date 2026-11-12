#include "003c6444_003c700cbb.h"



void fn_003c700c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003c70f0(iVar1,param_1);
  return;
}



undefined4 fn_003c6f40(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  (**(code **)(*param_1 + 0x118))(param_1,DAT_008969ac,DAT_008969b0,DAT_008969b4);
  iVar1 = fn_0068897c(*(undefined4 *)(param_1[0x1d] + 0x10),DAT_008969b8);
  param_1[0x28] = iVar1;
  iVar1 = param_1[0x29];
  uVar2 = fn_0058417c(param_1[0x27],iVar1);
  uVar2 = fn_0022f584(uVar2,0);
  fn_002e6978(param_1,uVar2);
  uVar2 = fn_0022f584((&PTR_s_HelpTextPassingSecret1_008969c8)[iVar1],0);
  fn_00190d50(param_1[0x28],uVar2);
  puVar4 = (undefined4 *)param_1[6];
  if (puVar4 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar3 == &DAT_008969e0) goto LAB_003c6ff4;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003c6ff4:
  param_1[0x27] = (int)puVar4;
  return 1;
}



void fn_003c6f10(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = &DAT_008305bc;
  return;
}


