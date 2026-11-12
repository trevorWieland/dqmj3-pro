#include "0058d794_0058ea54.h"



void fn_0058ea54(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  fn_00242984(param_2);
  fn_002cd59c(param_3);
  fn_00242b0c(param_2);
  return;
}



undefined4 fn_0058e3fc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_900 [96];
  char local_8a0;
  short local_7e4;
  
  iVar1 = fn_002b1588(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0xc0));
  iVar2 = fn_002b1588(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0xb8));
  iVar3 = fn_006f7d68();
  if ((iVar3 == 0) || (iVar3 = fn_006f7d68(iVar1), iVar3 == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0xb4) == -1) {
    fn_0018d060(*(undefined4 *)(iVar2 + 0x14),0xb,0);
  }
  else {
    iVar3 = fn_002b1588(*(undefined4 *)(param_1 + 0x8c));
    fn_0018d060(*(undefined4 *)(iVar3 + 0x14),0,0);
  }
  if (*(char *)(*(int *)(param_1 + 0x80) + 0x6c) != '\0') {
    fn_0069decc(iVar2,2);
  }
  if (*(int *)(param_1 + 0xbc) == -1) {
    iVar2 = *(int *)(param_1 + 0x80);
    fn_0017821c(auStack_900,iVar2 + 0x8e4,0x8d8);
    if ((local_8a0 == '\0') && (local_7e4 != 1)) {
      iVar2 = fn_00190e40((int)*(short *)(iVar2 + 0xa00));
      if (iVar2 == 0) {
        uVar4 = *(undefined4 *)(iVar1 + 0x14);
        iVar2 = 0xb;
      }
      else {
        uVar4 = *(undefined4 *)(iVar1 + 0x14);
        iVar2 = 0;
      }
    }
    else {
      iVar2 = fn_005ef148(*(undefined4 *)(iVar1 + 0x14));
      iVar2 = iVar2 + -1;
      uVar4 = *(undefined4 *)(iVar1 + 0x14);
    }
  }
  else {
    iVar2 = fn_002b1588(*(undefined4 *)(param_1 + 0x8c));
    uVar4 = *(undefined4 *)(iVar2 + 0x14);
    iVar2 = 0;
  }
  fn_0018d060(uVar4,iVar2,0);
  if (*(char *)(*(int *)(param_1 + 0x80) + 0x944) != '\0') {
    fn_0069decc(iVar1,2);
  }
  return 1;
}



undefined4 * fn_0058e2f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)fn_00397f10();
  puVar4 = (undefined4 *)0x0;
  *puVar1 = &DAT_00843e68;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x3b] = 0;
  *(undefined1 *)(puVar1 + 0x3c) = 0;
  *(undefined1 *)((int)puVar1 + 0xf1) = 0;
  puVar2 = (undefined4 *)fn_001f74ec(puVar1,0x6d);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00893fac) goto LAB_0058e35c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0058e35c:
  puVar1[0x34] = puVar2;
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



void fn_0058d810(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = *(uint *)(param_1 + 0xdc);
  iVar3 = 0;
  if (0x13 < (int)uVar1) {
    iVar3 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
    *(int *)(param_1 + 0xe8) = iVar3 - *(int *)(param_1 + 0xe4);
    fn_0025bd60(*(undefined4 *)(DAT_00897804 + 8));
    fn_0058ce98(param_1,0);
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    fn_0018a618(&local_28,0x18,0x17,&DAT_0058cf84,*(undefined4 *)(param_1 + 0xe8));
    fn_005d27ac(param_1 + 0xc0,1,1,&local_28);
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 1;
    *(undefined1 *)(param_1 + 0xd8) = 3;
    return;
  }
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if (((iVar2 >> 2) - (iVar2 >> 0x1f)) * -7 + uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  uVar1 = *(int *)(param_1 + 0xe0) * *(int *)(param_1 + 0xdc);
  if (uVar1 < *(uint *)(param_1 + 0xe4)) {
    iVar3 = *(uint *)(param_1 + 0xe4) - uVar1;
  }
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0xe0);
  fn_0058ce98(param_1,iVar3);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  fn_0018a618(&local_28,0x18,0x17,&DAT_0058cf84,*(undefined4 *)(param_1 + 0xe8));
  fn_005d27ac(param_1 + 0xc0,1,1,&local_28);
  return;
}



void fn_0058d794(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xec) + 0x3c);
  if (iVar1 < 100) {
    iVar1 = iVar1 + 10;
    if (100 < iVar1) {
      iVar1 = 100;
    }
    *(int *)(*(int *)(param_1 + 0xec) + 0x3c) = iVar1;
    fn_0068ab44(param_1,0x1000957);
  }
  else {
    fn_0068ab44(param_1,0x100094d);
  }
  *(undefined1 *)(*(int *)(param_1 + 0xd0) + 0xb) = *(undefined1 *)(*(int *)(param_1 + 0xec) + 0x3c)
  ;
  fn_0058ce98(param_1,0xffffffff);
  return;
}


