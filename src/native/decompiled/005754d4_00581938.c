#include "005754d4_00581938.h"



void fn_00581938(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *unaff_r8;
  int iVar13;
  uint local_50 [4];
  undefined4 *local_40;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [8];
  undefined4 *local_2c;
  
  piVar1 = *(int **)(param_1 + 0xb4);
  local_50[2] = piVar1[10];
  iVar13 = piVar1[8];
  iVar2 = (**(code **)(*piVar1 + 0x14))();
  iVar3 = *(int *)(param_1 + 0xb4);
  piVar1 = (int *)(iVar3 + 4);
  local_50[0] = *(int *)(iVar3 + 8) - *piVar1 >> 2;
  local_50[1] = 0x20;
  puVar4 = local_50;
  if (local_50[0] < 0x20) {
    puVar4 = local_50 + 1;
  }
  uVar12 = *puVar4;
  puVar5 = (undefined4 *)fn_00100fc6(uVar12 << 2,0);
  puVar11 = *(undefined4 **)(iVar3 + 8);
  puVar6 = puVar5;
  for (puVar10 = (undefined4 *)*piVar1; puVar10 != puVar11; puVar10 = puVar10 + 1) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar10;
    }
    puVar6 = puVar6 + 1;
  }
  iVar13 = iVar13 * iVar2;
  iVar2 = 0;
  local_2c = puVar5 + (*(int *)(iVar3 + 8) - *piVar1 >> 2);
  if (0 < iVar13) {
    unaff_r8 = &DAT_00897804;
  }
  local_40 = puVar5 + uVar12;
  if (0 < iVar13) {
    do {
      iVar3 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb4),local_50[2],iVar2);
      if (iVar3 != 0) {
        uVar7 = fn_0028aad0(*(undefined4 *)(*unaff_r8 + 0xc),iVar3);
        fn_0020bbc4(auStack_38,uVar7);
        iVar8 = fn_00346ed0(*(undefined4 *)(param_1 + 0xb4),iVar2);
        iVar9 = fn_006bf34c(auStack_34);
        if (((iVar9 == 0) || (iVar9 = fn_00154ac8(0x19), iVar9 != 0)) &&
           ((iVar9 = fn_006bf184(auStack_34), iVar9 == 0 ||
            (iVar9 = fn_00154ac8(0x463), iVar9 != 0)))) {
          *(undefined1 *)(iVar8 + 0x3b) = 0;
        }
        else {
          *(undefined1 *)(iVar8 + 0x3b) = 1;
        }
        uVar7 = 0xffffffff;
        iVar9 = fn_006bfffc(auStack_34);
        if (iVar9 == 0) {
          iVar9 = fn_0028b860(*(undefined4 *)(*unaff_r8 + 0xc),iVar3);
          if (iVar9 == 0) {
            uVar7 = 0;
          }
          else if (iVar9 == 1) {
            uVar7 = 1;
          }
        }
        else {
          uVar7 = 7;
        }
        fn_002b325c(iVar8,uVar7);
        iVar9 = fn_006b846c(*(undefined4 *)(*unaff_r8 + 0xc));
        *(bool *)(iVar8 + 0x27) = iVar9 == iVar3;
        iVar9 = fn_006b8600(*(undefined4 *)(*unaff_r8 + 0xc));
        fn_002b3d78(iVar8,iVar9 == iVar3,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar13);
  }
  puVar10 = puVar5;
  if (local_2c < puVar5) {
    do {
      puVar10 = puVar10 + 1;
    } while (puVar10 != local_2c);
  }
  fn_002feef8(puVar5,(int)local_40 - (int)puVar5 >> 2,0);
  return;
}



undefined4 fn_005754d4(int *param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  short *psVar18;
  int iVar19;
  short *local_12c;
  short *local_128;
  short *local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  char local_f2;
  undefined4 local_ec;
  int local_30;
  int local_2c;
  
  uVar13 = param_1[0x44];
  uVar15 = param_1[0x43];
  if (uVar15 != uVar13) {
    uVar3 = uVar15;
    if (uVar13 <= uVar15) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar13);
    }
    param_1[0x44] = uVar13 - (uVar13 - uVar15 & 0xfffffffc);
  }
  fn_00301f50(param_1 + 0x4b,0x94);
  uVar16 = *(undefined4 *)(*(int *)(param_1[1] + 8) + 0x78);
  uVar17 = *(undefined4 *)(*(int *)(param_1[1] + 8) + 0x7c);
  uVar4 = fn_00129004();
  fn_002416b4(uVar4,uVar16,uVar17);
  local_30 = fn_005828a4(param_1);
  *(undefined4 *)(local_30 + 0xc) = 0;
  *(undefined4 *)(local_30 + 0x10) = 0;
  *(undefined4 *)(local_30 + 0x14) = 0;
  *(undefined4 *)(local_30 + 0x18) = 0;
  iVar5 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc));
  param_1[0x48] = iVar5;
  iVar5 = fn_00145b00(0x1db7c,&DAT_00812c8c);
  param_1[0x47] = iVar5;
  fn_0017821c(param_1[0x47],*(undefined4 *)(*(int *)(DAT_00897804 + 0xc) + 4),0x1db7c);
  iVar5 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc));
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    uVar4 = fn_006b85d0(*(undefined4 *)(DAT_00897804 + 0xc),iVar5);
    fn_0028a68c(*(undefined4 *)(DAT_00897804 + 0xc),uVar4,0);
  }
  local_2c = *(int *)(param_1[0x41] + 8);
  iVar5 = 0;
  if (0 < *(int *)(param_1[0x41] + 0xc)) {
    do {
      psVar18 = (short *)(local_2c + iVar5 * 0x28);
      if (*psVar18 != 0) {
        iVar19 = 0;
        local_12c = (short *)0x0;
        local_128 = (short *)0x0;
        local_124 = (short *)0x0;
        do {
          psVar10 = local_128;
          if (psVar18[iVar19 + 0xd] != 0) {
            psVar9 = psVar18 + iVar19 + 0xd;
            if (local_128 == local_124) {
              uVar13 = (int)local_128 - (int)local_12c >> 1;
              if (uVar13 < (uint)((int)local_124 - (int)local_12c >> 1)) {
                if (local_128 != (short *)0x0) {
                  *local_128 = local_128[-1];
                }
                psVar10 = local_128 + -1;
                psVar8 = local_128;
                if (local_128 < psVar10) {
                  iVar14 = (int)psVar10 - (int)local_128;
                  if (0 < iVar14) {
                    if (iVar14 * 0x40000000 < 0) {
                      psVar10 = local_128 + -2;
                      psVar8 = local_128 + -1;
                      *psVar8 = *psVar10;
                    }
                    for (iVar14 = iVar14 >> 2; iVar14 != 0; iVar14 = iVar14 + -1) {
                      psVar8[-1] = psVar10[-1];
                      psVar10 = psVar10 + -2;
                      psVar8 = psVar8 + -2;
                      *psVar8 = *psVar10;
                    }
                  }
                }
                else {
                  while (local_128 != psVar10) {
                    psVar10 = psVar10 + -1;
                    psVar8[-1] = *psVar10;
                    psVar8 = psVar8 + -1;
                  }
                }
                *local_128 = *psVar9;
                psVar10 = local_128 + 1;
              }
              else {
                uVar15 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
                if (uVar15 < uVar13 + 0x20) {
                  uVar15 = uVar13 + 0x20;
                }
                psVar6 = (short *)fn_00100fc6(uVar15 << 1,0);
                psVar7 = psVar6;
                for (psVar8 = local_12c; psVar8 != psVar10; psVar8 = psVar8 + 1) {
                  if (psVar7 != (short *)0x0) {
                    *psVar7 = *psVar8;
                  }
                  psVar7 = psVar7 + 1;
                }
                psVar8 = (short *)(((int)psVar10 - (int)local_12c & 0xfffffffeU) + (int)psVar6);
                if (psVar8 != (short *)0x0) {
                  *psVar8 = *psVar9;
                }
                psVar9 = (short *)(((int)psVar10 - (int)local_12c & 0xfffffffeU) + (int)psVar6);
                for (; psVar10 != local_128; psVar10 = psVar10 + 1) {
                  psVar9 = psVar9 + 1;
                  if (psVar9 != (short *)0x0) {
                    *psVar9 = *psVar10;
                  }
                }
                iVar14 = (int)local_128 - (int)local_12c;
                psVar10 = local_12c;
                if (local_128 < local_12c) {
                  do {
                    psVar10 = psVar10 + 1;
                  } while (psVar10 != local_128);
                }
                fn_001008c4(local_12c,(int)local_124 - (int)local_12c >> 1,0);
                local_124 = psVar6 + uVar15;
                local_12c = psVar6;
                psVar10 = psVar6 + (iVar14 >> 1) + 1;
              }
            }
            else {
              psVar10 = local_128 + 1;
              if (local_128 != (short *)0x0) {
                *local_128 = *psVar9;
              }
            }
          }
          local_128 = psVar10;
          iVar19 = iVar19 + 1;
        } while (iVar19 < 6);
        uVar1 = psVar18[0x13];
        if (uVar1 == 0xee) {
          uVar4 = 4;
LAB_005758b8:
          fn_0023798c(&local_120,&local_12c,(int)*psVar18,1,uVar4);
        }
        else {
          if (0xee < uVar1) {
            if (uVar1 == 0x107) {
              uVar4 = 1;
            }
            else {
              if (uVar1 != 0x108) goto LAB_00575898;
              uVar4 = 0;
            }
            goto LAB_005758b8;
          }
          if (uVar1 == 0x1c) {
            uVar4 = 2;
            goto LAB_005758b8;
          }
          if (uVar1 == 0x1d) {
            uVar4 = 3;
            goto LAB_005758b8;
          }
LAB_00575898:
          fn_00236d80(&local_120,&local_12c,(int)*psVar18,1);
        }
        uVar2 = fn_00661570((int)*psVar18);
        local_ec = fn_002467b4(local_f2 + '\x01',uVar2);
        local_11c = *(undefined4 *)(psVar18 + 1);
        local_118 = *(undefined4 *)(psVar18 + 3);
        local_114 = *(undefined4 *)(psVar18 + 5);
        local_110 = *(undefined4 *)(psVar18 + 7);
        local_10c = *(undefined4 *)(psVar18 + 9);
        local_108 = *(undefined4 *)(psVar18 + 0xb);
        fn_0028b528(*(undefined4 *)(DAT_00897804 + 0xc),&local_120);
        psVar18 = local_12c;
        if (local_128 < local_12c) {
          do {
            psVar18 = psVar18 + 1;
          } while (psVar18 != local_128);
        }
        fn_001008c4(local_12c,(int)local_124 - (int)local_12c >> 1,0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1[0x41] + 0xc));
  }
  fn_00581bb0(param_1);
  iVar5 = fn_00178f9c(param_1[0x20],param_1[0x22]);
  uVar4 = *(undefined4 *)(iVar5 + 0x10);
  piVar11 = (int *)fn_00172c98(iVar5,(char *)&DAT_00575b68);
  piVar11 = (int *)(**(code **)(*piVar11 + 0x2c))(piVar11,(char *)&DAT_00575b7c,1);
  if (piVar11 != (int *)0x0) {
    puVar12 = (undefined4 *)(**(code **)(*piVar11 + 8))(piVar11);
    do {
      if (puVar12 == &DAT_0089a928) goto LAB_005759e8;
      puVar12 = (undefined4 *)*puVar12;
    } while (puVar12 != (undefined4 *)0x0);
  }
  piVar11 = (int *)0x0;
LAB_005759e8:
  piVar11 = (int *)(**(code **)(*piVar11 + 0x2c))(piVar11,(char *)&DAT_00575b90,1);
  if (piVar11 != (int *)0x0) {
    puVar12 = (undefined4 *)(**(code **)(*piVar11 + 8))(piVar11);
    do {
      if (puVar12 == &DAT_0089a930) goto LAB_00575a34;
      puVar12 = (undefined4 *)*puVar12;
    } while (puVar12 != (undefined4 *)0x0);
  }
  piVar11 = (int *)0x0;
LAB_00575a34:
  uVar16 = fn_0022f750(DAT_00898ab0);
  fn_00190d50(piVar11,uVar16);
  uVar16 = fn_0068897c(uVar4,DAT_00898aac);
  uVar17 = fn_0022f750(DAT_00898abc);
  fn_00182810(uVar16,uVar17);
  iVar5 = fn_0068897c(uVar4,DAT_00898aa8);
  param_1[0x42] = iVar5;
  uVar4 = fn_00311508(*(undefined4 *)(param_1[0x40] + 0x2c));
  uVar16 = fn_0022f750(DAT_00898ab4);
  local_12c = (short *)fn_0022f750(DAT_00898ab8);
  local_128 = (short *)0x0;
  local_124 = (short *)0x0;
  local_120 = 0;
  fn_00101a50(&local_128,10,L"%ls%d%ls",uVar16,uVar4);
  fn_00182810(param_1[0x42],&local_128);
  uVar4 = fn_0022f584(DAT_00898ac0,0);
  fn_0068974c(param_1,uVar4,0,1);
  iVar5 = param_1[0x17];
  *(undefined4 *)(iVar5 + 0x38) = 0x1000950;
  *(undefined1 *)(iVar5 + 0x5f) = 1;
  *(undefined4 *)(param_1[0x17] + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar4 = fn_002e3e9c(param_1[0x2d],*(undefined4 *)(local_30 + 0x10),
                       *(undefined4 *)(local_30 + 0xc));
  (**(code **)(*param_1 + 400))(param_1,uVar4);
  fn_00582f2c(param_1);
  return 1;
}


