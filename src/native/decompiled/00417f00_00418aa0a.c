#include "00417f00_00418aa0a.h"



void fn_00418184(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar6 = *(undefined4 **)(param_1 + 0x18);
  puVar5 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_00895dec) goto LAB_004181d4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_004181d4:
  puVar6[3] = param_2;
  puVar6 = *(undefined4 **)(param_1 + 0x18);
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_00895dec) goto LAB_0041820c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_0041820c:
  uVar2 = fn_006ba284(param_1);
  puVar6[4] = uVar2;
  iVar3 = fn_006ba274(param_1);
  iVar4 = fn_006ba284(param_1);
  iVar4 = *(int *)(param_1 + 0xf4) + (iVar3 * iVar4 + param_2) * 0x100;
  iVar3 = fn_006cd1f8(param_1,iVar4);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
      uVar2 = fn_0022f584((char *)&DAT_00418424,0);
      fn_0068974c(param_1,uVar2,0,1);
      *(code **)(param_1 + 0xe4) = fn_00417d5c;
      *(undefined4 *)(param_1 + 0xe8) = 0;
      fn_0068ab44(param_1,0x100094d);
      return;
    }
    if (iVar3 == 2) {
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
      uVar2 = fn_0022f584((char *)&DAT_0041843c,0);
      fn_0068974c(param_1,uVar2,0,1);
      *(code **)(param_1 + 0xe4) = fn_00417d5c;
      *(undefined4 *)(param_1 + 0xe8) = 0;
      fn_0068ab44(param_1,0x100094d);
      return;
    }
    if (iVar3 == 3) {
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
      uVar2 = fn_0022f584((char *)&DAT_00418400);
      fn_0068974c(param_1,uVar2,0,1);
      *(code **)(param_1 + 0xe4) = fn_00417d5c;
      *(undefined4 *)(param_1 + 0xe8) = 0;
      fn_0068ab44(param_1,0x100094d);
      return;
    }
    return;
  }
  puVar6 = (undefined4 *)fn_00689c1c(param_1,0xb0);
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_00895df0) {
        puVar5 = puVar6;
        break;
      }
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5[2] = 0xaf;
  fn_0017821c(puVar5 + 3,iVar4,0x100);
  puVar5[0x43] = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  fn_00689878(param_1,0xb0);
  fn_00689824(param_1,0);
  *(code **)(param_1 + 0xe4) = fn_00417d14;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00418154(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x108,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0041899c(iVar1,param_1);
  return;
}



void fn_00417f00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_118 [256];
  
  puVar6 = *(undefined4 **)(param_1 + 0x18);
  if (puVar6 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar4 == &DAT_00895dec) goto LAB_00417f4c;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_00417f4c:
  puVar6[5] = param_2;
  iVar7 = *(int *)(param_1 + 0xf4);
  iVar8 = *(int *)(param_1 + 0xf8);
  if ((&DAT_007c7b10)[param_2] == '\b') {
    if (iVar7 != iVar8) {
      fn_007a6f90(iVar7,iVar8,iVar8 - iVar7 >> 8);
      if (iVar8 - iVar7 < 0x1001) {
        fn_007a2418(iVar7,iVar8);
        return;
      }
      fn_007a2418(iVar7,iVar7 + 0x1000);
      iVar7 = iVar7 + 0x1000;
      if (iVar7 != iVar8) {
        do {
          fn_0017821c(auStack_118,iVar7,0x100);
          iVar5 = fn_0065d028(auStack_118,iVar7 + -0x100,fn_0065cfc8,fn_0065d018);
          iVar3 = iVar7 + -0x100;
          iVar2 = iVar7;
          while (iVar1 = iVar3, iVar5 != 0) {
            fn_0017821c(iVar2,iVar1,0x100);
            iVar5 = fn_0065d028(auStack_118,iVar1 + -0x100,fn_0065cfc8,fn_0065d018);
            iVar3 = iVar1 + -0x100;
            iVar2 = iVar1;
          }
          fn_0017821c(iVar2,auStack_118,0x100);
          iVar7 = iVar7 + 0x100;
        } while (iVar7 != iVar8);
        return;
      }
    }
  }
  else if (iVar7 != iVar8) {
    fn_007a683c(iVar7,iVar8,iVar8 - iVar7 >> 8);
    if (iVar8 - iVar7 < 0x1001) {
      fn_007a222c(iVar7,iVar8);
      return;
    }
    fn_007a222c(iVar7,iVar7 + 0x1000);
    for (iVar7 = iVar7 + 0x1000; iVar7 != iVar8; iVar7 = iVar7 + 0x100) {
      fn_0017821c(auStack_118,iVar7,0x100);
      iVar5 = fn_0065d028(auStack_118,iVar7 + -0x100,fn_0065cfa0,fn_0065cff0);
      iVar3 = iVar7 + -0x100;
      iVar2 = iVar7;
      while (iVar1 = iVar3, iVar5 != 0) {
        fn_0017821c(iVar2,iVar1,0x100);
        iVar5 = fn_0065d028(auStack_118,iVar1 + -0x100,fn_0065cfa0,fn_0065cff0);
        iVar3 = iVar1 + -0x100;
        iVar2 = iVar1;
      }
      fn_0017821c(iVar2,auStack_118,0x100);
    }
  }
  return;
}


