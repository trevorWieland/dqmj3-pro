#include "00268b38_00268b38.h"



/* WARNING: Removing unreachable block (ram,0x00268e64) */
/* WARNING: Removing unreachable block (ram,0x00268e68) */
/* WARNING: Removing unreachable block (ram,0x00268e6c) */
/* WARNING: Removing unreachable block (ram,0x00268e70) */
/* WARNING: Removing unreachable block (ram,0x00268e74) */
/* WARNING: Removing unreachable block (ram,0x002690b0) */
/* WARNING: Removing unreachable block (ram,0x002690b4) */
/* WARNING: Removing unreachable block (ram,0x002690b8) */
/* WARNING: Removing unreachable block (ram,0x002690bc) */
/* WARNING: Removing unreachable block (ram,0x002690c0) */
/* WARNING: Removing unreachable block (ram,0x00268c2c) */
/* WARNING: Removing unreachable block (ram,0x00268c00) */
/* WARNING: Removing unreachable block (ram,0x00268c04) */
/* WARNING: Removing unreachable block (ram,0x00268c10) */
/* WARNING: Removing unreachable block (ram,0x002690e0) */
/* WARNING: Removing unreachable block (ram,0x00269288) */
/* WARNING: Removing unreachable block (ram,0x0026928c) */
/* WARNING: Removing unreachable block (ram,0x00269298) */

int fn_00268b38(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  undefined4 uVar6;
  int iVar7;
  short *psVar8;
  undefined2 *puVar9;
  uint uVar10;
  short **ppsVar11;
  uint *puVar12;
  short *psVar13;
  int iVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  bool bVar19;
  uint in_fpscr;
  float fVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  short *local_90;
  short *local_80;
  short *local_7c;
  short *local_78;
  uint local_74 [3];
  int local_68;
  int local_64;
  uint local_5c;
  int local_54;
  uint local_50;
  int local_4c;
  undefined1 auStack_48 [24];
  int local_30;
  int local_2c;
  int local_28;
  
  local_90 = (short *)0x0;
  if (param_3 < 0x33) {
    local_50 = 6;
  }
  else {
    local_50 = 8;
  }
  local_54 = 4;
  local_7c = (short *)0x0;
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  local_80 = (short *)fn_006616e0();
  if ((short *)0x7fffffff < local_80) {
    fn_002ff628(8,&DAT_008c7675,&DAT_008c7675,local_80,0x7fffffff);
  }
  if ((short *)((int)local_7c >> 1) < local_80) {
    ppsVar11 = &local_78;
    if (&DAT_0000001f < local_80) {
      ppsVar11 = &local_80;
    }
    local_78 = (short *)0x20;
    psVar17 = *ppsVar11;
    local_90 = (short *)fn_00100fc6((int)psVar17 << 1,0);
    fn_001008c4(0,(int)local_7c >> 1,0);
    local_7c = local_90 + (int)psVar17;
  }
  uVar22 = 0x41200000;
  iVar2 = 0;
  psVar17 = local_90;
  while( true ) {
    uVar21 = local_50;
    bVar19 = local_2c == iVar2;
    iVar7 = iVar2;
    if (iVar2 < local_2c) {
      iVar7 = local_54;
    }
    iVar14 = local_2c - iVar2;
    if (local_2c > iVar2) {
      bVar19 = iVar7 == 0;
      iVar14 = iVar7;
    }
    local_4c = iVar2;
    if (bVar19 || iVar14 < 0 != (local_2c <= iVar2 && SBORROW4(local_2c,iVar2))) {
      psVar15 = local_90;
      if (psVar17 < local_90) {
        do {
          psVar15 = psVar15 + 1;
        } while (psVar15 != psVar17);
      }
      fn_001008c4(local_90,(int)local_7c - (int)local_90 >> 1,0);
      return iVar2;
    }
    if (local_90 != psVar17) {
      psVar15 = local_90;
      if (psVar17 < local_90) {
        do {
          psVar15 = psVar15 + 1;
        } while (psVar15 != psVar17);
      }
      psVar17 = (short *)((int)psVar17 - ((int)psVar17 - (int)local_90 & 0xfffffffeU));
    }
    iVar14 = 1;
    iVar2 = fn_006616e0();
    psVar15 = psVar17;
    if (1 < iVar2) {
      do {
        sVar1 = (short)iVar14;
        iVar2 = (int)sVar1;
        iVar3 = fn_002e322c();
        psVar17 = psVar15;
        if (((iVar3 == 0) && (iVar3 = fn_00661308(iVar2), iVar3 != 0)) &&
           (uVar4 = fn_00661714(iVar2), uVar4 <= uVar21)) {
          fn_0066173c(iVar2);
          iVar2 = fn_001cab7c();
          if (iVar2 <= iVar7) {
            if (psVar15 == local_7c) {
              uVar4 = (int)psVar15 - (int)local_90 >> 1;
              if (uVar4 < (uint)((int)local_7c - (int)local_90 >> 1)) {
                if (psVar15 != (short *)0x0) {
                  *psVar15 = psVar15[-1];
                }
                psVar18 = psVar15 + -1;
                psVar17 = psVar15 + 1;
                psVar5 = psVar15;
                if (psVar15 < psVar18) {
                  iVar2 = (int)psVar18 - (int)psVar15;
                  if (0 < iVar2) {
                    if (iVar2 * 0x40000000 < 0) {
                      psVar5 = psVar15 + -1;
                      psVar18 = psVar15 + -2;
                      *psVar5 = *psVar18;
                    }
                    for (iVar2 = iVar2 >> 2; iVar2 != 0; iVar2 = iVar2 + -1) {
                      psVar5[-1] = psVar18[-1];
                      psVar18 = psVar18 + -2;
                      psVar5 = psVar5 + -2;
                      *psVar5 = *psVar18;
                    }
                  }
                }
                else {
                  while (psVar15 != psVar18) {
                    psVar18 = psVar18 + -1;
                    psVar5[-1] = *psVar18;
                    psVar5 = psVar5 + -1;
                  }
                }
                *psVar15 = sVar1;
              }
              else {
                uVar10 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
                if (uVar10 < uVar4 + 0x20) {
                  uVar10 = uVar4 + 0x20;
                }
                psVar5 = (short *)fn_00100fc6(uVar10 << 1,0);
                psVar18 = psVar5;
                for (psVar17 = local_90; psVar17 != psVar15; psVar17 = psVar17 + 1) {
                  if (psVar18 != (short *)0x0) {
                    *psVar18 = *psVar17;
                  }
                  psVar18 = psVar18 + 1;
                }
                psVar17 = (short *)(((int)psVar15 - (int)local_90 & 0xfffffffeU) + (int)psVar5);
                if (psVar17 != (short *)0x0) {
                  *psVar17 = sVar1;
                }
                psVar17 = local_90;
                if (psVar15 < local_90) {
                  do {
                    psVar17 = psVar17 + 1;
                  } while (psVar17 != psVar15);
                }
                fn_001008c4(local_90,(int)local_7c - (int)local_90 >> 1,0);
                local_7c = psVar5 + uVar10;
                psVar17 = psVar5 + ((int)psVar15 - (int)local_90 >> 1) + 1;
                local_90 = psVar5;
              }
            }
            else {
              psVar17 = psVar15 + 1;
              if (psVar15 != (short *)0x0) {
                *psVar15 = sVar1;
              }
            }
          }
        }
        iVar14 = iVar14 + 1;
        iVar2 = fn_006616e0();
        psVar15 = psVar17;
      } while (iVar14 < iVar2);
    }
    local_64 = local_30 + local_4c * 0xf0;
    fn_0020bbc4(auStack_48);
    uVar4 = fn_00163868((int)psVar17 - (int)local_90 >> 1);
    uVar21 = (int)psVar17 - (int)local_90 >> 1;
    if (uVar21 <= uVar4) {
      fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar4,uVar21);
    }
    local_68 = (int)local_90[uVar4];
    iVar2 = local_28;
    if (0x78 < local_28) {
      iVar2 = 0x78;
    }
    fVar20 = (float)VectorSignedToFloat(iVar2 + -1,(byte)(in_fpscr >> 0x16) & 3);
    uVar21 = VectorFloatToUnsigned(fVar20 + (float)uVar22,3);
    uVar21 = uVar21 & 0xff;
    if (0x78 < uVar21) {
      uVar21 = 0x78;
    }
    uVar23 = 1;
    fn_0020b310(auStack_48,local_68,uVar21);
    iVar2 = local_64;
    uVar6 = fn_0066173c((int)*(short *)(local_64 + 0x1c));
    uVar21 = 0;
    switch(uVar6) {
    case 0:
    case 1:
      uVar21 = 3;
      break;
    case 2:
      uVar21 = 4;
      break;
    case 3:
      uVar21 = 5;
      break;
    case 4:
      uVar21 = 6;
    }
    psVar15 = (short *)0x0;
    psVar18 = (short *)0x0;
    local_74[0] = fn_0068f790();
    if (0x7fffffff < local_74[0]) {
      fn_002ff628(8,&DAT_008c7675,&DAT_008c7675,local_74[0],0x7fffffff,uVar23);
    }
    if (local_74[0] != 0) {
      puVar12 = local_74 + 1;
      if (0x1f < local_74[0]) {
        puVar12 = local_74;
      }
      local_74[1] = 0x20;
      uVar4 = *puVar12;
      psVar15 = (short *)fn_00100fc6(uVar4 << 1,0);
      fn_001008c4(0,0,0);
      psVar18 = psVar15 + uVar4;
    }
    iVar14 = 1;
    iVar7 = fn_0068f7e4();
    psVar5 = psVar15;
    psVar16 = psVar15;
    if (1 < iVar7) {
      do {
        sVar1 = (short)iVar14;
        psVar8 = (short *)(int)sVar1;
        iVar3 = fn_0068f7a0();
        iVar7 = 0;
        if (iVar3 != 0) {
          iVar7 = (int)*(short *)(iVar2 + 0x56);
        }
        psVar15 = psVar5;
        if (iVar3 != 0 && iVar7 != iVar14) {
          local_78 = psVar8;
          if (psVar5 == psVar18) {
            uVar4 = (int)psVar5 - (int)psVar16 >> 1;
            if (uVar4 < (uint)((int)psVar18 - (int)psVar16 >> 1)) {
              psVar8 = psVar5 + -1;
              if (psVar5 != (short *)0x0) {
                *psVar5 = psVar5[-1];
              }
              psVar15 = psVar5 + 1;
              psVar13 = psVar5;
              if (psVar5 < psVar8) {
                iVar7 = (int)psVar8 - (int)psVar5;
                if (0 < iVar7) {
                  if (iVar7 * 0x40000000 < 0) {
                    psVar13 = psVar5 + -1;
                    psVar8 = psVar5 + -2;
                    *psVar13 = *psVar8;
                  }
                  for (iVar7 = iVar7 >> 2; iVar7 != 0; iVar7 = iVar7 + -1) {
                    psVar13[-1] = psVar8[-1];
                    psVar8 = psVar8 + -2;
                    psVar13 = psVar13 + -2;
                    *psVar13 = *psVar8;
                  }
                }
              }
              else {
                while (psVar5 != psVar8) {
                  psVar8 = psVar8 + -1;
                  psVar13[-1] = *psVar8;
                  psVar13 = psVar13 + -1;
                }
              }
              *psVar5 = sVar1;
            }
            else {
              local_5c = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
              if (local_5c < uVar4 + 0x20) {
                local_5c = uVar4 + 0x20;
              }
              local_80 = (short *)fn_00100fc6(local_5c << 1,0);
              psVar8 = local_80;
              for (psVar15 = psVar16; psVar15 != psVar5; psVar15 = psVar15 + 1) {
                if (psVar8 != (short *)0x0) {
                  *psVar8 = *psVar15;
                }
                psVar8 = psVar8 + 1;
              }
              puVar9 = (undefined2 *)((int)local_80 + ((int)psVar5 - (int)psVar16 & 0xfffffffeU));
              if (puVar9 != (undefined2 *)0x0) {
                *puVar9 = (short)local_78;
              }
              psVar15 = psVar16;
              if (psVar5 < psVar16) {
                do {
                  psVar15 = psVar15 + 1;
                } while (psVar15 != psVar5);
              }
              fn_001008c4(psVar16,(int)psVar18 - (int)psVar16 >> 1,0);
              psVar18 = local_80 + local_5c;
              psVar15 = local_80 + ((int)psVar5 - (int)psVar16 >> 1) + 1;
              psVar16 = local_80;
            }
          }
          else {
            psVar15 = psVar5 + 1;
            if (psVar5 != (short *)0x0) {
              *psVar5 = sVar1;
            }
          }
        }
        iVar14 = iVar14 + 1;
        iVar7 = fn_0068f7e4();
        psVar5 = psVar15;
      } while (iVar14 < iVar7);
    }
    iVar7 = 1;
    if (1 < uVar21) {
      do {
        uVar10 = fn_00163868((int)psVar15 - (int)psVar16 >> 1);
        uVar4 = (int)psVar15 - (int)psVar16 >> 1;
        if (uVar4 <= uVar10) {
          fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar10,uVar4);
        }
        psVar5 = psVar16 + uVar10;
        *(short *)(iVar2 + iVar7 * 4 + 0x56) = psVar16[uVar10];
        psVar8 = psVar5;
        if (psVar16 != psVar15) {
          while (psVar8 = psVar8 + 1, psVar8 != psVar15) {
            *psVar5 = *psVar8;
            psVar5 = psVar5 + 1;
          }
          psVar15 = psVar15 + -1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar21);
    }
    psVar5 = psVar16;
    if (psVar15 < psVar16) {
      do {
        psVar5 = psVar5 + 1;
      } while (psVar5 != psVar15);
    }
    fn_001008c4(psVar16,(int)psVar18 - (int)psVar16 >> 1,0);
    iVar2 = local_64;
    iVar7 = fn_00388784(*(undefined1 *)(local_64 + 0x2e),local_64);
    *(short *)(iVar2 + 0x3a) = (short)iVar7;
    if (0 < iVar7) break;
LAB_002694bc:
    fn_0066173c(local_68);
    iVar2 = fn_001cab7c();
    local_54 = local_54 - iVar2;
    iVar2 = local_4c + 1;
  }
  do {
    uVar6 = fn_0066173c((int)*(short *)(iVar2 + 0x1c));
    iVar7 = 0;
    switch(uVar6) {
    case 0:
    case 1:
      iVar7 = 3;
      break;
    case 2:
      iVar7 = 4;
      break;
    case 3:
      iVar7 = 5;
      break;
    case 4:
      iVar7 = 6;
      break;
    default:
      goto switchD_002693e8_default;
    }
    iVar14 = 0;
    do {
      if ((*(short *)(iVar2 + 0x3a) == 0) ||
         (iVar3 = iVar2 + iVar14 * 4, uVar21 = fn_0068f6a8((int)*(short *)(iVar3 + 0x56)),
         *(ushort *)(iVar3 + 0x58) < uVar21)) {
        iVar3 = iVar2 + iVar14 * 4;
        *(short *)(iVar3 + 0x58) = *(short *)(iVar3 + 0x58) + 1;
        *(short *)(iVar2 + 0x3a) = *(short *)(iVar2 + 0x3a) + -1;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar7);
switchD_002693e8_default:
    bVar19 = true;
    iVar14 = 0;
    if (iVar7 == 0) goto LAB_002694bc;
    do {
      iVar3 = iVar2 + iVar14 * 4;
      uVar21 = fn_0068f6a8((int)*(short *)(iVar3 + 0x56));
      iVar14 = iVar14 + 1;
      if (*(ushort *)(iVar3 + 0x58) < uVar21) {
        bVar19 = false;
      }
    } while (iVar14 < iVar7);
    if ((bVar19) || (*(short *)(iVar2 + 0x3a) < 1)) goto LAB_002694bc;
  } while( true );
}


