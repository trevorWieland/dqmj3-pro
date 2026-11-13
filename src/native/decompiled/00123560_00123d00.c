#include "00123560_00123d00.h"



void fn_00123d00(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  
  iVar1 = fn_00114150(param_2,param_3,param_4);
  *param_1 = (longlong)iVar1 * 86400000 +
             (longlong)param_5 * 3600000 + (longlong)param_8 +
             (longlong)param_7 * 1000 + (longlong)param_6 * 60000;
  return;
}



int fn_00123c6c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = param_2 + 3;
  uVar4 = uVar2 & 0xfffffffc;
  uVar5 = param_2 + param_3 & 0xfffffffc;
  if (uVar4 <= uVar5) {
    uVar2 = uVar5 - uVar4;
  }
  if (uVar4 <= uVar5 && 0x13 < uVar2) {
    fn_0013ca5c(param_1,0x45585048,uVar4,uVar5,param_4);
    *(undefined2 *)(param_1 + 0x34) = 0;
    *(undefined2 *)(param_1 + 0x36) = 0;
    puVar3 = *(undefined2 **)(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x1c);
    *puVar3 = 0x4652;
    puVar3[1] = 0;
    *(int *)(puVar3 + 2) = (iVar1 - (int)puVar3) + -0x10;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    *(undefined2 **)(param_1 + 0x24) = puVar3;
    *(undefined2 **)(param_1 + 0x28) = puVar3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



void fn_00123a2c(void)

{
  int iVar1;
  
  if ((DAT_008bfbad & ~DAT_008bfbae) != 0) {
    iVar1 = 0;
    do {
      if ((code *)(&DAT_008ebd1c)[iVar1] != (code *)0x0) {
        (*(code *)(&DAT_008ebd1c)[iVar1])();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
    if (DAT_008bfbad != 0) {
      while (iVar1 = fn_0013c568(&DAT_008bfbbc), iVar1 == 0) {
        fn_0012d6a4(1000000,0);
      }
      fn_0013c808(DAT_008bfbb4);
      DAT_008bfbad = 0;
      fn_0013c51c(&DAT_008bfbbc);
    }
    DAT_008bfbae = 1;
  }
  return;
}



void fn_001239a0(void)

{
  int iVar1;
  
  if ((DAT_008bfbac != '\0') && (DAT_008bfbac = '\0', DAT_008bfbae != '\0')) {
    iVar1 = fn_0013c6f8(DAT_008bfbc8,DAT_008bfbcc,DAT_008bfbb0,DAT_008bfbb2);
    if (iVar1 < 0) {
      fn_00123b08(iVar1,0x1239e0);
    }
    iVar1 = 0;
    do {
      if ((code *)(&DAT_008ebd3c)[iVar1] != (code *)0x0) {
        (*(code *)(&DAT_008ebd3c)[iVar1])();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
    DAT_008bfbae = '\0';
    if (DAT_008bfbb4 != 0) {
      fn_0013c830(DAT_008bfbb4,(int)DAT_008bfbaf);
      return;
    }
  }
  return;
}



undefined4 fn_00123950(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_008ebd1c)[iVar1] == param_1) {
      (&DAT_008ebd1c)[iVar1] = 0;
      (&DAT_008ebd3c)[iVar1] = 0;
      (&DAT_008ebd5c)[iVar1] = 0;
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return 0;
}



int fn_0012382c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_008bfbb4 == (undefined4 *)0x0) {
    iVar1 = fn_0013db70(0);
    if (-1 < iVar1) {
      uVar2 = fn_002febd8((char *)&DAT_007e3fa0);
      iVar1 = fn_0014fe94(&DAT_008bfbc4,(char *)&DAT_007e3fa0,uVar2,0);
      if (-1 < iVar1) {
        DAT_008bfbb4 = &DAT_008bfbc0;
        DAT_008bfbc0 = DAT_008bfbc4;
        iVar1 = 0;
        iVar3 = 8;
        do {
          (&DAT_008ebd5c)[iVar1] = 0;
          (&DAT_008ebd3c)[iVar1] = 0;
          (&DAT_008ebd1c)[iVar1] = 0;
          iVar3 = iVar3 + -1;
          iVar1 = iVar1 + 1;
        } while (iVar3 != 0);
        DAT_008bfbad = 0;
        DAT_008bfbc8 = 0;
        DAT_008bfbcc = 0;
        DAT_008bfbb0 = 0;
        DAT_008bfbb2 = 0;
        DAT_008bfbae = 0;
        fn_0013e0ac(&DAT_008ebd7c);
        fn_00123690(&DAT_008bfbbc);
        iVar1 = 0;
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



void fn_001237e4(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = 0;
  uStack_c = 0;
  iVar1 = fn_0014e494(&local_10,8,0x30001);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x123814);
  }
  *param_1 = local_10;
  param_1[1] = uStack_c;
  return;
}



void fn_001237bc(void)

{
  int iVar1;
  
  iVar1 = fn_0013c598();
  if ((iVar1 < 0) && (iVar1 < 0)) {
    fn_0015e590(iVar1,0x1237d4);
    return;
  }
  return;
}



void fn_00123768(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if ((uVar2 < 0x10) &&
       ((DAT_008c0330 >> (uVar2 & 0xff) & 1) != 0 && (code *)(&DAT_008ec070)[uVar2] != (code *)0x0))
    {
      iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
      (*(code *)(&DAT_008ec070)[uVar2])(*(undefined4 *)(iVar1 + uVar2 * 4));
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x10);
  return;
}



void fn_00123690(undefined4 *param_1)

{
  bool bVar1;
  
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 1;
  return;
}



void fn_00123678(undefined4 *param_1)

{
  bool bVar1;
  
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 1;
  return;
}



void fn_00123668(undefined4 param_1)

{
  DAT_008c0794 = param_1;
  return;
}



undefined4 * fn_0012361c(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0x24] = 0;
  param_1[0xa5] = 0;
  *(undefined1 *)(param_1 + 0xa6) = 3;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xd9] = 0;
  fn_00301f50(param_1 + 0x4a1a,0x80);
  return param_1;
}



undefined4 fn_00123560(undefined4 param_1)

{
  int iVar1;
  int *unaff_r5;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 *puVar2;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_24 = (int *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  puVar2 = &local_20;
  iVar1 = fn_0013b134(&local_24);
  if (-1 < iVar1) {
    iVar1 = 0;
    unaff_r5 = local_24;
  }
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x1235b0);
  }
  iVar1 = fn_001233c4(param_1,unaff_r5,0,0,in_stack_00000000,in_stack_00000004,puVar2);
  if ((iVar1 < 0) && ((**(code **)(*unaff_r5 + 0x30))(unaff_r5), iVar1 < 0)) {
    fn_0015e590(iVar1,0x1235f0);
  }
  return 0;
}


