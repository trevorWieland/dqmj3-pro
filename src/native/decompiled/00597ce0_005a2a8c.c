#include "00597ce0_005a2a8c.h"



undefined4 fn_005a2a8c(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 local_24;
  undefined1 local_23;
  
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00893b10) goto LAB_005a2ad8;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_005a2ad8:
  *(undefined4 **)(param_1 + 0xb0) = puVar5;
  fn_002c330c(&local_50);
  local_50 = DAT_00896bac;
  local_4c = DAT_00896bb0;
  local_48 = 3;
  local_44 = *(undefined4 *)(*(int *)(param_1 + 0xb0) + 8);
  uVar2 = fn_0022f750((char *)&DAT_005a2d08);
  fn_00147974(&local_34,uVar2);
  local_24 = 0;
  puVar5 = (undefined4 *)0x0;
  local_23 = 1;
  uVar2 = fn_0022f750((char *)&DAT_005a2d18);
  fn_00147974(&local_28,uVar2);
  fn_002c29a0(param_1,&local_50);
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xd9);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar3 == &DAT_00896ad4) {
        puVar5 = puVar1;
        break;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  iVar6 = 0;
  if (0 < local_48) {
    do {
      fn_005db59c(puVar5,iVar6);
      uVar2 = fn_0022f750();
      fn_0031b78c(param_1,iVar6,0,uVar2);
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_48);
  }
  if (local_28 != &DAT_008f9cf4) {
    piVar4 = local_28 + -3;
    iVar6 = *piVar4;
    if ((iVar6 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar4 = local_2c + -3;
    iVar6 = *piVar4;
    if ((iVar6 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar4 = local_30 + -3;
    iVar6 = *piVar4;
    if ((iVar6 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar4 = local_34 + -3;
    iVar6 = *piVar4;
    if ((iVar6 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  return 1;
}



void fn_0059e280(undefined4 *param_1)

{
  *param_1 = &DAT_00846394;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



void fn_0059e110(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 4) + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x14))();
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2));
  }
  return;
}



void fn_0059d1b4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xec) == '\0') {
    return;
  }
  uVar1 = fn_0031b77c(*(undefined4 *)(*(int *)(param_1 + 0x78) + param_2 * 4),0);
  uVar2 = fn_0022f750((char *)&DAT_0059d220);
  iVar3 = fn_00101d80(uVar1,uVar2);
  if (iVar3 == 0) {
    uVar1 = fn_0022f750(*(undefined4 *)(param_1 + 0xe8));
  }
  fn_00748e2c(param_1,param_2,uVar1);
  return;
}



void fn_0059b048(undefined4 param_1,undefined4 param_2,short *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,7);
  puVar1[0x16] = 0;
  *puVar1 = &DAT_00845ccc;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x1a) = 0;
  *(undefined1 *)((int)puVar1 + 0x69) = 0;
  *(undefined1 *)((int)puVar1 + 0x6a) = 0;
  if (param_3 != (short *)0x0) {
    puVar1[0x16] = (int)*param_3;
    *(char *)(puVar1 + 0x17) = (char)param_3[1];
  }
  return;
}



void fn_0059a878(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x17);
  puVar1[0x17] = 0;
  puVar1[0x16] = 0xffffffff;
  *puVar1 = &DAT_00845ca4;
  return;
}



void fn_00599614(int param_1)

{
  int iVar1;
  bool bVar2;
  
  *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(*(int *)(param_1 + 0x98) + 0x1c);
  *(undefined1 *)(param_1 + 0xaa) = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x1e);
  *(undefined1 *)(param_1 + 0xab) = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x26);
  iVar1 = fn_0022cdb4(param_1,*(short *)(param_1 + 0xa8) != 0);
  bVar2 = *(short *)(param_1 + 0xa8) != 0;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0xf4);
  }
  if (bVar2 && iVar1 != 0) {
    fn_002b427c();
    fn_002b4348(*(undefined4 *)(param_1 + 0xf4),(int)*(char *)(param_1 + 0xaa));
    *(bool *)(*(int *)(param_1 + 0xf4) + 0x3d) = *(char *)(param_1 + 0xab) == 'd';
    *(undefined1 *)(*(int *)(param_1 + 0xf4) + 0x43) =
         *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x28);
  }
  return;
}



undefined4 fn_00597ce0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined1 local_1c;
  
  local_28 = DAT_00890bfc;
  local_24 = DAT_00890c00;
  uStack_20 = 0xe0;
  local_1c = 1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) goto LAB_00597d50;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00597d50:
  *(undefined4 **)(param_1 + 0xc0) = puVar1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x35);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951cc) goto LAB_00597d94;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00597d94:
  *(undefined4 **)(param_1 + 0xc4) = puVar1;
  *(undefined1 *)(puVar1 + 0x153) = 0;
  fn_004059f4(param_1,&local_28);
  piVar4 = *(int **)(*(int *)(param_1 + 0x7c) + 0x1c);
  if (piVar4 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*piVar4 + 0xc))(piVar4);
    do {
      if (puVar1 == &DAT_00890be4) goto LAB_00597de8;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_00597de8:
  iVar5 = 0;
  if (*(char *)(*(int *)(param_1 + 0x6c) + 0x14) == '\0') {
    do {
      (**(code **)(*piVar4 + 0x28))(piVar4,iVar5,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    iVar5 = 0;
    do {
      (**(code **)(*piVar4 + 0x2c))(piVar4,iVar5,0);
      fn_00394550(piVar4,iVar5,0xffffffff);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
  }
  uVar3 = fn_0022f750((char *)&DAT_00597e98);
  fn_0031fe38(*(undefined4 *)(param_1 + 0x8c),uVar3);
  *(undefined1 *)(param_1 + 0x104) = 1;
  return 1;
}


