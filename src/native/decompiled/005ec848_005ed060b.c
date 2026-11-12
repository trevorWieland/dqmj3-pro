#include "005ec848_005ed060b.h"



void fn_005ed060(undefined4 *param_1)

{
  *param_1 = &DAT_00858d6c;
  if (param_1[1] != 0) {
    fn_005ece80();
    fn_002feef8();
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_005ecfe4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &DAT_00858d6c;
  param_1[1] = 0;
  iVar1 = fn_00145b00(0x20,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_005ecb70(iVar1,param_2,param_3);
  }
  iVar1 = param_1[1];
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_005ece80(iVar1);
      fn_002feef8();
    }
    param_1[1] = iVar2;
  }
  return param_1;
}



int * fn_005ece80(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar6 = param_1[3];
  piVar1 = *(int **)(iVar6 + 0x18);
  piVar4 = *(int **)(iVar6 + 0x1c);
  if (piVar1 < piVar4) {
    iVar5 = 1;
    iVar2 = (int)piVar4 - (int)piVar1 >> 2;
    if (1 < iVar2 + 1) {
      do {
        iVar3 = *piVar1;
        iVar5 = iVar5 + 1;
        piVar1 = piVar1 + 1;
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0xc) = 0;
        }
      } while (iVar5 < iVar2 + 1);
    }
  }
  else {
    while (piVar1 != piVar4) {
      iVar2 = *piVar1;
      piVar1 = piVar1 + 1;
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
    }
  }
  *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar6 + 0x18);
  puVar7 = (undefined4 *)param_1[5];
  if ((puVar7 != (undefined4 *)0x0) && ((char)param_1[6] != '\0')) {
    (**(code **)*puVar7)(puVar7);
    (**(code **)(*(int *)puVar7[1] + 0xc))((int *)puVar7[1],puVar7);
  }
  puVar7 = (undefined4 *)param_1[3];
  if ((puVar7 != (undefined4 *)0x0) && ((char)param_1[4] != '\0')) {
    (**(code **)*puVar7)(puVar7);
    (**(code **)(*(int *)puVar7[1] + 0xc))((int *)puVar7[1],puVar7);
  }
  piVar1 = param_1 + 1;
  puVar7 = (undefined4 *)*piVar1;
  if (puVar7 != (undefined4 *)0x0) {
    piVar1 = (int *)(uint)*(byte *)(param_1 + 2);
  }
  if (puVar7 != (undefined4 *)0x0 && piVar1 != (int *)0x0) {
    (**(code **)*puVar7)(puVar7);
    (**(code **)(*(int *)puVar7[1] + 0xc))((int *)puVar7[1],puVar7);
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
  }
  return param_1;
}


