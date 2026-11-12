#include "00176688_00176cfc.h"



int fn_00176cfc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (*(ushort *)(param_1 + 0x10) != 0) {
    while (*(short *)(param_1 + 0x14 + iVar2 * 0xc) != 0x5800) {
      iVar2 = iVar2 + 1;
      if ((int)(uint)*(ushort *)(param_1 + 0x10) <= iVar2) {
        return 0;
      }
    }
    iVar3 = param_1 + 0x14 + iVar2 * 0xc;
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 4);
    }
    if (iVar3 != 0 && iVar2 != 0) {
      iVar1 = iVar2 + param_1;
    }
  }
  return iVar1;
}



int fn_00176ca0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = fn_00172fc4();
  fn_00170704(iVar2 + 0x1c4);
  piVar3 = *(int **)(param_1 + 8);
  iVar2 = 0;
  if (piVar3 != (int *)(param_1 + 8)) {
    do {
      piVar1 = piVar3 + -0x14;
      piVar3 = (int *)*piVar3;
      iVar2 = iVar2 + *piVar1;
    } while (piVar3 != (int *)(param_1 + 8));
  }
  iVar4 = fn_00172fc4();
  fn_001707b4(iVar4 + 0x1c4);
  return iVar2;
}



int fn_00176bfc(short *param_1)

{
  int iVar1;
  
  if ((*param_1 == 0) || (*param_1 != 0x220c)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_1 + *(int *)(param_1 + 2);
  }
  return iVar1;
}



uint fn_00176bd8(ushort *param_1)

{
  uint uVar1;
  
  if ((*param_1 == 0) || (uVar1 = *param_1 - 0x220c, 1 < uVar1)) {
    uVar1 = 2;
  }
  return uVar1;
}



int fn_00176bac(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)*param_1;
  bVar3 = uVar2 == 0;
  if (!bVar3) {
    uVar2 = uVar2 - 0x220c;
    bVar3 = uVar2 == 0;
  }
  if ((bVar3) || (uVar2 != 1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_1 + *(int *)(param_1 + 2);
  }
  return iVar1;
}



undefined4 fn_00176b8c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00176c24(param_1 + 8,local_8,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_8[0];
  }
  return uVar2;
}



undefined4 fn_00176c24(uint *param_1,uint *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = false;
  iVar2 = 0;
  if (param_3 != 0xffffffff) {
    uVar4 = 0;
    iVar3 = param_3 + 1;
    do {
      if (((*param_1 & 1 << (uVar4 & 0xff)) != 0) && (iVar2 = iVar2 + 1, uVar4 == param_3)) {
        bVar1 = true;
      }
      iVar3 = iVar3 + -1;
      uVar4 = uVar4 + 1;
    } while (iVar3 != 0);
    if (!bVar1) {
      return 0;
    }
  }
  if (iVar2 == 0) {
    return 0;
  }
  *param_2 = param_1[iVar2];
  return 1;
}



int fn_00176b80(int param_1)

{
  return param_1 + *(int *)(param_1 + 0xc);
}



int fn_00176b44(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 >> 0x18 == 5) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x1c));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}



int fn_00176b18(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x34));
  if ((param_2 & 0xffffff) < *puVar1) {
    iVar2 = (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



undefined4 fn_00176af0(int param_1)

{
  if (*(short *)(param_1 + 0x14) == 0x6800) {
    param_1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6800) {
    param_1 = param_1 + 0x20;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 4);
}



undefined4 fn_00176ac0(int param_1)

{
  if (*(short *)(param_1 + 0x14) == 0x6801) {
    param_1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6801) {
    param_1 = param_1 + 0x20;
  }
  else {
    param_1 = 0;
  }
  return *(undefined4 *)(param_1 + 4);
}



int fn_00176a8c(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x14) == 0x6801) {
    iVar1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6801) {
    iVar1 = param_1 + 0x20;
  }
  else {
    iVar1 = 0;
  }
  return param_1 + *(int *)(iVar1 + 4);
}



void fn_0017695c(int param_1)

{
  if (*(char *)(param_1 + 100) == '\0') {
    fn_0014ea80();
    return;
  }
  return;
}



uint * fn_00176818(int param_1,uint *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  do {
    puVar1 = param_2;
    uVar4 = uVar3 + 1;
    pbVar2 = (byte *)(param_1 + uVar3 * 0x18);
    *puVar1 = (uint)pbVar2[4] | (uint)pbVar2[5] << 4 | (uint)pbVar2[6] << 8 |
              (uint)pbVar2[0xd] << 0x10 | (uint)pbVar2[0xe] << 0x14 | (uint)pbVar2[0xf] << 0x18;
    puVar1[1] = *(ushort *)(pbVar2 + 0x16) | 0x804f0000;
    puVar1[2] = (uint)pbVar2[1] | (uint)pbVar2[2] << 4 | (uint)pbVar2[3] << 8 |
                (uint)pbVar2[10] << 0xc | (uint)pbVar2[0xb] << 0x10 | (uint)pbVar2[0xc] << 0x14;
    puVar1[3] = (uint)*pbVar2 | (uint)pbVar2[9] << 0x10;
    puVar1[4] = *(uint *)(pbVar2 + 0x12) & 0xffffff | (uint)pbVar2[0x15] << 0x18;
    puVar1[5] = (uint)pbVar2[7] | (uint)pbVar2[0x10] << 0x10;
    param_2 = puVar1 + 6;
    uVar3 = uVar4;
  } while (uVar4 < 6);
  puVar1[6] = (uint)*(byte *)(param_1 + 0x20) << 8 | (uint)*(byte *)(param_1 + 0x29) << 0xc |
              (uint)*(byte *)(param_1 + 0x38) << 9 | (uint)*(byte *)(param_1 + 0x41) << 0xd |
              (uint)*(byte *)(param_1 + 0x50) << 10 | (uint)*(byte *)(param_1 + 0x59) << 0xe |
              (uint)*(byte *)(param_1 + 0x68) << 0xb | (uint)*(byte *)(param_1 + 0x71) << 0xf;
  puVar1[7] = 0x200e0;
  puVar1[8] = *(uint *)(param_1 + 0x90) & 0xffffff | (uint)*(byte *)(param_1 + 0x93) << 0x18;
  puVar1[9] = 0xf00fd;
  return puVar1 + 10;
}



uint * fn_00176688(char *param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  float fVar5;
  
  if (*param_1 != '\0') {
    *param_2 = 0xe40103;
    puVar3 = param_2 + 2;
    param_2[1] = 0x10100;
    uVar1 = 0;
    if (param_4 != 0) {
      *puVar3 = 0;
      param_2[3] = (uint)&DAT_00200080;
      param_2[4] = 0;
      puVar3 = param_2 + 6;
      param_2[5] = 0;
    }
    fVar5 = *(float *)(param_1 + 4);
    if ((0.0 < fVar5) && ((uint)ABS(fVar5) >> 0x17 != 0xff)) {
      if ((int)(fVar5 * 16777216.0) < 0x4b800000) {
        uVar1 = VectorFloatToUnsigned(fVar5 * 16777216.0,3);
      }
      else {
        uVar1 = 0xffffff;
      }
    }
    *puVar3 = (uint)(param_1[1] == '\0') | uVar1 & 0xfffffffe;
    puVar3[1] = 0xf008b;
    fVar5 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x10);
    iVar4 = 0;
    if ((ABS(fVar5) == 0.0) || (iVar4 = ((uint)ABS(fVar5) >> 0x17) - 0x70, -1 < iVar4)) {
      uVar1 = (((uint)fVar5 & 0xe07fffff) >> 0xd | iVar4 << 10) & 0xffff |
              ((uint)fVar5 >> 0x1f) << 0xf;
    }
    else {
      uVar1 = ((uint)fVar5 >> 0x1f) << 0xf;
    }
    fVar5 = -*(float *)(param_1 + 0xc);
    iVar4 = 0;
    if ((ABS(fVar5) == 0.0) || (iVar4 = ((uint)ABS(fVar5) >> 0x17) - 0x70, -1 < iVar4)) {
      uVar2 = (((uint)fVar5 & 0xe07fffff) >> 0xd | iVar4 << 10) & 0xffff |
              ((uint)fVar5 >> 0x1f) << 0xf;
    }
    else {
      uVar2 = ((uint)fVar5 >> 0x1f) << 0xf;
    }
    puVar3[2] = uVar1 | uVar2 << 0x10;
    param_2 = puVar3 + 4;
    puVar3[3] = 0xf0130;
  }
  if (param_3 == 0) {
    return param_2;
  }
  puVar3 = (uint *)fn_00182f2c(*(int *)(param_1 + 0x14) + 0x7c,param_2,1);
  return puVar3;
}


