#include "005f4598_005f46b4.h"



/* WARNING: Removing unreachable block (ram,0x005f4930) */
/* WARNING: Removing unreachable block (ram,0x005f4944) */
/* WARNING: Removing unreachable block (ram,0x005f4904) */
/* WARNING: Removing unreachable block (ram,0x005f490c) */
/* WARNING: Removing unreachable block (ram,0x005f4914) */
/* WARNING: Removing unreachable block (ram,0x005f4968) */
/* WARNING: Removing unreachable block (ram,0x005f4984) */
/* WARNING: Removing unreachable block (ram,0x005f4948) */
/* WARNING: Removing unreachable block (ram,0x005f4950) */
/* WARNING: Removing unreachable block (ram,0x005f4958) */
/* WARNING: Removing unreachable block (ram,0x005f4960) */

undefined4 fn_005f46b4(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint unaff_r11;
  undefined4 *in_r12;
  bool bVar15;
  uint local_40;
  uint local_3c;
  uint local_38 [2];
  int *piStack_30;
  int iStack_2c;
  int *local_28;
  
  piVar1 = *(int **)(param_1 + 4);
  if (param_2 == 0) {
    return 0;
  }
  piStack_30 = piVar1;
  iStack_2c = param_2;
  local_28 = param_3;
  iVar2 = fn_001010c8(&DAT_007d60e2,param_2,4);
  if (iVar2 == 0) {
    *piVar1 = param_2;
    puVar14 = (uint *)(piVar1 + 4);
    piVar1[3] = *(int *)(param_2 + 8) + param_2;
    piVar1[1] = *(int *)(param_2 + 0x10) + param_2;
    piVar1[2] = *(int *)(param_2 + 0xc);
    piVar1[0xb] = *(int *)(param_2 + 0x18) + param_2;
    *(undefined2 *)(piVar1 + 0xc) = *(undefined2 *)(param_2 + 0x14);
    bVar15 = *(char *)(param_2 + 0x1c) == '\0';
    *(char *)(piVar1 + 7) = *(char *)(param_2 + 0x1c);
    piVar1[8] = *(int *)(param_2 + 0x20);
    iVar2 = *(int *)(param_2 + 0x24);
    piVar1[9] = iVar2;
    iVar9 = *(int *)(param_2 + 0x28);
    if (bVar15) {
      unaff_r11 = iVar2 * iVar2;
    }
    piVar1[10] = iVar9;
    if (!bVar15) {
      iVar9 = iVar2 * iVar2;
    }
    puVar13 = (undefined4 *)piVar1[4];
    if (!bVar15) {
      unaff_r11 = iVar9 * iVar2;
    }
    puVar4 = (undefined4 *)piVar1[5];
    local_40 = (int)puVar4 - (int)puVar13 >> 3;
    if (local_40 < unaff_r11) {
      iVar2 = unaff_r11 - local_40;
      if (iVar2 != 0) {
        local_40 = iVar2 + local_40;
        if ((uint)(piVar1[6] - (int)puVar13 >> 3) < local_40) {
          uVar8 = (int)(piVar1[5] - *puVar14) >> 3;
          local_38[0] = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
          if (local_38[0] < uVar8 + 0x20) {
            local_38[0] = uVar8 + 0x20;
          }
          puVar10 = local_38;
          if (local_38[0] <= local_40) {
            puVar10 = &local_40;
          }
          local_3c = *puVar10;
          puVar6 = (undefined4 *)fn_00100fc6(local_3c << 3,0);
          puVar11 = puVar6;
          for (puVar13 = (undefined4 *)*puVar14; puVar13 != puVar4; puVar13 = puVar13 + 2) {
            if (puVar11 != (undefined4 *)0x0) {
              uVar3 = puVar13[1];
              *puVar11 = *puVar13;
              puVar11[1] = uVar3;
            }
            puVar11 = puVar11 + 2;
          }
          puVar13 = (undefined4 *)(((int)puVar4 - *puVar14 & 0xfffffff8) + (int)puVar6);
          for (iVar9 = iVar2; iVar9 != 0; iVar9 = iVar9 + -1) {
            if (puVar13 != (undefined4 *)0x0) {
              *puVar13 = 0;
              puVar13[1] = 0;
            }
            puVar13 = puVar13 + 2;
          }
          puVar11 = (undefined4 *)piVar1[5];
          puVar13 = puVar6 + (iVar2 + ((int)((int)puVar4 - *puVar14) >> 3)) * 2;
          for (; puVar4 != puVar11; puVar4 = puVar4 + 2) {
            if (puVar13 != (undefined4 *)0x0) {
              uVar3 = puVar4[1];
              *puVar13 = *puVar4;
              puVar13[1] = uVar3;
            }
            puVar13 = puVar13 + 2;
          }
          uVar7 = *puVar14;
          uVar12 = piVar1[5];
          uVar8 = uVar7;
          if (uVar12 < uVar7) {
            do {
              uVar8 = uVar8 + 8;
            } while (uVar8 != uVar12);
          }
          fn_001008c4(uVar7,(int)(piVar1[6] - uVar7) >> 3,0);
          piVar1[6] = (int)(puVar6 + local_3c * 2);
          piVar1[5] = (int)(puVar6 + ((int)(uVar12 - uVar7) >> 3) * 2 + iVar2 * 2);
          *puVar14 = (uint)puVar6;
        }
        else {
          puVar13 = puVar4 + iVar2 * 2;
          piVar1[5] = (int)(puVar4 + iVar2 * 2);
          if (puVar13 < puVar4) {
            puVar5 = puVar4 + iVar2 * -2;
            puVar11 = puVar4;
            for (puVar6 = puVar5; puVar6 != puVar4; puVar6 = puVar6 + 2) {
              if (puVar11 != (undefined4 *)0x0) {
                uVar3 = puVar6[1];
                *puVar11 = *puVar6;
                puVar11[1] = uVar3;
              }
              puVar11 = puVar11 + 2;
            }
            puVar11 = puVar4;
            if (puVar4 < puVar5) {
              iVar2 = (int)puVar5 - (int)puVar4;
              if (0 < iVar2) {
                puVar11 = puVar5;
                puVar6 = puVar4;
                if (iVar2 * 0x10000000 < 0) {
                  puVar11 = puVar5 + -2;
                  puVar6 = puVar4 + -2;
                  uVar3 = puVar5[-1];
                  *puVar6 = *puVar11;
                  puVar4[-1] = uVar3;
                }
                for (iVar2 = iVar2 >> 4; iVar2 != 0; iVar2 = iVar2 + -1) {
                  uVar3 = puVar11[-1];
                  puVar6[-2] = puVar11[-2];
                  puVar6[-1] = uVar3;
                  uVar3 = puVar11[-3];
                  puVar6[-4] = puVar11[-4];
                  puVar6[-3] = uVar3;
                  puVar11 = puVar11 + -4;
                  puVar6 = puVar6 + -4;
                }
              }
            }
            else {
              while (puVar4 != puVar5) {
                uVar3 = puVar5[-1];
                puVar11[-2] = puVar5[-2];
                puVar11[-1] = uVar3;
                puVar11 = puVar11 + -2;
                puVar5 = puVar5 + -2;
              }
            }
            if (puVar4 < puVar13) {
              iVar2 = (int)puVar13 - (int)puVar4;
              if (0 < iVar2) {
                if (iVar2 * 0x10000000 < 0) {
                  puVar13 = puVar4 + 1;
                  *puVar4 = 0;
                  puVar4 = puVar4 + 2;
                  *puVar13 = 0;
                }
                for (iVar2 = iVar2 >> 4; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar4 = 0;
                  puVar4[1] = 0;
                  puVar13 = puVar4 + 3;
                  puVar4[2] = 0;
                  puVar4 = puVar4 + 4;
                  *puVar13 = 0;
                }
              }
            }
            else {
              for (; puVar4 != puVar13; puVar4 = puVar4 + 2) {
                *puVar4 = 0;
                puVar4[1] = 0;
              }
            }
          }
          else {
            for (; iVar2 != 0; iVar2 = iVar2 + -1) {
              if (puVar4 != (undefined4 *)0x0) {
                *puVar4 = 0;
                puVar4[1] = 0;
              }
              puVar4 = puVar4 + 2;
            }
          }
        }
      }
    }
    else {
      if (unaff_r11 != local_40) {
        in_r12 = puVar13 + unaff_r11 * 2;
      }
      if (unaff_r11 != local_40 && puVar13 != puVar4) {
        puVar13 = in_r12;
        if (puVar4 <= in_r12) {
          for (; puVar13 != puVar4; puVar13 = puVar13 + 2) {
          }
        }
        piVar1[5] = (int)puVar4 - ((int)puVar4 - (int)in_r12 & 0xfffffff8U);
      }
    }
    puVar13 = (undefined4 *)(*(int *)(param_2 + 0x2c) + param_2);
    iVar2 = 0;
    if (0 < (int)unaff_r11) {
      do {
        iVar9 = iVar2 + 1;
        *(undefined4 *)(piVar1[4] + iVar2 * 8) = *puVar13;
        *(undefined4 **)(piVar1[4] + iVar2 * 8 + 4) = puVar13 + 1;
        puVar13 = (undefined4 *)((int)(puVar13 + 1) + *(int *)(piVar1[4] + iVar2 * 8) * 2);
        iVar2 = iVar9;
      } while (iVar9 < (int)unaff_r11);
    }
    iVar2 = local_28[1];
    iVar9 = local_28[2];
    piVar1[0xd] = *local_28;
    piVar1[0xe] = iVar2;
    piVar1[0xf] = iVar9;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



void fn_005f45d8(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  uVar4 = param_1[4];
  param_1[4] = 0;
  uVar3 = param_1[5];
  param_1[5] = 0;
  iVar5 = param_1[6];
  param_1[6] = 0;
  uVar2 = uVar4;
  if (uVar3 < uVar4) {
    do {
      uVar2 = uVar2 + 8;
    } while (uVar2 != uVar3);
  }
  fn_001008c4(uVar4,(int)(iVar5 - uVar4) >> 3,0);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar5 = fn_00303afc(&DAT_008c62fc), iVar5 != 0)) {
    DAT_008f9e2c = uVar6;
    DAT_008f9e30 = uVar6;
    DAT_008f9e34 = uVar6;
  }
  uVar1 = DAT_008f9e34;
  uVar6 = DAT_008f9e30;
  param_1[0xd] = DAT_008f9e2c;
  param_1[0xe] = uVar6;
  param_1[0xf] = uVar1;
  return;
}



void fn_005f45d0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  uVar7 = 0;
  *(undefined2 *)(puVar2 + 0xc) = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  uVar5 = puVar2[4];
  puVar2[4] = 0;
  uVar4 = puVar2[5];
  puVar2[5] = 0;
  iVar6 = puVar2[6];
  puVar2[6] = 0;
  uVar3 = uVar5;
  if (uVar4 < uVar5) {
    do {
      uVar3 = uVar3 + 8;
    } while (uVar3 != uVar4);
  }
  fn_001008c4(uVar5,(int)(iVar6 - uVar5) >> 3,0);
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar6 = fn_00303afc(&DAT_008c62fc), iVar6 != 0)) {
    DAT_008f9e2c = uVar7;
    DAT_008f9e30 = uVar7;
    DAT_008f9e34 = uVar7;
  }
  uVar1 = DAT_008f9e34;
  uVar7 = DAT_008f9e30;
  puVar2[0xd] = DAT_008f9e2c;
  puVar2[0xe] = uVar7;
  puVar2[0xf] = uVar1;
  return;
}



void fn_005f4598(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x24))(param_1);
                    /* WARNING: Could not recover jumptable at 0x005f45cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,param_2,0);
  return;
}


