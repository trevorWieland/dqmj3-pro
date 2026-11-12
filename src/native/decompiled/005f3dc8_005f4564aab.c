#include "005f3dc8_005f4564aab.h"



undefined4 * fn_005f4254(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = &DAT_00858f20;
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 != (undefined4 *)0x0) {
    fn_005f3ce0(puVar3,puVar3 + 1);
    puVar4 = (undefined4 *)*puVar3;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(puVar4);
      (**(code **)(*(int *)puVar4[1] + 0xc))((int *)puVar4[1],puVar4);
      *puVar3 = 0;
    }
    uVar2 = puVar3[1];
    uVar1 = uVar2;
    if ((uint)puVar3[2] <= uVar2) {
      for (; uVar1 != puVar3[2]; uVar1 = uVar1 + 4) {
      }
    }
    fn_001008c4(uVar2,(int)(puVar3[3] - uVar2) >> 2,0);
    fn_002feef8(puVar3);
  }
  return param_1;
}



undefined4 * fn_005f40b4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  *param_1 = &DAT_00858f20;
  param_1[1] = 0;
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)fn_005f3dc8(iVar1,param_2);
  }
  puVar4 = (undefined4 *)param_1[1];
  if (puVar4 != puVar6) {
    if (puVar4 != (undefined4 *)0x0) {
      fn_005f3ce0(puVar4,puVar4 + 1);
      puVar5 = (undefined4 *)*puVar4;
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(puVar5);
        (**(code **)(*(int *)puVar5[1] + 0xc))((int *)puVar5[1],puVar5);
        *puVar4 = 0;
      }
      uVar2 = puVar4[1];
      uVar3 = uVar2;
      if ((uint)puVar4[2] < uVar2) {
        do {
          uVar3 = uVar3 + 4;
        } while (uVar3 != puVar4[2]);
      }
      fn_001008c4(uVar2,(int)(puVar4[3] - uVar2) >> 2,0);
      fn_002feef8(puVar4);
    }
    param_1[1] = puVar6;
  }
  return param_1;
}


