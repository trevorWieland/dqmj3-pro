#include "002a1e8c_002a335cb.h"



void fn_002a335c(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0xa0;
  iVar2 = 0;
  do {
    if (*(int *)(iVar3 + iVar2 * 0x3c4) == param_2) {
      iVar3 = iVar3 + iVar2 * 0x3c4;
LAB_002a33c4:
      if (iVar3 != 0) {
        fn_0017821c(iVar3 + 4,param_3,0x3c0);
        return;
      }
      break;
    }
    if (*(int *)(iVar3 + iVar2 * 0x3c4 + 0x3c4) == param_2) {
      iVar3 = iVar3 + iVar2 * 0x3c4 + 0x3c4;
      goto LAB_002a33c4;
    }
    iVar2 = iVar2 + 2;
  } while (iVar2 < 10);
  *(int *)(param_1 + *(int *)(param_1 + 0x2648) * 0x3c4 + 0xa0) = param_2;
  fn_0017821c(param_1 + *(int *)(param_1 + 0x2648) * 0x3c4 + 0xa4,param_3,0x3c0);
  uVar1 = *(int *)(param_1 + 0x2648) + 1;
  *(uint *)(param_1 + 0x2648) = uVar1;
  if (9 < uVar1) {
    *(undefined4 *)(param_1 + 0x2648) = 0;
  }
  return;
}



undefined4 fn_002a3298(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  bVar5 = -1 < param_2;
  bVar6 = param_2 == 0;
  if (bVar5) {
    param_4 = *(int *)(param_1 + 4);
  }
  uVar1 = 2;
  if (bVar5) {
    bVar6 = param_4 == param_2;
  }
  if (!bVar6 && (bVar5 && param_2 <= param_4)) {
    param_4 = param_4 + -1;
    *(int *)(param_1 + 4) = param_4;
    if (0 < param_4 - param_2) {
      iVar3 = 0;
      if (param_2 < param_4) {
        uVar2 = param_4 - param_2 & 1;
        if (uVar2 == 1) {
          iVar3 = 1;
          *(undefined1 *)(param_2 + param_1 + 8) = *(undefined1 *)(param_2 + param_1 + 9);
        }
      }
      else {
        uVar2 = 0;
      }
      if ((int)uVar2 < *(int *)(param_1 + 4) - param_2) {
        do {
          iVar4 = param_2 + iVar3 + param_1;
          uVar2 = uVar2 + 2;
          *(undefined1 *)(iVar4 + 8) = *(undefined1 *)(iVar4 + 9);
          iVar4 = param_2 + iVar3 + 1 + param_1;
          iVar3 = iVar3 + 2;
          *(undefined1 *)(iVar4 + 8) = *(undefined1 *)(iVar4 + 9);
        } while ((int)uVar2 < *(int *)(param_1 + 4) - param_2);
      }
    }
    uVar1 = 0;
    *(undefined1 *)(*(int *)(param_1 + 4) + param_1 + 8) = 0;
  }
  return uVar1;
}



void fn_002a3268(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  param_1[1] = param_2;
  *param_1 = &DAT_0081e7bc;
  *(undefined1 *)(param_1 + 2) = param_4;
  *(undefined1 *)((int)param_1 + 9) = 1;
  param_1[3] = param_3;
  return;
}



void fn_002a31a0(undefined4 *param_1)

{
  *param_1 = &DAT_0081e7a4;
  if (param_1[1] != 0) {
    fn_002feef8(param_1[1]);
  }
  fn_002feef8(param_1);
  return;
}



void fn_002a316c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0026bb64();
  *puVar1 = &DAT_0081e7a4;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0xffffffff;
  puVar1[5] = 0;
  return;
}


