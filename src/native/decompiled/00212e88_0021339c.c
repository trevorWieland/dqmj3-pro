#include "00212e88_0021339c.h"



void fn_0021339c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  
  uVar17 = *(undefined4 *)(param_1 + 0x20);
  uVar18 = *(undefined4 *)(param_1 + 0x28);
  fVar19 = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0xe4) != 0) {
    iVar1 = fn_0017fde4();
    fVar10 = *(float *)(param_1 + 0x2c) * 40.743664;
    fVar8 = *(float *)(param_1 + 0x30) * 40.743664;
    fVar4 = *(float *)(param_1 + 0x34) * 40.743664;
    in_fpscr = in_fpscr & 0xfffffff;
    fVar13 = ABS(fVar8);
    fVar12 = ABS(fVar4);
    for (fVar14 = ABS(fVar10); 0x477fffff < (int)fVar14; fVar14 = fVar14 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar13; fVar13 = fVar13 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar12; fVar12 = fVar12 - 65536.0) {
    }
    uVar5 = VectorFloatToUnsigned(fVar14,3);
    uVar6 = VectorFloatToUnsigned(fVar13,3);
    uVar7 = VectorFloatToUnsigned(fVar12,3);
    uVar3 = uVar6 & 0xff;
    uVar2 = uVar5 & 0xff;
    fVar15 = (float)VectorUnsignedToFloat(uVar5 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar16 = (float)VectorUnsignedToFloat(uVar6 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar5 = uVar7 & 0xff;
    fVar11 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar9 = (float)(&DAT_007d6f20)[uVar2 * 4] +
            (fVar14 - fVar15) * (float)(&DAT_007d6f28)[uVar2 * 4];
    fVar14 = (float)(&DAT_007d6f24)[uVar2 * 4] +
             (fVar14 - fVar15) * (float)(&DAT_007d6f2c)[uVar2 * 4];
    fVar15 = (float)(&DAT_007d6f24)[uVar3 * 4] +
             (fVar13 - fVar16) * (float)(&DAT_007d6f2c)[uVar3 * 4];
    fVar13 = (float)(&DAT_007d6f20)[uVar3 * 4] +
             (fVar13 - fVar16) * (float)(&DAT_007d6f28)[uVar3 * 4];
    if (fVar10 < 0.0) {
      fVar9 = -fVar9;
    }
    fVar10 = (float)(&DAT_007d6f20)[uVar5 * 4] +
             (fVar12 - fVar11) * (float)(&DAT_007d6f28)[uVar5 * 4];
    fVar12 = (float)(&DAT_007d6f24)[uVar5 * 4] +
             (fVar12 - fVar11) * (float)(&DAT_007d6f2c)[uVar5 * 4];
    if (fVar8 < 0.0) {
      fVar13 = -fVar13;
    }
    if (fVar4 < 0.0) {
      fVar10 = -fVar10;
    }
    *(float *)(iVar1 + 0x4c) = fVar12 * fVar15;
    *(float *)(iVar1 + 0x5c) = fVar10 * fVar15;
    *(float *)(iVar1 + 0x70) = fVar9 * fVar15;
    *(float *)(iVar1 + 0x74) = fVar14 * fVar15;
    *(float *)(iVar1 + 0x50) = fVar9 * fVar12 * fVar13 - fVar14 * fVar10;
    *(float *)(iVar1 + 100) = fVar14 * fVar10 * fVar13 - fVar9 * fVar12;
    *(float *)(iVar1 + 0x54) = fVar9 * fVar10 + fVar14 * fVar12 * fVar13;
    *(float *)(iVar1 + 0x60) = fVar14 * fVar12 + fVar9 * fVar10 * fVar13;
    *(float *)(iVar1 + 0x6c) = -fVar13;
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x78) = 0;
    *(undefined4 *)(iVar1 + 0x58) = uVar17;
    *(float *)(iVar1 + 0x68) = fVar19;
    *(undefined4 *)(iVar1 + 0x78) = uVar18;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
    uVar17 = *(undefined4 *)(param_1 + 0x3c);
    uVar18 = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(iVar1 + 0x80) = uVar17;
    *(undefined4 *)(iVar1 + 0x84) = uVar18;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
    (**(code **)(**(int **)(param_1 + 0xe4) + 0x10))();
  }
  if (*(int *)(param_1 + 0xe8) == -1) {
    return;
  }
  fn_0023e574(*(undefined4 *)(DAT_008977e0 + 0x2c));
  return;
}



void fn_0021316c(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_24 [12];
  
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x44))(param_1,uVar2,0,1);
  if (*(char *)((int)param_1 + 0x1af) != '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1);
    (**(code **)(*param_1 + 0x20))(param_1);
    (**(code **)(*param_1 + 0x54))(param_1,(int)(char)param_1[0x6b]);
    param_1[0x68] = 0;
    param_1[0x69] = 0x3f800000;
    param_1[0x6a] = 0x3f800000;
    *(undefined1 *)(param_1 + 0x6b) = 0;
    *(undefined1 *)((int)param_1 + 0x1ad) = 0;
    *(undefined1 *)((int)param_1 + 0x1ae) = 0;
    *(undefined1 *)((int)param_1 + 0x1af) = 0;
  }
  if ((param_1[2] == 1) && (iVar3 = (**(code **)(*param_1 + 0x70))(param_1), iVar3 == 6)) {
    (**(code **)(*param_1 + 0xe0))(param_1,(int)*(char *)((int)param_1 + 0x1ae));
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  fn_0021629c(param_1);
  fn_001c6d34(auStack_24);
  uVar2 = fn_006b09bc(param_1);
  if (((*(char *)((int)param_1 + 0x16d) == '\0') &&
      (iVar3 = fn_0013ad98((int)*(short *)(param_1[0x67] + 2)), iVar3 == 0)) &&
     (iVar3 = fn_0013ad98(uVar2), iVar3 == 2)) {
    fn_006bb84c(param_1[0x5c],auStack_24,(int)(short)param_1[0x5a]);
  }
  else {
    fn_006bb6b0(param_1[0x5c],auStack_24,(int)(short)param_1[0x5a]);
  }
  iVar3 = fn_006a7f8c(auStack_24);
  cVar1 = '\0';
  if (iVar3 != 0) {
    cVar1 = (char)param_1[0xdb];
  }
  if (iVar3 != 0 && cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iVar3 = 9;
    }
    else {
      if (cVar1 != '\x02') goto LAB_0021336c;
      iVar3 = 10;
    }
    fn_00215b58(param_1,iVar3);
    if (param_1[iVar3 * 4 + 0x7b] == -1) {
      uVar2 = fn_00215b58(param_1);
      fn_00214c94(param_1,uVar2,2,1,param_1 + iVar3 * 4 + 0x7a);
    }
  }
LAB_0021336c:
  param_1[0xe7] = param_1[0xe7] & 0xfdffffff;
  return;
}



void fn_00213130(int param_1)

{
  fn_002181ec(param_1,param_1 + 0x20,100,999,0,0,1,100);
  return;
}



void fn_00212e88(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint in_fpscr;
  
  iVar1 = (**(code **)(*param_1 + 0xec))(param_1);
  if (iVar1 == 0) {
    fn_0017fde4(param_1[0x39]);
    iVar1 = fn_005f430c();
    if (iVar1 != 0) {
      fn_0017fde4(param_1[0x39]);
      fn_006ebe58();
      iVar1 = fn_005f4344();
      if (iVar1 != 0) {
        fn_0017fde4(param_1[0x39]);
        iVar1 = fn_006ebe58();
        fn_005f4344(iVar1 + 0x34);
      }
    }
    fn_001d9bc8(param_1);
  }
  else {
    uVar2 = param_1[0x4e];
    uVar4 = param_1[0xe7];
    param_1[0x4e] = uVar2 | 2;
    if ((uVar4 & 0xff) >> 6 == 1) {
      iVar3 = param_1[0x6d];
      iVar1 = param_1[0x6e];
      param_1[0x6d] = iVar3 + 1;
      if (iVar1 <= iVar3 + 1) {
        param_1[0x6d] = iVar1;
      }
      if (param_1[0x6d] == iVar1) {
        param_1[0x4e] = uVar2 & 0xfffffffd;
        param_1[0xe7] = uVar4 & 0xffffff3f;
      }
      VectorSignedToFloat(param_1[0x6d],(byte)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
      (**(code **)(*param_1 + 0x58))(param_1,1);
    }
    else if ((uVar4 & 0xff) >> 6 == 2) {
      iVar1 = param_1[0x6d] + -1;
      param_1[0x6d] = iVar1;
      if (iVar1 < 1) {
        if (iVar1 == 0 && (uVar4 & 0x10) == 0) {
          (**(code **)(*param_1 + 0x54))(param_1,0);
        }
        param_1[0x6d] = 0;
        if ((param_1[0xe7] & 0x20U) == 0) {
          param_1[0xe7] = param_1[0xe7] & 0xffffff3f;
        }
        param_1[0x4e] = param_1[0x4e] | 4;
        (**(code **)(*param_1 + 0x58))(param_1,0);
        (**(code **)(*param_1 + 0xd8))(param_1);
      }
      VectorSignedToFloat(param_1[0x6d],(byte)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(param_1[0x6e],(byte)(in_fpscr >> 0x16) & 3);
    }
    else {
      param_1[0xe7] = uVar4 & 0xffffff3f;
    }
    if (*(char *)((int)param_1 + 0x59) != '\0') {
      (**(code **)(*param_1 + 0xf8))(param_1);
      (**(code **)(*param_1 + 0xd8))(param_1);
    }
  }
  uVar2 = 0;
  do {
    if (param_1[uVar2 * 4 + 0x7b] != -1) {
      fn_0023dc64(*(undefined4 *)(DAT_008977e0 + 0x2c));
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x10);
  uVar2 = 0;
  if (param_1[0xbb] - param_1[0xba] >> 4 != 0) {
    do {
      if (*(int *)(param_1[0xba] + uVar2 * 0x10 + 4) != -1) {
        fn_0023dc64(*(undefined4 *)(DAT_008977e0 + 0x2c));
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < (uint)(param_1[0xbb] - param_1[0xba] >> 4));
  }
  return;
}


