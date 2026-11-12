#include "003f8308_003f9b94bb.h"



void fn_003f9b94(int param_1)

{
  fn_006899f4(param_1,*(undefined4 *)(param_1 + 0xe4),0);
  fn_0068ab44(param_1,0x100094c);
  return;
}



undefined4 * fn_003f97ec(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)fn_00397f10();
  puVar4 = (undefined4 *)0x0;
  *puVar1 = &DAT_008359b4;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  *(undefined1 *)(puVar1 + 0x3d) = 0;
  puVar2 = (undefined4 *)fn_001f74d8(puVar1,0x3e);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00894020) {
        puVar4 = puVar2;
        break;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar1[0x35] = puVar4;
  return puVar1;
}



void fn_003f9190(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xf4) != '\x01') {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xd8) + 0x3c);
  if (iVar1 < 2) {
    fn_0068ab44(param_1,0x100094d);
  }
  else {
    iVar1 = iVar1 + -1;
    *(int *)(*(int *)(param_1 + 0xd8) + 0x3c) = iVar1;
    fn_0068ab44(param_1,0x1000957);
  }
  fn_003f860c(param_1,iVar1);
  return;
}



void fn_003f907c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xf4) != '\x01') {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xd8) + 0x3c);
  if (iVar1 < 100) {
    iVar1 = iVar1 + 1;
    *(int *)(*(int *)(param_1 + 0xd8) + 0x3c) = iVar1;
    fn_0068ab44(param_1,0x1000957);
  }
  else {
    fn_0068ab44(param_1,0x100094d);
  }
  fn_003f860c(param_1,iVar1);
  return;
}


