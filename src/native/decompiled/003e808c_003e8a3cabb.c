#include "003e808c_003e8a3cabb.h"



void fn_003e8754(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = &DAT_0083374c;
  return;
}



void fn_003e84e8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_2 == 0) {
    fn_0068ab44(param_1,0x100094b);
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 8) = 0;
    fn_006899f4(param_1,0xf1,0);
    return;
  }
  if (param_2 == 1) {
    fn_0068ab44(param_1,0x100094b);
    puVar3 = (undefined4 *)fn_001f74ec(param_1,0x9f);
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar4 == &DAT_00895964) goto LAB_003e85c4;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    puVar3 = (undefined4 *)0x0;
LAB_003e85c4:
    puVar3[2] = 0xef;
    puVar3[8] = 0xf0;
    *(undefined1 *)((int)puVar3 + 0xd) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 8) = 1;
    fn_006899f4(param_1,0x9f,1);
    return;
  }
  if (param_2 != 2) {
    return;
  }
  iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
  if (iVar1 < 1) {
    uVar2 = fn_0022f584((char *)&DAT_003e868c,0);
    fn_0068974c(param_1,uVar2,0,1);
    return;
  }
  fn_0068ab44(param_1,0x100094b);
  puVar3 = (undefined4 *)fn_001f74ec(param_1,0x69);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00894230) goto LAB_003e8650;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_003e8650:
  *(undefined1 *)(puVar3 + 7) = 1;
  puVar3[2] = 0xef;
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 8) = 2;
  fn_006899f4(param_1,0x69,1);
  return;
}


