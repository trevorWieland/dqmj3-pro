#include "00390f28_00390f28.h"



/* WARNING: Removing unreachable block (ram,0x003910d0) */
/* WARNING: Removing unreachable block (ram,0x003910d4) */
/* WARNING: Removing unreachable block (ram,0x003910d8) */
/* WARNING: Removing unreachable block (ram,0x003910dc) */
/* WARNING: Removing unreachable block (ram,0x003910e0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_00390f28(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  ushort *puVar1;
  undefined2 *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  short sVar8;
  uint *puVar9;
  uint uVar10;
  byte *pbVar11;
  ushort *puVar12;
  int iVar13;
  uint *unaff_r5;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  undefined2 *puVar18;
  int iVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  uint *puVar22;
  bool bVar23;
  uint *local_5c;
  ushort local_50;
  ushort local_4e;
  ushort local_4c;
  ushort local_4a;
  uint local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_2c;
  
  fn_003d5ddc(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4));
  puVar14 = (uint *)0x0;
  local_5c = (uint *)0x0;
  puVar22 = (uint *)0x0;
  uVar15 = 0;
  iVar13 = param_3[1] - *param_3 >> 0x1f;
  puVar16 = puVar14;
  puVar17 = puVar22;
  if ((param_3[1] - *param_3) / 0x34 + iVar13 != iVar13) {
    do {
      puVar21 = (undefined2 *)(*param_3 + uVar15 * 0x34 + 8);
      puVar22 = puVar17;
      if (puVar16 == local_5c) {
        uVar7 = (int)puVar16 - (int)puVar17 >> 1;
        if (uVar7 < (uint)((int)local_5c - (int)puVar17 >> 1)) {
          puVar17 = (uint *)((int)puVar16 + -2);
          if (puVar16 != (uint *)0x0) {
            *(undefined2 *)puVar16 = *(undefined2 *)((int)puVar16 + -2);
          }
          puVar14 = (uint *)((int)puVar16 + 2);
          puVar9 = puVar16;
          if (puVar16 < puVar17) {
            iVar13 = (int)puVar17 - (int)puVar16;
            if (0 < iVar13) {
              if (iVar13 * 0x40000000 < 0) {
                puVar17 = puVar16 + -1;
                puVar9 = (uint *)((int)puVar16 + -2);
                *(short *)puVar9 = (short)*puVar17;
              }
              for (iVar13 = iVar13 >> 2; iVar13 != 0; iVar13 = iVar13 + -1) {
                *(undefined2 *)((int)puVar9 + -2) = *(undefined2 *)((int)puVar17 + -2);
                puVar17 = puVar17 + -1;
                puVar9 = puVar9 + -1;
                *(short *)puVar9 = (short)*puVar17;
              }
            }
          }
          else {
            while (puVar16 != puVar17) {
              puVar17 = (uint *)((int)puVar17 + -2);
              *(undefined2 *)((int)puVar9 + -2) = *(undefined2 *)puVar17;
              puVar9 = (uint *)((int)puVar9 + -2);
            }
          }
          *(undefined2 *)puVar16 = *puVar21;
          unaff_r5 = puVar16;
        }
        else {
          uVar10 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
          if (uVar10 < uVar7 + 0x20) {
            uVar10 = uVar7 + 0x20;
          }
          puVar22 = (uint *)fn_00100fc6(uVar10 << 1,0);
          puVar9 = puVar22;
          for (puVar14 = puVar17; puVar14 != puVar16; puVar14 = (uint *)((int)puVar14 + 2)) {
            if (puVar9 != (uint *)0x0) {
              *(short *)puVar9 = (short)*puVar14;
            }
            puVar9 = (uint *)((int)puVar9 + 2);
          }
          puVar20 = (undefined2 *)((int)puVar22 + ((int)puVar16 - (int)puVar17 & 0xfffffffeU));
          if (puVar20 != (undefined2 *)0x0) {
            *puVar20 = *puVar21;
          }
          unaff_r5 = (uint *)((int)puVar16 - (int)puVar17 >> 1);
          puVar14 = puVar17;
          if (puVar16 < puVar17) {
            do {
              puVar14 = (uint *)((int)puVar14 + 2);
            } while (puVar14 != puVar16);
          }
          fn_001008c4(puVar17,(int)local_5c - (int)puVar17 >> 1,0);
          puVar14 = (uint *)((int)puVar22 + (int)unaff_r5 * 2 + 2);
          local_5c = (uint *)((int)puVar22 + uVar10 * 2);
        }
      }
      else {
        if (puVar16 != (uint *)0x0) {
          *(undefined2 *)puVar16 = *puVar21;
        }
        puVar14 = (uint *)((int)puVar16 + 2);
      }
      uVar15 = uVar15 + 1;
      puVar16 = puVar14;
      puVar17 = puVar22;
    } while (uVar15 < (uint)((param_3[1] - *param_3) / 0x34));
  }
  uVar15 = 0;
  if ((int)puVar14 - (int)puVar22 >> 1 != 0) {
    do {
      iVar13 = *param_2;
      uVar10 = 0xffffffff;
      uVar4 = 0;
      uVar7 = param_2[1] - iVar13 >> 5;
      if (uVar7 == 0) {
LAB_003911f0:
        local_38 = 0;
        pbVar11 = (byte *)((int)puVar22 + uVar15 * 2);
        local_48 = 0;
        local_3c = 0;
        local_44 = 0;
        local_40 = 0;
        local_34 = 0;
        local_50 = *pbVar11 & 7;
        local_4e = 1;
        bVar23 = (*pbVar11 & 8) != 0;
        local_4a = (ushort)!bVar23;
        local_4c = (ushort)bVar23;
        puVar6 = (ushort *)param_2[1];
        if (puVar6 == (ushort *)param_2[2]) {
          puVar12 = (ushort *)((int)puVar6 - *param_2);
          uVar7 = (int)puVar12 >> 5;
          if (uVar7 < (uint)(param_2[2] - *param_2 >> 5)) {
            if (puVar6 != (ushort *)0x0) {
              puVar12 = puVar6 + -0x10;
            }
            param_2[1] = (int)(puVar6 + 0x10);
            if (puVar6 != (ushort *)0x0) {
              fn_00390bf0(puVar6,puVar12);
            }
            puVar12 = puVar6;
            puVar1 = puVar6 + -0x10;
            while (puVar6 != puVar1) {
              puVar12[-0x10] = puVar1[-0x10];
              puVar12[-0xf] = puVar1[-0xf];
              puVar12[-0xe] = puVar1[-0xe];
              puVar12[-0xd] = puVar1[-0xd];
              fn_0079e834(puVar12 + -0xc,puVar1 + -0xc);
              fn_0079e834(puVar12 + -6,puVar1 + -6);
              puVar12 = puVar12 + -0x10;
              puVar1 = puVar1 + -0x10;
            }
            *puVar6 = local_50;
            puVar6[1] = local_4e;
            puVar6[2] = local_4c;
            puVar6[3] = local_4a;
            fn_0079e834(puVar6 + 4,&local_48);
            fn_0079e834(puVar6 + 10,&local_3c);
          }
          else {
            uVar10 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
            if (uVar10 < uVar7 + 0x20) {
              uVar10 = uVar7 + 0x20;
            }
            iVar5 = fn_00100fc6(uVar10 << 5,0);
            iVar13 = iVar5;
            for (puVar12 = (ushort *)*param_2; puVar12 != puVar6; puVar12 = puVar12 + 0x10) {
              if (iVar13 != 0) {
                fn_00390bf0(iVar13,puVar12);
              }
              iVar13 = iVar13 + 0x20;
            }
            iVar13 = iVar5 + ((int)puVar6 - *param_2 & 0xffffffe0U);
            if (iVar13 != 0) {
              fn_00390bf0(iVar13,&local_50);
            }
            puVar12 = (ushort *)param_2[1];
            iVar13 = iVar5 + ((int)puVar6 - *param_2 & 0xffffffe0U);
            for (; puVar6 != puVar12; puVar6 = puVar6 + 0x10) {
              iVar13 = iVar13 + 0x20;
              if (iVar13 != 0) {
                fn_00390bf0(iVar13,puVar6);
              }
            }
            iVar13 = *param_2;
            iVar19 = param_2[1];
            local_2c = iVar19 - iVar13 >> 5;
            for (; iVar13 != iVar19; iVar13 = iVar13 + 0x20) {
              uVar4 = *(uint *)(iVar13 + 0x14);
              uVar7 = uVar4;
              if (*(uint *)(iVar13 + 0x18) < uVar4) {
                do {
                  uVar7 = uVar7 + 2;
                } while (uVar7 != *(uint *)(iVar13 + 0x18));
              }
              fn_001008c4(uVar4,(int)(*(int *)(iVar13 + 0x1c) - uVar4) >> 1,0);
              uVar4 = *(uint *)(iVar13 + 8);
              uVar7 = uVar4;
              if (*(uint *)(iVar13 + 0xc) < uVar4) {
                do {
                  uVar7 = uVar7 + 2;
                } while (uVar7 != *(uint *)(iVar13 + 0xc));
              }
              fn_001008c4(uVar4,(int)(*(int *)(iVar13 + 0x10) - uVar4) >> 1,0);
            }
            fn_001008c4(*param_2,param_2[2] - *param_2 >> 5,0);
            *param_2 = iVar5;
            param_2[2] = iVar5 + uVar10 * 0x20;
            param_2[1] = iVar5 + local_2c * 0x20 + 0x20;
          }
        }
        else {
          param_2[1] = (int)(puVar6 + 0x10);
          if (puVar6 != (ushort *)0x0) {
            fn_00390bf0(puVar6,&local_50);
          }
        }
        uVar7 = local_3c;
        if (local_38 < local_3c) {
          do {
            uVar7 = uVar7 + 2;
          } while (uVar7 != local_38);
        }
        fn_001008c4(local_3c,(int)(local_34 - local_3c) >> 1,0);
        unaff_r5 = &local_48;
        uVar7 = local_48;
        if (local_44 < local_48) {
          do {
            uVar7 = uVar7 + 2;
          } while (uVar7 != local_44);
        }
        fn_001008c4(local_48,(int)(local_40 - local_48) >> 1,0);
      }
      else {
        do {
          unaff_r5 = (uint *)(uint)*(ushort *)(iVar13 + uVar4 * 0x20);
          if (unaff_r5 == (uint *)(*(byte *)((int)puVar22 + uVar15 * 2) & 7)) {
            uVar10 = uVar4;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar7);
        if (uVar10 == 0xffffffff) goto LAB_003911f0;
        iVar13 = iVar13 + uVar10 * 0x20;
        *(short *)(iVar13 + 2) = *(short *)(iVar13 + 2) + 1;
        bVar23 = (*(byte *)((int)puVar22 + uVar15 * 2) & 8) == 0;
        iVar13 = *param_2 + uVar10 * 0x20;
        if (bVar23) {
          sVar8 = *(short *)(iVar13 + 6);
        }
        else {
          sVar8 = *(short *)(iVar13 + 4);
        }
        if (bVar23) {
          *(short *)(iVar13 + 6) = sVar8 + 1;
        }
        else {
          *(short *)(iVar13 + 4) = sVar8 + 1;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < (uint)((int)puVar14 - (int)puVar22 >> 1));
  }
  uVar15 = 0;
  if (param_4[1] - *param_4 >> 1 != 0) {
    do {
      uVar3 = fn_006c9514(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),
                           (int)*(short *)(*param_4 + uVar15 * 2));
      iVar13 = *param_2;
      unaff_r5 = (uint *)0x0;
      if (param_2[1] - iVar13 >> 5 != 0) {
        do {
          puVar6 = (ushort *)(iVar13 + (int)unaff_r5 * 0x20);
          if (*puVar6 == (uVar3 & 7)) {
            iVar13 = *param_4;
            if ((uVar3 & 8) == 0) {
              puVar21 = *(undefined2 **)(puVar6 + 0xc);
              if (puVar21 == *(undefined2 **)(puVar6 + 0xe)) goto code_r0x00391628;
              *(undefined2 **)(puVar6 + 0xc) = puVar21 + 1;
            }
            else {
              puVar21 = *(undefined2 **)(puVar6 + 6);
              if (puVar21 == *(undefined2 **)(puVar6 + 8)) {
code_r0x00391628:
                fn_0079e460();
                goto LAB_0039165c;
              }
              *(undefined2 **)(puVar6 + 6) = puVar21 + 1;
            }
            if (puVar21 != (undefined2 *)0x0) {
              *puVar21 = *(undefined2 *)(iVar13 + uVar15 * 2);
            }
          }
LAB_0039165c:
          iVar13 = *param_2;
          unaff_r5 = (uint *)((int)unaff_r5 + 1);
        } while (unaff_r5 < (uint *)(param_2[1] - iVar13 >> 5));
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < (uint)(param_4[1] - *param_4 >> 1));
  }
  puVar21 = (undefined2 *)param_2[1];
  puVar20 = (undefined2 *)*param_2;
  if (puVar21 != puVar20) {
    do {
      if ((*(int *)(puVar20 + 6) - *(int *)(puVar20 + 4) >> 1 == 0) &&
         (*(int *)(puVar20 + 0xc) - *(int *)(puVar20 + 10) >> 1 == 0)) {
        puVar18 = (undefined2 *)param_2[1];
        puVar2 = puVar20;
        puVar21 = puVar20;
        if ((undefined2 *)*param_2 != puVar18) {
          while (puVar21 = puVar21 + 0x10, puVar21 != puVar18) {
            *puVar2 = *puVar21;
            puVar2[1] = puVar21[1];
            puVar2[2] = puVar21[2];
            puVar2[3] = puVar21[3];
            fn_0079e834(puVar2 + 4,puVar21 + 4);
            fn_0079e834(puVar2 + 10,puVar21 + 10);
            puVar2 = puVar2 + 0x10;
          }
          iVar13 = param_2[1];
          unaff_r5 = (uint *)(iVar13 + -0xc);
          uVar7 = *(uint *)(iVar13 + -0xc);
          uVar15 = uVar7;
          if (*(uint *)(iVar13 + -8) < uVar7) {
            do {
              uVar15 = uVar15 + 2;
            } while (uVar15 != *(uint *)(iVar13 + -8));
          }
          fn_001008c4(uVar7,(int)(*(int *)(iVar13 + -4) - uVar7) >> 1,0);
          uVar7 = *(uint *)(iVar13 + -0x18);
          uVar15 = uVar7;
          if (*(uint *)(iVar13 + -0x14) <= uVar7) {
            for (; uVar15 != *(uint *)(iVar13 + -0x14); uVar15 = uVar15 + 2) {
            }
          }
          fn_001008c4(uVar7,(int)(*(int *)(iVar13 + -0x10) - uVar7) >> 1,0);
          param_2[1] = param_2[1] + -0x20;
        }
      }
      else {
        puVar20 = puVar20 + 0x10;
      }
      puVar21 = (undefined2 *)param_2[1];
    } while (puVar21 != puVar20);
  }
  iVar13 = *param_2;
  uVar15 = 0;
  if ((int)puVar21 - iVar13 >> 5 != 0) {
    do {
      iVar13 = iVar13 + uVar15 * 0x20;
      puVar16 = *(uint **)(iVar13 + 8);
      puVar17 = *(uint **)(iVar13 + 0xc);
      if (puVar16 != puVar17) {
        unaff_r5 = (uint *)((int)puVar16 + 2);
      }
      puVar9 = unaff_r5;
      if (puVar16 != puVar17 && unaff_r5 != puVar17) {
        do {
          iVar13 = fn_00163868(((int)puVar9 - (int)puVar16 >> 1) + 1);
          puVar21 = (undefined2 *)((int)puVar16 + iVar13 * 2);
          uVar7 = *puVar9;
          unaff_r5 = (uint *)((int)puVar9 + 2);
          *(undefined2 *)puVar9 = *puVar21;
          *puVar21 = (short)uVar7;
          puVar9 = unaff_r5;
        } while (unaff_r5 != puVar17);
      }
      iVar13 = *param_2 + uVar15 * 0x20;
      puVar16 = *(uint **)(iVar13 + 0x14);
      puVar17 = *(uint **)(iVar13 + 0x18);
      if (puVar16 != puVar17) {
        unaff_r5 = (uint *)((int)puVar16 + 2);
      }
      puVar9 = unaff_r5;
      if (puVar16 != puVar17 && unaff_r5 != puVar17) {
        do {
          iVar13 = fn_00163868(((int)puVar9 - (int)puVar16 >> 1) + 1);
          puVar21 = (undefined2 *)((int)puVar16 + iVar13 * 2);
          uVar7 = *puVar9;
          unaff_r5 = (uint *)((int)puVar9 + 2);
          *(undefined2 *)puVar9 = *puVar21;
          *puVar21 = (short)uVar7;
          puVar9 = unaff_r5;
        } while (unaff_r5 != puVar17);
      }
      iVar13 = *param_2;
      uVar15 = uVar15 + 1;
    } while (uVar15 < (uint)(param_2[1] - iVar13 >> 5));
  }
  fn_00107aa4(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4));
  puVar16 = puVar22;
  if (puVar14 < puVar22) {
    do {
      puVar16 = (uint *)((int)puVar16 + 2);
    } while (puVar16 != puVar14);
  }
  fn_002feef8(puVar22,(int)local_5c - (int)puVar22 >> 1,0);
  return;
}


