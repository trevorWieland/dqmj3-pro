#include "0026954c_00269a00bb.h"



void fn_00269a00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  param_1[6] = param_2;
  puVar1 = (undefined4 *)fn_001f751c(param_2,0x48);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942d0) goto LAB_00269a70;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00269a70:
  param_1[5] = puVar1;
  param_1[8] = param_4;
  param_1[7] = param_3;
  param_1[9] = param_5;
  *(undefined1 *)((int)param_1 + 10) = param_6;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 8))();
  }
  fn_00250f04(*param_1);
  fn_005f3c48(1);
  iVar3 = fn_00251644(*param_1);
  if (iVar3 != 0) {
    fn_0026992c(param_1,param_1[8],1,2,0);
    *(undefined1 *)(param_1 + 2) = 4;
    return;
  }
  if (*(char *)((int)param_1 + 10) != '\0') {
    fn_0026992c(param_1,param_1[7],1,2,0);
  }
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)((int)param_1 + 9) = 0;
  param_1[3] = 0x1e;
  return;
}



void fn_0026992c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_001f751c(*(undefined4 *)(param_1 + 0x18),0x48);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942d0) goto LAB_00269994;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00269994:
  *(undefined4 **)(param_1 + 0x14) = puVar1;
  fn_0036c648(puVar1,param_4);
  fn_001f749c(*(undefined4 *)(param_1 + 0x18),0x48,0);
  uVar3 = fn_0022f584(param_2,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x14),uVar3,param_3,0,1,1,0,0,1);
  if (param_5 == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x30) = 0;
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x30) = 1;
  }
  return;
}



void fn_002698b8(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(undefined1 *)(*param_1 + 0xb) = 1;
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + 0x18) = param_2;
  puVar1 = (undefined4 *)fn_001f751c(param_2,0x48);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942d0) goto LAB_00269918;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00269918:
  *(undefined4 **)(iVar3 + 0x14) = puVar1;
  *(undefined1 *)(iVar3 + 8) = 9;
  return;
}


