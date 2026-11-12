#include "0054b1bc_0054bb74.h"



undefined4 * fn_0054bb3c(undefined4 *param_1)

{
  *param_1 = &DAT_00857a68;
  if (param_1[7] != 0) {
    fn_0019fb94();
  }
  if (param_1[6] != 0) {
    fn_0019fb94();
  }
  return param_1;
}



void fn_0054b920(int param_1,int *param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = 0;
  iVar7 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(iVar7 + 0x10);
  if (*(short *)(iVar7 + 0xe) != 0) {
    do {
      iVar6 = *(int *)(iVar2 + iVar7 + uVar5 * 4) + iVar7;
      if (*(char *)(iVar6 + 0x1d) == '\0') {
        iVar3 = (**(code **)(*param_2 + 0x2c))(param_2,iVar6,param_3);
        if (iVar3 != 0) {
          uVar1 = *(ushort *)(param_1 + 0x20);
          if ((uint)*(ushort *)(param_1 + 0x22) <= (uint)uVar1) {
            return;
          }
          *(ushort *)(param_1 + 0x20) = uVar1 + 1;
          piVar4 = (int *)(*(int *)(param_1 + 0x1c) + (uint)uVar1 * 8);
          *piVar4 = iVar3;
          piVar4[1] = iVar6;
        }
      }
      else {
        iVar3 = (**(code **)(*param_2 + 0x30))(param_2,iVar6,param_3);
        if ((iVar3 != 0) && (iVar6 = fn_0054af8c(param_1,iVar3,iVar6), iVar6 == 0)) {
          return;
        }
      }
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < *(ushort *)(iVar7 + 0xe));
  }
  return;
}



void fn_0054b8ac(int *param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((char)param_1[5] != '\0') {
    uVar1 = *(ushort *)(param_1 + 8);
    iVar3 = 0;
    if (uVar1 != 0) {
      do {
        puVar2 = (undefined4 *)(param_1[7] + iVar3 * 8);
        if (*(char *)(puVar2[1] + 0x1d) == '\0') {
          (**(code **)(*param_1 + 0x48))(param_1,*puVar2);
        }
        else {
          (**(code **)(*param_1 + 0x4c))(param_1,*puVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)uVar1);
    }
  }
  return;
}



void fn_0054b1bc(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  uint *puVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  byte bVar17;
  float *pfVar18;
  int iVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  int local_84;
  
  local_84 = 0;
  if (*(char *)(param_3 + 0x1c) != '\0') {
    uVar30 = 0xba83126f;
    uVar29 = 0x3a83126f3f800000;
    uVar25 = 0x3f00000000000000;
    fVar28 = 255.0;
    do {
      piVar20 = (int *)(*(int *)(param_3 + 0x20 + local_84 * 4) + param_3);
      piVar7 = piVar20 + 2;
      iVar16 = *piVar20;
      if (iVar16 == 0x50544c46) {
        iVar16 = 0;
        iVar8 = *(int *)(param_1 + 0x18);
        fVar26 = *(float *)(param_1 + 0x10);
        if ((char)piVar20[1] != '\0') {
          do {
            pbVar14 = (byte *)(piVar7[iVar16] + (int)piVar20);
            pfVar18 = (float *)(pbVar14 + *(int *)(pbVar14 + 8));
            uVar9 = (uint)*(ushort *)(pbVar14 + 4);
            if ((uVar9 == 1) || (fVar26 <= *pfVar18)) {
              uVar9 = (uint)*(ushort *)(pfVar18 + 1);
            }
            else if (pfVar18[uVar9 * 2 + -2] <= fVar26) {
              uVar9 = (uint)*(ushort *)(pfVar18 + uVar9 * 2 + -1);
            }
            else {
              iVar19 = uVar9 - 1;
              iVar15 = 0;
              while (iVar10 = iVar19, iVar15 != iVar10 + -1 && iVar15 != iVar10) {
                iVar1 = (iVar15 + iVar10) / 2;
                iVar19 = iVar1;
                if (pfVar18[iVar1 * 2] <= fVar26) {
                  iVar19 = iVar10;
                  iVar15 = iVar1;
                }
              }
              pfVar11 = pfVar18 + iVar10 * 2;
              fVar23 = fVar26 - *pfVar11;
              bVar2 = fVar23 <= (float)uVar30;
              if (bVar2 || (bVar2 || (float)((ulonglong)uVar29 >> 0x20) <= fVar23)) {
                pfVar11 = pfVar18 + iVar15 * 2;
              }
              uVar9 = (uint)*(ushort *)(pfVar11 + 1);
            }
            if (*(int *)(*(int *)(iVar8 + uVar9 * 4) + 0x10) != 0) {
              fn_0019501c(*(int *)(param_2 + 0x78) + (uint)*pbVar14 * 0x20);
              *(byte *)(param_2 + 0x7c) = *(byte *)(param_2 + 0x7c) & 0xf7;
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < (int)(uint)*(byte *)(piVar20 + 1));
        }
      }
      else if (iVar16 < 0x50544c46) {
        if (iVar16 == 0x43414c46) {
          iVar16 = 0;
          fVar26 = *(float *)(param_1 + 0x10);
          if ((char)piVar20[1] != '\0') {
            do {
              iVar8 = piVar7[iVar16];
              fVar23 = fVar26;
              fn_0054bb74((int)piVar20 + *(int *)((int)piVar20 + iVar8 + 8) + iVar8,
                           *(undefined2 *)((int)piVar20 + iVar8 + 4));
              if (fVar26 < (float)uVar25) {
                fVar26 = (float)uVar25;
              }
              else if (0x3f800000 < (int)fVar26) {
                fVar26 = (float)uVar29;
              }
              uVar4 = *(ushort *)(param_2 + 0x74);
              iVar16 = iVar16 + 1;
              uVar5 = *(ushort *)(param_2 + 0x74);
              puVar12 = (uint *)((uVar5 >> 1 & 0x18) +
                                 (uVar5 & 3) * 0x20 + ((uVar5 & 0xf) >> 2) * 0x14 +
                                *(int *)(param_2 + 0x78));
              *puVar12 = (uint)*(byte *)(*(int *)(param_2 + 0x78) +
                                        (uVar4 >> 1 & 0x18) +
                                        (uVar4 & 3) * 0x20 + ((uVar4 & 0xf) >> 2) * 0x14) |
                         (uint)piVar7 & 0xffffff00;
              puVar12[1] = (uint)fVar26;
              fVar26 = fVar23;
            } while (iVar16 < (int)(uint)*(byte *)(piVar20 + 1));
          }
        }
        else if (iVar16 == 0x434d4c46) {
          iVar16 = 0;
          fVar26 = *(float *)(param_1 + 0x10);
          if ((char)piVar20[1] != '\0') {
            do {
              iVar8 = piVar7[iVar16];
              fVar23 = fVar26;
              fn_0054bb74((int)piVar20 + *(int *)((int)piVar20 + iVar8 + 8) + iVar8,
                           *(undefined2 *)((int)piVar20 + iVar8 + 4));
              fVar26 = fVar26 + (float)((ulonglong)uVar25 >> 0x20);
              if (fVar26 < (float)uVar25) {
                fVar26 = (float)uVar25;
              }
              else if (0x437f0000 < (int)fVar26) {
                fVar26 = fVar28;
              }
              bVar3 = *(byte *)((int)piVar20 + iVar8 + 1);
              uVar22 = VectorFloatToUnsigned(fVar26,3);
              uVar9 = uVar22 & 0xff;
              if (bVar3 < 0x1c) {
                uVar13 = (uint)(bVar3 >> 2);
                if (uVar13 < 2) {
                  bVar17 = bVar3 & 3;
                  uVar6 = (undefined1)uVar22;
                  if ((bVar3 & 3) == 0) {
                    *(undefined1 *)(param_2 + uVar13 * 4 + 0x6c) = uVar6;
                  }
                  else if (bVar17 == 1) {
                    *(undefined1 *)(param_2 + uVar13 * 4 + 0x6d) = uVar6;
                  }
                  else if (bVar17 == 2) {
                    *(undefined1 *)(param_2 + uVar13 * 4 + 0x6e) = uVar6;
                  }
                  else if (bVar17 == 3) {
                    *(undefined1 *)(param_2 + uVar13 * 4 + 0x6f) = uVar6;
                  }
                }
                else if (uVar13 < 7) {
                  uVar4 = *(ushort *)(param_2 + 0x74);
                  uVar21 = (uint)uVar4;
                  if ((uVar4 & 0x1000) != 0) {
                    if ((uVar4 & 0x1000) == 0) {
                      iVar8 = (uVar21 & 3) * 0x20 + ((uVar21 & 0xf) >> 2) * 0x14 +
                              (uVar4 >> 1 & 0x18) + (uVar4 >> 6 & 8) + (uVar4 >> 8 & 0xc) +
                              (uVar4 >> 4 & 0x1c);
                    }
                    else {
                      iVar8 = (uVar4 >> 8 & 0xc) +
                              (uVar4 >> 1 & 0x18) +
                              (uVar21 & 3) * 0x20 + ((uVar21 & 0xf) >> 2) * 0x14 + (uVar4 >> 6 & 8)
                              + ((uVar21 & 0x1ff) >> 6) * 0xc;
                    }
                    uVar13 = uVar13 - 2;
                    bVar17 = bVar3 & 3;
                    iVar8 = iVar8 + ((uVar21 & 0x7fff) >> 0xd) * 0x14 + (uint)(uVar4 >> 0xf) * 8 +
                            *(int *)(param_2 + 0x78);
                    uVar21 = *(uint *)(iVar8 + (uVar13 % 5) * 4 + 4);
                    if ((bVar3 & 3) == 0) {
                      uVar21 = uVar21 & 0xffffff00;
LAB_0054b464:
                      uVar21 = uVar21 | uVar9;
                    }
                    else {
                      if (bVar17 == 1) {
                        uVar9 = uVar9 << 8;
                        uVar21 = uVar21 & 0xffff00ff;
                        goto LAB_0054b464;
                      }
                      if (bVar17 == 2) {
                        uVar9 = uVar9 << 0x10;
                        uVar21 = uVar21 & 0xff00ffff;
                        goto LAB_0054b464;
                      }
                      if (bVar17 == 3) {
                        uVar21 = uVar21 & 0xffffff;
                        uVar9 = uVar22 << 0x18;
                        goto LAB_0054b464;
                      }
                    }
                    if (uVar13 < 5) {
                      *(uint *)(iVar8 + uVar13 * 4 + 4) = uVar21;
                    }
                  }
                }
              }
              iVar16 = iVar16 + 1;
              fVar26 = fVar23;
            } while (iVar16 < (int)(uint)*(byte *)(piVar20 + 1));
          }
        }
      }
      else if (iVar16 == 0x53464c46) {
        iVar16 = 0;
        fVar26 = *(float *)(param_1 + 0x10);
        if ((char)piVar20[1] != '\0') {
          do {
            iVar8 = piVar7[iVar16];
            fVar23 = fVar26;
            fn_0054bb74((int)piVar20 + *(int *)((int)piVar20 + iVar8 + 8) + iVar8,
                         *(undefined2 *)((int)piVar20 + iVar8 + 4));
            fVar26 = fVar26 + (float)((ulonglong)uVar25 >> 0x20);
            if (fVar26 < (float)uVar25) {
              fVar26 = (float)uVar25;
            }
            else if (0x437f0000 < (int)fVar26) {
              fVar26 = fVar28;
            }
            uVar4 = *(ushort *)(param_2 + 0x74);
            uVar9 = (uint)uVar4;
            uVar24 = VectorFloatToUnsigned(fVar26,3);
            if ((uVar4 & 0x1000) == 0) {
              iVar19 = (uVar9 & 3) * 0x20 + ((uVar9 & 0xf) >> 2) * 0x14 + (uVar4 >> 1 & 0x18) +
                       (uVar4 >> 6 & 8) + (uVar4 >> 8 & 0xc) + (uVar4 >> 4 & 0x1c);
            }
            else {
              iVar19 = (uVar9 & 3) * 0x20 + ((uVar9 & 0xf) >> 2) * 0x14 + (uVar4 >> 1 & 0x18) +
                       (uVar4 >> 6 & 8) + (uVar4 >> 8 & 0xc) + ((uVar9 & 0x1ff) >> 6) * 0xc;
            }
            iVar16 = iVar16 + 1;
            *(char *)(*(int *)(param_2 + 0x78) + iVar19 + ((uVar9 & 0x7fff) >> 0xd) * 0x14 +
                     (uint)*(byte *)((int)piVar20 + iVar8 + 1)) = (char)uVar24;
            fVar26 = fVar23;
          } while (iVar16 < (int)(uint)*(byte *)(piVar20 + 1));
        }
      }
      else if (iVar16 == 0x53544c46) {
        iVar16 = 0;
        uVar24 = *(undefined4 *)(param_1 + 0x10);
        if ((char)piVar20[1] != '\0') {
          do {
            pbVar14 = (byte *)(piVar7[iVar16] + (int)piVar20);
            bVar3 = *pbVar14;
            bVar17 = pbVar14[1];
            uVar27 = uVar24;
            fn_0054bb74(pbVar14 + *(int *)(pbVar14 + 8),*(undefined2 *)(pbVar14 + 4));
            iVar16 = iVar16 + 1;
            *(undefined4 *)
             (*(int *)(param_2 + 0x78) + (*(ushort *)(param_2 + 0x74) & 3) * 0x20 +
              (uint)bVar3 * 0x14 + (uint)bVar17 * 4) = uVar24;
            *(byte *)(param_2 + 0x7c) = *(byte *)(param_2 + 0x7c) & 0xf7;
            uVar24 = uVar27;
          } while (iVar16 < (int)(uint)*(byte *)(piVar20 + 1));
        }
      }
      local_84 = local_84 + 1;
    } while (local_84 < (int)(uint)*(byte *)(param_3 + 0x1c));
  }
  return;
}



void fn_0054bb74(float *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  float in_s0;
  
  bVar6 = param_2 != 0;
  bVar5 = param_2 == 1;
  if (!bVar5) {
    bVar5 = in_s0 == *param_1;
    bVar6 = *param_1 <= in_s0;
  }
  if (!bVar6 || bVar5) {
    return;
  }
  if (param_1[param_2 * 3 + -3] <= in_s0) {
    return;
  }
  iVar2 = param_2 + -1;
  iVar4 = 0;
  while (iVar3 = iVar2, iVar4 != iVar3 + -1 && iVar4 != iVar3) {
    iVar1 = (iVar4 + iVar3) / 2;
    iVar2 = iVar1;
    if (param_1[iVar1 * 3] < in_s0) {
      iVar2 = iVar3;
      iVar4 = iVar1;
    }
  }
  if (((uint)(in_s0 - param_1[iVar3 * 3]) < 0xba83126f) &&
     ((int)(in_s0 - param_1[iVar3 * 3]) < 0x3a83126f)) {
    return;
  }
  return;
}


