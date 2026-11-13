#include "005ed86c_005ed86c.h"



undefined4
fn_005ed86c(int param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 *param_5,
            int param_6,int param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  undefined4 uVar21;
  char cVar22;
  undefined4 *puVar23;
  undefined8 uVar24;
  
  iVar2 = fn_005f07fc(*(undefined4 *)(param_1 + 4),param_3);
  *(int **)(param_1 + 0x10) = param_2;
  iVar20 = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(param_1 + 0xc);
  }
  iVar14 = param_2[1] - *param_2 >> 2;
  if (0 < iVar14) {
    uVar24 = 0;
    do {
      iVar18 = *(int *)(**(int **)(param_1 + 0x10) + iVar20 * 4);
      iVar3 = fn_00145b00(8,&DAT_00812c8c);
      if (iVar3 == 0) {
        uVar21 = 0;
      }
      else {
        uVar21 = fn_005f0780();
      }
      iVar3 = fn_006dc71c(*(undefined4 *)(param_1 + 4),iVar18 + 0x40,param_3);
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
        DAT_008f9e2c = (undefined4)uVar24;
        DAT_008f9e30 = DAT_008f9e2c;
        DAT_008f9e34 = DAT_008f9e2c;
      }
      iVar18 = fn_005f0810(*(undefined4 *)(param_1 + 4),uVar21,&DAT_008f9e2c,iVar3,param_3,
                            param_4 & 0xff,iVar18);
      if (iVar18 == 0) {
        while (iVar20 = iVar20 + -1, -1 < iVar20) {
          iVar2 = *(int *)(param_1 + 0x38);
          puVar23 = *(undefined4 **)(param_1 + 0x20);
          puVar13 = (undefined4 *)puVar23[iVar20];
          piVar5 = *(int **)(iVar2 + 0x18);
          piVar9 = *(int **)(iVar2 + 0x1c);
          while( true ) {
            if (piVar5 != piVar9) {
              puVar23 = (undefined4 *)*piVar5;
            }
            if (piVar5 == piVar9 || puVar23 == puVar13) break;
            piVar5 = piVar5 + 1;
          }
          if (piVar5 != piVar9) {
            piVar10 = piVar5 + 1;
            if (piVar10 < piVar9) {
              iVar14 = (int)piVar9 - (int)piVar10;
              if (0 < iVar14) {
                piVar9 = piVar5;
                if (iVar14 * 0x20000000 < 0) {
                  puVar23 = (undefined4 *)*piVar10;
                  piVar10 = piVar5 + 2;
                  if (puVar23 != puVar13) {
                    piVar9 = piVar5 + 1;
                    *piVar5 = (int)puVar23;
                  }
                }
                piVar5 = piVar9;
                for (iVar14 = iVar14 >> 3; iVar14 != 0; iVar14 = iVar14 + -1) {
                  piVar9 = piVar5;
                  if ((undefined4 *)*piVar10 != puVar13) {
                    piVar9 = piVar5 + 1;
                    *piVar5 = *piVar10;
                  }
                  piVar7 = piVar10 + 1;
                  piVar10 = piVar10 + 2;
                  piVar5 = piVar9;
                  if ((undefined4 *)*piVar7 != puVar13) {
                    piVar5 = piVar9 + 1;
                    *piVar9 = *piVar7;
                  }
                }
              }
            }
            else {
              while (piVar10 != piVar9) {
                puVar23 = (undefined4 *)*piVar10;
                piVar10 = piVar10 + 1;
                if (puVar23 != puVar13) {
                  *piVar5 = (int)puVar23;
                  piVar5 = piVar5 + 1;
                }
              }
            }
          }
          piVar9 = *(int **)(iVar2 + 0x1c);
          *(int **)(iVar2 + 0x1c) = piVar5;
          if (piVar5 != piVar9) {
            puVar13[3] = 0;
          }
          piVar9 = (int *)puVar13[7];
          for (piVar5 = (int *)puVar13[6]; piVar5 != piVar9; piVar5 = piVar5 + 1) {
            if (*piVar5 != 0) {
              *(undefined4 *)(*piVar5 + 0xc) = 0;
              fn_005472e0(*piVar5);
              *piVar5 = 0;
            }
          }
          (**(code **)*puVar13)(puVar13);
          (**(code **)(*(int *)puVar13[1] + 0xc))((int *)puVar13[1],puVar13);
          piVar5 = *(int **)(*(int *)(param_1 + 0x14) + iVar20 * 4);
          fn_005f08dc(*(undefined4 *)(param_1 + 4),piVar5);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 4))(piVar5);
          }
        }
        uVar12 = *(uint *)(param_1 + 0x14);
        uVar6 = *(uint *)(param_1 + 0x18);
        if (uVar12 != uVar6) {
          uVar8 = uVar12;
          if (uVar6 <= uVar12) {
            do {
              uVar8 = uVar8 + 4;
            } while (uVar8 != uVar6);
          }
          *(uint *)(param_1 + 0x18) = uVar6 - (uVar6 - uVar12 & 0xfffffffc);
        }
        uVar12 = *(uint *)(param_1 + 0x20);
        uVar6 = *(uint *)(param_1 + 0x24);
        if (uVar12 != uVar6) {
          uVar8 = uVar12;
          if (uVar6 <= uVar12) {
            do {
              uVar8 = uVar8 + 4;
            } while (uVar8 != uVar6);
          }
          *(uint *)(param_1 + 0x24) = uVar6 - (uVar6 - uVar12 & 0xfffffffc);
        }
        return 0;
      }
      puVar23 = *(undefined4 **)(param_1 + 0x18);
      puVar19 = (uint *)(param_1 + 0x14);
      cVar22 = *(char *)(*(int *)(iVar2 + 0x18) + iVar3 * 0x3c + 0xc);
      if (cVar22 == '\0') {
        cVar22 = -0x80;
      }
      if (puVar23 == *(undefined4 **)(param_1 + 0x1c)) {
        uVar12 = (int)((int)puVar23 - *puVar19) >> 2;
        if (uVar12 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x1c) - *puVar19) >> 2)) {
          *(undefined4 **)(param_1 + 0x18) = puVar23 + 1;
          if (puVar23 != (undefined4 *)0x0) {
            *puVar23 = puVar23[-1];
          }
          puVar13 = puVar23 + -1;
          puVar15 = puVar23;
          if (puVar23 < puVar13) {
            if (0 < (int)puVar13 - (int)puVar23) {
              iVar3 = (int)puVar13 - (int)puVar23 >> 2;
              iVar18 = 0;
              do {
                iVar3 = iVar3 + -1;
                puVar23[iVar18 + -1] = puVar13[iVar18 + -1];
                iVar18 = iVar18 + -1;
              } while (iVar3 != 0);
            }
          }
          else {
            while (puVar23 != puVar13) {
              puVar13 = puVar13 + -1;
              puVar15[-1] = *puVar13;
              puVar15 = puVar15 + -1;
            }
          }
          *puVar23 = uVar21;
        }
        else {
          uVar6 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
          if (uVar6 < uVar12 + 0x20) {
            uVar6 = uVar12 + 0x20;
          }
          puVar16 = (undefined4 *)fn_00100fc6(uVar6 << 2,0);
          puVar15 = puVar16;
          for (puVar13 = (undefined4 *)*puVar19; puVar13 != puVar23; puVar13 = puVar13 + 1) {
            if (puVar15 != (undefined4 *)0x0) {
              *puVar15 = *puVar13;
            }
            puVar15 = puVar15 + 1;
          }
          puVar13 = (undefined4 *)((int)puVar16 + ((int)puVar23 - *puVar19 & 0xfffffffc));
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = uVar21;
          }
          puVar15 = *(undefined4 **)(param_1 + 0x18);
          puVar13 = (undefined4 *)((int)puVar16 + ((int)puVar23 - *puVar19 & 0xfffffffc));
          for (; puVar23 != puVar15; puVar23 = puVar23 + 1) {
            puVar13 = puVar13 + 1;
            if (puVar13 != (undefined4 *)0x0) {
              *puVar13 = *puVar23;
            }
          }
          uVar8 = *puVar19;
          uVar11 = *(uint *)(param_1 + 0x18);
          uVar12 = uVar8;
          if (uVar11 < uVar8) {
            do {
              uVar12 = uVar12 + 4;
            } while (uVar12 != uVar11);
          }
          fn_001008c4(uVar8,(int)(*(int *)(param_1 + 0x1c) - uVar8) >> 2,0);
          *(undefined4 **)(param_1 + 0x1c) = puVar16 + uVar6;
          *puVar19 = (uint)puVar16;
          *(undefined4 **)(param_1 + 0x18) = puVar16 + ((int)(uVar11 - uVar8) >> 2) + 1;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0x18) = puVar23 + 1;
        if (puVar23 != (undefined4 *)0x0) {
          *puVar23 = uVar21;
        }
      }
      iVar3 = fn_005f0b00(*(undefined4 *)(param_1 + 4),uVar21,param_7);
      fn_005e4c4c(iVar3,cVar22);
      piVar5 = *(int **)(param_1 + 0x24);
      puVar19 = (uint *)(param_1 + 0x20);
      if (piVar5 == *(int **)(param_1 + 0x28)) {
        uVar12 = (int)((int)piVar5 - *puVar19) >> 2;
        if (uVar12 < (uint)((int)((int)*(int **)(param_1 + 0x28) - *puVar19) >> 2)) {
          *(int **)(param_1 + 0x24) = piVar5 + 1;
          if (piVar5 != (int *)0x0) {
            *piVar5 = piVar5[-1];
          }
          piVar9 = piVar5 + -1;
          piVar10 = piVar5;
          if (piVar5 < piVar9) {
            if (0 < (int)piVar9 - (int)piVar5) {
              iVar18 = (int)piVar9 - (int)piVar5 >> 2;
              iVar4 = 0;
              do {
                iVar18 = iVar18 + -1;
                piVar5[iVar4 + -1] = piVar9[iVar4 + -1];
                iVar4 = iVar4 + -1;
              } while (iVar18 != 0);
            }
          }
          else {
            while (piVar5 != piVar9) {
              piVar9 = piVar9 + -1;
              piVar10[-1] = *piVar9;
              piVar10 = piVar10 + -1;
            }
          }
          *piVar5 = iVar3;
        }
        else {
          uVar6 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
          if (uVar6 < uVar12 + 0x20) {
            uVar6 = uVar12 + 0x20;
          }
          piVar7 = (int *)fn_00100fc6(uVar6 << 2,0);
          piVar10 = piVar7;
          for (piVar9 = (int *)*puVar19; piVar9 != piVar5; piVar9 = piVar9 + 1) {
            if (piVar10 != (int *)0x0) {
              *piVar10 = *piVar9;
            }
            piVar10 = piVar10 + 1;
          }
          piVar9 = (int *)(((int)piVar5 - *puVar19 & 0xfffffffc) + (int)piVar7);
          if (piVar9 != (int *)0x0) {
            *piVar9 = iVar3;
          }
          piVar10 = *(int **)(param_1 + 0x24);
          piVar9 = (int *)(((int)piVar5 - *puVar19 & 0xfffffffc) + (int)piVar7);
          for (; piVar5 != piVar10; piVar5 = piVar5 + 1) {
            piVar9 = piVar9 + 1;
            if (piVar9 != (int *)0x0) {
              *piVar9 = *piVar5;
            }
          }
          uVar8 = *puVar19;
          uVar11 = *(uint *)(param_1 + 0x24);
          uVar12 = uVar8;
          if (uVar11 < uVar8) {
            do {
              uVar12 = uVar12 + 4;
            } while (uVar12 != uVar11);
          }
          fn_001008c4(uVar8,(int)(*(int *)(param_1 + 0x28) - uVar8) >> 2,0);
          *puVar19 = (uint)piVar7;
          *(int **)(param_1 + 0x24) = piVar7 + ((int)(uVar11 - uVar8) >> 2) + 1;
          *(int **)(param_1 + 0x28) = piVar7 + uVar6;
        }
      }
      else {
        *(int **)(param_1 + 0x24) = piVar5 + 1;
        if (piVar5 != (int *)0x0) {
          *piVar5 = iVar3;
        }
      }
      iVar18 = *(int *)(param_1 + 0x38);
      if (((*(int *)(iVar18 + 0xc) == 0) ||
          ((*(int *)(iVar18 + 0xc) != iVar3 && (iVar4 = fn_0019bb90(), iVar4 == 0)))) &&
         (*(int *)(iVar3 + 0xc) == 0)) {
        piVar5 = (int *)(iVar18 + 0x14);
        uVar12 = *(uint *)(iVar18 + 0x20) & 0x3fffffff;
        if (*(int *)(iVar18 + 0x1c) - *(int *)(iVar18 + 0x18) >> 2 < (int)uVar12) {
LAB_005ee0f8:
          bVar1 = true;
          if (*(int **)(iVar18 + 0x1c) != (int *)0x0) {
            **(int **)(iVar18 + 0x1c) = iVar3;
          }
          *(int *)(iVar18 + 0x1c) = *(int *)(iVar18 + 0x1c) + 4;
        }
        else {
          if (uVar12 == 0) {
            uVar12 = 1;
          }
          else {
            uVar12 = uVar12 << 1;
          }
          if (uVar12 <= (*(uint *)(iVar18 + 0x20) & 0x3fffffff)) goto LAB_005ee0f8;
          if ((*piVar5 != 0) && ((*(uint *)(iVar18 + 0x20) & 0xc0000000) == 0x40000000)) {
            puVar23 = (undefined4 *)
                      (**(code **)(*(int *)*piVar5 + 8))((int *)*piVar5,uVar12 << 2,0x20);
            if (puVar23 == (undefined4 *)0x0) goto LAB_005edfcc;
            puVar13 = *(undefined4 **)(iVar18 + 0x18);
            puVar16 = *(undefined4 **)(iVar18 + 0x1c);
            iVar4 = 0;
            puVar15 = puVar23;
            if (puVar13 != puVar16) {
              do {
                if (puVar15 != (undefined4 *)0x0) {
                  *puVar15 = *puVar13;
                }
                puVar13 = puVar13 + 1;
                puVar15 = puVar15 + 1;
              } while (puVar13 != puVar16);
              iVar4 = *(int *)(iVar18 + 0x1c) - *(int *)(iVar18 + 0x18) >> 2;
            }
            if (*(int *)(iVar18 + 0x18) != 0) {
              *(int *)(iVar18 + 0x1c) = *(int *)(iVar18 + 0x18);
              (**(code **)(*(int *)*piVar5 + 0xc))();
            }
            *(undefined4 **)(iVar18 + 0x1c) = puVar23 + iVar4;
            *(undefined4 **)(iVar18 + 0x18) = puVar23;
            *(uint *)(iVar18 + 0x20) = uVar12 | *(uint *)(iVar18 + 0x20) & 0xc0000000;
            goto LAB_005ee0f8;
          }
          bVar1 = false;
        }
        if (bVar1) {
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar18 + 0x10);
        }
      }
LAB_005edfcc:
      iVar20 = iVar20 + 1;
    } while (iVar20 < iVar14);
  }
  *(uint *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  iVar20 = *(int *)(param_1 + 0x38);
  uVar21 = param_5[1];
  uVar17 = param_5[2];
  *(undefined4 *)(iVar20 + 0x58) = *param_5;
  *(undefined4 *)(iVar20 + 0x68) = uVar21;
  *(undefined4 *)(iVar20 + 0x78) = uVar17;
  *(uint *)(iVar20 + 0x88) = *(uint *)(iVar20 + 0x88) | 0x800;
  fn_005ee1e8(param_1,param_1 + 0x40);
  if (param_6 != 0) {
    fn_001969a4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x38));
    fn_00162d44(*(undefined4 *)(param_1 + 8));
  }
  return 1;
}


