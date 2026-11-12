#include "0072a550_0072a550.h"



void fn_0072a550(int param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  
  uVar12 = 0;
  puVar3 = (uint *)(param_1 + 0x16bc);
  if (*(uint *)(param_1 + 0x16a0) != 0) {
    do {
      uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x16a4) + uVar12 * 2);
      uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0x1698) + uVar12);
      uVar12 = uVar12 + 1;
      if (uVar8 == 0) {
        puVar11 = (ushort *)(param_2 + uVar5 * 4);
        uVar5 = *puVar3;
        uVar8 = (uint)puVar11[1];
        if ((int)(0x10 - uVar8) < (int)uVar5) {
          uVar2 = *puVar11;
          uVar5 = (uint)*(ushort *)(param_1 + 0x16b8) | (uint)uVar2 << (uVar5 & 0xff);
          *(short *)(param_1 + 0x16b8) = (short)uVar5;
          iVar9 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar9 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)uVar5;
          iVar9 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar9 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar9) =
               (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
          *(ushort *)(param_1 + 0x16b8) = uVar2 >> (0x10 - *puVar3 & 0xff);
          *puVar3 = *puVar3 + (uVar8 - 0x10);
        }
        else {
          *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) | *puVar11 << (uVar5 & 0xff)
          ;
          *puVar3 = uVar8 + uVar5;
        }
      }
      else {
        uVar7 = (uint)(byte)(&DAT_007f344c)[uVar5];
        uVar4 = *puVar3;
        iVar9 = param_2 + uVar7 * 4;
        uVar10 = (uint)*(ushort *)(iVar9 + 0x406);
        if ((int)(0x10 - uVar10) < (int)uVar4) {
          uVar2 = *(ushort *)(iVar9 + 0x404);
          uVar4 = (uint)*(ushort *)(param_1 + 0x16b8) | (uint)uVar2 << (uVar4 & 0xff);
          *(short *)(param_1 + 0x16b8) = (short)uVar4;
          iVar9 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar9 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)uVar4;
          iVar9 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar9 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar9) =
               (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
          *(ushort *)(param_1 + 0x16b8) = uVar2 >> (0x10 - *puVar3 & 0xff);
          *puVar3 = *puVar3 + (uVar10 - 0x10);
        }
        else {
          *(ushort *)(param_1 + 0x16b8) =
               *(ushort *)(param_1 + 0x16b8) | *(short *)(iVar9 + 0x404) << (uVar4 & 0xff);
          *puVar3 = uVar10 + uVar4;
        }
        iVar9 = *(int *)(&DAT_007f2c54 + uVar7 * 4);
        if (iVar9 != 0) {
          uVar5 = uVar5 - *(int *)(&DAT_007f354c + uVar7 * 4);
          uVar4 = *puVar3;
          if (0x10 - iVar9 < (int)uVar4) {
            uVar4 = (uint)*(ushort *)(param_1 + 0x16b8) | uVar5 << (uVar4 & 0xff);
            *(short *)(param_1 + 0x16b8) = (short)uVar4;
            iVar6 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar6 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar6) = (char)uVar4;
            iVar6 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar6 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar6) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
            *(short *)(param_1 + 0x16b8) = (short)((uVar5 & 0xffff) >> (0x10 - *puVar3 & 0xff));
            *puVar3 = *puVar3 + iVar9 + -0x10;
          }
          else {
            *(ushort *)(param_1 + 0x16b8) =
                 *(ushort *)(param_1 + 0x16b8) | (ushort)(uVar5 << (uVar4 & 0xff));
            *puVar3 = uVar4 + iVar9;
          }
        }
        uVar5 = uVar8 - 1;
        uVar4 = *puVar3;
        if (uVar5 < 0x100) {
          bVar1 = (&DAT_007f324b)[uVar8];
        }
        else {
          bVar1 = (&DAT_007f334c)[uVar5 >> 7];
        }
        uVar7 = (uint)bVar1;
        puVar11 = (ushort *)(param_3 + uVar7 * 4);
        uVar8 = (uint)puVar11[1];
        if ((int)(0x10 - uVar8) < (int)uVar4) {
          uVar2 = *puVar11;
          uVar4 = (uint)*(ushort *)(param_1 + 0x16b8) | (uint)uVar2 << (uVar4 & 0xff);
          *(short *)(param_1 + 0x16b8) = (short)uVar4;
          iVar9 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar9 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)uVar4;
          iVar9 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar9 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar9) =
               (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
          *(ushort *)(param_1 + 0x16b8) = uVar2 >> (0x10 - *puVar3 & 0xff);
          *puVar3 = *puVar3 + (uVar8 - 0x10);
        }
        else {
          *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) | *puVar11 << (uVar4 & 0xff)
          ;
          *puVar3 = uVar4 + uVar8;
        }
        iVar9 = *(int *)(&DAT_007f2cc8 + uVar7 * 4);
        if (iVar9 != 0) {
          uVar5 = uVar5 - *(int *)(&DAT_007f35c0 + uVar7 * 4);
          uVar8 = *puVar3;
          if (0x10 - iVar9 < (int)uVar8) {
            uVar8 = (uint)*(ushort *)(param_1 + 0x16b8) | uVar5 << (uVar8 & 0xff);
            *(short *)(param_1 + 0x16b8) = (short)uVar8;
            iVar6 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar6 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar6) = (char)uVar8;
            iVar6 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar6 + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar6) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
            *(short *)(param_1 + 0x16b8) = (short)((uVar5 & 0xffff) >> (0x10 - *puVar3 & 0xff));
            *puVar3 = *puVar3 + iVar9 + -0x10;
          }
          else {
            *(ushort *)(param_1 + 0x16b8) =
                 *(ushort *)(param_1 + 0x16b8) | (ushort)(uVar5 << (uVar8 & 0xff));
            *puVar3 = uVar8 + iVar9;
          }
        }
      }
    } while (uVar12 < *(uint *)(param_1 + 0x16a0));
  }
  uVar5 = *puVar3;
  uVar12 = (uint)*(ushort *)(param_2 + 0x402);
  if ((int)(0x10 - uVar12) < (int)uVar5) {
    uVar2 = *(ushort *)(param_2 + 0x400);
    uVar5 = (uint)*(ushort *)(param_1 + 0x16b8) | (uint)uVar2 << (uVar5 & 0xff);
    *(short *)(param_1 + 0x16b8) = (short)uVar5;
    iVar9 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar9 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar9) = (char)uVar5;
    iVar9 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar9 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar9) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(ushort *)(param_1 + 0x16b8) = uVar2 >> (0x10 - *puVar3 & 0xff);
    *puVar3 = *puVar3 + (uVar12 - 0x10);
    return;
  }
  *(ushort *)(param_1 + 0x16b8) =
       *(ushort *)(param_1 + 0x16b8) | *(ushort *)(param_2 + 0x400) << (uVar5 & 0xff);
  *puVar3 = uVar12 + uVar5;
  return;
}


