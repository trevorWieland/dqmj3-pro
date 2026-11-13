#include "0072d870_0072df90.h"



void fn_0072df90(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  fn_0072f750(iVar3);
  uVar2 = *(uint *)(iVar3 + 0x14);
  if (*(uint *)(param_1 + 0x10) < *(uint *)(iVar3 + 0x14)) {
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if (uVar2 != 0) {
    fn_00301a9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(iVar3 + 0x10),uVar2);
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar2;
    *(uint *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + uVar2;
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar2;
    *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - uVar2;
    iVar1 = *(int *)(iVar3 + 0x14) - uVar2;
    *(int *)(iVar3 + 0x14) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + 8);
    }
  }
  return;
}



void fn_0072dc50(int *param_1)

{
  short sVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  uint uVar13;
  
  uVar10 = param_1[0xb];
  do {
    uVar13 = (param_1[0xf] - param_1[0x1d]) - param_1[0x1b];
    if (param_1[0xb] + (uVar10 - 0x106) <= (uint)param_1[0x1b]) {
      fn_00301a9c(param_1[0xe],param_1[0xe] + uVar10,uVar10);
      uVar6 = param_1[0x13];
      param_1[0x17] = param_1[0x17] - uVar10;
      param_1[0x1b] = param_1[0x1b] - uVar10;
      param_1[0x1c] = param_1[0x1c] - uVar10;
      puVar2 = (ushort *)(param_1[0x11] + uVar6 * 2);
      sVar1 = (short)uVar10;
      if (uVar6 < 0x80000000) {
        if ((int)uVar6 < 2) {
          uVar6 = 1;
        }
        if ((uVar6 & 1) != 0) {
          if (puVar2[-1] < uVar10) {
            uVar8 = 0;
          }
          else {
            uVar8 = puVar2[-1] - sVar1;
          }
          puVar2 = puVar2 + -1;
          *puVar2 = uVar8;
        }
        for (iVar3 = (int)uVar6 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (puVar2[-1] < uVar10) {
            uVar8 = 0;
          }
          else {
            uVar8 = puVar2[-1] - sVar1;
          }
          puVar2[-1] = uVar8;
          if (puVar2[-2] < uVar10) {
            uVar8 = 0;
          }
          else {
            uVar8 = puVar2[-2] - sVar1;
          }
          puVar2 = puVar2 + -2;
          *puVar2 = uVar8;
        }
      }
      else {
        do {
          puVar2 = puVar2 + -1;
          if (*puVar2 < uVar10) {
            uVar8 = 0;
          }
          else {
            uVar8 = *puVar2 - sVar1;
          }
          uVar6 = uVar6 - 1;
          *puVar2 = uVar8;
        } while (uVar6 != 0);
      }
      puVar2 = (ushort *)(param_1[0x10] + uVar10 * 2);
      uVar6 = uVar10;
      if (uVar10 < 0x80000000) {
        if ((int)uVar10 < 2) {
          uVar6 = 1;
        }
        if ((uVar6 & 1) != 0) {
          if (puVar2[-1] < uVar10) {
            uVar8 = 0;
          }
          else {
            uVar8 = puVar2[-1] - sVar1;
          }
          puVar2 = puVar2 + -1;
          *puVar2 = uVar8;
        }
        for (iVar3 = (int)uVar6 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (puVar2[-1] < uVar10) {
            uVar8 = 0;
          }
          else {
            uVar8 = puVar2[-1] - sVar1;
          }
          puVar2[-1] = uVar8;
          if (puVar2[-2] < uVar10) {
            uVar8 = 0;
          }
          else {
            uVar8 = puVar2[-2] - sVar1;
          }
          puVar2 = puVar2 + -2;
          *puVar2 = uVar8;
        }
      }
      else {
        do {
          puVar2 = puVar2 + -1;
          if (*puVar2 < uVar10) {
            uVar8 = 0;
          }
          else {
            uVar8 = *puVar2 - sVar1;
          }
          uVar6 = uVar6 - 1;
          *puVar2 = uVar8;
        } while (uVar6 != 0);
      }
      uVar13 = uVar13 + uVar10;
    }
    piVar11 = (int *)*param_1;
    uVar6 = piVar11[1];
    if (uVar6 == 0) {
      return;
    }
    iVar3 = param_1[0x1b];
    iVar9 = param_1[0xe];
    iVar7 = param_1[0x1d];
    uVar5 = uVar6;
    if ((uVar6 <= uVar13) || (uVar5 = uVar13, uVar13 != 0)) {
      piVar11[1] = uVar6 - uVar5;
      if (*(int *)(piVar11[7] + 0x18) == 1) {
        iVar4 = fn_00736384(piVar11[0xc],*piVar11,uVar5);
LAB_0072de68:
        piVar11[0xc] = iVar4;
      }
      else if (*(int *)(piVar11[7] + 0x18) == 2) {
        iVar4 = fn_00736734(piVar11[0xc],*piVar11,uVar5);
        goto LAB_0072de68;
      }
      fn_00301a9c(iVar3 + iVar9 + iVar7,*piVar11,uVar5);
      *piVar11 = *piVar11 + uVar5;
      piVar11[2] = piVar11[2] + uVar5;
    }
    uVar5 = param_1[0x1d] + uVar5;
    param_1[0x1d] = uVar5;
    if (2 < uVar5) {
      uVar13 = (uint)*(byte *)(param_1[0xe] + param_1[0x1b]);
      param_1[0x12] = uVar13;
      param_1[0x12] =
           ((uint)*(byte *)(param_1[0xe] + param_1[0x1b] + 1) ^ uVar13 << (param_1[0x16] & 0xffU)) &
           param_1[0x15];
    }
    if ((0x105 < uVar5) || (*(int *)(*param_1 + 4) == 0)) {
      puVar12 = (uint *)(param_1 + 0x5b0);
      uVar13 = param_1[0xf];
      uVar10 = *puVar12;
      if (uVar10 < uVar13) {
        uVar6 = param_1[0x1b] + param_1[0x1d];
        if (uVar10 < uVar6) {
          uVar10 = uVar13 - uVar6;
          if (0x102 < uVar13 - uVar6) {
            uVar10 = 0x102;
          }
          fn_00158f6c(param_1[0xe] + uVar6,uVar10);
          uVar6 = uVar6 + uVar10;
        }
        else {
          if (uVar6 + 0x102 <= uVar10) {
            return;
          }
          uVar6 = (uVar6 - uVar10) + 0x102;
          if (uVar13 - uVar10 < uVar6) {
            uVar6 = uVar13 - uVar10;
          }
          fn_00158f6c(uVar10 + param_1[0xe],uVar6);
          uVar6 = *puVar12 + uVar6;
        }
        *puVar12 = uVar6;
      }
      return;
    }
  } while( true );
}



void fn_0072d870(int *param_1)

{
  short sVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  
  piVar7 = param_1 + 0x5ad;
  uVar6 = param_1[0xb];
  while( true ) {
    uVar11 = (param_1[0xf] - param_1[0x1d]) - param_1[0x1b];
    if (param_1[0xb] + (uVar6 - 0x106) <= (uint)param_1[0x1b]) {
      fn_00301a9c(param_1[0xe],param_1[0xe] + uVar6,uVar6);
      uVar3 = param_1[0x13];
      param_1[0x17] = param_1[0x17] - uVar6;
      param_1[0x1b] = param_1[0x1b] - uVar6;
      param_1[0x1c] = param_1[0x1c] - uVar6;
      puVar2 = (ushort *)(param_1[0x11] + uVar3 * 2);
      sVar1 = (short)uVar6;
      if (uVar3 < 0x80000000) {
        if ((int)uVar3 < 2) {
          uVar3 = 1;
        }
        if ((uVar3 & 1) != 0) {
          if (puVar2[-1] < uVar6) {
            uVar5 = 0;
          }
          else {
            uVar5 = puVar2[-1] - sVar1;
          }
          puVar2 = puVar2 + -1;
          *puVar2 = uVar5;
        }
        for (iVar12 = (int)uVar3 >> 1; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar2[-1] < uVar6) {
            uVar5 = 0;
          }
          else {
            uVar5 = puVar2[-1] - sVar1;
          }
          puVar2[-1] = uVar5;
          if (puVar2[-2] < uVar6) {
            uVar5 = 0;
          }
          else {
            uVar5 = puVar2[-2] - sVar1;
          }
          puVar2 = puVar2 + -2;
          *puVar2 = uVar5;
        }
      }
      else {
        do {
          puVar2 = puVar2 + -1;
          if (*puVar2 < uVar6) {
            uVar5 = 0;
          }
          else {
            uVar5 = *puVar2 - sVar1;
          }
          uVar3 = uVar3 - 1;
          *puVar2 = uVar5;
        } while (uVar3 != 0);
      }
      puVar2 = (ushort *)(param_1[0x10] + uVar6 * 2);
      uVar3 = uVar6;
      if (uVar6 < 0x80000000) {
        if ((int)uVar6 < 2) {
          uVar3 = 1;
        }
        if ((uVar3 & 1) != 0) {
          if (puVar2[-1] < uVar6) {
            uVar5 = 0;
          }
          else {
            uVar5 = puVar2[-1] - sVar1;
          }
          puVar2 = puVar2 + -1;
          *puVar2 = uVar5;
        }
        for (iVar12 = (int)uVar3 >> 1; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar2[-1] < uVar6) {
            uVar5 = 0;
          }
          else {
            uVar5 = puVar2[-1] - sVar1;
          }
          puVar2[-1] = uVar5;
          if (puVar2[-2] < uVar6) {
            uVar5 = 0;
          }
          else {
            uVar5 = puVar2[-2] - sVar1;
          }
          puVar2 = puVar2 + -2;
          *puVar2 = uVar5;
        }
      }
      else {
        do {
          puVar2 = puVar2 + -1;
          if (*puVar2 < uVar6) {
            uVar5 = 0;
          }
          else {
            uVar5 = *puVar2 - sVar1;
          }
          uVar3 = uVar3 - 1;
          *puVar2 = uVar5;
        } while (uVar3 != 0);
      }
      uVar11 = uVar11 + uVar6;
    }
    piVar10 = (int *)*param_1;
    uVar3 = piVar10[1];
    if (uVar3 == 0) break;
    iVar12 = param_1[0xe] + param_1[0x1b] + param_1[0x1d];
    uVar9 = uVar3;
    if ((uVar3 <= uVar11) || (uVar9 = uVar11, uVar11 != 0)) {
      piVar10[1] = uVar3 - uVar9;
      fn_00301a9c(iVar12,*piVar10,uVar9);
      if (*(int *)(piVar10[7] + 0x18) == 1) {
        iVar12 = fn_00730208(piVar10[0xc],iVar12,uVar9);
LAB_0072daa4:
        piVar10[0xc] = iVar12;
      }
      else if (*(int *)(piVar10[7] + 0x18) == 2) {
        iVar12 = fn_007305b8(piVar10[0xc],iVar12,uVar9);
        goto LAB_0072daa4;
      }
      *piVar10 = *piVar10 + uVar9;
      piVar10[2] = piVar10[2] + uVar9;
    }
    iVar12 = param_1[0x1d];
    param_1[0x1d] = iVar12 + uVar9;
    iVar4 = *piVar7;
    if (2 < iVar12 + uVar9 + iVar4) {
      uVar11 = param_1[0x1b] - iVar4;
      uVar3 = (uint)*(byte *)(param_1[0xe] + uVar11);
      param_1[0x12] = uVar3;
      param_1[0x12] =
           ((uint)*(byte *)(param_1[0xe] + uVar11 + 1) ^ uVar3 << (param_1[0x16] & 0xffU)) &
           param_1[0x15];
      do {
        if (iVar4 == 0) break;
        uVar3 = ((uint)*(byte *)(param_1[0xe] + uVar11 + 2) ^
                param_1[0x12] << (param_1[0x16] & 0xffU)) & param_1[0x15];
        param_1[0x12] = uVar3;
        *(undefined2 *)(param_1[0x10] + (param_1[0xd] & uVar11) * 2) =
             *(undefined2 *)(param_1[0x11] + uVar3 * 2);
        *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)uVar11;
        iVar4 = *piVar7 + -1;
        *piVar7 = iVar4;
        uVar11 = uVar11 + 1;
      } while (2 < (uint)(param_1[0x1d] + iVar4));
    }
    if ((0x105 < (uint)param_1[0x1d]) || (*(int *)(*param_1 + 4) == 0)) break;
  }
  puVar8 = (uint *)(param_1 + 0x5b0);
  uVar11 = param_1[0xf];
  uVar6 = *puVar8;
  if (uVar6 < uVar11) {
    uVar3 = param_1[0x1b] + param_1[0x1d];
    if (uVar6 < uVar3) {
      uVar6 = uVar11 - uVar3;
      if (0x102 < uVar11 - uVar3) {
        uVar6 = 0x102;
      }
      fn_00158f6c(param_1[0xe] + uVar3,uVar6);
      uVar3 = uVar3 + uVar6;
    }
    else {
      if (uVar3 + 0x102 <= uVar6) {
        return;
      }
      uVar3 = (uVar3 - uVar6) + 0x102;
      if (uVar11 - uVar6 < uVar3) {
        uVar3 = uVar11 - uVar6;
      }
      fn_00158f6c(uVar6 + param_1[0xe],uVar3);
      uVar3 = *puVar8 + uVar3;
    }
    *puVar8 = uVar3;
  }
  return;
}


