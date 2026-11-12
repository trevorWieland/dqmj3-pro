#include "0065a3bc_0065af70bb.h"



undefined4 fn_0065af70(int param_1,int param_2)

{
  char cVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  cVar1 = *(char *)(param_1 + 0x1a0);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)(param_2 + 0xdc);
  }
  if (bVar3 && cVar1 == '\0') {
    pfVar2 = *(float **)(param_2 + 0x100);
    fVar7 = (*(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x16c)) -
            (*(float *)(param_2 + 0x20) + *pfVar2);
    fVar6 = (*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x170)) -
            (*(float *)(param_2 + 0x24) + pfVar2[1]);
    fVar4 = (*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x174)) -
            (*(float *)(param_2 + 0x28) + pfVar2[2]);
    bVar3 = fVar7 == 0.0;
    fVar5 = pfVar2[1];
    if (bVar3) {
      fVar5 = fVar6;
    }
    if ((!bVar3 || (!bVar3 || fVar5 != 0.0)) || fVar4 != 0.0) {
      fVar4 = fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4;
      fVar5 = *(float *)(*(int *)(param_2 + 0x100) + 0xc) + *(float *)(param_1 + 0x168);
      fn_001a4a80();
      if (fVar5 <= fVar4) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}



void fn_0065aee8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  fn_001dbb48();
  if (*(char *)(param_1 + 0x1a0) == '\0') {
    if (param_2 != 0) {
      *(undefined1 *)(param_1 + 0x1a0) = 1;
      return;
    }
    if (*(int *)(param_1 + 0x1a4) == -1) {
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1a4) == -1) {
      return;
    }
    if (param_2 != 0) {
      return;
    }
  }
  uVar1 = fn_006f72b4(DAT_008977e0);
  fn_0021f144(uVar1,*(undefined4 *)(param_1 + 0x1a4));
  *(undefined4 *)(param_1 + 0x1a4) = 0xffffffff;
  return;
}


