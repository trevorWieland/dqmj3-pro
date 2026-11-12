#include "0018d034_0018d4fc.h"



undefined4 fn_0018d4fc(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint local_20;
  int *local_1c;
  
  iVar2 = 0;
  local_20 = 0x1000001;
  local_1c = (int *)0x0;
  iVar1 = (**(code **)(*param_2 + 0x14))(param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = fn_0017ffac(param_1,&local_20,param_4,*(int *)(param_1 + 0x30) - param_4,param_5,0);
    if (iVar1 != 0) {
      if (0 < param_4) {
        do {
          iVar1 = *(int *)(param_1 + 0x30) + -1;
          *(int *)(param_1 + 0x30) = iVar1;
          fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,&DAT_008c06e8);
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_4);
      }
      if (((local_20 & 0x8000000) != 0) &&
         (iVar1 = local_1c[1], local_1c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*local_1c + 8))();
      }
      return 1;
    }
  }
  iVar1 = 0;
  if (0 < param_4) {
    do {
      iVar2 = *(int *)(param_1 + 0x30) + -1;
      *(int *)(param_1 + 0x30) = iVar2;
      fn_0019e864(*(int *)(param_1 + 0x18) + iVar2 * 8,&DAT_008c06e8);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_4);
  }
  if (((local_20 & 0x8000000) != 0) &&
     (iVar1 = local_1c[1], local_1c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_1c + 8))();
  }
  return 0;
}



void fn_0018d444(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_2;
  fVar3 = *param_3;
  fVar4 = param_3[4];
  fVar6 = param_2[1];
  fVar11 = param_3[5];
  fVar5 = param_2[2];
  fVar12 = param_3[1];
  fVar9 = param_3[6];
  fVar10 = param_3[2];
  fVar7 = param_3[7];
  fVar8 = param_3[3];
  fVar2 = param_3[0xc] * fVar1 + param_3[0xd] * fVar6 + param_3[0xe] * fVar5 + param_3[0xf] * 1.0;
  param_1[2] = fVar2;
  *param_1 = (1.0 - (fVar4 * fVar1 + fVar11 * fVar6 + fVar9 * fVar5 + fVar7 * 1.0) / fVar2) * 400.0
             * 0.5;
  param_1[1] = (1.0 - (fVar3 * fVar1 + fVar12 * fVar6 + fVar10 * fVar5 + fVar8 * 1.0) / fVar2) *
               240.0 * 0.5;
  return;
}



void fn_0018d060(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 uVar4;
  float fVar5;
  float local_20 [3];
  
  iVar1 = fn_00191284();
  if (iVar1 == 0) {
    iVar3 = **(int **)(param_1 + 8);
    iVar1 = fn_0018367c(param_1);
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined1 *)(iVar3 + 0x10) = *(undefined1 *)(iVar1 + 0x10);
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(iVar3 + 0x1c) = uVar4;
  }
  else {
    param_3 = 0;
    fn_001a0b78(**(undefined4 **)(param_1 + 8));
  }
  fn_0018d1c8(param_1,param_2);
  uVar4 = VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = uVar4;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x14) = 0;
  fVar5 = *(float *)(*(int *)(param_1 + 8) + 0x10);
  if (0.0 < fVar5) {
    *(float *)(*(int *)(param_1 + 8) + 0x14) = 1.0 / fVar5;
    local_20[0] = *(float *)(*(int *)(param_1 + 8) + 0x10) - 1.0;
    local_20[1] = 0.0;
    pfVar2 = local_20 + 1;
    if (0.0 <= local_20[0]) {
      pfVar2 = local_20;
    }
    *(float *)(*(int *)(param_1 + 8) + 0x10) = *pfVar2;
  }
  return;
}



void fn_0018d034(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;
  float fVar6;
  float afStack_20 [4];
  
  fn_0069f1d0();
  *(undefined4 *)(param_1 + 0x224) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x220) = 0;
  iVar1 = *(int *)(param_1 + 0x5c);
  iVar2 = fn_00191284();
  if (iVar2 == 0) {
    iVar4 = **(int **)(iVar1 + 8);
    iVar2 = fn_0018367c(iVar1);
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined1 *)(iVar4 + 0x10) = *(undefined1 *)(iVar2 + 0x10);
    *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
    uVar5 = *(undefined4 *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
    *(undefined4 *)(iVar4 + 0x1c) = uVar5;
  }
  else {
    fn_001a0b78(**(undefined4 **)(iVar1 + 8));
  }
  fn_0018d1c8(iVar1,0);
  uVar5 = VectorSignedToFloat(0,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0x10) = uVar5;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0x14) = 0;
  fVar6 = *(float *)(*(int *)(iVar1 + 8) + 0x10);
  if (0.0 < fVar6) {
    *(float *)(*(int *)(iVar1 + 8) + 0x14) = 1.0 / fVar6;
    afStack_20[0] = *(float *)(*(int *)(iVar1 + 8) + 0x10) - 1.0;
    afStack_20[1] = 0.0;
    pfVar3 = afStack_20 + 1;
    if (0.0 <= afStack_20[0]) {
      pfVar3 = afStack_20;
    }
    *(float *)(*(int *)(iVar1 + 8) + 0x10) = *pfVar3;
  }
  return;
}



void fn_0018d1c8(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (param_2 < (uint)((*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8)) / 0xc)) {
    fn_001a0b78(*(undefined4 *)(iVar2 + 0x2c));
    puVar1 = (undefined4 *)(*(int *)(iVar2 + 8) + param_2 * 0xc);
    fn_00196910(*(undefined4 *)(iVar2 + 0x2c),*puVar1,puVar1[1],0);
    *(undefined4 *)(*(int *)(iVar2 + 0x2c) + 4) = 0;
  }
  return;
}


