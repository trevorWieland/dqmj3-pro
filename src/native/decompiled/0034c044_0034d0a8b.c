#include "0034c044_0034d0a8b.h"



void fn_0034d0a8(void)

{
                    /* WARNING: Subroutine does not return */
  fn_003fed04();
}



void fn_0034cfd0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  fn_003e5aa8();
  sVar1 = *(short *)(*(int *)(param_1 + 0xb0) + 8);
  iVar2 = fn_002298d8(*(undefined4 *)(DAT_00897804 + 0x14));
  *(undefined4 *)(param_1 + 0xb8) = 1;
  *(int *)(param_1 + 0xc4) = -iVar2;
  *(undefined4 *)(param_1 + 200) = 0;
  puVar3 = (undefined4 *)fn_00242324(*(undefined4 *)(DAT_00897804 + 0x18),(int)sVar1);
  iVar2 = fn_006ba284(param_1);
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  iVar2 = *(int *)(param_1 + (iVar2 * *(int *)(param_1 + 0xfc) + param_2) * 4 + 0x104);
  *(undefined4 *)(iVar2 + 0xe0) = *puVar3;
  *(undefined4 *)(iVar2 + 0xe4) = uVar4;
  *(undefined4 *)(iVar2 + 0xe8) = uVar5;
  *(undefined4 *)(iVar2 + 0xec) = uVar6;
  return;
}



void fn_0034cfa0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x134,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0034d1e8(iVar1,param_1);
  return;
}



void fn_0034c82c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00385b88();
  puVar1[0x27] = 0;
  *puVar1 = &DAT_00825bb8;
  puVar1[0x28] = 0;
  return;
}



void fn_0034c7bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00445f0c(*(undefined4 *)(param_1 + 0x9c),0);
  if (iVar1 != 0) {
    uVar2 = fn_00445f00(*(undefined4 *)(param_1 + 0x9c),0);
    fn_00385b60(param_1,uVar2);
  }
  iVar1 = fn_00445f0c(*(undefined4 *)(param_1 + 0x9c),1);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = fn_00445f00(*(undefined4 *)(param_1 + 0x9c),1);
  fn_00190d50(*(undefined4 *)(param_1 + 0xa0),uVar2);
  return;
}



undefined4 fn_0034c6f4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  (**(code **)(*param_1 + 0x118))
            (param_1,L"rom:/data/Layout/menu/information.arc",(char *)&DAT_00861110,&DAT_00860454);
  iVar1 = fn_0068897c(*(undefined4 *)(param_1[0x1d] + 0x10),(char *)&DAT_00861108);
  param_1[0x28] = iVar1;
  puVar3 = (undefined4 *)param_1[0x26];
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar2 == &DAT_008951e8) goto LAB_0034c764;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0034c764:
  param_1[0x27] = (int)puVar3;
  fn_0022cd58(param_1,&LAB_0034c784);
  return 1;
}



void fn_0034c6b4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00385b88();
  puVar1[0x27] = 0;
  *puVar1 = &DAT_00825a94;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  return;
}


