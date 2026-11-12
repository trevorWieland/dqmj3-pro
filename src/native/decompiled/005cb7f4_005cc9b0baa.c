#include "005cb7f4_005cc9b0baa.h"



void fn_005cc314(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = fn_0028eac8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x14),0xf1);
  if (*(char *)(iVar2 + 0xc) != '\x03') {
    return;
  }
  fn_0068ab44(param_1,0x100094b);
  puVar3 = (undefined4 *)fn_001f74ec(param_1,0xe1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00896fe0) goto LAB_005cc39c;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_005cc39c:
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 1) goto LAB_005cc3b8;
    uVar1 = 1;
  }
  *(undefined1 *)(puVar3 + 4) = uVar1;
LAB_005cc3b8:
  fn_006899f4(param_1,0xe1,1);
  return;
}



void fn_005cc2e4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005cc3dc(iVar1,param_1);
  return;
}


