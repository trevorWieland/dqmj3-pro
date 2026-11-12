#include "00583218_00584144a.h"



undefined4 fn_00583f24(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = fn_0025dac8();
  uVar3 = 0;
  if (iVar1 != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    if (puVar4 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar4)(puVar4);
      do {
        if (puVar2 == &DAT_00894d28) goto LAB_00583f74;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar4 = (undefined4 *)0x0;
LAB_00583f74:
    *(undefined1 *)((int)puVar4 + 0x1a) = 0;
    uVar3 = 1;
  }
  return uVar3;
}



void fn_00583ec0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00583ef0(iVar1,param_1);
  return;
}



void fn_00583ef0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,&DAT_007c7464,1);
  *puVar1 = &DAT_00842ce4;
  return;
}



void fn_00583acc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_003dd5a4(*(undefined4 *)(param_1 + 0xfc));
  fn_00689efc(param_1,uVar1,0);
  return;
}



undefined4 * fn_00583794(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x95);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894454) {
        return puVar1;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return (undefined4 *)0x0;
}



void fn_00583740(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_00583784;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00583784:
  *(undefined1 *)(puVar1 + 6) = 2;
  return;
}



void fn_005836ec(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_00583734;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00583734:
  *(undefined1 *)(puVar1 + 6) = 1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x005834bc) */
/* WARNING: Removing unreachable block (ram,0x005834f8) */

void fn_0058348c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_0039c4c8();
  puVar2 = *(undefined4 **)(param_1 + 0xac);
  for (puVar1 = *(undefined4 **)(param_1 + 0xa8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x14))((int *)*puVar1);
  }
  puVar2 = *(undefined4 **)(param_1 + 0xb8);
  for (puVar1 = *(undefined4 **)(param_1 + 0xb4); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x14))();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00583568) */
/* WARNING: Removing unreachable block (ram,0x005835e0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffe4 : 0x0058356c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_00583218(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int local_20;
  
  iVar1 = fn_00145b00(0xc0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0039c504(iVar1,param_1);
  piVar4 = puVar2 + 0x2a;
  *puVar2 = &DAT_00827f4c;
  *piVar4 = 0;
  puVar2[0x2b] = 0;
  puVar2[0x2c] = 0;
  local_20 = 4;
  puVar3 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar4 = (int)puVar3;
  for (; local_20 != 0; local_20 = local_20 + -1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  }
  puVar2[0x2b] = *piVar4 + 0x10;
  puVar2[0x2c] = *piVar4 + 0x80;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x2f] = 0;
  local_20 = 4;
  puVar3 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar2[0x2d] = puVar3;
  for (; local_20 != 0; local_20 = local_20 + -1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  }
  iVar1 = puVar2[0x2d];
  puVar2[0x2f] = iVar1 + 0x80;
  puVar2[0x2e] = iVar1 + 0x10;
  *puVar2 = &DAT_00842820;
  return puVar2;
}


