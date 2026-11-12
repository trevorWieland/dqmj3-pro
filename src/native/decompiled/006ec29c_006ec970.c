#include "006ec29c_006ec970.h"



void fn_006ec970(int param_1,int param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  iVar2 = *piVar3;
  pfVar1 = (float *)(*(int *)(iVar2 + 0x20) + iVar2 + param_2 * 0x34);
  *param_3 = pfVar1[1] - *(float *)(iVar2 + 0xc);
  param_3[1] = pfVar1[2];
  param_3[2] = pfVar1[3] - *(float *)(iVar2 + 0xc);
  param_3[3] = pfVar1[4];
  param_3[4] = pfVar1[5];
  param_3[5] = *pfVar1;
  iVar2 = *piVar3;
  iVar2 = iVar2 + *(int *)(iVar2 + 0x24);
  param_3[6] = (float)(iVar2 + (uint)*(ushort *)(iVar2 + (int)*pfVar1 * 2));
  return;
}



undefined4 fn_006ec918(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((**(int **)(*(int *)(*(int *)(param_1 + 4) + 0x360) + param_2 * 4) == 0) ||
     (iVar1 = fn_006e2d28(), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_006ec8f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = **(int **)(*(int *)(*(int *)(param_1 + 4) + 0x360) + param_2 * 4);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0xb0);
  }
  return uVar2;
}



int fn_006ec714(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x1c) + param_2 * 0x54;
}



int fn_006ec6f4(int param_1)

{
  return (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) / 0x54;
}



int fn_006ec6e8(int param_1)

{
  return *(int *)(param_1 + 4) + 0x44;
}



/* WARNING: Removing unreachable block (ram,0x006ec5c4) */

void fn_006ec3f8(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  uint local_a0 [2];
  int local_98;
  uint local_94;
  int local_90;
  uint local_74;
  undefined4 local_68;
  uint local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  int local_24;
  int local_20;
  undefined4 uStack_1c;
  
  param_3 = param_3 & 0xffff;
  fn_0017821c(local_a0,&DAT_007d6188,0x48);
  fVar3 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = fVar3 * 0.5;
  local_a0[0] = 0;
  if (((uint)fVar3 & 0x80000000) != 0) {
    local_a0[0] = 0x800000;
  }
  if (ABS(fVar3) == 0.0) {
    uVar1 = 0;
LAB_006ec480:
    local_a0[0] = ((uint)fVar3 & 0x7fffff) >> 7 | local_a0[0] | (uVar1 & 0x7f) << 0x10;
  }
  else {
    uVar1 = ((uint)ABS(fVar3) >> 0x17) - 0x40;
    if (-1 < (int)uVar1) {
      if ((int)uVar1 < 0x80) goto LAB_006ec480;
      local_a0[0] = 0x7f0000;
    }
  }
  fVar3 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = 2.0 / fVar3;
  uVar1 = 0;
  if (((uint)fVar3 & 0x80000000) != 0) {
    uVar1 = 0x40000000;
  }
  uVar2 = 0;
  if (ABS(fVar3) == 0.0) {
LAB_006ec4d8:
    uVar1 = (uint)fVar3 & 0x7fffff | uVar1 | (uVar2 & 0x7f) << 0x17;
  }
  else {
    uVar2 = ((uint)ABS(fVar3) >> 0x17) - 0x40;
    if (-1 < (int)uVar2) {
      if ((int)uVar2 < 0x80) goto LAB_006ec4d8;
      uVar1 = 0x3f800000;
    }
  }
  local_98 = uVar1 << 1;
  fVar3 = (float)VectorUnsignedToFloat(param_2 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = fVar3 * 0.5;
  if (((uint)fVar3 & 0x80000000) == 0) {
    local_94 = 0;
  }
  else {
    local_94 = 0x800000;
  }
  if (ABS(fVar3) == 0.0) {
    uVar1 = 0;
LAB_006ec540:
    local_94 = ((uint)fVar3 & 0x7fffff) >> 7 | local_94 | (uVar1 & 0x7f) << 0x10;
  }
  else {
    uVar1 = ((uint)ABS(fVar3) >> 0x17) - 0x40;
    if (-1 < (int)uVar1) {
      if ((int)uVar1 < 0x80) goto LAB_006ec540;
      local_94 = 0x7f0000;
    }
  }
  fVar3 = (float)VectorUnsignedToFloat(param_2 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = 2.0 / fVar3;
  uVar1 = 0;
  if (((uint)fVar3 & 0x80000000) != 0) {
    uVar1 = 0x40000000;
  }
  uVar2 = 0;
  if (ABS(fVar3) == 0.0) {
LAB_006ec594:
    uVar1 = (uint)fVar3 & 0x7fffff | uVar1 | (uVar2 & 0x7f) << 0x17;
  }
  else {
    uVar2 = ((uint)ABS(fVar3) >> 0x17) - 0x40;
    if (-1 < (int)uVar2) {
      if ((int)uVar2 < 0x80) goto LAB_006ec594;
      uVar1 = 0x3f800000;
    }
  }
  local_74 = param_2 * 0x10000 - 0x10000 | param_3 - 1;
  local_68 = 0xbf0000;
  local_90 = uVar1 << 1;
  fVar3 = (float)VectorSignedToFloat(0xffffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = 0.0 / fVar3;
  local_60 = 0;
  if (((uint)fVar3 & 0x80000000) != 0) {
    local_60 = 0x800000;
  }
  if (ABS(fVar3) == 0.0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ((uint)ABS(fVar3) >> 0x17) - 0x40;
    if ((int)uVar1 < 0) goto LAB_006ec63c;
    if (0x7f < (int)uVar1) {
      local_60 = 0x7f0000;
      goto LAB_006ec63c;
    }
  }
  local_60 = ((uint)fVar3 & 0x7fffff) >> 7 | local_60 | (uVar1 & 0x7f) << 0x10;
LAB_006ec63c:
  fn_00734b4c(local_a0,0x48,1);
  local_24 = param_4 << 1;
  local_44 = 0xf0107;
  uStack_40 = 0;
  uStack_3c = 0x10062;
  local_48 = param_4 | 0x1f50;
  local_58 = 0;
  local_54 = 0xf0040;
  local_50 = 0;
  local_4c = 0xf0105;
  local_38 = 0;
  uStack_34 = 0xf0118;
  uStack_30 = 0xf;
  uStack_1c = 0;
  local_2c = 0x803f0112;
  uStack_28 = 0xf;
  local_20 = local_24;
  fn_00734b4c(&local_58,0x40,1);
  return;
}



int fn_006ec320(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < (int)param_2) &&
     (param_2 < (uint)((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0xc))) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    while (iVar3 != *(int *)(param_1 + 0x40)) {
      if (*(int *)(*(int *)(param_1 + 0x14) + param_2 * 0xc + 4) ==
          *(int *)(*(int *)(iVar3 + 0x14) + 0x18)) {
        return *(int *)(iVar3 + 0x14);
      }
      iVar1 = *(int *)(iVar3 + 0xc);
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar1 = *(int *)(iVar3 + 4);
        while (iVar2 = iVar1, iVar3 == *(int *)(iVar2 + 0xc)) {
          iVar3 = iVar2;
          iVar1 = *(int *)(iVar2 + 4);
        }
        if (*(int *)(iVar3 + 0xc) != iVar2) {
          iVar3 = iVar2;
        }
      }
      else {
        do {
          iVar3 = iVar1;
          iVar1 = *(int *)(iVar3 + 8);
        } while (*(int *)(iVar3 + 8) != 0);
      }
    }
  }
  return 0;
}



undefined4 fn_006ec29c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < *(int *)(*(int *)(param_1 + 4) + 0x44)) {
    iVar4 = 0;
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x40) + 8);
    if (0 < param_2) {
      do {
        iVar3 = *(int *)(iVar2 + 0xc);
        if (*(int *)(iVar2 + 0xc) == 0) {
          for (iVar3 = *(int *)(iVar2 + 4); iVar2 == *(int *)(iVar3 + 0xc);
              iVar3 = *(int *)(iVar3 + 4)) {
            iVar2 = iVar3;
          }
          if (*(int *)(iVar2 + 0xc) != iVar3) {
            iVar2 = iVar3;
          }
        }
        else {
          do {
            iVar2 = iVar3;
            iVar3 = *(int *)(iVar2 + 8);
          } while (*(int *)(iVar2 + 8) != 0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_2);
    }
    uVar1 = *(undefined4 *)(iVar2 + 0x10);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


