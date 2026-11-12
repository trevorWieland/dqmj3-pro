#include "004307c4_00430be0.h"



void fn_00430be0(int *param_1,int *param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  int iVar2;
  
  if (param_5 != 0) {
    if ((char)param_1[0x1f] == '\0') {
      (**(code **)(*param_1 + 0x15c))(param_1,param_3,0,param_1[0x19]);
    }
    else {
      (**(code **)(*param_1 + 0x160))(param_1,param_3,param_6);
    }
  }
  if (param_4 == 0) {
    iVar2 = param_2[8];
    fn_00300f74(param_3,iVar2);
    iVar1 = (**(code **)(*param_2 + 0x14))(param_2);
    iVar1 = iVar2 * (iVar1 + -1) + extraout_r1_00;
  }
  else {
    fn_00300f74(param_3,param_2[8]);
    iVar1 = extraout_r1;
  }
  if ((char)param_1[0x1f] == '\0') {
    (**(code **)(*param_1 + 0x15c))(param_1,iVar1,1,param_6);
  }
  else {
    (**(code **)(*param_1 + 0x160))(param_1,iVar1,param_6);
  }
  fn_002e3f3c(param_2,iVar1);
  return;
}



void fn_00430b80(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xb0);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0xb4);
  }
  (**(code **)(*piVar1 + 0x34))(piVar1,0);
  *(int *)(*(int *)(param_1 + 0xd4) + 0x34) = piVar1[0xb];
  *(int *)(*(int *)(param_1 + 0xd4) + 0x3c) = piVar1[10];
  *(int *)(*(int *)(param_1 + 0xd8) + 200) = piVar1[0xb];
  fn_00290100(*(undefined4 *)(param_1 + 0xd8),piVar1[10]);
  return;
}



void fn_00430b38(int param_1,undefined4 param_2)

{
  undefined4 unaff_r4;
  int *piVar1;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  fn_004309c4();
  fn_0042ff80(param_1,*(int *)(param_1 + 0xb0) + 4,param_2,0);
  (**(code **)**(undefined4 **)(param_1 + 0xb0))(*(undefined4 **)(param_1 + 0xb0),0);
  piVar1 = *(int **)(param_1 + 0xb0);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0xb4);
  }
  (**(code **)(*piVar1 + 0x34))
            (piVar1,0,0,*(code **)(*piVar1 + 0x34),unaff_r4,unaff_r5,unaff_r6,in_lr);
  *(int *)(*(int *)(param_1 + 0xd4) + 0x34) = piVar1[0xb];
  *(int *)(*(int *)(param_1 + 0xd4) + 0x3c) = piVar1[10];
  *(int *)(*(int *)(param_1 + 0xd8) + 200) = piVar1[0xb];
  fn_00290100(*(undefined4 *)(param_1 + 0xd8),piVar1[10]);
  return;
}



void fn_00430ae0(int param_1,undefined1 param_2)

{
  fn_002c0bc0();
  *(undefined1 *)(*(int *)(param_1 + 0xe0) + 0x48) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 0xd8) + 0x48) = param_2;
  return;
}



void fn_004309e8(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  if (*(int *)(param_1 + 100) == 6) {
    *(undefined1 *)(*(int *)(param_1 + 0xe0) + 0x46) = 0;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0xec);
    if (param_4 == 0) {
      param_3 = *(undefined4 *)(param_1 + 0xe8);
    }
    fn_0025e4c0(*(undefined4 *)(param_1 + 0xd0),0);
  }
  if (param_2 == 6) {
    *(undefined1 *)(*(int *)(param_1 + 0xe0) + 0x46) = 1;
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0xe8) = param_3;
    }
    else {
      *(undefined4 *)(param_1 + 0xe8) = 0;
    }
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 100);
    fn_0025e4c0(*(undefined4 *)(param_1 + 0xd0),1);
  }
  fn_002c07e4(param_1,param_2,param_3,param_4,param_5);
  return;
}



void fn_004309c4(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004309d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xd0) + 0x28))();
  return;
}



void fn_0043095c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x68) == 4) {
    iVar1 = *(int *)(param_1 + 0xb0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xb4);
    }
    if (*(int *)(param_1 + 0x6c) != *(int *)(iVar1 + 0x28)) {
      fn_002e3ef4(iVar1,*(int *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),
                   *(undefined4 *)(param_1 + 0x74));
      fn_002b427c(*(undefined4 *)(param_1 + 0x94),0);
                    /* WARNING: Could not recover jumptable at 0x004309c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x94) + 0x20))(*(int **)(param_1 + 0x94),0);
      return;
    }
  }
  fn_002bfd10(param_1);
  return;
}



void fn_00430938(int param_1)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  fn_004318ac();
  fn_0068b14c(*(undefined4 *)(param_1 + 0x11c),1);
  if (*(int *)(param_1 + 0x68) == 4) {
    iVar1 = *(int *)(param_1 + 0xb0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xb4);
    }
    if (*(int *)(param_1 + 0x6c) != *(int *)(iVar1 + 0x28)) {
      fn_002e3ef4(iVar1,*(int *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),
                   *(undefined4 *)(param_1 + 0x74),unaff_r4,in_lr);
      fn_002b427c(*(undefined4 *)(param_1 + 0x94),0);
                    /* WARNING: Could not recover jumptable at 0x004309c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x94) + 0x20))(*(int **)(param_1 + 0x94),0);
      return;
    }
  }
  fn_002bfd10(param_1);
  return;
}



void fn_004307c4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = fn_00172c98(param_2,(char *)&DAT_00430928);
  if (iVar1 == 0) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0xb0);
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0xb4);
  }
  iVar2 = fn_00145b00(0x44,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_00307cc4(iVar2,*(undefined4 *)(param_1 + 4),iVar1,
                                 (int)*(char *)(param_3 + 0x5c));
  }
  piVar5 = *(int **)(param_1 + 0xd4);
  if (piVar5 != piVar3) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0xd4) = piVar3;
  }
  (**(code **)(**(int **)(param_1 + 0xd4) + 0x10))();
  *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0x34) = *(undefined4 *)(iVar6 + 0x2c);
  *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0x3c) = *(undefined4 *)(iVar6 + 0x28);
  iVar1 = fn_00145b00(0xd0,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar1 != 0) {
    piVar3 = (int *)fn_0029011c(iVar1,*(undefined4 *)(param_1 + 4),1);
  }
  piVar5 = *(int **)(param_1 + 0xd8);
  if (piVar5 != piVar3) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0xd8) = piVar3;
  }
  *(int *)(*(int *)(param_1 + 0xd8) + 8) = param_1;
  *(undefined4 *)(*(int *)(param_1 + 0xd8) + 200) = *(undefined4 *)(iVar6 + 0x2c);
  fn_00290100(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(iVar6 + 0x28));
  iVar1 = 0;
  do {
    uVar4 = fn_00307ba8(*(undefined4 *)(param_1 + 0xd4),iVar1);
    fn_00660200(*(undefined4 *)(param_1 + 0xd8),iVar1,uVar4,0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  fn_00245330(param_1,*(undefined4 *)(param_1 + 0xd8));
  return;
}


