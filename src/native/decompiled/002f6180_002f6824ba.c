#include "002f6180_002f6824ba.h"



int fn_002f65b4(void)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  
  iVar5 = 1;
  iVar7 = 0;
  do {
    iVar2 = fn_003e93d0(DAT_008977ec,iVar5);
    if (*(char *)(iVar2 + 8) == '\x01') {
      iVar2 = fn_006cd710(*(undefined4 *)(DAT_008977ec + 0x28));
      fVar8 = (float)VectorUnsignedToFloat
                               (*(undefined4 *)(iVar2 + 0x50),(byte)(in_fpscr >> 0x16) & 3);
      iVar6 = *(int *)(DAT_008977ec + 0x28);
      iVar2 = fn_006cd660(iVar6);
      fVar8 = fVar8 * *(float *)(iVar2 + *(int *)(iVar6 + 0xc) * 4);
      puVar3 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977ec + 0x24),0xe1);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
        do {
          if (puVar4 == &DAT_00896fe0) goto LAB_002f6670;
          puVar4 = (undefined4 *)*puVar4;
        } while (puVar4 != (undefined4 *)0x0);
      }
      puVar3 = (undefined4 *)0x0;
LAB_002f6670:
      bVar1 = *(byte *)((int)puVar3 + 0x11);
      iVar2 = fn_006cd660(*(undefined4 *)(DAT_008977ec + 0x28));
      iVar2 = (int)(fVar8 * *(float *)(iVar2 + (uint)bVar1 * 4 + 0x1c));
    }
    else {
      iVar2 = 0;
    }
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + iVar2;
    if (3 < iVar5) {
      return iVar7;
    }
  } while( true );
}



void fn_002f64f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = fn_002f8364();
  fn_003ca3b0(uVar1,param_2,param_3,param_4,param_5);
  return;
}



void fn_002f6490(undefined1 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977ec + 0x24),0xe1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00896fe0) goto LAB_002f64e4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002f64e4:
  *(undefined1 *)(puVar1 + 4) = param_1;
  return;
}



bool fn_002f6468(void)

{
  int iVar1;
  
  iVar1 = fn_00100b58(**(undefined4 **)(DAT_00897804 + 0x3c));
  return iVar1 != 0;
}


