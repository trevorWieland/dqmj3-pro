#include "005a51a0_005a6058ab.h"



undefined4 fn_005a5310(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_008970f4) goto LAB_005a5354;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005a5354:
  if (*(char *)(puVar2 + 4) == '\x01') {
    *(undefined4 *)(param_1 + 0x78) = fn_005a54a4;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(code **)(param_1 + 0x70) = fn_005a54a4;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(code **)(param_1 + 0x68) = fn_005a54a4;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = fn_005a53b8;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(code **)(param_1 + 0x70) = fn_005a53b8;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(code **)(param_1 + 0x68) = fn_005a53b8;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return 1;
}



void fn_005a53b8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar1 = fn_006f6a6c(param_1);
    if (iVar1 == 1) {
      *(code **)(param_1 + 0x78) = fn_005a54a4;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 1;
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar2 == &DAT_008970f4) goto LAB_005a5438;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_005a5438:
  if (*(char *)(puVar5 + 4) == '\x02') {
    pcVar3 = (char *)&DAT_005a5470;
  }
  else {
    pcVar3 = (char *)&DAT_005a5488;
  }
  uVar4 = fn_0022f584(pcVar3,0);
  fn_0068974c(param_1,uVar4,0,1);
  return;
}



void fn_005a52e4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  *puVar1 = &DAT_00846c30;
  return;
}


