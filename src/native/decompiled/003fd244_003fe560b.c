#include "003fd244_003fe560b.h"



void fn_003fe560(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_003fe5a4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003fe5a4:
  *(undefined1 *)(puVar1 + 6) = 2;
  return;
}



void fn_003fe50c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_003fe554;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003fe554:
  *(undefined1 *)(puVar1 + 6) = 1;
  return;
}



undefined4 * fn_003fe4ac(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_008369ac;
  puVar1[0x19] = 0;
  puVar1[0x1a] = &DAT_00859330;
  *(undefined1 *)(puVar1 + 0x1b) = 0;
  *(undefined1 *)((int)puVar1 + 0x6d) = 0;
  *(undefined1 *)((int)puVar1 + 0x6e) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  return puVar1;
}



void fn_003fdee8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_0083686c;
  *(undefined1 *)(puVar1 + 0x2c) = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  return;
}



void fn_003fd97c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  
  if ((char)param_1[0x2c] == '\0') {
    iVar1 = fn_006ba220(param_1);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x003fd9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x110))(param_1);
      return;
    }
    iVar1 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
    if (iVar1 == 0) {
      fn_003fd718(param_1,param_2);
      fn_0068ab44(param_1,0x100094b);
      return;
    }
    iVar2 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ec);
    uVar5 = 1;
    iVar1 = param_2;
    if ((iVar2 < 1) && (2 < param_2)) {
      iVar1 = param_2 + 1;
    }
    iVar2 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
    iVar3 = -1;
    if (iVar2 == 7) {
      iVar3 = 0;
    }
    else if (iVar2 == 8) {
      iVar3 = 1;
    }
    else if (iVar2 == 9) {
      iVar3 = 2;
    }
    else if (iVar2 == 10) {
      iVar3 = 3;
    }
    if (iVar3 == iVar1) {
      fn_0015b0f8(*(undefined4 *)(param_1[0x2e] + 0x10));
      uVar4 = fn_0022f584((char *)&DAT_003fdbc4,0);
      fn_0068974c(param_1,uVar4,0,1);
    }
    else {
      iVar1 = fn_00113ca8();
      uVar5 = 2;
      if (iVar1 == 0) {
        iVar1 = fn_00113ce4();
        if (iVar1 == 0) {
          return;
        }
        uVar4 = fn_0022f584((char *)&DAT_003fdc18,0);
        fn_0068974c(param_1,uVar4,1);
        param_1[0x2d] = param_2;
        *(undefined1 *)(param_1 + 0x2c) = 2;
        return;
      }
      iVar1 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
      uVar4 = 0xffffffff;
      if (iVar1 == 7) {
        uVar4 = 0;
      }
      else if (iVar1 == 8) {
        uVar4 = 1;
      }
      else if (iVar1 == 9) {
        uVar4 = 2;
      }
      else if (iVar1 == 10) {
        uVar4 = 3;
      }
      fn_00391d98(uVar4);
      fn_0022f750();
      fn_0015b0dc();
      iVar2 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ec);
      iVar1 = param_2;
      if ((iVar2 < 1) && (2 < param_2)) {
        iVar1 = param_2 + 1;
      }
      fn_00391d98(iVar1);
      fn_0022f750();
      fn_0015b0dc();
      uVar4 = fn_0022f584((char *)&DAT_003fdbf0,0);
      fn_0068974c(param_1,uVar4,1);
      param_1[0x2d] = param_2;
    }
    *(undefined1 *)(param_1 + 0x2c) = uVar5;
  }
  return;
}


