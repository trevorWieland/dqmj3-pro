#include "0037c110_0037cbbcbaa.h"



void fn_0037c874(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1[0x2c] == 1) && (iVar1 = (**(code **)(*param_1 + 0x14c))(param_1), iVar1 != 0)) {
    puVar5 = (undefined4 *)param_1[6];
    puVar4 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
      do {
        if (puVar2 == &DAT_0089292c) goto LAB_0037c8e4;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar5 = (undefined4 *)0x0;
LAB_0037c8e4:
    uVar3 = fn_006ba284(param_1);
    fn_005aeb78(puVar5,param_2,uVar3);
    if (param_2 == 6) {
      uVar3 = fn_0037c0f8(6);
      puVar5 = (undefined4 *)fn_001f74ec(param_1,uVar3);
      if (puVar5 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
        do {
          if (puVar2 == &DAT_0089292c) {
            puVar4 = puVar5;
            break;
          }
          puVar2 = (undefined4 *)*puVar2;
        } while (puVar2 != (undefined4 *)0x0);
      }
      fn_005aeb68(puVar4,6);
      fn_006899f4(param_1,uVar3,0);
    }
    else {
      puVar5 = (undefined4 *)fn_001f74ec(param_1,0xd5);
      if (puVar5 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
        do {
          if (puVar2 == &DAT_0089292c) {
            puVar4 = puVar5;
            break;
          }
          puVar2 = (undefined4 *)*puVar2;
        } while (puVar2 != (undefined4 *)0x0);
      }
      fn_005aeb68(puVar4,param_2);
      fn_006899f4(param_1,0xd5,0);
    }
    fn_0068ab44(param_1,0x100094b);
    param_1[0x2c] = 2;
  }
  return;
}



void fn_0037c844(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0037ca98(iVar1,param_1);
  return;
}


