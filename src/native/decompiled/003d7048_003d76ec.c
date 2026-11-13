#include "003d7048_003d76ec.h"



void fn_003d76ec(int *param_1)

{
  int iVar1;
  
  fn_001db0c0();
  iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  if ((iVar1 == 1) && (iVar1 = (**(code **)(*param_1 + 0x48))(param_1), iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x003d7748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x44))(param_1,0,4);
    return;
  }
  return;
}



void fn_003d76d0(int param_1)

{
  fn_002113c8();
  *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 8;
  return;
}



void fn_003d7628(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(DAT_008977e0 + 0xa8);
  uVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_003d7660);
  fn_00699b18(DAT_008977e0,uVar1,0,uVar2);
  return;
}



int fn_003d758c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  uVar2 = uVar1;
  if (*(uint *)(param_1 + 0x48) < uVar1) {
    do {
      uVar2 = uVar2 + 0x2c;
    } while (uVar2 != *(uint *)(param_1 + 0x48));
  }
  fn_001008c4(uVar1,(int)(*(int *)(param_1 + 0x4c) - uVar1) / 0x2c,0);
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar2 = uVar1;
  if (*(uint *)(param_1 + 0x20) <= uVar1) {
    for (; uVar2 != *(uint *)(param_1 + 0x20); uVar2 = uVar2 + 0x2c) {
    }
  }
  fn_001008c4(uVar1,(int)(*(int *)(param_1 + 0x24) - uVar1) / 0x2c,0);
  return param_1;
}



undefined1 * fn_003d7048(undefined1 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  char *local_80;
  int local_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int local_44;
  uint local_3c;
  uint local_38 [5];
  
  uVar16 = 0x47435000;
  iVar7 = (param_2[1] - *param_2) / 0x28;
  fn_0078d69c(param_1 + 0x1c,iVar7);
  fn_0078d69c(param_1 + 0x44,8);
  fn_002fbf50(&local_6c);
  iVar11 = 0;
  if (0 < iVar7) {
    uVar17 = 0xc7435000;
    uVar18 = 0;
    local_80 = &DAT_008f9d04;
    do {
      piVar10 = (int *)(*param_2 + iVar11 * 0x28);
      if (*(char *)*piVar10 == 'm') {
        uVar8 = *(uint *)((char *)*piVar10 + -4);
        uVar1 = fn_002febd8();
        uVar4 = *(uint *)(*piVar10 + -4);
        if (uVar4 < uVar8) {
          uVar8 = uVar4;
        }
        iVar2 = fn_001010c8(*piVar10,(char *)&DAT_003d7354);
        if (iVar2 == 0 && uVar8 == uVar1) {
          *(float *)(param_1 + 0x10) = (float)piVar10[1] + (float)piVar10[7];
          *(undefined4 *)(param_1 + 0x14) = uVar16;
          *(float *)(param_1 + 0x18) = (float)piVar10[3] + (float)piVar10[9];
          *(float *)(param_1 + 4) = (float)piVar10[1] - (float)piVar10[7];
          *(undefined4 *)(param_1 + 8) = uVar17;
          *(float *)(param_1 + 0xc) = (float)piVar10[3] - (float)piVar10[9];
        }
        else {
          if (*(uint *)(*piVar10 + -4) < 2) {
            fn_002ff628(9,&DAT_008c75fb,&DAT_008c75fb,2,*(uint *)(*piVar10 + -4));
          }
          iVar2 = *piVar10 + 2;
          uVar1 = *(int *)(*piVar10 + -4) - 2;
          uVar8 = 6;
          if (uVar1 < 7) {
            uVar8 = uVar1;
          }
          if (0xfffffff1 < uVar8) {
            fn_002ff628(8,&DAT_008c7616,&DAT_008c7616,uVar8,0xfffffff1);
          }
          if (uVar8 == 0) {
            pcVar9 = local_80;
          }
          else {
            puVar5 = &local_3c;
            local_3c = 0x20;
            local_38[0] = uVar8;
            if (0x20 < uVar8) {
              puVar5 = local_38;
            }
            uVar1 = *puVar5;
            if (0xfffffff1 < uVar1) {
              fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar1,0xfffffff1);
            }
            if (uVar1 < uVar8) {
              fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar8,uVar1);
            }
            if (uVar1 == 0) {
              puVar3 = &DAT_008f9cf8;
            }
            else {
              puVar3 = (undefined4 *)fn_00100fc6(uVar1 + 0xe,0);
              if (puVar3 != (undefined4 *)0x0) {
                *puVar3 = 0;
                puVar3[1] = 0;
                puVar3[2] = 0;
              }
              puVar3[2] = uVar8;
              *puVar3 = 0;
              puVar3[1] = uVar1;
              puVar6 = (undefined1 *)((int)puVar3 + uVar8 + 0xc);
              if (puVar6 != (undefined1 *)0x0) {
                *puVar6 = 0;
              }
            }
            pcVar9 = (char *)(puVar3 + 3);
          }
          if (iVar2 != 0) {
            fn_00301a9c(pcVar9,iVar2,uVar8);
          }
          iVar2 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),pcVar9);
          if (iVar2 != -1) {
            local_68 = piVar10[1];
            iStack_64 = piVar10[2];
            iStack_60 = piVar10[3];
            local_5c = piVar10[4];
            iStack_58 = piVar10[5];
            iStack_54 = piVar10[6];
            local_50 = piVar10[7];
            local_4c = piVar10[8];
            iStack_48 = piVar10[9];
            local_44 = (int)uVar18;
            piVar10 = *(int **)(param_1 + 0x20);
            local_6c = iVar2;
            if (piVar10 == *(int **)(param_1 + 0x24)) {
              fn_0078d3dc(param_1 + 0x1c,piVar10,&local_6c);
            }
            else {
              *(int **)(param_1 + 0x20) = piVar10 + 0xb;
              if (piVar10 != (int *)0x0) {
                *piVar10 = iVar2;
                piVar10[1] = local_68;
                piVar10[2] = iStack_64;
                piVar10[3] = iStack_60;
                piVar10[4] = local_5c;
                piVar10[5] = iStack_58;
                piVar10[6] = iStack_54;
                piVar10[7] = local_50;
                piVar10[8] = local_4c;
                piVar10[9] = iStack_48;
                piVar10[10] = local_44;
              }
            }
            if (*pcVar9 != 'W') {
              piVar10 = *(int **)(param_1 + 0x48);
              if (piVar10 == *(int **)(param_1 + 0x4c)) {
                fn_0078d3dc(param_1 + 0x44,piVar10,&local_6c);
              }
              else {
                *(int **)(param_1 + 0x48) = piVar10 + 0xb;
                if (piVar10 != (int *)0x0) {
                  *piVar10 = local_6c;
                  piVar10[1] = local_68;
                  piVar10[2] = iStack_64;
                  piVar10[3] = iStack_60;
                  piVar10[4] = local_5c;
                  piVar10[5] = iStack_58;
                  piVar10[6] = iStack_54;
                  piVar10[7] = local_50;
                  piVar10[8] = local_4c;
                  piVar10[9] = iStack_48;
                  piVar10[10] = local_44;
                }
              }
            }
          }
          if (pcVar9 != &DAT_008f9d04) {
            iVar2 = *(int *)(pcVar9 + -0xc);
            if ((iVar2 == -1) ||
               ((pcVar9 + -0xc != (char *)&DAT_008f9cf8 &&
                (*(int *)(pcVar9 + -0xc) = iVar2 + -1, iVar2 == 0)))) {
              fn_001008c4(pcVar9 + -0xc,*(int *)(pcVar9 + -8) + 0xe,0);
            }
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar7);
  }
  fn_00763c50(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),&LAB_0065c314);
  fn_00763c50(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),&LAB_0065c314);
  fVar12 = 3.4028235e+38;
  uVar8 = 0;
  iVar7 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 0x1f;
  if ((*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44)) / 0x2c + iVar7 != iVar7) {
    do {
      iVar7 = *(int *)(param_1 + 0x44);
      if (uVar8 == (*(int *)(param_1 + 0x48) - iVar7) / 0x2c - 1U) {
        *(float *)(iVar7 + uVar8 * 0x2c + 0x28) = fVar12;
        fVar13 = fVar12;
      }
      else {
        iVar11 = iVar7 + uVar8 * 0x2c;
        iVar7 = iVar7 + (uVar8 + 1) * 0x2c;
        fVar15 = (*(float *)(iVar7 + 4) - *(float *)(iVar11 + 4)) * 0.5;
        fVar13 = (*(float *)(iVar7 + 8) - *(float *)(iVar11 + 8)) * 0.5;
        fVar14 = (*(float *)(iVar7 + 0xc) - *(float *)(iVar11 + 0xc)) * 0.5;
        fVar13 = SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14);
        if (fVar13 < fVar12) {
          fVar12 = fVar13;
        }
        *(float *)(iVar11 + 0x28) = fVar12;
      }
      uVar8 = uVar8 + 1;
      fVar12 = fVar13;
    } while (uVar8 < (uint)((*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44)) / 0x2c));
  }
  *param_1 = 1;
  param_1[0x28] = 1;
  return param_1;
}


