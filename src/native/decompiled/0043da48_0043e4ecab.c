#include "0043da48_0043e4ecab.h"



void fn_0043e3c8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = &DAT_0083d22c;
  puVar1[0x2d] = 0;
  *(undefined1 *)(puVar1 + 0x2e) = 0;
  puVar1[0x2f] = 0;
  return;
}



void fn_0043ded4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  if (param_2 == 0) {
    fn_0068ab44(param_1,0x100094b);
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 8) = 0;
    fn_006899f4(param_1,0xe1,0);
    *(undefined1 *)(param_1 + 0xb8) = 3;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    return;
  }
  if (param_2 == 1) {
    iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
    if (iVar1 < 1) {
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0x100094d;
      uVar2 = fn_0022f584((char *)&DAT_0043e1a4,0);
      fn_0068974c(param_1,uVar2,0,1);
      *(undefined1 *)(param_1 + 0xb8) = 2;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      return;
    }
    fn_0068ab44(param_1,0x100094b);
    puVar3 = (undefined4 *)fn_001f74ec(param_1,0x9f);
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar4 == &DAT_00895964) goto LAB_0043e01c;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    puVar3 = (undefined4 *)0x0;
LAB_0043e01c:
    puVar3[2] = 0xe0;
    puVar3[8] = 0xe8;
    *(undefined1 *)((int)puVar3 + 0xd) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 8) = 1;
    fn_006899f4(param_1,0x9f,0,1);
    *(undefined1 *)(param_1 + 0xb8) = 3;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    return;
  }
  if (param_2 != 2) {
    if (param_2 == 3) {
      iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
      if (iVar1 < 1) {
        uVar2 = fn_0022f584((char *)&DAT_0043e1f0,0);
        goto LAB_0043e13c;
      }
      uVar2 = fn_0022f584((char *)&DAT_0043e17c,0);
      fn_0068974c(param_1,uVar2,0,1);
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined1 *)(param_1 + 0xb8) = 1;
    }
    return;
  }
  iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
  if ((0 < iVar1) && (iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18)), 0 < iVar1)) {
    fn_0068ab44(param_1,0x100094b);
    puVar3 = (undefined4 *)fn_001f74ec(param_1,0x69);
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar4 == &DAT_00894230) goto LAB_0043e0d8;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    puVar3 = (undefined4 *)0x0;
LAB_0043e0d8:
    *(undefined1 *)(puVar3 + 7) = 1;
    puVar3[2] = 0xe0;
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 8) = 2;
    fn_006899f4(param_1,0x69,0,1);
    *(undefined1 *)(param_1 + 0xb8) = 3;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0x100094d;
  iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
  if (iVar1 < 1) {
    pcVar5 = (char *)&DAT_0043e1d0;
  }
  else {
    pcVar5 = (char *)&DAT_0043e1a4;
  }
  uVar2 = fn_0022f584(pcVar5,0);
LAB_0043e13c:
  fn_0068974c(param_1,uVar2,0,1);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 2;
  return;
}


