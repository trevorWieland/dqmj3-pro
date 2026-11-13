#include "00780fc0_007814a8.h"



void fn_007814a8(int param_1,uint *param_2)

{
  uint uVar1;
  uint in_s0;
  uint uVar2;
  
  if ((*(uint *)(param_1 + 8) & 0x70000) == 0) {
    uVar1 = in_s0;
    if ((*(uint *)(param_1 + 8) & 0x40) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0xc));
      uVar2 = in_s0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xc);
    }
    param_2[1] = uVar2;
    uVar2 = uVar1;
    if ((*(uint *)(param_1 + 8) & 0x80) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0x10));
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x10);
    }
    param_2[2] = uVar1;
    in_s0 = uVar2;
    if ((*(uint *)(param_1 + 8) & 0x100) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0x14));
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x14);
    }
    param_2[3] = uVar2;
    uVar1 = *param_2 & 0xfd7fffff;
    *param_2 = uVar1;
  }
  else {
    uVar1 = *param_2;
  }
  *param_2 = uVar1 & 0xf3ffffff;
  if ((*(uint *)(param_1 + 8) & 0x380000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x200) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0x18));
    }
    if ((*(uint *)(param_1 + 8) & 0x400) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0x1c));
    }
    if ((*(uint *)(param_1 + 8) & 0x800) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0x20));
    }
    fn_00525630(param_2 + 4,0);
  }
  if ((*(uint *)(param_1 + 8) & 0x1c00000) == 0) {
    uVar1 = in_s0;
    if ((*(uint *)(param_1 + 8) & 0x2000) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0x24));
      uVar2 = in_s0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x24);
    }
    param_2[7] = uVar2;
    uVar2 = uVar1;
    if ((*(uint *)(param_1 + 8) & 0x4000) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0x28));
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x28);
    }
    param_2[0xb] = uVar1;
    if ((*(uint *)(param_1 + 8) & 0x8000) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0x2c));
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x2c);
    }
    param_2[0xf] = uVar2;
  }
  return;
}



void fn_00781324(int param_1,undefined4 *param_2)

{
  undefined4 in_s0;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 8) & 0x10000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x40) == 0) {
      uVar2 = in_s0;
      fn_006df85c(*(undefined4 *)(param_1 + 0xc));
      uVar1 = in_s0;
      in_s0 = uVar2;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
    *param_2 = uVar1;
  }
  if ((*(uint *)(param_1 + 8) & 0x20000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x80) == 0) {
      uVar2 = in_s0;
      fn_006df85c(*(undefined4 *)(param_1 + 0x10));
      uVar1 = in_s0;
      in_s0 = uVar2;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
    }
    param_2[1] = uVar1;
  }
  if ((*(uint *)(param_1 + 8) & 0x40000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x100) == 0) {
      uVar2 = in_s0;
      fn_006df85c(*(undefined4 *)(param_1 + 0x14));
      uVar1 = in_s0;
      in_s0 = uVar2;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x14);
    }
    param_2[2] = uVar1;
  }
  if ((*(uint *)(param_1 + 8) & 0x80000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x200) == 0) {
      uVar2 = in_s0;
      fn_006df85c(*(undefined4 *)(param_1 + 0x18));
      uVar1 = in_s0;
      in_s0 = uVar2;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
    }
    param_2[3] = uVar1;
  }
  if ((*(uint *)(param_1 + 8) & 0x100000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x400) == 0) {
      uVar2 = in_s0;
      fn_006df85c(*(undefined4 *)(param_1 + 0x1c));
      uVar1 = in_s0;
      in_s0 = uVar2;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
    }
    param_2[4] = uVar1;
  }
  if ((*(uint *)(param_1 + 8) & 0x200000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x800) == 0) {
      uVar2 = in_s0;
      fn_006df85c(*(undefined4 *)(param_1 + 0x20));
      uVar1 = in_s0;
      in_s0 = uVar2;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x20);
    }
    param_2[5] = uVar1;
  }
  if ((*(uint *)(param_1 + 8) & 0x400000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x2000) == 0) {
      uVar2 = in_s0;
      fn_006df85c(*(undefined4 *)(param_1 + 0x24));
      uVar1 = in_s0;
      in_s0 = uVar2;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x24);
    }
    param_2[6] = uVar1;
  }
  if ((*(uint *)(param_1 + 8) & 0x800000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x4000) == 0) {
      uVar2 = in_s0;
      fn_006df85c(*(undefined4 *)(param_1 + 0x28));
      uVar1 = in_s0;
      in_s0 = uVar2;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x28);
    }
    param_2[7] = uVar1;
  }
  if ((*(uint *)(param_1 + 8) & 0x1000000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x8000) == 0) {
      fn_006df85c(*(undefined4 *)(param_1 + 0x2c));
    }
    else {
      in_s0 = *(undefined4 *)(param_1 + 0x2c);
    }
    param_2[8] = in_s0;
  }
  return;
}



void fn_00780fc0(int param_1,int param_2,int *param_3,int *param_4)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint in_s1;
  ulonglong uVar6;
  float fVar7;
  undefined8 uVar8;
  
  uVar6 = (ulonglong)in_s1;
  uVar8 = 0;
  if (*(short *)(**(int **)(param_1 + 0xc) + 6) == 4) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      do {
        uVar5 = (uint)*(ushort *)(*param_4 + uVar3 * 2);
        if (uVar5 != 0xffff) {
          iVar4 = *(int *)(*(int *)(param_1 + 0xc) + uVar3 * 4);
          iVar2 = *(int *)(param_2 + 0xc) + uVar5 * 0x40;
          fVar7 = (float)uVar8;
          if (((*(uint *)(iVar4 + 8) & 0x70000) == 0) &&
             (*(float *)(*param_3 + uVar5 * 0xc) == fVar7)) {
            *(float *)(iVar2 + 4) = fVar7;
            *(float *)(iVar2 + 8) = fVar7;
            *(float *)(iVar2 + 0xc) = fVar7;
          }
          if (((*(uint *)(iVar4 + 8) & 0x380000) == 0) &&
             (*(float *)(*param_3 + (uVar5 * 3 + 1) * 4) == fVar7)) {
            *(float *)(iVar2 + 0x10) = fVar7;
            *(float *)(iVar2 + 0x14) = fVar7;
            *(float *)(iVar2 + 0x18) = fVar7;
            *(float *)(iVar2 + 0x20) = fVar7;
            *(float *)(iVar2 + 0x24) = fVar7;
            *(float *)(iVar2 + 0x28) = fVar7;
            *(float *)(iVar2 + 0x30) = fVar7;
            *(float *)(iVar2 + 0x34) = fVar7;
            *(float *)(iVar2 + 0x38) = fVar7;
          }
          if (((*(uint *)(iVar4 + 8) & 0x1c00000) == 0) &&
             (*(float *)(*param_3 + (uVar5 * 3 + 2) * 4) == fVar7)) {
            *(float *)(iVar2 + 0x1c) = fVar7;
            *(float *)(iVar2 + 0x2c) = fVar7;
            *(float *)(iVar2 + 0x3c) = fVar7;
          }
          fn_00781630(iVar4);
          fVar7 = (float)uVar6;
          if ((*(uint *)(iVar4 + 8) & 0x70000) == 0) {
            pfVar1 = (float *)(*param_3 + uVar5 * 0xc);
            *pfVar1 = *pfVar1 + fVar7;
          }
          if ((*(uint *)(iVar4 + 8) & 0x380000) == 0) {
            pfVar1 = (float *)(*param_3 + (uVar5 * 3 + 1) * 4);
            *pfVar1 = *pfVar1 + fVar7;
          }
          if ((*(uint *)(iVar4 + 8) & 0x1c00000) == 0) {
            pfVar1 = (float *)(*param_3 + (uVar5 * 3 + 2) * 4);
            *pfVar1 = *pfVar1 + fVar7;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x10));
    }
  }
  else {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      do {
        uVar5 = (uint)*(ushort *)(*param_4 + uVar3 * 2);
        if (uVar5 != 0xffff) {
          iVar4 = *(int *)(*(int *)(param_1 + 0xc) + uVar3 * 4);
          iVar2 = *(int *)(param_2 + 0xc) + uVar5 * 0x40;
          fVar7 = (float)uVar8;
          if (((*(uint *)(iVar4 + 8) & 0x20) == 0) && (*(float *)(*param_3 + uVar5 * 0xc) == fVar7))
          {
            *(float *)(iVar2 + 4) = fVar7;
            *(float *)(iVar2 + 8) = fVar7;
            *(float *)(iVar2 + 0xc) = fVar7;
          }
          if (((*(uint *)(iVar4 + 8) & 0x10) == 0) &&
             (*(float *)(*param_3 + (uVar5 * 3 + 1) * 4) == fVar7)) {
            *(float *)(iVar2 + 0x10) = fVar7;
            *(float *)(iVar2 + 0x14) = fVar7;
            *(float *)(iVar2 + 0x18) = fVar7;
            *(float *)(iVar2 + 0x20) = fVar7;
            *(float *)(iVar2 + 0x24) = fVar7;
            *(float *)(iVar2 + 0x28) = fVar7;
            *(float *)(iVar2 + 0x30) = fVar7;
            *(float *)(iVar2 + 0x34) = fVar7;
            *(float *)(iVar2 + 0x38) = fVar7;
          }
          if (((*(uint *)(iVar4 + 8) & 8) == 0) &&
             (*(float *)(*param_3 + (uVar5 * 3 + 2) * 4) == fVar7)) {
            *(float *)(iVar2 + 0x1c) = fVar7;
            *(float *)(iVar2 + 0x2c) = fVar7;
            *(float *)(iVar2 + 0x3c) = fVar7;
          }
          fn_0078197c(iVar4);
          fVar7 = (float)uVar6;
          if ((*(uint *)(iVar4 + 8) & 0x20) == 0) {
            pfVar1 = (float *)(*param_3 + uVar5 * 0xc);
            *pfVar1 = *pfVar1 + fVar7;
          }
          if ((*(uint *)(iVar4 + 8) & 0x10) == 0) {
            pfVar1 = (float *)(*param_3 + (uVar5 * 3 + 1) * 4);
            *pfVar1 = *pfVar1 + fVar7;
          }
          if ((*(uint *)(iVar4 + 8) & 8) == 0) {
            pfVar1 = (float *)(*param_3 + (uVar5 * 3 + 2) * 4);
            *pfVar1 = *pfVar1 + fVar7;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x10));
      return;
    }
  }
  return;
}


