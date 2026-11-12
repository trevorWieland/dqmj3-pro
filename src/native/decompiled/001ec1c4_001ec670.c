#include "001ec1c4_001ec670.h"



void fn_001ec670(undefined4 param_1,undefined4 param_2)

{
  fn_006f7a20(DAT_008977e0);
  fn_00683224(*(undefined4 *)(DAT_008977e0 + 0x3c),param_2);
  return;
}



void fn_001ec554(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  
  iVar1 = param_1 + param_2 * 0x2c;
  if (((int)param_2 < 0) || (0x4f < param_2)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(iVar1 + 0x8c);
  }
  uVar10 = *(undefined4 *)(iVar8 + 0xe4);
  uVar9 = 0;
  do {
    iVar8 = iVar1 + 0x8c + uVar9 * 4;
    uVar2 = *(uint *)(iVar8 + 0x18);
    if (uVar2 != 0xffffffff) {
      if (((int)uVar2 < 0) || (0x4f < uVar2)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + uVar2 * 0x2c + 0x8c);
      }
      fn_0017fde4(*(undefined4 *)(iVar3 + 0xe4));
      uVar4 = fn_0019bc38();
      uVar5 = fn_0017fde4(uVar10);
      puVar6 = (undefined4 *)fn_0019695c(uVar5,uVar4);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = &DAT_00858c10;
        uVar7 = puVar6[2];
        uVar2 = uVar7;
        if ((uint)puVar6[3] <= uVar7) {
          for (; uVar2 != puVar6[3]; uVar2 = uVar2 + 8) {
          }
        }
        fn_001008c4(uVar7,(int)(puVar6[4] - uVar7) >> 3,0);
        fn_002feef8(puVar6);
        *(undefined4 *)(iVar8 + 0x18) = 0xffffffff;
      }
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 5);
  return;
}



void fn_001ec3f0(int param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *local_30 [4];
  char *pcStack_20;
  
  iVar4 = param_1 + param_2 * 0x2c;
  if (((int)param_2 < 0) || (0x4f < param_2)) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar4 + 0x8c);
  }
  if (((int)param_3 < 0) || (0x4f < param_3)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + param_3 * 0x2c + 0x8c);
  }
  local_30[0] = "GlobalSRT";
  local_30[1] = "Effect1";
  local_30[2] = "Effect2";
  local_30[3] = "UpperBody";
  pcStack_20 = "Effect3";
  if (*(int *)(iVar4 + 0xa4) == -1) {
    *(uint *)(iVar4 + 0xa4) = param_3;
  }
  else if (*(int *)(iVar4 + 0xa8) == -1) {
    *(uint *)(iVar4 + 0xa8) = param_3;
  }
  else if (*(int *)(iVar4 + 0xac) == -1) {
    *(uint *)(iVar4 + 0xac) = param_3;
  }
  else if (*(int *)(iVar4 + 0xb0) == -1) {
    *(uint *)(iVar4 + 0xb0) = param_3;
  }
  else if (*(int *)(iVar4 + 0xb4) == -1) {
    *(uint *)(iVar4 + 0xb4) = param_3;
  }
  uVar1 = fn_0017fde4(*(undefined4 *)(iVar6 + 0xe4));
  uVar1 = fn_00191238(uVar1,local_30[param_4]);
  puVar2 = (undefined4 *)fn_00145b00(0x18,&DAT_00812c8c);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = uVar1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = &DAT_0083d218;
    uVar1 = fn_0017fde4(*(undefined4 *)(iVar5 + 0xe4));
    fn_0018cdf4(puVar2,uVar1);
    puVar2[5] = *(undefined4 *)(iVar5 + 0x3c);
    uVar1 = fn_0017fde4(*(undefined4 *)(iVar6 + 0xe4));
    uVar1 = fn_0018d16c(uVar1,puVar2);
    uVar3 = fn_0017fde4(*(undefined4 *)(iVar5 + 0xe4));
    fn_00196998(uVar3,uVar1);
  }
  return;
}



void fn_001ec3dc(void)

{
  fn_002e2c68(*(undefined4 *)(DAT_00897804 + 0x20));
  return;
}



void fn_001ec3c4(undefined4 param_1,undefined4 param_2,short param_3)

{
  fn_00242324(*(undefined4 *)(DAT_00897804 + 0x18),param_2,(int)param_3);
  return;
}



void fn_001ec398(int param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  
  if (((-1 < (int)param_2) && (param_2 < 0x50)) &&
     (iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0x189) = param_3;
  }
  return;
}



void fn_001ec348(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_006f75ac(DAT_008977e0);
  uVar2 = fn_0016ba34(DAT_00897800,DAT_00898224,param_2,0);
  fn_0016b4ec(uVar1,uVar2);
  return;
}



void fn_001ec30c(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  if ((((int)param_2 < 0) || (0x4f < param_2)) ||
     (piVar1 = *(int **)(param_1 + param_2 * 0x2c + 0x8c), piVar1 == (int *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001ec340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x10))(piVar1,param_3);
  return;
}



void fn_001ec29c(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_006abd58(param_1,param_3);
  if (iVar1 == 0) {
    return;
  }
  param_1 = param_1 + param_2 * 0x2c;
  if (((-1 < (int)param_2) && (param_2 < 0x50)) &&
     (piVar2 = *(int **)(param_1 + 0x8c), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0xd0))(piVar2,iVar1 + 0x20);
  }
  piVar2 = *(int **)(param_1 + 0x8c);
                    /* WARNING: Could not recover jumptable at 0x001ec304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x14))(piVar2,iVar1 + 0x2c);
  return;
}



void fn_001ec26c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 1) {
    return;
  }
  iVar1 = fn_006f75ac(DAT_008977e0);
  *(int *)(*(int *)(*(int *)(iVar1 + 8) + 0x80) + 0x14) = param_2;
  return;
}



void fn_001ec238(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 0x50)) {
    iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c);
    if (iVar1 != 0) {
      fn_001c72c0(iVar1,param_3);
      return;
    }
  }
  return;
}



void fn_001ec1c4(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_006f7a20(DAT_008977e0);
  if (iVar2 != 0) {
    if (((int)param_2 < 0) || (0x4f < param_2)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + param_2 * 0x2c + 0x8c);
    }
    cVar1 = *(char *)(iVar2 + 0xdc);
    if ((cVar1 == '\0') || ((cVar1 != '\x02' && (cVar1 == '\x03')))) {
      *(undefined4 *)(iVar2 + 0x140) = 0;
    }
  }
  return;
}


