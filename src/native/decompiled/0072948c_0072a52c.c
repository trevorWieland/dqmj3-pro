#include "0072948c_0072a52c.h"



int fn_0072a52c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_002fecec(param_1 * param_2);
  if (iVar1 != 0) {
    fn_00158f6c(iVar1,param_1 * param_2);
  }
  return iVar1;
}



void fn_0072948c(int param_1,int *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  byte bVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  short sVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  short *psVar20;
  undefined2 *puVar21;
  int iVar22;
  int iVar23;
  ushort *puVar24;
  int iVar25;
  uint uVar26;
  int *piVar27;
  short *psVar28;
  short sStack_70;
  short local_6e [9];
  int local_5c;
  int local_58;
  undefined4 local_54;
  int local_4c;
  int local_44;
  short *local_40;
  int *local_3c;
  int iStack_2c;
  int *local_28;
  
  local_28 = param_2;
  iStack_2c = param_1;
  piVar14 = (int *)(param_1 + 0x1450);
  piVar27 = (int *)(param_1 + 0x1454);
  local_40 = (short *)&DAT_ffffffff;
  iVar12 = *param_2;
  local_5c = ((int *)param_2[2])[3];
  psVar8 = (short *)0x0;
  iVar16 = *(int *)param_2[2];
  *piVar14 = 0;
  *piVar27 = 0x23d;
  if (local_5c < 1) goto LAB_00729554;
  do {
    psVar28 = (short *)(iVar12 + (int)psVar8 * 4);
    if (*psVar28 == 0) {
      psVar28[1] = 0;
    }
    else {
      iVar22 = *piVar14;
      local_40 = psVar8;
      *piVar14 = iVar22 + 1;
      *(short **)(param_1 + (iVar22 + 1) * 4 + 0xb5c) = psVar8;
      *(undefined1 *)((int)psVar8 + param_1 + 0x1458) = 0;
    }
    psVar8 = (short *)((int)psVar8 + 1);
  } while ((int)psVar8 < local_5c);
  iVar22 = *piVar14;
  psVar8 = local_40;
  while (iVar22 < 2) {
    local_40 = psVar8;
    if ((int)psVar8 < 2) {
LAB_00729554:
      psVar8 = (short *)((int)local_40 + 1);
      local_40 = psVar8;
    }
    else {
      psVar8 = (short *)0x0;
    }
    iVar22 = *piVar14;
    *piVar14 = iVar22 + 1;
    *(short **)(param_1 + (iVar22 + 1) * 4 + 0xb5c) = psVar8;
    *(undefined2 *)(iVar12 + (int)psVar8 * 4) = 1;
    *(undefined1 *)((int)psVar8 + param_1 + 0x1458) = 0;
    *(int *)(param_1 + 0x16a8) = *(int *)(param_1 + 0x16a8) + -1;
    if (iVar16 != 0) {
      *(int *)(param_1 + 0x16ac) =
           *(int *)(param_1 + 0x16ac) - (uint)*(ushort *)(iVar16 + (int)psVar8 * 4 + 2);
    }
    psVar8 = local_40;
    iVar22 = *piVar14;
  }
  param_2[1] = (int)psVar8;
  for (iVar16 = *piVar14 / 2; 0 < iVar16; iVar16 = iVar16 + -1) {
    iVar22 = iVar16 * 2;
    iVar17 = *(int *)(param_1 + iVar16 * 4 + 0xb5c);
    iVar10 = iVar16;
    if (iVar22 <= *piVar14) {
      iVar25 = param_1 + 0x1458;
      do {
        iVar9 = iVar22;
        if (iVar22 < *piVar14) {
          iVar23 = param_1 + iVar22 * 4;
          iVar19 = *(int *)(iVar23 + 0xb60);
          iVar23 = *(int *)(iVar23 + 0xb5c);
          uVar2 = *(ushort *)(iVar12 + iVar19 * 4);
          uVar3 = *(ushort *)(iVar12 + iVar23 * 4);
          if ((uVar2 < uVar3) ||
             ((uVar2 == uVar3 && (*(byte *)(iVar19 + iVar25) <= *(byte *)(iVar23 + iVar25))))) {
            iVar9 = iVar22 + 1;
          }
        }
        uVar2 = *(ushort *)(iVar12 + iVar17 * 4);
        iVar22 = *(int *)(param_1 + iVar9 * 4 + 0xb5c);
        uVar3 = *(ushort *)(iVar12 + iVar22 * 4);
        if ((uVar2 < uVar3) ||
           ((uVar2 == uVar3 && (*(byte *)(iVar17 + param_1 + 0x1458) <= *(byte *)(iVar22 + iVar25)))
           )) break;
        *(int *)(param_1 + iVar10 * 4 + 0xb5c) = iVar22;
        iVar22 = iVar9 * 2;
        iVar10 = iVar9;
      } while (iVar22 <= *piVar14);
    }
    *(int *)(param_1 + iVar10 * 4 + 0xb5c) = iVar17;
  }
  local_3c = (undefined4 *)(param_1 + 0xb60);
  do {
    iVar10 = *(int *)(param_1 + 0xb60);
    iVar22 = *piVar14;
    iVar17 = iVar22 + -1;
    *piVar14 = iVar17;
    iVar16 = 2;
    *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_1 + iVar22 * 4 + 0xb5c);
    iVar25 = *(int *)(param_1 + 0xb60);
    iVar22 = 1;
    if (1 < iVar17) {
      iVar17 = param_1 + 0x1458;
      do {
        iVar9 = iVar16;
        if (iVar16 < *piVar14) {
          iVar23 = param_1 + iVar16 * 4;
          iVar19 = *(int *)(iVar23 + 0xb60);
          iVar23 = *(int *)(iVar23 + 0xb5c);
          uVar2 = *(ushort *)(iVar12 + iVar19 * 4);
          uVar3 = *(ushort *)(iVar12 + iVar23 * 4);
          if ((uVar2 < uVar3) ||
             ((uVar2 == uVar3 && (*(byte *)(iVar19 + iVar17) <= *(byte *)(iVar23 + iVar17))))) {
            iVar9 = iVar16 + 1;
          }
        }
        uVar2 = *(ushort *)(iVar12 + iVar25 * 4);
        iVar16 = *(int *)(param_1 + iVar9 * 4 + 0xb5c);
        uVar3 = *(ushort *)(iVar12 + iVar16 * 4);
        if ((uVar2 < uVar3) ||
           ((uVar2 == uVar3 && (*(byte *)(iVar25 + param_1 + 0x1458) <= *(byte *)(iVar16 + iVar17)))
           )) break;
        *(int *)(param_1 + iVar22 * 4 + 0xb5c) = iVar16;
        iVar16 = iVar9 * 2;
        iVar22 = iVar9;
      } while (iVar16 <= *piVar14);
    }
    *(int *)(param_1 + iVar22 * 4 + 0xb5c) = iVar25;
    iVar16 = *piVar27;
    iVar22 = *(int *)(param_1 + 0xb60);
    *piVar27 = iVar16 + -1;
    *(int *)(param_1 + (iVar16 + -1) * 4 + 0xb5c) = iVar10;
    iVar16 = *piVar27;
    psVar28 = (short *)(iVar12 + iVar10 * 4);
    *piVar27 = iVar16 + -1;
    psVar20 = (short *)(iVar12 + iVar22 * 4);
    *(int *)(param_1 + (iVar16 + -1) * 4 + 0xb5c) = iVar22;
    *(short *)(iVar12 + local_5c * 4) = *psVar20 + *psVar28;
    bVar7 = *(byte *)(param_1 + iVar10 + 0x1458);
    bVar1 = *(byte *)(param_1 + iVar22 + 0x1458);
    if (bVar7 < bVar1) {
      bVar7 = bVar1;
    }
    *(byte *)(param_1 + local_5c + 0x1458) = bVar7 + 1;
    psVar20[1] = (short)local_5c;
    psVar28[1] = (short)local_5c;
    *(int *)(param_1 + 0xb60) = local_5c;
    local_5c = local_5c + 1;
    iVar16 = 2;
    local_58 = *(int *)(param_1 + 0xb60);
    iVar22 = 1;
    if (1 < *piVar14) {
      iVar10 = param_1 + 0x1458;
      do {
        iVar17 = iVar16;
        if (iVar16 < *piVar14) {
          iVar9 = param_1 + iVar16 * 4;
          iVar25 = *(int *)(iVar9 + 0xb60);
          iVar9 = *(int *)(iVar9 + 0xb5c);
          uVar2 = *(ushort *)(iVar12 + iVar25 * 4);
          uVar3 = *(ushort *)(iVar12 + iVar9 * 4);
          if ((uVar2 < uVar3) ||
             ((uVar2 == uVar3 && (*(byte *)(iVar25 + iVar10) <= *(byte *)(iVar9 + iVar10))))) {
            iVar17 = iVar16 + 1;
          }
        }
        uVar2 = *(ushort *)(iVar12 + local_58 * 4);
        iVar16 = *(int *)(param_1 + iVar17 * 4 + 0xb5c);
        uVar3 = *(ushort *)(iVar12 + iVar16 * 4);
        if ((uVar2 < uVar3) ||
           ((uVar2 == uVar3 &&
            (*(byte *)(local_58 + param_1 + 0x1458) <= *(byte *)(iVar16 + iVar10))))) break;
        *(int *)(param_1 + iVar22 * 4 + 0xb5c) = iVar16;
        iVar16 = iVar17 * 2;
        iVar22 = iVar17;
      } while (iVar16 <= *piVar14);
    }
    *(int *)(param_1 + iVar22 * 4 + 0xb5c) = local_58;
    if (*piVar14 < 2) {
      iVar16 = *piVar27;
      *piVar27 = iVar16 + -1;
      *(undefined4 *)(param_1 + (iVar16 + -1) * 4 + 0xb5c) = *(undefined4 *)(param_1 + 0xb60);
      iVar17 = 0;
      piVar14 = (int *)param_2[2];
      iVar22 = *param_2;
      iVar10 = param_2[1];
      local_4c = *piVar14;
      local_44 = piVar14[1];
      local_54 = piVar14[2];
      uVar15 = piVar14[4];
      *(undefined4 *)(param_1 + 0xb3c) = 0;
      *(undefined4 *)(param_1 + 0xb40) = 0;
      *(undefined4 *)(param_1 + 0xb44) = 0;
      *(undefined4 *)(param_1 + 0xb48) = 0;
      *(undefined4 *)(param_1 + 0xb4c) = 0;
      *(undefined4 *)(param_1 + 0xb50) = 0;
      *(undefined4 *)(param_1 + 0xb54) = 0;
      *(undefined4 *)(param_1 + 0xb58) = 0;
      *(undefined2 *)(iVar22 + *(int *)(param_1 + *piVar27 * 4 + 0xb5c) * 4 + 2) = 0;
      iVar16 = *piVar27 + 1;
      if (iVar16 < 0x23d) {
        local_3c = (int *)(param_1 + 0x16ac);
        piVar14 = (int *)(param_1 + 0x16a8);
        do {
          iVar25 = *(int *)(param_1 + iVar16 * 4 + 0xb5c);
          puVar24 = (ushort *)(iVar22 + iVar25 * 4);
          uVar26 = *(ushort *)(iVar22 + (uint)puVar24[1] * 4 + 2) + 1;
          if ((int)uVar15 < (int)uVar26) {
            iVar17 = iVar17 + 1;
            uVar26 = uVar15;
          }
          puVar24[1] = (ushort)uVar26;
          if (iVar25 <= iVar10) {
            iVar19 = param_1 + uVar26 * 2;
            iVar9 = 0;
            *(short *)(iVar19 + 0xb3c) = *(short *)(iVar19 + 0xb3c) + 1;
            if (local_54 <= iVar25) {
              iVar9 = *(int *)(local_44 + (iVar25 - local_54) * 4);
            }
            uVar2 = *puVar24;
            *piVar14 = (uint)uVar2 * (uVar26 + iVar9) + *piVar14;
            if (local_4c != 0) {
              *local_3c = (uint)uVar2 * (iVar9 + (uint)*(ushort *)(local_4c + iVar25 * 4 + 2)) +
                          *local_3c;
            }
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < 0x23d);
        if (iVar17 != 0) {
          iVar25 = param_1 + uVar15 * 2;
          do {
            iVar9 = uVar15 - 1;
            sVar13 = *(short *)(param_1 + (uVar15 - 1) * 2 + 0xb3c);
            while (sVar13 == 0) {
              iVar9 = iVar9 + -1;
              sVar13 = *(short *)(param_1 + iVar9 * 2 + 0xb3c);
            }
            iVar9 = param_1 + iVar9 * 2;
            iVar17 = iVar17 + -2;
            *(short *)(iVar9 + 0xb3c) = *(short *)(iVar9 + 0xb3c) + -1;
            *(short *)(iVar9 + 0xb3e) = *(short *)(iVar9 + 0xb3e) + 2;
            *(short *)(iVar25 + 0xb3c) = *(short *)(iVar25 + 0xb3c) + -1;
          } while (0 < iVar17);
          for (; uVar15 != 0; uVar15 = uVar15 - 1) {
            uVar26 = (uint)*(ushort *)(param_1 + uVar15 * 2 + 0xb3c);
            if (uVar26 != 0) {
              do {
                iVar16 = iVar16 + -1;
                iVar17 = *(int *)(param_1 + iVar16 * 4 + 0xb5c);
                if (iVar17 <= iVar10) {
                  puVar24 = (ushort *)(iVar22 + iVar17 * 4);
                  if (puVar24[1] != uVar15) {
                    *piVar14 = (uVar15 - puVar24[1]) * (uint)*puVar24 + *piVar14;
                    puVar24[1] = (ushort)uVar15;
                  }
                  uVar26 = uVar26 - 1;
                }
              } while (uVar26 != 0);
            }
          }
        }
      }
      sVar4 = *(short *)(param_1 + 0xb3c);
      psVar20 = &sStack_70;
      sVar13 = 0;
      iVar16 = 7;
      psVar28 = (short *)(param_1 + 0xb3a);
      do {
        sVar5 = psVar28[2];
        sVar13 = (sVar4 + sVar13) * 2;
        psVar20[1] = sVar13;
        sVar4 = psVar28[3];
        sVar13 = (sVar13 + sVar5) * 2;
        iVar16 = iVar16 + -1;
        psVar20 = psVar20 + 2;
        *psVar20 = sVar13;
        psVar28 = psVar28 + 2;
      } while (iVar16 != 0);
      puVar18 = (undefined1 *)((int)psVar8 + 1);
      iVar16 = 0;
      if (0 < (int)puVar18) {
        psVar8 = &sStack_70;
      }
      local_54 = CONCAT22((*(short *)(param_1 + 0xb58) + sVar13) * 2,(undefined2)local_54);
      if (0 < (int)puVar18) {
        do {
          puVar21 = (undefined2 *)(iVar12 + iVar16 * 4);
          uVar15 = (uint)(ushort)puVar21[1];
          if (uVar15 != 0) {
            uVar11 = uVar15 - 1;
            uVar2 = psVar8[uVar15];
            uVar6 = (uint)(uVar2 >> 1);
            uVar26 = (uVar2 & 1) << 1;
            psVar8[uVar15] = uVar2 + 1;
            if (0 < (int)uVar11) {
              if ((uVar11 & 1) != 0) {
                uVar15 = uVar6 & 1;
                uVar6 = (uint)(uVar2 >> 2);
                uVar26 = (uVar26 | uVar15) << 1;
              }
              for (iVar22 = (int)uVar11 >> 1; iVar22 != 0; iVar22 = iVar22 + -1) {
                uVar11 = uVar6 & 1;
                uVar15 = uVar6 >> 1;
                uVar6 = uVar6 >> 2;
                uVar26 = (uVar15 & 1 | (uVar26 | uVar11) << 1) << 1;
              }
            }
            *puVar21 = (short)(uVar26 >> 1);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < (int)puVar18);
      }
      return;
    }
  } while( true );
}


