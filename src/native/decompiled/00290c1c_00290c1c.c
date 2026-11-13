#include "00290c1c_00290c1c.h"



/* WARNING: Removing unreachable block (ram,0x00290fd8) */
/* WARNING: Removing unreachable block (ram,0x00290d04) */

undefined4 fn_00290c1c(int param_1,int *param_2)

{
  short sVar1;
  bool bVar2;
  undefined1 uVar3;
  short *psVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  uint uVar9;
  int *piVar10;
  undefined4 **ppuVar11;
  int iVar12;
  undefined4 ***pppuVar13;
  uint uVar14;
  undefined4 ***pppuVar15;
  undefined4 *puVar16;
  char cVar17;
  undefined4 **ppuVar18;
  uint uVar19;
  undefined4 **ppuVar20;
  int iVar21;
  uint in_fpscr;
  float in_s0;
  undefined4 uVar22;
  undefined4 **local_a0;
  undefined4 local_9c;
  undefined4 **local_98;
  undefined4 *local_94;
  undefined2 local_90 [2];
  undefined4 **local_8c;
  uint local_84 [15];
  undefined4 *local_48 [7];
  int iStack_2c;
  int *local_28;
  
  pppuVar15 = &local_a0;
  if (*(int *)(param_1 + 0x10) < 1) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
    *(undefined1 *)(param_1 + 0x1c) = 0xff;
    cVar17 = *(char *)(param_1 + 0x1d);
    *(undefined1 *)(param_1 + 0x1d) = 0;
    uVar19 = *(uint *)(param_1 + 0xc);
    if ((uVar19 < *(uint *)(*(int *)(param_1 + 4) + -4)) && (*(char *)(param_1 + 0x1e) == '\0')) {
      puVar16 = &DAT_008f9cf4;
      iStack_2c = param_1;
      local_28 = param_2;
      do {
        if (*(uint *)(*(int *)(param_1 + 4) + -4) <= *(uint *)(param_1 + 0xc)) break;
        psVar4 = (short *)fn_00785320(param_1 + 4);
        sVar1 = *psVar4;
        if (sVar1 == 0) {
LAB_00290f34:
          cVar17 = '\0';
          bVar2 = false;
        }
        else if (sVar1 == 1) {
          uVar14 = *(int *)(param_1 + 0xc) + 1;
          *(uint *)(param_1 + 0xc) = uVar14;
          uVar9 = *(uint *)(*(int *)(param_1 + 4) + -4);
          if (uVar9 <= uVar14) {
            *(uint *)(param_1 + 0xc) = uVar9;
            uVar14 = uVar9;
          }
          puVar5 = (ushort *)fn_00785320(param_1 + 4,uVar14);
          uVar14 = (uint)*puVar5;
          iVar21 = uVar14 - 0x117;
          if (uVar14 == 0x117) {
switchD_00290d78_caseD_102:
            puVar5 = (ushort *)fn_00785320(param_1 + 4,*(undefined4 *)(param_1 + 0xc));
            uVar3 = (undefined1)(*puVar5 - 0x102);
            if (0x25 < (int)(*puVar5 - 0x102)) {
              uVar3 = 0xff;
            }
            *(undefined1 *)(param_1 + 0x1c) = uVar3;
            uVar9 = *(int *)(param_1 + 0xc) + 1;
            *(uint *)(param_1 + 0xc) = uVar9;
            uVar14 = *(uint *)(*(int *)(param_1 + 4) + -4);
            if (uVar14 <= uVar9) {
LAB_00290f80:
              *(uint *)(param_1 + 0xc) = uVar14;
            }
          }
          else {
            if (uVar14 < 0x117) {
              switch(uVar14) {
              case 0x101:
                *(undefined1 *)(param_1 + 0x1e) = 1;
                goto LAB_00290f34;
              case 0x102:
              case 0x103:
              case 0x104:
              case 0x105:
              case 0x106:
              case 0x107:
              case 0x108:
              case 0x109:
              case 0x10a:
              case 0x10b:
              case 0x10c:
              case 0x10d:
              case 0x10e:
              case 0x10f:
              case 0x110:
              case 0x111:
              case 0x112:
              case 0x113:
              case 0x114:
              case 0x115:
              case 0x116:
                goto switchD_00290d78_caseD_102;
              default:
                goto switchD_00290d78_default;
              }
            }
            if (iVar21 == 0xc) goto switchD_00290d78_caseD_102;
            if (iVar21 < 0xd) {
              switch(iVar21) {
              default:
                goto switchD_00290d78_default;
              case 1:
              case 2:
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
              case 8:
              case 9:
              case 10:
              case 0xb:
                goto switchD_00290d78_caseD_102;
              }
            }
            if (iVar21 == 0x1ea) {
LAB_00290e9c:
              psVar4 = (short *)fn_00785320(param_1 + 4,*(undefined4 *)(param_1 + 0xc));
              sVar1 = *psVar4;
              if (sVar1 == 0x300) {
                uVar3 = 0;
              }
              else if (sVar1 == 0x301) {
LAB_00290f00:
                uVar3 = 1;
              }
              else if (sVar1 == 0x302) {
                uVar3 = 2;
              }
              else if (sVar1 == 0x303) {
                uVar3 = 3;
              }
              else if (sVar1 == 0x304) {
                uVar3 = 4;
              }
              else {
                if (sVar1 != 0x305) goto LAB_00290f00;
                uVar3 = 5;
              }
              *(undefined1 *)(param_1 + 0x1f) = uVar3;
              uVar9 = *(int *)(param_1 + 0xc) + 1;
              *(uint *)(param_1 + 0xc) = uVar9;
              uVar14 = *(uint *)(*(int *)(param_1 + 4) + -4);
              if (uVar9 < uVar14) goto LAB_00290f84;
              goto LAB_00290f80;
            }
            if (0x1e9 < iVar21) {
              if ((iVar21 != 0x1eb && iVar21 != 0x1ec) && (iVar21 != 0x1ed && iVar21 != 0x1ee))
              goto switchD_00290d78_default;
              goto LAB_00290e9c;
            }
            if (iVar21 == 0xf) goto switchD_00290d78_caseD_102;
            if (iVar21 < 0x10) {
              if (iVar21 == 0xd || iVar21 == 0xe) goto switchD_00290d78_caseD_102;
            }
            else {
              if (iVar21 == 0x10) goto switchD_00290d78_caseD_102;
              if (iVar21 == 0x1e9) goto LAB_00290e9c;
            }
switchD_00290d78_default:
            uVar9 = *(int *)(param_1 + 0xc) + 1;
            *(uint *)(param_1 + 0xc) = uVar9;
            uVar14 = *(uint *)(*(int *)(param_1 + 4) + -4);
            if (uVar14 <= uVar9) goto LAB_00290f80;
          }
LAB_00290f84:
          bVar2 = true;
        }
        else if (sVar1 == 2) {
          local_8c = local_48;
          local_98 = (undefined4 **)0xffffffff;
          ppuVar18 = *(undefined4 ***)(param_1 + 0xc);
          ppuVar11 = *(undefined4 ***)(*(int *)(param_1 + 4) + -4);
          if (ppuVar11 < ppuVar18) {
            local_a0 = ppuVar11;
            fn_002ff628(9,&DAT_008c75f9,&DAT_008c75f9,ppuVar18);
          }
          uVar14 = *(int *)(*(int *)(param_1 + 4) + -4) - (int)ppuVar18;
          iVar21 = *(int *)(param_1 + 4) + (int)ppuVar18 * 2;
          local_98 = local_8c;
          if (0xfffffff1 < uVar14) {
            local_a0 = (undefined4 **)0xfffffff1;
            fn_002ff628(8,&DAT_008c7612,&DAT_008c7612,uVar14);
          }
          puVar6 = puVar16;
          if (uVar14 != 0) {
            pppuVar13 = &local_a0;
            if (0x20 < uVar14) {
              pppuVar13 = (undefined4 ***)local_84;
            }
            local_a0 = (undefined4 **)&DAT_00000020;
            local_84[0] = uVar14;
            iVar12 = fn_00168984(local_98,*pppuVar13,uVar14);
            puVar6 = (undefined4 *)(iVar12 + 0xc);
          }
          local_48[0] = puVar6;
          if (iVar21 != 0) {
            fn_00301a9c(puVar6,iVar21,uVar14 * 2);
          }
          iVar21 = fn_00230b74(local_48[0]);
          iVar21 = iVar21 + 1;
          uVar7 = fn_001287d4(iVar21 * 2,&DAT_00812c8c);
          fn_0022f774(uVar7,iVar21,local_48[0]);
          fn_00191580(local_90);
          (**(code **)(*local_28 + 0x70))(local_28,local_90);
          fn_001915c8(local_90,uVar7,iVar21);
          bVar2 = true;
          uVar22 = VectorSignedToFloat((int)in_s0 + 1U & 0xfffffffe,(byte)(in_fpscr >> 0x16) & 3);
          puVar8 = (undefined2 *)fn_00785320(param_1 + 4,*(int *)(param_1 + 0xc) + 1);
          in_s0 = (float)VectorFloatToUnsigned(uVar22,3);
          *puVar8 = SUB42(in_s0,0);
          fn_002feca8(uVar7);
          fn_001915c4(local_90);
          uVar14 = *(int *)(param_1 + 0xc) + 1;
          *(uint *)(param_1 + 0xc) = uVar14;
          uVar9 = *(uint *)(*(int *)(param_1 + 4) + -4);
          if (uVar9 <= uVar14) {
            *(uint *)(param_1 + 0xc) = uVar9;
            uVar14 = uVar9;
          }
          *(uint *)(param_1 + 0xc) = uVar14 + 1;
          uVar9 = *(uint *)(*(int *)(param_1 + 4) + -4);
          if (uVar9 <= uVar14 + 1) {
            *(uint *)(param_1 + 0xc) = uVar9;
          }
          if (local_48[0] != &DAT_008f9cf4) {
            piVar10 = local_48[0] + -3;
            iVar21 = *piVar10;
            if ((iVar21 == -1) ||
               ((piVar10 != &DAT_008f9ce8 && (*piVar10 = iVar21 + -1, iVar21 == 0)))) {
              fn_001008c4(local_48[0] + -3,local_48[0][-2] + 8,0);
            }
          }
        }
        else {
          bVar2 = false;
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        }
      } while (cVar17 != '\0' || bVar2);
      if (*(uint *)(param_1 + 0xc) != uVar19) {
        ppuVar20 = *(undefined4 ***)(param_1 + 8);
        ppuVar18 = (undefined4 **)(param_1 + 0x18);
        uVar19 = *(uint *)(param_1 + 0xc) - (int)ppuVar20;
        ppuVar11 = *(undefined4 ***)(*(int *)(param_1 + 4) + -4);
        if (ppuVar11 < ppuVar20) {
          local_a0 = ppuVar11;
          fn_002ff628(9,&DAT_008c75f9,&DAT_008c75f9,ppuVar20);
        }
        uVar14 = *(int *)(*(int *)(param_1 + 4) + -4) - (int)ppuVar20;
        if (uVar14 <= uVar19) {
          uVar19 = uVar14;
        }
        iVar21 = *(int *)(param_1 + 4) + (int)ppuVar20 * 2;
        if (0xfffffff1 < uVar19) {
          local_a0 = (undefined4 **)0xfffffff1;
          fn_002ff628(8,&DAT_008c7612,&DAT_008c7612,uVar19);
        }
        if (uVar19 != 0) {
          if (0x20 < uVar19) {
            pppuVar15 = (undefined4 ***)local_84;
          }
          local_a0 = (undefined4 **)&DAT_00000020;
          local_84[0] = uVar19;
          iVar12 = fn_00168984(&local_94,*pppuVar15,uVar19);
          puVar16 = (undefined4 *)(iVar12 + 0xc);
        }
        local_94 = puVar16;
        if (iVar21 != 0) {
          fn_00301a9c(puVar16,iVar21,uVar19 << 1);
        }
        piVar10 = local_94 + -3;
        if (*piVar10 == -1) {
          if (ppuVar18 != &local_94) {
            local_a0 = (undefined4 **)local_94[-1];
            local_9c = 0;
            local_98 = local_a0;
            fn_00177c88(ppuVar18,0,(*ppuVar18)[-1]);
          }
        }
        else {
          if (piVar10 != &DAT_008f9ce8) {
            *piVar10 = *piVar10 + 1;
          }
          if (*ppuVar18 != &DAT_008f9cf4) {
            piVar10 = *ppuVar18 + -3;
            iVar21 = *piVar10;
            if ((iVar21 == -1) ||
               ((piVar10 != &DAT_008f9ce8 && (*piVar10 = iVar21 + -1, iVar21 == 0)))) {
              fn_001008c4(*ppuVar18 + -3,(*ppuVar18)[-2] + 8,0);
            }
          }
          *ppuVar18 = local_94;
        }
        if (local_94 != &DAT_008f9cf4) {
          piVar10 = local_94 + -3;
          iVar21 = *piVar10;
          if ((iVar21 == -1) ||
             ((piVar10 != &DAT_008f9ce8 && (*piVar10 = iVar21 + -1, iVar21 == 0)))) {
            fn_001008c4(local_94 + -3,local_94[-2] + 8,0);
          }
        }
        switch(*(undefined1 *)(param_1 + 0x1f)) {
        default:
          if (*(uint *)(*(int *)(param_1 + 4) + -4) <= *(uint *)(param_1 + 0xc)) {
            *(undefined4 *)(param_1 + 0x14) = 0;
          }
          return *(undefined4 *)(param_1 + 0x18);
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          break;
        case 5:
        }
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      local_90[0] = 0;
      local_a0 = (undefined4 **)0x0;
      local_9c = 0;
      local_98 = (undefined4 **)0x0;
      fn_00177c88(param_1 + 0x18,0,*(undefined4 *)(*(int *)(param_1 + 0x18) + -4),local_90);
    }
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  }
  return 0;
}


