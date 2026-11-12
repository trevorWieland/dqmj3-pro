#include "0033ea44_0033f248.h"



undefined4 *
fn_0033f248(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar2 = (undefined4 *)fn_001dbf48(param_1,7,param_3,param_4,param_4);
  *puVar2 = &DAT_00824e48;
  puVar2[0x5c] = 0;
  puVar2[0x5d] = 0xffffffff;
  puVar2[0x5a] = param_2;
  puVar2[0x5b] = param_3;
  uVar12 = 2;
  *(undefined1 *)(puVar2 + 0x5e) = 0;
  iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc;
  if (iVar3 < 3) {
    if ((puVar2[0x55] & 0x3fffffff) < 2) {
      piVar10 = (int *)puVar2[0x52];
      if (((piVar10 == (int *)0x0) || ((puVar2[0x55] & 0xc0000000) != 0x40000000)) ||
         (puVar4 = (undefined4 *)(**(code **)(*piVar10 + 8))(piVar10,0x18,0x20),
         puVar4 == (undefined4 *)0x0)) {
        uVar12 = puVar2[0x55] & 0x3fffffff;
      }
      else {
        iVar3 = 0;
        puVar8 = (undefined4 *)puVar2[0x53];
        puVar9 = (undefined4 *)puVar2[0x54];
        puVar5 = puVar4;
        if (puVar8 != puVar9) {
          do {
            if (puVar5 != (undefined4 *)0x0) {
              uVar13 = puVar8[1];
              uVar14 = puVar8[2];
              *puVar5 = *puVar8;
              puVar5[1] = uVar13;
              puVar5[2] = uVar14;
            }
            puVar8 = puVar8 + 3;
            puVar5 = puVar5 + 3;
          } while (puVar8 != puVar9);
          iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc;
        }
        uVar6 = puVar2[0x53];
        if (uVar6 != 0) {
          uVar11 = puVar2[0x54];
          uVar1 = uVar6;
          if (uVar6 < uVar11) {
            iVar7 = 1;
            if (1 < (int)(uVar11 - uVar6) / 0xc + 1) {
              do {
                iVar7 = iVar7 + 1;
              } while (iVar7 < (int)(uVar11 - uVar6) / 0xc + 1);
            }
          }
          else {
            for (; uVar1 != uVar11; uVar1 = uVar1 + 0xc) {
            }
          }
          puVar2[0x54] = uVar6;
          piVar10 = (int *)puVar2[0x52];
          (**(code **)(*piVar10 + 0xc))(piVar10,puVar2[0x53]);
        }
        puVar2[0x53] = puVar4;
        puVar2[0x54] = puVar4 + iVar3 * 3;
        puVar2[0x55] = puVar2[0x55] & 0xc0000000 | 2;
      }
    }
    for (iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc; iVar3 < (int)uVar12; iVar3 = iVar3 + 1) {
      puVar4 = (undefined4 *)(puVar2[0x53] + iVar3 * 0xc);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xffffffff;
        puVar4[1] = 0xffffffff;
        puVar4[2] = 0xffffffff;
      }
    }
    iVar3 = puVar2[0x53] + uVar12 * 0xc;
  }
  else {
    do {
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar3);
    iVar3 = puVar2[0x53] + 0x18;
  }
  puVar2[0x54] = iVar3;
  fn_001da490(puVar2,0,0,0,0);
  fn_001da490(puVar2,1,1,1,1);
  return puVar2;
}



undefined4 fn_0033efbc(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (((*(char *)(param_2 + 0xdc) == '\0') && (*(char *)(param_1 + 0x58) != '\0')) &&
     (*(uint *)(param_1 + 0x170) < 2 || *(uint *)(param_1 + 0x170) == 3)) {
    fVar6 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x20);
    fVar5 = *(float *)(param_2 + 0x24) - *(float *)(param_1 + 0x24);
    fVar4 = *(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28);
    fVar5 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
    iVar2 = fn_006f7a84(DAT_008977e0);
    fVar4 = *(float *)(*(int *)(iVar2 + 0x100) + 0xc);
    if (*(char *)(param_1 + 0x178) == '\0') {
      fVar4 = fVar4 + 24.0;
    }
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar5 == fVar4 * fVar4) << 0x1e;
    uVar3 = uVar1 | (uint)(fVar4 * fVar4 <= fVar5) << 0x1d;
    if (!(bool)((byte)(uVar3 >> 0x1d) & 1) || SUB41(uVar1 >> 0x1e,0)) {
      fn_0033e918(param_1);
      return 0;
    }
    iVar2 = fn_006f7a84(DAT_008977e0);
    if (*(int *)(iVar2 + 0x450) != 0) {
      fVar6 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x20);
      fVar5 = *(float *)(param_2 + 0x24) - *(float *)(param_1 + 0x24);
      fVar4 = *(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28);
      fVar5 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
      iVar2 = fn_006f7a84(DAT_008977e0);
      fVar6 = *(float *)(*(int *)(iVar2 + 0x100) + 0xc);
      fn_006f751c(DAT_008977e0);
      iVar2 = fn_00341920();
      fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x60),(byte)(uVar3 >> 0x16) & 3);
      if ((fVar5 <= (fVar4 + fVar6) * (fVar4 + fVar6)) &&
         ((*(int *)(param_1 + 0x170) == 0 ||
          ((*(int *)(param_1 + 0x170) == 1 && (*(float *)(param_1 + 0x180) < 0.0)))))) {
        *(undefined4 *)(param_1 + 0x170) = 3;
        *(undefined1 *)(param_1 + 0x178) = 1;
      }
    }
  }
  return 0;
}



void fn_0033ec7c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_68;
  int iStack_64;
  int iStack_60;
  float local_5c;
  float local_58;
  float fStack_54;
  float local_44;
  float local_40;
  float local_3c;
  
  fn_001db0c4();
  fVar11 = 1.0;
  fVar10 = 0.0;
  pfVar3 = (float *)(param_1 + 8);
  switch(param_1[0x5c]) {
  default:
    return;
  case 1:
    break;
  case 2:
    iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    if (iVar2 == 0) {
      return;
    }
    param_1[0x5c] = 4;
    return;
  case 3:
    iVar2 = fn_006f7a84(DAT_008977e0);
    fVar7 = *(float *)(iVar2 + 0x20) - *pfVar3;
    fVar9 = *(float *)(iVar2 + 0x24) - (float)param_1[9];
    fVar5 = *(float *)(iVar2 + 0x28) - (float)param_1[10];
    fVar8 = fVar7;
    fVar4 = fVar9;
    fVar6 = fVar5;
    if ((fVar7 != fVar10 || (fVar7 != fVar10 || fVar9 != fVar10)) || fVar5 != fVar10) {
      fVar11 = fVar11 / SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar5 * fVar5);
      fVar8 = fVar7 * fVar11 * 1.5;
      fVar4 = fVar9 * fVar11 * 1.5;
      fVar6 = fVar5 * fVar11 * 1.5;
    }
    param_1[0x5f] = (int)((float)param_1[0x5f] + fVar8);
    param_1[0x60] = (int)((float)param_1[0x60] + fVar4);
    param_1[0x61] = (int)((float)param_1[0x61] + fVar6);
    fVar10 = *pfVar3 + (float)param_1[0x5f];
    fVar4 = (float)param_1[9] + (float)param_1[0x60];
    fVar8 = (float)param_1[10] + (float)param_1[0x61];
    fVar11 = fVar7;
    iVar2 = fn_006f7a84(DAT_008977e0);
    if (ABS(fVar7) < ABS(*(float *)(iVar2 + 0x20) - fVar10)) {
      param_1[0x5f] = (int)fVar11;
    }
    iVar2 = fn_006f7a84(DAT_008977e0);
    if (ABS(fVar9) < ABS(*(float *)(iVar2 + 0x24) - fVar4)) {
      param_1[0x60] = (int)fVar9;
    }
    iVar2 = fn_006f7a84(DAT_008977e0);
    if (ABS(fVar5) < ABS(*(float *)(iVar2 + 0x28) - fVar8)) {
      param_1[0x61] = (int)fVar5;
    }
    local_44 = *pfVar3 + (float)param_1[0x5f];
    local_40 = (float)param_1[9] + (float)param_1[0x60];
    local_3c = (float)param_1[10] + (float)param_1[0x61];
    (**(code **)(*param_1 + 0x10))(param_1,&local_44);
    return;
  case 4:
    param_1[0x5c] = 5;
    (**(code **)(*param_1 + 0x58))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0033ed2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x54))(param_1,0);
    return;
  case 5:
    *(undefined1 *)(param_1 + 0x5e) = 0;
    return;
  }
  param_1[0x5f] = (int)((float)param_1[0x5f] * 0.9);
  param_1[0x61] = (int)((float)param_1[0x61] * 0.9);
  param_1[0x60] = (int)((float)param_1[0x60] - 1.0);
  local_68 = param_1[8];
  iStack_64 = param_1[9];
  iStack_60 = param_1[10];
  local_5c = *pfVar3 + (float)param_1[0x5f];
  local_58 = (float)param_1[9] + (float)param_1[0x60];
  fStack_54 = (float)param_1[10] + (float)param_1[0x61];
  if ((float)param_1[0x60] <= 0.0) {
    uVar1 = fn_006f7388(DAT_008977e0);
    iVar2 = fn_0023b804(uVar1,&local_68,&local_5c);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x10))(param_1,&local_5c);
      param_1[0x5c] = 0;
      return;
    }
  }
  (**(code **)(*param_1 + 0x10))(param_1,&local_5c);
  return;
}



void fn_0033eb30(int *param_1)

{
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_001d9fcc(param_1);
  return;
}



void fn_0033ea44(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x4e) & 4) != 0) {
    return;
  }
  if ((char)param_1[0x16] != '\0') {
    uVar1 = fn_006f7a5c(DAT_008977e0);
    iVar2 = fn_006a9800(uVar1,param_1);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x5c))(param_1,1);
      goto LAB_0033eaac;
    }
  }
  (**(code **)(*param_1 + 0x5c))(param_1,0);
LAB_0033eaac:
  if ((*(char *)((int)param_1 + 0x5a) == '\0') || ((float)param_1[0x3e] == 0.0)) {
    (**(code **)(*param_1 + 0x58))(param_1,0);
    if (param_1[0x39] != 0) {
      fn_005ef16c(param_1[0x39],0);
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x58))(param_1,1);
    if (param_1[0x39] != 0) {
      fn_005ef16c(param_1[0x39],1);
      return;
    }
  }
  return;
}


