#include "0038ee34_0038f500.h"



void fn_0038f500(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if ((*(char *)(*(int *)(param_1 + 0xb0) + 0x1c) != '\0') ||
     (iVar1 = fn_00154ac8(0x82), iVar1 != 0)) {
    return;
  }
  uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_006e6820(*(undefined4 *)(param_1 + 0xb0));
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)fn_006e6814(*(undefined4 *)(param_1 + 0xb0),iVar5);
      uVar3 = fn_0028aad0(uVar6,*puVar2);
      fn_0020bbc4(&local_30,uVar3);
      iVar4 = fn_006bf240(&local_2c);
      if (0 < iVar4) {
        fn_00144834(0x82,1);
        puVar2 = &DAT_00891cb8;
        iVar1 = 3;
        goto LAB_0038f5c4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  puVar2 = &DAT_00891ca8;
  iVar1 = 2;
LAB_0038f5c4:
  iVar5 = 0;
  do {
    uVar6 = fn_0022f584(puVar2[iVar5],0);
    local_2c = 1;
    uStack_28 = 0;
    local_20 = 1;
    local_24 = 0;
    local_30 = 1;
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar6,1,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < iVar1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_0038f45c(undefined4 *param_1)

{
  *param_1 = &DAT_0082ae04;
  if ((int *)param_1[0x68] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x68] + 4))();
  }
  fn_001dc088(param_1);
  fn_002feef8();
  return;
}



void fn_0038f398(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_s0;
  
  fn_001db8a4();
  if ((*(int *)(param_1 + 0xe4) == 0) || (iVar1 = fn_0017fde4(), iVar1 == 0)) {
    return;
  }
  if (in_s0 < 0x3f800000) {
    uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 0xe4));
    fn_005ea63c(uVar2,0x3e);
    return;
  }
  uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 0xe4));
  fn_005ea63c(uVar2,0);
  return;
}



undefined4 fn_0038f350(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((char)param_1[0x16] != '\0') {
    if ((char)param_1[0x69] == '\x01') {
      uVar1 = 0;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x134))(param_1);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = 1;
        *(undefined1 *)(param_1 + 0x69) = 1;
      }
    }
  }
  return uVar1;
}



void fn_0038f23c(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  fn_001db0c0();
  fn_005eeda8(*(undefined4 *)(param_1 + 0xe4));
  piVar1 = (int *)fn_006f72e0(DAT_008977e0);
  iVar2 = (**(code **)(*piVar1 + 0x3c))();
  if ((iVar2 == 0) || (*(int *)(param_1 + 0x19c) != 0)) {
    piVar1 = (int *)fn_006f72e0(DAT_008977e0);
    iVar2 = (**(code **)(*piVar1 + 0x3c))();
    bVar3 = iVar2 == 0;
    if (bVar3) {
      iVar2 = *(int *)(param_1 + 0x19c);
    }
    if (bVar3 && iVar2 == 1) {
      fn_0017fd38(*(undefined4 *)(param_1 + 0xe4),0,0);
      fn_005ef0b8(*(undefined4 *)(param_1 + 0xe4),0);
      *(undefined4 *)(param_1 + 0x19c) = 0;
    }
  }
  else {
    fn_0017fd38(*(undefined4 *)(param_1 + 0xe4),1,0);
    fn_005ef0b8(*(undefined4 *)(param_1 + 0xe4),1);
    *(undefined4 *)(param_1 + 0x19c) = 1;
  }
  if (*(char *)(*(int *)(param_1 + 0x1a0) + 0xf8) != '\x03') {
    local_18 = *(undefined4 *)(param_1 + 0x38);
    uStack_14 = *(undefined4 *)(param_1 + 0x3c);
    local_10 = 0;
    fn_00211a98(param_1,*(undefined4 *)(param_1 + 0x1a0),0,&local_18,param_1 + 0x2c,param_1 + 0x20)
    ;
  }
  return;
}



undefined4 fn_0038f170(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = fn_002113c8();
  if (param_1[0x67] != 0) {
    fn_0017fd38(param_1[0x39],0,0);
    fn_005ef0b8(param_1[0x39],0);
    param_1[0x67] = 0;
  }
  (**(code **)(*param_1 + 0x58))(param_1,1);
  (**(code **)(*param_1 + 0x54))(param_1,1);
  (**(code **)(*param_1 + 0xe0))(param_1,0);
  iVar2 = fn_00145b00(0xfc,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_0065fdf0();
  }
  piVar4 = (int *)param_1[0x68];
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[0x68] = (int)piVar3;
  }
  return uVar1;
}



void fn_0038f0ac(int *param_1)

{
  if ((char)param_1[0x16] == '\0') {
    return;
  }
  if ((char)param_1[0x69] != '\x01') {
    fn_00210f78(param_1);
    return;
  }
  if ((float)param_1[0x3e] - 0.05 <= 0.0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
                    /* WARNING: Could not recover jumptable at 0x0038f154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))(param_1);
  return;
}



void fn_0038f074(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0082ada8;
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  fn_002cb3ec(param_1);
  return;
}



void fn_0038f034(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0082ada8;
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  fn_002cb3ec(param_1);
  fn_002feef8();
  return;
}



void fn_0038f004(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002cb3c0();
  *puVar1 = &PTR_FUN_0082ada8;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



void fn_0038efe4(int param_1)

{
  fn_002caccc();
                    /* WARNING: Could not recover jumptable at 0x0038f000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
  return;
}



undefined1 * fn_0038ee98(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  fn_0039452c(*(undefined4 *)(param_1 + 0x1c),param_2,1);
  fn_002cb420(*(undefined4 *)(param_1 + 0x1c),param_2,0);
  fn_002cbcb8(*(undefined4 *)(param_1 + 0x1c),param_2,0);
  fn_0020bbc4(auStack_20,param_3);
  iVar1 = fn_006bfda8(auStack_1c);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))(*(int **)(param_1 + 0x1c),param_2,iVar1);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = fn_006bfe90();
  }
  fn_00394550(*(undefined4 *)(param_1 + 0x1c),param_2,uVar2);
  if (iVar1 != 0) {
    fn_0039452c(*(undefined4 *)(param_1 + 0x1c),param_2,param_4 ^ 1);
    uVar3 = fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),iVar1);
    fn_002cb420(*(undefined4 *)(param_1 + 0x1c),param_2,uVar3 ^ 1);
    iVar1 = fn_006b5ce8(*(undefined4 *)(param_1 + 0x30),param_2);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = fn_006bfdec();
    }
    fn_002cbcb8(*(undefined4 *)(param_1 + 0x1c),param_2,uVar2);
  }
  return auStack_20;
}



void fn_0038ee34(int param_1,undefined4 param_2)

{
  fn_0039452c(*(undefined4 *)(param_1 + 0x1c),param_2,1);
  fn_00394550(*(undefined4 *)(param_1 + 0x1c),param_2,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))(*(int **)(param_1 + 0x1c),param_2,0);
  fn_002cb420(*(undefined4 *)(param_1 + 0x1c),param_2,0);
  fn_002cbcb8(*(undefined4 *)(param_1 + 0x1c),param_2,0);
  return;
}


