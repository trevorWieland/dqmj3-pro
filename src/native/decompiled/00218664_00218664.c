#include "00218664_00218664.h"



/* WARNING: Removing unreachable block (ram,0x00218a08) */
/* WARNING: Removing unreachable block (ram,0x00218a24) */
/* WARNING: Removing unreachable block (ram,0x002189d8) */
/* WARNING: Removing unreachable block (ram,0x002189e0) */
/* WARNING: Removing unreachable block (ram,0x002189ec) */
/* WARNING: Removing unreachable block (ram,0x00218a50) */
/* WARNING: Removing unreachable block (ram,0x00218a7c) */
/* WARNING: Removing unreachable block (ram,0x00218a28) */
/* WARNING: Removing unreachable block (ram,0x00218a30) */
/* WARNING: Removing unreachable block (ram,0x00218a38) */
/* WARNING: Removing unreachable block (ram,0x00218a48) */

undefined4 * fn_00218664(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint local_38;
  uint local_34 [4];
  
  puVar1 = (undefined4 *)fn_001dbf48(param_1,1);
  *puVar1 = &PTR_FUN_0081c6a4;
  *(undefined2 *)(puVar1 + 0x5a) = 0xffff;
  *(undefined2 *)((int)puVar1 + 0x16a) = 0;
  *(undefined1 *)(puVar1 + 0x5b) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x16d) = 0;
  puVar1[0x5c] = 0;
  puVar1[0x5d] = 0;
  puVar1[0x5e] = 0;
  puVar1[0x62] = 0;
  puVar1[0x66] = 0;
  puVar1[0x67] = 0;
  uVar19 = 0x3f800000;
  puVar1[0x68] = 0;
  puVar1[0x69] = 0x3f800000;
  puVar1[0x6a] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x6b) = 0;
  *(undefined1 *)((int)puVar1 + 0x1ad) = 0;
  *(undefined1 *)((int)puVar1 + 0x1ae) = 0;
  *(undefined1 *)((int)puVar1 + 0x1af) = 0;
  puVar1[0x6c] = 0;
  puVar1[0x6d] = 0;
  puVar1[0x6e] = 0;
  *(undefined2 *)(puVar1 + 0x6f) = 0;
  *(undefined1 *)((int)puVar1 + 0x1be) = 2;
  *(undefined1 *)((int)puVar1 + 0x1bf) = 0xff;
  puVar1[0x70] = 0x3f800000;
  puVar1[0x71] = 0;
  puVar1[0x72] = 0xffffffff;
  puVar1[0x74] = 3;
  puVar1[0x73] = 0xffffffff;
  *(undefined1 *)((int)puVar1 + 0x1e6) = 0;
  puVar1[0xba] = 0;
  puVar1[0xbb] = 0;
  puVar1[0xbc] = 0;
  puVar1[0xbd] = 0xffffffff;
  puVar1[0xbe] = 0xbf800000;
  *(undefined1 *)(puVar1 + 0xdb) = 0;
  puVar1[0xdc] = 0;
  puVar1[0xdd] = 0;
  puVar1[0xde] = 0;
  puVar1[0xdf] = 0;
  puVar1[0xe0] = 0;
  puVar1[0xe1] = 0;
  puVar1[0xe2] = 0;
  puVar1[0xe3] = 0;
  puVar1[0xe4] = 0;
  piVar2 = (int *)fn_00100fc6(0xc,0);
  iVar3 = fn_00100fc6(0xc,0);
  piVar2[2] = iVar3;
  *piVar2 = puVar1[0xdf];
  piVar2[1] = 1;
  puVar1[0xdf] = piVar2;
  iVar3 = piVar2[2];
  puVar1[0xe1] = iVar3;
  puVar1[0xe2] = iVar3 + 0xc;
  puVar1[0xe3] = iVar3;
  puVar1[0xe1] = iVar3 + 0xc;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(puVar1[0xe3] + 4) = puVar1[0xe3];
  puVar1[0xe5] = 0;
  *(undefined1 *)(puVar1 + 0xe6) = 0;
  puVar1[0xe8] = 0;
  puVar1[0xe9] = 0;
  puVar1[0xe7] = 0x200;
  puVar1[100] = 0;
  iVar9 = 0x10;
  puVar1[0x65] = 0;
  iVar3 = 0;
  do {
    iVar9 = iVar9 + -1;
    puVar1[iVar3 * 4 + 0x7a] = 0xffffffff;
    puVar1[iVar3 * 4 + 0x7c] = uVar19;
    puVar1[iVar3 * 4 + 0x7b] = 0xffffffff;
    iVar3 = iVar3 + 1;
  } while (iVar9 != 0);
  puVar4 = (undefined4 *)puVar1[0xbb];
  puVar10 = (undefined4 *)puVar1[0xba];
  puVar15 = puVar1 + 0xba;
  uVar13 = (int)puVar4 - (int)puVar10 >> 4;
  if (uVar13 < 10) {
    iVar3 = 10 - uVar13;
    if (iVar3 != 0) {
      uVar13 = iVar3 + uVar13;
      if ((uint)(puVar1[0xbc] - (int)puVar10 >> 4) < uVar13) {
        local_38 = uVar13;
        uVar6 = (int)(puVar1[0xbb] - *puVar15) >> 4;
        local_34[0] = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
        if (local_34[0] < uVar6 + 0x20) {
          local_34[0] = uVar6 + 0x20;
        }
        puVar11 = &local_38;
        if (uVar13 < local_34[0]) {
          puVar11 = local_34;
        }
        uVar13 = *puVar11;
        puVar12 = (undefined4 *)fn_00100fc6(uVar13 << 4,0);
        puVar7 = puVar12;
        for (puVar10 = (undefined4 *)*puVar15; puVar10 != puVar4; puVar10 = puVar10 + 4) {
          if (puVar7 != (undefined4 *)0x0) {
            uVar16 = puVar10[1];
            uVar17 = puVar10[2];
            uVar18 = puVar10[3];
            *puVar7 = *puVar10;
            puVar7[1] = uVar16;
            puVar7[2] = uVar17;
            puVar7[3] = uVar18;
          }
          puVar7 = puVar7 + 4;
        }
        puVar10 = (undefined4 *)(((int)puVar4 - *puVar15 & 0xfffffff0) + (int)puVar12);
        for (iVar9 = iVar3; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = 0;
            puVar10[3] = 0;
          }
          puVar10 = puVar10 + 4;
        }
        puVar7 = (undefined4 *)puVar1[0xbb];
        puVar10 = puVar12 + (iVar3 + ((int)((int)puVar4 - *puVar15) >> 4)) * 4;
        for (; puVar4 != puVar7; puVar4 = puVar4 + 4) {
          if (puVar10 != (undefined4 *)0x0) {
            uVar16 = puVar4[1];
            uVar17 = puVar4[2];
            uVar18 = puVar4[3];
            *puVar10 = *puVar4;
            puVar10[1] = uVar16;
            puVar10[2] = uVar17;
            puVar10[3] = uVar18;
          }
          puVar10 = puVar10 + 4;
        }
        uVar5 = *puVar15;
        uVar8 = puVar1[0xbb];
        uVar6 = uVar5;
        if (uVar8 < uVar5) {
          do {
            uVar6 = uVar6 + 0x10;
          } while (uVar6 != uVar8);
        }
        fn_001008c4(uVar5,(int)(puVar1[0xbc] - uVar5) >> 4,0);
        puVar1[0xbc] = puVar12 + uVar13 * 4;
        puVar1[0xbb] = puVar12 + ((int)(uVar8 - uVar5) >> 4) * 4 + iVar3 * 4;
        *puVar15 = (uint)puVar12;
      }
      else {
        puVar10 = puVar4 + iVar3 * 4;
        puVar1[0xbb] = puVar4 + iVar3 * 4;
        if (puVar10 < puVar4) {
          puVar14 = puVar4 + iVar3 * -4;
          puVar7 = puVar4;
          for (puVar12 = puVar14; puVar12 != puVar4; puVar12 = puVar12 + 4) {
            if (puVar7 != (undefined4 *)0x0) {
              uVar16 = puVar12[1];
              uVar17 = puVar12[2];
              uVar18 = puVar12[3];
              *puVar7 = *puVar12;
              puVar7[1] = uVar16;
              puVar7[2] = uVar17;
              puVar7[3] = uVar18;
            }
            puVar7 = puVar7 + 4;
          }
          puVar7 = puVar4;
          if (puVar4 < puVar14) {
            iVar3 = (int)puVar14 - (int)puVar4;
            if (0 < iVar3) {
              puVar12 = puVar14;
              if (iVar3 * 0x8000000 < 0) {
                puVar12 = puVar14 + -4;
                puVar7 = puVar4 + -4;
                uVar16 = puVar14[-3];
                uVar17 = puVar14[-2];
                uVar18 = puVar14[-1];
                *puVar7 = *puVar12;
                puVar4[-3] = uVar16;
                puVar4[-2] = uVar17;
                puVar4[-1] = uVar18;
              }
              for (iVar3 = iVar3 >> 5; iVar3 != 0; iVar3 = iVar3 + -1) {
                uVar16 = puVar12[-3];
                uVar17 = puVar12[-2];
                uVar18 = puVar12[-1];
                puVar7[-4] = puVar12[-4];
                puVar7[-3] = uVar16;
                puVar7[-2] = uVar17;
                puVar7[-1] = uVar18;
                uVar16 = puVar12[-7];
                uVar17 = puVar12[-6];
                uVar18 = puVar12[-5];
                puVar7[-8] = puVar12[-8];
                puVar7[-7] = uVar16;
                puVar7[-6] = uVar17;
                puVar7[-5] = uVar18;
                puVar7 = puVar7 + -8;
                puVar12 = puVar12 + -8;
              }
            }
          }
          else {
            while (puVar4 != puVar14) {
              uVar16 = puVar14[-3];
              uVar17 = puVar14[-2];
              uVar18 = puVar14[-1];
              puVar7[-4] = puVar14[-4];
              puVar7[-3] = uVar16;
              puVar7[-2] = uVar17;
              puVar7[-1] = uVar18;
              puVar7 = puVar7 + -4;
              puVar14 = puVar14 + -4;
            }
          }
          if (puVar4 < puVar10) {
            iVar3 = (int)puVar10 - (int)puVar4;
            if (0 < iVar3) {
              puVar10 = puVar4;
              if (iVar3 * 0x8000000 < 0) {
                *puVar4 = 0;
                puVar4[1] = 0;
                puVar10 = puVar4 + 4;
                puVar4[2] = 0;
                puVar4[3] = 0;
              }
              for (iVar3 = iVar3 >> 5; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar10 = 0;
                puVar10[1] = 0;
                puVar10[2] = 0;
                puVar10[3] = 0;
                puVar10[4] = 0;
                puVar10[5] = 0;
                puVar10[6] = 0;
                puVar10[7] = 0;
                puVar10 = puVar10 + 8;
              }
            }
          }
          else {
            for (; puVar4 != puVar10; puVar4 = puVar4 + 4) {
              *puVar4 = 0;
              puVar4[1] = 0;
              puVar4[2] = 0;
              puVar4[3] = 0;
            }
          }
        }
        else {
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = 0;
              puVar4[1] = 0;
              puVar4[2] = 0;
              puVar4[3] = 0;
            }
            puVar4 = puVar4 + 4;
          }
        }
      }
    }
  }
  else if ((10 < uVar13) && (puVar7 = puVar10 + 0x28, puVar10 != puVar4)) {
    puVar10 = puVar7;
    if (puVar4 <= puVar7) {
      for (; puVar10 != puVar4; puVar10 = puVar10 + 4) {
      }
    }
    puVar1[0xbb] = (int)puVar4 - ((int)puVar4 - (int)puVar7 & 0xfffffff0U);
  }
  uVar13 = 0;
  if ((int)(puVar1[0xbb] - puVar1[0xba]) >> 4 != 0) {
    do {
      uVar6 = uVar13 + 1;
      *(undefined4 *)(puVar1[0xba] + uVar13 * 0x10) = 0xffffffff;
      *(undefined4 *)(puVar1[0xba] + uVar13 * 0x10 + 4) = 0xffffffff;
      *(undefined4 *)(puVar1[0xba] + uVar13 * 0x10 + 8) = uVar19;
      uVar13 = uVar6;
    } while (uVar6 < (uint)((int)(puVar1[0xbb] - puVar1[0xba]) >> 4));
  }
  uVar13 = 0x1a;
  piVar2 = puVar1 + 0x52;
  iVar3 = (int)(puVar1[0x54] - puVar1[0x53]) / 0xc;
  if (iVar3 < 0x1b) {
    if ((puVar1[0x55] & 0x3fffffff) < 0x1a) {
      if (((*piVar2 == 0) || ((puVar1[0x55] & 0xc0000000) != 0x40000000)) ||
         (puVar4 = (undefined4 *)(**(code **)(*(int *)*piVar2 + 8))((int *)*piVar2,0x138,0x20),
         puVar4 == (undefined4 *)0x0)) {
        uVar13 = puVar1[0x55] & 0x3fffffff;
      }
      else {
        iVar3 = 0;
        puVar7 = (undefined4 *)puVar1[0x53];
        puVar12 = (undefined4 *)puVar1[0x54];
        puVar10 = puVar4;
        if (puVar7 != puVar12) {
          do {
            if (puVar10 != (undefined4 *)0x0) {
              uVar19 = puVar7[1];
              uVar16 = puVar7[2];
              *puVar10 = *puVar7;
              puVar10[1] = uVar19;
              puVar10[2] = uVar16;
            }
            puVar7 = puVar7 + 3;
            puVar10 = puVar10 + 3;
          } while (puVar7 != puVar12);
          iVar3 = (int)(puVar1[0x54] - puVar1[0x53]) / 0xc;
        }
        uVar6 = puVar1[0x53];
        if (uVar6 != 0) {
          uVar8 = puVar1[0x54];
          uVar5 = uVar6;
          if (uVar6 < uVar8) {
            iVar9 = 1;
            if (1 < (int)(uVar8 - uVar6) / 0xc + 1) {
              do {
                iVar9 = iVar9 + 1;
              } while (iVar9 < (int)(uVar8 - uVar6) / 0xc + 1);
            }
          }
          else {
            for (; uVar5 != uVar8; uVar5 = uVar5 + 0xc) {
            }
          }
          puVar1[0x54] = uVar6;
          (**(code **)(*(int *)*piVar2 + 0xc))((int *)*piVar2,puVar1[0x53]);
        }
        puVar1[0x53] = puVar4;
        puVar1[0x54] = puVar4 + iVar3 * 3;
        puVar1[0x55] = puVar1[0x55] & 0xc0000000 | 0x1a;
      }
    }
    for (iVar3 = (int)(puVar1[0x54] - puVar1[0x53]) / 0xc; iVar3 < (int)uVar13; iVar3 = iVar3 + 1) {
      puVar4 = (undefined4 *)(puVar1[0x53] + iVar3 * 0xc);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xffffffff;
        puVar4[1] = 0xffffffff;
        puVar4[2] = 0xffffffff;
      }
    }
    iVar3 = puVar1[0x53] + uVar13 * 0xc;
  }
  else {
    do {
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < iVar3);
    iVar3 = puVar1[0x53] + 0x138;
  }
  puVar1[0x54] = iVar3;
  fn_00301f50(puVar1 + 0xbf,0x60);
  return puVar1;
}


