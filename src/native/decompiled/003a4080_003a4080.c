#include "003a4080_003a4080.h"



undefined4 fn_003a4080(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  puVar4 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008963ac) goto LAB_003a40d0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003a40d0:
  param_1[0x1c] = (int)puVar1;
  param_1[0x1d] = DAT_00897840;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xd8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00896444) goto LAB_003a4120;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003a4120:
  param_1[0x1e] = (int)puVar1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x7e);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894a9c) goto LAB_003a4164;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003a4164:
  param_1[0x1f] = (int)puVar1;
  iVar3 = fn_001f7e04(param_1,0x80);
  if (iVar3 == 0) {
    fn_00689878(param_1,0x80);
    puVar1 = (undefined4 *)fn_00689c1c(param_1,0x80);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_008964f4) {
          puVar4 = puVar1;
          break;
        }
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    *(undefined1 *)(puVar4 + 2) = 1;
  }
  return 1;
}


