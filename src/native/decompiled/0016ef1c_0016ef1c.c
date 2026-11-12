#include "0016ef1c_0016ef1c.h"



uint * fn_0016ef1c(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  undefined2 uVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ushort *puVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  undefined2 *puVar21;
  bool bVar22;
  undefined1 auStack_2b0 [8];
  undefined4 local_2a8;
  ushort local_2a4 [38];
  int local_258;
  uint local_254;
  uint local_244;
  uint auStack_ac [9];
  uint local_88;
  ushort *local_84;
  int local_80;
  ushort *local_78;
  uint local_74;
  int local_70;
  int local_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  int local_34;
  undefined4 *local_30;
  int iStack_2c;
  int local_28;
  
  local_28 = param_4;
  iStack_2c = param_3;
  local_30 = param_2;
  local_34 = param_1;
  bVar22 = -1 < *(int *)(param_1 + 4);
  local_5c = 0;
  iVar13 = param_3;
  if (bVar22) {
    local_5c = 1;
    iVar13 = param_4;
  }
  local_5c = (uint)bVar22;
  local_88 = 0;
  uVar16 = 0;
  local_60 = 0;
  local_58 = 0;
  local_80 = 0;
  local_54 = param_1 + param_3 * 4;
  local_70 = *(int *)(param_1 + iVar13 * 4 + 0x10);
  if ((local_5c == 0) || ((*(byte *)(local_70 + 7) & 1) == 0)) {
    iVar13 = local_70 + *(int *)(local_70 + 0x28);
    if (*(uint *)(local_70 + 0x2c) != 0) {
      puVar7 = (undefined4 *)auStack_2b0;
      iVar11 = iVar13 + -8;
      if ((*(uint *)(local_70 + 0x2c) & 1) != 0) {
        fn_00166824(&local_2a8,iVar13);
        puVar7 = &local_2a8;
        iVar11 = iVar13;
      }
      for (uVar10 = *(uint *)(local_70 + 0x2c) >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
        fn_00166824((undefined1 *)((int)puVar7 + 8),iVar11 + 8);
        puVar7 = (undefined4 *)((int)puVar7 + 0x10);
        iVar11 = iVar11 + 0x10;
        fn_00166824();
      }
    }
    local_80 = *(int *)(local_70 + 0x2c);
  }
  else {
    uVar18 = 0;
    uVar20 = 0;
    local_68 = *(int *)(local_54 + 0x10);
    local_78 = (ushort *)(local_70 + *(int *)(local_70 + 0x28));
    local_84 = (ushort *)(local_68 + *(int *)(local_68 + 0x28));
    uVar10 = 0;
    if (*(int *)(local_70 + 0x2c) != 0) {
      do {
        puVar6 = local_78 + uVar10 * 4;
        if (((*puVar6 < 9) && (*puVar6 != 7)) && (iVar13 = *(int *)(local_68 + 0x2c), iVar13 != 0))
        {
          uVar14 = 0;
          puVar17 = local_84 + uVar10 * 4;
          local_74 = 1 << (uVar10 & 0xff);
          puVar5 = local_84;
          do {
            iVar11 = local_80;
            if (((*puVar17 < 9) && (*puVar17 != 7)) && (*puVar6 == *puVar5)) {
              uVar20 = uVar20 | 1 << (uVar14 & 0xff);
              *(ushort *)(auStack_2b0 + local_80 * 8 + 8) = *puVar6;
              local_2a4[iVar11 * 4 + -1] = (ushort)iVar11;
              uVar18 = uVar18 | local_74;
              local_80 = local_80 + 1;
              local_2a4[iVar11 * 4] = puVar6[2];
            }
            iVar13 = iVar13 + -1;
            puVar5 = puVar5 + 4;
            uVar14 = uVar14 + 1;
          } while (iVar13 != 0);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(local_70 + 0x2c));
    }
    iVar13 = *(int *)(local_70 + 0x2c);
    if (iVar13 != 0) {
      uVar10 = 0;
      puVar5 = local_78 + 2;
      puVar6 = local_78;
      do {
        iVar11 = local_80;
        if ((((uVar18 & 1 << (uVar10 & 0xff)) == 0) && (uVar2 = *puVar6, uVar2 < 9)) && (uVar2 != 7)
           ) {
          iVar1 = local_80 * 8;
          local_80 = local_80 + 1;
          *(ushort *)(auStack_2b0 + iVar1 + 8) = uVar2;
          local_2a4[iVar11 * 4 + -1] = (ushort)iVar11;
          local_2a4[iVar11 * 4] = *puVar5;
        }
        iVar13 = iVar13 + -1;
        puVar6 = puVar6 + 4;
        puVar5 = puVar5 + 4;
        uVar10 = uVar10 + 1;
      } while (iVar13 != 0);
    }
    iVar13 = *(int *)(local_68 + 0x2c);
    if (iVar13 != 0) {
      uVar10 = 0;
      puVar5 = local_84 + 2;
      puVar6 = local_84;
      do {
        iVar11 = local_80;
        if ((((uVar20 & 1 << (uVar10 & 0xff)) == 0) && (uVar2 = *puVar6, uVar2 < 9)) && (uVar2 != 7)
           ) {
          iVar1 = local_80 * 8;
          local_80 = local_80 + 1;
          *(ushort *)(auStack_2b0 + iVar1 + 8) = uVar2;
          local_2a4[iVar11 * 4 + -1] = (ushort)iVar11;
          local_2a4[iVar11 * 4] = *puVar5;
        }
        iVar13 = iVar13 + -1;
        puVar6 = puVar6 + 4;
        puVar5 = puVar5 + 4;
        uVar10 = uVar10 + 1;
      } while (iVar13 != 0);
    }
  }
  uVar10 = 0;
  do {
    iVar13 = 0;
    auStack_ac[uVar10 + 1] = 0x1f1f1f1f;
    if (0 < local_80) {
      do {
        uVar2 = local_2a4[iVar13 * 4];
        uVar3 = *(undefined2 *)(auStack_2b0 + iVar13 * 8 + 8);
        uVar4 = local_2a4[iVar13 * 4 + -1];
        uVar18 = 0;
        for (uVar20 = 0; (uVar4 == uVar10 && ((int)uVar20 < 4)); uVar20 = uVar20 + 1) {
          uVar14 = uVar18;
          if (((uint)uVar2 & 1 << (uVar20 & 0xff)) == 0) goto LAB_0016f350;
          uVar15 = 0x1f;
          switch(uVar3) {
          case 0:
            uVar14 = uVar18 + 1;
            uVar15 = uVar18;
            if (uVar14 == 2) {
              uVar16 = uVar16 | 1;
            }
            break;
          case 1:
            uVar16 = uVar16 | 0x1000000;
            uVar15 = uVar18 + 4;
            goto LAB_0016f2b4;
          case 2:
            uVar16 = uVar16 | 2;
            uVar15 = uVar18 + 8;
LAB_0016f2b4:
            uVar14 = uVar18 + 1;
            break;
          case 3:
            if (uVar18 < 2) {
              uVar15 = uVar18 + 0xc;
              uVar14 = uVar18 + 1;
            }
            uVar16 = uVar16 | 0x100;
            local_60 = 1;
            break;
          case 4:
            uVar16 = uVar16 | 0x10000;
            local_60 = 1;
            uVar15 = 0x10;
            break;
          case 5:
            if (uVar18 < 2) {
              uVar15 = uVar18 + 0xe;
              uVar18 = uVar18 + 1;
            }
            uVar16 = uVar16 | 0x200;
            local_60 = 1;
            uVar14 = uVar18;
            break;
          case 6:
            if (uVar18 < 2) {
              uVar15 = uVar18 + 0x16;
              uVar18 = uVar18 + 1;
            }
            uVar16 = uVar16 | 0x400;
            local_60 = 1;
            uVar14 = uVar18;
            break;
          case 8:
            if (uVar18 < 3) {
              uVar15 = uVar18 + 0x12;
              uVar18 = uVar18 + 1;
            }
            uVar16 = uVar16 | 0x1000000;
            uVar14 = uVar18;
          }
          auStack_ac[uVar10 + 1] =
               uVar15 << (uVar20 << 3 & 0xff) |
               auStack_ac[uVar10 + 1] & ~(0xff << (uVar20 << 3 & 0xff));
LAB_0016f350:
          uVar18 = uVar14;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_80);
      if (auStack_ac[uVar10 + 1] != 0x1f1f1f1f) {
        local_88 = local_88 + 1;
        local_58 = local_58 | 1 << (uVar10 & 0xff);
      }
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 7);
  if (local_5c == 0) {
    *local_30 = 0;
    local_30[1] = 0x80229;
    local_30[2] = 0;
    local_30[3] = 0x10253;
    local_30[4] = 0xa0000000;
    local_30[5] = 0xb0289;
    local_30[6] = *(uint *)(*(int *)(local_54 + 0x10) + 8) | 0x7fff0000;
    local_30[7] = 0xf02ba;
    local_30[8] = local_58;
    local_30[9] = 0xf02bd;
    local_30[10] = local_88 - 1;
    local_30[0xb] = 0xf0251;
    local_30[0xc] = 0;
    local_30[0xd] = 0xf0252;
    local_30[0xe] = local_88 - 1;
    local_30[0xf] = 0xf024a;
    puVar9 = local_30 + 0xf;
  }
  else {
    uVar10 = 0;
    iVar13 = *(int *)(local_54 + 0x10);
    local_258 = 0;
    local_244 = 0;
    iVar11 = *(int *)(iVar13 + 0x28);
    local_254 = *(uint *)(iVar13 + 0x2c);
    do {
      uVar18 = 0;
      *(undefined4 *)(auStack_2b0 + uVar10 * 4 + 8) = 0x1f1f1f1f;
      if (local_254 != 0) {
        do {
          puVar21 = (undefined2 *)(iVar11 + iVar13 + uVar18 * 8);
          uVar2 = puVar21[1];
          uVar20 = 0;
          for (uVar14 = 0; (uVar2 == uVar10 && ((int)uVar14 < 4)); uVar14 = uVar14 + 1) {
            uVar15 = uVar20;
            if (((uint)(ushort)puVar21[2] & 1 << (uVar14 & 0xff)) == 0) goto LAB_0016f4dc;
            uVar12 = 0x1f;
            switch(*puVar21) {
            case 0:
              uVar15 = uVar20 + 1;
              uVar12 = uVar20;
              break;
            case 1:
              uVar12 = uVar20 + 4;
              goto LAB_0016f46c;
            case 2:
              uVar12 = uVar20 + 8;
LAB_0016f46c:
              uVar15 = uVar20 + 1;
              break;
            case 3:
              if (uVar20 < 2) {
                uVar12 = uVar20 + 0xc;
                goto LAB_0016f46c;
              }
              break;
            case 4:
              uVar12 = 0x10;
              break;
            case 5:
              if (uVar20 < 2) {
                uVar12 = uVar20 + 0xe;
                goto LAB_0016f46c;
              }
              break;
            case 6:
              if (uVar20 < 2) {
                uVar12 = uVar20 + 0x16;
                goto LAB_0016f46c;
              }
              break;
            case 8:
              if (uVar20 < 3) {
                uVar12 = uVar20 + 0x12;
                goto LAB_0016f46c;
              }
              break;
            case 9:
              uVar12 = 0xff;
            }
            *(uint *)(auStack_2b0 + uVar10 * 4 + 8) =
                 uVar12 << (uVar14 << 3 & 0xff) |
                 *(uint *)(auStack_2b0 + uVar10 * 4 + 8) & ~(0xff << (uVar14 << 3 & 0xff));
LAB_0016f4dc:
            uVar20 = uVar15;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < local_254);
        if (*(int *)(auStack_2b0 + uVar10 * 4 + 8) != 0x1f1f1f1f) {
          local_258 = local_258 + 1;
          local_244 = local_244 | 1 << (uVar10 & 0xff);
        }
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 0x10);
    local_34 = local_34 + local_28 * 4;
    uVar10 = (uint)*(byte *)(*(int *)(local_34 + 0x10) + 0x14);
    if (uVar10 == 1) {
      *local_30 = 0x80000000;
    }
    else {
      *local_30 = 0;
    }
    local_30[1] = 0xa0229;
    local_30[2] = 0;
    local_30[3] = 0x30253;
    if (uVar10 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = 0x100;
    }
    uVar20 = local_258 - 1;
    local_30[4] = uVar18 | uVar20 | 0x8000000;
    local_30[5] = 0xb0289;
    local_30[6] = *(uint *)(*(int *)(local_34 + 0x10) + 8) | 0x7fff0000;
    local_30[7] = 0xf028a;
    local_30[8] = local_58;
    local_30[9] = 0xf028d;
    local_30[10] = *(uint *)(*(int *)(local_54 + 0x10) + 8) | 0x7fff0000;
    local_30[0xb] = 0xf02ba;
    local_30[0xc] = local_244;
    local_30[0xd] = 0xf02bd;
    local_30[0xe] = uVar20;
    local_30[0xf] = 0xf0251;
    local_30[0x10] = 0x76543210;
    local_30[0x11] = 0xf028b;
    local_30[0x12] = 0xfedcba98;
    puVar8 = local_30 + 0x14;
    local_30[0x13] = 0xf028c;
    if (uVar10 == 1) {
      uVar18 = (uint)*(byte *)(*(int *)(local_34 + 0x10) + 0x16);
      if (uVar18 != 0) {
        *puVar8 = uVar18 - 1;
        puVar8 = local_30 + 0x16;
        local_30[0x15] = 0x10254;
      }
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)*(byte *)(*(int *)(local_34 + 0x10) + 0x17) * 0x100 - 0x100 |
               (uint)*(byte *)(*(int *)(local_34 + 0x10) + 0x15) << 0x10 | 0x1000002 |
               local_258 * 0x1000 - 0x1000U;
    }
    *puVar8 = uVar10;
    puVar8[1] = 0xf0252;
    puVar9 = puVar8 + 3;
    puVar8[2] = uVar20;
    *puVar9 = 0xf024a;
  }
  iVar13 = 0;
  puVar9[1] = local_88 - 1;
  puVar9[2] = 0x1025e;
  iVar11 = 3;
  puVar9[3] = local_88;
  puVar9[4] = 0xf004f;
  puVar9 = puVar9 + 5;
  puVar8 = auStack_ac;
  do {
    uVar10 = puVar8[2];
    if (auStack_ac[1] != 0x1f1f1f1f) {
      uVar18 = iVar13 + 0x50;
      puVar19 = puVar9 + 1;
      *puVar9 = auStack_ac[1];
      iVar13 = iVar13 + 1;
      puVar9 = puVar9 + 2;
      *puVar19 = uVar18 | 0xf0000;
    }
    auStack_ac[1] = puVar8[3];
    if (uVar10 != 0x1f1f1f1f) {
      uVar18 = iVar13 + 0x50;
      puVar19 = puVar9 + 1;
      *puVar9 = uVar10;
      iVar13 = iVar13 + 1;
      puVar9 = puVar9 + 2;
      *puVar19 = uVar18 | 0xf0000;
    }
    iVar11 = iVar11 + -1;
    puVar8 = puVar8 + 2;
  } while (iVar11 != 0);
  if (auStack_ac[7] != 0x1f1f1f1f) {
    uVar10 = iVar13 + 0x50;
    puVar8 = puVar9 + 1;
    *puVar9 = auStack_ac[7];
    iVar13 = iVar13 + 1;
    puVar9 = puVar9 + 2;
    *puVar8 = uVar10 | 0xf0000;
  }
  uVar10 = 7 - iVar13;
  if (0 < (int)uVar10) {
    bVar22 = (uVar10 & 1) != 0;
    puVar8 = puVar9 + -2;
    puVar19 = auStack_ac + iVar13;
    if (bVar22) {
      *puVar9 = auStack_ac[iVar13 + 1];
      puVar9[1] = iVar13 + 0x50U | 0xf0000;
      puVar8 = puVar9;
      puVar19 = auStack_ac + iVar13 + 1;
    }
    uVar18 = (uint)bVar22;
    for (iVar11 = (int)uVar10 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
      puVar8[2] = puVar19[1];
      puVar8[3] = iVar13 + uVar18 + 0x50 | 0xf0000;
      puVar19 = puVar19 + 2;
      puVar8[4] = *puVar19;
      puVar8[5] = iVar13 + uVar18 + 0x51 | 0xf0000;
      uVar18 = uVar18 + 2;
      puVar8 = puVar8 + 4;
    }
    puVar9 = puVar9 + iVar13 * -2 + 0xe;
  }
  *puVar9 = local_60;
  puVar9[1] = 0xf0064;
  puVar9[2] = uVar16;
  puVar8 = puVar9 + 4;
  puVar9[3] = 0xf006f;
  if (local_5c != 0) {
    *puVar8 = 0;
    puVar9[5] = 0x8025e;
    puVar8 = puVar9 + 6;
  }
  return puVar8;
}


