#include "003c1f64_003c3168bb.h"



void fn_003c3168(int param_1)

{
  fn_003979d0();
  fn_003e6b44(param_1);
  *(undefined4 *)(param_1 + 0x100) = 0;
  return;
}



void fn_003c310c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039f9e8();
  puVar1[0x56] = 0;
  *puVar1 = &DAT_0082ffe4;
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  puVar1[0x59] = 0;
  *(undefined1 *)(puVar1 + 0x5a) = 0;
  puVar1[0x5b] = 0;
  puVar1[0x5c] = 0;
  puVar1[0x5d] = 0;
  puVar1[0x5e] = 0;
  return;
}



void fn_003c2cb8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    fn_0068ab44(param_1,0x100094b);
    fn_0039e6a8(param_1,param_2);
    return;
  }
  iVar6 = 0;
  iVar1 = fn_006be118(param_1[0x59]);
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = fn_006c5268(param_1,iVar5);
      if (iVar2 != 0) {
        iVar6 = iVar6 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
    if (0 < iVar6) {
      iVar1 = fn_006b876c(*(undefined4 *)(DAT_00897804 + 0x38));
      if (0x1e < iVar1 + iVar6) {
        fn_0015b0f8(iVar1 + iVar6 + -0x1e);
        uVar3 = fn_0022f584((char *)&DAT_003c2e60,0);
        fn_0068974c(param_1,uVar3,1);
        param_1[0x5c] = 0xdb;
        param_1[0x5d] = (int)fn_003c2ad4;
        param_1[0x5e] = 0;
        *(undefined1 *)(param_1 + 0x5a) = 3;
        param_1[0x5b] = 0;
        return;
      }
      uVar3 = *(undefined4 *)(DAT_00897804 + 0x38);
      iVar1 = fn_006be118(param_1[0x59]);
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = fn_006c5268(param_1,iVar5);
          if (iVar2 != 0) {
            uVar4 = fn_006be0f4(param_1[0x59],iVar5);
            fn_0028b988(uVar3,uVar4);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      fn_0015b0f8(iVar6);
      uVar3 = fn_0022f584((char *)&DAT_003c2e88,0);
      fn_0068974c(param_1,uVar3,0,1);
      param_1[0x5c] = 0xd4;
      param_1[0x5d] = (int)fn_0030d5a0;
      param_1[0x5e] = 0;
      *(undefined1 *)(param_1 + 0x5a) = 2;
      param_1[0x5b] = 0;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x003c2e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x110))(param_1);
  return;
}


