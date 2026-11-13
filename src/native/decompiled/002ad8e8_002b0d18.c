#include "002ad8e8_002b0d18.h"



void fn_002b0d18(int param_1,uint param_2,undefined1 param_3)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  undefined2 *puVar9;
  short *psVar10;
  undefined2 *puVar11;
  short *psVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  short *psVar16;
  undefined4 uVar17;
  uint local_30;
  uint local_2c [2];
  
  *(undefined1 *)(param_1 + 0x10) = param_3;
  uVar13 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  uVar8 = *(uint *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar14 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar2 = uVar13;
  if (uVar8 < uVar13) {
    do {
      uVar2 = uVar2 + 2;
    } while (uVar2 != uVar8);
  }
  fn_001008c4(uVar13,(int)(iVar14 - uVar13) >> 1,0);
  uVar2 = *(uint *)(param_1 + 8);
  uVar8 = *(uint *)(param_1 + 4);
  if (uVar8 != uVar2) {
    uVar13 = uVar8;
    if (uVar2 <= uVar8) {
      do {
        uVar13 = uVar13 + 2;
      } while (uVar13 != uVar2);
    }
    *(uint *)(param_1 + 8) = uVar2 - (uVar2 - uVar8 & 0xfffffffe);
  }
  puVar15 = (uint *)(param_1 + 4);
  local_30 = 0x44c;
  if ((uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 1) < 0x44c) {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 1;
    local_2c[0] = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
    if (local_2c[0] < uVar2 + 0x20) {
      local_2c[0] = uVar2 + 0x20;
    }
    puVar3 = local_2c;
    if (local_2c[0] < 0x44d) {
      puVar3 = &local_30;
    }
    uVar2 = *puVar3;
    puVar4 = (undefined2 *)fn_00100fc6(uVar2 << 1,0);
    puVar11 = *(undefined2 **)(param_1 + 8);
    puVar5 = puVar4;
    for (puVar9 = (undefined2 *)*puVar15; puVar9 != puVar11; puVar9 = puVar9 + 1) {
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = *puVar9;
      }
      puVar5 = puVar5 + 1;
    }
    uVar13 = *puVar15;
    uVar8 = uVar13;
    if (*(uint *)(param_1 + 8) < uVar13) {
      do {
        uVar8 = uVar8 + 2;
      } while (uVar8 != *(uint *)(param_1 + 8));
    }
    fn_001008c4(uVar13,(int)(*(int *)(param_1 + 0xc) - uVar13) >> 1,0);
    uVar8 = *puVar15;
    *puVar15 = (uint)puVar4;
    *(uint *)(param_1 + 8) = (*(int *)(param_1 + 8) - uVar8 & 0xfffffffe) + (int)puVar4;
    *(undefined2 **)(param_1 + 0xc) = puVar4 + uVar2;
  }
  uVar17 = *(undefined4 *)(DAT_00897804 + 0x14);
  sVar1 = 1;
  do {
    iVar14 = (int)sVar1;
    iVar6 = fn_00163940();
    if (iVar6 != 0) {
      if (param_2 == 0) {
        iVar6 = fn_006b2aa0(uVar17,iVar14);
        if (iVar6 != 0) {
          iVar6 = fn_00660e2c(iVar14);
          iVar14 = fn_00660ec0(iVar14);
          switch(*(undefined1 *)(param_1 + 0x11)) {
          case 0:
            if ((iVar6 != 6 && iVar6 != 7) && ((iVar6 != 8 && iVar6 != 9) && iVar6 != 10)) {
LAB_002b0fb0:
              psVar16 = *(short **)(param_1 + 8);
              puVar15 = (uint *)(param_1 + 4);
              if (psVar16 == *(short **)(param_1 + 0xc)) {
                uVar2 = (int)((int)psVar16 - *puVar15) >> 1;
                if ((uint)((int)((int)*(short **)(param_1 + 0xc) - *puVar15) >> 1) <= uVar2) {
                  local_30 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
                  if (local_30 < uVar2 + 0x20) {
                    local_30 = uVar2 + 0x20;
                  }
                  psVar7 = (short *)fn_00100fc6(local_30 << 1,0);
                  psVar12 = psVar7;
                  for (psVar10 = (short *)*puVar15; psVar10 != psVar16; psVar10 = psVar10 + 1) {
                    if (psVar12 != (short *)0x0) {
                      *psVar12 = *psVar10;
                    }
                    psVar12 = psVar12 + 1;
                  }
                  psVar10 = (short *)(((int)psVar16 - *puVar15 & 0xfffffffe) + (int)psVar7);
                  if (psVar10 != (short *)0x0) {
                    *psVar10 = sVar1;
                  }
                  psVar12 = *(short **)(param_1 + 8);
                  psVar10 = (short *)(((int)psVar16 - *puVar15 & 0xfffffffe) + (int)psVar7);
                  for (; psVar16 != psVar12; psVar16 = psVar16 + 1) {
                    psVar10 = psVar10 + 1;
                    if (psVar10 != (short *)0x0) {
                      *psVar10 = *psVar16;
                    }
                  }
                  uVar8 = *puVar15;
                  uVar13 = *(uint *)(param_1 + 8);
                  iVar14 = (int)(uVar13 - uVar8) >> 1;
                  uVar2 = uVar8;
                  if (uVar13 < uVar8) {
                    do {
                      uVar2 = uVar2 + 2;
                    } while (uVar2 != uVar13);
                  }
                  goto LAB_002b12f0;
                }
                *(short **)(param_1 + 8) = psVar16 + 1;
                if (psVar16 != (short *)0x0) {
                  *psVar16 = psVar16[-1];
                }
                psVar10 = psVar16 + -1;
                psVar12 = psVar16;
                if (psVar16 < psVar10) {
                  iVar14 = (int)psVar10 - (int)psVar16;
                  if (0 < iVar14) {
                    if (iVar14 * 0x40000000 < 0) {
                      psVar10 = psVar16 + -2;
                      psVar12 = psVar16 + -1;
                      *psVar12 = *psVar10;
                    }
                    for (iVar14 = iVar14 >> 2; iVar14 != 0; iVar14 = iVar14 + -1) {
                      psVar12[-1] = psVar10[-1];
                      psVar10 = psVar10 + -2;
                      psVar12 = psVar12 + -2;
                      *psVar12 = *psVar10;
                    }
                  }
                }
                else {
                  while (psVar16 != psVar10) {
                    psVar10 = psVar10 + -1;
                    psVar12[-1] = *psVar10;
                    psVar12 = psVar12 + -1;
                  }
                }
                goto LAB_002b1224;
              }
              *(short **)(param_1 + 8) = psVar16 + 1;
              goto joined_r0x002b0fd0;
            }
            break;
          case 1:
            if (iVar6 == 1) goto LAB_002b0fb0;
            break;
          case 2:
            if ((iVar6 == 3 || iVar6 == 4) || iVar6 == 5) goto LAB_002b0fb0;
            break;
          case 3:
            if ((iVar6 == 6 || iVar6 == 7) || (iVar6 == 8 || iVar6 == 9)) goto LAB_002b0fb0;
            break;
          case 4:
            if (iVar14 == 0x23) goto LAB_002b0fb0;
            break;
          case 5:
            if (iVar6 == 10) goto LAB_002b0fb0;
            break;
          case 6:
            if (iVar6 == 2) goto LAB_002b0fb0;
          }
        }
      }
      else if (((param_2 == 1) && (iVar6 = fn_00660e88(iVar14), iVar6 != 0)) &&
              (iVar14 = fn_006b2aa0(uVar17,iVar14), iVar14 != 0)) {
        psVar16 = *(short **)(param_1 + 8);
        puVar15 = (uint *)(param_1 + 4);
        if (psVar16 == *(short **)(param_1 + 0xc)) {
          uVar2 = (int)((int)psVar16 - *puVar15) >> 1;
          if (uVar2 < (uint)((int)((int)*(short **)(param_1 + 0xc) - *puVar15) >> 1)) {
            *(short **)(param_1 + 8) = psVar16 + 1;
            if (psVar16 != (short *)0x0) {
              *psVar16 = psVar16[-1];
            }
            psVar10 = psVar16 + -1;
            psVar12 = psVar16;
            if (psVar16 < psVar10) {
              iVar14 = (int)psVar10 - (int)psVar16;
              if (0 < iVar14) {
                if (iVar14 * 0x40000000 < 0) {
                  psVar10 = psVar16 + -2;
                  psVar12 = psVar16 + -1;
                  *psVar12 = *psVar10;
                }
                for (iVar14 = iVar14 >> 2; iVar14 != 0; iVar14 = iVar14 + -1) {
                  psVar12[-1] = psVar10[-1];
                  psVar10 = psVar10 + -2;
                  psVar12 = psVar12 + -2;
                  *psVar12 = *psVar10;
                }
              }
            }
            else {
              while (psVar16 != psVar10) {
                psVar10 = psVar10 + -1;
                psVar12[-1] = *psVar10;
                psVar12 = psVar12 + -1;
              }
            }
LAB_002b1224:
            *psVar16 = sVar1;
          }
          else {
            local_30 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
            if (local_30 < uVar2 + 0x20) {
              local_30 = uVar2 + 0x20;
            }
            psVar7 = (short *)fn_00100fc6(local_30 << 1,0);
            psVar12 = psVar7;
            for (psVar10 = (short *)*puVar15; psVar10 != psVar16; psVar10 = psVar10 + 1) {
              if (psVar12 != (short *)0x0) {
                *psVar12 = *psVar10;
              }
              psVar12 = psVar12 + 1;
            }
            psVar10 = (short *)(((int)psVar16 - *puVar15 & 0xfffffffe) + (int)psVar7);
            if (psVar10 != (short *)0x0) {
              *psVar10 = sVar1;
            }
            psVar12 = *(short **)(param_1 + 8);
            psVar10 = (short *)(((int)psVar16 - *puVar15 & 0xfffffffe) + (int)psVar7);
            for (; psVar16 != psVar12; psVar16 = psVar16 + 1) {
              psVar10 = psVar10 + 1;
              if (psVar10 != (short *)0x0) {
                *psVar10 = *psVar16;
              }
            }
            uVar8 = *puVar15;
            uVar13 = *(uint *)(param_1 + 8);
            iVar14 = (int)(uVar13 - uVar8) >> 1;
            uVar2 = uVar8;
            if (uVar13 < uVar8) {
              do {
                uVar2 = uVar2 + 2;
              } while (uVar2 != uVar13);
            }
LAB_002b12f0:
            fn_001008c4(uVar8,(int)(*(int *)(param_1 + 0xc) - uVar8) >> 1,0);
            *(short **)(param_1 + 0xc) = psVar7 + local_30;
            *(short **)(param_1 + 8) = psVar7 + iVar14 + 1;
            *(short **)(param_1 + 4) = psVar7;
          }
        }
        else {
          *(short **)(param_1 + 8) = psVar16 + 1;
joined_r0x002b0fd0:
          if (psVar16 != (short *)0x0) {
            *psVar16 = sVar1;
          }
        }
      }
    }
    sVar1 = sVar1 + 1;
    if (1099 < sVar1) {
      if (param_2 < 2) {
        fn_0022e4c4(param_1 + 4,1);
        return;
      }
      return;
    }
  } while( true );
}



undefined4 fn_002ad8e8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  float in_s0;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_s2;
  float fVar12;
  longlong lVar11;
  ulonglong uVar13;
  float local_58;
  float local_54;
  float local_48;
  float fStack_44;
  float fStack_40;
  
  iVar1 = fn_006a7ea4(param_2);
  if (*(int *)(param_1 + 0xc) == -1) {
    iVar2 = fn_006f7a5c(DAT_008977e0);
    if (*(int *)(param_1 + 0xc) == -1) {
      iVar5 = fn_006f7a5c(DAT_008977e0);
      in_s0 = *(float *)(iVar5 + 0x28);
      in_s2 = *(float *)(iVar5 + 0x30);
    }
    else {
      fn_006a99dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xc) * 0x1c + 4));
    }
    local_58 = in_s0 - *(float *)(iVar2 + 0x1c);
    fVar8 = in_s2 - *(float *)(iVar2 + 0x24);
    if (iVar1 == 0) {
      pcVar7 = fn_002afc68;
      lVar11 = 0;
    }
    else {
      pcVar7 = (code *)&UNK_002afc54;
      lVar11 = 0x40c90fdb00000000;
    }
    iVar1 = -1;
    iVar6 = 0;
    uVar4 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
    fVar10 = local_58 * local_58 + fVar8 * fVar8;
    iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
    iVar5 = (iVar5 >> 4) - (iVar5 >> 0x1f);
    uVar13 = (ulonglong)(uint)SQRT(fVar10);
    local_54 = fVar8;
    if (0 < iVar5) {
      do {
        fVar12 = (float)((ulonglong)lVar11 >> 0x20);
        fVar9 = fVar10;
        if (*(int *)(param_1 + 0xc) != iVar6) {
          fn_006a99dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6 * 0x1c + 4));
          fVar9 = (float)uVar13;
          local_48 = fVar8;
          fStack_44 = fVar10;
          fStack_40 = in_s2;
          fn_002af684(param_1,&local_48,(float *)(iVar2 + 0x1c),&local_58);
          fVar8 = fVar12;
          lVar11 = CONCAT44(fVar8,fVar9);
          iVar3 = (*pcVar7)();
          if (iVar3 != 0) {
            lVar11 = lVar11 << 0x20;
            iVar1 = iVar6;
          }
        }
        iVar6 = iVar6 + 1;
        fVar10 = fVar9;
      } while (iVar6 < iVar5);
      if (iVar1 != -1) {
        *(int *)(param_1 + 0xc) = iVar1;
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
    }
  }
  else {
    iVar1 = fn_002ad000(param_1);
    if (*(int *)(param_1 + 0xc) != iVar1) {
      *(int *)(param_1 + 0xc) = iVar1;
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  return 1;
}


