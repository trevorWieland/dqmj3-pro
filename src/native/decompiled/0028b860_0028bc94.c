#include "0028b860_0028bc94.h"



bool fn_0028bc94(void)

{
  int iVar1;
  
  iVar1 = fn_006925b8();
  return iVar1 != 0;
}



bool fn_0028bc78(void)

{
  int iVar1;
  
  iVar1 = fn_0028bde4();
  return iVar1 != 0;
}



undefined4 fn_0028bc24(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_002e31e4();
  if ((iVar1 == 0) &&
     ((iVar1 = fn_002e3204(param_1), iVar1 == 0 ||
      (iVar1 = fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),param_1), iVar1 != 0)))) {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_0028bbf4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_00163940();
  if ((iVar1 != 0) && (iVar1 = fn_00660e64(param_1), iVar1 == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



bool fn_0028bbd8(void)

{
  int iVar1;
  
  iVar1 = fn_0025be70();
  return iVar1 != 0;
}



void fn_0028bbc0(undefined4 param_1)

{
  fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),param_1);
  return;
}



int fn_0028bb88(int param_1,int param_2)

{
  if ((param_2 < 0) || (0x1d < param_2)) {
    return 0;
  }
  return *(int *)(param_1 + 4) + 0x10 + param_2 * 0xa88;
}



void fn_0028bb7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



void fn_0028bb6c(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x13c00) = param_2;
  return;
}



undefined4 fn_0028ba38(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint local_ab0 [676];
  
  iVar3 = *(int *)(param_1 + 4);
  iVar4 = iVar3 + 0x10;
  piVar1 = (int *)fn_0077f0c8(param_2,iVar4,0x1e);
  uVar8 = 0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      fn_00301f50(piVar1,0xa88);
    }
    fn_007a76e4(iVar4,(uint *)(iVar3 + 0x13c00),0x1e);
    fn_007a2604(iVar4);
    uVar8 = 1;
    for (puVar2 = (uint *)(iVar3 + 0xa890); puVar2 != (uint *)(iVar3 + 0x13c00);
        puVar2 = puVar2 + 0x2a2) {
      fn_0017821c(local_ab0,puVar2,0xa88);
      puVar5 = puVar2 + -0x2a2;
      puVar7 = puVar2;
      if ((local_ab0[0] != 0) &&
         ((puVar6 = puVar2, *puVar5 == 0 || (local_ab0[0] != 0 && local_ab0[0] < *puVar5)))) {
        do {
          puVar7 = puVar5;
          fn_0017821c(puVar6,puVar7,0xa88);
          puVar5 = puVar7 + -0x2a2;
          if (local_ab0[0] == 0) break;
          puVar6 = puVar7;
        } while ((*puVar5 == 0) || (local_ab0[0] != 0 && local_ab0[0] < *puVar5));
      }
      fn_0017821c(puVar7,local_ab0,0xa88);
    }
  }
  return uVar8;
}



int fn_0028b988(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 4) + 0x10;
  piVar3 = (int *)(*(int *)(param_1 + 4) + 8);
  iVar2 = 0;
  do {
    piVar4 = (int *)(iVar1 + iVar2 * 0xa88);
    if (*piVar4 == 0) {
      piVar4 = (int *)(iVar1 + iVar2 * 0xa88);
LAB_0028ba00:
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      iVar1 = *piVar3 + 1;
      *piVar3 = iVar1;
      *piVar4 = iVar1;
      fn_0017821c(piVar4,param_2,0xa88);
      *piVar4 = iVar1;
      return iVar1;
    }
    if (piVar4[0x2a2] == 0) {
      piVar4 = (int *)(iVar1 + iVar2 * 0xa88 + 0xa88);
      goto LAB_0028ba00;
    }
    iVar2 = iVar2 + 2;
    if (0x1d < iVar2) {
      return 0;
    }
  } while( true );
}



void fn_0028b970(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(iVar1 + 0x38) = *param_2;
  *(undefined4 *)(iVar1 + 0x3c) = uVar2;
  *(undefined4 *)(iVar1 + 0x40) = uVar3;
  return;
}



void fn_0028b960(int param_1,undefined2 *param_2)

{
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x5c) = *param_2;
  return;
}



void fn_0028b954(int param_1)

{
  fn_00166824(*(int *)(param_1 + 4) + 0x1c);
  return;
}



void fn_0028b940(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(iVar1 + 0x2c) = *param_2;
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
  *(undefined4 *)(iVar1 + 0x34) = uVar3;
  return;
}



void fn_0028b934(int param_1)

{
  fn_00166824(*(int *)(param_1 + 4) + 0xc);
  return;
}



void fn_0028b928(int param_1)

{
  fn_00166824(*(int *)(param_1 + 4) + 0x14);
  return;
}



void fn_0028b908(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  return;
}



void fn_0028b8f4(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(iVar1 + 0x44) = *param_2;
  *(undefined4 *)(iVar1 + 0x48) = uVar2;
  *(undefined4 *)(iVar1 + 0x4c) = uVar3;
  return;
}



undefined4 fn_0028b860(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = fn_006b83e4();
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  if (0 < iVar1) {
    iVar2 = *(int *)(param_1 + 4);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(iVar2 + iVar3 * 4 + 4) == param_2) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  uVar4 = fn_006b84b0(param_1);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  if (0 < iVar1) {
    iVar2 = *(int *)(param_1 + 4);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(iVar2 + iVar3 * 4 + 0x14) == param_2) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 2;
}


