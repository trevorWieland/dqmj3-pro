#include "0053a494_0053a6a0.h"



void fn_0053a6a0(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  uVar7 = 0;
  iVar4 = *(int *)(param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(iVar4 + 400);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(iVar4 + 0x2c4);
  uVar15 = VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x31c),(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(param_1 + 0x170) = uVar15;
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(iVar4 + 0x2d8);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(iVar4 + 0x2dc);
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(iVar4 + 0x2b0);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(iVar4 + 0x290);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(iVar4 + 0x294);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(iVar4 + 0x298);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(iVar4 + 0x2a0);
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(iVar4 + 0x2a4);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(iVar4 + 0x2a8);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(iVar4 + 0x284);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(iVar4 + 0x288);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(iVar4 + 0x28c);
  *(undefined4 *)(param_1 + 0x1b0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(iVar4 + 0x208);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(iVar4 + 0x20c);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(iVar4 + 0x210);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(iVar4 + 0x214);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(iVar4 + 0x218);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(iVar4 + 0x21c);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(iVar4 + 0x220);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(iVar4 + 0x224);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(iVar4 + 0x228);
  *(float *)(param_1 + 0x174) = *(float *)(iVar4 + 0x208) + *(float *)(param_1 + 0xa8);
  *(float *)(param_1 + 0x178) = *(float *)(iVar4 + 0x20c) + *(float *)(param_1 + 0xac);
  *(float *)(param_1 + 0x17c) = *(float *)(iVar4 + 0x210) + *(float *)(param_1 + 0xb0);
  *(float *)(param_1 + 0x180) = *(float *)(iVar4 + 0x214) + *(float *)(param_1 + 0xb4);
  *(float *)(param_1 + 0x184) = *(float *)(iVar4 + 0x218) + *(float *)(param_1 + 0xb8);
  *(float *)(param_1 + 0x188) = *(float *)(iVar4 + 0x21c) + *(float *)(param_1 + 0xbc);
  *(float *)(param_1 + 0x18c) = *(float *)(iVar4 + 0x220) + *(float *)(param_1 + 0xc0);
  *(float *)(param_1 + 400) = *(float *)(iVar4 + 0x224) + *(float *)(param_1 + 0xc4);
  *(float *)(param_1 + 0x194) = *(float *)(iVar4 + 0x228) + *(float *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(iVar4 + 0x188);
  iVar4 = *(int *)(param_1 + 0x100);
  if (iVar4 != 0) {
    iVar5 = iVar4 + 8;
    *(undefined4 *)(param_1 + 0x104) = 0;
    if (*(int *)(iVar4 + 4) != 0) {
      do {
        *(int *)(param_1 + *(int *)(param_1 + 0x104) * 4 + 0x108) = iVar5;
        *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
        if (*(int *)(iVar5 + 8) == 8) {
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
        }
        if (*(int *)(iVar5 + 8) == 5) {
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
        }
        iVar4 = *(int *)(iVar5 + 8);
        if ((iVar4 == 8 || iVar4 == 5) || iVar4 == 2) {
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
        }
        uVar7 = uVar7 + 1;
        iVar5 = iVar5 + *(int *)(iVar5 + 0x10);
      } while (uVar7 < *(uint *)(*(int *)(param_1 + 0x100) + 4));
    }
  }
  piVar6 = *(int **)(param_1 + 0xdc);
  if ((*piVar6 != 0) && ((piVar6[0x152] & 1U) != 0)) {
    *(int *)(param_1 + 0x23c) = piVar6[0x15c];
  }
  fVar27 = 6.8356525e+08;
  fVar30 = *(float *)(param_1 + 0x174);
  fVar20 = *(float *)(param_1 + 0x180) * 6.8356525e+08;
  fVar21 = *(float *)(param_1 + 0x178);
  fVar22 = *(float *)(param_1 + 0x17c);
  uVar15 = *(undefined4 *)(param_1 + 0x18c);
  uVar25 = *(undefined4 *)(param_1 + 400);
  uVar26 = *(undefined4 *)(param_1 + 0x194);
  fVar28 = *(float *)(param_1 + 0x184);
  fVar29 = *(float *)(param_1 + 0x188);
  uVar7 = fn_00191e2c();
  fVar24 = 5.9604645e-08;
  iVar4 = (uVar7 >> 0x18) * 0x10;
  fVar14 = (float)VectorUnsignedToFloat(uVar7 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar17 = *(float *)(&DAT_007f36ec + iVar4) +
           *(float *)(&DAT_007f36f0 + iVar4) * fVar14 * 5.9604645e-08;
  fVar23 = *(float *)(&DAT_007f36f4 + iVar4) +
           *(float *)(&DAT_007f36f8 + iVar4) * fVar14 * 5.9604645e-08;
  uVar7 = fn_00191e2c(fVar28 * fVar27);
  iVar4 = (uVar7 >> 0x18) * 0x10;
  fVar14 = (float)VectorUnsignedToFloat(uVar7 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar19 = *(float *)(&DAT_007f36ec + iVar4) + *(float *)(&DAT_007f36f0 + iVar4) * fVar14 * fVar24;
  fVar18 = *(float *)(&DAT_007f36f4 + iVar4) + *(float *)(&DAT_007f36f8 + iVar4) * fVar14 * fVar24;
  uVar7 = fn_00191e2c(fVar29 * fVar27);
  iVar4 = (uVar7 >> 0x18) * 0x10;
  fVar14 = (float)VectorUnsignedToFloat(uVar7 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar16 = *(float *)(&DAT_007f36f4 + iVar4) + *(float *)(&DAT_007f36f8 + iVar4) * fVar14 * fVar24;
  fVar14 = *(float *)(&DAT_007f36ec + iVar4) + *(float *)(&DAT_007f36f0 + iVar4) * fVar14 * fVar24;
  *(float *)(param_1 + 0x200) = fVar18 * fVar16 * fVar30;
  *(float *)(param_1 + 0x210) = fVar18 * fVar14 * fVar30;
  *(float *)(param_1 + 0x220) = -(fVar30 * fVar19);
  *(float *)(param_1 + 0x204) = fVar21 * (fVar17 * fVar19 * fVar16 - fVar23 * fVar14);
  *(float *)(param_1 + 0x214) = fVar21 * (fVar23 * fVar16 + fVar17 * fVar19 * fVar14);
  *(float *)(param_1 + 0x224) = fVar17 * fVar18 * fVar21;
  *(float *)(param_1 + 0x208) = (fVar17 * fVar14 + fVar23 * fVar16 * fVar19) * fVar22;
  *(float *)(param_1 + 0x218) = (fVar19 * fVar23 * fVar14 - fVar17 * fVar16) * fVar22;
  *(float *)(param_1 + 0x228) = fVar23 * fVar18 * fVar22;
  *(undefined4 *)(param_1 + 0x20c) = uVar15;
  *(undefined4 *)(param_1 + 0x21c) = uVar25;
  *(undefined4 *)(param_1 + 0x22c) = uVar26;
  uVar7 = fn_00191e2c(fVar20);
  iVar4 = (uVar7 >> 0x18) * 0x10;
  fVar14 = (float)VectorUnsignedToFloat(uVar7 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar17 = *(float *)(&DAT_007f36ec + iVar4) + *(float *)(&DAT_007f36f0 + iVar4) * fVar14 * fVar24;
  fVar20 = *(float *)(&DAT_007f36f4 + iVar4) + *(float *)(&DAT_007f36f8 + iVar4) * fVar14 * fVar24;
  uVar7 = fn_00191e2c(fVar28 * fVar27);
  iVar4 = (uVar7 >> 0x18) * 0x10;
  fVar14 = (float)VectorUnsignedToFloat(uVar7 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar19 = *(float *)(&DAT_007f36ec + iVar4) + *(float *)(&DAT_007f36f0 + iVar4) * fVar14 * fVar24;
  fVar18 = *(float *)(&DAT_007f36f4 + iVar4) + *(float *)(&DAT_007f36f8 + iVar4) * fVar14 * fVar24;
  uVar7 = fn_00191e2c(fVar29 * fVar27);
  iVar4 = (uVar7 >> 0x18) * 0x10;
  fVar14 = (float)VectorUnsignedToFloat(uVar7 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar16 = *(float *)(&DAT_007f36ec + iVar4) + *(float *)(&DAT_007f36f0 + iVar4) * fVar14 * fVar24;
  fVar14 = *(float *)(&DAT_007f36f4 + iVar4) + *(float *)(&DAT_007f36f8 + iVar4) * fVar14 * fVar24;
  *(float *)(param_1 + 0x1d0) = fVar18 * fVar14;
  *(float *)(param_1 + 0x1e0) = fVar18 * fVar16;
  *(float *)(param_1 + 0x1f0) = -fVar19;
  *(float *)(param_1 + 0x1d4) = fVar17 * fVar19 * fVar14 - fVar20 * fVar16;
  *(float *)(param_1 + 0x1e4) = fVar20 * fVar14 + fVar17 * fVar19 * fVar16;
  *(float *)(param_1 + 500) = fVar17 * fVar18;
  *(float *)(param_1 + 0x1d8) = fVar17 * fVar16 + fVar20 * fVar14 * fVar19;
  *(float *)(param_1 + 0x1e8) = fVar19 * fVar20 * fVar16 - fVar17 * fVar14;
  *(float *)(param_1 + 0x1f8) = fVar20 * fVar18;
  *(undefined4 *)(param_1 + 0x1dc) = uVar15;
  *(undefined4 *)(param_1 + 0x1ec) = uVar25;
  *(undefined4 *)(param_1 + 0x1fc) = uVar26;
  uVar9 = 0;
  iVar4 = *(int *)(param_1 + 0xdc);
  fVar14 = *(float *)(iVar4 + 0x374);
  uVar8 = *(uint *)(iVar4 + 0x188);
  bVar3 = fVar14 == 0.0;
  uVar7 = (uVar8 & 4) >> 2;
  uVar1 = (uVar8 & 0x100) >> 8;
  if (bVar3) {
    fVar14 = *(float *)(iVar4 + 0x378);
  }
  uVar2 = (uVar8 & 0x200) >> 9;
  uVar8 = (uVar8 & 0x2000) >> 0xd;
  if (bVar3 && (bVar3 && fVar14 == 0.0)) {
    fVar14 = *(float *)(iVar4 + 0x38c);
    bVar3 = fVar14 == 0.0;
    if (bVar3) {
      fVar14 = *(float *)(iVar4 + 0x390);
    }
    bVar12 = false;
    if (bVar3 && (bVar3 && fVar14 == 0.0)) {
      bVar12 = *(float *)(iVar4 + 0x3a4) == 0.0;
    }
    if (bVar12) goto LAB_0053ac14;
  }
  uVar9 = 1;
LAB_0053ac14:
  fVar14 = *(float *)(iVar4 + 0x304);
  iVar5 = *(int *)(iVar4 + 0x300);
  bVar3 = fVar14 == 0.0;
  if (bVar3) {
    fVar14 = *(float *)(iVar4 + 0x308);
  }
  bVar12 = fVar14 == 0.0;
  if (bVar3 && (bVar3 && bVar12)) {
    fVar14 = *(float *)(iVar4 + 0x30c);
  }
  *(undefined1 *)(param_1 + 0x291) = 0;
  bVar3 = (!bVar3 || (!bVar3 || !bVar12)) || fVar14 != 0.0;
  bVar12 = iVar5 != 0x3f800000;
  bVar13 = *(int *)(param_1 + 0xcc) == 2;
  if ((uVar7 & ~uVar1 & ~uVar2) != 0) {
    *(undefined1 *)(param_1 + 0x291) = 1;
  }
  if ((uVar1 & ~uVar7 & ~uVar2) != 0) {
    *(undefined1 *)(param_1 + 0x291) = 2;
  }
  uVar11 = uVar2 & ~(uVar7 | uVar1);
  uVar10 = (undefined1)uVar11;
  if (uVar11 != 0) {
    uVar10 = 3;
  }
  if (uVar11 != 0) {
    *(undefined1 *)(param_1 + 0x291) = uVar10;
  }
  if ((uVar1 & uVar7 & ~uVar2) != 0) {
    *(undefined1 *)(param_1 + 0x291) = 4;
  }
  if ((uVar7 & ~uVar1 & uVar2) != 0) {
    *(undefined1 *)(param_1 + 0x291) = 5;
  }
  if ((uVar2 & uVar1 & ~uVar7) != 0) {
    *(undefined1 *)(param_1 + 0x291) = 6;
  }
  *(undefined1 *)(param_1 + 0x292) = 0;
  if ((uVar8 & ~uVar9) != 0) {
    *(undefined1 *)(param_1 + 0x292) = 1;
  }
  if ((uVar9 & ~uVar8) != 0) {
    *(undefined1 *)(param_1 + 0x292) = 2;
  }
  if ((uVar9 & uVar8) != 0) {
    *(undefined1 *)(param_1 + 0x292) = 3;
  }
  *(undefined1 *)(param_1 + 0x290) = 0;
  if ((bool)(bVar3 & ~bVar12 & ~bVar13)) {
    *(undefined1 *)(param_1 + 0x290) = 1;
  }
  if ((bool)(bVar12 & ~bVar3 & ~bVar13)) {
    *(undefined1 *)(param_1 + 0x290) = 0;
  }
  if ((bool)(bVar13 & ~(bVar3 || bVar12))) {
    *(undefined1 *)(param_1 + 0x290) = 1;
  }
  if ((bool)((bVar3 && bVar12) & ~bVar13)) {
    *(undefined1 *)(param_1 + 0x290) = 4;
  }
  if ((bool)(bVar3 & ~bVar12 & bVar13)) {
    *(undefined1 *)(param_1 + 0x290) = 5;
  }
  if ((bool)(bVar12 & ~bVar3 & bVar13)) {
    *(undefined1 *)(param_1 + 0x290) = 6;
  }
  if (bVar13 && (bVar3 && bVar12)) {
    *(bool *)(param_1 + 0x290) = bVar13 && (bVar3 && bVar12) || bVar13;
  }
  *(undefined1 *)(param_1 + 0x293) = 0;
  *(undefined1 *)(param_1 + 0x294) = 0;
  *(undefined1 *)(param_1 + 0x295) = 0;
  if ((*(uint *)(iVar4 + 0x188) & 0x10) != 0) {
    *(undefined1 *)(param_1 + 0x293) = 1;
  }
  if ((*(uint *)(iVar4 + 0x188) & 0x80) != 0) {
    *(undefined1 *)(param_1 + 0x294) = 1;
  }
  if ((*(uint *)(iVar4 + 0x188) & 0x40) != 0) {
    *(undefined1 *)(param_1 + 0x295) = 1;
  }
  return;
}



void fn_0053a494(undefined4 *param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 1) != '\0') {
    if ((int *)param_1[6] != (int *)0x0) {
      if (param_1[4] != 0) {
        (**(code **)(*(int *)param_1[6] + 0xc))();
      }
      param_1[4] = 0;
      param_1[5] = 0;
    }
    if ((int *)param_1[9] != (int *)0x0) {
      if (param_1[7] != 0) {
        (**(code **)(*(int *)param_1[9] + 0xc))();
      }
      param_1[7] = 0;
      param_1[8] = 0;
    }
    if ((int *)param_1[0xc] != (int *)0x0) {
      if (param_1[10] != 0) {
        (**(code **)(*(int *)param_1[0xc] + 0xc))();
      }
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
    if ((int *)param_1[600] != (int *)0x0) {
      if (param_1[0x256] != 0) {
        (**(code **)(*(int *)param_1[600] + 0xc))();
      }
      param_1[0x256] = 0;
      param_1[599] = 0;
    }
    if ((int *)param_1[0x25b] != (int *)0x0) {
      if (param_1[0x259] != 0) {
        (**(code **)(*(int *)param_1[0x25b] + 0xc))();
      }
      param_1[0x259] = 0;
      param_1[0x25a] = 0;
    }
    if ((int *)param_1[0x25e] != (int *)0x0) {
      if (param_1[0x25c] != 0) {
        (**(code **)(*(int *)param_1[0x25e] + 0xc))();
      }
      param_1[0x25c] = 0;
      param_1[0x25d] = 0;
    }
    uVar1 = 0;
    do {
      if ((int *)param_1[uVar1 * 3 + 0xf] != (int *)0x0) {
        if (param_1[uVar1 * 3 + 0xd] != 0) {
          (**(code **)(*(int *)param_1[uVar1 * 3 + 0xf] + 0xc))();
        }
        param_1[uVar1 * 3 + 0xd] = 0;
        param_1[uVar1 * 3 + 0xe] = 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x1e);
    if (param_1[3] != 0) {
      fn_0017dbc0(param_1[3],0x102);
      param_1[3] = 0;
    }
    if (param_1[0x255] != 0) {
      fn_0017dbc0(param_1[0x255],0x102);
      param_1[0x255] = 0;
    }
    if (param_1[2] != 0) {
      (**(code **)(*(int *)*param_1 + 0xc))();
      param_1[2] = 0;
    }
    if (param_1[0x254] != 0) {
      (**(code **)(*(int *)*param_1 + 0xc))();
      param_1[0x254] = 0;
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}


