#include "0054ab70_0054af8c.h"



undefined4 fn_0054af8c(int param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar2 = *(ushort *)(param_1 + 0x20);
  if ((uint)*(ushort *)(param_1 + 0x22) <= (uint)uVar2) {
    return 0;
  }
  bVar3 = true;
  if (param_3 != 0) {
    iVar8 = 0;
    if (*(byte *)(param_3 + 0x1c) != 0) {
      do {
        iVar6 = 0;
        piVar7 = (int *)(*(int *)(param_3 + 0x20 + iVar8 * 4) + param_3);
        if (*(byte *)(piVar7 + 1) != 0) {
          iVar9 = *piVar7;
          do {
            pbVar4 = (byte *)(piVar7[iVar6 + 2] + (int)piVar7);
            if (iVar9 == 0x50544c46) {
              if (*(int *)(param_1 + 0x18) == 0) {
                bVar3 = false;
              }
              if ((*(ushort *)(param_2 + 0x76) & 3) <= (ushort)*pbVar4) {
                bVar3 = false;
              }
              if (pbVar4[2] != 1) {
                bVar3 = false;
              }
              if (pbVar4[1] != 0) {
                bVar3 = false;
              }
              uVar10 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 0xc);
              iVar5 = 0;
              if (uVar10 != 0) {
                do {
                  if (*(int *)(*(int *)(*(int *)(param_1 + 0x18) + iVar5 * 4) + 0x10) == 0)
                  goto LAB_0054b160;
                  iVar5 = iVar5 + 1;
                } while (iVar5 < (int)uVar10);
              }
            }
            else {
              if (iVar9 < 0x50544c46) {
                if (iVar9 == 0x43414c46) {
                  bVar1 = pbVar4[2];
                  if ((*(ushort *)(param_2 + 0x74) & 0x200) == 0) {
                    bVar3 = false;
                  }
                  if (pbVar4[1] != 0) {
                    bVar3 = false;
                  }
                }
                else {
                  if (iVar9 != 0x434d4c46) goto LAB_0054b164;
                  bVar1 = pbVar4[2];
                  if (0x1b < pbVar4[1]) {
                    bVar3 = false;
                  }
                }
              }
              else if (iVar9 == 0x53464c46) {
                bVar1 = pbVar4[2];
                if ((*(ushort *)(param_2 + 0x74) & 0x8000) == 0) {
                  bVar3 = false;
                }
                if (6 < pbVar4[1]) {
                  bVar3 = false;
                }
              }
              else {
                if (iVar9 != 0x53544c46) goto LAB_0054b164;
                if (2 < *pbVar4) {
                  bVar3 = false;
                }
                bVar1 = pbVar4[2];
                if ((*(ushort *)(param_2 + 0x74) & 0xf) >> 2 <= (uint)*pbVar4) {
                  bVar3 = false;
                }
                if (4 < pbVar4[1]) {
                  bVar3 = false;
                }
              }
              if (bVar1 != 2) {
LAB_0054b160:
                bVar3 = false;
              }
            }
LAB_0054b164:
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)(uint)*(byte *)(piVar7 + 1));
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)(uint)*(byte *)(param_3 + 0x1c));
      if (!bVar3) {
        return 1;
      }
    }
  }
  piVar7 = (int *)(*(int *)(param_1 + 0x1c) + (uint)uVar2 * 8);
  *(ushort *)(param_1 + 0x20) = uVar2 + 1;
  *piVar7 = param_2;
  piVar7[1] = param_3;
  return 1;
}



void fn_0054ac70(int param_1,int *param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  
  iVar12 = 0;
  if (*(char *)(param_3 + 0x1c) != '\0') {
    fVar19 = 0.001;
    fVar20 = -0.001;
    uVar16 = 0x3f00000000000000;
    fVar17 = 255.0;
    do {
      piVar11 = (int *)(*(int *)(param_3 + 0x20 + iVar12 * 4) + param_3);
      iVar8 = *piVar11;
      if (iVar8 == 0x41504c46) {
        iVar7 = 0;
        iVar8 = *(int *)(param_1 + 0x10);
        if ((char)piVar11[1] != '\0') {
          do {
            iVar4 = piVar11[iVar7 + 2];
            bVar2 = *(byte *)((int)piVar11 + iVar4 + 1);
            iVar10 = iVar8;
            fn_0054bb74((int)piVar11 + *(int *)((int)piVar11 + iVar4 + 8) + iVar4,
                         *(undefined2 *)((int)piVar11 + iVar4 + 4));
            iVar7 = iVar7 + 1;
            param_2[bVar2 + 7] = iVar8;
            *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0xef | 0x10;
            iVar8 = iVar10;
          } while (iVar7 < (int)(uint)*(byte *)(piVar11 + 1));
        }
      }
      else if (iVar8 == 0x43564c46) {
        iVar8 = 0;
        fVar13 = *(float *)(param_1 + 0x10);
        if ((char)piVar11[1] != '\0') {
          do {
            iVar7 = piVar11[iVar8 + 2];
            fVar15 = fVar13;
            fn_0054bb74((int)piVar11 + *(int *)((int)piVar11 + iVar7 + 8) + iVar7,
                         *(undefined2 *)((int)piVar11 + iVar7 + 4));
            fVar13 = fVar13 + (float)((ulonglong)uVar16 >> 0x20);
            if (fVar13 < (float)uVar16) {
              fVar13 = (float)uVar16;
            }
            else if (0x437f0000 < (int)fVar13) {
              fVar13 = fVar17;
            }
            uVar5 = VectorFloatToUnsigned(fVar13,3);
            (**(code **)(*param_2 + 0x18))
                      (param_2,*(undefined1 *)((int)piVar11 + iVar7 + 1),uVar5 & 0xff);
            iVar8 = iVar8 + 1;
            fVar13 = fVar15;
          } while (iVar8 < (int)(uint)*(byte *)(piVar11 + 1));
        }
      }
      else if (iVar8 == 0x49564c46) {
        iVar8 = 0;
        fVar13 = *(float *)(param_1 + 0x10);
        if ((char)piVar11[1] != '\0') {
          do {
            iVar7 = piVar11[iVar8 + 2];
            pfVar9 = (float *)((int)piVar11 + *(int *)((int)piVar11 + iVar7 + 8) + iVar7);
            uVar5 = (uint)*(ushort *)((int)piVar11 + iVar7 + 4);
            if ((uVar5 == 1) || (fVar13 <= *pfVar9)) {
              sVar3 = *(short *)(pfVar9 + 1);
            }
            else if (pfVar9[uVar5 * 2 + -2] <= fVar13) {
              sVar3 = *(short *)(pfVar9 + uVar5 * 2 + -1);
            }
            else {
              iVar7 = uVar5 - 1;
              iVar10 = 0;
              while (iVar4 = iVar7, iVar10 != iVar4 + -1 && iVar10 != iVar4) {
                iVar1 = (iVar10 + iVar4) / 2;
                iVar7 = iVar1;
                if (pfVar9[iVar1 * 2] <= fVar13) {
                  iVar7 = iVar4;
                  iVar10 = iVar1;
                }
              }
              pfVar6 = pfVar9 + iVar4 * 2;
              fVar15 = fVar13 - *pfVar6;
              if (fVar15 <= fVar20 || (fVar15 <= fVar20 || fVar19 <= fVar15)) {
                pfVar6 = pfVar9 + iVar10 * 2;
              }
              sVar3 = *(short *)(pfVar6 + 1);
            }
            iVar8 = iVar8 + 1;
            *(byte *)(param_2 + 0x11) = sVar3 != 0 | *(byte *)(param_2 + 0x11) & 0xfe;
          } while (iVar8 < (int)(uint)*(byte *)(piVar11 + 1));
        }
      }
      else if (iVar8 == 0x54434c46) {
        iVar8 = 0;
        uVar14 = *(undefined4 *)(param_1 + 0x10);
        if ((char)piVar11[1] != '\0') {
          do {
            iVar7 = piVar11[iVar8 + 2];
            uVar18 = uVar14;
            fn_0054bb74((int)piVar11 + *(int *)((int)piVar11 + iVar7 + 8) + iVar7,
                         *(undefined2 *)((int)piVar11 + iVar7 + 4));
            iVar8 = iVar8 + 1;
            *(undefined4 *)param_2[0x3f] = uVar14;
            *(byte *)(param_2 + 0x34) = *(byte *)(param_2 + 0x34) | 4;
            uVar14 = uVar18;
          } while (iVar8 < (int)(uint)*(byte *)(piVar11 + 1));
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)(uint)*(byte *)(param_3 + 0x1c));
  }
  return;
}



void fn_0054ab70(int param_1,int param_2,int *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  *(int *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar5 = (uint)*(ushort *)(param_2 + 0xc);
  if (uVar5 != 0) {
    iVar1 = fn_00194ee4(uVar5 << 2,4);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      uVar3 = 0;
      if (uVar5 != 0) {
        do {
          puVar4 = (undefined4 *)(iVar1 + uVar3 * 4);
          uVar3 = uVar3 + 1;
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = 0;
          }
        } while (uVar3 < uVar5);
      }
    }
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 != 0) {
      iVar1 = 0;
      if (*(short *)(param_2 + 0xc) != 0) {
        do {
          uVar2 = (**(code **)(*param_3 + 0x14))
                            (param_3,*(int *)(param_2 + 0x14 + iVar1 * 4) + param_2 + 0x14);
          *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar1 * 4) = uVar2;
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(uint)*(ushort *)(param_2 + 0xc));
      }
    }
  }
  iVar1 = fn_00194ee4(param_4 << 3,4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar5 = 0;
    if (param_4 != 0) {
      do {
        puVar4 = (undefined4 *)(iVar1 + uVar5 * 8);
        uVar5 = uVar5 + 1;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
        }
      } while (uVar5 < param_4);
    }
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 != 0) {
    *(short *)(param_1 + 0x22) = (short)param_4;
  }
  return;
}


