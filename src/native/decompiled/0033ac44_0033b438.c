#include "0033ac44_0033b438.h"



void fn_0033b438(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint local_44;
  undefined4 local_40;
  uint local_3c [2];
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  local_40 = fn_0016a7c4((int)*(short *)(*(int *)(param_1 + 8) + param_4 * 4));
  uVar1 = fn_00100b58();
  puVar7 = &DAT_008f9ce8;
  puVar6 = &DAT_008f9cf4;
  if (uVar1 != 0) {
    puVar2 = local_3c;
    if (0x20 < uVar1) {
      puVar2 = &local_44;
    }
    local_44 = uVar1;
    local_3c[0] = 0x20;
    uVar5 = *puVar2;
    if (0xfffffff1 < uVar5) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
    }
    if (uVar5 < uVar1) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar5);
    }
    if (uVar5 != 0) {
      puVar7 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
      }
      *puVar7 = 0;
      puVar7[1] = uVar5;
      puVar7[2] = uVar1;
      puVar3 = (undefined2 *)((int)puVar7 + uVar1 * 2 + 0xc);
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
    puVar6 = puVar7 + 3;
  }
  fn_00301a9c(puVar6,local_40,uVar1 << 1);
  fn_0037cee4(local_30,uStack_2c,puVar6);
  fn_0037ce88(local_30,uStack_2c,1);
  fn_00305a6c(local_30,uStack_2c);
  fn_0037ce70(local_30,uStack_2c,&LAB_0033b5dc);
  if (puVar6 != &DAT_008f9cf4) {
    iVar4 = puVar6[-3];
    if ((iVar4 == -1) || ((puVar6 + -3 != &DAT_008f9ce8 && (puVar6[-3] = iVar4 + -1, iVar4 == 0))))
    {
      fn_002feef8(puVar6 + -3,puVar6[-2] + 8,0);
      return;
    }
  }
  return;
}



undefined4 fn_0033b410(int param_1)

{
  fn_002caccc();
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),0);
  return 0;
}



void fn_0033b3ec(int param_1)

{
  fn_002caccc();
                    /* WARNING: Could not recover jumptable at 0x0033b40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0033add0) */
/* WARNING: Removing unreachable block (ram,0x0033addc) */
/* WARNING: Removing unreachable block (ram,0x0033ada8) */
/* WARNING: Removing unreachable block (ram,0x0033adac) */
/* WARNING: Removing unreachable block (ram,0x0033adb0) */
/* WARNING: Removing unreachable block (ram,0x0033adb4) */
/* WARNING: Removing unreachable block (ram,0x0033adb8) */
/* WARNING: Removing unreachable block (ram,0x0033adf8) */
/* WARNING: Removing unreachable block (ram,0x0033ae08) */
/* WARNING: Removing unreachable block (ram,0x0033ade0) */
/* WARNING: Removing unreachable block (ram,0x0033ade8) */
/* WARNING: Removing unreachable block (ram,0x0033adec) */
/* WARNING: Removing unreachable block (ram,0x0033adf0) */

void fn_0033ac44(int *param_1,undefined4 *param_2,int param_3,short *param_4)

{
  uint uVar1;
  int *piVar2;
  short *psVar3;
  short *psVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  uint uVar13;
  uint *puVar14;
  short *psVar15;
  undefined4 *puVar16;
  short *psVar17;
  int iVar18;
  undefined4 local_128;
  undefined4 local_124;
  short local_120 [4];
  uint local_118 [2];
  uint local_110 [35];
  short local_84 [16];
  int local_64;
  short local_60 [14];
  short *local_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [8];
  int *local_34;
  undefined4 *local_30;
  int local_2c;
  short *local_28;
  
  local_28 = param_4;
  local_2c = param_3;
  local_30 = param_2;
  local_34 = param_1;
  psVar17 = (short *)0x1f4;
  psVar15 = (short *)param_1[1];
  psVar3 = (short *)*param_1;
  psVar12 = (short *)((int)psVar15 - (int)psVar3);
  uVar13 = (int)psVar12 >> 2;
  if (uVar13 < 500) {
    iVar18 = 500 - uVar13;
    if (iVar18 != 0) {
      uVar13 = iVar18 + uVar13;
      if ((uint)(param_1[2] - (int)psVar3 >> 2) < uVar13) {
        local_118[0] = uVar13;
        uVar1 = param_1[1] - *param_1 >> 2;
        local_110[0] = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (local_110[0] < uVar1 + 0x20) {
          local_110[0] = uVar1 + 0x20;
        }
        puVar14 = local_110;
        if (local_110[0] <= uVar13) {
          puVar14 = local_118;
        }
        uVar13 = *puVar14;
        puVar16 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
        puVar5 = puVar16;
        for (psVar17 = (short *)*param_1; psVar17 != psVar15; psVar17 = psVar17 + 2) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *(undefined4 *)psVar17;
          }
          puVar5 = puVar5 + 1;
        }
        puVar5 = (undefined4 *)(((int)psVar15 - *param_1 & 0xfffffffcU) + (int)puVar16);
        for (iVar11 = iVar18; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0;
          }
          puVar5 = puVar5 + 1;
        }
        psVar17 = (short *)param_1[1];
        puVar5 = puVar16 + iVar18 + ((int)psVar15 - *param_1 >> 2);
        for (; psVar15 != psVar17; psVar15 = psVar15 + 2) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *(undefined4 *)psVar15;
          }
          puVar5 = puVar5 + 1;
        }
        psVar17 = (short *)*param_1;
        psVar15 = (short *)param_1[1];
        iVar11 = (int)psVar15 - (int)psVar17;
        psVar12 = psVar17;
        if (psVar15 < psVar17) {
          do {
            psVar12 = psVar12 + 2;
          } while (psVar12 != psVar15);
        }
        fn_001008c4(psVar17,param_1[2] - (int)psVar17 >> 2,0);
        param_1[2] = (int)(puVar16 + uVar13);
        param_1[1] = (int)(puVar16 + (iVar11 >> 2) + iVar18);
        *param_1 = (int)puVar16;
      }
      else {
        psVar12 = psVar15 + iVar18 * 2;
        param_1[1] = (int)(psVar15 + iVar18 * 2);
        if (psVar12 < psVar15) {
          psVar4 = psVar15 + iVar18 * -2;
          psVar17 = psVar15;
          for (psVar3 = psVar4; psVar3 != psVar15; psVar3 = psVar3 + 2) {
            if (psVar17 != (short *)0x0) {
              *(undefined4 *)psVar17 = *(undefined4 *)psVar3;
            }
            psVar17 = psVar17 + 2;
          }
          psVar3 = psVar15;
          if (psVar15 < psVar4) {
            iVar18 = (int)psVar4 - (int)psVar15;
            if (0 < iVar18) {
              psVar17 = (short *)(iVar18 * 0x20000000);
              if ((int)psVar17 < 0) {
                psVar4 = psVar4 + -2;
                psVar17 = *(short **)psVar4;
                psVar3 = psVar15 + -2;
                *(short **)psVar3 = psVar17;
              }
              for (iVar18 = iVar18 >> 3; iVar18 != 0; iVar18 = iVar18 + -1) {
                *(undefined4 *)(psVar3 + -2) = *(undefined4 *)(psVar4 + -2);
                psVar4 = psVar4 + -4;
                psVar17 = *(short **)psVar4;
                psVar3 = psVar3 + -4;
                *(short **)psVar3 = psVar17;
              }
            }
          }
          else {
            while (psVar15 != psVar4) {
              psVar4 = psVar4 + -2;
              psVar17 = *(short **)psVar4;
              *(short **)(psVar3 + -2) = psVar17;
              psVar3 = psVar3 + -2;
            }
          }
          if (psVar15 < psVar12) {
            iVar18 = (int)psVar12 - (int)psVar15;
            if (0 < iVar18) {
              psVar12 = psVar15;
              if (iVar18 * 0x20000000 < 0) {
                psVar12 = psVar15 + 2;
                psVar15[0] = 0;
                psVar15[1] = 0;
              }
              for (iVar18 = iVar18 >> 3; iVar18 != 0; iVar18 = iVar18 + -1) {
                psVar12[0] = 0;
                psVar12[1] = 0;
                psVar12[2] = 0;
                psVar12[3] = 0;
                psVar12 = psVar12 + 4;
              }
            }
          }
          else {
            for (; psVar15 != psVar12; psVar15 = psVar15 + 2) {
              psVar15[0] = 0;
              psVar15[1] = 0;
            }
          }
        }
        else {
          psVar17 = (short *)0x0;
          for (; iVar18 != 0; iVar18 = iVar18 + -1) {
            if (psVar15 != (short *)0x0) {
              psVar15[0] = 0;
              psVar15[1] = 0;
            }
            psVar15 = psVar15 + 2;
          }
        }
      }
    }
  }
  else {
    if (uVar13 != 500) {
      psVar12 = psVar3 + 1000;
    }
    if (uVar13 != 500 && psVar3 != psVar15) {
      psVar3 = psVar12;
      if (psVar15 <= psVar12) {
        for (; psVar3 != psVar15; psVar3 = psVar3 + 2) {
        }
      }
      param_1[1] = (int)psVar15 - ((int)psVar15 - (int)psVar12 & 0xfffffffcU);
    }
  }
  local_64 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc));
  iVar18 = 0;
  local_44 = (short *)0x0;
  psVar12 = local_44;
  if (0 < local_64) {
    do {
      psVar12 = (short *)fn_006b85d0(*(undefined4 *)(DAT_00897804 + 0xc),iVar18);
      iVar11 = local_2c;
      if (psVar12 != (short *)0x0) {
        puVar16 = (undefined4 *)local_30[1];
        puVar5 = (undefined4 *)*local_30;
        while( true ) {
          if (puVar5 != puVar16) {
            psVar17 = (short *)*puVar5;
          }
          if (puVar5 == puVar16 || psVar17 == psVar12) break;
          puVar5 = puVar5 + 1;
        }
        if (puVar5 == puVar16) {
          if (local_2c == 0) {
LAB_0033b0dc:
            psVar15 = local_28;
            if (local_28 == (short *)0x0) {
LAB_0033b140:
              piVar2 = local_34;
              psVar3 = local_44;
              psVar15 = (short *)(local_34[1] - *local_34 >> 2);
              if (psVar15 <= local_44) {
                psVar17 = local_44;
                fn_002ff628(9,&DAT_008c7672,&DAT_008c7672,local_44,psVar15);
              }
              local_44 = (short *)((int)local_44 + 1);
              *(short **)(*piVar2 + (int)psVar3 * 4) = psVar12;
            }
            else {
              uVar6 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),psVar12);
              fn_0020bbc4(&local_128,uVar6);
              iVar11 = fn_006c02d4(&local_124,local_60);
              iVar7 = 0;
              if (0 < iVar11) {
                do {
                  psVar17 = (short *)(int)local_60[iVar7 * 2];
                  if (psVar17 == psVar15) goto LAB_0033b140;
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar11);
              }
            }
          }
          else {
            uVar6 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),psVar12);
            fn_0020bbc4(auStack_40,uVar6);
            psVar17 = (short *)&DAT_00000001;
            local_128 = 1;
            local_124 = 1;
            iVar7 = fn_006bf5ec(auStack_3c,local_120,0x4c,1,1,1);
            iVar8 = 0;
            if (0 < iVar7) {
              psVar17 = local_120;
              do {
                if (psVar17[iVar8] == iVar11) goto LAB_0033b0dc;
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar7);
            }
            iVar7 = fn_006c02d4(auStack_3c,local_84,7);
            iVar8 = 0;
            if (0 < iVar7) {
              do {
                iVar9 = fn_0068f708((int)local_84[iVar8 * 2],local_84[iVar8 * 2 + 1]);
                uVar13 = 1;
                if (0 < iVar9) {
                  do {
                    iVar10 = fn_0068f7f8((int)local_84[iVar8 * 2],uVar13 & 0xff);
                    if (iVar10 == iVar11) goto LAB_0033b0dc;
                    uVar13 = uVar13 + 1;
                  } while ((int)uVar13 <= iVar9);
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar7);
            }
          }
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < local_64);
    psVar12 = local_44;
    if ((short *)0x1f3 < local_44) {
      return;
    }
  }
  do {
    piVar2 = local_34;
    psVar17 = (short *)(local_34[1] - *local_34 >> 2);
    if (psVar17 <= psVar12) {
      fn_002ff628(9,&DAT_008c7672,&DAT_008c7672,psVar12,psVar17);
    }
    psVar17 = (short *)((int)psVar12 + 1);
    *(undefined4 *)(*piVar2 + (int)psVar12 * 4) = 0;
    psVar12 = psVar17;
  } while (psVar17 < (short *)0x1f4);
  return;
}


