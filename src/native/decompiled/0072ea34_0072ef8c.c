#include "0072ea34_0072ef8c.h"



void fn_0072ef8c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < param_1) {
    do {
      puVar2 = (undefined4 *)0x0;
      if (DAT_0089a520 != (code *)0x0) {
        puVar2 = (undefined4 *)(*DAT_0089a520)(0x10000,0x100,0,0x10);
      }
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      iVar1 = DAT_008bfad8;
      while( true ) {
        iVar3 = DAT_008bfad8 + (DAT_008bfadc & 0x1ff) * 4;
        iVar4 = *(int *)(iVar3 + 0x10);
        if (iVar4 == 0) break;
        if (*(uint *)(iVar4 + 8) != DAT_008bfadc) {
          if (DAT_008bfadc < *(uint *)(iVar4 + 8)) {
            *(uint *)(param_2 + iVar5 * 4) = DAT_008bfadc;
            puVar2[2] = DAT_008bfadc;
            puVar2[3] = *(undefined4 *)(iVar1 + (DAT_008bfadc & 0x1ff) * 4 + 0x10);
            goto LAB_0072f02c;
          }
          iVar3 = *(int *)(iVar4 + 0xc);
          while( true ) {
            if (iVar3 == 0) {
              *(undefined4 **)(iVar4 + 0xc) = puVar2;
              puVar2[2] = DAT_008bfadc;
              puVar2[3] = 0;
              *(uint *)(param_2 + iVar5 * 4) = DAT_008bfadc;
              goto LAB_0072f0a0;
            }
            if (*(uint *)(iVar3 + 8) == DAT_008bfadc) break;
            if (DAT_008bfadc < *(uint *)(iVar3 + 8)) {
              *(uint *)(param_2 + iVar5 * 4) = DAT_008bfadc;
              puVar2[2] = DAT_008bfadc;
              *(undefined4 **)(iVar4 + 0xc) = puVar2;
              puVar2[3] = iVar3;
              goto LAB_0072f0a0;
            }
            iVar4 = iVar3;
            iVar3 = *(int *)(iVar3 + 0xc);
          }
        }
        DAT_008bfadc = DAT_008bfadc + 1;
      }
      *(uint *)(param_2 + iVar5 * 4) = DAT_008bfadc;
      iVar3 = iVar1 + (DAT_008bfadc & 0x1ff) * 4;
      puVar2[2] = DAT_008bfadc;
      puVar2[3] = 0;
LAB_0072f02c:
      *(undefined4 **)(iVar3 + 0x10) = puVar2;
LAB_0072f0a0:
      DAT_008bfadc = DAT_008bfadc + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1);
  }
  return;
}



void fn_0072ea34(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  puVar1 = DAT_008bfab0;
  iVar8 = 0;
  iVar10 = param_2;
  if (0 < param_1) {
    do {
      iVar2 = DAT_008bfad8;
      uVar3 = *(uint *)(param_2 + iVar8 * 4);
      if (uVar3 != 0) {
        piVar6 = *(int **)(DAT_008bfad8 + (uVar3 & 0x1ff) * 4 + 0x10);
        piVar9 = (int *)0x0;
        if (piVar6 != (int *)0x0) {
LAB_0072ea84:
          piVar7 = piVar6;
          if ((uint)piVar7[2] < uVar3) goto code_r0x0072ea90;
          if ((piVar7 != (int *)0x0) && (piVar7[2] == uVar3)) {
            if (*piVar7 == 0) goto LAB_0072ef00;
            iVar4 = piVar7[1];
            if (iVar4 == 0) {
              if (puVar1[0x17] == uVar3) {
                puVar1[0x17] = 0;
                if (*(int **)(iVar2 + 0x8a8) == (int *)0x0) {
                  iVar4 = *(int *)(iVar2 + 8);
                }
                else {
                  iVar4 = **(int **)(iVar2 + 0x8a8);
                }
                *(undefined4 *)(iVar4 + 4) = 0;
                *(undefined4 *)(iVar2 + 0x810) = 0;
                if ((char)puVar1[0x41] != '\0') {
                  *puVar1 = *puVar1 | 0x400;
                }
              }
              if (puVar1[0x18] == *(uint *)(param_2 + iVar8 * 4)) {
                puVar1[0x18] = 0;
                if (*(int **)(iVar2 + 0x8a8) == (int *)0x0) {
                  iVar4 = *(int *)(iVar2 + 8);
                }
                else {
                  iVar4 = **(int **)(iVar2 + 0x8a8);
                }
                *(undefined4 *)(iVar4 + 8) = 0;
                *(undefined4 *)(iVar2 + 0x814) = 0;
                if (*(char *)((int)puVar1 + 0x105) != '\0') {
                  *puVar1 = *puVar1 | 0x800;
                }
              }
              if (puVar1[0x19] == *(uint *)(param_2 + iVar8 * 4)) {
                puVar1[0x19] = 0;
                if (*(int **)(iVar2 + 0x8a8) == (int *)0x0) {
                  iVar4 = *(int *)(iVar2 + 8);
                }
                else {
                  iVar4 = **(int **)(iVar2 + 0x8a8);
                }
                *(undefined4 *)(iVar4 + 0xc) = 0;
                *(undefined4 *)(iVar2 + 0x818) = 0;
                if (*(char *)((int)puVar1 + 0x106) != '\0') {
                  *puVar1 = *puVar1 | 0x1000;
                }
              }
              iVar2 = *piVar7;
              fn_00156f48(iVar2 + 0x34);
              fn_00158318(*(undefined4 *)(iVar2 + 0x2c),iVar2 + 0x34);
              goto joined_r0x0072ecfc;
            }
            if (iVar4 == 1) {
              if (puVar1[0x1a] == uVar3) {
                puVar1[0x1a] = 0;
                if (*(int **)(iVar2 + 0x8a8) == (int *)0x0) {
                  iVar4 = *(int *)(iVar2 + 8);
                }
                else {
                  iVar4 = **(int **)(iVar2 + 0x8a8);
                }
                *(undefined4 *)(iVar4 + 0x10) = 0;
                *(undefined4 *)(iVar2 + 0x81c) = 0;
                if (*(char *)((int)puVar1 + 0x107) != '\0') {
                  *puVar1 = *puVar1 | 0x400;
                }
              }
              if (puVar1[0x1b] == *(uint *)(param_2 + iVar8 * 4)) {
                puVar1[0x1b] = 0;
                if (*(int **)(iVar2 + 0x8a8) == (int *)0x0) {
                  iVar4 = *(int *)(iVar2 + 8);
                }
                else {
                  iVar4 = **(int **)(iVar2 + 0x8a8);
                }
                *(undefined4 *)(iVar4 + 0x14) = 0;
                *(undefined4 *)(iVar2 + 0x820) = 0;
                if ((char)puVar1[0x42] != '\0') {
                  *puVar1 = *puVar1 | 0x800;
                }
              }
              if (puVar1[0x1c] == *(uint *)(param_2 + iVar8 * 4)) {
                puVar1[0x1c] = 0;
                if (*(int **)(iVar2 + 0x8a8) == (int *)0x0) {
                  iVar4 = *(int *)(iVar2 + 8);
                }
                else {
                  iVar4 = **(int **)(iVar2 + 0x8a8);
                }
                *(undefined4 *)(iVar4 + 0x18) = 0;
                *(undefined4 *)(iVar2 + 0x824) = 0;
                if (*(char *)((int)puVar1 + 0x109) != '\0') {
                  *puVar1 = *puVar1 | 0x1000;
                }
              }
              iVar4 = *piVar7;
              iVar2 = 0;
              do {
                iVar5 = iVar4 + iVar2 * 0x44;
                fn_00156f48(iVar5 + 0x34);
                fn_00158318(*(undefined4 *)(iVar4 + 0x2c),iVar5 + 0x34);
                iVar2 = iVar2 + 1;
              } while (iVar2 < 6);
joined_r0x0072ecfc:
              if (DAT_0089a524 != (code *)0x0) {
                (*DAT_0089a524)(0x10000,0x100,0);
              }
              *piVar7 = 0;
LAB_0072ef00:
              uVar3 = *(uint *)(param_2 + iVar8 * 4);
              if (uVar3 < DAT_008bfadc) {
                DAT_008bfadc = uVar3;
              }
              if (piVar9 == (int *)0x0) {
                iVar2 = DAT_008bfad8 + (uVar3 & 0x1ff) * 4;
                *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0xc);
              }
              else {
                piVar9[3] = piVar7[3];
              }
              if (DAT_0089a524 != (code *)0x0) {
                (*DAT_0089a524)(0x10000,0x100,0,piVar7);
              }
              goto LAB_0072ef48;
            }
            if (iVar4 != 2) {
              if (iVar4 == 3) {
                iVar4 = 0;
                do {
                  if (puVar1[iVar4 + 0x1d] == *(uint *)(param_2 + iVar8 * 4)) {
                    puVar1[iVar4 + 0x1d] = 0;
                    if (*(int **)(iVar2 + 0x8a8) == (int *)0x0) {
                      iVar5 = *(int *)(iVar2 + 8);
                    }
                    else {
                      iVar5 = **(int **)(iVar2 + 0x8a8);
                    }
                    *(undefined4 *)(iVar5 + iVar4 * 4 + 0x1c) = 0;
                    *(undefined4 *)(iVar2 + iVar4 * 4 + 0x828) = 0;
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 < 0x20);
                iVar2 = 0;
                do {
                  if (puVar1[iVar2 + 0x43] == *(uint *)(param_2 + iVar8 * 4)) {
                    puVar1[iVar2 + 0x43] = 0;
                    puVar1[iVar2 + 100] = 0;
                    *puVar1 = *puVar1 | 0x4000;
                  }
                  iVar2 = iVar2 + 1;
                } while (iVar2 < 0x21);
                iVar2 = *piVar7;
                if ((*(int *)(iVar2 + 0x804) != 0) && (DAT_0089a524 != (code *)0x0)) {
                  (*DAT_0089a524)(0x10000,0x100,0,*(int *)(iVar2 + 0x804),param_1,iVar10);
                }
                if ((*(int *)(iVar2 + 0x808) != 0) && (DAT_0089a524 != (code *)0x0)) {
                  (*DAT_0089a524)(0x10000,0x100,0);
                }
                if ((*(int *)(iVar2 + 0x80c) != 0) && (DAT_0089a524 != (code *)0x0)) {
                  (*DAT_0089a524)(0x10000,0x100,0);
                }
                if ((*(int *)(iVar2 + 0x810) != 0) && (DAT_0089a524 != (code *)0x0)) {
                  (*DAT_0089a524)(0x10000,0x100,0);
                }
                if ((*(int *)(iVar2 + 0x814) != 0) && (DAT_0089a524 != (code *)0x0)) {
                  (*DAT_0089a524)(0x10000,0x100,0);
                }
                if (*(int *)(iVar2 + 0x818) == 0) {
LAB_0072eed8:
                  if (DAT_0089a524 != (code *)0x0) {
                    (*DAT_0089a524)(0x10000,0x100,0,iVar2);
                  }
                }
                else if (DAT_0089a524 != (code *)0x0) {
                  (*DAT_0089a524)(0x10000,0x100,0);
                  goto LAB_0072eed8;
                }
                *piVar7 = 0;
              }
              goto LAB_0072ef00;
            }
            if (puVar1[0x3d] != uVar3) goto joined_r0x0072ecfc;
            *(uint *)(DAT_008bfad8 + 0xc) = uVar3;
          }
        }
      }
LAB_0072ef48:
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1);
  }
  return;
code_r0x0072ea90:
  piVar6 = (int *)piVar7[3];
  piVar9 = piVar7;
  if ((int *)piVar7[3] == (int *)0x0) goto LAB_0072ef48;
  goto LAB_0072ea84;
}


