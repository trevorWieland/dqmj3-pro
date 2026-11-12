#include "00459cb0_0045a5b0b.h"



void fn_0045a5b0(void)

{
  fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Platform/Core/SystemError.cpp"
               ,0xeb,0);
  return;
}



undefined4 fn_0045a590(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001775e8(DAT_008b63dc + 0x14);
  return *puVar1;
}



void fn_0045a44c(uint param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  undefined1 auStack_1c [8];
  
  iVar1 = DAT_008b63dc;
  piVar2 = (int *)(DAT_008b63dc + 0x24);
  (**(code **)(*piVar2 + 8))();
  iVar5 = *(int *)(iVar1 + 0x5c);
  iVar4 = iVar5;
  iVar3 = *(int *)(iVar5 + 4);
  while (iVar3 != 0) {
    if (*(uint *)(iVar3 + 0x10) < param_1) {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    else {
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
  }
  if ((iVar4 == iVar5) || (param_1 < *(uint *)(iVar4 + 0x10))) {
    iVar4 = iVar5;
  }
  if (iVar4 != iVar5) {
    local_20 = iVar4;
    fn_0077b3e4(auStack_1c,iVar1 + 0x4c,&local_20);
  }
  (**(code **)(*piVar2 + 0xc))(piVar2);
  iVar1 = DAT_008b63dc;
  piVar2 = (int *)(DAT_008b63dc + 0x78);
  (**(code **)(*piVar2 + 8))();
  iVar5 = *(int *)(iVar1 + 0xb0);
  iVar4 = iVar5;
  iVar3 = *(int *)(iVar5 + 4);
  while (iVar3 != 0) {
    if (*(uint *)(iVar3 + 0x10) < param_1) {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    else {
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
  }
  if ((iVar4 == iVar5) || (param_1 < *(uint *)(iVar4 + 0x10))) {
    iVar4 = iVar5;
  }
  if (iVar4 != *(int *)(iVar1 + 0xb0)) {
    local_20 = iVar4;
    fn_0077b3e4(auStack_1c,iVar1 + 0xa0,&local_20);
  }
                    /* WARNING: Could not recover jumptable at 0x0045a588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return;
}



uint fn_0045a3b0(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iStack_28;
  int iStack_24;
  int iStack_4;
  
  iVar2 = param_2 + param_3 * 2;
  if (param_1 == 0) {
    param_1 = fn_00101144(param_2,L"No Error");
    *(undefined2 *)(iVar2 + -2) = 0;
  }
  else {
    if ((param_1 >> 0x10) * -0x100000 != -0x1000000) {
      uVar1 = fn_00101144(param_2,*(undefined4 *)
                                    (*(int *)((&DAT_008b6558)[param_1 >> 0x10 & 0xffff0fff] + 8) +
                                    (param_1 & 0xffff) * 4),param_3);
      *(undefined2 *)(iVar2 + -2) = 0;
      return uVar1;
    }
    param_1 = param_1 + 0x1ff00000;
    if (param_1 == 0) {
      iStack_24 = param_2;
      if (param_3 != 0) {
        iStack_24 = param_3 * 2 + param_2 + -2;
      }
      iStack_28 = param_2;
      iStack_4 = param_2;
      uVar1 = fn_0030091a(&UNK_007dcbdc,&iStack_28,&iStack_4,0x300941);
      if (param_3 != 0) {
        iStack_24 = iStack_24 + 2;
        fn_00300940(0,&iStack_28);
      }
      if (param_3 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      return uVar1;
    }
  }
  return param_1;
}



undefined4 * fn_0045a21c(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &DAT_00852a64;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0xc);
  piVar1[2] = iVar2;
  *piVar1 = param_1[1];
  piVar1[1] = 1;
  param_1[1] = piVar1;
  iVar2 = piVar1[2];
  param_1[3] = iVar2;
  param_1[4] = iVar2 + 0xc;
  param_1[5] = iVar2;
  param_1[3] = iVar2 + 0xc;
  *(int *)iVar2 = iVar2;
  *(undefined4 *)(param_1[5] + 4) = param_1[5];
  return param_1;
}


