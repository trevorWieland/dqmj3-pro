#include "0021dcfc_0021e3f4.h"



undefined4 fn_0021de78(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 *puVar17;
  int unaff_r10;
  bool bVar18;
  uint in_fpscr;
  float fVar19;
  float fVar20;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  
  uVar2 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  iVar3 = fn_003035b0(uVar2,DAT_00891768);
  if (iVar3 != 0) {
    return 0;
  }
  if (param_2 == 2) {
    fn_0021e3f4(param_1);
    puVar4 = (undefined1 *)fn_006f7b9c(*(undefined4 *)(param_1 + 0x694));
    if ((int)puVar4 < 1) {
      return 0;
    }
    local_30 = puVar4;
    puVar16 = (uint *)(param_1 + 0x698);
    if ((undefined1 *)(*(int *)(param_1 + 0x6a0) - *(int *)(param_1 + 0x698)) < puVar4) {
      uVar5 = *(int *)(param_1 + 0x69c) - *(int *)(param_1 + 0x698);
      local_2c = (undefined1 *)(uVar5 + (uVar5 >> 1) + (uVar5 >> 3));
      if (local_2c < (undefined1 *)(uVar5 + 0x20)) {
        local_2c = (undefined1 *)(uVar5 + 0x20);
      }
      ppuVar6 = &local_2c;
      if (local_2c <= puVar4) {
        ppuVar6 = &local_30;
      }
      puVar17 = *ppuVar6;
      puVar7 = (undefined1 *)fn_00100fc6(puVar17,0);
      puVar15 = *(undefined1 **)(param_1 + 0x69c);
      puVar12 = puVar7;
      for (puVar8 = (undefined1 *)*puVar16; puVar8 != puVar15; puVar8 = puVar8 + 1) {
        if (puVar12 != (undefined1 *)0x0) {
          *puVar12 = *puVar8;
        }
        puVar12 = puVar12 + 1;
      }
      uVar9 = *puVar16;
      uVar5 = uVar9;
      if (*(uint *)(param_1 + 0x69c) < uVar9) {
        do {
          uVar5 = uVar5 + 1;
        } while (uVar5 != *(uint *)(param_1 + 0x69c));
      }
      fn_001008c4(uVar9,*(int *)(param_1 + 0x6a0) - uVar9,0);
      uVar5 = *puVar16;
      *(undefined1 **)(param_1 + 0x698) = puVar7;
      *(int *)(param_1 + 0x69c) = (int)(puVar7 + (*(int *)(param_1 + 0x69c) - uVar5));
      *(undefined1 **)(param_1 + 0x6a0) = puVar7 + (int)puVar17;
    }
    puVar16 = (uint *)(param_1 + 0x698);
    if (0 < (int)puVar4) {
      unaff_r10 = param_1 + 0x400;
    }
    iVar3 = 0;
    if (0 < (int)puVar4) {
      do {
        iVar10 = fn_006f7b58(*(undefined4 *)(unaff_r10 + 0x294),iVar3);
        piVar11 = (int *)(iVar10 + 0x40);
        iVar13 = *piVar11;
        if (iVar13 == -1) {
          piVar11 = *(int **)(iVar10 + 0x44);
        }
        if (iVar13 != -1 || piVar11 != (int *)&DAT_ffffffff) {
          fVar19 = *(float *)(param_3 + 4);
          fVar20 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x16) & 3);
          uVar5 = in_fpscr & 0xfffffff | (uint)(fVar19 < fVar20) << 0x1f |
                  (uint)(fVar19 == fVar20) << 0x1e;
          in_fpscr = uVar5 | (uint)(NAN(fVar19) || NAN(fVar20)) << 0x1c;
          bVar1 = (byte)(uVar5 >> 0x18);
          if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
            puVar8 = *(undefined1 **)(param_1 + 0x69c);
            local_28 = 2;
            if (puVar8 != *(undefined1 **)(param_1 + 0x6a0)) {
              *(undefined1 **)(param_1 + 0x69c) = puVar8 + 1;
              goto joined_r0x0021e1fc;
            }
            uVar5 = (int)puVar8 - *puVar16;
            if (uVar5 < (int)*(undefined1 **)(param_1 + 0x6a0) - *puVar16) {
              *(undefined1 **)(param_1 + 0x69c) = puVar8 + 1;
              if (puVar8 != (undefined1 *)0x0) {
                *puVar8 = puVar8[-1];
              }
              puVar12 = puVar8 + -1;
              puVar7 = puVar8;
              if (puVar8 < puVar12) {
                uVar5 = (int)puVar12 - (int)puVar8;
                if (0 < (int)uVar5) {
                  if ((uVar5 & 1) != 0) {
                    puVar12 = puVar8 + -2;
                    puVar7 = puVar8 + -1;
                    *puVar7 = *puVar12;
                  }
                  for (iVar10 = (int)uVar5 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
                    puVar7[-1] = puVar12[-1];
                    puVar12 = puVar12 + -2;
                    puVar7 = puVar7 + -2;
                    *puVar7 = *puVar12;
                  }
                }
              }
              else {
                while (puVar8 != puVar12) {
                  puVar12 = puVar12 + -1;
                  puVar7[-1] = *puVar12;
                  puVar7 = puVar7 + -1;
                }
              }
              *puVar8 = 2;
            }
            else {
              local_2c = (undefined1 *)(uVar5 + (uVar5 >> 1) + (uVar5 >> 3));
              if (local_2c < (undefined1 *)(uVar5 + 0x20)) {
                local_2c = (undefined1 *)(uVar5 + 0x20);
              }
              local_30 = (undefined1 *)fn_00100fc6(local_2c,0);
              puVar7 = local_30;
              for (puVar12 = (undefined1 *)*puVar16; puVar12 != puVar8; puVar12 = puVar12 + 1) {
                if (puVar7 != (undefined1 *)0x0) {
                  *puVar7 = *puVar12;
                }
                puVar7 = puVar7 + 1;
              }
              if (local_30 + ((int)puVar8 - *puVar16) != (undefined1 *)0x0) {
                local_30[(int)puVar8 - *puVar16] = (char)local_28;
              }
              puVar7 = *(undefined1 **)(param_1 + 0x69c);
              puVar12 = local_30 + ((int)puVar8 - *puVar16);
              for (; puVar8 != puVar7; puVar8 = puVar8 + 1) {
                puVar12 = puVar12 + 1;
                if (puVar12 != (undefined1 *)0x0) {
                  *puVar12 = *puVar8;
                }
              }
              uVar9 = *puVar16;
              uVar14 = *(uint *)(param_1 + 0x69c);
              uVar5 = uVar9;
              if (uVar14 < uVar9) {
                do {
                  uVar5 = uVar5 + 1;
                } while (uVar5 != uVar14);
              }
              fn_001008c4(uVar9,*(int *)(param_1 + 0x6a0) - uVar9,0);
              *puVar16 = (uint)local_30;
              *(undefined1 **)(param_1 + 0x69c) = local_30 + (uVar14 - uVar9) + 1;
              *(undefined1 **)(param_1 + 0x6a0) = local_2c + (int)local_30;
            }
          }
          else {
            puVar8 = *(undefined1 **)(param_1 + 0x69c);
            local_28 = 1;
            if (puVar8 == *(undefined1 **)(param_1 + 0x6a0)) {
              uVar5 = (int)puVar8 - *puVar16;
              if (uVar5 < (int)*(undefined1 **)(param_1 + 0x6a0) - *puVar16) {
                *(undefined1 **)(param_1 + 0x69c) = puVar8 + 1;
                if (puVar8 != (undefined1 *)0x0) {
                  *puVar8 = puVar8[-1];
                }
                puVar12 = puVar8 + -1;
                puVar7 = puVar8;
                if (puVar8 < puVar12) {
                  uVar5 = (int)puVar12 - (int)puVar8;
                  if (0 < (int)uVar5) {
                    if ((uVar5 & 1) != 0) {
                      puVar12 = puVar8 + -2;
                      puVar7 = puVar8 + -1;
                      *puVar7 = *puVar12;
                    }
                    for (iVar10 = (int)uVar5 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
                      puVar7[-1] = puVar12[-1];
                      puVar12 = puVar12 + -2;
                      puVar7 = puVar7 + -2;
                      *puVar7 = *puVar12;
                    }
                  }
                }
                else {
                  while (puVar8 != puVar12) {
                    puVar12 = puVar12 + -1;
                    puVar7[-1] = *puVar12;
                    puVar7 = puVar7 + -1;
                  }
                }
                *puVar8 = 1;
              }
              else {
                local_2c = (undefined1 *)(uVar5 + (uVar5 >> 1) + (uVar5 >> 3));
                if (local_2c < (undefined1 *)(uVar5 + 0x20)) {
                  local_2c = (undefined1 *)(uVar5 + 0x20);
                }
                local_30 = (undefined1 *)fn_00100fc6(local_2c,0);
                puVar7 = local_30;
                for (puVar12 = (undefined1 *)*puVar16; puVar12 != puVar8; puVar12 = puVar12 + 1) {
                  if (puVar7 != (undefined1 *)0x0) {
                    *puVar7 = *puVar12;
                  }
                  puVar7 = puVar7 + 1;
                }
                if (local_30 + ((int)puVar8 - *puVar16) != (undefined1 *)0x0) {
                  local_30[(int)puVar8 - *puVar16] = (char)local_28;
                }
                puVar7 = *(undefined1 **)(param_1 + 0x69c);
                puVar12 = local_30 + ((int)puVar8 - *puVar16);
                for (; puVar8 != puVar7; puVar8 = puVar8 + 1) {
                  puVar12 = puVar12 + 1;
                  if (puVar12 != (undefined1 *)0x0) {
                    *puVar12 = *puVar8;
                  }
                }
                uVar9 = *puVar16;
                uVar14 = *(uint *)(param_1 + 0x69c);
                uVar5 = uVar9;
                if (uVar14 < uVar9) {
                  do {
                    uVar5 = uVar5 + 1;
                  } while (uVar5 != uVar14);
                }
                fn_001008c4(uVar9,*(int *)(param_1 + 0x6a0) - uVar9,0);
                *puVar16 = (uint)local_30;
                *(undefined1 **)(param_1 + 0x69c) = local_30 + (uVar14 - uVar9) + 1;
                *(undefined1 **)(param_1 + 0x6a0) = local_2c + (int)local_30;
              }
            }
            else {
              *(undefined1 **)(param_1 + 0x69c) = puVar8 + 1;
joined_r0x0021e1fc:
              if (puVar8 != (undefined1 *)0x0) {
                *puVar8 = (char)local_28;
              }
            }
          }
        }
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < (int)puVar4);
    }
    iVar13 = *(int *)(param_1 + 0x698);
    iVar10 = *(int *)(param_1 + 0x69c) - iVar13;
    iVar3 = iVar10 + -1;
    if (iVar10 != 0 && -2 < iVar3) {
      do {
        if (*(char *)(iVar13 + iVar3) == '\x01') {
          *(undefined1 *)(iVar13 + iVar3) = 0;
          return 1;
        }
        iVar10 = iVar3 + -1;
        bVar18 = iVar3 != 0;
        iVar3 = iVar10;
      } while (bVar18 && -2 < iVar10);
    }
  }
  return 1;
}



void fn_0021e3f4(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 0x698);
  uVar1 = *(uint *)(param_1 + 0x69c);
  if (uVar3 != uVar1) {
    uVar2 = uVar3;
    if (uVar1 <= uVar3) {
      do {
        uVar2 = uVar2 + 1;
      } while (uVar2 != uVar1);
    }
    *(uint *)(param_1 + 0x69c) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x698) = 0;
  uVar2 = *(uint *)(param_1 + 0x69c);
  *(undefined4 *)(param_1 + 0x69c) = 0;
  iVar4 = *(int *)(param_1 + 0x6a0);
  *(undefined4 *)(param_1 + 0x6a0) = 0;
  uVar1 = uVar3;
  if (uVar2 <= uVar3) {
    for (; uVar1 != uVar2; uVar1 = uVar1 + 1) {
    }
  }
  fn_002feef8(uVar3,iVar4 - uVar3,0);
  return;
}



void fn_0021dcfc(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  uint uVar4;
  float in_s0;
  float fVar5;
  
  if (*(int *)(param_1 + 0x28) == -1) {
    return;
  }
  iVar2 = fn_001854ac(*(undefined4 *)(param_1 + 4));
  uVar3 = fn_00176970();
  fVar5 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar5 == in_s0) << 0x1e;
  uVar4 = uVar1 | (uint)(in_s0 <= fVar5) << 0x1d;
  if ((bool)((byte)(uVar4 >> 0x1d) & 1) && !SUB41(uVar1 >> 0x1e,0)) {
    if (*(int *)(param_1 + 0x2c) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    }
  }
  else {
    uVar3 = fn_00176970(iVar2);
    in_s0 = (float)VectorUnsignedToFloat(uVar3,(byte)(uVar4 >> 0x16) & 3);
    if (*(int *)(param_1 + 0x2c) == -1) {
      fn_0021b654(param_1,5,(char *)&DAT_0021dd98,1);
    }
  }
  *(float *)(iVar2 + 0x10) = in_s0;
  return;
}


