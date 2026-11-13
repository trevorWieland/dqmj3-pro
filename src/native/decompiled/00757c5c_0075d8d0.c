#include "00757c5c_0075d8d0.h"



void fn_0075aef0(int param_1)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint in_fpscr;
  float in_s0;
  int iVar6;
  float fVar7;
  
  pfVar3 = *(float **)(param_1 + 0x20);
  pfVar5 = pfVar3 + (uint)*(ushort *)(param_1 + 0xe) * 4 + -4;
  pfVar4 = pfVar3;
  if (*pfVar3 <= in_s0) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(*pfVar5 == in_s0) << 0x1e;
    uVar2 = uVar1 | (uint)(in_s0 <= *pfVar5) << 0x1d;
    pfVar4 = pfVar5;
    if ((bool)((byte)(uVar2 >> 0x1d) & 1) && !SUB41(uVar1 >> 0x1e,0)) {
      fVar7 = (float)VectorSignedToFloat(*(ushort *)(param_1 + 0xe) - 1,(byte)(uVar2 >> 0x16) & 3);
      iVar6 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1c) * fVar7 * in_s0,3);
      pfVar4 = pfVar3 + iVar6 * 4;
      pfVar3 = pfVar4;
      if (*pfVar4 <= in_s0) {
        do {
          pfVar4 = pfVar3;
          pfVar3 = pfVar4 + 4;
        } while (pfVar4[4] <= in_s0);
      }
      else {
        do {
          pfVar4 = pfVar4 + -4;
        } while (in_s0 < *pfVar4);
      }
    }
  }
  if (*pfVar4 != in_s0 && pfVar4 != pfVar5) {
    fn_00525480();
  }
  return;
}



void fn_0075abd8(int param_1)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint in_fpscr;
  float in_s0;
  int iVar6;
  float fVar7;
  
  pfVar4 = *(float **)(param_1 + 0x20);
  pfVar5 = pfVar4 + (uint)*(ushort *)(param_1 + 0xe) * 3 + -3;
  if (in_s0 < *pfVar4) {
    pfVar3 = pfVar4;
  }
  else {
    uVar1 = in_fpscr & 0xfffffff | (uint)(*pfVar5 == in_s0) << 0x1e;
    uVar2 = uVar1 | (uint)(in_s0 <= *pfVar5) << 0x1d;
    pfVar3 = pfVar5;
    if ((bool)((byte)(uVar2 >> 0x1d) & 1) && !SUB41(uVar1 >> 0x1e,0)) {
      fVar7 = (float)VectorSignedToFloat(*(ushort *)(param_1 + 0xe) - 1,(byte)(uVar2 >> 0x16) & 3);
      iVar6 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1c) * fVar7 * in_s0,3);
      pfVar3 = pfVar4 + iVar6 * 3;
      pfVar4 = pfVar3;
      if (*pfVar3 <= in_s0) {
        do {
          pfVar3 = pfVar4;
          pfVar4 = pfVar3 + 3;
        } while (pfVar3[3] <= in_s0);
      }
      else {
        do {
          pfVar3 = pfVar3 + -3;
        } while (in_s0 < *pfVar3);
      }
    }
  }
  if (*pfVar3 != in_s0 && pfVar3 != pfVar5) {
    fn_00525480();
  }
  return;
}



undefined8 fn_0075a780(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint in_fpscr;
  float in_s0;
  float fVar4;
  
  puVar2 = (uint *)fn_0075dfc8();
  uVar3 = *puVar2;
  fVar4 = (float)VectorUnsignedToFloat(uVar3 & 0xfff,(byte)(in_fpscr >> 0x16) & 3);
  in_fpscr = in_fpscr & 0xfffffff;
  if (fVar4 * *(float *)(param_1 + 0x18) == in_s0 ||
      puVar2 == (uint *)(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 0xe) * 8 + -8)) {
    VectorUnsignedToFloat(uVar3 >> 0xc,(byte)(in_fpscr >> 0x16) & 3);
    return CONCAT44(uVar3,uVar3 >> 0xc);
  }
  uVar1 = puVar2[2] >> 0xc;
  VectorUnsignedToFloat(puVar2[2] & 0xfff,(byte)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat(uVar3 >> 0xc,(byte)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  return CONCAT44(uVar3 >> 0xc,uVar1);
}



uint fn_0075a690(int param_1)

{
  byte *pbVar1;
  uint in_fpscr;
  float in_s0;
  float fVar2;
  
  pbVar1 = (byte *)fn_0075d8d0();
  fVar2 = (float)VectorUnsignedToFloat((uint)*pbVar1,(byte)(in_fpscr >> 0x16) & 3);
  in_fpscr = in_fpscr & 0xfffffff;
  if (fVar2 * *(float *)(param_1 + 0x18) == in_s0 ||
      pbVar1 == (byte *)((uint)*(ushort *)(param_1 + 0xe) * 6 + -6 + *(int *)(param_1 + 0x20))) {
    VectorUnsignedToFloat((uint)*(ushort *)(pbVar1 + 1),(byte)(in_fpscr >> 0x16) & 3);
    return (uint)*(ushort *)(pbVar1 + 1);
  }
  VectorUnsignedToFloat((uint)pbVar1[6],(byte)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((uint)*(ushort *)(pbVar1 + 1),(byte)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((uint)*(ushort *)(pbVar1 + 7),(byte)(in_fpscr >> 0x16) & 3);
  return (uint)*(ushort *)(pbVar1 + 7);
}



uint fn_0075a49c(int param_1)

{
  ushort *puVar1;
  uint in_fpscr;
  float in_s0;
  float fVar2;
  
  puVar1 = (ushort *)fn_0075cdc8();
  fVar2 = (float)VectorUnsignedToFloat((uint)*puVar1,(byte)(in_fpscr >> 0x16) & 3);
  in_fpscr = in_fpscr & 0xfffffff;
  if (fVar2 * 0.03125 * *(float *)(param_1 + 0x18) == in_s0 ||
      puVar1 == (ushort *)((uint)*(ushort *)(param_1 + 0xe) * 6 + -6 + *(int *)(param_1 + 0x20))) {
    VectorUnsignedToFloat((uint)puVar1[1],(byte)(in_fpscr >> 0x16) & 3);
    return (uint)puVar1[1];
  }
  VectorUnsignedToFloat((uint)puVar1[3],(byte)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((uint)puVar1[1],(byte)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((uint)puVar1[4],(byte)(in_fpscr >> 0x16) & 3);
  return (uint)puVar1[4];
}



uint fn_00759fe8(void)

{
  uint *puVar1;
  uint in_fpscr;
  
  puVar1 = (uint *)fn_0075dfc8();
  VectorUnsignedToFloat(*puVar1 >> 0xc,(byte)(in_fpscr >> 0x16) & 3);
  return *puVar1 >> 0xc;
}



uint fn_00759fb8(void)

{
  int iVar1;
  uint in_fpscr;
  
  iVar1 = fn_0075d8d0();
  VectorUnsignedToFloat((uint)*(ushort *)(iVar1 + 1),(byte)(in_fpscr >> 0x16) & 3);
  return (uint)*(ushort *)(iVar1 + 1);
}



byte * fn_0075d8d0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint in_fpscr;
  float in_s0;
  int iVar3;
  uint uVar4;
  float fVar5;
  
  pbVar1 = *(byte **)(param_1 + 0x20);
  uVar4 = VectorFloatToUnsigned(in_s0 / *(float *)(param_1 + 0x18),3);
  if (uVar4 < *pbVar1) {
    return pbVar1;
  }
  pbVar2 = pbVar1 + (uint)*(ushort *)(param_1 + 0xe) * 6 + -6;
  if (uVar4 < *pbVar2) {
    fVar5 = (float)VectorSignedToFloat(*(ushort *)(param_1 + 0xe) - 1,(byte)(in_fpscr >> 0x16) & 3);
    iVar3 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1c) * fVar5 * in_s0,3);
    pbVar2 = pbVar1 + iVar3 * 6;
    if (*pbVar2 <= uVar4) {
      do {
        pbVar1 = pbVar2;
        pbVar2 = pbVar1 + 6;
      } while (*pbVar2 <= uVar4);
      return pbVar1;
    }
    do {
      pbVar2 = pbVar2 + -6;
    } while (uVar4 < *pbVar2);
  }
  return pbVar2;
}



uint fn_00759edc(void)

{
  int iVar1;
  uint in_fpscr;
  
  iVar1 = fn_0075cdc8();
  VectorUnsignedToFloat((uint)*(ushort *)(iVar1 + 2),(byte)(in_fpscr >> 0x16) & 3);
  return (uint)*(ushort *)(iVar1 + 2);
}



ushort * fn_0075cdc8(int param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  uint in_fpscr;
  float in_s0;
  int iVar3;
  uint uVar4;
  float fVar5;
  
  puVar2 = *(ushort **)(param_1 + 0x20);
  uVar4 = (uint)((in_s0 / *(float *)(param_1 + 0x18)) * 32.0);
  if (uVar4 < *puVar2) {
    return puVar2;
  }
  puVar1 = puVar2 + (uint)*(ushort *)(param_1 + 0xe) * 3 + -3;
  if (uVar4 < *puVar1) {
    fVar5 = (float)VectorSignedToFloat(*(ushort *)(param_1 + 0xe) - 1,(byte)(in_fpscr >> 0x16) & 3);
    iVar3 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1c) * fVar5 * in_s0,3);
    puVar1 = puVar2 + iVar3 * 3;
    if (*puVar1 <= uVar4) {
      do {
        puVar2 = puVar1;
        puVar1 = puVar2 + 3;
      } while (*puVar1 <= uVar4);
      return puVar2;
    }
    do {
      puVar1 = puVar1 + -3;
    } while (uVar4 < *puVar1);
  }
  return puVar1;
}



int fn_00757e04(undefined4 param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_2 + 0x10) == 0) {
    return 1;
  }
  do {
    iVar1 = fn_00757c5c(*(int *)(param_2 + 0xc) + uVar3 * 0x40);
    if (iVar1 != 0) {
      iVar1 = 1;
      goto LAB_00757e74;
    }
    do {
      iVar1 = 0;
LAB_00757e74:
      puVar2 = (uint *)(*(int *)(param_2 + 0xc) + uVar3 * 0x40);
      uVar3 = uVar3 + 1;
      *puVar2 = *puVar2 | 2;
      if (*(uint *)(param_2 + 0x10) <= uVar3) {
        return iVar1;
      }
    } while (iVar1 == 0);
  } while( true );
}



undefined4 fn_00757c5c(uint *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float in_s0;
  float in_s1;
  float fVar4;
  float in_s2;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = 0.0;
  if (in_s0 != 0.0) {
    *param_1 = *param_1 & 0xfd7fffff;
    param_1[1] = (uint)((float)param_1[1] / in_s0);
    param_1[2] = (uint)((float)param_1[2] / in_s0);
    param_1[3] = (uint)((float)param_1[3] / in_s0);
  }
  if (in_s2 != 0.0) {
    *param_1 = *param_1 & 0xf3ffffff;
    param_1[7] = (uint)((float)param_1[7] / in_s2);
    param_1[0xb] = (uint)((float)param_1[0xb] / in_s2);
    param_1[0xf] = (uint)((float)param_1[0xf] / in_s2);
  }
  if (in_s1 != 0.0) {
    pfVar1 = (float *)(param_1 + 4);
    pfVar3 = (float *)(param_1 + 8);
    *param_1 = *param_1 & 0xf3ffffff;
    pfVar2 = (float *)(param_1 + 0xc);
    fn_00525ce4(pfVar2,pfVar1,pfVar3);
    fVar6 = *pfVar1;
    fVar4 = fVar6 * fVar6 + (float)param_1[5] * (float)param_1[5] +
            (float)param_1[6] * (float)param_1[6];
    fVar5 = *pfVar2 * *pfVar2 + (float)param_1[0xd] * (float)param_1[0xd] +
            (float)param_1[0xe] * (float)param_1[0xe];
    if (fVar4 == fVar7 || (fVar4 == fVar7 || fVar5 == fVar7)) {
      *pfVar1 = 1.0;
      param_1[5] = (uint)fVar7;
      param_1[6] = (uint)fVar7;
      *pfVar3 = fVar7;
      param_1[9] = 0x3f800000;
      param_1[10] = (uint)fVar7;
      *pfVar2 = fVar7;
      param_1[0xd] = (uint)fVar7;
      param_1[0xe] = 0x3f800000;
      return 0;
    }
    fVar7 = 1.0 / SQRT(fVar4);
    *pfVar1 = fVar6 * fVar7;
    param_1[5] = (uint)((float)param_1[5] * fVar7);
    param_1[6] = (uint)((float)param_1[6] * fVar7);
    fVar7 = 1.0 / SQRT(fVar5);
    *pfVar2 = *pfVar2 * fVar7;
    param_1[0xd] = (uint)((float)param_1[0xd] * fVar7);
    param_1[0xe] = (uint)((float)param_1[0xe] * fVar7);
    fn_00525ce4(pfVar3,pfVar2,pfVar1);
  }
  return 1;
}


