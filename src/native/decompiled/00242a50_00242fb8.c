#include "00242a50_00242fb8.h"



void fn_00242fb8(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  float in_s0;
  float in_s1;
  float in_s2;
  float local_1c;
  float local_18;
  float local_14;
  
  uVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
  if (uVar1 <= param_2) {
    fn_002ff628(9,&DAT_008c764f,&DAT_008c764f,param_2,uVar1);
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x14) + param_2 * 4);
  (**(code **)(*piVar2 + 0x2c))(piVar2,param_3);
  fn_0025e31c(*(undefined4 *)(param_1 + 0x28),param_3);
  if (param_3 != 0) {
    uVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
    if (uVar1 <= param_2) {
      fn_002ff628(9,&DAT_008c764f,&DAT_008c764f,param_2,uVar1);
    }
    (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + param_2 * 4) + 0x28))();
    fn_00688ff8();
    local_1c = in_s0;
    local_18 = in_s1;
    local_14 = in_s2;
    fn_00688ff8(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x2c));
    local_1c = local_1c - in_s0;
    local_18 = local_18 - in_s1;
    local_14 = local_14 - in_s2;
    fn_0025e7cc(*(undefined4 *)(param_1 + 0x28),&local_1c);
  }
  return;
}



void fn_00242f44(int param_1)

{
  undefined4 *puVar1;
  
  (**(code **)(**(int **)(param_1 + 0x28) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0x24) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  if (*(undefined4 **)(param_1 + 0x18) != puVar1) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x18))();
      puVar1 = puVar1 + 1;
    } while (*(undefined4 **)(param_1 + 0x18) != puVar1);
  }
  return;
}



void fn_00242ee4(int param_1)

{
  undefined4 *puVar1;
  
  fn_0069e748();
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  if (*(undefined4 **)(param_1 + 0x18) != puVar1) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x14))();
      puVar1 = puVar1 + 1;
    } while (*(undefined4 **)(param_1 + 0x18) != puVar1);
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
                    /* WARNING: Could not recover jumptable at 0x00242f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x24) + 0x14))();
  return;
}



void fn_00242e88(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
  if (uVar1 <= param_2) {
    fn_002ff628(9,&DAT_008c764f,&DAT_008c764f,param_2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00242edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + param_2 * 4) + 0x28))();
  return;
}



void fn_00242e00(int param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x28) + 0x10))
            (*(int **)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x10));
  fn_0025e31c(*(undefined4 *)(param_1 + 0x28),0);
  if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2 == 0) {
    fn_002ff628(9,&DAT_008c764f);
  }
  iVar1 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x14) + 0x28))();
  fn_0025e378(*(undefined4 *)(param_1 + 0x28),iVar1 + 0x3c);
  return;
}



void fn_00242c98(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = fn_00117984();
  fn_006ec3f8(uVar1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),0);
  piVar2 = (int *)fn_006ec3ec(uVar1);
  fn_0055fa6c();
  uVar1 = fn_005f0d7c(*(undefined4 *)(param_1 + 0x20));
  uVar3 = fn_00560b5c();
  (**(code **)(*piVar2 + 0x20))(piVar2,uVar3,uVar1,0);
  fn_00560b6c();
  for (iVar4 = *(int *)(param_1 + 0x30); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
    uVar3 = *(undefined4 *)(iVar4 + 0x18);
    uVar1 = fn_005f0d7c(*(undefined4 *)(param_1 + 0x20));
    fn_005f4598(uVar3,uVar1);
    iVar5 = *(int *)(iVar4 + 0x18);
    uVar1 = fn_005f0d7c(*(undefined4 *)(param_1 + 0x20));
    if (iVar5 != 0) {
      uVar3 = fn_00560b5c();
      (**(code **)(*piVar2 + 0x24))(piVar2,uVar3,iVar5,uVar1);
      fn_00560b6c();
    }
  }
  uVar1 = fn_005f0d7c(*(undefined4 *)(param_1 + 0x20));
  uVar3 = fn_00560b5c();
  fn_00551240(piVar2,uVar3,uVar1,0);
  fn_00560b6c();
  fn_00735248(0x3fff);
  return;
}



bool fn_00242c6c(int param_1)

{
  return *(char *)(DAT_0089280c + param_1) != '\0';
}



undefined4 fn_00242bf4(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((param_1 != 0) && ((int)(uint)(param_3 == 0) <= param_4)) &&
     (iVar1 = fn_00147e6c(param_1,&DAT_00242c58,4), iVar1 == 0)) {
    iVar2 = param_1 + 4;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_00892810 = 0;
  }
  else {
    DAT_00892810 = param_3 - 4;
  }
  DAT_0089280c = iVar2;
  return 1;
}



int fn_00242bd4(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 2;
}



void fn_00242bb0(void)

{
  DAT_00892844 = 0;
  DAT_00892848 = 0;
  return;
}



undefined4 fn_00242b88(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || (DAT_00892848 <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined1 fn_00242b6c(int param_1)

{
  return *(undefined1 *)(DAT_00892844 + param_1 * 0x58);
}



int fn_00242b4c(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 0x28;
}



undefined2 fn_00242b2c(int param_1)

{
  return *(undefined2 *)(DAT_00892844 + param_1 * 0x58 + 0x32);
}



undefined1 fn_00242b0c(int param_1)

{
  return *(undefined1 *)(DAT_00892844 + param_1 * 0x58 + 1);
}



undefined1 fn_00242aec(int param_1)

{
  return *(undefined1 *)(DAT_00892844 + param_1 * 0x58 + 0x50);
}



int fn_00242ad8(void)

{
  return (int)(short)DAT_00892848;
}



int fn_00242ab8(int param_1)

{
  return (int)*(short *)(DAT_00892844 + param_1 * 0x58 + 0x30);
}



bool fn_00242a90(int param_1)

{
  return *(char *)(DAT_00892844 + param_1 * 0x58 + 0x54) == '\x01';
}



int fn_00242a70(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 0x12;
}



int fn_00242a50(int param_1)

{
  return (int)*(char *)(DAT_00892844 + param_1 * 0x58 + 0x51);
}


