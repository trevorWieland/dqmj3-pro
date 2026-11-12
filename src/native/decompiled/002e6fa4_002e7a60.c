#include "002e6fa4_002e7a60.h"



/* WARNING: Removing unreachable block (ram,0x002e7668) */
/* WARNING: Removing unreachable block (ram,0x002e7678) */
/* WARNING: Removing unreachable block (ram,0x002e7684) */
/* WARNING: Removing unreachable block (ram,0x002e7690) */

void fn_002e6fa4(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  int *piVar17;
  int *piVar18;
  uint uVar19;
  int *piVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 *local_5c;
  undefined4 local_58;
  uint local_48;
  undefined4 local_44;
  int *local_2c;
  int iStack_28;
  
  puVar13 = (undefined4 *)param_1[6];
  local_2c = param_1;
  iStack_28 = param_2;
  if (puVar13 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar13)(puVar13);
    do {
      if (puVar3 == &DAT_00893ef0) goto LAB_002e6ff0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar13 = (undefined4 *)0x0;
LAB_002e6ff0:
  iVar4 = (**(code **)(*local_2c + 8))(local_2c);
  piVar5 = (int *)fn_001854ac(*(undefined4 *)(iVar4 + 8),local_2c[0x31]);
  piVar7 = local_2c;
  if (local_2c[0x1a] == 0) {
    if (param_2 == 0) {
      fn_002e6cc8(local_2c);
    }
    else if (param_2 == 1) {
      local_2c[0x2a] = puVar13[7];
      iVar9 = local_2c[0x21];
      iVar11 = local_2c[0x22];
      iVar4 = iVar9;
      if (iVar9 != iVar11) {
        for (; iVar4 != iVar11; iVar4 = iVar4 + 0x34) {
          if (*(undefined4 **)(iVar4 + 0x2c) != &DAT_008f9cf4) {
            piVar17 = *(undefined4 **)(iVar4 + 0x2c) + -3;
            iVar14 = *piVar17;
            if ((iVar14 == -1) ||
               ((piVar17 != &DAT_008f9ce8 && (*piVar17 = iVar14 + -1, iVar14 == 0)))) {
              fn_001008c4(*(int *)(iVar4 + 0x2c) + -0xc,*(int *)(*(int *)(iVar4 + 0x2c) + -8) + 8,0
                          );
            }
          }
        }
        piVar7[0x22] = piVar7[0x22] + ((iVar11 - iVar9) / 0x34) * -0x34;
      }
      piVar7 = local_2c;
      local_2c[0x2e] = 0;
      iVar4 = (**(code **)(*local_2c + 8))(local_2c);
      iVar4 = fn_00178f9c(*(undefined4 *)(iVar4 + 8),piVar7[0x30]);
      *(byte *)(*(int *)(iVar4 + 0x10) + 0x44) = *(byte *)(*(int *)(iVar4 + 0x10) + 0x44) & 0xfe | 1
      ;
      iVar4 = fn_003ba200(puVar13,local_2c[0x2a]);
      if (iVar4 == 0) {
        *(byte *)(local_2c[0x27] + 0x44) = *(byte *)(local_2c[0x27] + 0x44) & 0xfe;
        uVar10 = fn_0022f584((char *)&DAT_002e7a18,0);
        fn_00190d50(local_2c[0x28],uVar10);
        fn_0031c810(local_2c[0x1f],0,1,0,1);
        fn_00190d50(local_2c[0x29],&LAB_002e7a2c);
      }
      else {
        local_48 = 0;
        do {
          local_44 = fn_003ba178(puVar13,local_2c[0x2a] + local_48 + 2);
          iVar4 = fn_002febd8();
          if (iVar4 == 0) break;
          fn_0017a1d4(local_2c[0x20]);
          uVar10 = fn_003ba13c(puVar13,local_2c[0x2a] + local_48 + 3);
          fn_0017a18c(local_2c[0x20],uVar10);
          iVar4 = fn_002913e0(local_2c[0x20]);
          local_2c[0x2e] = local_2c[0x2e] + iVar4;
          do {
            local_84 = 0xffffffff;
            local_80 = 0xffffffff;
            local_88 = 0;
            local_5c = &DAT_008f9cf4;
            local_58 = 0;
            fn_002fec40(&local_7c,local_44);
            iVar4 = fn_006b8954(local_2c[0x20]);
            if (iVar4 != 0) {
              fn_00291670(local_2c[0x20],0);
            }
            fn_00291664(local_2c[0x20]);
            uVar10 = fn_00290c1c(local_2c[0x20],0);
            uVar16 = local_5c[-1];
            uVar6 = fn_00100b58(uVar10);
            fn_00177c88(&local_5c,uVar16,0,uVar10,uVar6,0,uVar6);
            piVar7 = local_2c;
            piVar17 = local_2c + 0x22;
            puVar3 = (undefined4 *)*piVar17;
            piVar18 = local_2c + 0x21;
            if (puVar3 == (undefined4 *)local_2c[0x23]) {
              piVar20 = (int *)0x4ec4ec4f;
              uVar1 = ((int)puVar3 - *piVar18) / 0x34;
              if (uVar1 < (uint)((local_2c[0x23] - *piVar18) / 0x34)) {
                *piVar17 = (int)(puVar3 + 0xd);
                if (puVar3 != (undefined4 *)0x0) {
                  fn_002e7a60(puVar3,puVar3 + -0xd);
                }
                puVar15 = puVar3;
                puVar2 = puVar3 + -0xd;
                while (puVar3 != puVar2) {
                  piVar17 = puVar15 + -2;
                  puVar15[-0xd] = puVar2[-0xd];
                  puVar15[-0xc] = puVar2[-0xc];
                  puVar15[-0xb] = puVar2[-0xb];
                  uVar10 = puVar2[-9];
                  uVar6 = puVar2[-8];
                  uVar16 = puVar2[-7];
                  uVar22 = puVar2[-6];
                  uVar23 = puVar2[-5];
                  uVar24 = puVar2[-4];
                  uVar25 = puVar2[-3];
                  puVar15[-10] = puVar2[-10];
                  puVar15[-9] = uVar10;
                  puVar15[-8] = uVar6;
                  puVar15[-7] = uVar16;
                  puVar15[-6] = uVar22;
                  puVar15[-5] = uVar23;
                  puVar15[-4] = uVar24;
                  puVar15[-3] = uVar25;
                  piVar18 = puVar2 + -2;
                  iVar4 = *piVar18;
                  piVar7 = (int *)(iVar4 + -0xc);
                  if (*piVar7 == -1) {
                    if (piVar17 != piVar18) {
                      fn_00177c88(piVar17,0,*(undefined4 *)(*piVar17 + -4),iVar4,
                                   *(undefined4 *)(iVar4 + -4),0,*(undefined4 *)(iVar4 + -4));
                    }
                  }
                  else {
                    if (piVar7 != &DAT_008f9ce8) {
                      *piVar7 = *piVar7 + 1;
                    }
                    if ((undefined4 *)*piVar17 != &DAT_008f9cf4) {
                      piVar7 = (undefined4 *)*piVar17 + -3;
                      iVar4 = *piVar7;
                      if ((iVar4 == -1) ||
                         ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar4 + -1, iVar4 == 0)))) {
                        fn_001008c4(*piVar17 + -0xc,*(int *)(*piVar17 + -8) + 8,0);
                      }
                    }
                    *piVar17 = *piVar18;
                  }
                  puVar15[-1] = puVar2[-1];
                  puVar15 = puVar15 + -0xd;
                  puVar2 = puVar2 + -0xd;
                }
                *puVar3 = local_88;
                puVar3[1] = local_84;
                puVar3[2] = local_80;
                puVar3[3] = local_7c;
                puVar3[4] = uStack_78;
                puVar3[5] = uStack_74;
                puVar3[6] = uStack_70;
                puVar3[7] = uStack_6c;
                puVar3[8] = uStack_68;
                puVar3[9] = uStack_64;
                puVar3[10] = uStack_60;
                fn_007854f8(puVar3 + 0xb,&local_5c);
                puVar3[0xc] = local_58;
              }
              else {
                uVar19 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
                if (uVar19 < uVar1 + 0x20) {
                  uVar19 = uVar1 + 0x20;
                }
                iVar11 = fn_00100fc6(uVar19 * 0x34,0);
                iVar4 = iVar11;
                for (puVar15 = (undefined4 *)*piVar18; puVar15 != puVar3; puVar15 = puVar15 + 0xd) {
                  if (iVar4 != 0) {
                    fn_002e7a60(iVar4,puVar15);
                  }
                  iVar4 = iVar4 + 0x34;
                }
                iVar4 = iVar11 + (((int)puVar3 - *piVar18) / 0x34) * 0x34;
                if (iVar4 != 0) {
                  fn_002e7a60(iVar4,&local_88);
                }
                puVar15 = (undefined4 *)*piVar17;
                iVar4 = iVar11 + (((int)puVar3 - *piVar18) / 0x34) * 0x34;
                for (; puVar3 != puVar15; puVar3 = puVar3 + 0xd) {
                  iVar4 = iVar4 + 0x34;
                  if (iVar4 != 0) {
                    fn_002e7a60(iVar4,puVar3);
                  }
                }
                iVar4 = *piVar18;
                iVar14 = *piVar17;
                iVar9 = iVar14 - iVar4;
                bVar21 = iVar4 != iVar14;
                if (bVar21) {
                  piVar20 = &DAT_008f9ce8;
                }
                while (bVar21) {
                  if (*(undefined4 **)(iVar4 + 0x2c) != &DAT_008f9cf4) {
                    piVar8 = *(undefined4 **)(iVar4 + 0x2c) + -3;
                    iVar12 = *piVar8;
                    if ((iVar12 == -1) ||
                       ((piVar8 != piVar20 && (*piVar8 = iVar12 + -1, iVar12 == 0)))) {
                      fn_001008c4(*(int *)(iVar4 + 0x2c) + -0xc,
                                   *(int *)(*(int *)(iVar4 + 0x2c) + -8) + 8,0);
                    }
                  }
                  iVar4 = iVar4 + 0x34;
                  bVar21 = iVar4 != iVar14;
                }
                fn_001008c4(*piVar18,(piVar7[0x23] - *piVar18) / 0x34,0);
                *piVar18 = iVar11;
                *piVar17 = iVar11 + (iVar9 / 0x34) * 0x34 + 0x34;
                piVar7[0x23] = iVar11 + uVar19 * 0x34;
              }
            }
            else {
              *piVar17 = (int)(puVar3 + 0xd);
              if (puVar3 != (undefined4 *)0x0) {
                fn_002e7a60(puVar3,&local_88);
              }
            }
            if (local_5c != &DAT_008f9cf4) {
              piVar7 = local_5c + -3;
              iVar4 = *piVar7;
              if ((iVar4 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar4 + -1, iVar4 == 0)))
                 ) {
                fn_001008c4(local_5c + -3,local_5c[-2] + 8,0);
              }
            }
            iVar4 = fn_006b8970(local_2c[0x20]);
          } while (iVar4 == 0);
          local_48 = local_48 + 2;
        } while (local_48 < (uint)(puVar13[6] << 1));
        local_2c[0x2e] = local_2c[0x2e] + -1;
        fn_002e6e84(local_2c,local_2c[0x2b]);
        *(byte *)(local_2c[0x27] + 0x44) = *(byte *)(local_2c[0x27] + 0x44) & 0xfe | 1;
        fn_00190d50(local_2c[0x27],*(undefined4 *)(local_2c[0x21] + local_2c[0x2b] * 0x34 + 0x2c));
        uVar10 = fn_003ba190(puVar13);
        fn_00190d50(local_2c[0x28],uVar10);
        uVar10 = fn_002e6dac(local_2c,local_2c[0x2b]);
        fn_00190d50(local_2c[0x29],uVar10);
        fn_0031c810(local_2c[0x1f],local_2c[0x2b],(local_2c[0x22] - local_2c[0x21]) / 0x34,0,1);
        (**(code **)(*piVar5 + 0x50))(piVar5,0);
      }
      local_2c[0x1c] = 1;
      goto LAB_002e7044;
    }
  }
  else if (local_2c[0x1a] == 1) {
    if ((param_2 != 0) && (param_2 == 1)) {
      if (puVar13[7] == local_2c[0x2a]) {
        iVar11 = local_2c[0x21];
        iVar4 = local_2c[0x22] - iVar11 >> 0x1f;
        if ((local_2c[0x22] - iVar11) / 0x34 + iVar4 == iVar4) {
          local_2c[0x2b] = local_2c[0x2c];
        }
        else if (local_2c[0x2b] != local_2c[0x2c]) {
          iVar14 = iVar11 + local_2c[0x2c] * 0x34;
          iVar11 = iVar11 + local_2c[0x2b] * 0x34;
          iVar4 = fn_003035b0(iVar14 + 0xc,iVar11 + 0xc);
          iVar9 = *(int *)(iVar14 + 0x30);
          if (iVar4 == 0) {
            *(int *)(iVar11 + 0x30) = iVar9;
            *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar14 + 4);
            *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar14 + 8);
          }
          else {
            *(byte *)(iVar9 + 0x44) = *(byte *)(iVar9 + 0x44) & 0xfe;
            fn_002e6e84(local_2c,local_2c[0x2b]);
          }
          uVar10 = fn_002e6dac(local_2c,local_2c[0x2b]);
          fn_00190d50(local_2c[0x29],uVar10);
          fn_00190d50(local_2c[0x27],*(undefined4 *)(local_2c[0x21] + local_2c[0x2b] * 0x34 + 0x2c)
                      );
          fn_0031c810(local_2c[0x1f],local_2c[0x2b],(local_2c[0x22] - local_2c[0x21]) / 0x34,0,1);
          local_2c[0x2c] = local_2c[0x2b];
        }
      }
      else {
        local_2c[0x1c] = 0;
      }
      goto LAB_002e7044;
    }
  }
  else if (param_2 == 1) {
LAB_002e7044:
    (**(code **)(*piVar5 + 0xc))(piVar5);
                    /* WARNING: Could not recover jumptable at 0x002e707c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar5 + 0x14))(piVar5);
    return;
  }
  return;
}



undefined4 * fn_002e7a60(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar3 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar12 = param_2[10];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar8;
  param_1[8] = uVar9;
  param_1[9] = uVar10;
  param_1[10] = uVar12;
  iVar1 = param_2[0xb];
  puVar11 = &DAT_008f9ce8;
  if (*(int *)(iVar1 + -0xc) == -1) {
    uVar7 = *(uint *)(iVar1 + -4);
    if (0xfffffff1 < uVar7) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0xfffffff1);
    }
    if (uVar7 != 0) {
      puVar11 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
      }
      puVar11[1] = uVar7;
      puVar4 = (undefined2 *)((int)puVar11 + uVar7 * 2 + 0xc);
      *puVar11 = 0;
      puVar11[2] = uVar7;
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    param_1[0xb] = puVar11 + 3;
    fn_00301a9c(puVar11 + 3,param_2[0xb],uVar7 << 1);
  }
  else {
    param_1[0xb] = iVar1;
    piVar2 = (int *)(iVar1 + -0xc);
    if (piVar2 != &DAT_008f9ce8) {
      *piVar2 = *piVar2 + 1;
    }
  }
  param_1[0xc] = param_2[0xc];
  return param_1;
}


