#include "0068e988_006b2354b.h"



void fn_006b2354(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  uVar1 = fn_001cad2c();
  fn_0017d96c(&local_48,0x40,0x3f,param_2,uVar1);
  fn_00230008(&local_48);
  return;
}



undefined4 fn_006996b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((*(code **)(param_1 + 0x1b4) != (code *)0x0) &&
     ((**(code **)(param_1 + 0x1b4))(), *(char *)(param_1 + 0x19e) != '\0')) {
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    *(undefined1 *)(param_1 + 0x19e) = 0;
  }
  if (*(int *)(param_1 + 200) == 0) {
    uVar1 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(param_1 + 0xa8));
    fn_001f4f68(*(undefined4 *)(param_1 + 0x30),uVar1);
    fn_001f0fb4(*(undefined4 *)(param_1 + 0x30),8,0);
    (**(code **)(**(int **)(param_1 + 0x30) + 8))();
  }
  if (*(int *)(*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 0x60) * 4
                       ) + 8) != 0) goto LAB_00699874;
  iVar2 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
  iVar3 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006f7564);
  if (*(int *)(param_1 + 0xa8) == iVar3) {
    if (iVar2 == 3) {
      fn_00144834(0x312,1);
      iVar2 = 1;
    }
    else {
LAB_006997e8:
      if (iVar2 == 0) goto LAB_00699874;
    }
  }
  else {
    iVar3 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006f766c);
    if (*(int *)(param_1 + 0xa8) == iVar3) {
      if (iVar2 == 3) {
        fn_00144834(0x312,1);
      }
      fn_002426a8(*(undefined4 *)(DAT_00897804 + 0x1c),0);
      goto LAB_00699874;
    }
    if (iVar2 != 1) goto LAB_006997e8;
    iVar3 = fn_00154ac8(0x312);
    if (iVar3 != 0) {
      fn_00144834(0x312,0);
      iVar2 = 3;
    }
  }
  fn_002426a8(*(undefined4 *)(DAT_00897804 + 0x1c),iVar2);
  iVar2 = fn_002ea880(DAT_00897848,iVar2);
  if (iVar2 != -1) {
    iVar3 = fn_00145b00(0x248,&DAT_00812c8c);
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_00226924();
    }
    fn_002fe5a4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4)
                 ,uVar1,iVar2);
    fn_00224300(uVar1,*(undefined4 *)
                        (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4
                                 ) + 4));
  }
LAB_00699874:
  fn_00211fd4(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(param_1 + 0xa8));
  fn_002b03b0(*(undefined4 *)(param_1 + 4));
  if (*(int *)(param_1 + 200) == 0) {
    fn_001f0fb4(*(undefined4 *)(param_1 + 0x30),6,0);
    (**(code **)(**(int **)(param_1 + 0x30) + 8))();
  }
  else {
    fn_001f580c();
    fn_001f0fb4(*(undefined4 *)(param_1 + 0x30),7,0);
  }
  fn_001def30(*(undefined4 *)
                (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                         *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                           *(int *)(DAT_008977e0 + 0x60) * 4) + 8);
  if (iVar2 != 0) {
    fn_00222020(iVar2,0);
    fn_00319738(*(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                           *(int *)(DAT_008977e0 + 0x60) * 4) + 8));
    iVar2 = fn_00391dac();
    *(bool *)(*(int *)(DAT_00897804 + 0x1c) + 8) = iVar2 == 0;
  }
  fn_00683260(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xd8));
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                           *(int *)(DAT_008977e0 + 0x60) * 4) + 4);
  fn_001da8fc(iVar2,&local_2c,0,iVar2 + 0x20,1);
  fn_00683fd8(*(undefined4 *)
                (*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 0x70) * 4),
               &local_2c);
  *(undefined1 *)(param_1 + 0x218) = 0;
  return 1;
}


