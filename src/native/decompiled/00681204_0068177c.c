#include "00681204_0068177c.h"



undefined4 *
fn_0068177c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x11] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(char *)((int)param_1 + 0xb1) = (char)param_1 + -0x74;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  piVar1 = (int *)fn_00100fc6(0xc,0,param_3,param_4,param_4);
  iVar2 = fn_00100fc6(0x300,0);
  piVar1[2] = iVar2;
  *piVar1 = param_1[0x26];
  piVar1[1] = 0x20;
  param_1[0x26] = piVar1;
  puVar3 = (undefined1 *)piVar1[2];
  param_1[0x28] = puVar3;
  param_1[0x29] = puVar3 + 0x300;
  param_1[0x28] = puVar3 + 0x18;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[0x2a] = puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(param_1[0x2a] + 8) = param_1[0x2a];
  *(undefined4 *)(param_1[0x2a] + 0xc) = param_1[0x2a];
  param_1[0x2d] = 0xffffffff;
  return param_1;
}



void fn_006813e4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  undefined8 uVar22;
  int local_30;
  
  iVar18 = -1;
  local_30 = -1;
  do {
    iVar15 = *(int *)(param_2 + 0x10);
    iVar17 = *(int *)(param_2 + 4);
    if (iVar15 == 0) {
      piVar2 = (int *)fn_006f608c(iVar17);
      iVar7 = *(int *)(param_1 + 0x5c);
      iVar16 = *(int *)(param_1 + 0x60);
      param_4 = *(int *)(param_1 + 100);
      *piVar2 = iVar7;
      piVar2[1] = iVar16;
      piVar2[2] = param_4;
    }
    else {
      bVar21 = *(char *)(param_2 + 0x19) != '\0';
      cVar1 = '\0';
      if (bVar21) {
        cVar1 = *(char *)(iVar15 + 0x18);
      }
      if (bVar21 && cVar1 != '\0') {
        piVar2 = (int *)fn_006f608c(iVar17);
        iVar7 = *(int *)(iVar17 + 0x6c);
        iVar16 = *(int *)(iVar17 + 0x70);
        param_4 = *(int *)(iVar17 + 0x74);
LAB_00681480:
        *piVar2 = iVar7;
        piVar2[1] = iVar16;
        piVar2[2] = param_4;
      }
      else {
        iVar16 = 0;
        do {
          iVar8 = 0;
          uVar22 = fn_006f60a4(iVar17,iVar16,0);
          while( true ) {
            iVar7 = (int)((ulonglong)uVar22 >> 0x20);
            if ((int)uVar22 == -1) break;
            if (*(int *)(*(int *)(iVar15 + 4) + 0x78) == (int)uVar22) {
              piVar2 = (int *)fn_006f608c(iVar17);
              iVar8 = iVar17 + iVar16 * 0xc;
              iVar7 = *(int *)(iVar8 + 0x48);
              iVar16 = *(int *)(iVar8 + 0x4c);
              param_4 = *(int *)(iVar8 + 0x50);
              goto LAB_00681480;
            }
            iVar8 = iVar8 + 1;
            uVar22 = fn_006f60a4(iVar17,iVar16,iVar8);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < 3);
      }
    }
    piVar2 = (int *)(param_1 + 0x1c);
    bVar21 = *(int *)(param_1 + 0x3c) != 0;
    iVar16 = 0;
    if (bVar21) {
      iVar16 = *piVar2;
      iVar7 = *(int *)(param_1 + 0x20);
    }
    if (!bVar21 || iVar16 == iVar7) {
      iVar7 = fn_00100fc6(0x80,0);
      if (*(int *)(param_1 + 0x3c) == 0) {
        iVar16 = 0;
        uVar6 = fn_00100fc6(0x80,0);
        *(undefined4 *)(param_1 + 0x40) = uVar6;
        *(undefined4 *)(param_1 + 0x44) = 0x20;
        *(int *)(*(int *)(param_1 + 0x40) + 0x40) = iVar7;
        piVar10 = (int *)(*(int *)(param_1 + 0x40) + (*(uint *)(param_1 + 0x44) >> 1) * 4);
        if (piVar10 != (int *)0x0) {
          iVar16 = *piVar10;
        }
        else {
          param_4 = 0;
        }
        *piVar2 = iVar7 + 0x44;
        *(int *)(param_1 + 0x20) = iVar16;
        if (piVar10 != (int *)0x0) {
          param_4 = iVar16 + 0x80;
        }
        *(int *)(param_1 + 0x24) = param_4;
        *(int **)(param_1 + 0x28) = piVar10;
        *(int **)(param_1 + 0x38) = piVar10;
        *(int *)(param_1 + 0x2c) = iVar7 + 0x44;
        *(int *)(param_1 + 0x30) = iVar16;
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
      }
      else {
        iVar16 = *(int *)(param_1 + 0x28);
        iVar8 = *(int *)(param_1 + 0x40);
        if (iVar16 == iVar8) {
          iVar16 = *(int *)(param_1 + 0x38) - iVar16 >> 2;
          uVar3 = iVar16 * 2 + 2;
          iVar8 = fn_00100fc6(uVar3 * 4,0);
          puVar11 = *(undefined4 **)(param_1 + 0x28);
          uVar13 = uVar3 & 0xfffffffc;
          puVar4 = (undefined4 *)(*(int *)(param_1 + 0x38) + 4);
          puVar9 = (undefined4 *)(iVar8 + uVar13 + 4);
          if (puVar11 < puVar4) {
            uVar19 = (int)puVar4 - (int)puVar11;
            if (0 < (int)uVar19) {
              uVar5 = (uVar19 & 7) >> 2;
              if (uVar5 != 0) {
                *puVar9 = *puVar11;
              }
              uVar14 = (uint)(uVar5 != 0);
              for (; (int)uVar5 < (int)uVar19 >> 2; uVar5 = uVar5 + 2) {
                puVar9[uVar14] = puVar11[uVar14];
                puVar9[uVar14 + 1] = puVar11[uVar14 + 1];
                uVar14 = uVar14 + 2;
              }
            }
          }
          else {
            for (; puVar11 != puVar4; puVar11 = puVar11 + 1) {
              *puVar9 = *puVar11;
              puVar9 = puVar9 + 1;
            }
          }
          fn_001008c4(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),0);
          *(int *)(param_1 + 0x40) = iVar8;
          *(int *)(iVar8 + uVar13) = iVar7;
          iVar8 = 0;
          piVar10 = (int *)(uVar13 + *(int *)(param_1 + 0x40));
          if (piVar10 == (int *)0x0) {
            iVar20 = 0;
            iVar12 = 0;
          }
          else {
            iVar12 = *piVar10;
            iVar20 = iVar12 + 0x80;
          }
          *piVar2 = iVar7 + 0x80;
          *(int *)(param_1 + 0x20) = iVar12;
          *(int *)(param_1 + 0x24) = iVar20;
          *(int **)(param_1 + 0x28) = piVar10;
          piVar10 = (int *)(iVar16 * 4 + 4 + *(int *)(param_1 + 0x40) + uVar13);
          if (piVar10 != (int *)0x0) {
            iVar8 = *piVar10;
          }
          *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
          *(uint *)(param_1 + 0x44) = uVar3;
          if (piVar10 != (int *)0x0) {
            param_4 = iVar8 + 0x80;
          }
          else {
            param_4 = 0;
          }
          *(int *)(param_1 + 0x30) = iVar8;
          *(int *)(param_1 + 0x34) = param_4;
          *(int **)(param_1 + 0x38) = piVar10;
        }
        else {
          *(int **)(param_1 + 0x28) = (int *)(iVar16 + -4);
          *(int *)(iVar16 + -4) = iVar7;
          piVar10 = *(int **)(param_1 + 0x28);
          iVar16 = 0;
          param_4 = iVar7 + 0x80;
          if (piVar10 != (int *)0x0) {
            iVar16 = *piVar10;
          }
          else {
            iVar8 = 0;
          }
          *(int **)(param_1 + 0x28) = piVar10;
          if (piVar10 != (int *)0x0) {
            iVar8 = iVar16 + 0x80;
          }
          *(int *)(param_1 + 0x24) = iVar8;
          *(int *)(param_1 + 0x20) = iVar16;
          *piVar2 = param_4;
        }
      }
    }
    piVar10 = (int *)(*piVar2 + -4);
    *piVar2 = (int)piVar10;
    if (piVar10 != (int *)0x0) {
      *piVar10 = iVar17;
    }
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    if (*(char *)(param_2 + 0x18) != '\0') {
      iVar18 = *(int *)(param_1 + 0x3c);
    }
    iVar17 = 0;
    if (*(char *)(param_2 + 0x19) != '\0') {
      iVar17 = *(int *)(param_1 + 0x3c);
      local_30 = iVar17;
    }
    if (iVar15 == 0) {
      if (iVar18 != -1) {
        iVar17 = local_30;
      }
      if ((iVar18 != -1 && iVar17 != -1) && (iVar18 == iVar17 + 1)) {
        iVar18 = *(int *)(param_1 + 0x3c) - iVar18;
      }
      else {
        iVar18 = -1;
      }
      *(int *)(param_1 + 0xb4) = iVar18;
      return;
    }
    param_2 = iVar15;
  } while( true );
}



void fn_00681204(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  
  puVar10 = (uint *)(param_1 + 0x48);
  puVar9 = *(undefined4 **)(param_1 + 0x4c);
  if (puVar9 != *(undefined4 **)(param_1 + 0x50)) {
    *(undefined4 **)(param_1 + 0x4c) = puVar9 + 1;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = param_2;
    }
    return;
  }
  uVar1 = (int)((int)puVar9 - *puVar10) >> 2;
  if (uVar1 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x50) - *puVar10) >> 2)) {
    *(undefined4 **)(param_1 + 0x4c) = puVar9 + 1;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = puVar9[-1];
    }
    puVar5 = puVar9 + -1;
    puVar6 = puVar9;
    if (puVar9 < puVar5) {
      iVar4 = (int)puVar5 - (int)puVar9;
      if (0 < iVar4) {
        if (iVar4 * 0x20000000 < 0) {
          puVar5 = puVar9 + -2;
          puVar6 = puVar9 + -1;
          *puVar6 = *puVar5;
        }
        for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar6[-1] = puVar5[-1];
          puVar5 = puVar5 + -2;
          puVar6 = puVar6 + -2;
          *puVar6 = *puVar5;
        }
      }
    }
    else {
      while (puVar9 != puVar5) {
        puVar5 = puVar5 + -1;
        puVar6[-1] = *puVar5;
        puVar6 = puVar6 + -1;
      }
    }
    *puVar9 = param_2;
    return;
  }
  uVar11 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar11 < uVar1 + 0x20) {
    uVar11 = uVar1 + 0x20;
  }
  puVar2 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
  puVar6 = puVar2;
  for (puVar5 = (undefined4 *)*puVar10; puVar5 != puVar9; puVar5 = puVar5 + 1) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar5;
    }
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar2);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = param_2;
  }
  puVar6 = *(undefined4 **)(param_1 + 0x4c);
  puVar5 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar2);
  for (; puVar9 != puVar6; puVar9 = puVar9 + 1) {
    puVar5 = puVar5 + 1;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar9;
    }
  }
  uVar3 = *puVar10;
  uVar7 = *(uint *)(param_1 + 0x4c);
  iVar4 = uVar7 - uVar3;
  uVar1 = uVar3;
  if (uVar3 < uVar7) {
    if (0 < iVar4) {
      for (iVar8 = iVar4 >> 3; iVar8 != 0; iVar8 = iVar8 + -1) {
      }
    }
  }
  else {
    for (; uVar1 != uVar7; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x50) - uVar3) >> 2,0);
  *(undefined4 **)(param_1 + 0x50) = puVar2 + uVar11;
  *(undefined4 **)(param_1 + 0x4c) = puVar2 + (iVar4 >> 2) + 1;
  *puVar10 = (uint)puVar2;
  return;
}


