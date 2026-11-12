#include "0039f458_0039fb40.h"



void fn_0039fb40(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0082d404;
  uVar1 = param_1[0x52];
  uVar2 = uVar1;
  if ((uint)param_1[0x53] < uVar1) {
    do {
      uVar2 = uVar2 + 0x10;
    } while (uVar2 != param_1[0x53]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x54] - uVar1) >> 4,0);
  uVar1 = param_1[0x4e];
  uVar2 = uVar1;
  if ((uint)param_1[0x4f] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x4f]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x50] - uVar1) >> 2,0);
  uVar1 = param_1[0x4a];
  uVar2 = uVar1;
  if ((uint)param_1[0x4b] <= uVar1) {
    for (; uVar2 != param_1[0x4b]; uVar2 = uVar2 + 8) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x4c] - uVar1) >> 3,0);
  fn_002c471c(param_1);
  return;
}



void fn_0039fb3c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0082d404;
  uVar1 = param_1[0x52];
  uVar2 = uVar1;
  if ((uint)param_1[0x53] < uVar1) {
    do {
      uVar2 = uVar2 + 0x10;
    } while (uVar2 != param_1[0x53]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x54] - uVar1) >> 4,0);
  uVar1 = param_1[0x4e];
  uVar2 = uVar1;
  if ((uint)param_1[0x4f] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x4f]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x50] - uVar1) >> 2,0);
  uVar1 = param_1[0x4a];
  uVar2 = uVar1;
  if ((uint)param_1[0x4b] <= uVar1) {
    for (; uVar2 != param_1[0x4b]; uVar2 = uVar2 + 8) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x4c] - uVar1) >> 3,0);
  fn_002c471c(param_1);
  return;
}



undefined4 * fn_0039f9e8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_0082d404;
  fn_00301f50(puVar1 + 0x2c,0x78);
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4c] = 0;
  puVar1[0x4d] = 0;
  puVar1[0x4e] = 0;
  puVar1[0x4f] = 0;
  puVar1[0x50] = 0;
  puVar1[0x51] = 0;
  puVar1[0x52] = 0;
  puVar1[0x53] = 0;
  puVar1[0x54] = 0;
  uVar2 = 0;
  puVar1[0x55] = 0;
  do {
    fn_00229d54(puVar1 + uVar2 * 3 + 0x2c,3);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  return puVar1;
}



/* WARNING: Removing unreachable block (ram,0x0039f67c) */
/* WARNING: Removing unreachable block (ram,0x0039f698) */
/* WARNING: Removing unreachable block (ram,0x0039f64c) */
/* WARNING: Removing unreachable block (ram,0x0039f654) */
/* WARNING: Removing unreachable block (ram,0x0039f660) */
/* WARNING: Removing unreachable block (ram,0x0039f6c4) */
/* WARNING: Removing unreachable block (ram,0x0039f6f4) */
/* WARNING: Removing unreachable block (ram,0x0039f69c) */
/* WARNING: Removing unreachable block (ram,0x0039f6a4) */
/* WARNING: Removing unreachable block (ram,0x0039f6ac) */
/* WARNING: Removing unreachable block (ram,0x0039f6bc) */

void fn_0039f458(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint local_48;
  uint local_44 [8];
  
  puVar11 = (uint *)(param_1 + 0x148);
  puVar1 = *(undefined4 **)(param_1 + 0x14c);
  puVar9 = (undefined4 *)*puVar11;
  uVar16 = (int)puVar1 - (int)puVar9 >> 4;
  if (uVar16 < 10) {
    iVar12 = 10 - uVar16;
    if (iVar12 != 0) {
      uVar16 = iVar12 + uVar16;
      if ((uint)(*(int *)(param_1 + 0x150) - (int)puVar9 >> 4) < uVar16) {
        local_48 = uVar16;
        uVar4 = (int)(*(int *)(param_1 + 0x14c) - *puVar11) >> 4;
        local_44[0] = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
        if (local_44[0] < uVar4 + 0x20) {
          local_44[0] = uVar4 + 0x20;
        }
        puVar5 = local_44;
        if (local_44[0] <= uVar16) {
          puVar5 = &local_48;
        }
        uVar16 = *puVar5;
        puVar2 = (undefined4 *)fn_00100fc6(uVar16 << 4,0);
        puVar8 = puVar2;
        for (puVar9 = (undefined4 *)*puVar11; puVar9 != puVar1; puVar9 = puVar9 + 4) {
          if (puVar8 != (undefined4 *)0x0) {
            uVar13 = puVar9[1];
            uVar14 = puVar9[2];
            uVar15 = puVar9[3];
            *puVar8 = *puVar9;
            puVar8[1] = uVar13;
            puVar8[2] = uVar14;
            puVar8[3] = uVar15;
          }
          puVar8 = puVar8 + 4;
        }
        puVar9 = (undefined4 *)(((int)puVar1 - *puVar11 & 0xfffffff0) + (int)puVar2);
        for (iVar6 = iVar12; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9[2] = 0;
            puVar9[3] = 0;
          }
          puVar9 = puVar9 + 4;
        }
        puVar8 = *(undefined4 **)(param_1 + 0x14c);
        puVar9 = puVar2 + (iVar12 + ((int)((int)puVar1 - *puVar11) >> 4)) * 4;
        for (; puVar1 != puVar8; puVar1 = puVar1 + 4) {
          if (puVar9 != (undefined4 *)0x0) {
            uVar13 = puVar1[1];
            uVar14 = puVar1[2];
            uVar15 = puVar1[3];
            *puVar9 = *puVar1;
            puVar9[1] = uVar13;
            puVar9[2] = uVar14;
            puVar9[3] = uVar15;
          }
          puVar9 = puVar9 + 4;
        }
        uVar3 = *puVar11;
        uVar7 = *(uint *)(param_1 + 0x14c);
        uVar4 = uVar3;
        if (uVar7 < uVar3) {
          do {
            uVar4 = uVar4 + 0x10;
          } while (uVar4 != uVar7);
        }
        fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x150) - uVar3) >> 4,0);
        *(undefined4 **)(param_1 + 0x150) = puVar2 + uVar16 * 4;
        *(undefined4 **)(param_1 + 0x14c) = puVar2 + ((int)(uVar7 - uVar3) >> 4) * 4 + iVar12 * 4;
        *puVar11 = (uint)puVar2;
      }
      else {
        puVar9 = puVar1 + iVar12 * 4;
        *(undefined4 **)(param_1 + 0x14c) = puVar1 + iVar12 * 4;
        if (puVar9 < puVar1) {
          puVar10 = puVar1 + iVar12 * -4;
          puVar8 = puVar1;
          for (puVar2 = puVar10; puVar2 != puVar1; puVar2 = puVar2 + 4) {
            if (puVar8 != (undefined4 *)0x0) {
              uVar13 = puVar2[1];
              uVar14 = puVar2[2];
              uVar15 = puVar2[3];
              *puVar8 = *puVar2;
              puVar8[1] = uVar13;
              puVar8[2] = uVar14;
              puVar8[3] = uVar15;
            }
            puVar8 = puVar8 + 4;
          }
          puVar8 = puVar1;
          if (puVar1 < puVar10) {
            iVar12 = (int)puVar10 - (int)puVar1;
            if (0 < iVar12) {
              puVar8 = puVar10;
              puVar2 = puVar1;
              if (iVar12 * 0x8000000 < 0) {
                puVar8 = puVar10 + -4;
                puVar2 = puVar1 + -4;
                uVar13 = puVar10[-3];
                uVar14 = puVar10[-2];
                uVar15 = puVar10[-1];
                *puVar2 = *puVar8;
                puVar1[-3] = uVar13;
                puVar1[-2] = uVar14;
                puVar1[-1] = uVar15;
              }
              for (iVar12 = iVar12 >> 5; iVar12 != 0; iVar12 = iVar12 + -1) {
                uVar13 = puVar8[-3];
                uVar14 = puVar8[-2];
                uVar15 = puVar8[-1];
                puVar2[-4] = puVar8[-4];
                puVar2[-3] = uVar13;
                puVar2[-2] = uVar14;
                puVar2[-1] = uVar15;
                uVar13 = puVar8[-7];
                uVar14 = puVar8[-6];
                uVar15 = puVar8[-5];
                puVar2[-8] = puVar8[-8];
                puVar2[-7] = uVar13;
                puVar2[-6] = uVar14;
                puVar2[-5] = uVar15;
                puVar8 = puVar8 + -8;
                puVar2 = puVar2 + -8;
              }
            }
          }
          else {
            while (puVar1 != puVar10) {
              uVar13 = puVar10[-3];
              uVar14 = puVar10[-2];
              uVar15 = puVar10[-1];
              puVar8[-4] = puVar10[-4];
              puVar8[-3] = uVar13;
              puVar8[-2] = uVar14;
              puVar8[-1] = uVar15;
              puVar8 = puVar8 + -4;
              puVar10 = puVar10 + -4;
            }
          }
          if (puVar1 < puVar9) {
            iVar12 = (int)puVar9 - (int)puVar1;
            if (0 < iVar12) {
              puVar9 = puVar1;
              if (iVar12 * 0x8000000 < 0) {
                *puVar1 = 0;
                puVar1[1] = 0;
                puVar9 = puVar1 + 4;
                puVar1[2] = 0;
                puVar1[3] = 0;
              }
              for (iVar12 = iVar12 >> 5; iVar12 != 0; iVar12 = iVar12 + -1) {
                *puVar9 = 0;
                puVar9[1] = 0;
                puVar9[2] = 0;
                puVar9[3] = 0;
                puVar9[4] = 0;
                puVar9[5] = 0;
                puVar9[6] = 0;
                puVar9[7] = 0;
                puVar9 = puVar9 + 8;
              }
            }
          }
          else {
            for (; puVar1 != puVar9; puVar1 = puVar1 + 4) {
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
              puVar1[3] = 0;
            }
          }
        }
        else {
          for (; iVar12 != 0; iVar12 = iVar12 + -1) {
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
              puVar1[3] = 0;
            }
            puVar1 = puVar1 + 4;
          }
        }
      }
    }
  }
  else if ((10 < uVar16) && (puVar8 = puVar9 + 0x28, puVar9 != puVar1)) {
    puVar9 = puVar8;
    if (puVar1 <= puVar8) {
      for (; puVar9 != puVar1; puVar9 = puVar9 + 4) {
      }
    }
    *(uint *)(param_1 + 0x14c) = (int)puVar1 - ((int)puVar1 - (int)puVar8 & 0xfffffff0U);
  }
  *(undefined4 *)(param_1 + 0x154) = param_2;
  uVar16 = 0;
  if (*(int *)(param_1 + 0x14c) - *(int *)(param_1 + 0x148) >> 4 != 0) {
    do {
      fn_001028d4(&local_48,(char *)&DAT_0039f9a0,uVar16);
      iVar12 = fn_00688920(*(undefined4 *)(param_1 + 0x70),&local_48);
      if (iVar12 != 0) {
        *(byte *)(iVar12 + 0x44) = *(byte *)(iVar12 + 0x44) & 0xfe;
      }
      *(int *)(*(int *)(param_1 + 0x148) + uVar16 * 0x10) = iVar12;
      fn_001028d4(&local_48,(char *)&DAT_0039f9b4,uVar16);
      uVar13 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),&local_48);
      *(undefined4 *)(*(int *)(param_1 + 0x148) + uVar16 * 0x10 + 4) = uVar13;
      fn_001028d4(&local_48,(char *)&DAT_0039f9c8,uVar16);
      iVar12 = fn_00689210(*(undefined4 *)(param_1 + 0x70),&local_48);
      if (iVar12 != 0) {
        *(byte *)(iVar12 + 0x44) = *(byte *)(iVar12 + 0x44) & 0xfe;
      }
      *(int *)(*(int *)(param_1 + 0x148) + uVar16 * 0x10 + 8) = iVar12;
      fn_001028d4(&local_48,(char *)&DAT_0039f9d8,uVar16);
      uVar13 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),&local_48);
      iVar12 = uVar16 * 0x10;
      uVar16 = uVar16 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x148) + iVar12 + 0xc) = uVar13;
    } while (uVar16 < (uint)(*(int *)(param_1 + 0x14c) - *(int *)(param_1 + 0x148) >> 4));
  }
  return;
}


