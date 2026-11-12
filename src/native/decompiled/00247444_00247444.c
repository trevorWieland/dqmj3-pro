#include "00247444_00247444.h"



/* WARNING: Removing unreachable block (ram,0x00247600) */
/* WARNING: Removing unreachable block (ram,0x00247604) */
/* WARNING: Removing unreachable block (ram,0x00247608) */
/* WARNING: Removing unreachable block (ram,0x0024760c) */
/* WARNING: Removing unreachable block (ram,0x00247610) */
/* WARNING: Removing unreachable block (ram,0x00247814) */
/* WARNING: Removing unreachable block (ram,0x00247818) */
/* WARNING: Removing unreachable block (ram,0x0024781c) */
/* WARNING: Removing unreachable block (ram,0x00247820) */
/* WARNING: Removing unreachable block (ram,0x00247824) */

int fn_00247444(int param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  undefined4 uVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  int iVar14;
  short *psVar15;
  short *psVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 *puVar28;
  short *psVar29;
  short local_1d0 [112];
  short local_f0 [76];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [48];
  
  if (param_1 == 0) {
    return 0;
  }
  fn_0020bbc4(auStack_58,param_1);
  fn_006bfda8(auStack_54);
  iVar3 = fn_001a46f4();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = fn_006bf5ec(auStack_54,local_f0,0x4c,1,1,1,1,1);
  psVar10 = (short *)0x0;
  psVar11 = (short *)0x0;
  psVar16 = (short *)0x0;
  iVar14 = 0;
  psVar12 = psVar10;
  psVar7 = psVar11;
  if (0 < iVar3) {
    do {
      psVar10 = psVar12;
      if (psVar7 == psVar16) {
        uVar1 = (int)psVar7 - (int)psVar12 >> 1;
        if (uVar1 < (uint)((int)psVar16 - (int)psVar12 >> 1)) {
          psVar11 = psVar7 + 1;
          if (psVar7 != (short *)0x0) {
            *psVar7 = psVar7[-1];
          }
          psVar12 = psVar7 + -1;
          psVar13 = psVar7;
          if (psVar7 < psVar12) {
            iVar9 = (int)psVar12 - (int)psVar7;
            if (0 < iVar9) {
              if (iVar9 * 0x40000000 < 0) {
                psVar12 = psVar7 + -2;
                psVar13 = psVar7 + -1;
                *psVar13 = *psVar12;
              }
              for (iVar9 = iVar9 >> 2; iVar9 != 0; iVar9 = iVar9 + -1) {
                psVar13[-1] = psVar12[-1];
                psVar12 = psVar12 + -2;
                psVar13 = psVar13 + -2;
                *psVar13 = *psVar12;
              }
            }
          }
          else {
            while (psVar7 != psVar12) {
              psVar12 = psVar12 + -1;
              psVar13[-1] = *psVar12;
              psVar13 = psVar13 + -1;
            }
          }
          *psVar7 = local_f0[iVar14];
        }
        else {
          uVar4 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar4 < uVar1 + 0x20) {
            uVar4 = uVar1 + 0x20;
          }
          psVar10 = (short *)fn_00100fc6(uVar4 << 1,0);
          psVar13 = psVar10;
          for (psVar11 = psVar12; psVar11 != psVar7; psVar11 = psVar11 + 1) {
            if (psVar13 != (short *)0x0) {
              *psVar13 = *psVar11;
            }
            psVar13 = psVar13 + 1;
          }
          psVar11 = (short *)(((int)psVar7 - (int)psVar12 & 0xfffffffeU) + (int)psVar10);
          if (psVar11 != (short *)0x0) {
            *psVar11 = local_f0[iVar14];
          }
          psVar11 = psVar12;
          if (psVar7 <= psVar12) {
            for (; psVar11 != psVar7; psVar11 = psVar11 + 1) {
            }
          }
          fn_001008c4(psVar12,(int)psVar16 - (int)psVar12 >> 1,0);
          psVar11 = psVar10 + ((int)psVar7 - (int)psVar12 >> 1) + 1;
          psVar16 = psVar10 + uVar4;
        }
      }
      else {
        psVar11 = psVar7 + 1;
        if (psVar7 != (short *)0x0) {
          *psVar7 = local_f0[iVar14];
        }
      }
      iVar14 = iVar14 + 1;
      psVar12 = psVar10;
      psVar7 = psVar11;
    } while (iVar14 < iVar3);
  }
  iVar3 = fn_006c0354(auStack_54,local_1d0,0x6e,1,1,1);
  psVar12 = (short *)0x0;
  psVar13 = (short *)0x0;
  psVar15 = (short *)0x0;
  iVar14 = 0;
  psVar7 = psVar12;
  if (0 < iVar3) {
    do {
      if (psVar7 == psVar15) {
        psVar29 = local_1d0 + iVar14;
        uVar1 = (int)psVar7 - (int)psVar13 >> 1;
        if (uVar1 < (uint)((int)psVar15 - (int)psVar13 >> 1)) {
          psVar8 = psVar7 + -1;
          if (psVar7 != (short *)0x0) {
            *psVar7 = psVar7[-1];
          }
          psVar12 = psVar7 + 1;
          psVar5 = psVar7;
          if (psVar7 < psVar8) {
            iVar9 = (int)psVar8 - (int)psVar7;
            if (0 < iVar9) {
              if (iVar9 * 0x40000000 < 0) {
                psVar8 = psVar7 + -2;
                psVar5 = psVar7 + -1;
                *psVar5 = *psVar8;
              }
              for (iVar9 = iVar9 >> 2; iVar9 != 0; iVar9 = iVar9 + -1) {
                psVar5[-1] = psVar8[-1];
                psVar8 = psVar8 + -2;
                psVar5 = psVar5 + -2;
                *psVar5 = *psVar8;
              }
            }
          }
          else {
            while (psVar7 != psVar8) {
              psVar8 = psVar8 + -1;
              psVar5[-1] = *psVar8;
              psVar5 = psVar5 + -1;
            }
          }
          *psVar7 = *psVar29;
        }
        else {
          uVar4 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar4 < uVar1 + 0x20) {
            uVar4 = uVar1 + 0x20;
          }
          psVar5 = (short *)fn_00100fc6(uVar4 << 1,0);
          psVar8 = psVar5;
          for (psVar12 = psVar13; psVar12 != psVar7; psVar12 = psVar12 + 1) {
            if (psVar8 != (short *)0x0) {
              *psVar8 = *psVar12;
            }
            psVar8 = psVar8 + 1;
          }
          psVar12 = (short *)((int)psVar5 + ((int)psVar7 - (int)psVar13 & 0xfffffffeU));
          if (psVar12 != (short *)0x0) {
            *psVar12 = *psVar29;
          }
          iVar9 = (int)psVar7 - (int)psVar13;
          psVar12 = psVar13;
          if (psVar7 <= psVar13) {
            for (; psVar12 != psVar7; psVar12 = psVar12 + 1) {
            }
          }
          fn_001008c4(psVar13,(int)psVar15 - (int)psVar13 >> 1,0);
          psVar13 = psVar5;
          psVar12 = psVar13 + (iVar9 >> 1) + 1;
          psVar15 = psVar13 + uVar4;
        }
      }
      else {
        psVar12 = psVar7 + 1;
        if (psVar7 != (short *)0x0) {
          *psVar7 = local_1d0[iVar14];
        }
      }
      iVar14 = iVar14 + 1;
      psVar7 = psVar12;
    } while (iVar14 < iVar3);
  }
  uVar6 = fn_006c0028(auStack_54);
  fVar25 = 5.0;
  fVar24 = 2.0;
  fVar22 = 3.0;
  fVar21 = 4.0;
  fVar17 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  for (psVar7 = psVar10; (psVar11 != psVar7 && (sVar2 = *psVar7, sVar2 != 0x4b));
      psVar7 = psVar7 + 1) {
    if (sVar2 == 0x4c) {
      fVar17 = fVar17 * 3.0;
      goto LAB_00247900;
    }
    if (sVar2 == 0x4d) {
      fVar17 = fVar17 * 4.0;
      goto LAB_00247900;
    }
    if (sVar2 == 0x4e) {
      fVar17 = fVar17 * 5.0;
      goto LAB_00247900;
    }
  }
  fVar17 = fVar17 * 2.0;
LAB_00247900:
  uVar6 = fn_006c0114(auStack_54);
  uVar26 = 0x3e4ccccd3e800000;
  fVar23 = 0.5;
  fVar18 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  for (psVar7 = psVar10; psVar11 != psVar7; psVar7 = psVar7 + 1) {
    sVar2 = *psVar7;
    if (sVar2 == 0x77) {
      fVar18 = fVar18 * fVar24;
LAB_00247a24:
      fVar18 = fVar18 * 0.33333334;
      break;
    }
    if (0x77 < sVar2) {
      if (sVar2 == 0x78) {
        fVar18 = fVar18 * fVar24 * 0.25;
      }
      else if (sVar2 == 0x79) {
        fVar18 = fVar18 * fVar24 * 0.2;
      }
      else {
        if (sVar2 == 0x94) {
          fVar18 = fVar18 * fVar21;
          goto LAB_00247a24;
        }
        if (sVar2 != 0x95) goto LAB_00247998;
        fVar18 = fVar18 * fVar24;
      }
      break;
    }
    if (sVar2 == 0x4b) {
      fVar18 = fVar18 * 0.5;
      break;
    }
    if (sVar2 == 0x4c) goto LAB_00247a24;
    if (sVar2 == 0x4d) {
      fVar18 = fVar18 * 0.25;
      break;
    }
    if (sVar2 == 0x4e) {
      fVar18 = fVar18 * 0.2;
      break;
    }
LAB_00247998:
  }
  fVar18 = fVar18 + fVar17;
  uVar6 = fn_006c09b4(auStack_54);
  fVar17 = 7.0;
  fVar19 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  psVar7 = psVar10;
joined_r0x002479c4:
  if (psVar11 != psVar7) {
    switch(*psVar7) {
    default:
      goto switchD_002479d0_caseD_0;
    case 1:
      fVar19 = fVar19 * fVar22 * fVar23;
      goto LAB_00247a84;
    case 2:
    case 3:
      goto switchD_002479d0_caseD_2;
    case 4:
      fVar20 = fVar25;
      break;
    case 5:
      fVar19 = fVar19 * fVar22;
      goto LAB_00247a84;
    case 6:
      fVar20 = fVar17;
      break;
    case 7:
      fVar19 = fVar19 * fVar21;
      goto LAB_00247a84;
    }
    fVar19 = fVar19 * fVar20 * fVar23;
    goto LAB_00247a84;
  }
switchD_002479d0_caseD_2:
  fVar19 = fVar19 * fVar24;
LAB_00247a84:
  fVar19 = fVar19 + fVar18;
  uVar6 = fn_006bed98(auStack_54);
  fVar20 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  fVar20 = fVar20 + fVar19;
  uVar6 = fn_006c01f4(auStack_54);
  fVar18 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  fVar20 = fVar18 * fVar24 + fVar20;
  uVar6 = fn_006bff0c(auStack_54);
  fVar18 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  psVar7 = psVar10;
joined_r0x00247acc:
  if (psVar11 != psVar7) {
    switch(*psVar7) {
    default:
      goto switchD_00247ad8_caseD_0;
    case 1:
      fVar18 = fVar18 * fVar22 * fVar23;
      goto LAB_00247b44;
    case 2:
    case 3:
      fVar18 = fVar18 * fVar24;
      goto LAB_00247b44;
    case 4:
      fVar17 = fVar25;
      break;
    case 5:
      fVar18 = fVar18 * fVar22;
      goto LAB_00247b44;
    case 6:
      break;
    case 7:
      fVar18 = fVar18 * fVar21;
      goto LAB_00247b44;
    }
    fVar18 = fVar18 * fVar17 * fVar23;
  }
  goto LAB_00247b44;
switchD_002479d0_caseD_0:
  psVar7 = psVar7 + 1;
  goto joined_r0x002479c4;
switchD_00247ad8_caseD_0:
  psVar7 = psVar7 + 1;
  goto joined_r0x00247acc;
LAB_00247b44:
  fVar18 = fVar18 + fVar20;
  uVar6 = fn_006bfe90(auStack_54);
  fVar17 = 0.125;
  uVar27 = 0x3e00000000000000;
  switch(uVar6) {
  case 0:
    iVar3 = (int)(fVar18 * 10.0 * 0.125);
    goto LAB_00247bec;
  default:
    break;
  case 2:
    iVar3 = (int)(fVar18 * 10.0 * 0.09090909 * fVar24);
    goto LAB_00247bec;
  case 3:
    fVar18 = fVar18 * 10.0 * 0.083333336 * fVar22;
    break;
  case 4:
    fVar18 = fVar18 * 10.0 * 0.07692308 * fVar21;
  }
  iVar3 = (int)fVar18;
LAB_00247bec:
  fVar18 = 0.0;
  puVar28 = auStack_58;
  fVar23 = fVar18;
  psVar7 = psVar10;
  while (psVar11 != psVar7) {
    uVar6 = fn_002530c4((int)*psVar7);
    fVar17 = (float)((ulonglong)uVar27 >> 0x20);
    psVar7 = psVar7 + 1;
    fVar19 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = fVar19 + fVar18;
  }
  uVar6 = fn_006bfe90(puVar28 + 4);
  uVar27 = CONCAT44(fVar17,0x3e2aaaab);
  fVar19 = 0.16666667;
  switch(uVar6) {
  default:
    iVar14 = (int)fVar18;
    break;
  case 2:
    iVar14 = (int)(fVar18 * fVar25 * 0.16666667 * fVar24);
    break;
  case 3:
    fVar25 = fVar18 * fVar25 * 0.14285715 * fVar22;
    goto LAB_00247d14;
  case 4:
    fVar25 = fVar18 * fVar25 * fVar17 * fVar21;
LAB_00247d14:
    iVar14 = (int)fVar25;
  }
  iVar14 = iVar14 + iVar3;
  psVar7 = psVar13;
  while (psVar12 != psVar7) {
    uVar6 = fn_002530dc((int)*psVar7);
    fVar19 = (float)uVar27;
    psVar7 = psVar7 + 1;
    fVar25 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    fVar23 = fVar25 + fVar23;
  }
  uVar6 = fn_006bfe90(auStack_54);
  switch(uVar6) {
  default:
    iVar3 = (int)fVar23;
    goto LAB_00247d34;
  case 2:
    iVar3 = (int)(fVar23 * fVar22 * (float)uVar26 * fVar24);
    goto LAB_00247d34;
  case 3:
    fVar21 = fVar23 * fVar22 * (float)((ulonglong)uVar26 >> 0x20) * fVar22;
    break;
  case 4:
    fVar21 = fVar23 * fVar22 * fVar19 * fVar21;
  }
  iVar3 = (int)fVar21;
LAB_00247d34:
  psVar7 = psVar13;
  if (psVar12 < psVar13) {
    do {
      psVar7 = psVar7 + 1;
    } while (psVar7 != psVar12);
  }
  fn_001008c4(psVar13,(int)psVar15 - (int)psVar13 >> 1,0);
  psVar12 = psVar10;
  if (psVar11 < psVar10) {
    do {
      psVar12 = psVar12 + 1;
    } while (psVar12 != psVar11);
  }
  fn_001008c4(psVar10,(int)psVar16 - (int)psVar10 >> 1,0);
  return iVar3 + iVar14;
}


