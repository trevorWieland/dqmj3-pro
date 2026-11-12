#include "0041a9ac_0041c68cabb.h"



void fn_0041ba3c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x79);
  piVar4 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894eb0) goto LAB_0041ba84;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0041ba84:
  piVar3 = (int *)fn_001f74ec(param_1,0xd6);
  if (piVar3 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*piVar3)(piVar3);
    do {
      if (puVar2 == &DAT_00896b78) {
        piVar4 = piVar3;
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  fn_00395b30(puVar1);
  (**(code **)(*piVar4 + 0xc))(piVar4);
  fn_006899f4(param_1,0xd4,0);
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_0041b6e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_00839a88;
  *(undefined1 *)(puVar1 + 0x2c) = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  return;
}


