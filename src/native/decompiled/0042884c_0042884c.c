#include "0042884c_0042884c.h"



/* WARNING: Removing unreachable block (ram,0x00428c30) */
/* WARNING: Removing unreachable block (ram,0x00428c3c) */
/* WARNING: Removing unreachable block (ram,0x00428c08) */
/* WARNING: Removing unreachable block (ram,0x00428c0c) */
/* WARNING: Removing unreachable block (ram,0x00428c10) */
/* WARNING: Removing unreachable block (ram,0x00428c14) */
/* WARNING: Removing unreachable block (ram,0x00428c18) */
/* WARNING: Removing unreachable block (ram,0x00428c58) */
/* WARNING: Removing unreachable block (ram,0x00428c68) */
/* WARNING: Removing unreachable block (ram,0x00428c40) */
/* WARNING: Removing unreachable block (ram,0x00428c48) */
/* WARNING: Removing unreachable block (ram,0x00428c4c) */
/* WARNING: Removing unreachable block (ram,0x00428c50) */

void fn_0042884c(int *param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  short *psVar7;
  short *psVar8;
  undefined2 *puVar9;
  short *psVar10;
  uint *puVar11;
  int iVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  int iVar17;
  uint uVar18;
  short *local_88;
  short *local_84;
  short *local_80;
  short local_78;
  short local_74;
  short local_6c;
  uint local_68 [2];
  uint local_60 [4];
  short *local_50;
  short *local_4c;
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_2c;
  int *piStack_28;
  
  local_2c = param_1;
  piStack_28 = param_2;
  fn_0078f8ec(param_2,*param_2,param_2[1]);
  iVar4 = fn_006f7a0c(DAT_008977e0);
  piVar5 = (int *)(**(code **)(**(int **)(iVar4 + 0x50) + 0x44))();
  iVar4 = piVar5[1] - *piVar5 >> 0x1f;
  if ((piVar5[1] - *piVar5) / 0x2c + iVar4 != iVar4) {
    fn_003908bc(local_2c,param_2);
    local_50 = (short *)0x0;
    local_4c = (short *)0x0;
    local_48 = 0;
    fn_006c9184(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),&local_50);
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    fn_00390f28(local_2c,&local_40,param_2,&local_50);
    if (*(char *)(*(int *)(*(int *)(DAT_008977e0 + 0x40) + 4) + 0x20) != '\x01') {
      sVar2 = *local_50;
      iVar17 = (int)sVar2;
      uVar6 = fn_006c9514(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),iVar17);
      iVar4 = fn_006c8a2c(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4));
      if (iVar4 + 1U < 3) {
        uVar18 = 1;
      }
      else {
        uVar18 = iVar4 / 2;
      }
      (**(code **)(*local_2c + 0xc))(local_2c,&local_40,iVar17);
      psVar15 = (short *)0x0;
      local_88 = (short *)0x0;
      local_84 = (short *)0x0;
      local_80 = (short *)0x0;
      iVar4 = param_2[1] - *param_2 >> 0x1f;
      if ((param_2[1] - *param_2) / 0x34 + iVar4 != iVar4) {
        do {
          psVar16 = local_84;
          iVar4 = *param_2 + (int)psVar15 * 0x34;
          sVar1 = (short)psVar15;
          psVar14 = local_84;
          if ((uVar6 & 8) == 0) {
            if ((*(byte *)(iVar4 + 8) & 7) == uVar6) {
              local_78 = sVar1;
              if (local_84 != local_80) goto joined_r0x00428a2c;
LAB_00428a38:
              fn_0079e460(&local_88);
              psVar14 = local_84;
            }
          }
          else if (*(ushort *)(iVar4 + 8) == uVar6) {
            local_74 = sVar1;
            if (local_84 == local_80) goto LAB_00428a38;
joined_r0x00428a2c:
            psVar14 = local_84 + 1;
            if (local_84 != (short *)0x0) {
              local_84 = local_84 + 1;
              *psVar16 = sVar1;
              psVar14 = local_84;
            }
          }
          local_84 = psVar14;
          psVar15 = (short *)((int)psVar15 + 1);
        } while (psVar15 < (short *)((param_2[1] - *param_2) / 0x34));
      }
      psVar14 = local_84;
      psVar16 = local_88;
      if (local_88 != local_84) {
        psVar15 = local_88 + 1;
      }
      if (local_88 != local_84 && psVar15 != local_84) {
        do {
          iVar4 = fn_00163868(((int)psVar15 - (int)psVar16 >> 1) + 1);
          psVar8 = psVar16 + iVar4;
          sVar1 = *psVar15;
          psVar7 = psVar15 + 1;
          *psVar15 = *psVar8;
          *psVar8 = sVar1;
          psVar15 = psVar7;
        } while (psVar7 != psVar14);
      }
      psVar15 = local_84;
      uVar6 = (int)local_84 - (int)local_88 >> 1;
      if (uVar6 < uVar18) {
        iVar4 = uVar18 - uVar6;
        if (iVar4 != 0) {
          uVar6 = iVar4 + uVar6;
          if ((uint)((int)local_80 - (int)local_88 >> 1) < uVar6) {
            local_68[0] = uVar6;
            uVar18 = (int)local_84 - (int)local_88 >> 1;
            local_60[0] = uVar18 + (uVar18 >> 1) + (uVar18 >> 3);
            if (local_60[0] < uVar18 + 0x20) {
              local_60[0] = uVar18 + 0x20;
            }
            puVar11 = local_60;
            if (local_60[0] <= uVar6) {
              puVar11 = local_68;
            }
            uVar6 = *puVar11;
            psVar8 = (short *)fn_00100fc6(uVar6 << 1,0);
            psVar14 = psVar8;
            for (psVar16 = local_88; psVar16 != psVar15; psVar16 = psVar16 + 1) {
              if (psVar14 != (short *)0x0) {
                *psVar14 = *psVar16;
              }
              psVar14 = psVar14 + 1;
            }
            puVar9 = (undefined2 *)(((int)psVar15 - (int)local_88 & 0xfffffffeU) + (int)psVar8);
            for (iVar12 = iVar4; iVar12 != 0; iVar12 = iVar12 + -1) {
              if (puVar9 != (undefined2 *)0x0) {
                *puVar9 = 0;
              }
              puVar9 = puVar9 + 1;
            }
            psVar16 = psVar8 + iVar4 + ((int)psVar15 - (int)local_88 >> 1);
            for (; psVar15 != local_84; psVar15 = psVar15 + 1) {
              if (psVar16 != (short *)0x0) {
                *psVar16 = *psVar15;
              }
              psVar16 = psVar16 + 1;
            }
            iVar12 = (int)local_84 - (int)local_88;
            psVar15 = local_88;
            if (local_84 <= local_88) {
              for (; psVar15 != local_84; psVar15 = psVar15 + 1) {
              }
            }
            fn_001008c4(local_88,(int)local_80 - (int)local_88 >> 1,0);
            local_80 = psVar8 + uVar6;
            local_88 = psVar8;
            psVar15 = psVar8 + (iVar12 >> 1) + iVar4;
          }
          else {
            psVar15 = local_84 + iVar4;
            psVar16 = local_84 + iVar4;
            if (psVar16 < local_84) {
              psVar7 = local_84 + -iVar4;
              psVar8 = local_84;
              for (psVar14 = psVar7; psVar14 != local_84; psVar14 = psVar14 + 1) {
                if (psVar8 != (short *)0x0) {
                  *psVar8 = *psVar14;
                }
                psVar8 = psVar8 + 1;
              }
              psVar14 = local_84;
              if (local_84 < psVar7) {
                iVar4 = (int)psVar7 - (int)local_84;
                if (0 < iVar4) {
                  if (iVar4 * 0x40000000 < 0) {
                    psVar7 = psVar7 + -1;
                    psVar14 = local_84 + -1;
                    *psVar14 = *psVar7;
                  }
                  for (iVar4 = iVar4 >> 2; iVar4 != 0; iVar4 = iVar4 + -1) {
                    psVar14[-1] = psVar7[-1];
                    psVar7 = psVar7 + -2;
                    psVar14 = psVar14 + -2;
                    *psVar14 = *psVar7;
                  }
                }
              }
              else {
                while (local_84 != psVar7) {
                  psVar7 = psVar7 + -1;
                  psVar14[-1] = *psVar7;
                  psVar14 = psVar14 + -1;
                }
              }
              if (local_84 < psVar16) {
                iVar4 = (int)psVar16 - (int)local_84;
                if (0 < iVar4) {
                  psVar16 = local_84;
                  if (iVar4 * 0x40000000 < 0) {
                    psVar16 = local_84 + 1;
                    *local_84 = 0;
                  }
                  for (iVar4 = iVar4 >> 2; iVar4 != 0; iVar4 = iVar4 + -1) {
                    psVar14 = psVar16 + 1;
                    *psVar16 = 0;
                    psVar16 = psVar16 + 2;
                    *psVar14 = 0;
                  }
                }
              }
              else {
                for (; local_84 != psVar16; local_84 = local_84 + 1) {
                  *local_84 = 0;
                }
              }
            }
            else {
              for (; iVar4 != 0; iVar4 = iVar4 + -1) {
                if (local_84 != (short *)0x0) {
                  *local_84 = 0;
                }
                local_84 = local_84 + 1;
              }
            }
          }
        }
      }
      else if ((uVar18 < uVar6) && (psVar16 = local_88 + uVar18, local_88 != local_84)) {
        psVar15 = psVar16;
        if (local_84 < psVar16) {
          do {
            psVar15 = psVar15 + 1;
          } while (psVar15 != local_84);
        }
        psVar15 = (short *)((int)local_84 - ((int)local_84 - (int)psVar16 & 0xfffffffeU));
      }
      local_84 = psVar15;
      psVar16 = local_84;
      psVar15 = local_88;
      if (local_88 != local_84) {
        iVar4 = (int)local_84 - (int)local_88;
        fn_007b3030(local_88,local_84,iVar4 >> 1);
        psVar14 = psVar15;
        if (iVar4 < 0x21) {
          while (psVar8 = psVar14 + 1, psVar8 != psVar16) {
            sVar1 = *psVar8;
            psVar7 = psVar8;
            if (sVar1 < *psVar15) {
              psVar7 = psVar14 + 2;
              psVar10 = psVar8;
              if (psVar15 < psVar8) {
                iVar4 = (int)psVar8 - (int)psVar15;
                if (0 < iVar4) {
                  if (iVar4 * 0x40000000 < 0) {
                    *psVar8 = *psVar14;
                    psVar10 = psVar14;
                    psVar7 = psVar8;
                  }
                  for (iVar4 = iVar4 >> 2; iVar4 != 0; iVar4 = iVar4 + -1) {
                    psVar7[-1] = psVar10[-1];
                    psVar10 = psVar10 + -2;
                    psVar7 = psVar7 + -2;
                    *psVar7 = *psVar10;
                  }
                }
              }
              else {
                while (psVar15 != psVar10) {
                  psVar7 = psVar7 + -1;
                  *psVar7 = psVar10[-1];
                  psVar10 = psVar10 + -1;
                }
              }
              *psVar15 = sVar1;
              psVar14 = psVar8;
            }
            else {
              while( true ) {
                if (psVar7[-1] <= sVar1) break;
                *psVar7 = psVar7[-1];
                psVar7 = psVar7 + -1;
              }
              *psVar7 = sVar1;
              local_78 = sVar1;
              psVar14 = psVar8;
            }
          }
        }
        else {
          psVar8 = psVar15 + 0x10;
          while (psVar7 = psVar14 + 1, psVar7 != psVar8) {
            sVar1 = *psVar7;
            psVar10 = psVar7;
            if (sVar1 < *psVar15) {
              psVar10 = psVar14 + 2;
              psVar13 = psVar7;
              if (psVar15 < psVar7) {
                iVar4 = (int)psVar7 - (int)psVar15;
                if (0 < iVar4) {
                  if (iVar4 * 0x40000000 < 0) {
                    *psVar7 = *psVar14;
                    psVar13 = psVar14;
                    psVar10 = psVar7;
                  }
                  for (iVar4 = iVar4 >> 2; iVar4 != 0; iVar4 = iVar4 + -1) {
                    psVar10[-1] = psVar13[-1];
                    psVar13 = psVar13 + -2;
                    psVar10 = psVar10 + -2;
                    *psVar10 = *psVar13;
                  }
                }
              }
              else {
                while (psVar15 != psVar13) {
                  psVar10 = psVar10 + -1;
                  *psVar10 = psVar13[-1];
                  psVar13 = psVar13 + -1;
                }
              }
              *psVar15 = sVar1;
              psVar14 = psVar7;
            }
            else {
              while( true ) {
                if (psVar10[-1] <= sVar1) break;
                *psVar10 = psVar10[-1];
                psVar10 = psVar10 + -1;
              }
              *psVar10 = sVar1;
              local_78 = sVar1;
              psVar14 = psVar7;
            }
          }
          for (; psVar8 != psVar16; psVar8 = psVar8 + 1) {
            local_6c = *psVar8;
            psVar15 = psVar8;
            while( true ) {
              sVar1 = psVar15[-1];
              if (sVar1 <= local_6c) break;
              *psVar15 = sVar1;
              psVar15 = psVar15 + -1;
            }
            *psVar15 = local_6c;
          }
        }
      }
      uVar6 = 0;
      if ((int)local_84 - (int)local_88 >> 1 != 0) {
        do {
          uVar18 = uVar6 + 1;
          *(undefined2 *)(*param_2 + local_88[uVar6] * 0x34 + 4) = 1;
          *(short *)(*param_2 + local_88[uVar6] * 0x34 + 10) = sVar2;
          uVar6 = uVar18;
        } while (uVar18 < (uint)((int)local_84 - (int)local_88 >> 1));
      }
      iVar4 = *(int *)(*(int *)(DAT_008977e0 + 0x40) + 4);
      uVar3 = fn_006c9504(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),iVar17);
      *(undefined2 *)(iVar4 + 0x4c) = uVar3;
      psVar15 = local_88;
      if (local_84 < local_88) {
        do {
          psVar15 = psVar15 + 1;
        } while (psVar15 != local_84);
      }
      fn_001008c4(local_88,(int)local_80 - (int)local_88 >> 1,0);
    }
    fn_00390d6c(local_2c,param_2,&local_40);
    fn_0078fd10(&local_40);
    psVar15 = local_50;
    if (local_4c < local_50) {
      do {
        psVar15 = psVar15 + 1;
      } while (psVar15 != local_4c);
    }
    fn_001008c4(local_50,local_48 - (int)local_50 >> 1,0);
  }
  return;
}


