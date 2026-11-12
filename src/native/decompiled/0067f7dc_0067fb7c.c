#include "0067f7dc_0067fb7c.h"



void fn_0067fb7c(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  iVar2 = *(int *)(param_1 + 0x14);
  puVar10 = *(undefined4 **)(iVar2 + 0x28);
  puVar4 = *(undefined4 **)(iVar2 + 0x2c);
  puVar8 = *(undefined4 **)(iVar2 + 0x1c);
  puVar9 = *(undefined4 **)(iVar2 + 0x20);
  puVar11 = *(undefined4 **)(iVar2 + 0x24);
  if (puVar8 == puVar4) {
LAB_0067fc38:
    bVar1 = true;
  }
  else {
    if (puVar8 == puVar9 || puVar4 == *(undefined4 **)(iVar2 + 0x30)) {
      if (puVar10 == *(undefined4 **)(iVar2 + 0x38)) {
        iVar3 = (int)puVar8 - (int)puVar4 >> 2;
      }
      else {
        iVar3 = (((int)puVar10 - (int)*(undefined4 **)(iVar2 + 0x38) >> 2) + -1) * 0x20 +
                ((int)puVar8 - (int)puVar9 >> 2) + (*(int *)(iVar2 + 0x34) - (int)puVar4 >> 2);
      }
      if (iVar3 == 0) goto LAB_0067fc38;
    }
    bVar1 = false;
  }
  do {
    while( true ) {
      if (bVar1) {
        return;
      }
      puVar4 = (undefined4 *)fn_006f608c(*puVar8);
      puVar5 = *(undefined4 **)(param_2 + 4);
      if (puVar5 == *(undefined4 **)(param_2 + 8)) {
        fn_00794e34(param_2);
      }
      else {
        *(undefined4 **)(param_2 + 4) = puVar5 + 3;
        if (puVar5 != (undefined4 *)0x0) {
          uVar6 = puVar4[1];
          uVar7 = puVar4[2];
          *puVar5 = *puVar4;
          puVar5[1] = uVar6;
          puVar5[2] = uVar7;
        }
      }
      puVar8 = puVar8 + 1;
      if (puVar8 == puVar11) {
        puVar10 = puVar10 + 1;
        puVar8 = (undefined4 *)*puVar10;
        puVar11 = puVar8 + 0x20;
        puVar9 = puVar8;
      }
      puVar4 = *(undefined4 **)(iVar2 + 0x2c);
      if (puVar8 != puVar4) break;
LAB_0067fcc8:
      bVar1 = true;
    }
    if (puVar8 == puVar9 || puVar4 == *(undefined4 **)(iVar2 + 0x30)) {
      if (puVar10 == *(undefined4 **)(iVar2 + 0x38)) {
        iVar3 = (int)puVar8 - (int)puVar4 >> 2;
      }
      else {
        iVar3 = (((int)puVar10 - (int)*(undefined4 **)(iVar2 + 0x38) >> 2) + -1) * 0x20 +
                ((int)puVar8 - (int)puVar9 >> 2) + (*(int *)(iVar2 + 0x34) - (int)puVar4 >> 2);
      }
      if (iVar3 == 0) goto LAB_0067fcc8;
    }
    bVar1 = false;
  } while( true );
}



void fn_0067fb14(float *param_1,int param_2,int param_3)

{
  float in_s0;
  float in_s1;
  float fVar1;
  float fVar2;
  
  fVar2 = in_s1 - in_s0;
  fVar1 = in_s0;
  fn_0067d3a0(param_2 + 0x6c,param_3 + 0x6c);
  *param_1 = *param_1 + fVar1 + in_s0 * 0.001 * fVar2;
  return;
}



undefined4 * fn_0067f9e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint local_20 [3];
  
  uVar5 = param_2[1];
  uVar8 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  param_1[2] = uVar8;
  uVar5 = param_2[4];
  uVar8 = param_2[5];
  uVar11 = param_2[6];
  uVar12 = param_2[7];
  uVar13 = param_2[8];
  uVar14 = param_2[9];
  uVar15 = param_2[10];
  param_1[3] = param_2[3];
  param_1[4] = uVar5;
  param_1[5] = uVar8;
  param_1[6] = uVar11;
  param_1[7] = uVar12;
  param_1[8] = uVar13;
  param_1[9] = uVar14;
  param_1[10] = uVar15;
  param_1[0xb] = param_2[0xb];
  uVar5 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar11 = param_2[0xf];
  uVar12 = param_2[0x10];
  uVar13 = param_2[0x11];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar5;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar11;
  param_1[0x10] = uVar12;
  param_1[0x11] = uVar13;
  uVar5 = param_2[0x13];
  uVar8 = param_2[0x14];
  uVar11 = param_2[0x15];
  uVar12 = param_2[0x16];
  uVar13 = param_2[0x17];
  uVar14 = param_2[0x18];
  uVar15 = param_2[0x19];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar5;
  param_1[0x14] = uVar8;
  param_1[0x15] = uVar11;
  param_1[0x16] = uVar12;
  param_1[0x17] = uVar13;
  param_1[0x18] = uVar14;
  param_1[0x19] = uVar15;
  param_1[0x1a] = param_2[0x1a];
  uVar5 = param_2[0x1c];
  uVar8 = param_2[0x1d];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = uVar5;
  param_1[0x1d] = uVar8;
  piVar9 = param_1 + 0x1f;
  param_1[0x1e] = param_2[0x1e];
  *piVar9 = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  local_20[0] = (int)(param_2[0x20] - param_2[0x1f]) >> 3;
  puVar2 = local_20;
  if (local_20[0] < 0x20) {
    puVar2 = local_20 + 1;
  }
  local_20[1] = 0x20;
  uVar10 = *puVar2;
  puVar1 = (undefined4 *)fn_00100fc6(uVar10 << 3,0);
  *piVar9 = (int)puVar1;
  puVar6 = (undefined4 *)param_2[0x20];
  for (puVar3 = (undefined4 *)param_2[0x1f]; puVar3 != puVar6; puVar3 = puVar3 + 2) {
    if (puVar1 != (undefined4 *)0x0) {
      uVar5 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar5;
    }
    puVar1 = puVar1 + 2;
  }
  iVar4 = param_2[0x20];
  iVar7 = param_2[0x1f];
  param_1[0x21] = *piVar9 + uVar10 * 8;
  param_1[0x20] = (iVar4 - iVar7 & 0xfffffff8U) + *piVar9;
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  return param_1;
}



int fn_0067f990(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00101a1c(param_1 + 0xc,&LAB_006805d0,0xc,3);
  *(undefined4 *)(iVar1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *(undefined4 *)(iVar1 + 0x84) = param_2;
  return iVar1 + -0xc;
}



undefined4 fn_0067f7dc(float *param_1,float *param_2)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float in_s1;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_s4;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_s6;
  
  fVar7 = *param_1;
  fVar8 = param_1[2];
  fVar5 = *param_2;
  pfVar1 = param_2 + 2;
  if (fVar7 < fVar8) {
    bVar2 = fVar8 < fVar5;
    if (bVar2) {
      in_s1 = *pfVar1;
    }
    if (bVar2 && (bVar2 && fVar8 < in_s1)) {
      return 0;
    }
    bVar2 = fVar7 < fVar5;
    bVar3 = fVar7 == fVar5;
    bVar4 = NAN(fVar7) || NAN(fVar5);
    if (!bVar3 && !bVar2) {
      fVar6 = *pfVar1;
      bVar2 = fVar7 < fVar6;
      bVar3 = fVar7 == fVar6;
      bVar4 = NAN(fVar7) || NAN(fVar6);
    }
    if (!bVar3 && bVar2 == bVar4) {
      return 0;
    }
  }
  else {
    bVar2 = fVar7 < fVar5;
    if (bVar2) {
      in_s1 = *pfVar1;
    }
    if (bVar2 && (bVar2 && fVar7 < in_s1)) {
      return 0;
    }
    bVar2 = fVar8 < fVar5;
    bVar3 = fVar8 == fVar5;
    bVar4 = NAN(fVar8) || NAN(fVar5);
    if (!bVar3 && !bVar2) {
      fVar6 = *pfVar1;
      bVar2 = fVar8 < fVar6;
      bVar3 = fVar8 == fVar6;
      bVar4 = NAN(fVar8) || NAN(fVar6);
    }
    if (!bVar3 && bVar2 == bVar4) {
      return 0;
    }
  }
  fVar6 = param_1[1];
  if (NAN(fVar6)) {
    fVar11 = param_2[1];
    bVar2 = param_1[3] < fVar11;
    if (bVar2) {
      in_s6 = param_2[3];
    }
    if (bVar2 && (bVar2 && param_1[3] < in_s6)) {
      return 0;
    }
    bVar2 = fVar6 < fVar11;
    bVar3 = fVar6 == fVar11;
    bVar4 = NAN(fVar6) || NAN(fVar11);
    if (!bVar3 && !bVar2) {
      fVar11 = param_2[3];
      bVar2 = fVar6 < fVar11;
      bVar3 = fVar6 == fVar11;
      bVar4 = NAN(fVar6) || NAN(fVar11);
    }
    if (!bVar3 && bVar2 == bVar4) {
      return 0;
    }
  }
  else {
    fVar11 = param_2[1];
    bVar2 = fVar6 < fVar11;
    if (bVar2) {
      in_s4 = param_2[3];
    }
    if (bVar2 && (bVar2 && fVar6 < in_s4)) {
      return 0;
    }
    fVar9 = param_1[3];
    bVar2 = fVar9 < fVar11;
    bVar3 = fVar9 == fVar11;
    bVar4 = NAN(fVar9) || NAN(fVar11);
    if (!bVar3 && !bVar2) {
      fVar11 = param_2[3];
      bVar2 = fVar9 < fVar11;
      bVar3 = fVar9 == fVar11;
      bVar4 = NAN(fVar9) || NAN(fVar11);
    }
    if (!bVar3 && bVar2 == bVar4) {
      return 0;
    }
  }
  fVar11 = param_2[1];
  fVar9 = fVar6 - param_1[3];
  if ((((fVar7 - fVar8) * (fVar11 - fVar6) + fVar9 * (fVar7 - fVar5)) *
       ((fVar7 - fVar8) * (param_2[3] - fVar6) + fVar9 * (fVar7 - *pfVar1)) <= 0.0) &&
     (fVar9 = fVar5 - *pfVar1, fVar10 = fVar11 - param_2[3],
     (fVar9 * (fVar6 - fVar11) + fVar10 * (fVar5 - fVar7)) *
     (fVar9 * (param_1[3] - fVar11) + fVar10 * (fVar5 - fVar8)) <= 0.0)) {
    return 1;
  }
  return 0;
}


