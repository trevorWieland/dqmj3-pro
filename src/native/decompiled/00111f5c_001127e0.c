#include "00111f5c_001127e0.h"



int * fn_001127e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(char *)((int)param_1 + 0x19) = (char)param_1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  piVar1 = (int *)fn_00100fc6(0xc,0,param_3,param_4,param_4);
  iVar2 = fn_00100fc6(0x580,0);
  piVar1[2] = iVar2;
  *piVar1 = *param_1;
  piVar1[1] = 0x20;
  *param_1 = (int)piVar1;
  puVar3 = (undefined1 *)piVar1[2];
  param_1[2] = (int)puVar3;
  param_1[3] = (int)(puVar3 + 0x580);
  param_1[2] = (int)(puVar3 + 0x2c);
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[4] = (int)puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(int *)(param_1[4] + 8) = param_1[4];
  *(int *)(param_1[4] + 0xc) = param_1[4];
  return param_1;
}



/* WARNING: Type propagation algorithm not settling */

void fn_00111f5c(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int **ppiVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined2 *puVar14;
  byte *pbVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  char *pcVar20;
  undefined4 *unaff_r11;
  int iVar21;
  bool bVar22;
  undefined4 *local_1a0;
  int *local_19c;
  int *local_198;
  int *local_194;
  int local_190;
  int local_18c;
  undefined4 *local_184;
  char *local_180;
  char *local_17c;
  int local_178 [64];
  int *local_78;
  int local_74;
  uint local_70;
  undefined1 auStack_6c [24];
  int *local_54;
  int *local_50 [2];
  int *local_48;
  int *local_44;
  undefined1 auStack_40 [8];
  int *local_38;
  uint local_34;
  int *local_28;
  
  iVar2 = *param_1;
  uVar3 = fn_00118290();
  iVar4 = fn_0011c184(L"rom:/data/Layout/PartsList.nut",uVar3,4,5);
  if (iVar4 != 0) {
    fn_00128f40(auStack_40);
    uVar3 = fn_0012a26c(iVar4);
    uVar5 = fn_00145ac0(iVar4);
    iVar6 = fn_00128ee0(auStack_40,uVar5,uVar3);
    fn_0012d73c(iVar4);
    if (iVar6 != 0) {
      local_180 = (char *)&DAT_0011236c;
      local_74 = fn_00128e54(auStack_40,(char *)&DAT_0011236c);
      if (0 < local_74) {
        unaff_r11 = &DAT_008f9cf4;
      }
      pcVar20 = (char *)0x0;
      if (0 < local_74) {
LAB_00111ff8:
        local_1a0 = (undefined4 *)0x0;
        local_19c = (int *)0x0;
        local_198 = (int *)0x0;
        local_194 = (int *)0x0;
        local_190 = 0;
        local_18c = 0;
        puVar7 = (undefined4 *)fn_00100fc6(0xc,0);
        uVar3 = fn_00100fc6(0xc,0);
        puVar7[2] = uVar3;
        *puVar7 = local_1a0;
        puVar7[1] = 1;
        local_190 = puVar7[2];
        local_198 = (int *)(local_190 + 0xc);
        *(int *)local_190 = local_190;
        *(int *)(local_190 + 4) = local_190;
        local_1a0 = puVar7;
        local_194 = local_198;
        local_78 = (int *)fn_00128e7c(auStack_40,local_180,pcVar20);
        local_17c = pcVar20 + 1;
        iVar4 = fn_00128eac(auStack_40,local_180,local_17c);
        if (iVar4 != 0) {
          fn_001002a8(0,iVar4);
          fn_001002a8(local_178,iVar4);
          local_50[0] = local_178;
          uVar8 = fn_00100b58(local_178);
          uVar9 = 0x6155a7cc;
          uVar13 = (uVar8 & 0x7fffffff) >> 1;
          if (0 < (int)(uVar13 - 1)) {
            piVar10 = local_50[0] + -1;
            if ((uVar13 & 1) == 0) {
              uVar9 = ((uint)(*local_50[0] * -0x3361d2af) >> 0x11 | *local_50[0] * 0x16a88000) *
                      0x1b873593 ^ 0x6155a7cc;
              uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
              piVar10 = local_50[0];
            }
            iVar6 = piVar10[1];
            for (iVar4 = (int)(uVar13 - 1) >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
              uVar18 = iVar6 * -0x3361d2af;
              iVar21 = piVar10[2];
              uVar17 = iVar6 * 0x16a88000;
              iVar6 = piVar10[3];
              uVar9 = uVar9 ^ (uVar18 >> 0x11 | uVar17) * 0x1b873593;
              uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64 ^
                      ((uint)(iVar21 * -0x3361d2af) >> 0x11 | iVar21 * 0x16a88000) * 0x1b873593;
              uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
              piVar10 = piVar10 + 2;
            }
          }
          if (-1 < (int)(uVar13 - 1)) {
            uVar9 = uVar9 ^ ((uint)(local_50[0][uVar13 - 1] * -0x3361d2af) >> 0x11 |
                            local_50[0][uVar13 - 1] * 0x16a88000) * 0x1b873593;
            uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
          }
          uVar17 = uVar8 << 1 & 3;
          pbVar15 = (byte *)(local_50[0] + uVar13);
          uVar13 = 0;
          if (uVar17 != 1) {
            if (uVar17 != 2) {
              if (uVar17 != 3) goto LAB_00112228;
              uVar13 = (uint)pbVar15[2] << 0x10;
            }
            uVar13 = uVar13 ^ (uint)pbVar15[1] << 8;
          }
          uVar9 = uVar9 ^ ((uVar13 ^ *pbVar15) * -0x3361d2af >> 0x11 |
                          (uVar13 ^ *pbVar15) * 0x16a88000) * 0x1b873593;
LAB_00112228:
          uVar9 = uVar9 ^ uVar8 << 1;
          iVar4 = 0;
          uVar13 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
          uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
          uVar13 = uVar13 ^ uVar13 >> 0x10;
          pcVar20 = local_17c + 1;
          if (0 < (int)local_78) {
            do {
              iVar6 = fn_00128eac(auStack_40,local_180,pcVar20 + iVar4);
              if (iVar6 == 0) goto LAB_00112420;
              iVar21 = fn_001002a8(0,iVar6);
              uVar9 = 0x80;
              if (iVar21 + 1U < 0x80) {
                uVar9 = iVar21 + 1U;
              }
              fn_001002a8(local_178,iVar6,uVar9);
              local_54 = local_178;
              piVar10 = (int *)fn_00100b58();
              puVar7 = unaff_r11;
              if (piVar10 != (int *)0x0) {
                ppiVar11 = local_50;
                if ((int *)0x20 < piVar10) {
                  ppiVar11 = &local_44;
                }
                local_44 = piVar10;
                local_50[0] = (int *)&DAT_00000020;
                piVar19 = *ppiVar11;
                if ((int *)0xfffffff1 < piVar19) {
                  fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,piVar19,0xfffffff1);
                }
                if (piVar19 < piVar10) {
                  fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,piVar10,piVar19);
                }
                if (piVar19 == (int *)0x0) {
                  puVar7 = &DAT_008f9ce8;
                }
                else {
                  puVar7 = (undefined4 *)fn_00100fc6((int)(piVar19 + 2) * 2,0);
                  if (puVar7 != (undefined4 *)0x0) {
                    *puVar7 = 0;
                    puVar7[1] = 0;
                    puVar7[2] = 0;
                  }
                  puVar14 = (undefined2 *)((int)puVar7 + (int)piVar10 * 2 + 0xc);
                  *puVar7 = 0;
                  puVar7[1] = piVar19;
                  puVar7[2] = piVar10;
                  if (puVar14 != (undefined2 *)0x0) {
                    *puVar14 = 0;
                  }
                }
                puVar7 = puVar7 + 3;
              }
              fn_00301a9c(puVar7,local_54,(int)piVar10 << 1);
              iVar6 = local_190;
              if (local_19c == (int *)0x0) {
                if (local_198 == local_194) {
                  if (local_1a0 == (undefined4 *)0x0) {
                    uVar9 = 0x20;
                  }
                  else {
                    uVar8 = local_1a0[1];
                    uVar9 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
                    if (uVar9 < uVar8 + 0x20) {
                      uVar9 = uVar8 + 0x20;
                    }
                  }
                  local_184 = (undefined4 *)fn_00100fc6(0xc,0);
                  uVar3 = fn_00100fc6(uVar9 * 0xc,0);
                  local_184[2] = uVar3;
                  *local_184 = local_1a0;
                  local_184[1] = uVar9;
                  local_1a0 = local_184;
                  local_198 = (int *)local_184[2];
                  local_194 = local_198 + uVar9 * 3;
                }
                piVar10 = local_198;
                local_198 = local_198 + 3;
              }
              else {
                piVar10 = local_19c;
                local_19c = (int *)*local_19c;
              }
              piVar19 = piVar10 + 2;
              if (piVar19 != (int *)0x0) {
                local_54 = piVar19;
                if (puVar7[-3] == -1) {
                  local_50[0] = (int *)puVar7[-1];
                  local_48 = local_50[0];
                  local_28 = local_50[0];
                  if ((int *)0xfffffff1 < local_50[0]) {
                    fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,local_50[0],0xfffffff1);
                  }
                  if (local_48 == (int *)0x0) {
                    puVar12 = &DAT_008f9ce8;
                  }
                  else {
                    puVar12 = (undefined4 *)fn_00100fc6((int)(local_48 + 2) * 2,0);
                    if (puVar12 != (undefined4 *)0x0) {
                      *puVar12 = 0;
                      puVar12[1] = 0;
                      puVar12[2] = 0;
                    }
                    puVar12[2] = local_50[0];
                    *puVar12 = 0;
                    puVar12[1] = local_48;
                    puVar14 = (undefined2 *)((int)puVar12 + (int)local_50[0] * 2 + 0xc);
                    if (puVar14 != (undefined2 *)0x0) {
                      *puVar14 = 0;
                    }
                  }
                  *local_54 = (int)(puVar12 + 3);
                  fn_00301a9c(puVar12 + 3,puVar7,(int)local_28 << 1);
                }
                else {
                  piVar16 = puVar7 + -3;
                  *piVar19 = (int)puVar7;
                  if (piVar16 != &DAT_008f9ce8) {
                    *piVar16 = *piVar16 + 1;
                  }
                }
              }
              *piVar10 = iVar6;
              piVar10[1] = *(int *)(iVar6 + 4);
              **(undefined4 **)(iVar6 + 4) = piVar10;
              *(int **)(iVar6 + 4) = piVar10;
              local_18c = local_18c + 1;
              if (puVar7 != unaff_r11) {
                iVar6 = puVar7[-3];
                if ((iVar6 == -1) ||
                   ((puVar7 + -3 != &DAT_008f9ce8 && (puVar7[-3] = iVar6 + -1, iVar6 == 0)))) {
                  fn_001008c4(puVar7 + -3,puVar7[-2] + 8,0);
                }
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)local_78);
          }
          pcVar20 = pcVar20 + (int)local_78;
          do {
            local_70 = uVar13;
            iVar4 = fn_0012eebc(auStack_6c,&local_1a0);
            piVar19 = *(int **)(iVar2 + 0x10);
            bVar22 = true;
            piVar10 = piVar19;
            if ((int *)piVar19[1] != (int *)0x0) {
              piVar16 = (int *)piVar19[1];
              do {
                piVar10 = piVar16;
                bVar22 = *(uint *)(iVar4 + -4) < (uint)piVar10[4];
                if (bVar22) {
                  piVar16 = (int *)piVar10[2];
                }
                else {
                  piVar16 = (int *)piVar10[3];
                }
              } while (piVar16 != (int *)0x0);
            }
            if (*(char *)(iVar2 + 0x18) == '\0') {
              if (bVar22) {
                if (piVar10 == (int *)piVar19[2]) {
                  fn_0012c78c(&local_48);
                  local_38 = local_48;
                  local_34 = CONCAT31(((unsigned int)(local_34) >> 8) & 0xffffff,1);
                  goto LAB_0011279c;
                }
                if (((char)*piVar10 == '\0') && (*(int **)(piVar10[1] + 4) == piVar10)) {
                  piVar10 = (int *)piVar10[3];
                }
                else {
                  piVar19 = (int *)piVar10[2];
                  if ((int *)piVar10[2] == (int *)0x0) {
                    piVar19 = (int *)piVar10[1];
                    piVar16 = piVar10;
                    while (piVar10 = piVar19, piVar16 == (int *)piVar10[2]) {
                      piVar19 = (int *)piVar10[1];
                      piVar16 = piVar10;
                    }
                  }
                  else {
                    do {
                      piVar10 = piVar19;
                      piVar19 = (int *)piVar10[3];
                    } while ((int *)piVar10[3] != (int *)0x0);
                  }
                }
              }
              if ((uint)piVar10[4] < *(uint *)(iVar4 + -4)) {
                fn_0012c78c(&local_78);
                local_38 = local_78;
                local_34 = CONCAT31(((unsigned int)(local_34) >> 8) & 0xffffff,1);
              }
              else {
                local_34 = local_34 & 0xffffff00;
                local_38 = piVar10;
              }
            }
            else {
              fn_0012c78c(&local_54);
              local_38 = local_54;
              local_34 = CONCAT31(((unsigned int)(local_34) >> 8) & 0xffffff,1);
            }
LAB_0011279c:
            cVar1 = (char)local_34;
            fn_00147c4c(auStack_6c);
            if (cVar1 != '\0') goto code_r0x001127b8;
            uVar13 = uVar13 + 1;
          } while( true );
        }
LAB_00112420:
        fn_00147c4c(&local_1a0);
      }
    }
LAB_001127cc:
    fn_00128fc4(auStack_40);
  }
  return;
code_r0x001127b8:
  fn_00147c4c(&local_1a0);
  if (local_74 <= (int)pcVar20) goto LAB_001127cc;
  goto LAB_00111ff8;
}


