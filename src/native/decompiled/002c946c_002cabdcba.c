#include "002c946c_002cabdcba.h"



void fn_002ca5dc(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_006ba0dc(*(undefined4 *)(DAT_00897804 + 0x48));
  if (iVar1 == 0) {
    fn_002ca68c(param_1);
    return;
  }
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xaf);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00895dec) goto LAB_002ca640;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_002ca640:
  puVar2[2] = 0xae;
  fn_006899f4(param_1,0xaf,0);
  return;
}



void fn_002ca4b4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    uVar5 = fn_0022f584((char *)&DAT_002ca5c4,0);
    fn_0068974c(param_1,uVar5,1);
    return;
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
  if (cVar1 == '\x03') {
    fn_00689824(param_1,0);
    *(code **)(param_1 + 0xc4) = fn_002ca330;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  else if (cVar1 == '\x02') {
    iVar2 = fn_006ba0dc(*(undefined4 *)(DAT_00897804 + 0x48));
    if (iVar2 < 1) {
      *(code **)(param_1 + 0xc4) = fn_002c98c4;
      *(undefined4 *)(param_1 + 200) = 0;
      return;
    }
    puVar3 = (undefined4 *)fn_001f74ec(param_1,0xaf);
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar4 == &DAT_00895dec) goto LAB_002ca544;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    puVar3 = (undefined4 *)0x0;
LAB_002ca544:
    puVar3[2] = 0xae;
    fn_006899f4(param_1,0xaf,0);
    return;
  }
  return;
}



void fn_002ca3b8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x5e);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895b24) goto LAB_002ca400;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002ca400:
  if (*(int *)(param_1 + 0xd0) == 0) {
    *(undefined1 *)((int)puVar1 + 0xb) = 0;
    fn_00689818(param_1,0x5e,0,0);
    return;
  }
  iVar3 = fn_006896fc(param_1,0x5e);
  if ((iVar3 == 0) && (*(char *)(puVar1 + 2) != '\0')) {
    iVar3 = fn_00445fb8(puVar1);
    if (iVar3 == 0) {
      if (*(char *)((int)puVar1 + 10) == '\0') {
        fn_00689824(param_1,1);
        *(undefined **)(param_1 + 0xc4) = &DAT_002c94a0;
        *(undefined4 *)(param_1 + 200) = 0;
        return;
      }
      fn_002ca68c(param_1);
      return;
    }
    *(code **)(param_1 + 0xc4) = fn_002c9a54;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}


