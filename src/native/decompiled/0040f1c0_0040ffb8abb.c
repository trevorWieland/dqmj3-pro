#include "0040f1c0_0040ffb8abb.h"



undefined4 * fn_0040f6c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_00749e48();
  *puVar1 = &DAT_0083842c;
  iVar2 = fn_00145b00(0x16,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00113c58();
  }
  puVar1[2] = uVar3;
  return puVar1;
}



undefined1 fn_0040f628(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  
  uVar5 = 8;
  iVar1 = fn_001296d0(DAT_00898840);
  if ((iVar1 == 0) && (iVar1 = fn_0066e3d8(DAT_00898840), iVar1 == 0)) {
    uVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))();
    uVar5 = 0;
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
    iVar1 = fn_006b6530(uVar3,1,uVar2);
    if ((iVar1 != 0) && (iVar1 = fn_006cb150(uVar3,uVar2), iVar1 == 0)) {
      puVar4 = (undefined1 *)fn_006cb178(uVar3,uVar2);
      uVar5 = *puVar4;
    }
  }
  return uVar5;
}


