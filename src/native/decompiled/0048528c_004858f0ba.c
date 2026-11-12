#include "0048528c_004858f0ba.h"



undefined4 fn_00485740(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_18 [12];
  
  iVar2 = fn_004b7748();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x90);
  }
  if (iVar2 != 0 && iVar3 != 0) {
    bVar7 = *(int *)(param_1 + 0x364) != 0;
    iVar3 = 0;
    if (bVar7) {
      iVar3 = *(int *)(param_1 + 0x38c);
    }
    if (bVar7 && iVar3 != 0) {
      fn_006d0c88(auStack_18,param_1 + 0x128);
      fn_0045fb80(param_1 + 0x33c,auStack_18);
      fn_00170f54(auStack_18);
      uVar1 = fn_006d0ce0(param_1 + 0x128);
      *(undefined2 *)(param_1 + 0x348) = uVar1;
      fn_004569e8(param_1 + 0x148,*(undefined4 *)(param_1 + 0x390));
      fn_00456a1c(param_1 + 0x148,*(uint *)(param_1 + 0x38c) & 0xffff);
      fn_006d0c88(auStack_18,param_1 + 0x148);
      fn_00170f9c(param_1 + 0x33c,auStack_18);
      fn_00170f54(auStack_18);
      uVar1 = fn_006d0ce0(param_1 + 0x148);
      *(undefined2 *)(param_1 + 0x354) = uVar1;
      if (*(int *)(param_1 + 0x378) == 0) {
        *(undefined1 *)(param_1 + 0x357) = 2;
      }
      else {
        *(undefined1 *)(param_1 + 0x357) = 1;
      }
      if (*(int *)(param_1 + 0x364) == *(int *)(param_1 + 0x38c)) {
        *(undefined1 *)(param_1 + 0x356) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x356) = 2;
        uVar4 = *(uint *)(param_1 + 0x38c);
        uVar6 = *(uint *)(param_1 + 0x364);
        if (uVar4 < uVar6) {
          *(uint *)(param_1 + 0x358) = uVar6 - uVar4;
        }
        else {
          *(uint *)(param_1 + 0x358) = uVar4 - uVar6;
        }
        iVar3 = fn_006d0ce0(param_1 + 0x128);
        if (iVar3 == *(int *)(param_1 + 0x38c)) {
          *(undefined1 *)(param_1 + 0x35c) = 1;
          *(undefined4 *)(param_1 + 0x358) = 1;
        }
      }
      iVar3 = fn_004b7748();
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar3 + 0x90);
      }
      fn_00468e80(uVar5,param_1 + 0x33c);
      return 1;
    }
  }
  return 0;
}


