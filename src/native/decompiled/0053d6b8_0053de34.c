#include "0053d6b8_0053de34.h"



void fn_0053de34(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_008c3474;
  iVar1 = DAT_008c3450;
  DAT_008c3454 = DAT_008c3454 + 1;
  if (DAT_008c3454 == 8) {
    fn_001694e4(DAT_008c3450,*(undefined4 *)(DAT_008c3474 + 0x1c),
                 *(int *)(DAT_008c3474 + 0x20) << 2);
    iVar2 = DAT_008c3454;
    DAT_008c3450 = iVar1 + *(int *)(iVar3 + 0x20) * 4;
    DAT_008c3454 = 0;
    DAT_008c3458 = DAT_008c3458 + iVar2;
  }
  return;
}



void fn_0053de24(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  fn_0053dea0();
  iVar3 = DAT_008c3474;
  iVar1 = DAT_008c3450;
  DAT_008c3454 = DAT_008c3454 + 1;
  if (DAT_008c3454 == 8) {
    fn_001694e4(DAT_008c3450,*(undefined4 *)(DAT_008c3474 + 0x1c),
                 *(int *)(DAT_008c3474 + 0x20) << 2,in_r3,unaff_r4);
    iVar2 = DAT_008c3454;
    DAT_008c3450 = iVar1 + *(int *)(iVar3 + 0x20) * 4;
    DAT_008c3454 = 0;
    DAT_008c3458 = DAT_008c3458 + iVar2;
  }
  return;
}



void fn_0053db54(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  iVar6 = *(int *)(param_1 + 0x144);
  iVar7 = *(int *)(param_1 + 8);
  iVar2 = fn_00300f74(iVar7,*(undefined4 *)(iVar6 + param_2 * 4 + 0x4a8));
  if (iVar2 == 0) {
    iVar2 = iVar7;
  }
  iVar7 = *(int *)(param_1 + 4) + -1;
  if (*(int *)(iVar6 + param_2 * 4 + 0x4b0) != 0) {
    iVar7 = *(int *)(param_1 + 4) + -1 + (*(uint *)(param_1 + 0x15c) >> 6);
  }
  fn_00300f74(iVar7,iVar2);
  iVar9 = param_2 * 0x30 + 0x434;
  iVar5 = param_2 * 0x30 + 0x438;
  iVar4 = param_2 * 0x30 + 0x430;
  iVar3 = param_1 + param_2 * 0x10;
  iVar7 = (*(int *)(iVar6 + param_2 * 4 + 0x490) * iVar2) / 100;
  if (extraout_r1 < iVar7) {
    *(undefined4 *)(iVar3 + 0xbc) = *(undefined4 *)(iVar6 + iVar4);
    *(undefined4 *)(iVar3 + 0xc0) = *(undefined4 *)(*(int *)(param_1 + 0x144) + iVar9);
    *(undefined4 *)(iVar3 + 0xc4) = *(undefined4 *)(*(int *)(param_1 + 0x144) + iVar5);
    return;
  }
  iVar11 = param_2 * 0x30 + 0x448;
  iVar8 = param_2 * 0x30 + 0x444;
  iVar10 = param_2 * 0x30 + 0x440;
  iVar1 = (*(int *)(iVar6 + param_2 * 4 + 0x498) * iVar2) / 100;
  if (extraout_r1 < iVar1) {
    fVar13 = (float)VectorSignedToFloat(extraout_r1 - iVar7,(byte)(in_fpscr >> 0x16) & 3);
    fVar15 = (float)VectorSignedToFloat(iVar1 - iVar7,(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = *(float *)(iVar6 + iVar4);
    fVar17 = *(float *)(iVar6 + iVar8);
    fVar16 = *(float *)(iVar9 + iVar6);
    fVar14 = *(float *)(iVar11 + iVar6);
    fVar13 = fVar13 / fVar15;
    fVar15 = *(float *)(iVar6 + iVar5);
    *(float *)(iVar3 + 0xbc) = fVar12 + (*(float *)(iVar6 + iVar10) - fVar12) * fVar13;
    *(float *)(iVar3 + 0xc0) =
         *(float *)(iVar9 + *(int *)(param_1 + 0x144)) + (fVar17 - fVar16) * fVar13;
    *(float *)(iVar3 + 0xc4) =
         *(float *)(*(int *)(param_1 + 0x144) + iVar5) + (fVar14 - fVar15) * fVar13;
    return;
  }
  iVar4 = param_2 * 0x30 + 0x450;
  iVar5 = param_2 * 0x30 + 0x454;
  iVar7 = param_2 * 0x30 + 0x458;
  iVar2 = (*(int *)(iVar6 + param_2 * 4 + 0x4a0) * iVar2) / 100;
  if (extraout_r1 < iVar2) {
    fVar13 = (float)VectorSignedToFloat(extraout_r1 - iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = *(float *)(iVar10 + iVar6);
    fVar15 = (float)VectorSignedToFloat(iVar2 - iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar16 = *(float *)(iVar6 + iVar5);
    fVar17 = *(float *)(iVar6 + iVar8);
    fVar14 = *(float *)(iVar7 + iVar6);
    fVar13 = fVar13 / fVar15;
    fVar15 = *(float *)(iVar6 + iVar11);
    *(float *)(iVar3 + 0xbc) = fVar12 + (*(float *)(iVar6 + iVar4) - fVar12) * fVar13;
    *(float *)(iVar3 + 0xc0) =
         *(float *)(*(int *)(param_1 + 0x144) + iVar8) + (fVar16 - fVar17) * fVar13;
    *(float *)(iVar3 + 0xc4) =
         *(float *)(*(int *)(param_1 + 0x144) + iVar11) + (fVar14 - fVar15) * fVar13;
    return;
  }
  *(undefined4 *)(iVar3 + 0xbc) = *(undefined4 *)(iVar6 + iVar4);
  *(undefined4 *)(iVar3 + 0xc0) = *(undefined4 *)(*(int *)(param_1 + 0x144) + iVar5);
  *(undefined4 *)(iVar3 + 0xc4) = *(undefined4 *)(*(int *)(param_1 + 0x144) + iVar7);
  return;
}



void fn_0053da38(undefined4 param_1,int param_2)

{
  int iVar1;
  int unaff_r4;
  int *unaff_r6;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  bVar2 = **(int **)(param_2 + 0xdc) == 1;
  if (bVar2) {
    unaff_r6 = *(int **)(param_2 + 0xdc);
  }
  if (!bVar2) {
    unaff_r6 = (int *)0x0;
  }
  *(undefined4 *)(param_2 + 0x288) = 0;
  bVar2 = *(int *)(param_2 + 0x14) != 0;
  if (bVar2) {
    unaff_r4 = *(int *)(param_2 + 0xe4);
  }
  if (bVar2 && unaff_r4 != 0) {
    do {
      if (*(int *)(unaff_r4 + 4) < *(int *)(unaff_r4 + 8)) {
        if ((unaff_r6[0x152] & 0x40U) != 0) {
          uVar3 = *(undefined4 *)(param_2 + 0x5c);
          uVar4 = *(undefined4 *)(param_2 + 0x60);
          uVar5 = *(undefined4 *)(param_2 + 100);
          uVar6 = *(undefined4 *)(param_2 + 0x68);
          uVar7 = *(undefined4 *)(param_2 + 0x6c);
          uVar8 = *(undefined4 *)(param_2 + 0x70);
          uVar9 = *(undefined4 *)(param_2 + 0x74);
          *(undefined4 *)(unaff_r4 + 0x10c) = *(undefined4 *)(param_2 + 0x58);
          *(undefined4 *)(unaff_r4 + 0x110) = uVar3;
          *(undefined4 *)(unaff_r4 + 0x114) = uVar4;
          *(undefined4 *)(unaff_r4 + 0x118) = uVar5;
          *(undefined4 *)(unaff_r4 + 0x11c) = uVar6;
          *(undefined4 *)(unaff_r4 + 0x120) = uVar7;
          *(undefined4 *)(unaff_r4 + 0x124) = uVar8;
          *(undefined4 *)(unaff_r4 + 0x128) = uVar9;
          uVar3 = *(undefined4 *)(param_2 + 0x7c);
          uVar4 = *(undefined4 *)(param_2 + 0x80);
          uVar5 = *(undefined4 *)(param_2 + 0x84);
          *(undefined4 *)(unaff_r4 + 300) = *(undefined4 *)(param_2 + 0x78);
          *(undefined4 *)(unaff_r4 + 0x130) = uVar3;
          *(undefined4 *)(unaff_r4 + 0x134) = uVar4;
          *(undefined4 *)(unaff_r4 + 0x138) = uVar5;
          uVar3 = *(undefined4 *)(param_2 + 0x2c);
          uVar4 = *(undefined4 *)(param_2 + 0x30);
          uVar5 = *(undefined4 *)(param_2 + 0x34);
          uVar6 = *(undefined4 *)(param_2 + 0x38);
          uVar7 = *(undefined4 *)(param_2 + 0x3c);
          uVar8 = *(undefined4 *)(param_2 + 0x40);
          uVar9 = *(undefined4 *)(param_2 + 0x44);
          *(undefined4 *)(unaff_r4 + 0xdc) = *(undefined4 *)(param_2 + 0x28);
          *(undefined4 *)(unaff_r4 + 0xe0) = uVar3;
          *(undefined4 *)(unaff_r4 + 0xe4) = uVar4;
          *(undefined4 *)(unaff_r4 + 0xe8) = uVar5;
          *(undefined4 *)(unaff_r4 + 0xec) = uVar6;
          *(undefined4 *)(unaff_r4 + 0xf0) = uVar7;
          *(undefined4 *)(unaff_r4 + 0xf4) = uVar8;
          *(undefined4 *)(unaff_r4 + 0xf8) = uVar9;
          uVar3 = *(undefined4 *)(param_2 + 0x4c);
          uVar4 = *(undefined4 *)(param_2 + 0x50);
          uVar5 = *(undefined4 *)(param_2 + 0x54);
          *(undefined4 *)(unaff_r4 + 0xfc) = *(undefined4 *)(param_2 + 0x48);
          *(undefined4 *)(unaff_r4 + 0x100) = uVar3;
          *(undefined4 *)(unaff_r4 + 0x104) = uVar4;
          *(undefined4 *)(unaff_r4 + 0x108) = uVar5;
        }
        fn_005340d8(param_2,unaff_r4);
        *(int *)(param_2 + 0x288) = *(int *)(param_2 + 0x288) + 1;
        unaff_r4 = *(int *)(unaff_r4 + 0x14c);
      }
      else {
        *(undefined4 *)(unaff_r4 + 0x144) = 0;
        iVar1 = *(int *)(unaff_r4 + 0x14c);
        if (*(int *)(param_2 + 0xe4) == unaff_r4) {
          *(int *)(param_2 + 0xe4) = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(iVar1 + 0x148) = 0;
          }
        }
        else {
          if (iVar1 != 0) {
            *(undefined4 *)(iVar1 + 0x148) = *(undefined4 *)(unaff_r4 + 0x148);
          }
          *(undefined4 *)(*(int *)(unaff_r4 + 0x148) + 0x14c) = *(undefined4 *)(unaff_r4 + 0x14c);
        }
        unaff_r4 = *(int *)(unaff_r4 + 0x14c);
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
      }
    } while (unaff_r4 != 0);
  }
  return;
}



void fn_0053d6b8(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  *(undefined4 *)(param_2 + 0x284) = 0;
  iVar5 = *(int *)(param_2 + 0xe0);
  bVar7 = (*(uint *)(*(int *)(param_2 + 0xdc) + 4) & 0x400) != 0;
  if (bVar7) {
    iVar5 = *(int *)(param_2 + 0xe8);
  }
  if (iVar5 != 0) {
    if (bVar7) {
      do {
        if (*(int *)(iVar5 + 4) < *(int *)(iVar5 + 8)) {
          fn_00534ca4(param_2,iVar5);
          fn_0053c158(param_2,iVar5);
          *(int *)(param_2 + 0x284) = *(int *)(param_2 + 0x284) + 1;
          iVar6 = *(int *)(iVar5 + 0x148);
        }
        else {
          iVar2 = *(int *)(iVar5 + 0x154);
          iVar6 = *(int *)(iVar5 + 0x148);
          if (iVar2 != 0) {
            iVar3 = *(int *)(iVar5 + 0x144);
            uVar1 = *(ushort *)(iVar3 + 0x55a);
            if (*(int *)(iVar2 + 4) != *(int *)(iVar2 + 8)) {
              iVar4 = *(int *)(iVar2 + 4) + 1;
              *(int *)(iVar2 + 4) = iVar4;
              if (*(int *)((uint)uVar1 + iVar3 + 0x10) <= iVar4) {
                *(undefined4 *)(iVar2 + 4) = 0;
              }
              *(int *)(iVar2 + 0x580c) = *(int *)(iVar2 + 0x580c) + -1;
              iVar4 = *(int *)(iVar5 + 0x150);
              uVar8 = *(undefined4 *)(iVar4 + 0x5c);
              uVar9 = *(undefined4 *)(iVar4 + 0x60);
              uVar10 = *(undefined4 *)(iVar4 + 100);
              uVar11 = *(undefined4 *)(iVar4 + 0x68);
              uVar12 = *(undefined4 *)(iVar4 + 0x6c);
              uVar13 = *(undefined4 *)(iVar4 + 0x70);
              uVar14 = *(undefined4 *)(iVar4 + 0x74);
              *(undefined4 *)(iVar2 + 0x581c) = *(undefined4 *)(iVar4 + 0x58);
              *(undefined4 *)(iVar2 + 0x5820) = uVar8;
              *(undefined4 *)(iVar2 + 0x5824) = uVar9;
              *(undefined4 *)(iVar2 + 0x5828) = uVar10;
              *(undefined4 *)(iVar2 + 0x582c) = uVar11;
              *(undefined4 *)(iVar2 + 0x5830) = uVar12;
              *(undefined4 *)(iVar2 + 0x5834) = uVar13;
              *(undefined4 *)(iVar2 + 0x5838) = uVar14;
              uVar8 = *(undefined4 *)(iVar4 + 0x7c);
              uVar9 = *(undefined4 *)(iVar4 + 0x80);
              uVar10 = *(undefined4 *)(iVar4 + 0x84);
              *(undefined4 *)(iVar2 + 0x583c) = *(undefined4 *)(iVar4 + 0x78);
              *(undefined4 *)(iVar2 + 0x5840) = uVar8;
              *(undefined4 *)(iVar2 + 0x5844) = uVar9;
              *(undefined4 *)(iVar2 + 0x5848) = uVar10;
              *(float *)(iVar5 + 0x80) = *(float *)(iVar5 + 0x80) + *(float *)(iVar3 + 0x374);
              *(float *)(iVar5 + 0x84) = *(float *)(iVar5 + 0x84) + *(float *)(iVar3 + 0x378);
              *(float *)(iVar5 + 0x88) = *(float *)(iVar5 + 0x88) + *(float *)(iVar3 + 0x38c);
              *(float *)(iVar5 + 0x8c) = *(float *)(iVar5 + 0x8c) + *(float *)(iVar3 + 0x390);
              *(float *)(iVar5 + 0x74) = *(float *)(iVar5 + 0x74) + *(float *)(iVar3 + 0x3a4);
              *(float *)(iVar5 + 0xa0) = *(float *)(iVar5 + 0xa0) + *(float *)(iVar3 + 0x3ec);
              *(float *)(iVar5 + 0xa4) = *(float *)(iVar5 + 0xa4) + *(float *)(iVar3 + 0x3f0);
              *(float *)(iVar5 + 0xa8) = *(float *)(iVar5 + 0xa8) + *(float *)(iVar3 + 0x404);
              *(float *)(iVar5 + 0xac) = *(float *)(iVar5 + 0xac) + *(float *)(iVar3 + 0x408);
              *(float *)(iVar5 + 0x94) = *(float *)(iVar5 + 0x94) + *(float *)(iVar3 + 0x41c);
              *(int *)(iVar2 + 0x5818) = *(int *)(iVar2 + 0x5818) + 1;
              goto LAB_0053da28;
            }
          }
          fn_0053138c(iVar5);
        }
LAB_0053da28:
        iVar5 = iVar6;
        if (iVar6 == 0) {
          return;
        }
      } while( true );
    }
    do {
      if (*(int *)(iVar5 + 4) < *(int *)(iVar5 + 8)) {
        fn_00534ca4(param_2,iVar5);
        fn_0053c158(param_2,iVar5);
        *(int *)(param_2 + 0x284) = *(int *)(param_2 + 0x284) + 1;
        iVar6 = *(int *)(iVar5 + 0x14c);
      }
      else {
        iVar2 = *(int *)(iVar5 + 0x154);
        iVar6 = *(int *)(iVar5 + 0x14c);
        if (iVar2 != 0) {
          iVar3 = *(int *)(iVar5 + 0x144);
          uVar1 = *(ushort *)(iVar3 + 0x55a);
          if (*(int *)(iVar2 + 4) != *(int *)(iVar2 + 8)) {
            iVar4 = *(int *)(iVar2 + 4) + 1;
            *(int *)(iVar2 + 4) = iVar4;
            if (*(int *)((uint)uVar1 + iVar3 + 0x10) <= iVar4) {
              *(undefined4 *)(iVar2 + 4) = 0;
            }
            *(int *)(iVar2 + 0x580c) = *(int *)(iVar2 + 0x580c) + -1;
            iVar4 = *(int *)(iVar5 + 0x150);
            uVar8 = *(undefined4 *)(iVar4 + 0x5c);
            uVar9 = *(undefined4 *)(iVar4 + 0x60);
            uVar10 = *(undefined4 *)(iVar4 + 100);
            uVar11 = *(undefined4 *)(iVar4 + 0x68);
            uVar12 = *(undefined4 *)(iVar4 + 0x6c);
            uVar13 = *(undefined4 *)(iVar4 + 0x70);
            uVar14 = *(undefined4 *)(iVar4 + 0x74);
            *(undefined4 *)(iVar2 + 0x581c) = *(undefined4 *)(iVar4 + 0x58);
            *(undefined4 *)(iVar2 + 0x5820) = uVar8;
            *(undefined4 *)(iVar2 + 0x5824) = uVar9;
            *(undefined4 *)(iVar2 + 0x5828) = uVar10;
            *(undefined4 *)(iVar2 + 0x582c) = uVar11;
            *(undefined4 *)(iVar2 + 0x5830) = uVar12;
            *(undefined4 *)(iVar2 + 0x5834) = uVar13;
            *(undefined4 *)(iVar2 + 0x5838) = uVar14;
            uVar8 = *(undefined4 *)(iVar4 + 0x7c);
            uVar9 = *(undefined4 *)(iVar4 + 0x80);
            uVar10 = *(undefined4 *)(iVar4 + 0x84);
            *(undefined4 *)(iVar2 + 0x583c) = *(undefined4 *)(iVar4 + 0x78);
            *(undefined4 *)(iVar2 + 0x5840) = uVar8;
            *(undefined4 *)(iVar2 + 0x5844) = uVar9;
            *(undefined4 *)(iVar2 + 0x5848) = uVar10;
            *(float *)(iVar5 + 0x80) = *(float *)(iVar5 + 0x80) + *(float *)(iVar3 + 0x374);
            *(float *)(iVar5 + 0x84) = *(float *)(iVar5 + 0x84) + *(float *)(iVar3 + 0x378);
            *(float *)(iVar5 + 0x88) = *(float *)(iVar5 + 0x88) + *(float *)(iVar3 + 0x38c);
            *(float *)(iVar5 + 0x8c) = *(float *)(iVar5 + 0x8c) + *(float *)(iVar3 + 0x390);
            *(float *)(iVar5 + 0x74) = *(float *)(iVar5 + 0x74) + *(float *)(iVar3 + 0x3a4);
            *(float *)(iVar5 + 0xa0) = *(float *)(iVar5 + 0xa0) + *(float *)(iVar3 + 0x3ec);
            *(float *)(iVar5 + 0xa4) = *(float *)(iVar5 + 0xa4) + *(float *)(iVar3 + 0x3f0);
            *(float *)(iVar5 + 0xa8) = *(float *)(iVar5 + 0xa8) + *(float *)(iVar3 + 0x404);
            *(float *)(iVar5 + 0xac) = *(float *)(iVar5 + 0xac) + *(float *)(iVar3 + 0x408);
            *(float *)(iVar5 + 0x94) = *(float *)(iVar5 + 0x94) + *(float *)(iVar3 + 0x41c);
            *(int *)(iVar2 + 0x5818) = *(int *)(iVar2 + 0x5818) + 1;
            goto LAB_0053d884;
          }
        }
        fn_0053138c(iVar5);
      }
LAB_0053d884:
      iVar5 = iVar6;
    } while (iVar6 != 0);
  }
  return;
}


