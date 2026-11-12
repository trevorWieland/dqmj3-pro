#include "0034d834_0034db70.h"



void fn_0034db70(int param_1,undefined1 param_2)

{
  undefined *local_10;
  undefined1 local_c;
  
  local_10 = &DAT_007bd7ac;
  local_c = param_2;
  fn_005ed74c(*(undefined4 *)(param_1 + 0x14),&local_10);
  return;
}



void fn_0034daf8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  uVar1 = fn_00191238(param_2,param_3);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  if (param_5 == 0) {
    iVar2 = fn_005ea33c(param_2);
    puVar3 = (undefined4 *)(*(int *)(iVar2 + 0x14) + *(int *)(param_1 + 0x7c) * 0x30);
    uVar1 = puVar3[1];
    uVar4 = puVar3[2];
    uVar5 = puVar3[3];
    uVar6 = puVar3[4];
    uVar7 = puVar3[5];
    uVar8 = puVar3[6];
    uVar9 = puVar3[7];
    *(undefined4 *)(param_1 + 0x30) = *puVar3;
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    *(undefined4 *)(param_1 + 0x38) = uVar4;
    *(undefined4 *)(param_1 + 0x3c) = uVar5;
    *(undefined4 *)(param_1 + 0x40) = uVar6;
    *(undefined4 *)(param_1 + 0x44) = uVar7;
    *(undefined4 *)(param_1 + 0x48) = uVar8;
    *(undefined4 *)(param_1 + 0x4c) = uVar9;
    uVar1 = puVar3[9];
    uVar4 = puVar3[10];
    uVar5 = puVar3[0xb];
    *(undefined4 *)(param_1 + 0x50) = puVar3[8];
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = param_2;
  }
  uVar1 = param_4[1];
  uVar4 = param_4[2];
  *(undefined4 *)(param_1 + 0x60) = *param_4;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  return;
}



void fn_0034da14(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00825f6c;
  if ((int *)param_1[0x33] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x33] + 4))();
  }
  fn_002c8f50(param_1);
  fn_002feef8();
  return;
}



void fn_0034d9e4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003e5bc0();
  *puVar1 = &PTR_LAB_00825f6c;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  *(undefined1 *)(puVar1 + 0x37) = 0;
  return;
}



void fn_0034d87c(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_1[0x32];
  iVar3 = param_1[0x31];
  param_1[0x32] = iVar1 + 1;
  if (iVar3 != 0) {
    if ((iVar3 < 0x28) && (-0x28 < iVar3)) {
      if (iVar3 < 1) {
        iVar1 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
        fn_003e5ab8(param_1,iVar1 - param_1[0x32]);
        iVar1 = param_1[0x31];
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if (param_1[0x32] != iVar1) goto LAB_0034d960;
      }
      else {
        iVar1 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
        fn_003e5ab8(param_1,param_1[0x32] + iVar1);
        if (param_1[0x32] != param_1[0x31]) goto LAB_0034d960;
      }
    }
    else if (iVar1 + 1 < 0x29) {
      iVar1 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
      fn_003e5ab8(param_1,(param_1[0x31] / 0x28) * param_1[0x32] + iVar1);
      goto LAB_0034d960;
    }
  }
  (**(code **)(*param_1 + 0x154))(param_1);
LAB_0034d960:
  uVar2 = param_1[0x32];
  iVar1 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
  if (((iVar1 >> 2) - (iVar1 >> 0x1f)) * -7 + uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}



void fn_0034d834(int *param_1)

{
  if ((char)param_1[0x37] == '\0') {
    (**(code **)(*param_1 + 0x16c))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0034d874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x158))(param_1);
    return;
  }
  return;
}


