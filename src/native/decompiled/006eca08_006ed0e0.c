#include "006eca08_006ed0e0.h"



int fn_006ed0e0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int local_58;
  int iStack_54;
  int iStack_50;
  int *local_4c;
  int iStack_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar5 = 0;
  iStack_34 = iVar1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  iVar2 = fn_006edaac(iVar1,param_4);
  if (iVar2 < 0) {
    iVar5 = 0;
  }
  else {
    iVar6 = 0;
    piVar8 = (int *)(*(int *)(iVar1 + 0x10) + iVar2 * 8);
    if (0 < *piVar8) {
      do {
        iVar2 = *(int *)(iVar1 + 4);
        uVar7 = (uint)*(ushort *)(piVar8[1] + iVar6 * 2);
        iVar4 = *(int *)(iVar1 + 0xc);
        piVar9 = (int *)(iVar2 + uVar7 * 0x1c + 0xc);
        local_4c = (int *)(iVar4 + *(int *)(iVar2 + uVar7 * 0x1c) * 0xc);
        piVar10 = (int *)(iVar4 + *(int *)(iVar2 + uVar7 * 0x1c + 4) * 0xc);
        piVar11 = (int *)(iVar4 + *(int *)(iVar2 + uVar7 * 0x1c + 8) * 0xc);
        iVar2 = fn_005f2020(&local_58,local_28,local_4c,piVar10,piVar11,piVar9);
        if (iVar2 != 0) {
          if (local_30 == 0) {
            return 1;
          }
          if (iVar5 < local_2c) {
            piVar3 = (int *)(local_30 + iVar5 * 0x48);
            *piVar3 = iVar6;
            piVar3[1] = (int)*(short *)(*(int *)(iVar1 + 4) + uVar7 * 0x1c + 0x18);
            piVar3[2] = local_58;
            piVar3[3] = iStack_54;
            piVar3[4] = iStack_50;
            iVar2 = local_4c[1];
            iVar4 = local_4c[2];
            piVar3[5] = *local_4c;
            piVar3[6] = iVar2;
            piVar3[7] = iVar4;
            iVar2 = piVar10[1];
            iVar4 = piVar10[2];
            piVar3[8] = *piVar10;
            piVar3[9] = iVar2;
            piVar3[10] = iVar4;
            iVar2 = piVar11[1];
            iVar4 = piVar11[2];
            piVar3[0xb] = *piVar11;
            piVar3[0xc] = iVar2;
            piVar3[0xd] = iVar4;
            iVar2 = piVar9[1];
            iVar4 = piVar9[2];
            piVar3[0xe] = *piVar9;
            piVar3[0xf] = iVar2;
            piVar3[0x10] = iVar4;
            piVar3[0x11] = *(int *)(iVar1 + 0x2c);
          }
          iVar5 = iVar5 + 1;
          if (local_2c <= iVar5) break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *piVar8);
    }
  }
  return iVar5;
}



int fn_006ed054(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 4);
  iVar1 = fn_006edaac(uVar3);
  iVar2 = fn_006edaac(uVar3,param_3);
  if (iVar1 != iVar2) {
    iVar1 = -1;
  }
  return iVar1;
}



void fn_006eca08(int param_1,float *param_2,uint *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  ushort *puVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar12 = *piVar1;
  fVar20 = *param_2 + *(float *)(iVar12 + 0xc);
  iVar15 = (int)(fVar20 / *(float *)(iVar12 + 8));
  fVar21 = param_2[2] + *(float *)(iVar12 + 0xc);
  if ((((0.0 <= fVar20) && (uVar9 = (uint)*(ushort *)(iVar12 + 4), iVar15 < (int)uVar9)) &&
      (iVar16 = (int)(fVar21 / *(float *)(iVar12 + 8)), 0.0 <= fVar21)) && (iVar16 < (int)uVar9)) {
    iVar15 = iVar16 * uVar9 + iVar15;
    iVar16 = 0;
    iVar13 = *(int *)(iVar12 + *(int *)(iVar12 + 0x1c) + iVar15 * 8 + 4);
    if (0 < iVar13) {
      do {
        iVar2 = *piVar1;
        iVar10 = iVar2 + *(int *)(iVar2 + 0x1c);
        puVar14 = (ushort *)(*(int *)(iVar10 + iVar15 * 8) + iVar10 + iVar16 * 4);
        iVar2 = iVar2 + *(int *)(iVar2 + 0x20) + (uint)*puVar14 * 0x34;
        uVar9 = (uint)*(byte *)(iVar12 + 0x10);
        uVar5 = 0;
        if (uVar9 != 0) {
          do {
            param_4 = 1 << (uVar5 & 0xff);
            uVar5 = uVar5 + 1;
            if ((byte)puVar14[1] == param_4) {
              uVar5 = uVar5 & 0xff;
              if (uVar5 != 0) goto LAB_006ecb68;
              break;
            }
          } while ((int)uVar5 < (int)uVar9);
        }
        fVar17 = *(float *)(iVar2 + 4) - fVar20;
        fVar19 = *(float *)(iVar2 + 0xc) - fVar21;
        if (uVar9 != 0) {
          param_4 = (uint)(byte)puVar14[1];
        }
        uVar5 = 0;
        if (uVar9 != 0) {
          do {
            if (((1 << (uVar5 & 0xff) & ~param_4) == 0) &&
               (fVar18 = *(float *)(iVar2 + uVar5 * 4 + 0x18),
               fVar17 * fVar17 + fVar19 * fVar19 <= fVar18 * fVar18)) {
              uVar5 = uVar5 + 1 & 0xff;
              if (uVar5 != 0) {
LAB_006ecb68:
                puVar3 = (uint *)param_3[1];
                param_4 = (uint)*puVar14 | (uVar5 - 1) * 0x10000 & 0xff0000;
                if (puVar3 == (uint *)param_3[2]) {
                  uVar9 = (int)((int)puVar3 - *param_3) >> 2;
                  if (uVar9 < (uint)((int)((int)param_3[2] - *param_3) >> 2)) {
                    param_3[1] = (uint)(puVar3 + 1);
                    if (puVar3 != (uint *)0x0) {
                      *puVar3 = puVar3[-1];
                    }
                    puVar6 = puVar3 + -1;
                    puVar7 = puVar3;
                    if (puVar3 < puVar6) {
                      iVar2 = (int)puVar6 - (int)puVar3;
                      if (0 < iVar2) {
                        uVar9 = iVar2 * 0x20000000;
                        if ((int)uVar9 < 0) {
                          puVar6 = puVar3 + -2;
                          uVar9 = *puVar6;
                          puVar7 = puVar3 + -1;
                          *puVar7 = uVar9;
                        }
                        for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
                          puVar7[-1] = puVar6[-1];
                          puVar6 = puVar6 + -2;
                          uVar9 = *puVar6;
                          puVar7 = puVar7 + -2;
                          *puVar7 = uVar9;
                        }
                      }
                    }
                    else {
                      while (puVar3 != puVar6) {
                        puVar6 = puVar6 + -1;
                        uVar9 = *puVar6;
                        puVar7[-1] = uVar9;
                        puVar7 = puVar7 + -1;
                      }
                    }
                    *puVar3 = param_4;
                    param_4 = uVar9;
                  }
                  else {
                    uVar5 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
                    if (uVar5 < uVar9 + 0x20) {
                      uVar5 = uVar9 + 0x20;
                    }
                    puVar4 = (uint *)fn_00100fc6(uVar5 << 2,0);
                    puVar7 = puVar4;
                    for (puVar6 = (uint *)*param_3; puVar6 != puVar3; puVar6 = puVar6 + 1) {
                      if (puVar7 != (uint *)0x0) {
                        *puVar7 = *puVar6;
                      }
                      puVar7 = puVar7 + 1;
                    }
                    puVar6 = (uint *)((int)puVar4 + ((int)puVar3 - *param_3 & 0xfffffffc));
                    if (puVar6 != (uint *)0x0) {
                      *puVar6 = param_4;
                    }
                    puVar7 = (uint *)param_3[1];
                    puVar6 = (uint *)((int)puVar4 + ((int)puVar3 - *param_3 & 0xfffffffc));
                    for (; puVar3 != puVar7; puVar3 = puVar3 + 1) {
                      puVar6 = puVar6 + 1;
                      if (puVar6 != (uint *)0x0) {
                        *puVar6 = *puVar3;
                      }
                    }
                    param_4 = *param_3;
                    uVar8 = param_3[1];
                    iVar2 = uVar8 - param_4;
                    uVar9 = param_4;
                    if (uVar8 < param_4) {
                      do {
                        uVar9 = uVar9 + 4;
                      } while (uVar9 != uVar8);
                    }
                    fn_001008c4(param_4,(int)(param_3[2] - param_4) >> 2,0);
                    param_3[2] = (uint)(puVar4 + uVar5);
                    *param_3 = (uint)puVar4;
                    param_3[1] = (uint)(puVar4 + (iVar2 >> 2) + 1);
                  }
                }
                else {
                  param_3[1] = (uint)(puVar3 + 1);
                  if (puVar3 != (uint *)0x0) {
                    *puVar3 = param_4;
                  }
                }
              }
              break;
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < (int)uVar9);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < iVar13);
    }
    puVar3 = (uint *)param_3[1];
    param_3 = (uint *)*param_3;
    if (param_3 != puVar3) {
      fn_007ae930(param_3,puVar3,(int)puVar3 - (int)param_3 >> 2);
      puVar6 = param_3;
      if ((int)puVar3 - (int)param_3 < 0x41) {
        while (puVar6 = puVar6 + 1, puVar6 != puVar3) {
          uVar9 = *puVar6;
          puVar7 = puVar6;
          if ((uVar9 & 0xffff) < (uint)(ushort)*param_3) {
            puVar7 = puVar6 + 1;
            puVar4 = puVar6;
            if (param_3 < puVar6) {
              iVar12 = (int)puVar6 - (int)param_3;
              if (0 < iVar12) {
                if (iVar12 * 0x20000000 < 0) {
                  puVar4 = puVar6 + -1;
                  *puVar6 = *puVar4;
                  puVar7 = puVar6;
                }
                for (iVar12 = iVar12 >> 3; iVar12 != 0; iVar12 = iVar12 + -1) {
                  puVar7[-1] = puVar4[-1];
                  puVar4 = puVar4 + -2;
                  puVar7 = puVar7 + -2;
                  *puVar7 = *puVar4;
                }
              }
            }
            else {
              while (param_3 != puVar4) {
                puVar7 = puVar7 + -1;
                *puVar7 = puVar4[-1];
                puVar4 = puVar4 + -1;
              }
            }
            *param_3 = uVar9;
          }
          else {
            while ((uVar9 & 0xffff) < (uint)(ushort)puVar7[-1]) {
              *puVar7 = puVar7[-1];
              puVar7 = puVar7 + -1;
            }
            *puVar7 = uVar9;
          }
        }
      }
      else {
        while (puVar7 = puVar6 + 1, puVar7 != param_3 + 0x10) {
          uVar9 = *puVar7;
          if ((uVar9 & 0xffff) < (uint)(ushort)*param_3) {
            puVar4 = puVar6 + 2;
            puVar11 = puVar7;
            if (param_3 < puVar7) {
              iVar12 = (int)puVar7 - (int)param_3;
              if (0 < iVar12) {
                if (iVar12 * 0x20000000 < 0) {
                  *puVar7 = *puVar6;
                  puVar11 = puVar6;
                  puVar4 = puVar7;
                }
                for (iVar12 = iVar12 >> 3; iVar12 != 0; iVar12 = iVar12 + -1) {
                  puVar4[-1] = puVar11[-1];
                  puVar11 = puVar11 + -2;
                  puVar4 = puVar4 + -2;
                  *puVar4 = *puVar11;
                }
              }
            }
            else {
              while (param_3 != puVar11) {
                puVar4 = puVar4 + -1;
                *puVar4 = puVar11[-1];
                puVar11 = puVar11 + -1;
              }
            }
            *param_3 = uVar9;
            puVar6 = puVar7;
          }
          else {
            puVar6 = puVar7;
            while ((uVar9 & 0xffff) < (uint)(ushort)puVar6[-1]) {
              *puVar6 = puVar6[-1];
              puVar6 = puVar6 + -1;
            }
            *puVar6 = uVar9;
            puVar6 = puVar7;
          }
        }
        for (param_3 = param_3 + 0x10; param_3 != puVar3; param_3 = param_3 + 1) {
          uVar9 = *param_3;
          puVar6 = param_3;
          while ((uVar9 & 0xffff) < (uint)(ushort)puVar6[-1]) {
            *puVar6 = puVar6[-1];
            puVar6 = puVar6 + -1;
          }
          *puVar6 = uVar9;
        }
      }
    }
  }
  return;
}


