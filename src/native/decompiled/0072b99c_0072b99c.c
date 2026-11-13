#include "0072b99c_0072b99c.h"



undefined4 fn_0072b99c(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar13;
  char *pcVar12;
  int iVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  char cVar19;
  char cVar20;
  uint uVar21;
  bool bVar22;
  uint local_4c;
  
  piVar4 = param_1 + 0x5a8;
LAB_0072b9d8:
  uVar5 = param_1[0x1d];
  if (uVar5 < 0x106) {
    fn_0072d870(param_1);
    uVar5 = param_1[0x1d];
    if ((uVar5 < 0x106) && (param_2 == 0)) {
      return 0;
    }
    if (uVar5 == 0) {
      uVar6 = param_1[0x1b];
      uVar5 = uVar6;
      if (1 < uVar6) {
        uVar5 = 2;
      }
      param_1[0x5ad] = uVar5;
      if (param_2 == 4) {
        iVar14 = param_1[0x17];
        if (iVar14 < 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = iVar14 + param_1[0xe];
        }
        fn_0072f7f4(param_1,iVar17,uVar6 - iVar14,1);
        param_1[0x17] = param_1[0x1b];
        fn_0072df90(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          uVar9 = 2;
        }
        else {
          uVar9 = 3;
        }
        return uVar9;
      }
      if (*piVar4 != 0) {
        iVar14 = param_1[0x17];
        if (iVar14 < 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = iVar14 + param_1[0xe];
        }
        fn_0072f7f4(param_1,iVar17,uVar6 - iVar14,0);
        param_1[0x17] = param_1[0x1b];
        fn_0072df90(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          return 0;
        }
      }
      return 1;
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
      uVar6 = param_1[0x1b];
      uVar10 = param_1[0xb] - 0x106;
      if (uVar6 - uVar5 <= uVar10) {
        uVar16 = param_1[0x1e];
        uVar21 = param_1[0x1f];
        pcVar11 = (char *)(param_1[0xe] + uVar6);
        uVar7 = uVar6;
        if (uVar10 < uVar6) {
          uVar7 = uVar6 - param_1[0xb];
        }
        if (uVar10 < uVar6) {
          uVar7 = uVar7 + 0x106;
        }
        else {
          uVar7 = 0;
        }
        uVar6 = param_1[0x1d];
        cVar20 = pcVar11[uVar16 - 1];
        cVar19 = pcVar11[uVar16];
        if ((uint)param_1[0x23] <= uVar16) {
          uVar21 = uVar21 >> 2;
        }
        local_4c = param_1[0x24];
        if (uVar6 < (uint)param_1[0x24]) {
          local_4c = uVar6;
        }
        do {
          pcVar8 = (char *)(param_1[0xe] + uVar5);
          if ((((pcVar8[uVar16] == cVar19) && (pcVar8[uVar16 - 1] == cVar20)) &&
              (*pcVar8 == *pcVar11)) && (pcVar8[1] == pcVar11[1])) {
            pcVar8 = pcVar8 + 2;
            pcVar13 = pcVar11 + 2;
            while (((((pcVar12 = pcVar13 + 1, *pcVar12 == pcVar8[1] &&
                      (pcVar12 = pcVar13 + 2, *pcVar12 == pcVar8[2])) &&
                     ((pcVar12 = pcVar13 + 3, *pcVar12 == pcVar8[3] &&
                      ((pcVar12 = pcVar13 + 4, *pcVar12 == pcVar8[4] &&
                       (pcVar12 = pcVar13 + 5, *pcVar12 == pcVar8[5])))))) &&
                    (pcVar12 = pcVar13 + 6, *pcVar12 == pcVar8[6])) &&
                   (pcVar12 = pcVar13 + 7, *pcVar12 == pcVar8[7]))) {
              pcVar12 = pcVar13 + 8;
              pcVar8 = pcVar8 + 8;
              if ((*pcVar12 != *pcVar8) || (pcVar13 = pcVar12, pcVar11 + 0x102 <= pcVar12)) break;
            }
            iVar14 = -((int)(pcVar11 + 0x102) - (int)pcVar12);
            uVar10 = iVar14 + 0x102;
            if ((int)uVar16 < (int)uVar10) {
              param_1[0x1c] = uVar5;
              if ((int)local_4c <= (int)uVar10) goto LAB_0072bc50;
              cVar19 = pcVar11[uVar10];
              cVar20 = pcVar11[iVar14 + 0x101];
              uVar16 = uVar10;
            }
          }
          uVar10 = uVar16;
          uVar5 = (uint)*(ushort *)(param_1[0x10] + (uVar5 & param_1[0xd]) * 2);
          if ((uVar5 <= uVar7) || (uVar21 = uVar21 - 1, uVar16 = uVar10, uVar21 == 0))
          goto LAB_0072bc50;
        } while( true );
      }
    }
  }
  goto LAB_0072bc60;
LAB_0072bc50:
  if (uVar6 < uVar10) {
    uVar10 = uVar6;
  }
  param_1[0x18] = uVar10;
LAB_0072bc60:
  if ((uint)param_1[0x18] < 3) {
    bVar1 = *(byte *)(param_1[0xe] + param_1[0x1b]);
    *(undefined2 *)(param_1[0x5a9] + *piVar4 * 2) = 0;
    iVar14 = *piVar4;
    piVar15 = param_1 + bVar1;
    *piVar4 = iVar14 + 1;
    *(byte *)(param_1[0x5a6] + iVar14) = bVar1;
    *(short *)(piVar15 + 0x25) = (short)piVar15[0x25] + 1;
    bVar22 = *piVar4 == param_1[0x5a7] + -1;
    if (bVar22) {
      piVar15 = (int *)&DAT_00000001;
    }
    param_1[0x1d] = param_1[0x1d] + -1;
    if (!bVar22) {
      piVar15 = (int *)0x0;
    }
    param_1[0x1b] = param_1[0x1b] + 1;
  }
  else {
    iVar14 = param_1[0x1b];
    iVar17 = param_1[0x1c];
    uVar6 = param_1[0x18] - 3;
    *(short *)(param_1[0x5a9] + *piVar4 * 2) = (short)(iVar14 - iVar17);
    iVar18 = *piVar4;
    uVar5 = (iVar14 - iVar17) - 1U & 0xffff;
    *piVar4 = iVar18 + 1;
    *(char *)(param_1[0x5a6] + iVar18) = (char)uVar6;
    *(short *)(param_1 + (byte)(&DAT_007f344c)[uVar6 & 0xff] + 0x126) =
         (short)param_1[(byte)(&DAT_007f344c)[uVar6 & 0xff] + 0x126] + 1;
    if (uVar5 < 0x100) {
      bVar1 = (&DAT_007f324c)[uVar5];
    }
    else {
      bVar1 = (&DAT_007f334c)[uVar5 >> 7];
    }
    if (uVar5 < 0x100) {
      bVar2 = (&DAT_007f324c)[uVar5];
    }
    else {
      bVar2 = (&DAT_007f334c)[uVar5 >> 7];
    }
    *(short *)(param_1 + bVar2 + 0x262) = (short)param_1[bVar1 + 0x262] + 1;
    uVar5 = param_1[0x18];
    piVar15 = (int *)(uint)(*piVar4 == param_1[0x5a7] + -1);
    uVar6 = param_1[0x1d] - uVar5;
    bVar22 = uVar5 <= (uint)param_1[0x20];
    if (bVar22 && 2 < uVar6) {
      uVar5 = uVar5 - 1;
    }
    param_1[0x1d] = uVar6;
    if (bVar22 && 2 < uVar6) {
      param_1[0x18] = uVar5;
      do {
        uVar5 = param_1[0x1b] + 1;
        param_1[0x1b] = uVar5;
        uVar6 = ((uint)*(byte *)(param_1[0xe] + uVar5 + 2) ^
                param_1[0x12] << (param_1[0x16] & 0xffU)) & param_1[0x15];
        param_1[0x12] = uVar6;
        *(undefined2 *)(param_1[0x10] + (uVar5 & param_1[0xd]) * 2) =
             *(undefined2 *)(param_1[0x11] + uVar6 * 2);
        *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
        iVar14 = param_1[0x18];
        param_1[0x18] = iVar14 + -1;
      } while (iVar14 + -1 != 0);
      param_1[0x1b] = param_1[0x1b] + 1;
    }
    else {
      iVar14 = uVar5 + param_1[0x1b];
      param_1[0x1b] = iVar14;
      param_1[0x18] = 0;
      uVar5 = (uint)*(byte *)(param_1[0xe] + iVar14);
      param_1[0x12] = uVar5;
      param_1[0x12] =
           ((uint)*(byte *)(iVar14 + param_1[0xe] + 1) ^ uVar5 << (param_1[0x16] & 0xffU)) &
           param_1[0x15];
    }
  }
  if (piVar15 != (int *)0x0) {
    iVar14 = param_1[0x17];
    if (iVar14 < 0) {
      iVar17 = 0;
    }
    else {
      iVar17 = param_1[0xe] + iVar14;
    }
    fn_0072f7f4(param_1,iVar17,param_1[0x1b] - iVar14,0);
    param_1[0x17] = param_1[0x1b];
    fn_0072df90(*param_1);
    if (*(int *)(*param_1 + 0x10) == 0) {
      return 0;
    }
  }
  goto LAB_0072b9d8;
}


