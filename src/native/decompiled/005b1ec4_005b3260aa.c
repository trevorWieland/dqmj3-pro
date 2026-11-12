#include "005b1ec4_005b3260aa.h"



void fn_005b2e70(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_00748990();
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_005b2ec0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005b2ec0:
  puVar1[6] = 0;
  return;
}



undefined1 fn_005b2d44(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_005b2d88;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005b2d88:
  return *(undefined1 *)(puVar1 + 6);
}



undefined4 fn_005b2d18(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0043cd80();
  fn_00689efc(param_1,0xf5,0);
  return uVar1;
}



void fn_005b1ec4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_006b3e10(*(undefined4 *)(*(int *)(param_1 + 0x108) + 8));
  if (iVar1 == 0) {
    return;
  }
  fn_00689d04(param_1,0);
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00892ee4) goto LAB_005b1f34;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005b1f34:
  iVar1 = fn_006e7ab8(puVar2);
  if (iVar1 == 0) {
    fn_006899f4(param_1,0xee,1);
  }
  else {
    iVar1 = fn_006e7ab8(puVar2);
    if (iVar1 == 2) {
      fn_006899f4(param_1,0xeb,1);
    }
  }
  fn_0068ab44(param_1,0x100094c);
  return;
}


