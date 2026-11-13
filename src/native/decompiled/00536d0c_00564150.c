#include "00536d0c_00564150.h"



void fn_00564150(int param_1)

{
  short sVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  piVar3 = *(int **)(param_1 + 0xb4);
  iVar6 = piVar3[10];
  iVar8 = piVar3[8];
  iVar4 = (**(code **)(*piVar3 + 0x14))();
  iVar9 = 0;
  if (0 < iVar8 * iVar4) {
    do {
      iVar5 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb4),iVar6,iVar9);
      if (iVar5 != 0) {
        piVar3 = *(int **)(param_1 + 0x10c);
        bVar2 = false;
        while (*(int **)(param_1 + 0x110) != piVar3) {
          iVar7 = *piVar3;
          piVar3 = piVar3 + 1;
          if (iVar7 == iVar5) {
            bVar2 = true;
          }
        }
        iVar7 = fn_00346ed0(*(undefined4 *)(param_1 + 0xb4),iVar9);
        iVar5 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),iVar5);
        sVar1 = *(short *)(iVar5 + 0x1c);
        iVar5 = fn_00154ac8(0x30);
        if (iVar5 == 0) {
          bVar10 = sVar1 == 0x1c5 || sVar1 == 0x1c6;
          if (sVar1 != 0x1c5 && sVar1 != 0x1c6) {
            bVar10 = sVar1 == 0x1c7;
          }
          if (!bVar10) goto LAB_0056420c;
          *(undefined1 *)(iVar7 + 0x33) = 0;
        }
        else {
LAB_0056420c:
          *(undefined1 *)(iVar7 + 0x33) = 1;
        }
        if (bVar2) {
          fn_002b325c(iVar7,2);
        }
        else {
          fn_002b325c(iVar7,0xffffffff);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar8 * iVar4);
  }
  return;
}



int fn_00536d0c(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_78;
  undefined4 *local_74;
  int local_70;
  float local_68 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50 [11];
  
  if (((*(char *)(*(int *)(param_3 + 0x1c) + 0x287) == '\0') &&
      (*(int *)(*(int *)(param_3 + 0x20) + 0xc) != 0)) &&
     (*(char *)(*(int *)(param_3 + 0xdc) + 0x180) != '\0' || param_4 != 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  DAT_008c3450 = (undefined4 *)param_2;
  *(bool *)(param_1 + 0x14) = bVar7;
  if (bVar7) {
    return -1;
  }
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_3 + 0x27a);
  DAT_008c3454 = 0;
  DAT_008c3468 = param_4;
  if (param_4 == 1) {
    DAT_008c3450 = (undefined4 *)fn_0053e3f4(*(undefined4 *)(param_3 + 0xf4));
  }
  else {
    DAT_008c3450 = (undefined4 *)fn_0053e3f4(*(undefined4 *)(param_3 + 0xf0));
  }
  puVar3 = DAT_008c3450;
  if (DAT_008c3450 != (undefined4 *)0x0) {
    iVar6 = *(int *)(param_3 + 0x240 + param_4 * 4 + 8);
    iVar5 = *(int *)(param_3 + 0x240 + param_4 * 4);
    if (iVar6 != 0 && iVar5 != 0) {
      fn_001694e4(DAT_008c3450,iVar5,iVar6 << 2);
      DAT_008c3450 = puVar3 + iVar6;
    }
  }
  iVar5 = fn_0053fb0c(**(undefined4 **)(param_3 + 0x1c),param_3);
  if (iVar5 != 0) {
    local_74 = DAT_008c3450;
    local_78 = param_3;
    pcVar4 = (code *)fn_0053fb0c(**(undefined4 **)(param_3 + 0x1c),param_3);
    DAT_008c3450 = (undefined4 *)(*pcVar4)(&local_78);
  }
  uVar9 = 0;
  iVar5 = *(int *)(param_3 + 0x1c);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_3 + param_4 + 0x260);
  fVar11 = *(float *)(iVar5 + 0x230);
  fVar26 = *(float *)(iVar5 + 0x23c);
  fVar25 = 1.0;
  fVar21 = *(float *)(iVar5 + 0x234);
  fVar22 = *(float *)(iVar5 + 0x238);
  uVar2 = *(undefined8 *)(iVar5 + 0x234);
  local_68[0] = *(float *)(param_3 + 0x198);
  local_68[1] = (float)*(undefined4 *)(param_3 + 0x19c);
  local_68[2] = (float)*(undefined4 *)(param_3 + 0x1a0);
  local_68[3] = (float)*(undefined4 *)(param_3 + 0x1b8);
  local_58 = *(undefined4 *)(param_3 + 0x1bc);
  uStack_54 = *(undefined4 *)(param_3 + 0x1c0);
  fVar14 = *(float *)(param_3 + 0x94) * *(float *)(param_3 + 0x1a4);
  if (param_4 == 1) {
    iVar5 = *(int *)(param_3 + 0xdc);
    DAT_008c3460 = *(int *)(param_3 + 0x26c);
    DAT_008c3464 = *(int *)(param_3 + 0x270);
    uVar12 = *(undefined4 *)(iVar5 + 0x6d0);
    uVar20 = *(undefined4 *)(iVar5 + 0x6d4);
    uVar13 = *(undefined4 *)(iVar5 + 0x6a4);
    uVar19 = *(undefined4 *)(iVar5 + 0x6a8);
    fVar24 = fVar11 * local_68[DAT_008c3464 * 3];
    fVar17 = (float)uVar2 * local_68[DAT_008c3464 * 3 + 1];
    fVar16 = (float)((ulonglong)uVar2 >> 0x20) * local_68[DAT_008c3464 * 3 + 2];
    iVar6 = *(int *)(param_3 + 0xe4);
    uVar10 = uVar9;
    uVar8 = uVar9;
    if ((*(uint *)(iVar5 + 0x548) & 0x8000) == 0) {
      fVar24 = *(float *)(iVar5 + 0x63c) * fVar24;
      fVar17 = *(float *)(iVar5 + 0x640) * fVar17;
      if (0x3f800000 < (int)fVar24) {
        fVar24 = fVar25;
      }
      if (0x3f800000 < (int)fVar17) {
        fVar17 = fVar25;
      }
      uVar23 = VectorFloatToUnsigned(fVar24 * 255.0,3);
      uVar18 = VectorFloatToUnsigned(fVar17 * 255.0,3);
      fVar16 = *(float *)(iVar5 + 0x644) * fVar16;
      if (0x3f800000 < (int)fVar16) {
        fVar16 = fVar25;
      }
      local_78 = VectorFloatToUnsigned(fVar16 * 255.0,3);
      goto joined_r0x00537130;
    }
    if (iVar6 == 0) {
      iVar5 = iVar5 + DAT_008c3464 * 0x30;
      fVar24 = *(float *)(iVar5 + 0x430) * fVar24;
      fVar17 = *(float *)(iVar5 + 0x434) * fVar17;
      if (0x3f800000 < (int)fVar24) {
        fVar24 = fVar25;
      }
      if (0x3f800000 < (int)fVar17) {
        fVar17 = fVar25;
      }
      uVar23 = VectorFloatToUnsigned(fVar24 * 255.0,3);
      uVar18 = VectorFloatToUnsigned(fVar17 * 255.0,3);
      fVar16 = *(float *)(iVar5 + 0x438) * fVar16;
      if (0x3f800000 < (int)fVar16) {
        fVar16 = fVar25;
      }
      local_78 = VectorFloatToUnsigned(fVar16 * 255.0,3);
      goto joined_r0x00537130;
    }
    iVar5 = iVar6 + DAT_008c3464 * 0x10;
    fVar24 = *(float *)(iVar5 + 0xbc) * fVar24;
    fVar17 = *(float *)(iVar5 + 0xc0) * fVar17;
    if (0x3f800000 < (int)fVar24) {
      fVar24 = fVar25;
    }
    if (0x3f800000 < (int)fVar17) {
      fVar17 = fVar25;
    }
    uVar23 = VectorFloatToUnsigned(fVar24 * 255.0,3);
    uVar18 = VectorFloatToUnsigned(fVar17 * 255.0,3);
    fVar16 = *(float *)(iVar5 + 0xc4) * fVar16;
    fVar17 = *(float *)(iVar6 + 0x60);
    if (0x3f800000 < (int)fVar16) {
      fVar16 = fVar25;
    }
    local_78 = VectorFloatToUnsigned(fVar16 * 255.0,3);
  }
  else {
    iVar5 = *(int *)(param_3 + 0xdc);
    DAT_008c3464 = *(int *)(param_3 + 0x268);
    DAT_008c3460 = *(int *)(param_3 + 0x264);
    uVar9 = *(undefined4 *)(iVar5 + 0x3e0);
    uVar10 = *(undefined4 *)(iVar5 + 0x3e4);
    uVar12 = *(undefined4 *)(iVar5 + 0x368);
    uVar20 = *(undefined4 *)(iVar5 + 0x36c);
    uVar13 = *(undefined4 *)(iVar5 + 0x32c);
    uVar19 = *(undefined4 *)(iVar5 + 0x330);
    uVar8 = *(undefined4 *)(iVar5 + 0x334);
    iVar5 = *(int *)(param_3 + 0xe0) + DAT_008c3464 * 0x10;
    fVar16 = *(float *)(iVar5 + 0xbc) * fVar11 * local_68[DAT_008c3464 * 3];
    if (0x3f800000 < (int)fVar16) {
      fVar16 = fVar25;
    }
    fVar17 = *(float *)(iVar5 + 0xc0) * fVar21 * local_68[DAT_008c3464 * 3 + 1];
    uVar23 = VectorFloatToUnsigned(fVar16 * 255.0,3);
    if (0x3f800000 < (int)fVar17) {
      fVar17 = fVar25;
    }
    fVar16 = *(float *)(iVar5 + 0xc4) * fVar22 * local_68[DAT_008c3464 * 3 + 2];
    uVar18 = VectorFloatToUnsigned(fVar17 * 255.0,3);
    if (0x3f800000 < (int)fVar16) {
      fVar16 = fVar25;
    }
    fVar17 = *(float *)(*(int *)(param_3 + 0xe0) + 0x60);
    local_78 = VectorFloatToUnsigned(fVar16 * 255.0,3);
  }
  fVar14 = fVar17 * fVar14;
joined_r0x00537130:
  local_78 = local_78 & 0xff;
  if ((int)fVar14 < 0x3f800001) {
    fVar25 = fVar14;
  }
  uVar15 = VectorFloatToUnsigned(fVar25 * 255.0,3);
  local_74 = (undefined4 *)(uVar15 & 0xff);
  bVar7 = *(char *)(param_1 + 0x15) != '\0';
  iVar5 = 0;
  if (bVar7) {
    iVar5 = DAT_008c3468;
  }
  if (!bVar7 || iVar5 == 1) {
    fVar14 = *(float *)(param_3 + 0x94);
    fVar16 = *(float *)(param_3 + 0x1a4);
    DAT_008c3450[1] = 0xf02c0;
    DAT_008c3450[3] = 0xbf02c1;
    *DAT_008c3450 = 0x80000052;
    fVar24 = local_68[DAT_008c3460 * 3];
    fVar25 = local_68[DAT_008c3460 * 3 + 1];
    fVar17 = local_68[DAT_008c3460 * 3 + 2];
    DAT_008c3450[2] = fVar14 * fVar16 * fVar26;
    DAT_008c3450[4] = fVar22 * fVar17;
    DAT_008c3450[5] = fVar21 * fVar25;
    DAT_008c3450[6] = fVar11 * fVar24;
    DAT_008c3450[7] = uVar10;
    DAT_008c3450[8] = uVar9;
    DAT_008c3450[9] = uVar20;
    DAT_008c3450[10] = uVar12;
    DAT_008c3450[0xb] = 0;
    DAT_008c3450[0xc] = uVar8;
    DAT_008c3450[0xd] = uVar19;
    DAT_008c3450[0xe] = uVar13;
    DAT_008c3450[0xf] = 0;
    DAT_008c3450 = DAT_008c3450 + 0x10;
  }
  iVar5 = param_3 + param_4;
  cVar1 = *(char *)(iVar5 + 0x278);
  *(char *)(param_1 + 0x16) = cVar1;
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(iVar5 + 0x274);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(iVar5 + 0x276);
  if (cVar1 == '\0') {
    DAT_008c345c = 10;
  }
  else {
    DAT_008c345c = 7;
  }
  local_70 = param_4;
  DAT_008c3450 = (undefined4 *)
                 fn_006dc64c(param_3 + 0x240,DAT_008c3450,uVar23 & 0xff,uVar18 & 0xff);
  DAT_008c3458 = *(undefined4 *)(param_1 + 4);
  DAT_008c346c = *(undefined4 *)(*(int *)(param_3 + 0x1c) + 0x21c);
  DAT_008c3470 = *(undefined4 *)(*(int *)(param_3 + 0x1c) + 0x220);
  local_50[0] = 0;
  local_50[1] = 1;
  local_50[2] = 2;
  local_50[3] = 3;
  iVar5 = local_50[(int)*(char *)(param_1 + 0x17) | (int)*(char *)(param_1 + 0x18) << 1];
  if (*(char *)(param_1 + 0x16) == '\0') {
    iVar5 = iVar5 + 8;
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    iVar5 = iVar5 + 4;
  }
  if ((*(char *)(param_1 + 0x15) != '\0') && (DAT_008c3468 == 0)) {
    iVar5 = -1;
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    if (param_4 == 0) {
      iVar6 = *(int *)(param_3 + 0xf8);
    }
    else {
      iVar6 = *(int *)(param_3 + 0xfc);
    }
    if (iVar6 == 0) {
      return -1;
    }
  }
  return iVar5;
}


