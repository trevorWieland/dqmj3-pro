#include "005a2d8c_005a3e68bab.h"



void fn_005a3044(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  puVar4 = (uint *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar1 == *(uint *)(param_1 + 0x20)) {
    uVar2 = (int)(uVar1 - *(int *)(param_1 + 0x18)) / 0xa88;
    if (uVar2 < (uint)((int)(*(uint *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) / 0xa88)) {
      *(uint *)(param_1 + 0x1c) = uVar1 + 0xa88;
      uVar2 = uVar1 - 0xa88;
      if (uVar1 != 0) {
        fn_0017821c(uVar1,uVar2,0xa88);
      }
      uVar7 = uVar1;
      if (uVar1 < uVar2) {
        if (0 < (int)(uVar2 - uVar1)) {
          uVar7 = (int)(uVar2 - uVar1) / 0xa88;
          uVar5 = uVar1;
          uVar3 = uVar2;
          if ((uVar7 & 1) != 0) {
            uVar3 = uVar1 - 0x1510;
            fn_0017821c(uVar2,uVar3,0xa88);
            uVar5 = uVar2;
          }
          for (iVar6 = (int)uVar7 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
            fn_0017821c(uVar5 - 0xa88,uVar3 - 0xa88,0xa88);
            uVar3 = uVar3 - 0x1510;
            uVar5 = uVar5 - 0x1510;
            fn_0017821c(uVar5,uVar3,0xa88);
          }
        }
      }
      else {
        while (uVar1 != uVar2) {
          uVar2 = uVar2 - 0xa88;
          fn_0017821c(uVar7 - 0xa88,uVar2,0xa88);
          uVar7 = uVar7 - 0xa88;
        }
      }
      fn_0017821c(uVar1,param_2,0xa88);
      return;
    }
    uVar7 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
    if (uVar7 < uVar2 + 0x20) {
      uVar7 = uVar2 + 0x20;
    }
    uVar3 = fn_00100fc6(uVar7 * 0xa88,0);
    uVar5 = uVar3;
    for (uVar2 = *puVar4; uVar2 != uVar1; uVar2 = uVar2 + 0xa88) {
      if (uVar5 != 0) {
        fn_0017821c(uVar5,uVar2,0xa88);
      }
      uVar5 = uVar5 + 0xa88;
    }
    iVar6 = uVar3 + ((int)(uVar1 - *puVar4) / 0xa88) * 0xa88;
    if (iVar6 != 0) {
      fn_0017821c(iVar6,param_2,0xa88);
    }
    uVar2 = *(uint *)(param_1 + 0x1c);
    iVar6 = uVar3 + ((int)(uVar1 - *puVar4) / 0xa88) * 0xa88;
    for (; uVar1 != uVar2; uVar1 = uVar1 + 0xa88) {
      iVar6 = iVar6 + 0xa88;
      if (iVar6 != 0) {
        fn_0017821c(iVar6,uVar1,0xa88);
      }
    }
    uVar2 = *puVar4;
    uVar5 = *(uint *)(param_1 + 0x1c);
    uVar1 = uVar2;
    if (uVar5 < uVar2) {
      do {
        uVar1 = uVar1 + 0xa88;
      } while (uVar1 != uVar5);
    }
    fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0x20) - uVar2) / 0xa88,0);
    *puVar4 = uVar3;
    *(uint *)(param_1 + 0x1c) = uVar3 + ((int)(uVar5 - uVar2) / 0xa88) * 0xa88 + 0xa88;
    *(uint *)(param_1 + 0x20) = uVar3 + uVar7 * 0xa88;
  }
  else {
    *(uint *)(param_1 + 0x1c) = uVar1 + 0xa88;
    if (uVar1 != 0) {
      fn_0017821c(uVar1,param_2,0xa88);
      return;
    }
  }
  return;
}



void fn_005a2ffc(undefined4 *param_1)

{
  *param_1 = &DAT_00846ac0;
  fn_002feef8(param_1[7]);
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  fn_003953e8(param_1);
  fn_002feef8();
  return;
}


