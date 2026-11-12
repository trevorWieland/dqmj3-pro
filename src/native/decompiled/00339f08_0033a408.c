#include "00339f08_0033a408.h"



void fn_0033a408(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *local_24;
  int local_20 [2];
  
  iVar3 = (int)*(short *)(*(int *)(param_1 + 8) + param_4 * 4);
  if (iVar3 == 0) {
    piVar1 = *(int **)(param_2 + param_3 * 4 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x00305ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x20))(piVar1,0);
    return;
  }
  fn_0023097c(&local_24,iVar3);
  fn_0037cee4(param_2,param_3,local_24);
  fn_0037ce88(param_2,param_3,1);
  fn_00305a6c(param_2,param_3);
  fn_0037ce70(param_2,param_3,&DAT_0033a548);
  local_20[0] = 0;
  local_20[1] = 0;
  uVar2 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),iVar3);
  fn_0018a618(local_20,4,3,&DAT_0033a550,uVar2);
  fn_0037ce70(param_2,param_3,local_20);
  if (local_24 != &DAT_008f9cf4) {
    piVar1 = local_24 + -3;
    iVar3 = *piVar1;
    if ((iVar3 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
    }
  }
  return;
}



void fn_0033a3f0(void)

{
  DAT_008924b4 = 0;
  DAT_008924b8 = 0;
  return;
}



undefined4 fn_0033a3c4(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || ((short)DAT_008924b8 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



int fn_0033a3ac(int param_1)

{
  return (int)*(short *)(DAT_008924b4 + param_1 * 4 + -2);
}



bool fn_0033a374(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_008924b4 + param_1 * 4 + -4);
  return cVar1 != '\x01' && cVar1 != '\x03';
}



undefined1 fn_0033a35c(int param_1)

{
  return *(undefined1 *)(DAT_008924b4 + param_1 * 4 + -4);
}



undefined4 *
fn_0033a15c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *param_1 = &DAT_00824de4;
  param_1[1] = 0;
  puVar1 = (undefined4 *)fn_00145b00(0x54,&DAT_00812c8c,param_3,param_4,param_4);
  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = 1;
    iVar2 = 1;
    *puVar1 = 0;
    do {
      puVar1[iVar3] = 0;
      iVar2 = iVar2 + 2;
      puVar1[iVar3 + 1] = 0;
      iVar3 = iVar3 + 2;
    } while (iVar2 < 0x15);
  }
  iVar2 = 0;
  puVar4 = (undefined4 *)param_1[1];
  if (puVar4 != puVar1) {
    if (puVar4 != (undefined4 *)0x0) {
      iVar3 = 0;
      do {
        fn_0012d73c(puVar4[iVar3]);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x15);
      fn_002feef8(puVar4);
    }
    param_1[1] = puVar1;
  }
  if (iVar2 != 0) {
    iVar3 = 0;
    do {
      fn_0012d73c(*(undefined4 *)(iVar2 + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x15);
    fn_002feef8(iVar2);
  }
  return param_1;
}



undefined4 fn_0033a0f8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 4);
  do {
    uVar1 = fn_0011c1b4(L"rom:/data/Parameter/Break/KindParam.tp" + iVar2 * 0x40,0,0,0,0,0,0,0,5);
    *(undefined4 *)(iVar3 + iVar2 * 4) = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x15);
  return 1;
}



undefined4 fn_00339f84(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    iVar1 = 0;
    do {
      if (*(short *)(iVar2 + iVar1 * 2 + 0x1cd18) == param_2) {
        return *(undefined4 *)(iVar2 + iVar1 * 4 + 0x1cd40);
      }
      if (*(short *)(iVar2 + iVar1 * 2 + 0x1cd1a) == param_2) {
        return *(undefined4 *)(iVar2 + iVar1 * 4 + 0x1cd44);
      }
      iVar1 = iVar1 + 2;
    } while (iVar1 < 0x14);
  }
  return 0;
}



void fn_00339f24(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_3 < 1) {
    return;
  }
  iVar3 = DAT_008923ec + param_1 * 6;
  do {
    iVar1 = iVar4 * 2;
    iVar2 = iVar4 * 2;
    iVar4 = iVar4 + 1;
    *(undefined2 *)(param_2 + iVar2) = *(undefined2 *)(iVar3 + iVar1 + 2);
  } while (iVar4 < param_3);
  return;
}



int fn_00339f08(int param_1)

{
  return (int)*(short *)(DAT_008923ec + param_1 * 6);
}


