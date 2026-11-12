#include "00326dc0_0033a0e0.h"



void fn_0033a0e0(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_00824dd4;
  return;
}



void fn_0033a00c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = 0;
  do {
    if (*(short *)(iVar2 + iVar1 * 2 + 0x1cd18) == param_2) {
      iVar1 = iVar1 * 4 + 0x1cd40;
LAB_0033a068:
      if (*(int *)(iVar2 + iVar1) != 0) {
        return;
      }
      break;
    }
    if (*(short *)(iVar2 + iVar1 * 2 + 0x1cd1a) == param_2) {
      iVar1 = iVar1 * 4 + 0x1cd44;
      goto LAB_0033a068;
    }
    iVar1 = iVar1 + 2;
  } while (iVar1 < 0x14);
  iVar1 = fn_00315398(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      if (*(short *)(*(int *)(param_1 + 4) + iVar1 * 2 + 0x1cd18) == 0) {
        *(short *)(*(int *)(param_1 + 4) + iVar1 * 2 + 0x1cd18) = (short)param_2;
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar1 * 4 + 0x1cd40) = param_3;
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x14);
  }
  return;
}



void fn_00339f6c(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_00824dc4;
  return;
}



undefined4 fn_00336678(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint in_fpscr;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xdb);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00890f3c) goto LAB_003366c8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003366c8:
  *(undefined4 **)(param_1 + 100) = puVar1;
  uVar3 = fn_001481c8(*(undefined4 *)(param_1 + 0x68),DAT_00890f5c,&DAT_003367a4,1,1);
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar3 = fn_001480d0(*(undefined4 *)(param_1 + 0x68),uVar3,DAT_00890f60,&LAB_003367ac,0,1,0);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  uVar3 = fn_001c804c(*(undefined4 *)(param_1 + 0x68),DAT_00890f64,uVar3);
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  iVar4 = fn_001088e0(*(undefined4 *)(param_1 + 0x68),uVar3);
  uVar3 = fn_00176970();
  uVar3 = VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(iVar4 + 0x10) = uVar3;
  iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  piVar5 = *(int **)(iVar4 + 0x10);
  *(int **)(param_1 + 0x78) = piVar5;
  iVar4 = (**(code **)(*piVar5 + 0x2c))(piVar5,DAT_00890f68,1);
  *(int *)(param_1 + 0x7c) = iVar4;
  uVar3 = *(undefined4 *)(iVar4 + 0x20);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(iVar4 + 0x1c);
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  *(byte *)(*(int *)(param_1 + 0x78) + 0x44) = *(byte *)(*(int *)(param_1 + 0x78) + 0x44) & 0xfe;
  return 1;
}



void fn_003358b4(undefined4 param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  *(undefined1 *)((int)puVar1 + 5) = param_2;
  *puVar1 = &DAT_008247d8;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



void fn_0033525c(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  fn_002c3e78();
  uVar4 = 0;
  uVar1 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
  if (uVar1 != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + 0xb4) + 0x30) == '\0') {
        puVar2 = (undefined4 *)(&UNK_007d0750 + uVar4 * 8);
      }
      else {
        puVar2 = &DAT_007d0760 + uVar4 * 2;
      }
      uVar3 = fn_0022f750(*puVar2);
      fn_0031b78c(param_1,uVar4,5,uVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}



void fn_0032d6a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  puVar1[0x1e] = 0;
  *puVar1 = &DAT_0082443c;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  return;
}



void fn_0032cff8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  puVar1[0x1e] = 0;
  *puVar1 = &DAT_00824364;
  *(undefined1 *)(puVar1 + 0x1f) = 0xff;
  return;
}



void fn_0032cb0c(int param_1)

{
  if ((*(char *)(param_1 + 0x7c) == -1) ||
     (fn_001cc890(param_1), *(char *)(param_1 + 0x7c) != '\0')) {
    return;
  }
  fn_0032c4a0(param_1);
  return;
}



void fn_0032b018(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    return;
  }
  if ((param_2 == 5) && (iVar1 = fn_00292f20(), *(char *)(iVar1 + 0xad1) != '\0')) {
    pcVar2 = (char *)&DAT_006c0af4;
  }
  else {
    pcVar2 = (char *)(&DAT_008967f0)[param_2];
  }
  uVar3 = fn_0022f584(pcVar2,0);
  uVar4 = fn_0022eefc((int)*(short *)(&DAT_007c7f60 + param_2 * 2),0);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar3,uVar4);
  fn_00689bd0(param_1,0x49,0);
  return;
}



undefined4 fn_003297ec(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 local_23;
  
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_0089679c) goto LAB_00329838;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_00329838:
  *(undefined4 **)(param_1 + 0x158) = puVar5;
  puVar5 = (undefined4 *)fn_001f74d8(param_1,0xe5);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00896a94) goto LAB_0032987c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0032987c:
  *(undefined4 **)(param_1 + 0x15c) = puVar5;
  uVar2 = fn_00292f20();
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  fn_002c330c(&local_50);
  local_50 = DAT_0089677c;
  local_4c = DAT_00896780;
  local_48 = fn_006be118(*(undefined4 *)(param_1 + 0x160));
  local_44 = *(int *)(param_1 + 0x158);
  bVar6 = *(int *)(local_44 + 0x18) == local_48;
  if (bVar6) {
    local_44 = *(int *)(local_44 + 8);
  }
  local_23 = 1;
  if (!bVar6) {
    local_44 = 0;
  }
  fn_00147974(&local_34,&DAT_00329ab4);
  uVar2 = fn_0022f750((char *)&DAT_00329ab8);
  fn_00147974(&local_28,uVar2);
  fn_002c29a0(param_1,&local_50);
  fn_0039f248(param_1);
  if (*(char *)(*(int *)(param_1 + 0x158) + 0x14) != '\0') {
    fn_006be118(*(undefined4 *)(param_1 + 0x160));
    fn_0015b0f8();
    uVar2 = fn_0022f584((char *)&DAT_00329b1c,0);
    fn_0068974c(param_1,uVar2,0,1);
    *(undefined1 *)(param_1 + 0x164) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x158) + 0x14) = 0;
  }
  *(int *)(*(int *)(param_1 + 0x158) + 0x18) = local_48;
  fn_00689930(param_1,0xe5,0);
  if (local_28 != &DAT_008f9cf4) {
    piVar3 = local_28 + -3;
    iVar4 = *piVar3;
    if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar3 = local_2c + -3;
    iVar4 = *piVar3;
    if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar3 = local_30 + -3;
    iVar4 = *piVar3;
    if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar3 = local_34 + -3;
    iVar4 = *piVar3;
    if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  return 1;
}



void fn_00326dc0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0xd4) + param_2 * 0xc;
  bVar4 = *(int *)(iVar1 + 4) != 0;
  if (bVar4) {
    iVar1 = *(int *)(iVar1 + 8);
  }
  if (bVar4 && iVar1 != 0) {
    uVar2 = fn_0022f750(*(undefined4 *)(*(int *)(param_1 + 0xd4) + param_2 * 0xc + 4));
    uVar3 = fn_0022eed8(*(undefined4 *)(*(int *)(param_1 + 0xd4) + param_2 * 0xc + 8));
    fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar3);
    fn_00689bd0(param_1,0x49,0);
    return;
  }
  return;
}


