#include "00318268_00318c28.h"



void fn_00318c28(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



void fn_00318c18(int param_1,int param_2)

{
  *(int *)(param_1 + 0x1c) = param_2 + *(int *)(param_1 + 0x1c);
  return;
}



void fn_00318bf4(int param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 8) = param_2 + *(int *)(param_1 + 8);
  return;
}



void fn_00318be8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}



void fn_00318bc4(undefined4 *param_1,undefined1 param_2)

{
  *param_1 = &PTR_LAB_00822af4;
  *(undefined1 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  return;
}



void fn_00318adc(undefined4 *param_1)

{
  int iVar1;
  
  param_1[1] = 0xffffffff;
  *param_1 = &DAT_00822acc;
  param_1[2] = 0xffffffff;
  iVar1 = fn_00101a1c(param_1 + 3,&LAB_001ad7ac,0xc);
  *(undefined4 *)(iVar1 + 0x90) = 0;
  *(undefined4 *)(iVar1 + 0x94) = 0;
  *(undefined4 *)(iVar1 + 0xac) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x98) = 0;
  DAT_00891220 = iVar1 + -0xc;
  return;
}



void fn_00318268(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 *in_r12;
  undefined8 uVar18;
  uint local_48;
  undefined1 auStack_40 [8];
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  
  local_28 = param_1;
  uVar2 = fn_00118290();
  local_38 = fn_0011c184(L"rom:/data/Parameter/CrackPlaceMasterTables.xbb",uVar2,0x80,5);
  if ((local_38 != 0) && (iVar3 = fn_00145ac0(), iVar3 != 0)) {
    uVar2 = fn_00145ac0(local_38);
    fn_00118624(auStack_40,uVar2);
    uVar4 = fn_006edeb4(auStack_40);
    local_48 = 0;
    if (uVar4 != 0) {
      do {
        uVar2 = fn_006edd88(auStack_40,local_48);
        iVar3 = fn_00147e6c(uVar2,DAT_00891228,4);
        if (iVar3 != 0) {
          fn_005f5d3c(auStack_40);
          return;
        }
        iVar3 = fn_006edd88(auStack_40,local_48);
        puVar14 = (undefined4 *)(iVar3 + 4);
        iVar3 = fn_006ede84(auStack_40,local_48);
        iVar15 = 0;
        local_30 = (iVar3 - 4U) / 0xc;
        if (local_30 != 0) {
          local_2c = local_28 + local_48 * 0xc;
          puVar8 = in_r12;
          do {
            iVar3 = local_2c;
            in_r12 = (undefined4 *)0x0;
            uVar2 = *puVar14;
            puVar13 = (uint *)(local_2c + 0xc);
            uVar1 = puVar14[1];
            puVar12 = *(undefined4 **)(local_2c + 0x10);
            uVar17 = (uint)*(byte *)(puVar14 + 2) | (uint)puVar8 & 0xff000000 |
                     (uint)*(byte *)((int)puVar14 + 9) << 8 |
                     (uint)*(byte *)((int)puVar14 + 10) << 0x10;
            if (puVar12 == *(undefined4 **)(local_2c + 0x14)) {
              uVar7 = (int)((int)puVar12 - *puVar13) / 0xc;
              if (uVar7 < (uint)((int)((int)*(undefined4 **)(local_2c + 0x14) - *puVar13) / 0xc)) {
                *(undefined4 **)(local_2c + 0x10) = puVar12 + 3;
                if (puVar12 != (undefined4 *)0x0) {
                  *puVar12 = puVar12[-3];
                  in_r12 = (undefined4 *)puVar12[-2];
                  puVar12[1] = in_r12;
                  puVar12[2] = puVar12[-1];
                }
                puVar8 = puVar12 + -3;
                puVar9 = puVar12;
                if (puVar12 < puVar8) {
                  in_r12 = puVar12;
                  if (0 < (int)puVar8 - (int)puVar12) {
                    uVar7 = ((int)puVar8 - (int)puVar12) / 0xc;
                    if ((uVar7 & 1) != 0) {
                      puVar8 = puVar12 + -6;
                      puVar9 = puVar12 + -3;
                      *puVar9 = *puVar8;
                      puVar12[-2] = puVar12[-5];
                      puVar12[-1] = puVar12[-4];
                    }
                    for (iVar3 = (int)uVar7 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
                      puVar9[-3] = puVar8[-3];
                      puVar9[-2] = puVar8[-2];
                      puVar9[-1] = puVar8[-1];
                      puVar9[-6] = puVar8[-6];
                      puVar9[-5] = puVar8[-5];
                      puVar9[-4] = puVar8[-4];
                      in_r12 = puVar9;
                      puVar9 = puVar9 + -6;
                      puVar8 = puVar8 + -6;
                    }
                  }
                }
                else {
                  while (puVar12 != puVar8) {
                    puVar9[-3] = puVar8[-3];
                    puVar9[-2] = puVar8[-2];
                    puVar9[-1] = puVar8[-1];
                    puVar9 = puVar9 + -3;
                    puVar8 = puVar8 + -3;
                  }
                }
                *puVar12 = uVar2;
                puVar12[1] = uVar1;
                puVar12[2] = uVar17;
              }
              else {
                local_34 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
                if (local_34 < uVar7 + 0x20) {
                  local_34 = uVar7 + 0x20;
                }
                puVar6 = (undefined4 *)fn_00100fc6(local_34 * 0xc,0);
                puVar9 = puVar6;
                for (puVar8 = (undefined4 *)*puVar13; puVar8 != puVar12; puVar8 = puVar8 + 3) {
                  if (puVar9 != (undefined4 *)0x0) {
                    *puVar9 = *puVar8;
                    puVar9[1] = puVar8[1];
                    puVar9[2] = puVar8[2];
                  }
                  puVar9 = puVar9 + 3;
                }
                puVar8 = puVar6 + ((int)((int)puVar12 - *puVar13) / 0xc) * 3;
                if (puVar8 != (undefined4 *)0x0) {
                  *puVar8 = uVar2;
                  puVar8[1] = uVar1;
                  puVar8[2] = uVar17;
                }
                puVar9 = *(undefined4 **)(iVar3 + 0x10);
                puVar8 = puVar6 + ((int)((int)puVar12 - *puVar13) / 0xc) * 3;
                for (; puVar12 != puVar9; puVar12 = puVar12 + 3) {
                  puVar5 = puVar8 + 3;
                  if (puVar5 != (undefined4 *)0x0) {
                    *puVar5 = *puVar12;
                    puVar8[4] = puVar12[1];
                    puVar8[5] = puVar12[2];
                  }
                  puVar8 = puVar5;
                }
                uVar7 = *puVar13;
                uVar10 = *(uint *)(iVar3 + 0x10);
                iVar16 = uVar10 - uVar7;
                in_r12 = (undefined4 *)(iVar16 / 6 + (iVar16 >> 0x1f));
                uVar17 = uVar7;
                if (uVar10 < uVar7) {
                  do {
                    uVar17 = uVar17 + 0xc;
                  } while (uVar17 != uVar10);
                }
                fn_001008c4(uVar7,(int)(*(int *)(iVar3 + 0x14) - uVar7) / 0xc,0);
                *puVar13 = (uint)puVar6;
                *(undefined4 **)(iVar3 + 0x14) = puVar6 + local_34 * 3;
                *(undefined4 **)(iVar3 + 0x10) = puVar6 + (iVar16 / 0xc) * 3 + 3;
              }
            }
            else {
              *(undefined4 **)(local_2c + 0x10) = puVar12 + 3;
              if (puVar12 != (undefined4 *)0x0) {
                *puVar12 = uVar2;
                puVar12[1] = uVar1;
                puVar12[2] = uVar17;
              }
            }
            iVar15 = iVar15 + 1;
            puVar14 = puVar14 + 3;
            puVar8 = in_r12;
          } while (iVar15 < (int)local_30);
        }
        local_48 = local_48 + 1;
      } while (local_48 < uVar4);
    }
    fn_005f5d3c(auStack_40);
  }
  fn_0012d73c(local_38);
  uVar2 = fn_00118290();
  iVar3 = fn_0011c184(L"rom:/data/Parameter/CrackPlaceMasterPartyTable.tp",uVar2,0x80,5);
  if ((iVar3 != 0) && (iVar15 = fn_00145ac0(), iVar15 != 0)) {
    uVar2 = fn_00145ac0(iVar3);
    iVar15 = fn_00147e6c(uVar2,DAT_0089122c,4);
    if (iVar15 != 0) {
      return;
    }
    puVar14 = (undefined4 *)fn_00145ac0(iVar3);
    uVar18 = fn_0012a26c(iVar3);
    iVar15 = fn_0011c134((uint)uVar18 - 4,
                          (int)((ulonglong)uVar18 >> 0x20) - (uint)((uint)uVar18 < 4),4,0);
    iVar16 = 0;
    if (0 < iVar15) {
      do {
        iVar11 = local_28;
        puVar14 = puVar14 + 1;
        puVar13 = (uint *)(local_28 + 0x9c);
        puVar8 = *(undefined4 **)(local_28 + 0xa0);
        if (puVar8 == *(undefined4 **)(local_28 + 0xa4)) {
          uVar4 = (int)((int)puVar8 - *puVar13) >> 2;
          if (uVar4 < (uint)((int)((int)*(undefined4 **)(local_28 + 0xa4) - *puVar13) >> 2)) {
            *(undefined4 **)(local_28 + 0xa0) = puVar8 + 1;
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = puVar8[-1];
            }
            puVar12 = puVar8 + -1;
            puVar9 = puVar8;
            if (puVar8 < puVar12) {
              iVar11 = (int)puVar12 - (int)puVar8;
              if (0 < iVar11) {
                if (iVar11 * 0x20000000 < 0) {
                  puVar12 = puVar8 + -2;
                  puVar9 = puVar8 + -1;
                  *puVar9 = *puVar12;
                }
                for (iVar11 = iVar11 >> 3; iVar11 != 0; iVar11 = iVar11 + -1) {
                  puVar9[-1] = puVar12[-1];
                  puVar12 = puVar12 + -2;
                  puVar9 = puVar9 + -2;
                  *puVar9 = *puVar12;
                }
              }
            }
            else {
              while (puVar8 != puVar12) {
                puVar12 = puVar12 + -1;
                puVar9[-1] = *puVar12;
                puVar9 = puVar9 + -1;
              }
            }
            *puVar8 = *puVar14;
          }
          else {
            uVar17 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
            if (uVar17 < uVar4 + 0x20) {
              uVar17 = uVar4 + 0x20;
            }
            puVar6 = (undefined4 *)fn_00100fc6(uVar17 << 2,0);
            puVar9 = puVar6;
            for (puVar12 = (undefined4 *)*puVar13; puVar12 != puVar8; puVar12 = puVar12 + 1) {
              if (puVar9 != (undefined4 *)0x0) {
                *puVar9 = *puVar12;
              }
              puVar9 = puVar9 + 1;
            }
            puVar12 = (undefined4 *)(((int)puVar8 - *puVar13 & 0xfffffffc) + (int)puVar6);
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = *puVar14;
            }
            puVar9 = *(undefined4 **)(iVar11 + 0xa0);
            puVar12 = (undefined4 *)(((int)puVar8 - *puVar13 & 0xfffffffc) + (int)puVar6);
            for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
              puVar12 = puVar12 + 1;
              if (puVar12 != (undefined4 *)0x0) {
                *puVar12 = *puVar8;
              }
            }
            uVar7 = *puVar13;
            uVar10 = *(uint *)(iVar11 + 0xa0);
            uVar4 = uVar7;
            if (uVar10 < uVar7) {
              do {
                uVar4 = uVar4 + 4;
              } while (uVar4 != uVar10);
            }
            fn_001008c4(uVar7,(int)(*(int *)(iVar11 + 0xa4) - uVar7) >> 2,0);
            *(undefined4 **)(iVar11 + 0xa4) = puVar6 + uVar17;
            *(undefined4 **)(iVar11 + 0xa0) = puVar6 + ((int)(uVar10 - uVar7) >> 2) + 1;
            *puVar13 = (uint)puVar6;
          }
        }
        else {
          *(undefined4 **)(local_28 + 0xa0) = puVar8 + 1;
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = *puVar14;
          }
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < iVar15);
    }
  }
  fn_0012d73c(iVar3);
  return;
}


