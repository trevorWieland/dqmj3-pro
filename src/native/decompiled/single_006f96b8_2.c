#include "single_006f96b8_2.h"



void fn_006f96b8(void)

{
  uint *puVar1;
  undefined1 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int in_r3;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int unaff_r7;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  uint in_fpscr;
  float fVar17;
  uint local_40 [6];
  
  puVar1 = DAT_008bfab0;
  iVar5 = 0;
  iVar6 = 0;
  iVar14 = *(int *)(DAT_008bf798 + 8);
  piVar3 = *(int **)(iVar14 + 0xc);
  if (piVar3 == (int *)0x0) {
    in_r3 = *(int *)(iVar14 + 0x1c);
  }
  if (piVar3 == (int *)0x0 && in_r3 == 0) {
    iVar15 = 0x8cd7;
  }
  else {
    iVar15 = 0x8cd6;
    if (piVar3 != (int *)0x0) {
      bVar16 = *piVar3 == 0;
      iVar5 = 0;
      if (!bVar16) {
        iVar5 = piVar3[3];
      }
      if (!bVar16 && iVar5 != 0) {
        iVar6 = piVar3[4];
      }
      if ((bVar16 || iVar5 == 0) || iVar6 == 0) goto LAB_006f976c;
    }
    piVar8 = *(int **)(iVar14 + 0x1c);
    if (piVar8 == (int *)0x0) {
LAB_006f9764:
      if (piVar3 != piVar8) {
        iVar15 = 0x8cd5;
      }
    }
    else {
      bVar16 = *piVar8 != 0;
      iVar10 = 0;
      if (bVar16) {
        iVar10 = piVar8[3];
      }
      if (bVar16 && iVar10 != 0) {
        unaff_r7 = piVar8[4];
      }
      if ((bVar16 && iVar10 != 0) && unaff_r7 != 0) {
        if ((iVar5 == 0) || ((iVar10 == iVar5 && (unaff_r7 == iVar6)))) goto LAB_006f9764;
        iVar15 = 0x8cd9;
      }
    }
  }
LAB_006f976c:
  if (iVar15 != 0x8cd5) {
    DAT_008bfab0[0x1a1] = 0;
    *(undefined1 *)(puVar1 + 0x1a4) = 0;
    *(undefined1 *)((int)puVar1 + 0x691) = 0;
    *(undefined1 *)((int)puVar1 + 0x692) = 0;
    return;
  }
  DAT_008bfab0[0x1a1] = 0x8cd5;
  if ((puVar1[2] & 0x100) != 0) {
    return;
  }
  puVar12 = *(uint **)(iVar14 + 0xc);
  puVar13 = *(uint **)(iVar14 + 0x1c);
  uVar7 = 0;
  uVar9 = 0;
  puVar11 = puVar1 + 0x201;
  if ((((puVar12 != (uint *)0x0) && (puVar1[0x204] != *puVar12)) ||
      ((puVar13 != (uint *)0x0 && (puVar1[0x203] != *puVar13)))) || ((puVar1[1] & 0x100) != 0)) {
    if (DAT_008bf790 < DAT_008bf794) {
      *DAT_008bf790 = 1;
      DAT_008bf790[1] = 0xf0111;
      DAT_008bf790 = DAT_008bf790 + 2;
    }
    if (DAT_008bf790 < DAT_008bf794) {
      *DAT_008bf790 = 1;
      DAT_008bf790[1] = 0xf0110;
      DAT_008bf790 = DAT_008bf790 + 2;
    }
  }
  if (*(int *)(iVar14 + 0xc) == 0) {
    *(undefined1 *)(puVar1 + 0x1a4) = 0;
  }
  else {
    *(undefined1 *)(puVar1 + 0x1a4) = 1;
    puVar1[0x204] = *puVar12;
    puVar1[0x206] = puVar12[8];
    uVar7 = puVar12[7];
    if (uVar7 == 0) {
      puVar1[0x1a2] = 0;
      *puVar11 = 2;
    }
    else if (uVar7 == 2) {
      puVar1[0x1a2] = 2;
      *puVar11 = 0;
    }
    else if (uVar7 == 3) {
      puVar1[0x1a2] = 3;
      *puVar11 = 0;
    }
    else if (uVar7 == 4) {
      puVar1[0x1a2] = 4;
      *puVar11 = 0;
    }
    if (DAT_008bf790 < DAT_008bf794) {
      *DAT_008bf790 = *puVar11 | puVar1[0x1a2] << 0x10;
      DAT_008bf790[1] = 0xf0117;
      DAT_008bf790 = DAT_008bf790 + 2;
    }
    if (DAT_008bf790 < DAT_008bf794) {
      uVar7 = fn_00166b28(puVar1[0x204]);
      *DAT_008bf790 = uVar7 >> 3;
      DAT_008bf790[1] = 0xf011d;
      DAT_008bf790 = DAT_008bf790 + 2;
    }
    uVar7 = puVar12[3];
    uVar9 = puVar12[4];
  }
  if (*(int *)(iVar14 + 0x1c) == 0) {
    *(undefined1 *)((int)puVar1 + 0x691) = 0;
    *(undefined1 *)((int)puVar1 + 0x692) = 0;
    goto LAB_006f9a74;
  }
  uVar7 = puVar1[0x1a3];
  *(undefined1 *)((int)puVar1 + 0x691) = 1;
  puVar1[0x203] = *puVar13;
  uVar9 = puVar13[0xe];
  if (uVar9 == 0x10) {
    puVar1[0x202] = 0;
    puVar1[0x1a3] = 0;
  }
  else if (uVar9 == 0x18) {
    puVar1[0x202] = 2;
    puVar1[0x1a3] = 2;
  }
  else if (uVar9 == 0x20) {
    puVar1[0x202] = 3;
    puVar1[0x1a3] = 3;
  }
  if ((char)puVar1[0x15] == '\0') {
LAB_006f99f0:
    if (puVar1[0x1a3] != 3) goto LAB_006f9a00;
    uVar2 = 1;
  }
  else {
    if (puVar1[0x1a3] != 0) {
      if (uVar7 == 0) goto LAB_006f99e4;
      goto LAB_006f99f0;
    }
    if (uVar7 != 0) {
LAB_006f99e4:
      *puVar1 = *puVar1 | 4;
      goto LAB_006f99f0;
    }
LAB_006f9a00:
    uVar2 = 0;
  }
  *(undefined1 *)((int)puVar1 + 0x692) = uVar2;
  puVar1[0x205] = puVar13[8];
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = puVar1[0x202];
    DAT_008bf790[1] = 0xf0116;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  if (DAT_008bf790 < DAT_008bf794) {
    uVar7 = fn_00166b28(puVar1[0x203]);
    *DAT_008bf790 = uVar7 >> 3;
    DAT_008bf790[1] = 0xf011c;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  uVar7 = puVar13[3];
  uVar9 = puVar13[4];
LAB_006f9a74:
  uVar4 = puVar1[0x1a6];
  bVar16 = uVar4 != uVar7;
  if (!bVar16) {
    uVar4 = puVar1[0x1a7];
  }
  if ((bVar16 || uVar4 != uVar9) || ((puVar1[1] & 0x100) != 0)) {
    uVar4 = uVar7 & 0xfff | (uVar9 - 1 & 0xfff00fff) << 0xc;
    if (DAT_008bf790 < DAT_008bf794) {
      DAT_008bf790[1] = 0xf011e;
      *DAT_008bf790 = uVar4 | 0x1000000;
      DAT_008bf790 = DAT_008bf790 + 2;
    }
    if (DAT_008bf790 < DAT_008bf794) {
      DAT_008bf790[1] = 0xf006e;
      *DAT_008bf790 = uVar4 | 0x1000000;
      DAT_008bf790 = DAT_008bf790 + 2;
    }
    puVar1[0x1a6] = uVar7;
    puVar1[0x1a7] = uVar9;
    if ((char)puVar1[0x192] != '\0') {
      *puVar1 = *puVar1 | 0x200;
    }
  }
  if ((char)puVar1[0xc] != '\0') {
    return;
  }
  *(undefined1 *)(puVar1 + 0xc) = 1;
  puVar1 = DAT_008bfab0;
  fVar17 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
  fVar17 = fVar17 * 0.5;
  uVar4 = 0;
  if (ABS(fVar17) != 0.0) {
    uVar4 = ((uint)ABS(fVar17) >> 0x17) - 0x40;
  }
  bVar16 = -1 < (int)uVar4;
  if (bVar16) {
    uVar4 = ((uint)fVar17 & 0x7fffff) >> 7 | uVar4 << 0x10;
  }
  if (bVar16) {
    uVar4 = uVar4 | ((uint)fVar17 >> 0x1f) << 0x17;
  }
  else {
    uVar4 = ((uint)fVar17 >> 0x1f) << 0x17;
  }
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = uVar4;
    DAT_008bf790[1] = 0xf0041;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  fVar17 = (float)VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
  fVar17 = fVar17 * 0.5;
  uVar4 = 0;
  if (ABS(fVar17) != 0.0) {
    uVar4 = ((uint)ABS(fVar17) >> 0x17) - 0x40;
  }
  bVar16 = -1 < (int)uVar4;
  if (bVar16) {
    uVar4 = ((uint)fVar17 & 0x7fffff) >> 7 | uVar4 << 0x10;
  }
  if (bVar16) {
    uVar4 = uVar4 | ((uint)fVar17 >> 0x1f) << 0x17;
  }
  else {
    uVar4 = ((uint)fVar17 >> 0x1f) << 0x17;
  }
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = uVar4;
    DAT_008bf790[1] = 0xf0043;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  if (uVar7 != 0 && uVar9 != 0) {
    iVar5 = 0;
    local_40[0] = uVar7;
    local_40[1] = uVar9;
    do {
      uVar4 = local_40[iVar5];
      if (uVar4 == 0x280) {
        local_40[iVar5] = 0x36999999;
      }
      else {
        if ((int)uVar4 < 0x281) {
          if (uVar4 == 400) {
            uVar4 = 0x3747ae14;
          }
          else if ((int)uVar4 < 0x191) {
            if (uVar4 == 0xf0) {
              uVar4 = 0x38111111;
            }
            else if (uVar4 == 0x140) {
              uVar4 = 0x37999999;
            }
            else {
LAB_0072f4a4:
              fVar17 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
              fVar17 = 2.0 / fVar17;
              if (ABS(fVar17) == 0.0) {
                iVar6 = 0;
LAB_0072f4e8:
                uVar4 = (uint)fVar17 & 0x7fffff | iVar6 << 0x17 | ((uint)fVar17 >> 0x1f) << 0x1e;
              }
              else {
                iVar6 = ((uint)ABS(fVar17) >> 0x17) - 0x40;
                if (-1 < iVar6) goto LAB_0072f4e8;
                uVar4 = ((uint)fVar17 >> 0x1f) << 0x1e;
              }
              local_40[iVar5] = uVar4;
              uVar4 = uVar4 << 1;
            }
          }
          else if (uVar4 == 0x1e0) {
            uVar4 = 0x37111111;
          }
          else {
            if (uVar4 != 600) goto LAB_0072f4a4;
            uVar4 = 0x36b4e81b;
          }
        }
        else if (uVar4 == 800) {
          uVar4 = 0x3647ae14;
        }
        else if (uVar4 == 0x400) {
          uVar4 = 0x36000000;
        }
        else if (uVar4 == 0x4b0) {
          uVar4 = 0x35b4e81b;
        }
        else {
          if (uVar4 != 0x500) goto LAB_0072f4a4;
          uVar4 = 0x35999999;
        }
        local_40[iVar5] = uVar4;
      }
      if (DAT_008bf790 < DAT_008bf794) {
        *DAT_008bf790 = local_40[iVar5];
        DAT_008bf790[1] = iVar5 * 2 + 0x42U | 0xf0000;
        DAT_008bf790 = DAT_008bf790 + 2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
  }
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = 0;
    DAT_008bf790[1] = 0xf0068;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = uVar7;
  puVar1[0xb] = uVar9;
  if ((char)puVar1[0xc] == '\0') {
    *(undefined1 *)(puVar1 + 0xc) = 1;
  }
  return;
}


