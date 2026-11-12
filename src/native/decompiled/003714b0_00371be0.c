#include "003714b0_00371be0.h"



int fn_00371be0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_006b6e94();
  if (0 < iVar1) {
    do {
      uVar2 = fn_0014481c(DAT_008977e8);
      fn_006b6d3c(uVar2,iVar3);
      iVar1 = fn_006ba7d4();
      if (iVar1 == 0) {
        uVar2 = fn_0014481c(DAT_008977e8);
        iVar1 = fn_006b6d3c(uVar2,iVar3);
        iVar4 = iVar4 + (uint)*(byte *)(iVar1 + 0x57);
      }
      iVar3 = iVar3 + 1;
      fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b6e94();
    } while (iVar3 < iVar1);
  }
  return iVar4;
}



undefined4 fn_00371b44(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_006b6740();
  if (0 < iVar1) {
    do {
      uVar2 = fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b7068(uVar2,iVar4);
      iVar3 = fn_0068c570();
      if ((iVar3 != 0) && (*(byte *)(iVar1 + 0x53) == param_1)) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b6740();
    } while (iVar4 < iVar1);
  }
  return 0;
}



undefined4 *
fn_00371940(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &DAT_00828334;
  puVar1 = (undefined4 *)fn_00145b00(0x50,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    *puVar1 = *param_3;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    puVar1[3] = *param_4;
    puVar1[4] = uVar3;
    puVar1[5] = uVar4;
    puVar1[6] = param_2;
    iVar2 = fn_00145b00(0x24,&DAT_00812c8c);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = fn_006804ec(iVar2,3,puVar1[6]);
    }
    puVar1[7] = uVar3;
    puVar1[8] = 0;
    *(undefined1 *)(puVar1 + 9) = 0;
    puVar1[10] = param_5;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    fn_006802f0(puVar1[7]);
  }
  param_1[1] = puVar1;
  return param_1;
}



void fn_0037171c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_48 [10];
  
  iVar5 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar5 + 0x24) = 0;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  iVar1 = fn_0067efcc(*(undefined4 *)(iVar5 + 0x18),iVar5,0);
  iVar2 = fn_0067efcc(*(undefined4 *)(iVar5 + 0x18),iVar5 + 0xc,0);
  if (iVar1 < 0) {
LAB_003718f0:
    *(uint *)(iVar5 + 0x20) = *(uint *)(iVar5 + 0x20) | 1;
LAB_003718fc:
    if (-1 < iVar2) goto LAB_00371910;
  }
  else if (-1 < iVar2) {
    fn_006804d8(*(undefined4 *)(iVar5 + 0x1c),iVar1,iVar2);
    uVar7 = 0;
    if (*(int *)(iVar5 + 0x48) - *(int *)(iVar5 + 0x44) >> 4 != 0) {
      do {
        iVar3 = fn_0067f2d4(*(undefined4 *)(iVar5 + 0x18),local_48,10);
        if (0 < iVar3) {
          iVar6 = 0;
          do {
            fn_00681040(*(undefined4 *)(iVar5 + 0x1c),local_48[iVar6]);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar3);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)(*(int *)(iVar5 + 0x48) - *(int *)(iVar5 + 0x44) >> 4));
    }
    uVar7 = 0;
    iVar6 = *(int *)(iVar5 + 0x3c) - *(int *)(iVar5 + 0x38);
    iVar3 = iVar6 >> 0x1f;
    if (iVar6 / 0x18 + iVar3 != iVar3) {
      do {
        iVar3 = fn_0067efcc(*(undefined4 *)(iVar5 + 0x18),*(int *)(iVar5 + 0x38) + uVar7 * 0x18,0);
        iVar6 = fn_0067efcc(*(undefined4 *)(iVar5 + 0x18),
                             *(int *)(iVar5 + 0x38) + uVar7 * 0x18 + 0xc,0);
        if (-1 < iVar3 && -1 < iVar6) {
          fn_00680c44(*(undefined4 *)(iVar5 + 0x1c),iVar3);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)((*(int *)(iVar5 + 0x3c) - *(int *)(iVar5 + 0x38)) / 0x18));
    }
    uVar8 = *(uint *)(iVar5 + 0x30);
    uVar7 = *(uint *)(iVar5 + 0x2c);
    if (uVar7 != uVar8) {
      uVar4 = uVar7;
      if (uVar8 <= uVar7) {
        do {
          uVar4 = uVar4 + 0xc;
        } while (uVar4 != uVar8);
      }
      *(uint *)(iVar5 + 0x30) = uVar8 + ((int)(uVar8 - uVar7) / 0xc) * -0xc;
    }
    fn_0068031c(*(undefined4 *)(iVar5 + 0x1c));
    if (iVar1 < 0) goto LAB_003718f0;
    goto LAB_003718fc;
  }
  *(uint *)(iVar5 + 0x20) = *(uint *)(iVar5 + 0x20) | 2;
LAB_00371910:
  iVar3 = iVar1;
  if (-1 < iVar1) {
    iVar3 = iVar2;
  }
  bVar9 = iVar3 == 0;
  if (-1 < iVar1 && -1 < iVar2) {
    bVar9 = iVar1 == iVar2;
  }
  if (bVar9) {
    *(uint *)(iVar5 + 0x20) = *(uint *)(iVar5 + 0x20) | 4;
  }
  *(undefined1 *)(iVar5 + 0x24) = 1;
  return;
}



void fn_003714b0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar17 = *param_2;
  uVar18 = param_2[1];
  uVar19 = param_2[2];
  puVar9 = (uint *)(iVar1 + 0x38);
  puVar10 = *(undefined4 **)(iVar1 + 0x3c);
  uVar20 = *param_3;
  uVar21 = param_3[1];
  uVar22 = param_3[2];
  if (puVar10 != *(undefined4 **)(iVar1 + 0x40)) {
    *(undefined4 **)(iVar1 + 0x3c) = puVar10 + 6;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = uVar17;
      puVar10[1] = uVar18;
      puVar10[2] = uVar19;
      puVar10[3] = uVar20;
      puVar10[4] = uVar21;
      puVar10[5] = uVar22;
    }
    return;
  }
  uVar5 = (int)((int)puVar10 - *puVar9) / 0x18;
  if (uVar5 < (uint)((int)((int)*(undefined4 **)(iVar1 + 0x40) - *puVar9) / 0x18)) {
    *(undefined4 **)(iVar1 + 0x3c) = puVar10 + 6;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = puVar10[-6];
      puVar10[1] = puVar10[-5];
      puVar10[2] = puVar10[-4];
      puVar10[3] = puVar10[-3];
      puVar10[4] = puVar10[-2];
      puVar10[5] = puVar10[-1];
    }
    puVar6 = puVar10 + -6;
    puVar8 = puVar10;
    if (puVar10 < puVar6) {
      if (0 < (int)puVar6 - (int)puVar10) {
        uVar5 = ((int)puVar6 - (int)puVar10) / 0x18;
        if ((uVar5 & 1) != 0) {
          puVar6 = puVar10 + -0xc;
          puVar8 = puVar10 + -6;
          *puVar8 = *puVar6;
          puVar10[-5] = puVar10[-0xb];
          puVar10[-4] = puVar10[-10];
          puVar10[-3] = puVar10[-9];
          puVar10[-2] = puVar10[-8];
          puVar10[-1] = puVar10[-7];
        }
        for (iVar1 = (int)uVar5 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
          uVar12 = puVar6[-5];
          uVar13 = puVar6[-4];
          uVar14 = puVar6[-3];
          uVar15 = puVar6[-2];
          uVar16 = puVar6[-1];
          puVar8[-6] = puVar6[-6];
          puVar8[-5] = uVar12;
          puVar8[-4] = uVar13;
          puVar8[-3] = uVar14;
          puVar8[-2] = uVar15;
          puVar8[-1] = uVar16;
          uVar12 = puVar6[-0xb];
          uVar13 = puVar6[-10];
          uVar14 = puVar6[-9];
          uVar15 = puVar6[-8];
          uVar16 = puVar6[-7];
          puVar8[-0xc] = puVar6[-0xc];
          puVar8[-0xb] = uVar12;
          puVar8[-10] = uVar13;
          puVar8[-9] = uVar14;
          puVar8[-8] = uVar15;
          puVar8[-7] = uVar16;
          puVar8 = puVar8 + -0xc;
          puVar6 = puVar6 + -0xc;
        }
      }
    }
    else {
      while (puVar10 != puVar6) {
        uVar12 = puVar6[-5];
        uVar13 = puVar6[-4];
        uVar14 = puVar6[-3];
        uVar15 = puVar6[-2];
        uVar16 = puVar6[-1];
        puVar8[-6] = puVar6[-6];
        puVar8[-5] = uVar12;
        puVar8[-4] = uVar13;
        puVar8[-3] = uVar14;
        puVar8[-2] = uVar15;
        puVar8[-1] = uVar16;
        puVar8 = puVar8 + -6;
        puVar6 = puVar6 + -6;
      }
    }
    *puVar10 = uVar17;
    puVar10[1] = uVar18;
    puVar10[2] = uVar19;
    puVar10[3] = uVar20;
    puVar10[4] = uVar21;
    puVar10[5] = uVar22;
    return;
  }
  uVar11 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
  if (uVar11 < uVar5 + 0x20) {
    uVar11 = uVar5 + 0x20;
  }
  puVar2 = (undefined4 *)fn_00100fc6(uVar11 * 0x18,0);
  puVar8 = puVar2;
  for (puVar6 = (undefined4 *)*puVar9; puVar6 != puVar10; puVar6 = puVar6 + 6) {
    if (puVar8 != (undefined4 *)0x0) {
      uVar12 = puVar6[1];
      uVar13 = puVar6[2];
      uVar14 = puVar6[3];
      uVar15 = puVar6[4];
      uVar16 = puVar6[5];
      *puVar8 = *puVar6;
      puVar8[1] = uVar12;
      puVar8[2] = uVar13;
      puVar8[3] = uVar14;
      puVar8[4] = uVar15;
      puVar8[5] = uVar16;
    }
    puVar8 = puVar8 + 6;
  }
  puVar6 = puVar2 + ((int)((int)puVar10 - *puVar9) / 0x18) * 6;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = uVar17;
    puVar6[1] = uVar18;
    puVar6[2] = uVar19;
    puVar6[3] = uVar20;
    puVar6[4] = uVar21;
    puVar6[5] = uVar22;
  }
  puVar8 = *(undefined4 **)(iVar1 + 0x3c);
  puVar6 = puVar2 + ((int)((int)puVar10 - *puVar9) / 0x18) * 6;
  for (; puVar10 != puVar8; puVar10 = puVar10 + 6) {
    puVar3 = puVar6 + 6;
    if (puVar3 != (undefined4 *)0x0) {
      uVar17 = puVar10[1];
      uVar18 = puVar10[2];
      uVar19 = puVar10[3];
      uVar20 = puVar10[4];
      uVar21 = puVar10[5];
      *puVar3 = *puVar10;
      puVar6[7] = uVar17;
      puVar6[8] = uVar18;
      puVar6[9] = uVar19;
      puVar6[10] = uVar20;
      puVar6[0xb] = uVar21;
    }
    puVar6 = puVar3;
  }
  uVar4 = *puVar9;
  uVar7 = *(uint *)(iVar1 + 0x3c);
  uVar5 = uVar4;
  if (uVar7 < uVar4) {
    do {
      uVar5 = uVar5 + 0x18;
    } while (uVar5 != uVar7);
  }
  fn_001008c4(uVar4,(int)(*(int *)(iVar1 + 0x40) - uVar4) / 0x18,0);
  *puVar9 = (uint)puVar2;
  *(undefined4 **)(iVar1 + 0x3c) = puVar2 + ((int)(uVar7 - uVar4) / 0x18) * 6 + 6;
  *(undefined4 **)(iVar1 + 0x40) = puVar2 + uVar11 * 6;
  return;
}


