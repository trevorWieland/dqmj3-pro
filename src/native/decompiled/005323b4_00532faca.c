#include "005323b4_00532faca.h"



float * fn_00532ba4(undefined4 param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float in_s0;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (*(char *)(param_3 + 3) == '\0') {
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) + *param_3 * in_s0;
    *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) + fVar2 * in_s0;
    *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) + fVar3 * in_s0;
  }
  else {
    pfVar1 = *(float **)(param_2 + 0x13c);
    fVar3 = param_3[1] * in_s0;
    fVar4 = param_3[2] * in_s0;
    fVar2 = *param_3 * in_s0;
    fVar5 = pfVar1[5];
    fVar10 = pfVar1[6];
    fVar9 = pfVar1[1];
    fVar7 = pfVar1[9];
    fVar8 = pfVar1[2];
    fVar6 = pfVar1[10];
    *(float *)(param_2 + 0xc) =
         *(float *)(param_2 + 0xc) + fVar2 * *pfVar1 + pfVar1[4] * fVar3 + fVar4 * pfVar1[8];
    *(float *)(param_2 + 0x10) =
         *(float *)(param_2 + 0x10) + fVar2 * fVar9 + fVar5 * fVar3 + fVar4 * fVar7;
    *(float *)(param_2 + 0x14) =
         *(float *)(param_2 + 0x14) + fVar2 * fVar8 + fVar10 * fVar3 + fVar4 * fVar6;
  }
  return param_3 + 4;
}



float * fn_005329d4(int param_1,int param_2,float *param_3)

{
  float in_s0;
  undefined1 auStack_68 [52];
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(char *)(param_3 + 5) == '\0') {
    if (((uint)param_3[4] & 1) != 0) {
      *(float *)(param_2 + 0x24) =
           *(float *)(param_2 + 0x24) +
           *param_3 *
           ((param_3[1] - *(float *)(param_2 + 0xc)) - *(float *)(param_2 + 0x24)) * in_s0;
    }
    if (((uint)param_3[4] & 2) != 0) {
      *(float *)(param_2 + 0x28) =
           *(float *)(param_2 + 0x28) +
           *param_3 *
           ((param_3[2] - *(float *)(param_2 + 0x10)) - *(float *)(param_2 + 0x28)) * in_s0;
    }
    if (((uint)param_3[4] & 4) != 0) {
      *(float *)(param_2 + 0x2c) =
           *(float *)(param_2 + 0x2c) +
           *param_3 *
           ((param_3[3] - *(float *)(param_2 + 0x14)) - *(float *)(param_2 + 0x2c)) * in_s0;
    }
  }
  else {
    local_28 = *(undefined4 *)(param_1 + 0x34);
    local_24 = *(undefined4 *)(param_1 + 0x44);
    local_20 = *(undefined4 *)(param_1 + 0x54);
    if (*(int *)(param_1 + 0xcc) == 0) {
      fn_001ad184(auStack_68,param_1 + 0x58);
    }
    else {
      fn_001ad184(auStack_68,param_2 + 0x10c);
    }
    fn_0016947c(&local_34,auStack_68,&local_28);
    if (((uint)param_3[4] & 1) != 0) {
      *(float *)(param_2 + 0x24) =
           *(float *)(param_2 + 0x24) +
           *param_3 *
           (((local_34 + param_3[1]) - *(float *)(param_2 + 0xc)) - *(float *)(param_2 + 0x24)) *
           in_s0;
    }
    if (((uint)param_3[4] & 2) != 0) {
      *(float *)(param_2 + 0x28) =
           *(float *)(param_2 + 0x28) +
           *param_3 *
           (((local_30 + param_3[2]) - *(float *)(param_2 + 0x10)) - *(float *)(param_2 + 0x28)) *
           in_s0;
    }
    if (((uint)param_3[4] & 4) != 0) {
      *(float *)(param_2 + 0x2c) =
           *(float *)(param_2 + 0x2c) +
           *param_3 *
           (((local_2c + param_3[3]) - *(float *)(param_2 + 0x14)) - *(float *)(param_2 + 0x2c)) *
           in_s0;
    }
  }
  return param_3 + 6;
}



undefined4 * fn_005323b4(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float in_s0;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = (float)VectorSignedToFloat(*param_3,(byte)(in_fpscr >> 0x16) & 3);
  iVar1 = ((uint)(int)(fVar3 * in_s0) >> 0x18) * 0x10;
  fVar3 = (float)VectorUnsignedToFloat((int)(fVar3 * in_s0) & 0xffffff,(byte)(in_fpscr >> 0x16) & 3)
  ;
  iVar2 = param_3[1];
  fVar4 = *(float *)(&DAT_007f36ec + iVar1) +
          *(float *)(&DAT_007f36f0 + iVar1) * fVar3 * 5.9604645e-08;
  fVar3 = *(float *)(&DAT_007f36f4 + iVar1) +
          *(float *)(&DAT_007f36f8 + iVar1) * fVar3 * 5.9604645e-08;
  if (iVar2 == 0) {
    fVar6 = (float)param_3[2];
    fVar5 = *(float *)(param_2 + 0x10) * fVar3 + *(float *)(param_2 + 0x14) * fVar4;
    fVar3 = *(float *)(param_2 + 0x14) * fVar3 - *(float *)(param_2 + 0x10) * fVar4;
    *(float *)(param_2 + 0x10) = fVar5;
    *(float *)(param_2 + 0x14) = fVar3;
    if ((fVar6 != 0.0) && (fVar4 = fVar5 * fVar5 + fVar3 * fVar3, 0.0 < fVar4)) {
      fVar6 = (1.0 / SQRT(fVar4)) * in_s0 * fVar6;
      *(float *)(param_2 + 0x10) = fVar5 + fVar5 * fVar6;
      *(float *)(param_2 + 0x14) = fVar3 + fVar3 * fVar6;
      return param_3 + 3;
    }
  }
  else if (iVar2 == 1) {
    fVar6 = (float)param_3[2];
    fVar5 = *(float *)(param_2 + 0x14) * fVar3 + *(float *)(param_2 + 0xc) * fVar4;
    fVar3 = *(float *)(param_2 + 0xc) * fVar3 - *(float *)(param_2 + 0x14) * fVar4;
    *(float *)(param_2 + 0x14) = fVar5;
    *(float *)(param_2 + 0xc) = fVar3;
    if ((fVar6 != 0.0) && (fVar4 = fVar5 * fVar5 + fVar3 * fVar3, 0.0 < fVar4)) {
      fVar6 = (1.0 / SQRT(fVar4)) * in_s0 * fVar6;
      *(float *)(param_2 + 0x14) = fVar5 + fVar5 * fVar6;
      *(float *)(param_2 + 0xc) = fVar3 + fVar3 * fVar6;
    }
  }
  else if (iVar2 == 2) {
    fVar6 = (float)param_3[2];
    fVar5 = *(float *)(param_2 + 0xc) * fVar3 + *(float *)(param_2 + 0x10) * fVar4;
    fVar3 = *(float *)(param_2 + 0x10) * fVar3 - *(float *)(param_2 + 0xc) * fVar4;
    *(float *)(param_2 + 0xc) = fVar5;
    *(float *)(param_2 + 0x10) = fVar3;
    if ((fVar6 != 0.0) && (fVar4 = fVar5 * fVar5 + fVar3 * fVar3, 0.0 < fVar4)) {
      fVar6 = (1.0 / SQRT(fVar4)) * in_s0 * fVar6;
      *(float *)(param_2 + 0xc) = fVar5 + fVar5 * fVar6;
      *(float *)(param_2 + 0x10) = fVar3 + fVar3 * fVar6;
    }
  }
  return param_3 + 3;
}


