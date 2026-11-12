#include "0053b4ac_0053bfbc.h"



void fn_0053bfbc(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_3 + 0xe0);
  *(undefined4 *)(param_3 + 0x284) = 0;
  if (iVar2 == 0) {
    return;
  }
  iVar1 = fn_00536d0c(param_1 + 4,param_2,param_3,0);
  if (param_4 == 0) {
    do {
      if (*(int *)(iVar2 + 4) < *(int *)(iVar2 + 8)) {
        if (iVar1 < 0) {
          fn_00534a50(param_3,iVar2);
        }
        else {
          fn_0053735c(iVar2,param_5);
          (*(code *)(&PTR_LAB_008c3410)[iVar1])(iVar2);
        }
        *(int *)(param_3 + 0x284) = *(int *)(param_3 + 0x284) + 1;
        iVar3 = *(int *)(iVar2 + 0x14c);
      }
      else {
        iVar3 = *(int *)(iVar2 + 0x14c);
        fn_0053138c(iVar2);
      }
      iVar2 = iVar3;
    } while (iVar3 != 0);
  }
  else {
    do {
      if (iVar1 < 0) break;
      fn_00538498(iVar2,param_5);
      (*(code *)(&PTR_LAB_008c3410)[iVar1])(iVar2);
      *(int *)(param_3 + 0x284) = *(int *)(param_3 + 0x284) + 1;
      iVar2 = *(int *)(iVar2 + 0x14c);
    } while (iVar2 != 0);
  }
  fn_00535ec4(param_1 + 4);
  return;
}



void fn_0053b9a4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint in_fpscr;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar2 = 0;
  if (param_2[0x41] != 0) {
    do {
      uVar3 = *param_2;
      fn_0053b4ac(param_2[uVar2 + 0x42]);
      iVar1 = uVar2 + 0x42;
      uVar2 = uVar2 + 1;
      param_2[*(int *)(param_2[iVar1] + 8) + 0x5b] = uVar3;
    } while (uVar2 < (uint)param_2[0x41]);
  }
  if ((param_2[2] & 4) != 0) {
    fVar16 = 6.8356525e+08;
    fVar19 = (float)param_2[0x5d];
    fVar9 = (float)param_2[0x60] * 6.8356525e+08;
    fVar10 = (float)param_2[0x5e];
    fVar11 = (float)param_2[0x5f];
    fVar18 = (float)param_2[0x61];
    fVar17 = (float)param_2[0x62];
    uVar3 = param_2[99];
    uVar14 = param_2[100];
    uVar15 = param_2[0x65];
    uVar2 = fn_00191e2c(fVar9);
    fVar13 = 5.9604645e-08;
    iVar1 = (uVar2 >> 0x18) * 0x10;
    fVar4 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = *(float *)(&DAT_007f36ec + iVar1) +
            *(float *)(&DAT_007f36f0 + iVar1) * fVar4 * 5.9604645e-08;
    fVar12 = *(float *)(&DAT_007f36f4 + iVar1) +
             *(float *)(&DAT_007f36f8 + iVar1) * fVar4 * 5.9604645e-08;
    uVar2 = fn_00191e2c(fVar18 * fVar16);
    iVar1 = (uVar2 >> 0x18) * 0x10;
    fVar4 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = *(float *)(&DAT_007f36ec + iVar1) + *(float *)(&DAT_007f36f0 + iVar1) * fVar4 * fVar13;
    fVar7 = *(float *)(&DAT_007f36f4 + iVar1) + *(float *)(&DAT_007f36f8 + iVar1) * fVar4 * fVar13;
    uVar2 = fn_00191e2c(fVar17 * fVar16);
    iVar1 = (uVar2 >> 0x18) * 0x10;
    fVar4 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = *(float *)(&DAT_007f36f4 + iVar1) + *(float *)(&DAT_007f36f8 + iVar1) * fVar4 * fVar13;
    fVar4 = *(float *)(&DAT_007f36ec + iVar1) + *(float *)(&DAT_007f36f0 + iVar1) * fVar4 * fVar13;
    param_2[0x80] = fVar7 * fVar5 * fVar19;
    param_2[0x84] = fVar7 * fVar4 * fVar19;
    param_2[0x88] = -(fVar19 * fVar8);
    param_2[0x81] = fVar10 * (fVar6 * fVar8 * fVar5 - fVar12 * fVar4);
    param_2[0x85] = fVar10 * (fVar12 * fVar5 + fVar6 * fVar8 * fVar4);
    param_2[0x89] = fVar6 * fVar7 * fVar10;
    param_2[0x82] = (fVar6 * fVar4 + fVar12 * fVar5 * fVar8) * fVar11;
    param_2[0x86] = (fVar8 * fVar12 * fVar4 - fVar6 * fVar5) * fVar11;
    param_2[0x8a] = fVar12 * fVar7 * fVar11;
    param_2[0x83] = uVar3;
    param_2[0x87] = uVar14;
    param_2[0x8b] = uVar15;
    uVar2 = fn_00191e2c(fVar9);
    iVar1 = (uVar2 >> 0x18) * 0x10;
    fVar4 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = *(float *)(&DAT_007f36ec + iVar1) + *(float *)(&DAT_007f36f0 + iVar1) * fVar4 * fVar13;
    fVar9 = *(float *)(&DAT_007f36f4 + iVar1) + *(float *)(&DAT_007f36f8 + iVar1) * fVar4 * fVar13;
    uVar2 = fn_00191e2c(fVar18 * fVar16);
    iVar1 = (uVar2 >> 0x18) * 0x10;
    fVar4 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = *(float *)(&DAT_007f36ec + iVar1) + *(float *)(&DAT_007f36f0 + iVar1) * fVar4 * fVar13;
    fVar8 = *(float *)(&DAT_007f36f4 + iVar1) + *(float *)(&DAT_007f36f8 + iVar1) * fVar4 * fVar13;
    uVar2 = fn_00191e2c(fVar17 * fVar16);
    iVar1 = (uVar2 >> 0x18) * 0x10;
    fVar4 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = *(float *)(&DAT_007f36ec + iVar1) + *(float *)(&DAT_007f36f0 + iVar1) * fVar4 * fVar13;
    fVar4 = *(float *)(&DAT_007f36f4 + iVar1) + *(float *)(&DAT_007f36f8 + iVar1) * fVar4 * fVar13;
    param_2[0x74] = fVar8 * fVar4;
    param_2[0x78] = fVar8 * fVar5;
    param_2[0x7c] = -fVar7;
    param_2[0x75] = fVar6 * fVar7 * fVar4 - fVar9 * fVar5;
    param_2[0x79] = fVar9 * fVar4 + fVar6 * fVar7 * fVar5;
    param_2[0x7d] = fVar6 * fVar8;
    param_2[0x76] = fVar6 * fVar5 + fVar9 * fVar4 * fVar7;
    param_2[0x7a] = fVar7 * fVar9 * fVar5 - fVar6 * fVar4;
    param_2[0x7e] = fVar9 * fVar8;
    param_2[0x77] = uVar3;
    param_2[0x7b] = uVar14;
    param_2[0x7f] = uVar15;
  }
  return;
}



void fn_0053b8b8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  *(undefined4 *)(param_2 + 0x284) = 0;
  iVar1 = *(int *)(param_2 + 0xe0);
  bVar3 = (*(uint *)(*(int *)(param_2 + 0xdc) + 4) & 0x400) != 0;
  if (bVar3) {
    iVar1 = *(int *)(param_2 + 0xe8);
  }
  if (iVar1 != 0) {
    if (bVar3) {
      do {
        if (*(int *)(iVar1 + 4) < *(int *)(iVar1 + 8)) {
          fn_00534618(param_2,iVar1);
          *(int *)(param_2 + 0x284) = *(int *)(param_2 + 0x284) + 1;
          iVar2 = *(int *)(iVar1 + 0x148);
        }
        else {
          iVar2 = *(int *)(iVar1 + 0x148);
          fn_0053138c(iVar1);
        }
        iVar1 = iVar2;
      } while (iVar2 != 0);
      return;
    }
    do {
      if (*(int *)(iVar1 + 4) < *(int *)(iVar1 + 8)) {
        fn_00534618(param_2,iVar1);
        *(int *)(param_2 + 0x284) = *(int *)(param_2 + 0x284) + 1;
        iVar2 = *(int *)(iVar1 + 0x14c);
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x14c);
        fn_0053138c(iVar1);
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
  }
  return;
}



void fn_0053b724(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  
  if ((*(uint *)(param_3 + 8) & 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0053b8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_008c0468)[*(int *)(param_2 + 0x250)])(param_3);
    return;
  }
  fVar8 = *(float *)(param_3 + 0x34);
  fVar9 = *(float *)(param_3 + 0x44);
  fVar10 = *(float *)(param_3 + 0x54);
  fVar7 = 0.0;
  fVar12 = *(float *)(param_3 + 0x98);
  fVar13 = *(float *)(param_3 + 0x9c);
  fVar14 = *(float *)(param_3 + 0xa0);
  fVar2 = SQRT((fVar12 - fVar8) * (fVar12 - fVar8) + (fVar13 - fVar9) * (fVar13 - fVar9) +
               (fVar14 - fVar10) * (fVar14 - fVar10));
  if (fVar2 < *(float *)(param_2 + 0x2c0)) {
    fVar2 = fVar7;
  }
  if (fVar2 == 0.0) {
    fVar2 = *(float *)(param_2 + 700);
  }
  else {
    fVar4 = *(float *)(param_2 + 700);
    if ((fVar2 < *(float *)(param_2 + 700)) ||
       (fVar4 = *(float *)(param_2 + 0x2b8), *(float *)(param_2 + 0x2b8) < fVar2)) {
      fVar2 = fVar4;
    }
  }
  uVar15 = 0x3f800000;
  fVar11 = *(float *)(param_3 + 0xa4) + fVar2;
  fVar4 = fVar7;
  if (*(float *)(param_2 + 0x2b4) != 0.0) {
    fVar4 = 1.0 / *(float *)(param_2 + 0x2b4);
  }
  fVar4 = fVar11 * fVar4;
  if (fVar2 != 0.0) {
    fVar7 = 1.0 / fVar2;
  }
  iVar1 = 0;
  if (0 < (int)fVar4) {
    do {
      fVar11 = fVar11 - *(float *)(param_2 + 0x2b4);
      fVar2 = fVar11 * fVar7;
      fVar5 = (float)uVar15 - fVar2;
      fVar3 = fVar8 * fVar5 + fVar12 * fVar2;
      fVar6 = fVar9 * fVar5 + fVar13 * fVar2;
      fVar2 = fVar10 * fVar5 + fVar14 * fVar2;
      *(float *)(param_3 + 0x34) = fVar3;
      *(float *)(param_3 + 0x44) = fVar6;
      *(float *)(param_3 + 0x54) = fVar2;
      *(float *)(param_3 + 100) = fVar3;
      *(float *)(param_3 + 0x74) = fVar6;
      *(float *)(param_3 + 0x84) = fVar2;
      (*(code *)(&PTR_LAB_008c0468)[*(int *)(param_2 + 0x250)])(param_3);
      *(float *)(param_3 + 0x34) = fVar8;
      *(float *)(param_3 + 100) = fVar8;
      *(float *)(param_3 + 0x44) = fVar9;
      *(float *)(param_3 + 0x74) = fVar9;
      *(float *)(param_3 + 0x54) = fVar10;
      iVar1 = iVar1 + 1;
      *(float *)(param_3 + 0x84) = fVar10;
    } while (iVar1 < (int)fVar4);
  }
  *(float *)(param_3 + 0xa4) = fVar11;
  return;
}



undefined4 fn_0053b5f0(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_3 + 0x284) = 0;
  fn_00537f44(param_1 + 4);
  iVar3 = *(int *)(param_3 + 0xe0);
  if (iVar3 == 0) {
    return param_2;
  }
  iVar1 = fn_00536d0c(param_1 + 4,param_2,param_3,0);
  if (param_4 == 0) {
    do {
      if (*(int *)(iVar3 + 4) < *(int *)(iVar3 + 8)) {
        if (iVar1 < 0) {
          fn_00534618(param_3,iVar3);
        }
        else {
          fn_0053661c(iVar3,param_5);
          (*(code *)(&PTR_LAB_008c3410)[iVar1])(iVar3);
        }
        *(int *)(param_3 + 0x284) = *(int *)(param_3 + 0x284) + 1;
        iVar4 = *(int *)(iVar3 + 0x14c);
      }
      else {
        iVar4 = *(int *)(iVar3 + 0x14c);
        fn_0053138c(iVar3);
      }
      iVar3 = iVar4;
    } while (iVar4 != 0);
  }
  else {
    do {
      if (iVar1 < 0) break;
      fn_005381ac(iVar3,param_5);
      (*(code *)(&PTR_LAB_008c3410)[iVar1])(iVar3);
      *(int *)(param_3 + 0x284) = *(int *)(param_3 + 0x284) + 1;
      iVar3 = *(int *)(iVar3 + 0x14c);
    } while (iVar3 != 0);
  }
  uVar2 = fn_00535ec4(param_1 + 4);
  return uVar2;
}



void fn_0053b4ac(uint *param_1)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float in_s0;
  
  pfVar5 = (float *)(param_1 + 5);
  if (*param_1 == 1) {
    return;
  }
  if (param_1[3] == 0) {
    if (in_s0 <= *pfVar5) {
      return;
    }
    if (pfVar5[*param_1 * 2 + -2] <= in_s0) {
      return;
    }
  }
  else {
    fn_001a23a8();
    if (in_s0 <= *pfVar5) {
      return;
    }
  }
  uVar4 = *param_1;
  iVar3 = -1;
  uVar1 = 0;
  if (uVar4 != 0) {
    do {
      if (in_s0 < pfVar5[uVar1 * 2]) break;
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 1;
    } while (uVar1 < uVar4);
  }
  pfVar5 = pfVar5 + iVar3 * 2;
  pfVar2 = pfVar5;
  if (uVar4 != iVar3 + 1U) {
    pfVar2 = pfVar5 + 2;
  }
  if (*pfVar2 - *pfVar5 == 0.0) {
    return;
  }
  return;
}


