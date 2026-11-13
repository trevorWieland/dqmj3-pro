#include "004b8820_004b8dacb.h"



int * fn_004b8dac(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[1];
  for (puVar1 = (undefined4 *)*param_1; puVar1 != puVar2; puVar1 = puVar1 + 6) {
    (**(code **)*puVar1)(puVar1);
  }
  fn_0014f1bc(*param_1);
  return param_1;
}



void fn_004b8d90(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}



void fn_004b8d18(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  cVar1 = *param_2;
  param_1[2] = 0x7f;
  if (cVar1 == '\0') {
    puVar2 = &DAT_80010001;
  }
  else {
    puVar2 = (undefined1 *)0x10001;
  }
  param_1[1] = &DAT_007dba44;
  *param_1 = puVar2;
  return;
}



int fn_004b8cb4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == param_1) {
    return param_1;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0x14) = iVar1;
    *(int *)(param_1 + 0x10) = iVar1;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (*(int *)(param_2 + 0x14) == iVar1) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x14) - iVar1;
  }
  fn_004b8a68(param_1,iVar1,iVar2);
  return param_1;
}



undefined4 * fn_004b8c5c(undefined4 *param_1)

{
  code *pcVar1;
  
  *param_1 = &DAT_00855ba4;
  if (param_1[3] != 0) {
    pcVar1 = *(code **)(param_1[3] + -8);
    if (pcVar1 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar1)();
    }
  }
  *param_1 = &DAT_00853740;
  param_1[1] = 0;
  return param_1;
}



void fn_004b8be8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  *param_1 = &DAT_00855ba4;
  if (iVar1 != 0) {
    if (*(code **)(iVar1 + -8) == (code *)0x0) {
      fn_0030233c(iVar1 + -8);
    }
    else {
      (**(code **)(iVar1 + -8))();
    }
  }
  *param_1 = &DAT_00853740;
  param_1[1] = 0;
  if ((code *)param_1[-2] == (code *)0x0) {
    fn_0030233c(param_1 + -2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004b8c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[-2])();
  return;
}



undefined4 * fn_004b8b9c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *param_1 = &DAT_00855ba4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_3;
  fn_004b890c(param_1);
  return param_1;
}


