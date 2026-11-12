#include "0072f2e8_0072f7f4.h"



void fn_0072f7f4(int *param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  bool bVar13;
  
  uVar5 = param_1[0x21];
  uVar6 = uVar5;
  if ((int)uVar5 < 1) {
    uVar6 = param_3 + 5;
  }
  iVar10 = 0;
  if ((int)uVar5 < 1) {
    uVar5 = uVar6;
  }
  else {
    if (*(int *)(*param_1 + 0x2c) == 2) {
      uVar6 = 0xf3ffc07f;
      iVar10 = 0;
      do {
        if (((uVar6 & 1) != 0) && ((short)param_1[iVar10 + 0x25] != 0)) goto LAB_0072f8c0;
        iVar10 = iVar10 + 1;
        uVar6 = uVar6 >> 1;
      } while (iVar10 < 0x20);
      sVar2 = (short)param_1[0x2e];
      bVar13 = sVar2 != 0;
      if (!bVar13) {
        sVar2 = (short)param_1[0x2f];
      }
      if ((bVar13 || sVar2 != 0) || ((short)param_1[0x32] != 0)) {
LAB_0072f8ac:
        uVar3 = 1;
      }
      else {
        iVar10 = 0x20;
        do {
          piVar7 = param_1 + iVar10;
          bVar13 = (short)piVar7[0x25] == 0;
          if (bVar13) {
            piVar7 = (int *)(uint)*(ushort *)(piVar7 + 0x26);
          }
          if (!bVar13 || piVar7 != (int *)0x0) goto LAB_0072f8ac;
          iVar10 = iVar10 + 2;
        } while (iVar10 < 0x100);
LAB_0072f8c0:
        uVar3 = 0;
      }
      *(undefined4 *)(*param_1 + 0x2c) = uVar3;
    }
    fn_0072948c(param_1,param_1 + 0x2c6);
    fn_0072948c(param_1,param_1 + 0x2c9);
    fn_0073aa9c(param_1,param_1 + 0x25,param_1[0x2c7]);
    fn_0073aa9c(param_1,param_1 + 0x262,param_1[0x2ca]);
    fn_0072948c(param_1,param_1 + 0x2cc);
    iVar10 = 0x12;
    do {
      if (*(short *)((int)param_1 + (uint)(byte)(&DAT_007f2d40)[iVar10] * 4 + 0xa7e) != 0) break;
      if (*(short *)((int)param_1 + (uint)(byte)(&UNK_007f2d3f)[iVar10] * 4 + 0xa7e) != 0) {
        iVar10 = iVar10 + -1;
        break;
      }
      iVar10 = iVar10 + -2;
    } while (2 < iVar10);
    param_1[0x5aa] = iVar10 * 3 + 0x11 + param_1[0x5aa];
    uVar5 = param_1[0x5aa] + 10U >> 3;
    uVar6 = param_1[0x5ab] + 10U >> 3;
    if (uVar6 < uVar5) {
      uVar5 = uVar6;
    }
  }
  puVar12 = (uint *)(param_1 + 0x5af);
  if ((uVar5 < param_3 + 4U) || (param_2 == 0)) {
    uVar4 = *puVar12;
    if (param_1[0x22] == 4 || uVar6 == uVar5) {
      if ((int)uVar4 < 0xe) {
        *(ushort *)(param_1 + 0x5ae) =
             *(ushort *)(param_1 + 0x5ae) | (ushort)(param_4 + 2 << (uVar4 & 0xff));
        *puVar12 = uVar4 + 3;
      }
      else {
        uVar6 = (uint)*(ushort *)(param_1 + 0x5ae) | param_4 + 2U << (uVar4 & 0xff);
        *(short *)(param_1 + 0x5ae) = (short)uVar6;
        iVar10 = param_1[5];
        param_1[5] = iVar10 + 1;
        *(char *)(param_1[2] + iVar10) = (char)uVar6;
        iVar10 = param_1[5];
        param_1[5] = iVar10 + 1;
        *(char *)(param_1[2] + iVar10) = (char)((uint)param_1[0x5ae] >> 8);
        *(short *)(param_1 + 0x5ae) = (short)((param_4 + 2U & 0xffff) >> (0x10 - *puVar12 & 0xff));
        *puVar12 = *puVar12 - 0xd;
      }
      fn_0072a550(param_1,&DAT_007f2d54);
    }
    else {
      if ((int)uVar4 < 0xe) {
        *(ushort *)(param_1 + 0x5ae) =
             *(ushort *)(param_1 + 0x5ae) | (ushort)(param_4 + 4 << (uVar4 & 0xff));
        *puVar12 = uVar4 + 3;
      }
      else {
        uVar6 = (uint)*(ushort *)(param_1 + 0x5ae) | param_4 + 4U << (uVar4 & 0xff);
        *(short *)(param_1 + 0x5ae) = (short)uVar6;
        iVar9 = param_1[5];
        param_1[5] = iVar9 + 1;
        *(char *)(param_1[2] + iVar9) = (char)uVar6;
        iVar9 = param_1[5];
        param_1[5] = iVar9 + 1;
        *(char *)(param_1[2] + iVar9) = (char)((uint)param_1[0x5ae] >> 8);
        *(short *)(param_1 + 0x5ae) = (short)((param_4 + 4U & 0xffff) >> (0x10 - *puVar12 & 0xff));
        *puVar12 = *puVar12 - 0xd;
      }
      iVar9 = param_1[0x2c7];
      uVar5 = param_1[0x2ca];
      uVar4 = iVar9 - 0x100;
      uVar6 = uVar4 << (*puVar12 & 0xff);
      if ((int)*puVar12 < 0xc) {
        *(ushort *)(param_1 + 0x5ae) = *(ushort *)(param_1 + 0x5ae) | (ushort)uVar6;
        uVar6 = *puVar12 + 5;
      }
      else {
        uVar6 = *(ushort *)(param_1 + 0x5ae) | uVar6;
        *(short *)(param_1 + 0x5ae) = (short)uVar6;
        iVar8 = param_1[5];
        param_1[5] = iVar8 + 1;
        *(char *)(param_1[2] + iVar8) = (char)uVar6;
        iVar8 = param_1[5];
        param_1[5] = iVar8 + 1;
        *(char *)(param_1[2] + iVar8) = (char)((uint)param_1[0x5ae] >> 8);
        *(short *)(param_1 + 0x5ae) = (short)((uVar4 & 0xffff) >> (0x10 - *puVar12 & 0xff));
        uVar6 = *puVar12 - 0xb;
      }
      *puVar12 = uVar6;
      uVar4 = uVar5 << (uVar6 & 0xff);
      if ((int)uVar6 < 0xc) {
        *(ushort *)(param_1 + 0x5ae) = *(ushort *)(param_1 + 0x5ae) | (ushort)uVar4;
        uVar6 = *puVar12 + 5;
      }
      else {
        uVar4 = *(ushort *)(param_1 + 0x5ae) | uVar4;
        *(short *)(param_1 + 0x5ae) = (short)uVar4;
        iVar8 = param_1[5];
        param_1[5] = iVar8 + 1;
        *(char *)(param_1[2] + iVar8) = (char)uVar4;
        iVar8 = param_1[5];
        param_1[5] = iVar8 + 1;
        *(char *)(param_1[2] + iVar8) = (char)((uint)param_1[0x5ae] >> 8);
        *(short *)(param_1 + 0x5ae) = (short)((uVar5 & 0xffff) >> (0x10 - *puVar12 & 0xff));
        uVar6 = *puVar12 - 0xb;
      }
      *puVar12 = uVar6;
      uVar4 = iVar10 - 3U << (uVar6 & 0xff);
      if ((int)uVar6 < 0xd) {
        *(ushort *)(param_1 + 0x5ae) = *(ushort *)(param_1 + 0x5ae) | (ushort)uVar4;
        uVar6 = *puVar12 + 4;
      }
      else {
        uVar4 = *(ushort *)(param_1 + 0x5ae) | uVar4;
        *(short *)(param_1 + 0x5ae) = (short)uVar4;
        iVar8 = param_1[5];
        param_1[5] = iVar8 + 1;
        *(char *)(param_1[2] + iVar8) = (char)uVar4;
        iVar8 = param_1[5];
        param_1[5] = iVar8 + 1;
        *(char *)(param_1[2] + iVar8) = (char)((uint)param_1[0x5ae] >> 8);
        *(short *)(param_1 + 0x5ae) = (short)((iVar10 - 3U & 0xffff) >> (0x10 - *puVar12 & 0xff));
        uVar6 = *puVar12 - 0xc;
      }
      *puVar12 = uVar6;
      iVar8 = 0;
      if (0 < iVar10 + 1) {
        do {
          uVar6 = *puVar12;
          if ((int)uVar6 < 0xe) {
            *(ushort *)(param_1 + 0x5ae) =
                 *(ushort *)(param_1 + 0x5ae) |
                 *(short *)((int)param_1 + (uint)(byte)(&DAT_007f2d40)[iVar8] * 4 + 0xa7e) <<
                 (uVar6 & 0xff);
            *puVar12 = uVar6 + 3;
          }
          else {
            uVar1 = *(ushort *)((int)param_1 + (uint)(byte)(&DAT_007f2d40)[iVar8] * 4 + 0xa7e);
            uVar6 = (uint)*(ushort *)(param_1 + 0x5ae) | (uint)uVar1 << (uVar6 & 0xff);
            *(short *)(param_1 + 0x5ae) = (short)uVar6;
            *(char *)(param_1[2] + param_1[5]) = (char)uVar6;
            iVar11 = param_1[5];
            param_1[5] = iVar11 + 1;
            *(char *)(param_1[2] + iVar11 + 1) = (char)((uint)param_1[0x5ae] >> 8);
            param_1[5] = param_1[5] + 1;
            *(ushort *)(param_1 + 0x5ae) = uVar1 >> (0x10 - *puVar12 & 0xff);
            *puVar12 = *puVar12 - 0xd;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar10 + 1);
      }
      fn_0073acbc(param_1,param_1 + 0x25,iVar9);
      fn_0073acbc(param_1,param_1 + 0x262,uVar5);
      fn_0072a550(param_1,param_1 + 0x25,param_1 + 0x262);
    }
  }
  else {
    fn_00730044(param_1,param_2,param_3,param_4);
  }
  iVar9 = 0;
  iVar10 = 0;
  do {
    iVar9 = iVar9 + 2;
    *(undefined2 *)(param_1 + iVar10 + 0x25) = 0;
    *(undefined2 *)(param_1 + iVar10 + 0x26) = 0;
    iVar10 = iVar10 + 2;
  } while (iVar9 < 0x11e);
  iVar9 = 0;
  iVar10 = 0;
  do {
    iVar9 = iVar9 + 2;
    *(undefined2 *)(param_1 + iVar10 + 0x262) = 0;
    *(undefined2 *)(param_1 + iVar10 + 0x263) = 0;
    iVar10 = iVar10 + 2;
  } while (iVar9 < 0x1e);
  iVar9 = 1;
  *(undefined2 *)(param_1 + 0x29f) = 0;
  iVar10 = 1;
  do {
    iVar9 = iVar9 + 2;
    *(undefined2 *)(param_1 + iVar10 + 0x29f) = 0;
    *(undefined2 *)(param_1 + iVar10 + 0x2a0) = 0;
    iVar10 = iVar10 + 2;
  } while (iVar9 < 0x13);
  *(undefined2 *)(param_1 + 0x125) = 1;
  param_1[0x5ab] = 0;
  param_1[0x5aa] = 0;
  param_1[0x5ac] = 0;
  param_1[0x5a8] = 0;
  if (param_4 != 0) {
    if ((int)*puVar12 < 9) {
      if (0 < (int)*puVar12) {
        iVar10 = param_1[5];
        param_1[5] = iVar10 + 1;
        *(char *)(param_1[2] + iVar10) = (char)param_1[0x5ae];
      }
    }
    else {
      iVar10 = param_1[5];
      param_1[5] = iVar10 + 1;
      *(char *)(param_1[2] + iVar10) = (char)param_1[0x5ae];
      iVar10 = param_1[5];
      param_1[5] = iVar10 + 1;
      *(char *)(param_1[2] + iVar10) = (char)((uint)param_1[0x5ae] >> 8);
    }
    *(undefined2 *)(param_1 + 0x5ae) = 0;
    *puVar12 = 0;
  }
  return;
}



void fn_0072f750(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x16bc);
  if (*piVar1 == 0x10) {
    iVar2 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar2 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar2) = (char)*(undefined2 *)(param_1 + 0x16b8);
    iVar2 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar2 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar2) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(undefined2 *)(param_1 + 0x16b8) = 0;
    *piVar1 = 0;
    return;
  }
  if (7 < *piVar1) {
    iVar2 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar2 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar2) = (char)*(undefined2 *)(param_1 + 0x16b8);
    *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) >> 8;
    *piVar1 = *piVar1 + -8;
  }
  return;
}



void fn_0072f5d0(int param_1)

{
  undefined2 uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  puVar2 = (uint *)(param_1 + 0x16bc);
  uVar4 = *puVar2;
  uVar3 = (uint)*(ushort *)(param_1 + 0x16b8) | 2 << (uVar4 & 0xff) & 0xffffU;
  uVar1 = (undefined2)uVar3;
  if ((int)uVar4 < 0xe) {
    *(undefined2 *)(param_1 + 0x16b8) = uVar1;
    *puVar2 = uVar4 + 3;
  }
  else {
    *(undefined2 *)(param_1 + 0x16b8) = uVar1;
    iVar5 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar5 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar5) = (char)uVar3;
    iVar5 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar5 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar5) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(short *)(param_1 + 0x16b8) = (short)(2 >> (0x10 - *puVar2 & 0xff));
    *puVar2 = *puVar2 - 0xd;
  }
  uVar3 = *puVar2;
  if ((int)uVar3 < 10) {
    uVar3 = uVar3 + 7;
  }
  else {
    uVar3 = (uint)*(ushort *)(param_1 + 0x16b8) | 0 << (uVar3 & 0xff);
    *(short *)(param_1 + 0x16b8) = (short)uVar3;
    iVar5 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar5 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar5) = (char)uVar3;
    iVar5 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar5 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar5) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    uVar3 = *puVar2 - 9;
    *(short *)(param_1 + 0x16b8) = (short)(0 >> (0x10 - *puVar2 & 0xff));
  }
  *puVar2 = uVar3;
  if (uVar3 == 0x10) {
    iVar5 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar5 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar5) = (char)*(undefined2 *)(param_1 + 0x16b8);
    iVar5 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar5 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar5) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(undefined2 *)(param_1 + 0x16b8) = 0;
    *puVar2 = 0;
    return;
  }
  if (7 < (int)uVar3) {
    iVar5 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar5 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar5) = (char)*(undefined2 *)(param_1 + 0x16b8);
    *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) >> 8;
    *puVar2 = *puVar2 - 8;
  }
  return;
}



void fn_0072f2e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0073b7a4(param_1,param_3,4,param_2,0,0);
  return;
}


