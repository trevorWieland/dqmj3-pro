#include "002795c8_00279cb4.h"



void fn_00279cb4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined2 param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  
  fn_00279bd4();
  *param_1 = param_2;
  piVar5 = param_1 + 3;
  iVar2 = fn_00100b58(param_3);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)*piVar5;
    piVar4 = puVar3 + -3;
    iVar2 = *piVar4;
    if (iVar2 == 0) {
      puVar3[-1] = 0;
      *(undefined2 *)*piVar5 = 0;
    }
    else {
      if ((puVar3 != &DAT_008f9cf4) &&
         ((iVar2 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar2 + -1, iVar2 == 0)))))) {
        fn_001008c4(*piVar5 + -0xc,*(int *)(*piVar5 + -8) + 8,0);
      }
      *piVar5 = (int)&DAT_008f9cf4;
    }
  }
  else {
    fn_00177c88(piVar5,0,*(undefined4 *)(*piVar5 + -4),param_3,iVar2,0,iVar2);
  }
  *(undefined2 *)((int)param_1 + 6) = param_5;
  *(undefined1 *)(param_1 + 4) = param_4;
  iVar2 = fn_00145aac(*param_1);
  if (iVar2 == 0) {
    *(undefined2 *)(param_1 + 1) = 1;
  }
  else {
    if (iVar2 == 1) {
      uVar1 = 2;
    }
    else {
      uVar1 = 3;
    }
    *(undefined2 *)(param_1 + 1) = uVar1;
  }
  return;
}



bool fn_00279bbc(void)

{
  int iVar1;
  
  iVar1 = fn_00278784();
  return iVar1 == 2;
}



bool fn_00279b34(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_20 [16];
  
  puVar1 = (undefined4 *)fn_001c6c38(auStack_20);
  iVar2 = fn_00278784(param_1,*puVar1);
  if (iVar2 == 2) {
    bVar3 = true;
    if (puVar1[1] != -1) {
      iVar2 = fn_00278784(param_1);
      bVar3 = iVar2 == 2;
      if (!bVar3) {
        return bVar3;
      }
    }
    if (puVar1[2] != -1) {
      iVar2 = fn_00278784(param_1);
      bVar3 = (bool)(bVar3 & iVar2 == 2);
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



undefined4 fn_00279a38(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_90 [128];
  
  uVar1 = 0x140;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x1900) != 0) {
    uVar1 = 0xffffffff;
  }
  fn_00101a50(auStack_90,0x80,L"rom:/data/Field/Sky/sky%03d.bch",param_2);
  fn_002775a0(param_1,uVar1,auStack_90,0,0,0x80,0);
  return uVar1;
}



undefined4 fn_002798b8(int param_1,short param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [128];
  
  uVar2 = 0x139;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x1874) != 0) {
    uVar2 = 0xffffffff;
  }
  uVar1 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c));
  fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Map/%s.bch",uVar1);
  fn_002775a0(param_1,uVar2,auStack_98,0,param_3,0x80,(int)param_2);
  return uVar2;
}



bool fn_002798a0(void)

{
  int iVar1;
  
  iVar1 = fn_00278784();
  return iVar1 == 3;
}



void fn_00279878(undefined4 param_1)

{
  fn_00279ae4(param_1,0x1c5);
  fn_00279ae4(param_1,0x1c6);
  return;
}



void fn_00279848(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0x1cc;
  do {
    fn_00279ae4(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (0x1c9 < iVar1);
  return;
}



void fn_002797d8(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0xba;
  do {
    piVar1 = (int *)(*(int *)(param_1 + 0x20) + iVar2 * 0x14);
    if (0 < piVar1[2]) {
      if (*piVar1 != 0) {
        piVar1[2] = piVar1[2] + -1;
      }
      if (*(int *)(*(int *)(param_1 + 0x20) + iVar2 * 0x14 + 8) == 0) {
        fn_00279ae4();
      }
    }
    iVar2 = iVar2 + -1;
  } while ((0x60 < iVar2) && (iVar2 != -1));
  return;
}



bool fn_00279750(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_20 [16];
  
  puVar1 = (undefined4 *)fn_001c6c38(auStack_20);
  iVar2 = fn_00278784(param_1,*puVar1);
  if (iVar2 == 2) {
    bVar3 = true;
    if (puVar1[1] != -1) {
      iVar2 = fn_00278784(param_1);
      bVar3 = iVar2 == 2;
      if (!bVar3) {
        return bVar3;
      }
    }
    if (puVar1[2] != -1) {
      iVar2 = fn_00278784(param_1);
      bVar3 = (bool)(bVar3 & iVar2 == 2);
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



void fn_00279704(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_18 [12];
  
  puVar1 = (undefined4 *)fn_001c6c38(auStack_18);
  fn_00279ae4(param_1,*puVar1);
  if (puVar1[1] != -1) {
    fn_00279ae4(param_1);
  }
  if (puVar1[2] != -1) {
    fn_00279ae4(param_1);
  }
  return;
}



void fn_002796d4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0x1c9;
  do {
    fn_00279ae4(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (0x1c6 < iVar1);
  return;
}



void fn_002796a4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0x206;
  do {
    fn_00279ae4(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (0x1ee < iVar1);
  return;
}



void fn_00279ae4(int param_1,int param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + param_2 * 0x14) == 0) {
    return;
  }
  fn_0012f208(param_1);
  fn_0012d73c(*(undefined4 *)(*(int *)(param_1 + 0x20) + param_2 * 0x14));
  *(undefined4 *)(*(int *)(param_1 + 0x20) + param_2 * 0x14) = 0;
  fn_00279bd4(*(int *)(param_1 + 0x20) + param_2 * 0x14);
  return;
}



void fn_00279bd4(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  *param_1 = 0;
  *(undefined2 *)((int)param_1 + 6) = 0xffff;
  *(undefined2 *)(param_1 + 1) = 0;
  piVar4 = param_1 + 3;
  param_1[2] = 0;
  iVar1 = fn_00100b58(&DAT_00279cac);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)*piVar4;
    piVar3 = puVar2 + -3;
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      puVar2[-1] = 0;
      *(undefined2 *)*piVar4 = 0;
    }
    else {
      if ((puVar2 != &DAT_008f9cf4) &&
         ((iVar1 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))))) {
        fn_001008c4(*piVar4 + -0xc,*(int *)(*piVar4 + -8) + 8,0);
      }
      *piVar4 = (int)&DAT_008f9cf4;
    }
  }
  else {
    fn_00177c88(piVar4,0,*(undefined4 *)(*piVar4 + -4),&DAT_00279cac,iVar1,0,iVar1);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



void fn_002795c8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x1ca;
  iVar3 = iVar4;
  do {
    if (*(int *)(*(int *)(param_2 + 0x20) + iVar3 * 0x14) == 0) goto LAB_00279610;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1cd);
  iVar3 = -1;
LAB_00279610:
  uVar1 = fn_00278c50(param_2,iVar3,0x18d,0,0,1,0);
  do {
    if (*(int *)(*(int *)(param_2 + 0x20) + iVar4 * 0x14) == 0) goto LAB_00279668;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x1cd);
  iVar4 = -1;
LAB_00279668:
  uVar2 = fn_00278c50(param_2,iVar4,0x18d,1,0,0,0);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = 0xffffffff;
  return;
}


