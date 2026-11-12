#include "006df894_006dff44.h"



uint * fn_006dff44(int param_1,uint *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  cVar1 = *(char *)(param_1 + 4);
  if ((cVar1 == '\x03' || cVar1 == '\x04') || (cVar1 == '\x05')) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 2;
  }
  *param_2 = iVar4 << 2 | (uint)*(byte *)(param_1 + 3) << 1 | iVar2 << 4 |
             (uint)*(byte *)(param_1 + 2) << 8 | (uint)*(byte *)(param_1 + 1) << 0xc |
             (uint)(cVar1 == '\x02' || cVar1 == '\x05') << 0x18;
  param_2[1] = 0xf009b;
  uVar3 = 0;
  if (*(char *)(param_1 + 4) == '\x03' || *(char *)(param_1 + 4) == '\0') {
    param_2[2] = 0;
    param_2[3] = 0xf009c;
    return param_2 + 4;
  }
  fVar6 = *(float *)(param_1 + 8);
  fVar7 = 0.0;
  if ((fVar6 != 0.0) && ((uint)ABS(fVar6) >> 0x17 != 0xff)) {
    fVar6 = (fVar6 + 16.0) * 256.0;
    if (0.0 <= fVar6) {
      bVar5 = SBORROW4((int)fVar6,0x46000000);
      iVar4 = (int)fVar6 + -0x46000000;
      if ((int)fVar6 < 0x46000000) {
        bVar5 = SBORROW4((int)fVar6,0x45800000);
        iVar4 = (int)fVar6 + -0x45800000;
        fVar7 = fVar6;
      }
      else {
        fVar7 = 8191.0;
      }
      if (iVar4 < 0 == bVar5) {
        uVar3 = VectorFloatToUnsigned(fVar7 - 4096.0,3);
        goto LAB_006e0054;
      }
    }
    uVar3 = VectorFloatToUnsigned(fVar7 + 4096.0,3);
  }
LAB_006e0054:
  param_2[2] = uVar3 | param_4 << 0x10 | (uint)*(byte *)(param_1 + 5) << 0x18;
  param_2[3] = 0xf009c;
  return param_2 + 4;
}



uint * fn_006dfde8(int param_1,uint *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  cVar1 = *(char *)(param_1 + 4);
  if ((cVar1 == '\x03' || cVar1 == '\x04') || (cVar1 == '\x05')) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 2;
  }
  *param_2 = iVar4 << 2 | (uint)*(byte *)(param_1 + 3) << 1 | iVar2 << 4 |
             (uint)*(byte *)(param_1 + 2) << 8 | (uint)*(byte *)(param_1 + 1) << 0xc |
             (uint)(cVar1 == '\x02' || cVar1 == '\x05') << 0x18;
  param_2[1] = 0xf0093;
  uVar3 = 0;
  if (*(char *)(param_1 + 4) == '\x03' || *(char *)(param_1 + 4) == '\0') {
    param_2[2] = 0;
    param_2[3] = 0xf0094;
    return param_2 + 4;
  }
  fVar6 = *(float *)(param_1 + 8);
  fVar7 = 0.0;
  if ((fVar6 != 0.0) && ((uint)ABS(fVar6) >> 0x17 != 0xff)) {
    fVar6 = (fVar6 + 16.0) * 256.0;
    if (0.0 <= fVar6) {
      bVar5 = SBORROW4((int)fVar6,0x46000000);
      iVar4 = (int)fVar6 + -0x46000000;
      if ((int)fVar6 < 0x46000000) {
        bVar5 = SBORROW4((int)fVar6,0x45800000);
        iVar4 = (int)fVar6 + -0x45800000;
        fVar7 = fVar6;
      }
      else {
        fVar7 = 8191.0;
      }
      if (iVar4 < 0 == bVar5) {
        uVar3 = VectorFloatToUnsigned(fVar7 - 4096.0,3);
        goto LAB_006dfef8;
      }
    }
    uVar3 = VectorFloatToUnsigned(fVar7 + 4096.0,3);
  }
LAB_006dfef8:
  param_2[2] = uVar3 | param_4 << 0x10 | (uint)*(byte *)(param_1 + 5) << 0x18;
  param_2[3] = 0xf0094;
  return param_2 + 4;
}



uint * fn_006dfc84(byte *param_1,uint *param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  uVar3 = (uint)*param_1;
  bVar1 = param_1[4];
  if ((bVar1 == 3 || bVar1 == 4) || (bVar1 == 5)) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = 2;
  }
  if (param_3 == 0) {
    iVar2 = 0;
  }
  *param_2 = iVar4 << 2 | (uint)param_1[3] << 1 | iVar2 << 4 | (uint)param_1[2] << 8 |
             (uint)param_1[1] << 0xc | (uint)(uVar3 == 2 || uVar3 == 4) << 0x14 |
             (uint)(bVar1 == 2 || bVar1 == 5) << 0x18 | uVar3 << 0x1c;
  param_2[1] = 0xf0083;
  uVar3 = 0;
  if (param_1[4] == 3 || param_1[4] == 0) goto LAB_006dfdc0;
  fVar6 = *(float *)(param_1 + 8);
  fVar7 = 0.0;
  if ((fVar6 != 0.0) && ((uint)ABS(fVar6) >> 0x17 != 0xff)) {
    fVar6 = (fVar6 + 16.0) * 256.0;
    if (0.0 <= fVar6) {
      bVar5 = SBORROW4((int)fVar6,0x46000000);
      iVar4 = (int)fVar6 + -0x46000000;
      if ((int)fVar6 < 0x46000000) {
        bVar5 = SBORROW4((int)fVar6,0x45800000);
        iVar4 = (int)fVar6 + -0x45800000;
        fVar7 = fVar6;
      }
      else {
        fVar7 = 8191.0;
      }
      if (iVar4 < 0 == bVar5) {
        uVar3 = VectorFloatToUnsigned(fVar7 - 4096.0,3);
        goto LAB_006dfdb4;
      }
    }
    uVar3 = VectorFloatToUnsigned(fVar7 + 4096.0,3);
  }
LAB_006dfdb4:
  uVar3 = uVar3 | param_4 << 0x10 | (uint)param_1[5] << 0x18;
LAB_006dfdc0:
  param_2[2] = uVar3;
  param_2[3] = 0xf0084;
  return param_2 + 4;
}



undefined4 fn_006df894(int *param_1,ushort *param_2,int *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_30;
  
  iVar3 = param_1[1];
  if (iVar3 <= (int)(uint)*param_2) {
    return 0;
  }
  local_30 = 0;
  *(undefined1 *)((int)param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  iVar7 = *param_1;
  uVar4 = (uint)*param_2;
  do {
    uVar9 = uVar4;
    pbVar6 = (byte *)(iVar7 + uVar9 * 8);
    pfVar8 = (float *)(*param_3 + uVar9 * 0x18);
    if ((*(char *)(param_4 + 0x1e) == '\0') ||
       (((((*param_4 <= pfVar8[3] && (*pfVar8 <= param_4[3])) && (param_4[1] <= pfVar8[4])) &&
         ((pfVar8[1] <= param_4[4] && (param_4[2] <= pfVar8[5])))) && (pfVar8[2] <= param_4[5])))) {
      bVar10 = true;
      iVar5 = 0;
      if (*(byte *)((int)param_4 + 0x79) != 0) {
        do {
          fVar13 = param_4[iVar5 * 4 + 6];
          fVar15 = param_4[iVar5 * 4 + 7];
          fVar16 = pfVar8[3];
          fVar14 = *pfVar8;
          if (fVar13 < 0.0) {
            fVar16 = *pfVar8;
            fVar14 = pfVar8[3];
          }
          fVar17 = param_4[iVar5 * 4 + 8];
          fVar11 = pfVar8[4];
          fVar1 = pfVar8[1];
          if (fVar15 < 0.0) {
            fVar11 = pfVar8[1];
            fVar1 = pfVar8[4];
          }
          fVar12 = pfVar8[5];
          fVar2 = pfVar8[2];
          if (fVar17 < 0.0) {
            fVar12 = pfVar8[2];
            fVar2 = pfVar8[5];
          }
          if (0.0 < fVar15 * fVar1 + fVar17 * fVar2 + param_4[iVar5 * 4 + 9] + fVar13 * fVar14)
          goto LAB_006dfa4c;
          if ((bVar10) &&
             (0.0 <= fVar15 * fVar11 + fVar17 * fVar12 + param_4[iVar5 * 4 + 9] + fVar13 * fVar16))
          {
            bVar10 = false;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(uint)*(byte *)((int)param_4 + 0x79));
        if ((!bVar10) && (uVar4 = (uint)*pbVar6, uVar4 != uVar9)) goto LAB_006dfa50;
      }
      uVar4 = (uint)pbVar6[2];
      local_30 = 1;
      *(byte *)(param_2 + 1) = pbVar6[3];
      *(byte *)((int)param_2 + 3) = pbVar6[4];
      break;
    }
LAB_006dfa4c:
    uVar4 = (uint)pbVar6[2];
LAB_006dfa50:
  } while (uVar4 != uVar9);
  if (uVar4 != uVar9) {
    do {
      pbVar6 = (byte *)(iVar7 + uVar4 * 8);
      pfVar8 = (float *)(*param_3 + uVar4 * 0x18);
      if ((*(char *)(param_4 + 0x1e) != '\0') &&
         ((((pfVar8[3] < *param_4 || (param_4[3] < *pfVar8)) || (pfVar8[4] < param_4[1])) ||
          (((param_4[4] < pfVar8[1] || (pfVar8[5] < param_4[2])) || (param_4[5] < pfVar8[2])))))) {
LAB_006dfbe0:
        *param_2 = (ushort)pbVar6[2];
        return 1;
      }
      bVar10 = true;
      iVar5 = 0;
      if (*(char *)((int)param_4 + 0x79) == '\0') {
LAB_006dfc4c:
        uVar9 = (uint)pbVar6[2];
        *(byte *)((int)param_2 + 3) = (pbVar6[4] + pbVar6[3]) - (char)param_2[1];
      }
      else {
        do {
          fVar14 = param_4[iVar5 * 4 + 6];
          fVar16 = param_4[iVar5 * 4 + 7];
          if (0.0 <= fVar14) {
            fVar15 = pfVar8[3];
            fVar13 = *pfVar8;
          }
          else {
            fVar15 = *pfVar8;
            fVar13 = pfVar8[3];
          }
          fVar17 = param_4[iVar5 * 4 + 8];
          fVar11 = pfVar8[4];
          fVar1 = pfVar8[1];
          if (fVar16 < 0.0) {
            fVar11 = pfVar8[1];
            fVar1 = pfVar8[4];
          }
          fVar12 = pfVar8[5];
          fVar2 = pfVar8[2];
          if (fVar17 < 0.0) {
            fVar12 = pfVar8[2];
            fVar2 = pfVar8[5];
          }
          if (0.0 < fVar16 * fVar1 + fVar17 * fVar2 + param_4[iVar5 * 4 + 9] + fVar14 * fVar13)
          goto LAB_006dfbe0;
          if ((bVar10) &&
             (0.0 <= fVar16 * fVar11 + fVar17 * fVar12 + param_4[iVar5 * 4 + 9] + fVar14 * fVar15))
          {
            bVar10 = false;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(uint)*(byte *)((int)param_4 + 0x79));
        if ((bVar10) || (uVar9 = (uint)*pbVar6, uVar9 == uVar4)) goto LAB_006dfc4c;
      }
      bVar10 = uVar9 != uVar4;
      uVar4 = uVar9;
    } while (bVar10);
  }
  *param_2 = (ushort)iVar3;
  return local_30;
}


