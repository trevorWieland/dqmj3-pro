#include "005b8458_005b92d4bbb.h"



undefined4 * fn_005b92d4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  *puVar1 = &DAT_00848ff0;
  puVar1[0x39] = &DAT_00859190;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  puVar1[0x41] = 0;
  return puVar1;
}



void fn_005b90cc(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00896fe0) goto code_r0x005b9124;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
code_r0x005b9124:
  uVar3 = fn_002f8914();
  uVar4 = fn_002f6fa8();
  iVar5 = fn_0041fe24(uVar4,uVar3);
  if (*(int *)(iVar5 + 0x40) != 0) {
    if ((param_2 & 0xff) == 1) {
      if (*(int *)(iVar5 + 0x3c) == 0) goto LAB_005b9200;
    }
    else if (((param_2 & 0xff) == 2) && (*(int *)(iVar5 + 0x3c) == *(int *)(iVar5 + 0x40) + -1)) {
LAB_005b9200:
      fn_0068ab44(param_1,0x100094d);
      return;
    }
  }
  fn_0068ab44(param_1,0x100094b);
  if (param_2 == 0) {
    *(undefined1 *)((int)puVar1 + 0x11) = 0;
    *(code **)(param_1 + 0xf8) = fn_005b8f0c;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    return;
  }
  if (param_2 == 1) {
    *(undefined1 *)((int)puVar1 + 0x11) = 1;
    *(code **)(param_1 + 0xf8) = fn_005b8f0c;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    return;
  }
  if (param_2 == 2) {
    *(undefined1 *)((int)puVar1 + 0x11) = 2;
    *(code **)(param_1 + 0xf8) = fn_005b8f0c;
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  return;
}


