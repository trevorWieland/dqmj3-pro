#include "0041a9ac_0041c68cba.h"



void fn_0041c0a4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0041c0d4(iVar1,param_1);
  return;
}



void fn_0041c0d4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,&DAT_007c7468,3);
  *puVar1 = &DAT_00839d08;
  return;
}



void fn_0041bbb8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = fn_006ba220();
  puVar5 = (undefined4 *)0x0;
  if (iVar1 == 0) {
    if (param_2 == 0) {
      fn_006899f4(param_1,0xd6,0);
      *(undefined4 *)(*(int *)(param_1 + 0xf8) + 8) = 0;
    }
    else if (param_2 == 1) {
      puVar3 = (undefined4 *)fn_001f74ec(param_1,0x79);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
        do {
          if (puVar4 == &DAT_00894eb0) {
            puVar5 = puVar3;
            break;
          }
          puVar4 = (undefined4 *)*puVar4;
        } while (puVar4 != (undefined4 *)0x0);
      }
      puVar5[4] = 0xd5;
      puVar5[3] = 0xd5;
      fn_006899f4(param_1,0x79,0);
      *(undefined4 *)(*(int *)(param_1 + 0xf8) + 8) = 1;
    }
  }
  else {
    iVar1 = fn_006e8b04(*(undefined4 *)(param_1 + 0xf8));
    if (iVar1 == 0) {
      fn_0068ab44(param_1,0x100094d);
      return;
    }
    iVar1 = fn_006e8b18(*(undefined4 *)(param_1 + 0xf8));
    if (iVar1 == 0) {
      uVar2 = fn_0022f584((char *)&DAT_0041bd98,0);
      fn_0036c648(*(undefined4 *)(param_1 + 0x5c),3);
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 10) = 1;
      fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar2);
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 8) = 0;
      iVar1 = *(int *)(param_1 + 0x5c);
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(undefined1 *)(iVar1 + 0x5f) = 1;
      fn_00689bd0(param_1,0x48,0,0);
    }
    else {
      uVar2 = fn_0022f584((char *)&DAT_0041bd80,0);
      fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,1,1,1,0,0,1);
      fn_00689bd0(param_1,0x48,0);
    }
  }
  fn_0068ab44(param_1,0x100094b);
  return;
}


