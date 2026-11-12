#include "00439e58_0043a700aa.h"



void fn_00439f48(int param_1)

{
  fn_002eb950(*(undefined4 *)(param_1 + 0x94));
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  fn_006899f4(param_1,0xcd,0,1);
  return;
}



void fn_00439e58(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x5e);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895b24) goto LAB_00439ea8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00439ea8:
  if (*(int *)(param_1 + 0x8c) == 0) {
    *(undefined1 *)((int)puVar1 + 0xb) = 0;
    fn_00689930(param_1,0x5e,0,0);
    return;
  }
  if (*(char *)(puVar1 + 2) != '\0') {
    iVar3 = fn_00445fb8(puVar1);
    if (iVar3 == 0) {
      if (*(char *)(puVar1 + 3) == '\0') {
        *(code **)(param_1 + 0x80) = fn_00439948;
        *(undefined4 *)(param_1 + 0x84) = 0;
        return;
      }
      *(code **)(param_1 + 0x80) = fn_00439f9c;
      *(undefined4 *)(param_1 + 0x84) = 0;
      return;
    }
    fn_002eb704(*(undefined4 *)(param_1 + 0x94));
    *(code **)(param_1 + 0x80) = fn_00439c20;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}


