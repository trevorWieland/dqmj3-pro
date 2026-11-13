#include "00787798_00787ae4.h"



void fn_00787ae4(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int extraout_r1;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *local_44;
  undefined4 *local_40;
  
  if (param_4[3] == param_3[3]) {
    iVar12 = *param_4 - *param_3 >> 2;
  }
  else {
    iVar12 = ((param_4[3] - param_3[3] >> 2) + -1) * 0x20 +
             (*param_4 - param_4[1] >> 2) + (param_3[2] - *param_3 >> 2);
  }
  if (param_2[7] == param_4[3]) {
    iVar1 = param_2[4] - *param_4 >> 2;
  }
  else {
    iVar1 = ((param_2[7] - param_4[3] >> 2) + -1) * 0x20 +
            (param_2[4] - param_2[5] >> 2) + (param_4[2] - *param_4 >> 2);
  }
  if (param_3[3] == param_2[3]) {
    iVar2 = *param_3 - *param_2 >> 2;
  }
  else {
    iVar2 = ((param_3[3] - param_2[3] >> 2) + -1) * 0x20 +
            (*param_3 - param_3[1] >> 2) + (param_2[2] - *param_2 >> 2);
  }
  if (iVar2 < iVar1) {
    puVar5 = (undefined4 *)param_2[3];
    puVar8 = (undefined4 *)*param_2;
    puVar11 = (undefined4 *)param_2[1];
    local_40 = (undefined4 *)param_3[2];
    puVar6 = (undefined4 *)*param_3;
    puVar13 = (undefined4 *)param_3[1];
    puVar15 = (undefined4 *)param_3[3];
    puVar7 = (undefined4 *)*param_4;
    puVar10 = (undefined4 *)param_4[1];
    local_44 = (undefined4 *)param_4[3];
    while (puVar8 != puVar6) {
      if (puVar8 == puVar11 || puVar6 == puVar13) {
        if (puVar5 == puVar15) {
          iVar1 = (int)puVar8 - (int)puVar6 >> 2;
        }
        else {
          iVar1 = (((int)puVar5 - (int)puVar15 >> 2) + -1) * 0x20 +
                  ((int)puVar8 - (int)puVar11 >> 2) + ((int)local_40 - (int)puVar6 >> 2);
        }
        if (iVar1 == 0) break;
      }
      if (puVar7 == puVar10) {
        local_44 = local_44 + -1;
        puVar10 = (undefined4 *)*local_44;
        puVar7 = puVar10 + 0x20;
      }
      puVar7 = puVar7 + -1;
      if (puVar6 == puVar13) {
        puVar15 = puVar15 + -1;
        puVar13 = (undefined4 *)*puVar15;
        puVar6 = puVar13 + 0x20;
        local_40 = puVar6;
      }
      puVar6 = puVar6 + -1;
      *puVar7 = *puVar6;
    }
    if (0 < iVar12) {
      do {
        iVar12 = iVar12 + -1;
        iVar2 = *param_2;
        *param_2 = iVar2 + 4;
        iVar3 = param_2[8] + -1;
        param_2[8] = iVar3;
        iVar1 = 0;
        if (iVar3 != 0) {
          iVar1 = param_2[2];
        }
        if (iVar3 == 0 || iVar2 + 4 == iVar1) {
          puVar5 = (undefined4 *)param_2[3];
          param_2[3] = (int)(puVar5 + 1);
          fn_001008c4(*puVar5,0x20,0);
          if (param_2[8] == 0) {
            param_2[4] = 0;
            param_2[5] = 0;
            param_2[6] = 0;
            param_2[7] = 0;
            *param_2 = 0;
            param_2[1] = 0;
            param_2[2] = 0;
            param_2[3] = 0;
            fn_001008c4(param_2[9],param_2[10],0);
          }
          else {
            piVar4 = (int *)param_2[3];
            iVar2 = *piVar4;
            iVar1 = extraout_r1;
            if (piVar4 == (int *)0x0) {
              puVar8 = (undefined4 *)0x0;
              iVar1 = 0;
            }
            *param_2 = iVar2;
            if (piVar4 != (int *)0x0) {
              puVar8 = (undefined4 *)(iVar2 + 0x80);
              iVar1 = iVar2;
            }
            param_2[1] = iVar1;
            param_2[2] = (int)puVar8;
          }
        }
      } while (0 < iVar12);
    }
    *param_1 = *param_4;
    param_1[1] = param_4[1];
    param_1[2] = param_4[2];
    iVar12 = param_4[3];
  }
  else {
    local_40 = (undefined4 *)param_4[2];
    puVar7 = (undefined4 *)param_4[1];
    puVar10 = (undefined4 *)param_2[5];
    puVar16 = (undefined4 *)param_4[3];
    puVar14 = (undefined4 *)param_2[4];
    iVar1 = param_2[6];
    puVar11 = (undefined4 *)param_2[7];
    puVar13 = (undefined4 *)*param_3;
    puVar15 = (undefined4 *)param_3[2];
    puVar5 = (undefined4 *)param_3[3];
    puVar6 = (undefined4 *)*param_4;
    puVar8 = puVar5;
    while (puVar6 != puVar14) {
      if (puVar6 != puVar7) {
        puVar5 = puVar10;
      }
      if (puVar6 == puVar7 || puVar14 == puVar5) {
        if (puVar16 == puVar11) {
          iVar2 = (int)puVar6 - (int)puVar14 >> 2;
          puVar5 = puVar11;
        }
        else {
          puVar5 = (undefined4 *)(((int)puVar16 - (int)puVar11 >> 2) + -1);
          iVar2 = (int)puVar5 * 0x20 +
                  ((int)puVar6 - (int)puVar7 >> 2) + (iVar1 - (int)puVar14 >> 2);
        }
        if (iVar2 == 0) break;
      }
      puVar9 = puVar6 + 1;
      *puVar13 = *puVar6;
      if (puVar9 == local_40) {
        puVar16 = puVar16 + 1;
        puVar9 = (undefined4 *)*puVar16;
        local_40 = puVar9 + 0x20;
        puVar7 = puVar9;
      }
      puVar13 = puVar13 + 1;
      puVar6 = puVar9;
      if (puVar13 == puVar15) {
        puVar8 = puVar8 + 1;
        puVar13 = (undefined4 *)*puVar8;
        puVar15 = puVar13 + 0x20;
      }
    }
    if (0 < iVar12) {
      do {
        iVar12 = iVar12 + -1;
        iVar2 = param_2[4];
        iVar3 = param_2[8] + -1;
        param_2[8] = iVar3;
        param_2[4] = iVar2 + -4;
        iVar1 = 0;
        if (iVar3 != 0) {
          iVar1 = param_2[5];
        }
        if (iVar3 == 0 || iVar2 + -4 == iVar1) {
          puVar5 = (undefined4 *)param_2[7];
          param_2[7] = (int)(puVar5 + -1);
          fn_001008c4(*puVar5,0x20,0);
          if (param_2[8] == 0) {
            param_2[4] = 0;
            param_2[5] = 0;
            param_2[6] = 0;
            param_2[7] = 0;
            *param_2 = 0;
            param_2[1] = 0;
            param_2[2] = 0;
            param_2[3] = 0;
            fn_001008c4(param_2[9],param_2[10],0);
          }
          else {
            iVar1 = *(int *)param_2[7];
            if ((int *)param_2[7] == (int *)0x0) {
              iVar3 = 0;
              iVar2 = 0;
            }
            else {
              iVar3 = iVar1 + 0x80;
              iVar2 = iVar1;
            }
            param_2[6] = iVar3;
            param_2[4] = iVar1 + 0x80;
            param_2[5] = iVar2;
          }
        }
      } while (0 < iVar12);
    }
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    iVar12 = param_3[3];
  }
  param_1[3] = iVar12;
  return;
}



void fn_0078798c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)param_1[3];
  param_1[3] = (int)(puVar1 + 1);
  fn_001008c4(*puVar1,0x20);
  if (param_1[8] == 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    fn_002feef8(param_1[9],param_1[10],0,param_4,unaff_r4,in_lr);
    return;
  }
  iVar2 = *(int *)param_1[3];
  if ((int *)param_1[3] == (int *)0x0) {
    iVar3 = 0;
    iVar4 = 0;
  }
  else {
    iVar3 = iVar2 + 0x100;
    iVar4 = iVar2;
  }
  param_1[2] = iVar3;
  *param_1 = iVar2;
  param_1[1] = iVar4;
  return;
}



void fn_00787798(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  int extraout_r1;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  iVar10 = 0;
  iVar1 = fn_00100fc6(0x100,0);
  if (param_1[8] == 0) {
    param_1[10] = 0x20;
    iVar2 = fn_00100fc6(0x80,0);
    param_1[9] = iVar2;
    *(int *)(iVar2 + ((uint)param_1[10] >> 1) * 4) = iVar1;
    piVar5 = (int *)(param_1[9] + ((uint)param_1[10] >> 1) * 4);
    if (piVar5 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar10 = *piVar5;
      iVar2 = iVar10 + 0x100;
    }
    param_1[2] = iVar2;
    *param_1 = iVar1 + 0x80;
    param_1[1] = iVar10;
    param_1[6] = iVar2;
    param_1[3] = (int)piVar5;
    param_1[4] = iVar1 + 0x80;
    param_1[5] = iVar10;
  }
  else {
    iVar2 = param_1[7];
    uVar9 = 0xfffffffc;
    if (param_1[10] * 4 + -4 + param_1[9] != iVar2) {
      param_1[7] = iVar2 + 4;
      *(int *)(iVar2 + 4) = iVar1;
      piVar5 = (int *)param_1[7];
      if (piVar5 != (int *)0x0) {
        iVar10 = *piVar5;
      }
      param_1[4] = iVar1;
      if (piVar5 != (int *)0x0) {
        iVar1 = iVar10 + 0x100;
      }
      else {
        iVar1 = 0;
      }
      param_1[5] = iVar10;
      param_1[6] = iVar1;
      return;
    }
    iVar2 = iVar2 - param_1[3] >> 2;
    uVar11 = iVar2 * 2 + 2;
    iVar3 = fn_00100fc6(uVar11 * 4,0);
    puVar4 = (uint *)param_1[3];
    uVar12 = uVar11 & 0xfffffffc;
    puVar6 = (uint *)(param_1[7] + 4);
    puVar8 = (uint *)(uVar12 + iVar3);
    if (puVar4 < puVar6) {
      uVar13 = (int)puVar6 - (int)puVar4;
      if (0 < (int)uVar13) {
        uVar7 = (uVar13 & 7) >> 2;
        if (uVar7 != 0) {
          *puVar8 = *puVar4;
        }
        uVar9 = (uint)(uVar7 != 0);
        for (; (int)uVar7 < (int)uVar13 >> 2; uVar7 = uVar7 + 2) {
          puVar8[uVar9] = puVar4[uVar9];
          puVar8[uVar9 + 1] = puVar4[uVar9 + 1];
          uVar9 = uVar9 + 2;
        }
      }
    }
    else {
      for (; puVar4 != puVar6; puVar4 = puVar4 + 1) {
        uVar9 = *puVar4;
        *puVar8 = uVar9;
        puVar8 = puVar8 + 1;
      }
    }
    fn_001008c4(param_1[9],param_1[10],0);
    param_1[9] = iVar3;
    *(int *)(iVar3 + (iVar2 + (uVar11 >> 2)) * 4 + 4) = iVar1;
    piVar5 = (int *)(param_1[9] + uVar12);
    if (piVar5 == (int *)0x0) {
      uVar9 = 0;
      iVar3 = extraout_r1;
    }
    else {
      iVar3 = *piVar5;
    }
    param_1[3] = (int)piVar5;
    if (piVar5 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      uVar9 = iVar3 + 0x100;
    }
    param_1[1] = iVar3;
    param_1[2] = uVar9;
    piVar5 = (int *)(param_1[9] + uVar12 + iVar2 * 4 + 4);
    if (piVar5 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar10 = *piVar5;
      iVar2 = iVar10 + 0x100;
    }
    param_1[6] = iVar2;
    param_1[5] = iVar10;
    param_1[4] = iVar1;
    param_1[10] = uVar11;
  }
  param_1[7] = (int)piVar5;
  return;
}


