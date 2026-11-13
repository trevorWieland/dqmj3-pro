#include "00399494_00399dc8b.h"



void fn_00399dc8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0039a1d8(iVar1,param_1);
  return;
}



void fn_00399d98(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



void fn_00399ccc(int param_1)

{
  fn_002c3d68();
  fn_0068ab44(param_1,0x100094c);
  fn_006899f4(param_1,0x81,0);
                    /* WARNING: Could not recover jumptable at 0x00399d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))();
  return;
}



int fn_0039978c(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0x18);
  iVar3 = fn_006b4f84();
  iVar15 = 0;
  if (0 < iVar3) {
    do {
      puVar4 = (undefined4 *)fn_0024222c(uVar2,iVar15);
      if (*(char *)((int)puVar4 + 6) != '\0') {
        puVar12 = *(undefined4 **)(param_1 + 0xbc);
        puVar14 = (uint *)(param_1 + 0xb8);
        if (puVar12 == *(undefined4 **)(param_1 + 0xc0)) {
          uVar1 = (int)((int)puVar12 - *puVar14) >> 4;
          if (uVar1 < (uint)((int)((int)*(undefined4 **)(param_1 + 0xc0) - *puVar14) >> 4)) {
            *(undefined4 **)(param_1 + 0xbc) = puVar12 + 4;
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = puVar12[-4];
              puVar12[1] = puVar12[-3];
              puVar12[2] = puVar12[-2];
              puVar12[3] = puVar12[-1];
            }
            puVar7 = puVar12 + -4;
            puVar13 = puVar12;
            if (puVar12 < puVar7) {
              iVar5 = (int)puVar7 - (int)puVar12;
              if (0 < iVar5) {
                if (iVar5 * 0x8000000 < 0) {
                  puVar7 = puVar12 + -8;
                  puVar13 = puVar12 + -4;
                  *puVar13 = *puVar7;
                  puVar12[-3] = puVar12[-7];
                  puVar12[-2] = puVar12[-6];
                  puVar12[-1] = puVar12[-5];
                }
                for (iVar5 = iVar5 >> 5; iVar5 != 0; iVar5 = iVar5 + -1) {
                  uVar9 = puVar7[-3];
                  uVar10 = puVar7[-2];
                  uVar17 = puVar7[-1];
                  puVar13[-4] = puVar7[-4];
                  puVar13[-3] = uVar9;
                  puVar13[-2] = uVar10;
                  puVar13[-1] = uVar17;
                  uVar9 = puVar7[-7];
                  uVar10 = puVar7[-6];
                  uVar17 = puVar7[-5];
                  puVar13[-8] = puVar7[-8];
                  puVar13[-7] = uVar9;
                  puVar13[-6] = uVar10;
                  puVar13[-5] = uVar17;
                  puVar7 = puVar7 + -8;
                  puVar13 = puVar13 + -8;
                }
              }
            }
            else {
              while (puVar12 != puVar7) {
                uVar9 = puVar7[-3];
                uVar10 = puVar7[-2];
                uVar17 = puVar7[-1];
                puVar13[-4] = puVar7[-4];
                puVar13[-3] = uVar9;
                puVar13[-2] = uVar10;
                puVar13[-1] = uVar17;
                puVar13 = puVar13 + -4;
                puVar7 = puVar7 + -4;
              }
            }
            uVar9 = puVar4[1];
            uVar10 = puVar4[2];
            uVar17 = puVar4[3];
            *puVar12 = *puVar4;
            puVar12[1] = uVar9;
            puVar12[2] = uVar10;
            puVar12[3] = uVar17;
          }
          else {
            uVar16 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
            if (uVar16 < uVar1 + 0x20) {
              uVar16 = uVar1 + 0x20;
            }
            puVar6 = (undefined4 *)fn_00100fc6(uVar16 << 4,0);
            puVar13 = puVar6;
            for (puVar7 = (undefined4 *)*puVar14; puVar7 != puVar12; puVar7 = puVar7 + 4) {
              if (puVar13 != (undefined4 *)0x0) {
                uVar9 = puVar7[1];
                uVar10 = puVar7[2];
                uVar17 = puVar7[3];
                *puVar13 = *puVar7;
                puVar13[1] = uVar9;
                puVar13[2] = uVar10;
                puVar13[3] = uVar17;
              }
              puVar13 = puVar13 + 4;
            }
            puVar7 = (undefined4 *)(((int)puVar12 - *puVar14 & 0xfffffff0) + (int)puVar6);
            if (puVar7 != (undefined4 *)0x0) {
              uVar9 = puVar4[1];
              uVar10 = puVar4[2];
              uVar17 = puVar4[3];
              *puVar7 = *puVar4;
              puVar7[1] = uVar9;
              puVar7[2] = uVar10;
              puVar7[3] = uVar17;
            }
            puVar7 = *(undefined4 **)(param_1 + 0xbc);
            puVar4 = (undefined4 *)(((int)puVar12 - *puVar14 & 0xfffffff0) + (int)puVar6);
            for (; puVar12 != puVar7; puVar12 = puVar12 + 4) {
              puVar13 = puVar4 + 4;
              if (puVar13 != (undefined4 *)0x0) {
                uVar9 = puVar12[1];
                uVar10 = puVar12[2];
                uVar17 = puVar12[3];
                *puVar13 = *puVar12;
                puVar4[5] = uVar9;
                puVar4[6] = uVar10;
                puVar4[7] = uVar17;
              }
              puVar4 = puVar13;
            }
            uVar8 = *(uint *)(param_1 + 0xbc);
            uVar11 = *puVar14;
            uVar1 = uVar11;
            if (uVar8 <= uVar11) {
              for (; uVar1 != uVar8; uVar1 = uVar1 + 0x10) {
              }
            }
            fn_001008c4(uVar11,(int)(*(int *)(param_1 + 0xc0) - uVar11) >> 4);
            *(undefined4 **)(param_1 + 0xc0) = puVar6 + uVar16 * 4;
            *(undefined4 **)(param_1 + 0xbc) = puVar6 + ((int)(uVar8 - uVar11) >> 4) * 4 + 4;
            *puVar14 = (uint)puVar6;
          }
        }
        else {
          *(undefined4 **)(param_1 + 0xbc) = puVar12 + 4;
          if (puVar12 != (undefined4 *)0x0) {
            uVar9 = puVar4[1];
            uVar10 = puVar4[2];
            uVar17 = puVar4[3];
            *puVar12 = *puVar4;
            puVar12[1] = uVar9;
            puVar12[2] = uVar10;
            puVar12[3] = uVar17;
          }
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar3);
  }
  return *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8) >> 4;
}



void fn_00399738(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00416e5c();
  puVar1[0x37] = 0;
  *puVar1 = &DAT_0082c2e8;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  return;
}


