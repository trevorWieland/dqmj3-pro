#include "0019b414_0019ba04a.h"



void fn_0019b4ec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int unaff_r8;
  
  iVar3 = *(int *)(param_1 + 0x24);
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar3 < 4) {
    iVar3 = 4;
  }
  iVar2 = (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2;
  if (*(int *)(param_1 + 0x28) < iVar3 - iVar2) {
    if ((iVar2 < *(int *)(param_1 + 0x28)) || (iVar3 < 5)) {
      if (param_2 == 0) {
        return;
      }
      fn_0019b390(param_1,iVar3);
    }
    else {
      fn_0019b390(param_1,iVar3 / 2);
    }
  }
  else {
    fn_0019b390(param_1,iVar3 << 1);
  }
  if (0 < iVar3) {
    unaff_r8 = 0x1000001;
  }
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < iVar3) {
    do {
      iVar1 = iVar4 + iVar2 * 0x14;
      if (*(int *)(iVar1 + 8) != unaff_r8) {
        fn_0019b728(param_1,iVar1 + 8);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      puVar5 = (uint *)(iVar4 + iVar2 * 0x14);
      if ((puVar5[2] & 0x8000000) != 0) {
        iVar1 = *(int *)(puVar5[3] + 4) + -1;
        *(int *)(puVar5[3] + 4) = iVar1;
        if (iVar1 == 0) {
          (**(code **)(*(int *)puVar5[3] + 8))();
        }
      }
      if (((*puVar5 & 0x8000000) != 0) &&
         (iVar1 = *(int *)(puVar5[1] + 4) + -1, *(int *)(puVar5[1] + 4) = iVar1, iVar1 == 0)) {
        (**(code **)(*(int *)puVar5[1] + 8))();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  fn_0019d680(iVar4,iVar3 * 0x14);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0019b648) */

void fn_0019b4c8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r4;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int unaff_r8;
  
  fn_00666384();
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar3 = *(int *)(param_1 + 0x24);
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar3 < 4) {
    iVar3 = 4;
  }
  iVar1 = iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e);
  iVar2 = iVar3 - (iVar1 >> 2);
  if (*(int *)(param_1 + 0x28) < iVar2) {
    if ((iVar1 >> 2 < *(int *)(param_1 + 0x28)) || (iVar3 < 5)) {
      fn_0019b390(param_1,iVar3,iVar1,iVar2,unaff_r4);
    }
    else {
      fn_0019b390(param_1,iVar3 / 2,iVar1,iVar2,unaff_r4);
    }
  }
  else {
    fn_0019b390(param_1,iVar3 << 1,iVar1,iVar2,unaff_r4);
  }
  if (0 < iVar3) {
    unaff_r8 = 0x1000001;
  }
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < iVar3) {
    do {
      iVar2 = iVar4 + iVar1 * 0x14;
      if (*(int *)(iVar2 + 8) != unaff_r8) {
        fn_0019b728(param_1,iVar2 + 8);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  iVar1 = 0;
  if (0 < iVar3) {
    do {
      puVar5 = (uint *)(iVar4 + iVar1 * 0x14);
      if (((puVar5[2] & 0x8000000) != 0) &&
         (iVar2 = *(int *)(puVar5[3] + 4) + -1, *(int *)(puVar5[3] + 4) = iVar2, iVar2 == 0)) {
        (**(code **)(*(int *)puVar5[3] + 8))();
      }
      if (((*puVar5 & 0x8000000) != 0) &&
         (iVar2 = *(int *)(puVar5[1] + 4) + -1, *(int *)(puVar5[1] + 4) = iVar2, iVar2 == 0)) {
        (**(code **)(*(int *)puVar5[1] + 8))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  fn_0019d680(iVar4,iVar3 * 0x14);
  return;
}



undefined4 fn_0019b414(int param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = *param_2;
  uVar2 = param_2[1];
  if ((uVar4 == 0x1000008) || (uVar4 == 0x5000002)) {
    uVar3 = uVar2;
  }
  else if (uVar4 == 0x5000004) {
    uVar3 = (int)(float)param_2[1];
  }
  else if (uVar4 == 0x8000010) {
    uVar3 = *(uint *)(uVar2 + 0x18);
  }
  else {
    uVar3 = (int)uVar2 >> 3;
  }
  iVar1 = *(int *)(param_1 + 0x20) + (uVar3 & *(int *)(param_1 + 0x24) - 1U) * 0x14;
  while( true ) {
    uVar3 = *(uint *)(iVar1 + 0xc);
    bVar5 = uVar3 == uVar2;
    if (bVar5) {
      uVar3 = *(uint *)(iVar1 + 8);
    }
    if (bVar5 && uVar3 == uVar4) break;
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (iVar1 == 0) {
    return 0;
  }
  fn_0019e864(iVar1,param_3);
  return 1;
}


