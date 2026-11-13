#include "003a2a90_003a2a90.h"



/* WARNING: Removing unreachable block (ram,0x003a2c80) */
/* WARNING: Removing unreachable block (ram,0x003a2c84) */
/* WARNING: Removing unreachable block (ram,0x003a2c88) */
/* WARNING: Removing unreachable block (ram,0x003a2c8c) */
/* WARNING: Removing unreachable block (ram,0x003a2c90) */
/* WARNING: Removing unreachable block (ram,0x003a2de4) */
/* WARNING: Removing unreachable block (ram,0x003a2dec) */
/* WARNING: Removing unreachable block (ram,0x003a2df4) */

void fn_003a2a90(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  bool bVar17;
  bool bVar18;
  uint local_4c [4];
  undefined4 *local_3c;
  undefined4 *local_38;
  uint local_34;
  undefined1 *local_30;
  
  puVar8 = (undefined4 *)0x0;
  puVar10 = (undefined4 *)0x0;
  local_38 = (undefined4 *)0x0;
  local_3c = (undefined4 *)0x0;
  puVar15 = (undefined4 *)0x0;
  puVar9 = (undefined4 *)0x0;
  uVar12 = 0;
  puVar14 = puVar8;
  puVar7 = puVar9;
  if (0 < *param_1) {
    do {
      uVar13 = param_1[2] - param_1[1] >> 2;
      if (uVar13 <= uVar12) {
        fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar12,uVar13);
      }
      uVar11 = *(undefined4 *)(param_1[1] + uVar12 * 4);
      iVar2 = fn_002043cc(DAT_00897840,uVar11);
      if (*(char *)(iVar2 + 0x10) == '\x02') {
        puVar9 = puVar7;
        if (puVar14 == local_38) {
          uVar13 = (int)puVar14 - (int)puVar10 >> 2;
          if (uVar13 < (uint)((int)local_38 - (int)puVar10 >> 2)) {
            puVar7 = puVar14 + -1;
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = puVar14[-1];
            }
            puVar8 = puVar14 + 1;
            puVar4 = puVar14;
            if (puVar14 < puVar7) {
              iVar2 = (int)puVar7 - (int)puVar14;
              if (0 < iVar2) {
                if (iVar2 * 0x20000000 < 0) {
                  puVar7 = puVar14 + -2;
                  puVar4 = puVar14 + -1;
                  *puVar4 = *puVar7;
                }
                for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
                  puVar4[-1] = puVar7[-1];
                  puVar7 = puVar7 + -2;
                  puVar4 = puVar4 + -2;
                  *puVar4 = *puVar7;
                }
              }
            }
            else {
              while (puVar14 != puVar7) {
                puVar7 = puVar7 + -1;
                puVar4[-1] = *puVar7;
                puVar4 = puVar4 + -1;
              }
            }
            *puVar14 = uVar11;
          }
          else {
            uVar3 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
            if (uVar3 < uVar13 + 0x20) {
              uVar3 = uVar13 + 0x20;
            }
            puVar4 = (undefined4 *)fn_00100fc6(uVar3 << 2,0);
            puVar7 = puVar4;
            for (puVar8 = puVar10; puVar8 != puVar14; puVar8 = puVar8 + 1) {
              if (puVar7 != (undefined4 *)0x0) {
                *puVar7 = *puVar8;
              }
              puVar7 = puVar7 + 1;
            }
            puVar8 = (undefined4 *)((int)puVar4 + ((int)puVar14 - (int)puVar10 & 0xfffffffcU));
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = uVar11;
            }
            iVar2 = (int)puVar14 - (int)puVar10;
            puVar8 = puVar10;
            if (puVar14 <= puVar10) {
              for (; puVar8 != puVar14; puVar8 = puVar8 + 1) {
              }
            }
            fn_001008c4(puVar10,(int)local_38 - (int)puVar10 >> 2,0);
            puVar10 = puVar4;
            puVar8 = puVar10 + (iVar2 >> 2) + 1;
            local_38 = puVar10 + uVar3;
          }
        }
        else {
          puVar8 = puVar14 + 1;
          if (puVar14 != (undefined4 *)0x0) {
            *puVar14 = uVar11;
          }
        }
      }
      else {
        local_4c[2] = fn_00247dec();
        puVar8 = puVar14;
        if (puVar7 == local_3c) {
          uVar13 = (int)puVar7 - (int)puVar15 >> 3;
          if (uVar13 < (uint)((int)local_3c - (int)puVar15 >> 3)) {
            if (puVar7 != (undefined4 *)0x0) {
              *puVar7 = puVar7[-2];
              puVar7[1] = puVar7[-1];
            }
            fn_007a1ca0(puVar7,puVar7 + -2);
            *puVar7 = uVar11;
            puVar7[1] = local_4c[2];
            puVar9 = puVar7 + 2;
          }
          else {
            uVar3 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
            if (uVar3 < uVar13 + 0x20) {
              uVar3 = uVar13 + 0x20;
            }
            puVar4 = (undefined4 *)fn_00100fc6(uVar3 << 3,0);
            puVar14 = puVar4;
            for (puVar9 = puVar15; puVar9 != puVar7; puVar9 = puVar9 + 2) {
              if (puVar14 != (undefined4 *)0x0) {
                uVar16 = puVar9[1];
                *puVar14 = *puVar9;
                puVar14[1] = uVar16;
              }
              puVar14 = puVar14 + 2;
            }
            puVar14 = (undefined4 *)((int)puVar4 + ((int)puVar7 - (int)puVar15 & 0xfffffff8U));
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = uVar11;
              puVar14[1] = local_4c[2];
            }
            iVar2 = (int)puVar7 - (int)puVar15;
            puVar14 = puVar15;
            if (puVar7 <= puVar15) {
              for (; puVar14 != puVar7; puVar14 = puVar14 + 2) {
              }
            }
            fn_001008c4(puVar15,(int)local_3c - (int)puVar15 >> 3,0);
            puVar15 = puVar4;
            local_3c = puVar15 + uVar3 * 2;
            puVar9 = puVar15 + (iVar2 >> 3) * 2 + 2;
          }
        }
        else {
          puVar9 = puVar7 + 2;
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = uVar11;
            puVar7[1] = local_4c[2];
          }
        }
      }
      uVar12 = uVar12 + 1;
      puVar14 = puVar8;
      puVar7 = puVar9;
    } while ((int)uVar12 < *param_1);
  }
  if (puVar15 == puVar9) goto LAB_003a3120;
  local_30 = &LAB_0065bf50;
  iVar2 = (int)puVar9 - (int)puVar15;
  uVar12 = (iVar2 >> 3) * 8;
  puVar14 = (undefined4 *)0x0;
  local_4c[0] = DAT_008c6cfc + 1;
  DAT_008c6cfc = local_4c[0];
  if (((DAT_008c6d00 & 1) == 0) && (iVar5 = fn_00303afc(&DAT_008c6d00), iVar5 != 0)) {
    DAT_008c6d04 = (undefined4 *)&DAT_008f9fe8;
  }
  if (DAT_008c6d04 == (undefined4 *)0x0) {
    uVar12 = 0;
    DAT_008c6cfc = DAT_008c6cfc - 1;
LAB_003a2f4c:
    DAT_008c6cfc = DAT_008c6cfc - 1;
  }
  else {
    fn_002feef8(0);
    if (uVar12 == 0) goto LAB_003a2f4c;
    bVar18 = 0xfff < uVar12;
    bVar17 = uVar12 == 0x1000;
    if (uVar12 < 0x1001) {
      bVar18 = local_4c[0] != 0;
      bVar17 = local_4c[0] == 1;
    }
    if (bVar18 && !bVar17) {
      puVar14 = (undefined4 *)fn_002ff600(uVar12);
      goto LAB_003a2f4c;
    }
    puVar14 = DAT_008c6d04;
  }
  puVar1 = local_30;
  uVar12 = uVar12 >> 3;
  uVar13 = iVar2 >> 3;
  if (puVar14 == (undefined4 *)0x0) {
    if (iVar2 < 0x78) {
      fn_007a56b4(puVar15,puVar9,local_30);
    }
    else {
      puVar14 = puVar15 + ((int)(uVar13 - (iVar2 >> 0x1f)) >> 1) * 2;
      fn_007b642c(puVar15,puVar14,local_30);
      fn_007b642c(puVar14,puVar9,puVar1);
      fn_007b6ca0(puVar15,puVar14,puVar9,(int)puVar14 - (int)puVar15 >> 3,
                   (int)puVar9 - (int)puVar14 >> 3,puVar1);
    }
  }
  else {
    local_34 = uVar12;
    local_4c[0] = uVar13;
    puVar6 = local_4c;
    if ((int)uVar12 <= (int)uVar13) {
      puVar6 = &local_34;
    }
    uVar13 = *puVar6;
    puVar7 = puVar14;
    for (puVar4 = puVar15; puVar4 != puVar15 + uVar13 * 2; puVar4 = puVar4 + 2) {
      if (puVar7 != (undefined4 *)0x0) {
        uVar11 = puVar4[1];
        *puVar7 = *puVar4;
        puVar7[1] = uVar11;
      }
      puVar7 = puVar7 + 2;
    }
    fn_007b7574(puVar15,puVar9,puVar14,uVar12,0,local_30);
    puVar7 = puVar14;
    if (puVar14 + uVar13 * 2 < puVar14) {
      do {
        puVar7 = puVar7 + 2;
      } while (puVar7 != puVar14 + uVar13 * 2);
    }
    DAT_008c6cfc = DAT_008c6cfc + 1;
    if (((DAT_008c6d00 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c6d00), iVar2 != 0)) {
      DAT_008c6d04 = (undefined4 *)&DAT_008f9fe8;
    }
    if (puVar14 == DAT_008c6d04) {
      DAT_008c6cfc = DAT_008c6cfc + -1;
    }
    else {
      fn_002feef8(puVar14);
    }
    DAT_008c6cfc = DAT_008c6cfc - 1;
  }
LAB_003a3120:
  fn_007902c0(param_1 + 4,*(undefined4 *)(&DAT_007c670c + *param_1 * 4),0xffffffff,0xffffffff,
               0xffffffff);
  uVar12 = 0;
  iVar2 = param_1[5] - param_1[4] >> 0x1f;
  if ((param_1[5] - param_1[4]) / 0xc + iVar2 == iVar2) {
LAB_003a3444:
    uVar12 = 0;
    local_4c[0] = 0;
    iVar2 = param_1[5] - param_1[4] >> 0x1f;
    if ((param_1[5] - param_1[4]) / 0xc + iVar2 != iVar2) {
      do {
        uVar13 = (param_1[5] - param_1[4]) / 0xc;
        if (uVar13 <= local_4c[0]) {
          fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,local_4c[0],uVar13);
        }
        iVar2 = 0;
        do {
          if (local_4c[iVar2 + -6] != 0xffffffff) {
            local_4c[3] = uVar12;
            uVar13 = param_1[2] - param_1[1] >> 2;
            if (uVar13 <= uVar12) {
              fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar12,uVar13);
            }
            uVar12 = uVar12 + 1;
            *(uint *)(param_1[1] + local_4c[3] * 4) = local_4c[iVar2 + -6];
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 2);
        local_4c[0] = local_4c[0] + 1;
      } while (local_4c[0] < (uint)((param_1[5] - param_1[4]) / 0xc));
    }
    iVar5 = param_1[5] - param_1[4];
    iVar2 = param_1[5] - param_1[4];
    for (uVar12 = 0; uVar12 < (uint)((iVar5 / 0xc + (iVar5 >> 0x1f)) - (iVar2 >> 0x1f));
        uVar12 = uVar12 + 1) {
    }
    puVar14 = puVar15;
    if (puVar9 < puVar15) {
      do {
        puVar14 = puVar14 + 2;
      } while (puVar14 != puVar9);
    }
    fn_001008c4(puVar15,(int)local_3c - (int)puVar15 >> 3,0,iVar2 * 0x2aaaaaab);
    puVar14 = puVar10;
    if (puVar8 < puVar10) {
      do {
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar8);
    }
    fn_002feef8(puVar10,(int)local_38 - (int)puVar10 >> 2,0);
    return;
  }
  do {
    iVar2 = 0;
    do {
      if ((int)puVar8 - (int)puVar10 >> 2 == 0) {
        if ((int)puVar9 - (int)puVar15 >> 3 != 0) {
          uVar13 = (param_1[5] - param_1[4]) / 0xc;
          if (uVar13 <= uVar12) {
            fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar12,uVar13);
          }
          *(undefined4 *)(param_1[4] + uVar12 * 0xc + iVar2 * 4) = *puVar15;
          if (puVar15 != puVar9) {
            puVar14 = puVar15 + 2;
            if (puVar9 != puVar14) {
              puVar7 = puVar15;
              if (puVar9 < puVar14) {
                for (; puVar14 != puVar9; puVar14 = puVar14 + 2) {
                  uVar11 = puVar14[1];
                  *puVar7 = *puVar14;
                  puVar7[1] = uVar11;
                  puVar7 = puVar7 + 2;
                }
              }
              else {
                iVar5 = (int)puVar9 - (int)puVar14;
                if (0 < iVar5) {
                  puVar7 = puVar15 + -2;
                  puVar4 = puVar15;
                  if (iVar5 * 0x10000000 < 0) {
                    *puVar15 = *puVar14;
                    puVar15[1] = puVar15[3];
                    puVar7 = puVar15;
                    puVar4 = puVar14;
                  }
                  for (iVar5 = iVar5 >> 4; iVar5 != 0; iVar5 = iVar5 + -1) {
                    uVar11 = puVar4[3];
                    puVar7[2] = puVar4[2];
                    puVar7[3] = uVar11;
                    uVar11 = puVar4[5];
                    puVar7[4] = puVar4[4];
                    puVar7[5] = uVar11;
                    puVar7 = puVar7 + 4;
                    puVar4 = puVar4 + 4;
                  }
                }
              }
            }
            puVar9 = puVar9 + -2;
          }
        }
      }
      else {
        uVar13 = (param_1[5] - param_1[4]) / 0xc;
        if (uVar13 <= uVar12) {
          fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar12,uVar13);
        }
        *(undefined4 *)(param_1[4] + uVar12 * 0xc + iVar2 * 4) = *puVar10;
        if (puVar10 != puVar8) {
          puVar14 = puVar10 + 1;
          if (puVar8 != puVar14) {
            puVar7 = puVar10;
            if (puVar8 < puVar14) {
              for (; puVar14 != puVar8; puVar14 = puVar14 + 1) {
                *puVar7 = *puVar14;
                puVar7 = puVar7 + 1;
              }
            }
            else {
              iVar5 = (int)puVar8 - (int)puVar14;
              if (0 < iVar5) {
                puVar7 = puVar10 + -1;
                puVar4 = puVar10;
                if (iVar5 * 0x20000000 < 0) {
                  *puVar10 = *puVar14;
                  puVar7 = puVar10;
                  puVar4 = puVar14;
                }
                for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
                  puVar7[1] = puVar4[1];
                  puVar4 = puVar4 + 2;
                  puVar7 = puVar7 + 2;
                  *puVar7 = *puVar4;
                }
              }
            }
          }
          puVar8 = puVar8 + -1;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    while( true ) {
      uVar12 = uVar12 + 1;
      iVar5 = param_1[5] - param_1[4] >> 0x1f;
      iVar2 = (param_1[5] - param_1[4]) / 0xc + iVar5;
      uVar13 = iVar2 - iVar5;
      if (uVar13 <= uVar12) goto LAB_003a3444;
      if (uVar12 == 1) {
        iVar2 = *param_1;
      }
      if (uVar12 != 1 || iVar2 != 5) break;
      if ((int)puVar9 - (int)puVar15 >> 3 == 0) {
        if ((int)puVar8 - (int)puVar10 >> 2 != 0) {
          if (uVar13 < 2) {
            fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar12,uVar13);
          }
          *(undefined4 *)(param_1[4] + 0xc) = *puVar10;
          puVar7 = puVar10;
          puVar14 = puVar10;
          if (puVar10 != puVar8) {
            while (puVar14 = puVar14 + 1, puVar14 != puVar8) {
              *puVar7 = *puVar14;
              puVar7 = puVar7 + 1;
            }
            puVar8 = puVar8 + -1;
          }
        }
      }
      else {
        if (uVar13 < 2) {
          fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar12,uVar13);
        }
        puVar9 = puVar9 + -2;
        *(undefined4 *)(param_1[4] + 0xc) = *puVar9;
      }
    }
  } while( true );
}


