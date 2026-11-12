#include "0039e7c4_0039ec68.h"



void fn_0039ec68(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x138) = 0;
  uVar2 = *(uint *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x13c) = 0;
  iVar3 = *(int *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x140) = 0;
  uVar1 = uVar4;
  if (uVar2 < uVar4) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != uVar2);
  }
  fn_002feef8(uVar4,(int)(iVar3 - uVar4) >> 2,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0039e9ac) */
/* WARNING: Removing unreachable block (ram,0x0039e9c0) */
/* WARNING: Removing unreachable block (ram,0x0039e980) */
/* WARNING: Removing unreachable block (ram,0x0039e988) */
/* WARNING: Removing unreachable block (ram,0x0039e990) */
/* WARNING: Removing unreachable block (ram,0x0039e9e4) */
/* WARNING: Removing unreachable block (ram,0x0039ea00) */
/* WARNING: Removing unreachable block (ram,0x0039e9c4) */
/* WARNING: Removing unreachable block (ram,0x0039e9cc) */
/* WARNING: Removing unreachable block (ram,0x0039e9d4) */
/* WARNING: Removing unreachable block (ram,0x0039e9dc) */

void fn_0039e7c4(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  int iVar13;
  undefined4 uVar14;
  uint local_48;
  uint local_44 [8];
  
  puVar12 = (uint *)(param_1 + 0x128);
  puVar1 = *(undefined4 **)(param_1 + 300);
  puVar9 = (undefined4 *)*puVar12;
  uVar10 = (int)puVar1 - (int)puVar9 >> 3;
  if (uVar10 < 10) {
    iVar13 = 10 - uVar10;
    if (iVar13 != 0) {
      uVar10 = iVar13 + uVar10;
      if ((uint)(*(int *)(param_1 + 0x130) - (int)puVar9 >> 3) < uVar10) {
        local_48 = uVar10;
        uVar4 = (int)(*(int *)(param_1 + 300) - *puVar12) >> 3;
        local_44[0] = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
        if (local_44[0] < uVar4 + 0x20) {
          local_44[0] = uVar4 + 0x20;
        }
        puVar5 = local_44;
        if (local_44[0] <= uVar10) {
          puVar5 = &local_48;
        }
        uVar10 = *puVar5;
        puVar2 = (undefined4 *)fn_00100fc6(uVar10 << 3,0);
        puVar7 = puVar2;
        for (puVar9 = (undefined4 *)*puVar12; puVar9 != puVar1; puVar9 = puVar9 + 2) {
          if (puVar7 != (undefined4 *)0x0) {
            uVar14 = puVar9[1];
            *puVar7 = *puVar9;
            puVar7[1] = uVar14;
          }
          puVar7 = puVar7 + 2;
        }
        puVar9 = (undefined4 *)(((int)puVar1 - *puVar12 & 0xfffffff8) + (int)puVar2);
        for (iVar6 = iVar13; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = 0;
            puVar9[1] = 0;
          }
          puVar9 = puVar9 + 2;
        }
        puVar7 = *(undefined4 **)(param_1 + 300);
        puVar9 = puVar2 + (iVar13 + ((int)((int)puVar1 - *puVar12) >> 3)) * 2;
        for (; puVar1 != puVar7; puVar1 = puVar1 + 2) {
          if (puVar9 != (undefined4 *)0x0) {
            uVar14 = puVar1[1];
            *puVar9 = *puVar1;
            puVar9[1] = uVar14;
          }
          puVar9 = puVar9 + 2;
        }
        uVar3 = *puVar12;
        uVar8 = *(uint *)(param_1 + 300);
        uVar4 = uVar3;
        if (uVar8 < uVar3) {
          do {
            uVar4 = uVar4 + 8;
          } while (uVar4 != uVar8);
        }
        fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x130) - uVar3) >> 3,0);
        *(undefined4 **)(param_1 + 0x130) = puVar2 + uVar10 * 2;
        *(undefined4 **)(param_1 + 300) = puVar2 + ((int)(uVar8 - uVar3) >> 3) * 2 + iVar13 * 2;
        *puVar12 = (uint)puVar2;
      }
      else {
        puVar9 = puVar1 + iVar13 * 2;
        *(undefined4 **)(param_1 + 300) = puVar1 + iVar13 * 2;
        if (puVar9 < puVar1) {
          puVar11 = puVar1 + iVar13 * -2;
          puVar7 = puVar1;
          for (puVar2 = puVar11; puVar2 != puVar1; puVar2 = puVar2 + 2) {
            if (puVar7 != (undefined4 *)0x0) {
              uVar14 = puVar2[1];
              *puVar7 = *puVar2;
              puVar7[1] = uVar14;
            }
            puVar7 = puVar7 + 2;
          }
          puVar7 = puVar1;
          if (puVar1 < puVar11) {
            iVar13 = (int)puVar11 - (int)puVar1;
            if (0 < iVar13) {
              puVar2 = puVar11;
              if (iVar13 * 0x10000000 < 0) {
                puVar2 = puVar11 + -2;
                puVar7 = puVar1 + -2;
                uVar14 = puVar11[-1];
                *puVar7 = *puVar2;
                puVar1[-1] = uVar14;
              }
              for (iVar13 = iVar13 >> 4; iVar13 != 0; iVar13 = iVar13 + -1) {
                uVar14 = puVar2[-1];
                puVar7[-2] = puVar2[-2];
                puVar7[-1] = uVar14;
                uVar14 = puVar2[-3];
                puVar7[-4] = puVar2[-4];
                puVar7[-3] = uVar14;
                puVar7 = puVar7 + -4;
                puVar2 = puVar2 + -4;
              }
            }
          }
          else {
            while (puVar1 != puVar11) {
              uVar14 = puVar11[-1];
              puVar7[-2] = puVar11[-2];
              puVar7[-1] = uVar14;
              puVar7 = puVar7 + -2;
              puVar11 = puVar11 + -2;
            }
          }
          if (puVar1 < puVar9) {
            iVar13 = (int)puVar9 - (int)puVar1;
            if (0 < iVar13) {
              if (iVar13 * 0x10000000 < 0) {
                puVar9 = puVar1 + 1;
                *puVar1 = 0;
                puVar1 = puVar1 + 2;
                *puVar9 = 0;
              }
              for (iVar13 = iVar13 >> 4; iVar13 != 0; iVar13 = iVar13 + -1) {
                *puVar1 = 0;
                puVar1[1] = 0;
                puVar9 = puVar1 + 3;
                puVar1[2] = 0;
                puVar1 = puVar1 + 4;
                *puVar9 = 0;
              }
            }
          }
          else {
            for (; puVar1 != puVar9; puVar1 = puVar1 + 2) {
              *puVar1 = 0;
              puVar1[1] = 0;
            }
          }
        }
        else {
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0;
              puVar1[1] = 0;
            }
            puVar1 = puVar1 + 2;
          }
        }
      }
    }
  }
  else if ((10 < uVar10) && (puVar7 = puVar9 + 0x14, puVar9 != puVar1)) {
    puVar9 = puVar7;
    if (puVar1 <= puVar7) {
      for (; puVar9 != puVar1; puVar9 = puVar9 + 2) {
      }
    }
    *(uint *)(param_1 + 300) = (int)puVar1 - ((int)puVar1 - (int)puVar7 & 0xfffffff8U);
  }
  *(undefined4 *)(param_1 + 0x134) = param_2;
  uVar10 = 0;
  if (*(int *)(param_1 + 300) - *(int *)(param_1 + 0x128) >> 3 != 0) {
    do {
      fn_001028d4(&local_48,(char *)&DAT_0039ec4c,uVar10);
      iVar13 = fn_00689210(*(undefined4 *)(param_1 + 0x70),&local_48);
      if (iVar13 != 0) {
        *(byte *)(iVar13 + 0x44) = *(byte *)(iVar13 + 0x44) & 0xfe;
      }
      *(int *)(*(int *)(param_1 + 0x128) + uVar10 * 8) = iVar13;
      fn_001028d4(&local_48,(char *)&DAT_0039ec58,uVar10);
      iVar13 = fn_00689210(*(undefined4 *)(param_1 + 0x70),&local_48);
      if (iVar13 != 0) {
        *(byte *)(iVar13 + 0x44) = *(byte *)(iVar13 + 0x44) & 0xfe;
      }
      iVar6 = uVar10 * 8;
      uVar10 = uVar10 + 1;
      *(int *)(*(int *)(param_1 + 0x128) + iVar6 + 4) = iVar13;
    } while (uVar10 < (uint)(*(int *)(param_1 + 300) - *(int *)(param_1 + 0x128) >> 3));
  }
  return;
}


