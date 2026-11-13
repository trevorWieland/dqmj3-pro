#include "004b569c_004b5ebca.h"



void fn_004b5890(undefined4 *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  
  piVar1 = (int *)param_1[0x36];
  if (piVar1 != (int *)0x0) {
    param_3 = -1;
    param_4 = (uint *)(piVar1 + 1);
  }
  *param_1 = &DAT_00855a38;
  if (piVar1 != (int *)0x0) {
    do {
      uVar2 = *param_4 + param_3;
      bVar3 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar3);
    *param_4 = uVar2;
    bVar3 = uVar2 == 0;
    if (bVar3) {
      uVar2 = (uint)*(byte *)(piVar1 + 2);
    }
    if (bVar3 && uVar2 == 0) {
      *(undefined1 *)(piVar1 + 2) = 1;
      (**(code **)(*piVar1 + 4))();
    }
  }
  *param_1 = &DAT_00853740;
  param_1[1] = 0;
  param_1[0x24] = &DAT_0085316c;
  if ((code *)param_1[-2] == (code *)0x0) {
    fn_0030233c(param_1 + -2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004b5918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[-2])();
  return;
}



void fn_004b579c(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *param_1 = &DAT_00855a38;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[0x10] = &DAT_00853688;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0x12] = &DAT_00853688;
  *(undefined2 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x65) = 0;
  *(undefined1 *)((int)param_1 + 0x66) = 0;
  *(undefined1 *)((int)param_1 + 0x67) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined2 *)((int)param_1 + 0x86) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = &DAT_0085316c;
  param_1[0x27] = 0;
  param_1[0x26] = &DAT_00852790;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = &DAT_008528bc;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined1 *)((int)param_1 + 0xe1) = 2;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  return;
}



undefined4 * fn_004b5710(undefined4 *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  *param_1 = &DAT_00855a28;
  param_1[2] = &DAT_008527c0;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_0013d0fc(&local_18);
  param_1[4] = local_18;
  param_1[5] = uStack_14;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  return param_1;
}



undefined4 fn_004b569c(int param_1)

{
  uint local_18;
  int iStack_14;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    fn_0013d0fc(&local_18);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(uint *)(param_1 + 0x18) = local_18 - *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x1c) =
         iStack_14 - (*(int *)(param_1 + 0x14) + (uint)(local_18 < *(uint *)(param_1 + 0x10)));
    return 1;
  }
  fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Chrono.cpp",0x2f
               ,0xe000000e,0);
  return 0;
}


