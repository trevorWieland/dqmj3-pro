#include "003d9224_003df6d4.h"



void fn_003df6d4(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x124) == '\0') {
    pcVar1 = (char *)&DAT_003df73c;
  }
  else {
    pcVar1 = (char *)&DAT_003df728;
  }
  uVar2 = fn_0022f750(pcVar1);
  fn_0022cd58(param_1,uVar2);
  *(byte *)(*(int *)(param_1 + 0x174) + 0x44) =
       *(char *)(param_1 + 0x124) == '\0' | *(byte *)(*(int *)(param_1 + 0x174) + 0x44) & 0xfe;
  return;
}



void fn_003dcf7c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  fn_0043c608();
  iVar1 = fn_001f7e04(param_1,0x80);
  if (iVar1 == 0) {
    fn_00689878(param_1,0x80);
  }
  fn_00689930(param_1,0x39,0);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xdf);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00893064) goto code_r0x003dd018;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
code_r0x003dd018:
  fn_0058b518(puVar2);
  *(undefined4 *)(param_1 + 0xe8) = 1;
  return;
}



int fn_003dcbfc(undefined4 *param_1)

{
  int iVar1;
  
  param_1[1] = 0;
  *param_1 = &DAT_00831bb8;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1[0x38] = 0xffffffff;
  param_1[0x33] = 1;
  param_1[0x39] = 0xffffffff;
  param_1[0x3a] = 0;
  iVar1 = fn_001c4578(param_1 + 0x3b);
  fn_003db960(iVar1 + -0xec,0xffffffff);
  return iVar1 + -0xec;
}



void fn_003da164(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,4);
  *puVar1 = &DAT_00831b08;
  return;
}



void fn_003d9d88(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,5);
  *puVar1 = &DAT_00831ae0;
  if (param_3 == (byte *)0x0) {
    uVar2 = 0x15;
  }
  else {
    uVar2 = (uint)*param_3;
  }
  puVar1[0x16] = uVar2;
  return;
}



void fn_003d9728(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x25);
  *puVar1 = &DAT_00831a90;
  return;
}



void fn_003d9470(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x24);
  puVar1[0x16] = 0;
  *puVar1 = &DAT_00831a68;
  return;
}



void fn_003d9224(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(byte *)(*(int *)(param_1 + 0x14) + 0x39c) & 8) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar3;
    if (0x3c < uVar3) goto LAB_003d9308;
  }
  iVar1 = fn_006b0d10(*(int *)(param_1 + 0x14),0);
  if (iVar1 != 0) {
    iVar2 = fn_006bd500(param_1,iVar1,0);
    if (iVar2 == 0) {
      fn_001c7764(*(undefined4 *)(param_1 + 0x14),iVar1 + 0x20);
      (**(code **)(**(int **)(param_1 + 0x14) + 0x34))();
                    /* WARNING: Could not recover jumptable at 0x003d935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),1,4,0);
      return;
    }
    iVar1 = fn_00214640(iVar1,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x13c),2,0x25);
    if (iVar1 != 0) {
      fn_00216784(*(undefined4 *)(param_1 + 0x14));
      (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),0x17,4,0);
      fn_0069eed8(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xe4),0);
      fn_00215e38(*(undefined4 *)(param_1 + 0x14),6,1);
      *(undefined4 *)(param_1 + 0xc) = 5;
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
  }
LAB_003d9308:
  fn_0021718c(param_1,1,0x3c);
  return;
}


