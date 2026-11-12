#include "0072bff8_0072bff8.h"



undefined4 fn_0072bff8(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar15;
  char *pcVar14;
  int iVar16;
  int iVar17;
  uint uVar18;
  char cVar19;
  char cVar20;
  uint unaff_r11;
  bool bVar21;
  bool bVar22;
  uint local_4c;
  
  piVar4 = param_1 + 0x5a8;
LAB_0072c034:
  uVar5 = param_1[0x1d];
  if (uVar5 < 0x106) {
    fn_0072dc50(param_1);
    uVar5 = param_1[0x1d];
    if ((uVar5 < 0x106) && (param_2 == 0)) {
      return 0;
    }
    if (uVar5 == 0) {
      iVar9 = param_1[0x17];
      if (iVar9 < 0) {
        iVar16 = 0;
      }
      else {
        iVar16 = param_1[0xe] + iVar9;
      }
      fn_00735950(param_1,iVar16,param_1[0x1b] - iVar9);
      param_1[0x17] = param_1[0x1b];
      fn_0072e014(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        if (param_2 == 4) {
          return 2;
        }
        return 0;
      }
      if (param_2 == 4) {
        uVar10 = 3;
      }
      else {
        uVar10 = 1;
      }
      return uVar10;
    }
  }
  if (2 < uVar5) {
    uVar5 = ((uint)*(byte *)(param_1[0xe] + param_1[0x1b] + 2) ^
            param_1[0x12] << (param_1[0x16] & 0xffU)) & param_1[0x15];
    param_1[0x12] = uVar5;
    uVar3 = *(ushort *)(param_1[0x11] + uVar5 * 2);
    uVar5 = (uint)uVar3;
    *(ushort *)(param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2) = uVar3;
    *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
    if (uVar5 != 0) {
      uVar11 = param_1[0x1b];
      uVar6 = param_1[0xb] - 0x106;
      if (uVar11 - uVar5 <= uVar6) {
        uVar7 = param_1[0x1e];
        uVar18 = param_1[0x1f];
        pcVar13 = (char *)(param_1[0xe] + uVar11);
        uVar12 = uVar11;
        if (uVar6 < uVar11) {
          uVar12 = uVar11 - param_1[0xb];
        }
        if (uVar6 < uVar11) {
          unaff_r11 = uVar12 + 0x106;
        }
        cVar20 = pcVar13[uVar7 - 1];
        uVar12 = param_1[0x1d];
        if (uVar11 <= uVar6) {
          unaff_r11 = 0;
        }
        cVar19 = pcVar13[uVar7];
        if ((uint)param_1[0x23] <= uVar7) {
          uVar18 = uVar18 >> 2;
        }
        local_4c = param_1[0x24];
        if (uVar12 < (uint)param_1[0x24]) {
          local_4c = uVar12;
        }
        do {
          pcVar8 = (char *)(param_1[0xe] + uVar5);
          if ((((pcVar8[uVar7] == cVar19) && (pcVar8[uVar7 - 1] == cVar20)) && (*pcVar8 == *pcVar13)
              ) && (pcVar8[1] == pcVar13[1])) {
            pcVar8 = pcVar8 + 2;
            pcVar15 = pcVar13 + 2;
            while (((((pcVar14 = pcVar15 + 1, *pcVar14 == pcVar8[1] &&
                      (pcVar14 = pcVar15 + 2, *pcVar14 == pcVar8[2])) &&
                     ((pcVar14 = pcVar15 + 3, *pcVar14 == pcVar8[3] &&
                      ((pcVar14 = pcVar15 + 4, *pcVar14 == pcVar8[4] &&
                       (pcVar14 = pcVar15 + 5, *pcVar14 == pcVar8[5])))))) &&
                    (pcVar14 = pcVar15 + 6, *pcVar14 == pcVar8[6])) &&
                   (pcVar14 = pcVar15 + 7, *pcVar14 == pcVar8[7]))) {
              pcVar14 = pcVar15 + 8;
              pcVar8 = pcVar8 + 8;
              if ((*pcVar14 != *pcVar8) || (pcVar15 = pcVar14, pcVar13 + 0x102 <= pcVar14)) break;
            }
            iVar9 = -((int)(pcVar13 + 0x102) - (int)pcVar14);
            uVar6 = iVar9 + 0x102;
            if ((int)uVar7 < (int)uVar6) {
              param_1[0x1c] = uVar5;
              if ((int)local_4c <= (int)uVar6) goto LAB_0072c2a4;
              cVar19 = pcVar13[uVar6];
              cVar20 = pcVar13[iVar9 + 0x101];
              uVar7 = uVar6;
            }
          }
          uVar6 = uVar7;
          uVar5 = (uint)*(ushort *)(param_1[0x10] + (uVar5 & param_1[0xd]) * 2);
          if ((uVar5 <= unaff_r11) || (uVar18 = uVar18 - 1, uVar7 = uVar6, uVar18 == 0))
          goto LAB_0072c2a4;
        } while( true );
      }
    }
  }
  goto LAB_0072c2b4;
LAB_0072c2a4:
  if (uVar12 < uVar6) {
    uVar6 = uVar12;
  }
  param_1[0x18] = uVar6;
LAB_0072c2b4:
  if ((uint)param_1[0x18] < 3) {
    bVar1 = *(byte *)(param_1[0xe] + param_1[0x1b]);
    *(undefined2 *)(param_1[0x5a9] + *piVar4 * 2) = 0;
    iVar9 = *piVar4;
    *piVar4 = iVar9 + 1;
    *(byte *)(param_1[0x5a6] + iVar9) = bVar1;
    *(short *)(param_1 + bVar1 + 0x25) = (short)param_1[bVar1 + 0x25] + 1;
    iVar9 = param_1[0x1b];
    bVar21 = *piVar4 == param_1[0x5a7] + -1;
    param_1[0x1d] = param_1[0x1d] + -1;
  }
  else {
    iVar9 = param_1[0x1c];
    iVar17 = param_1[0x1b];
    uVar6 = param_1[0x18] - 3;
    *(short *)(param_1[0x5a9] + *piVar4 * 2) = (short)(iVar17 - iVar9);
    iVar16 = *piVar4;
    *piVar4 = iVar16 + 1;
    *(char *)(param_1[0x5a6] + iVar16) = (char)uVar6;
    uVar5 = (iVar17 - iVar9) - 1U & 0xffff;
    *(short *)(param_1 + (byte)(&DAT_0080d16c)[uVar6 & 0xff] + 0x126) =
         (short)param_1[(byte)(&DAT_0080d16c)[uVar6 & 0xff] + 0x126] + 1;
    if (uVar5 < 0x100) {
      bVar1 = (&DAT_0080cf6c)[uVar5];
    }
    else {
      bVar1 = (&DAT_0080d06c)[uVar5 >> 7];
    }
    if (uVar5 < 0x100) {
      bVar2 = (&DAT_0080cf6c)[uVar5];
    }
    else {
      bVar2 = (&DAT_0080d06c)[uVar5 >> 7];
    }
    *(short *)(param_1 + bVar2 + 0x262) = (short)param_1[bVar1 + 0x262] + 1;
    bVar21 = *piVar4 == param_1[0x5a7] + -1;
    uVar5 = param_1[0x18];
    uVar6 = param_1[0x1d] - uVar5;
    bVar22 = uVar5 <= (uint)param_1[0x20];
    if (bVar22 && 2 < uVar6) {
      uVar5 = uVar5 - 1;
    }
    param_1[0x1d] = uVar6;
    if (!bVar22 || 2 >= uVar6) {
      iVar9 = uVar5 + param_1[0x1b];
      param_1[0x1b] = iVar9;
      param_1[0x18] = 0;
      uVar5 = (uint)*(byte *)(param_1[0xe] + iVar9);
      param_1[0x12] = uVar5;
      param_1[0x12] =
           ((uint)*(byte *)(param_1[0xe] + iVar9 + 1) ^ uVar5 << (param_1[0x16] & 0xffU)) &
           param_1[0x15];
      goto LAB_0072c50c;
    }
    param_1[0x18] = uVar5;
    do {
      uVar5 = param_1[0x1b] + 1;
      param_1[0x1b] = uVar5;
      uVar6 = ((uint)*(byte *)(param_1[0xe] + uVar5 + 2) ^ param_1[0x12] << (param_1[0x16] & 0xffU))
              & param_1[0x15];
      param_1[0x12] = uVar6;
      *(undefined2 *)(param_1[0x10] + (uVar5 & param_1[0xd]) * 2) =
           *(undefined2 *)(param_1[0x11] + uVar6 * 2);
      *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
      iVar9 = param_1[0x18];
      param_1[0x18] = iVar9 + -1;
    } while (iVar9 + -1 != 0);
    iVar9 = param_1[0x1b];
  }
  param_1[0x1b] = iVar9 + 1;
LAB_0072c50c:
  if (bVar21) {
    iVar9 = param_1[0x17];
    if (iVar9 < 0) {
      iVar16 = 0;
    }
    else {
      iVar16 = param_1[0xe] + iVar9;
    }
    fn_00735950(param_1,iVar16,param_1[0x1b] - iVar9,0);
    param_1[0x17] = param_1[0x1b];
    fn_0072e014(*param_1);
    if (*(int *)(*param_1 + 0x10) == 0) {
      return 0;
    }
  }
  goto LAB_0072c034;
}


