#include "single_003011a0_r.h"


extern undefined4 _local_20;

void fn_003011a0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  uint extraout_r1_05;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined **local_80 [8];
  undefined *local_60;
  int local_5c;
  undefined *local_58;
  int local_54;
  undefined *local_50;
  int local_4c;
  undefined *local_48;
  int local_44;
  undefined *local_40;
  int local_3c;
  undefined *local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined *local_20;
  undefined4 local_1c;
  
  if (*(char *)(DAT_008977e0 + 0x170) != '\0') {
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
    }
    fn_0037bda0(*(undefined4 *)(param_1 + 0x48));
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 8) + 0xa8))();
    }
    if (*(char *)(DAT_008977e0 + 0x170) != '\0') {
      iVar1 = fn_006f7a20();
      if (iVar1 == 0) {
        uVar4 = *(uint *)(param_1 + 0xc);
        uVar5 = 0;
        if ((int)(*(int *)(param_1 + 0x10) - uVar4) >> 2 != 0) {
          do {
            piVar2 = *(int **)(uVar4 + uVar5 * 4);
            if (piVar2 != (int *)0x0) {
              uVar4 = (uint)*(byte *)(piVar2 + 0x16);
            }
            if (piVar2 != (int *)0x0 && uVar4 != 0) {
              (**(code **)(*piVar2 + 0xb0))();
            }
            uVar4 = *(uint *)(param_1 + 0xc);
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)((int)(*(int *)(param_1 + 0x10) - uVar4) >> 2));
        }
        piVar2 = (int *)fn_006f7508(DAT_008977e0);
        (**(code **)(*piVar2 + 0x38))();
        iVar1 = *(int *)(param_1 + 0x18);
        uVar5 = 0;
        uVar4 = *(int *)(param_1 + 0x1c) - iVar1;
        if ((int)uVar4 >> 2 != 0) {
          do {
            piVar2 = *(int **)(iVar1 + uVar5 * 4);
            if (piVar2 != (int *)0x0) {
              uVar4 = (uint)*(byte *)(piVar2 + 0x16);
            }
            if (piVar2 != (int *)0x0 && uVar4 != 0) {
              (**(code **)(*piVar2 + 0xb0))(piVar2);
            }
            iVar1 = *(int *)(param_1 + 0x18);
            uVar5 = uVar5 + 1;
            uVar4 = *(int *)(param_1 + 0x1c) - iVar1;
          } while (uVar5 < (uint)((int)uVar4 >> 2));
        }
        uVar4 = *(uint *)(param_1 + 0x24);
        uVar5 = 0;
        if ((int)(*(int *)(param_1 + 0x28) - uVar4) >> 2 != 0) {
          do {
            piVar2 = *(int **)(uVar4 + uVar5 * 4);
            if (piVar2 != (int *)0x0) {
              uVar4 = (uint)*(byte *)(piVar2 + 0x16);
            }
            if (piVar2 != (int *)0x0 && uVar4 != 0) {
              (**(code **)(*piVar2 + 0xb0))();
            }
            uVar4 = *(uint *)(param_1 + 0x24);
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)((int)(*(int *)(param_1 + 0x28) - uVar4) >> 2));
        }
        uVar4 = *(uint *)(param_1 + 0x30);
        uVar5 = 0;
        if ((int)(*(int *)(param_1 + 0x34) - uVar4) >> 2 != 0) {
          do {
            piVar2 = *(int **)(uVar4 + uVar5 * 4);
            if (piVar2 != (int *)0x0) {
              uVar4 = (uint)*(byte *)(piVar2 + 0x16);
            }
            if (piVar2 != (int *)0x0 && uVar4 != 0) {
              (**(code **)(*piVar2 + 0xb0))();
            }
            uVar4 = *(uint *)(param_1 + 0x30);
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)((int)(*(int *)(param_1 + 0x34) - uVar4) >> 2));
        }
        uVar4 = *(uint *)(param_1 + 0x3c);
        uVar5 = 0;
        if ((int)(*(int *)(param_1 + 0x40) - uVar4) >> 2 != 0) {
          do {
            piVar2 = *(int **)(uVar4 + uVar5 * 4);
            if (piVar2 != (int *)0x0) {
              uVar4 = (uint)*(byte *)(piVar2 + 0x16);
            }
            if (piVar2 != (int *)0x0 && uVar4 != 0) {
              (**(code **)(*piVar2 + 0xb0))();
            }
            uVar4 = *(uint *)(param_1 + 0x3c);
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)((int)(*(int *)(param_1 + 0x40) - uVar4) >> 2));
        }
      }
      uVar4 = *(uint *)(param_1 + 0xc);
      uVar5 = 0;
      if ((int)(*(int *)(param_1 + 0x10) - uVar4) >> 2 != 0) {
        do {
          piVar2 = *(int **)(*(int *)(param_1 + 0xc) + uVar5 * 4);
          if (piVar2 != (int *)0x0) {
            uVar4 = (uint)*(byte *)(piVar2 + 0x16);
          }
          if (piVar2 != (int *)0x0 && uVar4 != 0) {
            (**(code **)(*piVar2 + 0xa8))();
          }
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)((int)(uVar4 - *(int *)(param_1 + 0xc)) >> 2));
      }
      piVar2 = (int *)fn_006f7508(DAT_008977e0);
      (**(code **)(*piVar2 + 0x34))();
      uVar4 = *(uint *)(param_1 + 0x18);
      uVar5 = 0;
      if ((int)(*(int *)(param_1 + 0x1c) - uVar4) >> 2 != 0) {
        do {
          piVar2 = *(int **)(*(int *)(param_1 + 0x18) + uVar5 * 4);
          if (piVar2 != (int *)0x0) {
            uVar4 = (uint)*(byte *)(piVar2 + 0x16);
          }
          if (piVar2 != (int *)0x0 && uVar4 != 0) {
            (**(code **)(*piVar2 + 0xa8))();
          }
          uVar4 = *(uint *)(param_1 + 0x1c);
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)((int)(uVar4 - *(int *)(param_1 + 0x18)) >> 2));
      }
      fn_004247cc(*(undefined4 *)(param_1 + 0x60));
      uVar4 = *(uint *)(param_1 + 0x24);
      uVar5 = 0;
      if ((int)(*(int *)(param_1 + 0x28) - uVar4) >> 2 != 0) {
        do {
          piVar2 = *(int **)(uVar4 + uVar5 * 4);
          if (piVar2 != (int *)0x0) {
            uVar4 = (uint)*(byte *)(piVar2 + 0x16);
          }
          if (piVar2 != (int *)0x0 && uVar4 != 0) {
            (**(code **)(*piVar2 + 0xa8))();
          }
          uVar4 = *(uint *)(param_1 + 0x24);
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)((int)(*(int *)(param_1 + 0x28) - uVar4) >> 2));
      }
      uVar4 = *(uint *)(param_1 + 0x30);
      uVar5 = 0;
      if ((int)(*(int *)(param_1 + 0x34) - uVar4) >> 2 != 0) {
        do {
          piVar2 = *(int **)(uVar4 + uVar5 * 4);
          if (piVar2 != (int *)0x0) {
            uVar4 = (uint)*(byte *)(piVar2 + 0x16);
          }
          if (piVar2 != (int *)0x0 && uVar4 != 0) {
            (**(code **)(*piVar2 + 0xa8))();
          }
          uVar4 = *(uint *)(param_1 + 0x30);
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)((int)(*(int *)(param_1 + 0x34) - uVar4) >> 2));
      }
      uVar4 = *(uint *)(param_1 + 0x3c);
      uVar5 = 0;
      if ((int)(*(int *)(param_1 + 0x40) - uVar4) >> 2 != 0) {
        do {
          piVar2 = *(int **)(uVar4 + uVar5 * 4);
          if (piVar2 != (int *)0x0) {
            uVar4 = (uint)*(byte *)(piVar2 + 0x16);
          }
          if (piVar2 != (int *)0x0 && uVar4 != 0) {
            (**(code **)(*piVar2 + 0xa8))();
          }
          uVar4 = *(uint *)(param_1 + 0x3c);
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)((int)(*(int *)(param_1 + 0x40) - uVar4) >> 2));
      }
      iVar1 = fn_006f7a20(DAT_008977e0);
      if (iVar1 == 0) {
        fVar8 = 410.0;
        iVar1 = fn_006f7358(DAT_008977e0);
        if (iVar1 != 0) {
          fVar8 = 120000.0;
        }
        iVar1 = fn_006f733c(DAT_008977e0);
        if (iVar1 == 0) {
          iVar1 = fn_006f7a84(DAT_008977e0);
          pfVar6 = (float *)(iVar1 + 0x20);
        }
        else {
          iVar1 = fn_006f7a5c();
          pfVar6 = (float *)(iVar1 + 0x1c);
        }
        fn_006f7a84(DAT_008977e0);
        iVar1 = fn_006aab48();
        if (iVar1 == 0) {
          uVar9 = (ulonglong)(uint)(fVar8 * fVar8);
          uVar4 = *(uint *)(param_1 + 0x18);
          iVar7 = 0;
          iVar1 = (int)(*(int *)(param_1 + 0x1c) - uVar4) >> 2;
          if (0 < iVar1) {
            do {
              piVar2 = *(int **)(*(int *)(param_1 + 0x18) + iVar7 * 4);
              if (piVar2 != (int *)0x0) {
                uVar4 = (uint)*(byte *)(piVar2 + 0x4e);
              }
              if (piVar2 != (int *)0x0 && (uVar4 & 8) != 0) {
                (**(code **)(*piVar2 + 0x54))
                          (piVar2,(*pfVar6 - (float)piVar2[8]) * (*pfVar6 - (float)piVar2[8]) +
                                  (pfVar6[1] - (float)piVar2[9]) * (pfVar6[1] - (float)piVar2[9]) +
                                  (pfVar6[2] - (float)piVar2[10]) * (pfVar6[2] - (float)piVar2[10])
                                  < (float)uVar9);
                uVar4 = extraout_r1_00;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar1);
          }
        }
        else {
          uVar4 = *(uint *)(param_1 + 0x18);
          iVar7 = 0;
          iVar1 = (int)(*(int *)(param_1 + 0x1c) - uVar4) >> 2;
          if (0 < iVar1) {
            do {
              piVar2 = *(int **)(*(int *)(param_1 + 0x18) + iVar7 * 4);
              if (piVar2 != (int *)0x0) {
                uVar4 = (uint)*(byte *)(piVar2 + 0x4e);
              }
              if (piVar2 != (int *)0x0 && (uVar4 & 8) != 0) {
                (**(code **)(*piVar2 + 0x54))
                          (piVar2,(*pfVar6 - (float)piVar2[8]) * (*pfVar6 - (float)piVar2[8]) +
                                  (pfVar6[1] - (float)piVar2[9]) * (pfVar6[1] - (float)piVar2[9]) +
                                  (pfVar6[2] - (float)piVar2[10]) * (pfVar6[2] - (float)piVar2[10])
                                  < (float)piVar2[0x4a] * (float)piVar2[0x4a]);
                uVar4 = extraout_r1;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar1);
          }
        }
        fn_00423ef0(*(undefined4 *)(param_1 + 0x60));
        uVar4 = *(uint *)(param_1 + 0xc);
        iVar7 = 0;
        iVar1 = (int)(*(int *)(param_1 + 0x10) - uVar4) >> 2;
        if (0 < iVar1) {
          do {
            piVar2 = *(int **)(*(int *)(param_1 + 0xc) + iVar7 * 4);
            if (piVar2 != (int *)0x0) {
              uVar4 = (uint)*(byte *)(piVar2 + 0x4e);
            }
            if (piVar2 != (int *)0x0 && (uVar4 & 8) != 0) {
              (**(code **)(*piVar2 + 0x54))
                        (piVar2,(*pfVar6 - (float)piVar2[8]) * (*pfVar6 - (float)piVar2[8]) +
                                (pfVar6[1] - (float)piVar2[9]) * (pfVar6[1] - (float)piVar2[9]) +
                                (pfVar6[2] - (float)piVar2[10]) * (pfVar6[2] - (float)piVar2[10]) <
                                (float)piVar2[0x4a] * (float)piVar2[0x4a]);
              uVar4 = extraout_r1_01;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar1);
        }
        uVar4 = *(uint *)(param_1 + 0x24);
        iVar7 = 0;
        iVar1 = (int)(*(int *)(param_1 + 0x28) - uVar4) >> 2;
        if (0 < iVar1) {
          do {
            piVar2 = *(int **)(*(int *)(param_1 + 0x24) + iVar7 * 4);
            if (piVar2 != (int *)0x0) {
              uVar4 = (uint)*(byte *)(piVar2 + 0x4e);
            }
            if (piVar2 != (int *)0x0 && (uVar4 & 8) != 0) {
              (**(code **)(*piVar2 + 0x54))
                        (piVar2,(*pfVar6 - (float)piVar2[8]) * (*pfVar6 - (float)piVar2[8]) +
                                (pfVar6[1] - (float)piVar2[9]) * (pfVar6[1] - (float)piVar2[9]) +
                                (pfVar6[2] - (float)piVar2[10]) * (pfVar6[2] - (float)piVar2[10]) <
                                (float)piVar2[0x4a] * (float)piVar2[0x4a]);
              uVar4 = extraout_r1_02;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar1);
        }
        uVar4 = *(uint *)(param_1 + 0x30);
        iVar7 = 0;
        uVar10 = 0x48242900;
        iVar1 = (int)(*(int *)(param_1 + 0x34) - uVar4) >> 2;
        if (0 < iVar1) {
          do {
            piVar2 = *(int **)(*(int *)(param_1 + 0x30) + iVar7 * 4);
            if (piVar2 != (int *)0x0) {
              uVar4 = (uint)*(byte *)(piVar2 + 0x4e);
            }
            if (piVar2 != (int *)0x0 && (uVar4 & 8) != 0) {
              (**(code **)(*piVar2 + 0x54))
                        (piVar2,(*pfVar6 - (float)piVar2[8]) * (*pfVar6 - (float)piVar2[8]) +
                                (pfVar6[1] - (float)piVar2[9]) * (pfVar6[1] - (float)piVar2[9]) +
                                (pfVar6[2] - (float)piVar2[10]) * (pfVar6[2] - (float)piVar2[10]) <
                                (float)uVar10);
              uVar4 = extraout_r1_03;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar1);
        }
        uVar4 = *(uint *)(param_1 + 0x3c);
        iVar7 = 0;
        uVar10 = 0x497e0100;
        iVar1 = (int)(*(int *)(param_1 + 0x40) - uVar4) >> 2;
        if (0 < iVar1) {
          do {
            piVar2 = *(int **)(*(int *)(param_1 + 0x3c) + iVar7 * 4);
            if (piVar2 != (int *)0x0) {
              uVar4 = (uint)*(byte *)(piVar2 + 0x4e);
            }
            if (piVar2 != (int *)0x0 && (uVar4 & 8) != 0) {
              (**(code **)(*piVar2 + 0x54))
                        (piVar2,(*pfVar6 - (float)piVar2[8]) * (*pfVar6 - (float)piVar2[8]) +
                                (pfVar6[1] - (float)piVar2[9]) * (pfVar6[1] - (float)piVar2[9]) +
                                (pfVar6[2] - (float)piVar2[10]) * (pfVar6[2] - (float)piVar2[10]) <
                                (float)uVar10);
              uVar4 = extraout_r1_04;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar1);
        }
      }
      uVar3 = fn_006f7770(DAT_008977e0);
      uVar4 = *(uint *)(param_1 + 0x18);
      iVar7 = 0;
      iVar1 = (int)(*(int *)(param_1 + 0x1c) - uVar4) >> 2;
      if (0 < iVar1) {
        do {
          piVar2 = *(int **)(*(int *)(param_1 + 0x18) + iVar7 * 4);
          if (piVar2 != (int *)0x0) {
            uVar4 = (uint)*(byte *)(piVar2 + 0x16);
          }
          if (piVar2 != (int *)0x0 && uVar4 != 0) {
            (**(code **)(*piVar2 + 0x128))(piVar2,uVar3);
            uVar4 = extraout_r1_05;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1);
      }
      local_5c = param_1 + 0xc;
      local_60 = &DAT_008267b8;
      local_54 = param_1 + 0x18;
      local_58 = &DAT_00826780;
      local_4c = param_1 + 0x24;
      local_50 = &DAT_0082679c;
      local_44 = param_1 + 0x30;
      local_3c = param_1 + 0x3c;
      local_48 = &DAT_00826748;
      local_40 = &DAT_00826764;
      uVar3 = fn_006f7508(DAT_008977e0);
      _local_20 = CONCAT44(uVar3,&DAT_00823c88);
      uVar4 = 0;
      local_38 = &DAT_0081de0c;
      local_34 = *(undefined4 *)(param_1 + 8);
      local_2c = *(undefined4 *)(param_1 + 4);
      local_30 = &DAT_0081d5cc;
      local_80[0] = &local_30;
      local_80[1] = &local_38;
      local_80[2] = &local_20;
      local_80[3] = &local_60;
      local_80[4] = &local_58;
      local_80[5] = &local_50;
      local_80[6] = &local_48;
      local_80[7] = &local_40;
      do {
        (**(code **)(*local_80[uVar4] + 8))();
        uVar4 = uVar4 + 1;
      } while (uVar4 < 8);
      uVar4 = (**(code **)(*local_80[*(int *)(param_1 + 0x58)] + 8))();
      if (uVar4 <= *(uint *)(param_1 + 0x5c)) {
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x18) = 0;
      uVar4 = *(uint *)(param_1 + 0x58);
      if (uVar4 < 8) {
        while ((iVar1 = (**(code **)(*local_80[uVar4] + 8))(), iVar1 == 0 ||
               (iVar1 = (**(code **)(*local_80[uVar4] + 0x10))
                                  (local_80[uVar4],*(undefined4 *)(param_1 + 0x48),
                                   *(undefined4 *)(param_1 + 0x5c)), iVar1 == -1))) {
          *(undefined4 *)(param_1 + 0x5c) = 0;
          if (uVar4 == 7) {
            *(undefined4 *)(param_1 + 0x58) = 0;
            return;
          }
          uVar4 = uVar4 + 1;
          if (7 < uVar4) {
            return;
          }
        }
        *(uint *)(param_1 + 0x58) = uVar4;
        *(int *)(param_1 + 0x5c) = iVar1;
      }
      return;
    }
  }
  return;
}


