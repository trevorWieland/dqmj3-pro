#include "00535f9c_00550464aab.h"



void fn_00543e80(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,0x10,4);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,0x18,4);
  iVar6 = 0x18;
  puVar5 = puVar4;
  do {
    iVar6 = iVar6 + -1;
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  } while (iVar6 != 0);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
  }
  *puVar4 = 0x80000000;
  uVar2 = DAT_008ecaf4;
  uVar1 = DAT_008ecaf0;
  puVar4[2] = DAT_008ecaec;
  puVar4[3] = uVar1;
  puVar4[4] = uVar2;
  puVar4[5] = 0;
  puVar4[1] = 0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = param_1;
    *(undefined1 *)(puVar3 + 2) = 1;
    *puVar3 = &DAT_00857798;
    puVar3[3] = puVar4;
  }
  return;
}


