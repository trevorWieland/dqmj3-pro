#include "003a3628_003a3abc.h"



int fn_003a3abc(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = fn_006c58ac();
  iVar8 = 0;
  uVar6 = 0;
  if (0 < iVar2) {
    do {
      uVar1 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc;
      if (uVar1 <= uVar6) {
        fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar6,uVar1);
      }
      piVar3 = (int *)(*(int *)(param_1 + 0x10) + uVar6 * 0xc);
      iVar7 = piVar3[1];
      if (((-1 < *piVar3) && (iVar4 = fn_002043cc(DAT_00897840), *(char *)(iVar4 + 0x10) != '\x02')
          ) && ((iVar5 = fn_0066e510(DAT_00897850,*(undefined4 *)(iVar4 + 4)), iVar5 != 0 ||
                (iVar5 = *(int *)(iVar4 + 8), iVar4 = fn_0066e530(DAT_00897850), iVar5 == iVar4))))
      {
        if (iVar8 == param_2) {
          iVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
          goto joined_r0x003a3bac;
        }
        iVar8 = iVar8 + 1;
      }
      if (-1 < iVar7) {
        iVar7 = fn_002043cc(DAT_00897840,iVar7);
        iVar4 = fn_0066e510(DAT_00897850,*(undefined4 *)(iVar7 + 4));
        if ((iVar4 != 0) ||
           (iVar4 = *(int *)(iVar7 + 8), iVar7 = fn_0066e530(DAT_00897850), iVar4 == iVar7)) {
          if (iVar8 == param_2) {
            iVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
joined_r0x003a3bac:
            if ((uint)(iVar2 / 0xc) <= uVar6) {
              fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar6,iVar2 / 0xc);
            }
            return *(int *)(param_1 + 0x10) + uVar6 * 0xc;
          }
          iVar8 = iVar8 + 1;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar2);
  }
  if ((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc == 0) {
    fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,0,0);
  }
  return *(int *)(param_1 + 0x10);
}



void fn_003a3628(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  
  local_44 = (uint *)0x0;
  local_40 = (uint *)0x0;
  local_3c = (uint *)0x0;
  puVar3 = local_40;
  while( true ) {
    local_40 = puVar3;
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar6 = *(uint **)(param_1 + 0x14);
    if ((uint)(((int)puVar6 - (int)puVar3) / 0xc) < 2) break;
    uVar10 = puVar3[2];
    uVar12 = *puVar3;
    if (puVar3 != puVar6) {
      puVar1 = puVar3 + 3;
      if (puVar6 != puVar1) {
        if (puVar6 < puVar1) {
          do {
            uVar13 = *puVar1;
            uVar14 = puVar1[1];
            uVar16 = puVar1[2];
            puVar1 = puVar1 + 3;
            *puVar3 = uVar13;
            puVar3[1] = uVar14;
            puVar3[2] = uVar16;
            puVar3 = puVar3 + 3;
          } while (puVar1 != puVar6);
        }
        else if (0 < (int)puVar6 - (int)puVar1) {
          uVar13 = ((int)puVar6 - (int)puVar1) / 0xc;
          puVar6 = puVar3;
          puVar4 = puVar3 + -3;
          if ((uVar13 & 1) != 0) {
            *puVar3 = *puVar1;
            puVar3[1] = puVar3[4];
            puVar3[2] = puVar3[5];
            puVar6 = puVar1;
            puVar4 = puVar3;
          }
          for (iVar7 = (int)uVar13 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
            uVar13 = puVar6[4];
            uVar14 = puVar6[5];
            puVar4[3] = puVar6[3];
            puVar4[4] = uVar13;
            puVar4[5] = uVar14;
            uVar13 = puVar6[7];
            uVar14 = puVar6[8];
            puVar4[6] = puVar6[6];
            puVar4[7] = uVar13;
            puVar4[8] = uVar14;
            puVar6 = puVar6 + 6;
            puVar4 = puVar4 + 6;
          }
        }
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -0xc;
    }
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar6 = *(uint **)(param_1 + 0x14);
    uVar13 = puVar3[2];
    uVar14 = *puVar3;
    if (puVar3 != puVar6) {
      puVar1 = puVar3 + 3;
      if (puVar1 != puVar6) {
        if (puVar1 < puVar6) {
          if (0 < (int)puVar6 - (int)puVar1) {
            uVar16 = ((int)puVar6 - (int)puVar1) / 0xc;
            puVar6 = puVar3;
            puVar4 = puVar3 + -3;
            if ((uVar16 & 1) != 0) {
              *puVar3 = *puVar1;
              puVar3[1] = puVar3[4];
              puVar3[2] = puVar3[5];
              puVar6 = puVar1;
              puVar4 = puVar3;
            }
            for (iVar7 = (int)uVar16 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
              uVar16 = puVar6[4];
              uVar15 = puVar6[5];
              puVar4[3] = puVar6[3];
              puVar4[4] = uVar16;
              puVar4[5] = uVar15;
              uVar16 = puVar6[7];
              uVar15 = puVar6[8];
              puVar4[6] = puVar6[6];
              puVar4[7] = uVar16;
              puVar4[8] = uVar15;
              puVar6 = puVar6 + 6;
              puVar4 = puVar4 + 6;
            }
          }
        }
        else {
          do {
            uVar16 = *puVar1;
            uVar15 = puVar1[1];
            uVar17 = puVar1[2];
            puVar1 = puVar1 + 3;
            *puVar3 = uVar16;
            puVar3[1] = uVar15;
            puVar3[2] = uVar17;
            puVar3 = puVar3 + 3;
          } while (puVar1 != puVar6);
        }
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -0xc;
    }
    local_38 = 0xffffffff;
    local_34 = 0xffffffff;
    local_30 = 0xffffffff;
    if (-1 < (int)uVar10) {
      local_38 = uVar10;
    }
    if (0x7fffffff < uVar10) {
      local_38 = uVar12;
    }
    if (-1 < (int)uVar13) {
      local_34 = uVar13;
    }
    if (0x7fffffff < uVar13) {
      local_34 = uVar14;
    }
    if (local_40 == local_3c) {
      fn_00790084(&local_44,local_40,&local_38);
      puVar3 = local_40;
    }
    else {
      puVar3 = local_40 + 3;
      if (local_40 != (uint *)0x0) {
        *local_40 = local_38;
        local_40[1] = local_34;
        local_40[2] = 0xffffffff;
      }
    }
  }
  puVar1 = local_40;
  if (((int)puVar6 - (int)puVar3) / 0xc == 1) {
    local_34 = 0xffffffff;
    local_30 = 0xffffffff;
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    local_38 = puVar2[2];
    puVar8 = *(undefined4 **)(param_1 + 0x14);
    if (puVar2 != puVar8) {
      puVar5 = puVar2 + 3;
      if (puVar8 != puVar5) {
        if (puVar8 < puVar5) {
          for (; puVar5 != puVar8; puVar5 = puVar5 + 3) {
            uVar9 = puVar5[1];
            uVar11 = puVar5[2];
            *puVar2 = *puVar5;
            puVar2[1] = uVar9;
            puVar2[2] = uVar11;
            puVar2 = puVar2 + 3;
          }
        }
        else {
          iVar7 = (int)puVar8 - (int)puVar5;
          if (0 < iVar7) {
            puVar8 = puVar2 + -3;
            if ((iVar7 / 0xc & 1U) != 0) {
              *puVar2 = *puVar5;
              puVar2[1] = puVar2[4];
              puVar2[2] = puVar2[5];
              puVar8 = puVar2;
              puVar2 = puVar5;
            }
            for (iVar7 = iVar7 / 0xc >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
              uVar9 = puVar2[4];
              uVar11 = puVar2[5];
              puVar8[3] = puVar2[3];
              puVar8[4] = uVar9;
              puVar8[5] = uVar11;
              uVar9 = puVar2[7];
              uVar11 = puVar2[8];
              puVar8[6] = puVar2[6];
              puVar8[7] = uVar9;
              puVar8[8] = uVar11;
              puVar8 = puVar8 + 6;
              puVar2 = puVar2 + 6;
            }
          }
        }
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -0xc;
    }
    if (local_40 == local_3c) {
      fn_00790084(&local_44,local_40,&local_38);
      puVar1 = local_40;
    }
    else {
      puVar1 = local_40 + 3;
      if (local_40 != (uint *)0x0) {
        *local_40 = local_38;
        local_40[1] = 0xffffffff;
        local_40[2] = 0xffffffff;
      }
    }
  }
  local_40 = puVar1;
  fn_007902c0(param_1 + 0x10,((int)local_40 - (int)local_44) / 0xc,0xffffffff,0xffffffff,0xffffffff
              );
  iVar7 = (int)local_40 - (int)local_44 >> 0x1f;
  uVar10 = 0;
  if (((int)local_40 - (int)local_44) / 0xc + iVar7 != iVar7) {
    do {
      uVar12 = ((int)local_40 - (int)local_44) / 0xc;
      if (uVar12 <= uVar10) {
        fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar10,uVar12);
      }
      puVar3 = local_44 + uVar10 * 3;
      uVar13 = *puVar3;
      uVar16 = puVar3[1];
      uVar14 = puVar3[2];
      uVar12 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc;
      if (uVar12 <= uVar10) {
        fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar10,uVar12);
      }
      uVar12 = uVar10 + 1;
      puVar3 = (uint *)(*(int *)(param_1 + 0x10) + uVar10 * 0xc);
      *puVar3 = uVar13;
      puVar3[1] = uVar16;
      puVar3[2] = uVar14;
      uVar10 = uVar12;
    } while (uVar12 < (uint)(((int)local_40 - (int)local_44) / 0xc));
  }
  puVar3 = local_44;
  if (local_40 < local_44) {
    do {
      puVar3 = puVar3 + 3;
    } while (puVar3 != local_40);
  }
  fn_001008c4(local_44,((int)local_3c - (int)local_44) / 0xc,0);
  return;
}


